# Lofree Flow Lite 84 蓝牙休眠修改

[English](README.md) | 简体中文

针对 **Lofree Flow Lite 84 / OE921 / 原厂 v1.66** 的固件分析、最小补丁与 macOS USB 刷写工具。目标是把蓝牙闲置休眠从约 **10 分钟延长至 30 分钟**，保留背光计时、按键唤醒、重连及其他连接模式的代码。

**当前结果：第二版已刷写成功，用户于 2026-10-24 确认修改已生效。** 实机确认来自用户反馈；项目未保存自动计时测量。详见[用户验证记录](output/radio-1800-v2/user-validation.md)。

## 当前有效固件

[OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin](output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin)

```text
大小：64,628 字节
SHA-256：c10ffdff79e7b55a1b3f688d5d83d600ba38a8cf5f32855276b9204c87a063dd
设备版本号：仍为 1.66
```

文件名中的 `UNTESTED` 是构建时的命名，保留它以对应哈希和刷写记录；当前状态以本 README、用户验证记录和[第二版刷写验证](output/radio-1800-v2/flash-verification.json)为准。

原厂镜像及第一版均保留。第一版只修改主控计时，刷写成功后仍在约 10 分钟断连，**不能当作已生效版本使用**。第二版额外修改主控发给无线侧的参数，随后用户确认问题解决。

## 修改原理

固件是 RV32 / 青稞 XW 程序。容器内的程序区通过重复 32 字节密钥逐字节加法编码；解码后可定位主控计时与无线侧命令。

| CPU 地址 | 原值 → 当前值 | 作用 |
| --- | --- | --- |
| `0x8b88` | 60 → 180 个约 10 秒周期 | 延长主控空闲倒计时 |
| `0x92b8` | 剩余周期门限 54 → 174 | 配合计数增加，保持原提前节电入口约 60 秒的触发时点 |
| `0x9216` | `a2=2` → `a2=7` | 无线侧 `0x0C` 命令参数高字节 |
| `0x9218` | `a1=0x58` → `a1=8` | 无线侧 `0x0C` 命令参数低字节 |

无线侧参数按低字节在前发送：`58 02`（600）→ `08 07`（1800）。调用仅位于模式值 1..5 的分支；模式 0（依据代码推断为 2.4G）和模式 10（有线）跳过该调用。

主控可以先进入低功耗，让无线侧继续维持蓝牙连接，因此只延长主控计时不足以完成目标。本次修改的是**主控发送的配置参数**，没有取得或改写独立无线模块固件。用户实测支持该参数控制空闲超时的判断，但尚无完整协议文档证明 `0x0C` 的全部语义。

相对原厂，程序区共改 6 字节；相对第一版新增 2 字节，计入校验后容器新增 8 字节差异。背光、唤醒、重连等其余代码保持原样；这不等同于已对所有连接模式做完整回归测试。

## 目录

| 路径 | 内容 |
| --- | --- |
| [tools/](tools/) | Python 编解码/补丁/验证、C 有限指令模拟、Swift HID 刷写、Ghidra 脚本 |
| [output/radio-1800-v2/](output/radio-1800-v2/) | 当前有效第二版、差异清单、验证和刷写证据 |
| [output/](output/) | 第一版历史产物和刷写记录；备份在 `output/backups/` |
| [research/firmware/original/](research/firmware/original/) | 原厂 OE921 v1.66 容器及哈希 |
| [research/firmware/analysis/](research/firmware/analysis/) | 解码程序、XW 反编译/反汇编及分析包装 ELF |
| [research/](research/) | 调查报告、官方网页快照、安装包分析和 ISA 来源 |
| `.tools/` | 本机项目内 REA、Ghidra，不纳入 Git |
| `.cache/` | 编译文件、临时分析目录，不纳入 Git |

`*.decoded.analysis-only.bin` 和 `*.elf` 仅用于分析，不能作为升级容器刷写。

## 环境与依赖

- 离线编解码、补丁与 Python 验证只用 Python 3 标准库，无需 `pip install`。
- C 指令验证使用 `clang`；Swift 刷写使用 macOS SDK、IOKit 与 CryptoKit，需要可用的 Xcode 或 Command Line Tools 环境。
- 已使用的逆向工具是项目内 REA 6.7.0、Ghidra 12.1.3；JDK 21 由 Homebrew 安装，通过 `/usr/libexec/java_home -v 21` 查找。已有二进制补丁的重建无需启动 REA/Ghidra。
- 继续反编译时使用 `tools/rea-project.sh` 选择本项目工具，并使用独立语言 `RISCV:LE:32:OE921_XW`。`tools/setup_oe921_xw.py` 用于配置该语言；普通 RV32 会误解部分 XW 压缩指令。

`.tools/` 和 `.cache/` 是当前机器的本地环境，不随 Git 克隆自动恢复。分析 ELF、已有反编译结果和构建脚本保留在项目中。

## 离线验证

以下命令从项目根目录运行，不访问键盘：

```sh
python3 -B tools/verify_oe921_radio_idle.py \
  output/OE921_v1.66_BT_idle_30min_UNTESTED.bin \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin
```

它校验容器、使用逐位 CRC 复核设备检查值，并执行调用点的有限机器码模拟：两版各覆盖 256 个模式值，确认只有模式 1..5 传入对应参数，其他程序字节保持不变。它不模拟真实无线模块。

需要重新运行主控计时验证时：

```sh
mkdir -p .cache
clang -O2 tools/verify_idle_machinecode.c -o .cache/verify_idle_machinecode
.cache/verify_idle_machinecode \
  research/firmware/analysis/oe921-v166-decoded.bin \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800.decoded.analysis-only.bin
```

验证覆盖主控重载、定时器 ISR 和提前节电门限；物理蓝牙休眠效果以实机反馈为准。

## 从原厂包重建

构建器锁定输入 SHA-256，并检查原指令；两个输出目录应事先不存在。第一步生成主控补丁中间版本，第二步补上无线侧参数。

```sh
python3 -B tools/patch_oe921_idle.py \
  research/firmware/original/CX53730_KB_OE921_V1.66_VID-05AC_PID-024F_1DBF7FB0_20250725_dll.bin \
  .cache/rebuild-main-mcu

python3 -B tools/patch_oe921_radio_idle.py \
  .cache/rebuild-main-mcu/OE921_v1.66_BT_idle_30min_UNTESTED.bin \
  .cache/rebuild-radio1800

python3 -B tools/verify_oe921_radio_idle.py \
  .cache/rebuild-main-mcu/OE921_v1.66_BT_idle_30min_UNTESTED.bin \
  .cache/rebuild-radio1800/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin
```

最终容器的 SHA-256 应与“当前有效固件”一致。不要删除旧目录来绕过输出保护；重复运行时选择新的输出目录。

## macOS USB 刷写

当前源码 [OE921Flash.swift](tools/OE921Flash.swift) 只接受上面列出的第二版 SHA-256，并检查唯一匹配的正常 USB 升级接口及 v1.66。正常端点为 `05ac:024f`，BOOT 端点为 `3554:f808`；进入 BOOT 后还须匹配原 USB 物理位置。

编译和预检命令：

```sh
mkdir -p .cache
swiftc -module-cache-path .cache/swift-module-cache \
  tools/OE921Flash.swift -o .cache/OE921Flash-radio1800
.cache/OE921Flash-radio1800 enumerate
.cache/OE921Flash-radio1800 plan \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin
```

`enumerate` 和 `plan` 不发送设备命令。真正的写入命令如下，仅在明确需要刷写时运行，键盘须保持 USB 数据连接；轨迹文件必须不存在：

```sh
.cache/OE921Flash-radio1800 flash \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin \
  output/radio-1800-v2/flash-next.jsonl
```

该命令会复位、擦除和写入设备。已验证的是正常固件进入 BOOT 的升级路径；工具尚不支持 BOOT-only 恢复，原厂回退及故障恢复未实测。原厂容器是升级包，不是从当前键盘读出的完整备份。

第二版已完成 1,764 包逐字节回显、设备检查通过及升级成功、正常 USB 接口恢复。项目没有完整 Flash 读回，刷写成功与精确休眠时间测量属于不同证据。

## 研究资料与证据

- [第二版修改说明](output/radio-1800-v2/README.zh-CN.md)：无线侧参数、差异和验证记录。
- [第二版差异清单](output/radio-1800-v2/patch-manifest.json)：地址、字节、哈希、校验值。
- [第二版刷写验证](output/radio-1800-v2/flash-verification.json)：传输与启动证据；其中时长未测字段反映刷写完成当时状态。
- [用户实机确认](output/radio-1800-v2/user-validation.md)：后续实际效果反馈。
- [编码与主控补丁报告](research/codec-and-idle-patch.md)：编解码、校验、ISA、第一版计时链和验证。
- [固件研究记录](research/firmware-findings.md)：原厂来源、安装包提取、逆向工具和历史调查。
- [隐藏配置排查](research/hidden-sleep-findings.md)：官方网页的“休眠时间”实际对应背光参数，不能用它替代蓝牙休眠修改。

原厂镜像 SHA-256：`20521b83834e7352fd2bed040293a599d6e37c1d80df185d003502b8ed801246`。这里只验证了指定 OE921/v1.66 镜像和当前实物，不将该补丁直接套用于 100 键版、其他型号或其他版本。

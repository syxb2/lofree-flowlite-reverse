# OE921 v1.66：蓝牙休眠 10 → 30 分钟固件研究

日期：2026-10-24。

## 当前结果

已还原固件程序区编码和整包检查值，完成 RISC-V / 青稞 XW 程序分析，并生成 30 分钟空闲计时的候选固件。
实际主控机器码的计时执行验证和 Ghidra 独立复核已通过。
2026-10-24 已按用户明确授权刷入键盘：1,764 包全部回显一致，设备返回检查/升级成功，恢复正常 USB 接口；蓝牙空闲时长尚未实测。
候选文件：`../output/OE921_v1.66_BT_idle_30min_UNTESTED.bin`。
最新算法、补丁和限制详见 [编码与休眠补丁报告](codec-and-idle-patch.md)。

以下保留早期调查经过；其中“编码和校验尚未还原”的阶段性阻碍已在最新分析中解决。

用户要求仅将蓝牙空闲休眠由 10 分钟改为 30 分钟。
背光时间、唤醒/重连逻辑、有线和 2.4G 行为均不在修改范围内。
早期静态分析没有打开 HID 设备或发送命令。随后用户授权刷写，已进行 HID 升级交互；没有修改系统配置。
用户安装的 REA、Ghidra 和 Homebrew Java 已核实；本轮在项目内编译了缺失的 ARM64 反编译组件。

## 原厂镜像及来源

原厂镜像单独保存在：

```text
research/firmware/original/CX53730_KB_OE921_V1.66_VID-05AC_PID-024F_1DBF7FB0_20250725_dll.bin
```

原始字节未修改。`original/SHA256SUMS` 保存其哈希。

- 来源配置：<https://www.lofree.tech/OE921/cfg.json>
- 实际固件 URL：<https://www.lofree.tech/OE921/bin/cid01_mid01/CX53730_KB_OE921_V1.66_VID-05AC_PID-024F_1DBF7FB0_20250725_dll.bin>
- 大小：64,628 字节。
- SHA-256：`20521b83834e7352fd2bed040293a599d6e37c1d80df185d003502b8ed801246`。

键盘页面配置中的路径并非可直接相对站点根目录下载的文件。
先前两个不含 `bin/` 的 URL 返回了 608 字节的 HTML，而 HTTP 状态仍为 200。
已识别这些响应并将其排除；分析目录保存一个 HTML 样本，不将其当作固件。

## 独立来源交叉验证

从[官网下载中心](https://www.lofree.co/pages/download-center)的 Dropbox 链接获取官方 Windows 包，仅作为数据解包，未运行安装程序或 DLL。

| 数据 | SHA-256 |
| --- | --- |
| 原始 Dropbox ZIP | `a7c0ad9a680086f946d0897ca0025f151eb3331163125b01c37cb08a5153ebc9` |
| Windows 安装程序 | `2cd74f316945535823036784bf54fc92e4ebde5258860959d647c13001379580` |
| 安装程序内 v1.66 容器 | `3366d4919c75b2449a3aaea254fed38c621fb9f9983143d33882c5a92e8173d0` |
| 两个来源共同的程序区 | `58c1c0374e7c6faba94eaf59ee3cbe4a36bca6f76aa82adbca2d60fd2828faec` |

恢复页与 Windows 包的容器仅在偏移 `0x00`、`0x15`、`0x16` 三个字节不同：
后两个是 CID/MID，分别为 0/0 和 1/1；前者是由此变化的容器头校验。
两份文件从偏移 `0x2000` 开始的 56,436 字节程序区逐字节相同。
这验证了镜像来源和版本内容，不等于验证修改后的固件可运行。

Inno 安装程序使用 Python 标准库 LZMA 静态解包，得到八个唯一固件镜像。
保留了安装程序、唯一参考镜像和提取结果，删除了本轮生成的重复 ZIP/RAR、中间解压流及重复镜像。
`vendor/embedded-*` 是多型号原厂分析资料，不是修改后的休眠固件。

## 容器与更新流程

依据本地保存的官方键盘页面 JS 中 `lg`、`ug`、`Pv`、`Go` 函数，并与实际镜像交叉检查：

| 项目 | 本镜像的值 |
| --- | --- |
| 标识 | `ComUsbUpgradeFile` |
| 声明的头长 | 720 字节 |
| 程序区偏移 | 8192 字节，即 `0x2000` |
| 程序区长度 | 56,436 字节 |
| 后续镜像 | 无 |
| 版本字段 | `0x0166`，按客户端规则显示 v1.66 |
| IC 字符串 | `CX53730` |
| 设备类型 | `0xD1` |
| 正常端点 | `05AC:024F` |
| BOOT 端点 | `3554:F808` |
| 固件声明的写入起始地址 | `0x08001600` |
| 写入末尾地址，不含末尾 | `0x0800F274` |
| 数据传输 | 1,764 个 32 字节以内的数据包；最后一个 20 字节 |
| 更新数据报告 | Report 6，49 字节包含 report ID |

头校验是 `0x55555555 - sum(bytes[8:720])`，本镜像结果为 `0x55552363`，与原文件一致。
这里名称中的 CRC 实际为求和补数，不是用于程序区的 CRC-32。

官方 JS 从程序区直接取出原始字节装入 USB 包，没有提供解码、重编码或更新整包校验的实现。
BOOT 页能够处理已经处于 BOOT 状态的设备；本轮没有验证异常固件运行后仍能重新进入 BOOT。
已检查的升级器没有可用于完整程序区读回验证的实现，不能声称已具备固件备份或任意失败恢复能力。

## 编码与校验的早期阻碍（现已解决）

程序区不呈现可直接解释的通常明文指令/向量，字节熵约 7.896 bit/byte，有重复的 32 字节块。
这说明需要进一步理解编码；它本身不能证明使用何种密码、处理器或具体解码位置。
`CX53730` 目前只能确认为包内 IC 名称，不能仅凭该字符串或写入地址确认实际 CPU 架构。

已进行有限的离线假设筛选：16 个常见重复块、6 种假定填充值、32 种旋转量、3 类 XOR/加法/旋转组合，共 9,216 组。
没有得到同时符合所用 Cortex-M 栈/复位向量启发式的候选。
该筛选既不穷尽编码算法，也不确认它一定是 Cortex-M，只能排除本次测试的这些假设。

准备下载命令携带整包检查值 `0xD9CBE71E`。
对原始程序区检查了以下常见算法，均不匹配该值：

- 常见 CRC-32 初始值/末尾异或的四种组合；
- 字节求和、其 `0x55555555` 补数；
- 小端 32 位字求和。

算法可能作用于解码后的数据，也可能采用其他处理；目前没有确定。
修改任意字节后仅更新头校验，并不能保证设备端通过整包检查。

## 验证与复查

只读容器分析：

```sh
python3 tools/inspect_oe921_firmware.py research/firmware/original/CX53730_KB_OE921_V1.66_VID-05AC_PID-024F_1DBF7FB0_20250725_dll.bin
```

从保留的官方安装程序重新静态提取参考镜像：

```sh
python3 tools/extract_keymapper_images.py 'research/firmware/vendor/Lofree Key Mapper_v1.1.1.3_2025.09.15_setup.exe' research/firmware/vendor
```

提取脚本锁定本次安装程序 SHA-256，确认 LZMA 流完整结束，再通过标识、边界、头校验识别镜像，并按内容哈希去重。
两个脚本均不会运行厂商程序或访问键盘。

已验证：

- 原厂容器头校验和长度；
- 安装程序与官网程序区一致性；
- 静态提取可重复得到八个唯一镜像；
- 检查工具拒绝 HTML、截断容器和头部翻转损坏。

机器可读证据：`firmware/analysis/oe921-v166-container.json`、`windows-images.json`、`provenance.json`。

## 破解前曾考虑的补充材料

最有价值的是该版本可分析的明文 BIN/HEX/ELF，或能够还原编码和校验逻辑的 BOOT 程序/技术说明。
也可以由厂商直接提供仅修改蓝牙休眠至 30 分钟的同型号固件。
拿到明文后仍需定位休眠分支、确认它不与背光和 2.4G 共用目标阈值，再制作最小差异补丁。
当时没有足够证据生成补丁；后续已仅用现有原厂镜像完成解码、校验还原和候选补丁，不再以厂商资料为前提。

## REA / Ghidra 实际验证与升级库分析

2026-10-24 补充：实际配套为 REA 6.7.0、Ghidra 12.1.3、Homebrew OpenJDK 21.0.13.0.2，均为本机 ARM64 运行。
REA 接受 12.1.x，验证基准为 12.1.4；12.1.3 的差异由 REA 如实记录为限制。

在项目的 Ghidra 源码目录编译缺失组件，没有安装全局依赖，也没有修改 shell 或 MCP 配置：

```sh
cd .tools/ghidra/Ghidra/Features/Decompiler/src/decompile/cpp
make -j6 ghidra_opt ARCH_TYPE='-arch arm64' OSDIR=mac_arm_64 ADDITIONAL_FLAGS='-w'
```

构建结果安装到 `.tools/ghidra/Ghidra/Features/Decompiler/os/mac_arm_64/decompile`。
`file` 确认为 Mach-O ARM64，`rea doctor --provider ghidra` 的目标范围检查全部通过。
之后通过 REA 成功反编译 `UsbUpgrade_Start`，并通过 Ghidra 脚本导出默认分析识别的 352 个非 thunk 函数。
伪代码不是原始源代码，函数成功导出也不保证恢复了全部类型、间接调用和函数边界。

以后在项目根目录可使用：

```sh
sh tools/rea-project.sh doctor --provider ghidra --json
sh tools/rea-project.sh decompile research/firmware/vendor/HIDUsb-x64-inno-restored.dll UsbUpgrade_Start --provider ghidra --format json
```

包装脚本只为当前进程选择本项目 REA/Ghidra 和注册的 JDK 21，将 Swift 模块缓存与 TMPDIR 指向项目。
REA 仍可能在系统 `/tmp` 创建其自行管理并清理的临时 Ghidra 会话。
在 Codex 沙盒中，REA 的进程管理检查可能报 EPERM；此次在沙盒外验证通过，不应把该错误误诊为 Java 未安装。

### 修正此前的 DLL 静态提取

此前保存的 `8664-61db43c-HIDUsb.dll` 是安装包 LZMA 流中的 PE 片段，仍带有 Inno 的 x86/x64 CALL/JMP 压缩预处理。
直接反编译会得到错误的相对调用目标。因此它应作为“未还原的提取中间件”保留，不作为可直接使用的 DLL。

依据 [Inno Setup 的 TransformCallInstructions 实现](https://github.com/jrsoftware/issrc/blob/main/Projects/Src/Compression.Base.pas)，
按文件内 64 KiB 分块逆变换，得到独立分析副本 `vendor/HIDUsb-x64-inno-restored.dll`。
未修改固件 BIN；该过程恢复的是 Windows DLL 的调用地址，不是固件程序区解密。

- 还原副本大小：144,896 字节。
- SHA-256：`0cb20c33f490cbedbc3c78b018c85955322c40d494632c7bebcf86f10aef5ba8`。
- SHA-1：`514e36c1e76fab3ffe9bf67cc86abc3a9bc669ab`。
- 逆变换后重新编码，逐字节回到原提取片段。
- 进一步解开安装包的两个元数据块，验证 14 个压缩数据块 CRC。
- 789 个文件位置记录中的第 408 项，程序流偏移 `0x61db43c`、长度 144,896、CALL/JMP 预处理标志和 SHA-1 均匹配。

以上校验确认还原副本与本次安装包记录一致；SHA-1 是安装包的完整性校验，不是发行者数字签名验证。
另一个 32 位 DLL 仍是未还原片段，本轮未以它的反编译结果作结论。

重新验证与生成另一份不存在的分析副本：

```sh
python3 tools/restore_inno_calls.py research/firmware/vendor/8664-61db43c-HIDUsb.dll /tmp/HIDUsb-verified-copy.dll --installer 'research/firmware/vendor/Lofree Key Mapper_v1.1.1.3_2025.09.15_setup.exe'
```

### 已追踪的升级路径及结论

| 函数地址 | 实际观察 |
| --- | --- |
| `0x180012fd0` / `UsbUpgrade_Start` | 初始化主/从镜像，调用解析函数，启动升级工作线程 |
| `0x180013f20` | 复制、解释容器头，调用头校验和组包函数 |
| `0x180013e10` | 计算并比较 `0x55555555 - sum(header[8:headerLength])` |
| `0x180014870` | 复制头中的准备命令；将 `file[0x2000:]` 逐块直接 `memcpy` 到升级数据包，每块至多 32 字节 |
| `0x180015b10` | 从组好的队列取包，经 `WriteFile` / `HidD_SetFeature` 发送，等待回包 |
| `0x180016410` | 比较回显、重发、移除已完成的数据包及处理状态回报 |
| `0x180013ba0` / `UsbUpgrade_FileSplit` | 按容器信息复制主/从镜像，没有固件解码处理 |

在该已追踪路径中，准备命令从头直接复制，程序区从文件原样复制。
没有发现由该路径计算 `0xD9CBE71E` 的实现，也没有发现程序区解密/重新编码步骤。
这比只分析官网 JS 提供了更强的证据，但不能外推为所有型号或厂商内部工具均无相关算法。

此外，名为 `ReadAllFlashData` 的导出实际上只调用 `ReadFalshData(0, 0xc0, 1)`，不足以证明它能备份完整程序区。
`ReadEncryption` 经 `0x18000f150` 生成随机挑战报文，并非给定固件 BIN 的离线解密接口。

上述是升级库路径的分析结论。随后已从固件自身的重复块和指令特征还原程序区编码及检查值，并生成主控计时补丁；见最新报告。

新增证据：

- `firmware/analysis/toolchain-verification.json`
- `firmware/analysis/hidusb-x64-inno-restoration.json`
- `firmware/analysis/rea-UsbUpgrade_Start.json`
- `firmware/analysis/hidusb-x64-functions.c`

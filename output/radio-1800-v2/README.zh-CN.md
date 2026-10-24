# OE921 v1.66 第二版：无线侧命令参数 600 → 1800

日期：2026-10-24。状态：已获用户授权并刷写成功，用户随后确认休眠延长目标已生效，见[用户验证记录](user-validation.md)。项目使用与重建入口为[根 README](../../README.md)。

北京时间 19:03:08–19:03:20 完成升级。1,764 个数据包全部逐字节回显一致、重试 0 次；设备返回检查通过（状态 5、结果 0）及升级成功（状态 136、结果 0），随后三个正常 USB HID 接口全部恢复，版本号仍为 1.66。
由实际发送轨迹独立重建的程序与本版镜像一致，确认包含参数 `08 07`（1800）。
没有执行完整 Flash 读回；时长效果来自用户实机反馈，未保存自动精确计时报告。

候选升级容器：`OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin`。

SHA-256：`c10ffdff79e7b55a1b3f688d5d83d600ba38a8cf5f32855276b9204c87a063dd`。

## 本次修改

在第一版固件基础上，仅调整主控发给无线侧的 `0x0C` 命令参数：

| CPU 地址 | 原指令 | 新指令 |
| --- | --- | --- |
| `0x9216` | `c.li a2,2` / `09 46` | `c.li a2,7` / `1d 46` |
| `0x9218` | `li a1,0x58` / `93 05 80 05` | `li a1,8` / `93 05 80 00` |

参数的传输顺序由原组包函数 `0x39fc` 决定，先低字节、再高字节：
`58 02` → `08 07`，按小端 16 位整数解释为 600 → 1800。
命令编号、组包函数、发送队列及调用条件不变。
模式值 1..5 执行该调用，模式 0（推断为 2.4G）及模式 10（有线）跳过它。

相对第一版，程序区只变 2 字节；加上设备 CRC 和容器头校验，容器总计变 8 字节。
第一版主控的 180 周期计时与提前低功耗门限补偿保留；背光、唤醒、重连及其余全部程序字节与第一版相同。
本次修改的是主控向无线侧发送的配置值，没有取得或改写无线模块自身的固件。

## 证据与限制

第一版传输及设备校验成功，但用户实测在 USB 拔除、背光未开启时，仍约 10 分钟后蓝牙断连。
第一版实际发送的镜像仍保留 `58 02`。
600 对应 10 分钟，因此推测此命令用于设置无线侧空闲秒数；没有协议文档或无线侧代码证明其单位和语义。
后续用户实机确认目标生效，为该推断补充了行为证据，但不等于完整协议定义。
本版构建阶段未访问设备；随后用户明确要求“刷写”，已执行 USB 升级。

验证记录：

- `radio-machinecode-verification.json`：执行调用点的实际机器码，对前后两版各覆盖全部 256 个模式值；仅模式 1..5 调用 `0x39fc`，参数由 `a1=0x58,a2=2` 改成 `a1=8,a2=7`。停在调用前，不模拟无线侧。
- `main-mcu-machinecode-verification.txt`：已有主控计时、ISR 与提前低功耗门限的有限执行验证在本版仍通过。
- `build-verification.json`：由原厂包重建第一版、再重建本版，结果逐字节一致；错误输入、重复补丁、损坏输入均被拒绝。
- `patch-manifest.json`：精确地址、字节差异、哈希及新设备检查值 `0x3b108f08`、头校验 `0x5555252a`。
- `SHA256SUMS`：候选容器和分析明文的哈希。
- `flash-verification.json`：实际刷写轨迹的独立重建及设备成功、正常接口返回的验证结果。
- `flash-attempt-1.jsonl`、`flash-attempt-1-console.jsonl`：本版完整升级报告轨迹及控制台记录。
- `post-flash-hid-enumeration.json`：刷写后只读枚举结果。
- [user-validation.md](user-validation.md)：后续用户确认效果的记录。

验证器还独立使用逐位 CRC 算法复核设备检查值，并检查除两字节参数指令和必要校验字段外的全部字节不变。
主控到无线侧的硬件总线发送内容、完整参数定义、精确秒数和故障恢复均未经过完整测量或测试。
`patch-manifest.json`、`radio-machinecode-verification.json` 与 `build-verification.json` 的未刷写/无设备访问状态只描述构建及离线验证阶段；刷写证据以 `flash-verification.json` 为准，其时长未测字段早于后续 `user-validation.md`，历史记录保持原样。

## 保留的文件与重建

第一版镜像位于 `../OE921_v1.66_BT_idle_30min_UNTESTED.bin`，SHA-256 仍为 `525dacbcb3729adfcb0ca7e45ecaae12051ebb6ce1462142d496d7b16a66e250`。
原厂包、第一版及刷写轨迹均未修改。修改前的上级说明备份为 `../backups/pre-radio1800-v2/README.zh-CN.md`。
保留镜像不代表已验证回退流程。本次仅将 Swift 刷写工具允许的固件哈希及对应提示改为本版，传输逻辑不变；旧源码与修改前说明保存在 `../backups/pre-radio1800-flash/`。
旧可执行文件 `.cache/OE921Flash` 保留，本次使用单独编译的 `.cache/OE921Flash-radio1800`。

从项目根目录重建时，输出目录必须不存在：

```sh
python3 -B tools/patch_oe921_radio_idle.py output/OE921_v1.66_BT_idle_30min_UNTESTED.bin output/radio-1800-rebuild
python3 -B tools/verify_oe921_radio_idle.py output/OE921_v1.66_BT_idle_30min_UNTESTED.bin output/radio-1800-rebuild/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin
```

`*.decoded.analysis-only.bin` 只是分析明文，不能作为升级容器刷写。

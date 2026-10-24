# Lofree Flow Lite 84 Bluetooth Sleep Timeout Patch

English | [简体中文](README-zh.md)

Firmware analysis, a minimal patch, and a macOS USB flashing tool for the **Lofree Flow Lite 84 / OE921 / stock firmware v1.66**. The goal is to extend the Bluetooth idle sleep timeout from approximately **10 minutes to 30 minutes**, preserving the code for backlight timing, key wake-up, reconnection, and other connection modes.

**Current result: revision 2 was flashed successfully, and the user confirmed that the patch worked on October 24, 2026.** Hardware validation is based on user feedback; no automated timing measurements were recorded. See the [user validation record](output/radio-1800-v2/user-validation.md).

## Current Firmware

[OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin](output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin)

```text
Size: 64,628 bytes
SHA-256: c10ffdff79e7b55a1b3f688d5d83d600ba38a8cf5f32855276b9204c87a063dd
Device version: unchanged at 1.66
```

The `UNTESTED` suffix dates from the initial build and is retained for consistency with the hashes and flash records. For the current status, refer to this README, the user validation record, and the [revision 2 flash verification](output/radio-1800-v2/flash-verification.json).

The stock image and revision 1 are preserved. Revision 1 only changed the main MCU timer; although flashing succeeded, Bluetooth still disconnected after approximately 10 minutes. **Revision 1 does not achieve the intended result.** Revision 2 additionally changes a parameter sent by the main MCU to the wireless side, after which the user confirmed that the issue was resolved.

## How the Patch Works

The firmware contains an RV32 / QingKe XW program. The program payload is encoded using byte-wise addition with a repeating 32-byte key. Decoding it makes it possible to locate the main MCU timer and commands sent to the wireless side.

| CPU Address | Original → Patched | Purpose |
| --- | --- | --- |
| `0x8b88` | 60 → 180 periods of approximately 10 seconds | Extend the main MCU idle countdown |
| `0x92b8` | Remaining-period threshold: 54 → 174 | Compensate for the longer countdown while preserving the existing early power-saving entry point at approximately 60 seconds |
| `0x9216` | `a2=2` → `a2=7` | High byte of the wireless-side `0x0C` command parameter |
| `0x9218` | `a1=0x58` → `a1=8` | Low byte of the wireless-side `0x0C` command parameter |

The parameter is sent low byte first: `58 02` (600) → `08 07` (1800). This call is only made for mode values 1..5. Mode 0 (inferred from the code to be 2.4 GHz) and mode 10 (wired) skip the call.

The main MCU can enter a low-power state while the wireless side maintains the Bluetooth connection, so extending the MCU timer alone is insufficient. This patch changes a **configuration parameter sent by the main MCU**; firmware for the separate wireless module was neither obtained nor modified. User testing supports the interpretation that this parameter controls the idle timeout, but the full semantics of `0x0C` have not been established through complete protocol documentation.

The program payload differs from stock by 6 bytes. Relative to revision 1, revision 2 changes 2 additional program bytes and 8 container bytes in total, including checksum updates. All remaining code, including backlight, wake-up, and reconnection logic, is unchanged. This does not imply that every connection mode has undergone full regression testing.

## Repository Layout

| Path | Contents |
| --- | --- |
| [tools/](tools/) | Python codec, patch builders and verifiers; bounded C instruction emulator; Swift HID flasher; Ghidra scripts |
| [output/radio-1800-v2/](output/radio-1800-v2/) | Current revision 2 firmware, patch manifest, verification results, and flash evidence |
| [output/](output/) | Historical revision 1 artifacts and flash records; backups are stored in `output/backups/` |
| [research/firmware/original/](research/firmware/original/) | Stock OE921 v1.66 container and hashes |
| [research/firmware/analysis/](research/firmware/analysis/) | Decoded program, XW decompilation/disassembly, and an ELF wrapper for analysis |
| [research/](research/) | Investigation reports, official website snapshots, installer analysis, and ISA sources |
| `.tools/` | Project-local REA and Ghidra installations; excluded from Git |
| `.cache/` | Compiled files and temporary analysis directories; excluded from Git |

`*.decoded.analysis-only.bin` and `*.elf` files are for analysis only and must not be flashed as upgrade containers.

## Environment and Dependencies

- Offline encoding/decoding, patch building, and Python verification use only the Python 3 standard library. No `pip install` is required.
- The C instruction verifier uses `clang`. The Swift flasher uses the macOS SDK, IOKit, and CryptoKit, and requires a working Xcode or Command Line Tools environment.
- The reverse-engineering environment used project-local REA 6.7.0 and Ghidra 12.1.3. JDK 21 was installed through Homebrew and is located using `/usr/libexec/java_home -v 21`. Rebuilding the existing binary patch does not require running REA or Ghidra.
- For further decompilation, use `tools/rea-project.sh` to select the project tools and the custom language `RISCV:LE:32:OE921_XW`. `tools/setup_oe921_xw.py` configures this language; standard RV32 decoding misinterprets some XW compressed instructions.

`.tools/` and `.cache/` contain machine-local files and are not restored automatically by cloning the repository. The analysis ELF, existing decompilation results, and build scripts are retained in the project.

## Offline Verification

Run the following command from the project root. It does not access the keyboard:

```sh
python3 -B tools/verify_oe921_radio_idle.py \
  output/OE921_v1.66_BT_idle_30min_UNTESTED.bin \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin
```

The verifier checks the container, independently verifies the device checksum with a bitwise CRC implementation, and performs bounded execution of the actual instructions at the call site. It covers all 256 mode values for both revisions, confirms that only modes 1..5 pass the respective parameters, and checks that all other program bytes are unchanged. It does not emulate the physical wireless module.

To rerun the main MCU timing verification:

```sh
mkdir -p .cache
clang -O2 tools/verify_idle_machinecode.c -o .cache/verify_idle_machinecode
.cache/verify_idle_machinecode \
  research/firmware/analysis/oe921-v166-decoded.bin \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800.decoded.analysis-only.bin
```

This verifies the main MCU reload logic, timer ISR, and early power-saving threshold. Physical Bluetooth sleep behavior is established through hardware feedback.

## Rebuilding from Stock Firmware

The builders enforce the expected input SHA-256 and check the original instructions. Neither output directory should already exist. The first step creates the intermediate MCU-only patch; the second adds the wireless-side parameter change.

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

The final container's SHA-256 must match the value in “Current Firmware.” Choose new output directories for subsequent builds rather than deleting old directories to bypass overwrite protection.

## USB Flashing on macOS

The current [OE921Flash.swift](tools/OE921Flash.swift) source accepts only the revision 2 SHA-256 listed above and requires a unique matching normal USB upgrade interface running v1.66. The normal endpoint is `05ac:024f`; the BOOT endpoint is `3554:f808`. After entering BOOT, the device must also match the original physical USB location.

Build and preflight commands:

```sh
mkdir -p .cache
swiftc -module-cache-path .cache/swift-module-cache \
  tools/OE921Flash.swift -o .cache/OE921Flash-radio1800
.cache/OE921Flash-radio1800 enumerate
.cache/OE921Flash-radio1800 plan \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin
```

`enumerate` and `plan` do not send device commands. The command below performs the actual flash operation. Run it only when flashing is explicitly intended, keep the keyboard connected over USB with a data-capable cable, and use a trace file path that does not already exist:

```sh
.cache/OE921Flash-radio1800 flash \
  output/radio-1800-v2/OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin \
  output/radio-1800-v2/flash-next.jsonl
```

This command resets, erases, and writes the device. The tested upgrade path starts from normally running firmware and enters BOOT. The tool does not yet support BOOT-only recovery; stock rollback and failure recovery have not been tested. The stock container is an upgrade package, not a complete backup read from the current keyboard.

Revision 2 completed 1,764 packets with byte-for-byte matching echoes, passed the device check, received upgrade success, and returned to normal USB interfaces. A full Flash readback has not been performed. Successful flashing and precise sleep-time measurements are separate forms of evidence.

## Research and Evidence

- [Revision 2 patch notes](output/radio-1800-v2/README.zh-CN.md): wireless-side parameter, differences, and verification records.
- [Revision 2 patch manifest](output/radio-1800-v2/patch-manifest.json): addresses, bytes, hashes, and checksums.
- [Revision 2 flash verification](output/radio-1800-v2/flash-verification.json): transfer and startup evidence. Its untested-timing field reflects the state immediately after flashing.
- [User hardware validation](output/radio-1800-v2/user-validation.md): subsequent feedback on actual behavior.
- [Codec and MCU patch report](research/codec-and-idle-patch.md): encoding/decoding, checksums, ISA, revision 1 timing paths, and verification.
- [Firmware research log](research/firmware-findings.md): stock firmware sources, installer extraction, reverse-engineering tools, and investigation history.
- [Hidden configuration investigation](research/hidden-sleep-findings.md): the official website's “sleep time” setting actually controls the backlight and cannot substitute for the Bluetooth sleep patch.

Stock image SHA-256: `20521b83834e7352fd2bed040293a599d6e37c1d80df185d003502b8ed801246`. Validation is limited to the specified OE921/v1.66 image and the current physical keyboard. Do not apply this patch directly to the 100-key model, other models, or other firmware versions.

#!/usr/bin/env python3
"""只读检查 ComUsbUpgradeFile；不访问设备，也不生成或刷写补丁。"""

import argparse
import collections
import hashlib
import json
import math
from pathlib import Path
import struct
import zlib
from oe921_codec import decode

PAYLOAD_OFFSET = 8192
STOCK_SHA256 = "20521b83834e7352fd2bed040293a599d6e37c1d80df185d003502b8ed801246"
FIELDS = [
    "file_id", "ic_name", "boot_input", "boot_output", "normal_input",
    "normal_output", "reset_command", "prepare_command", "data_command",
    "sensor_name", "product_name",
]


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def inspect(data):
    if len(data) < PAYLOAD_OFFSET:
        raise ValueError("文件短于 8192 字节容器前缀，拒绝当作有效固件")
    crc, header_length, length, next_image, version, device_type, cid, mid = struct.unpack_from("<5I3B", data)
    if header_length != 720:
        raise ValueError("非预期的容器头长度")
    expected_crc = (0x55555555 - sum(data[8:header_length])) & 0xffffffff
    if crc != expected_crc:
        raise ValueError("容器头校验失败")
    if not length or PAYLOAD_OFFSET + length != len(data) or next_image:
        raise ValueError("本工具只检查无尾随数据的单镜像容器")
    fields = {name: data[23 + index * 64:23 + (index + 1) * 64]
              for index, name in enumerate(FIELDS)}
    text = {name: value.split(b"\0", 1)[0].decode("ascii")
            for name, value in fields.items() if not name.endswith("command")}
    if text["file_id"] != "ComUsbUpgradeFile":
        raise ValueError("固件标识不匹配")

    def command(name):
        field = fields[name]
        size, feature = field[:2]
        if size < 1 or size > 62 or feature not in (0, 1):
            raise ValueError("命令字段结构无效")
        return {"wire_length": size, "feature": bool(feature),
                "report_id": field[2], "frame_hex": field[2:2 + size].hex(" ")}

    commands = {name: command(name) for name in FIELDS if name.endswith("command")}
    prepare = fields["prepare_command"]
    transfer = fields["data_command"]
    declared_length = int.from_bytes(prepare[7:11], "big")
    declared_check = int.from_bytes(prepare[11:15], "big")
    address = int.from_bytes(transfer[7:11], "big")
    payload = data[PAYLOAD_OFFSET:]
    count = collections.Counter(payload)
    check_candidates = {
        "zlib_crc32_payload": zlib.crc32(payload),
        "raw_crc32_payload": zlib.crc32(payload) ^ 0xffffffff,
        "crc32_init0_no_final_xor": zlib.crc32(payload, 0xffffffff) ^ 0xffffffff,
        "crc32_init0_final_xor": zlib.crc32(payload, 0xffffffff),
        "byte_sum": sum(payload) & 0xffffffff,
        "byte_sum_complement_55555555": (0x55555555 - sum(payload)) & 0xffffffff,
        "le_word_sum": sum(x[0] for x in struct.iter_unpack("<I", payload)) & 0xffffffff,
    }
    blocks = collections.Counter(payload[i:i + 32] for i in range(0, len(payload) - 31, 32))
    try:
        plain = decode(data)
        codec = {"checksum_verified": True, "codec": "byte_add_repeating_key_32",
                 "decoded_sha256": sha256(plain),
                 "decoded_crc32_inverse": f"0x{zlib.crc32(plain) ^ 0xffffffff:08x}"}
    except ValueError as error:
        codec = {"checksum_verified": False, "reason": str(error)}
    return {
        "file_size": len(data), "sha256": sha256(data),
        "matches_observed_official_oe921_v166": sha256(data) == STOCK_SHA256,
        "header": {
            "checksum": f"0x{crc:08x}", "checksum_valid": True,
            "header_length": header_length, "payload_offset": PAYLOAD_OFFSET,
            "payload_length": length, "next_image": next_image,
            "version_raw": f"0x{version:08x}",
            "version": f"{version >> 8}.{version & 255:02x}",
            "device_type": device_type, "cid": cid, "mid": mid, **text,
        },
        "commands": commands,
        "transfer_metadata": {
            "declared_payload_length": declared_length,
            "declared_check_value": f"0x{declared_check:08x}",
            "load_address": f"0x{address:08x}",
            "end_address_exclusive": f"0x{address + length:08x}",
            "data_chunk_count": (length + 31) // 32,
            "final_data_length": length % 32 or 32,
        },
        "payload": {
            "sha256": sha256(payload),
            "entropy_bits_per_byte": -sum(n / length * math.log2(n / length) for n in count.values()),
            "first_64_bytes_hex": payload[:64].hex(" "),
            "standard_check_candidates": {key: f"0x{value:08x}" for key, value in check_candidates.items()},
            "matching_standard_checks": [key for key, value in check_candidates.items() if value == declared_check],
            "repeated_blocks": [{"hex": block.hex(" "), "count": n}
                                for block, n in blocks.most_common(4)],
        },
        "decoded_program_check": codec,
        "inspection_scope": "Container and known codec only; task status is in provenance.json. No hardware access.",
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("image", type=Path)
    args = parser.parse_args()
    try:
        result = inspect(args.image.read_bytes())
    except (ValueError, UnicodeDecodeError, struct.error) as error:
        parser.exit(1, f"拒绝解析：{error}\n")
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()

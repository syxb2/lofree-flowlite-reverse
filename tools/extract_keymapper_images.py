#!/usr/bin/env python3
"""静态解包本次官方 Inno 安装程序中的固件，不运行任何厂商程序。"""

import argparse
import hashlib
import json
import lzma
from pathlib import Path
import re
import struct

SETUP_SHA256 = "2cd74f316945535823036784bf54fc92e4ebde5258860959d647c13001379580"
LZMA_OFFSET = 0xce004


def extract(installer, output):
    data = installer.read_bytes()
    if hashlib.sha256(data).hexdigest() != SETUP_SHA256:
        raise ValueError("安装程序哈希不同，拒绝套用该版本的静态流偏移")
    prop = data[LZMA_OFFSET]
    decoder = lzma.LZMADecompressor(format=lzma.FORMAT_RAW, filters=[{
        "id": lzma.FILTER_LZMA1,
        "dict_size": int.from_bytes(data[LZMA_OFFSET + 1:LZMA_OFFSET + 5], "little"),
        "lc": prop % 9, "lp": prop // 9 % 5, "pb": prop // 45,
    }])
    raw = decoder.decompress(data[LZMA_OFFSET + 5:], max_length=256 * 1024 * 1024)
    if not decoder.eof or len(raw) != 212474798:
        raise ValueError("静态解压未达到已知完整流，停止")
    output.mkdir(parents=True, exist_ok=True)
    images = []
    seen = set()
    for match in re.finditer(b"ComUsbUpgradeFile", raw):
        start = match.start() - 23
        if start < 0 or start + 8192 > len(raw):
            continue
        crc, header_length, length, next_image, version = struct.unpack_from("<5I", raw, start)
        if header_length != 720 or next_image or not 0 < length < 1000000:
            continue
        if (0x55555555 - sum(raw[start + 8:start + 720])) & 0xffffffff != crc:
            continue
        blob = raw[start:start + 8192 + length]
        if len(blob) != 8192 + length:
            continue
        digest = hashlib.sha256(blob).hexdigest()
        if digest in seen:
            continue
        seen.add(digest)
        name = f"embedded-{start:x}-v{version:x}.bin"
        path = output / name
        if path.exists() and path.read_bytes() != blob:
            raise ValueError(f"拒绝覆盖不同内容：{path}")
        path.write_bytes(blob)
        images.append({"file": name, "stream_offset": start, "sha256": digest,
                       "payload_sha256": hashlib.sha256(blob[8192:]).hexdigest(), "size": len(blob)})
    if len(images) != 8:
        raise ValueError("提取的唯一固件数量与已知包不符")
    return images


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("installer", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    print(json.dumps(extract(args.installer, args.output), ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()

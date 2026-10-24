#!/usr/bin/env python3
"""Reverse Inno's 5.3.9+ x86 CALL/JMP filter in a carved PE analysis copy.

Source algorithm: jrsoftware/issrc, Compression.Base.pas,
TransformCallInstructions (version 3). Processing resets at 64 KiB boundaries.
This does not execute the PE or establish its installer metadata checksum.
"""
import argparse
import hashlib
import json
import lzma
from pathlib import Path
import struct
import zlib

SETUP_SHA256 = '2cd74f316945535823036784bf54fc92e4ebde5258860959d647c13001379580'


def installer_checksum(installer: Path, restored: bytes) -> dict:
    """Check the known Inno 6.1.0 installer's CRC-framed file-location table."""
    data = installer.read_bytes()
    if hashlib.sha256(data).hexdigest() != SETUP_SHA256:
        raise ValueError('Installer differs from the inspected official package')
    position = 0x268D910
    if not data.startswith(b'Inno Setup Setup Data (6.1.0) (u)\x00', position):
        raise ValueError('Unexpected installer header')
    position += 64
    blocks = []
    crc_chunks = 0
    for _ in range(2):
        expected, size, compressed = struct.unpack_from('<IIB', data, position)
        if zlib.crc32(data[position + 4:position + 9]) != expected:
            raise ValueError('Header CRC mismatch')
        position += 9
        end = position + size
        if end > len(data):
            raise ValueError('Header exceeds installer')
        chunks = []
        while position < end:
            expected = struct.unpack_from('<I', data, position)[0]
            position += 4
            chunk = data[position:min(position + 4096, end)]
            position += len(chunk)
            if zlib.crc32(chunk) != expected:
                raise ValueError('Compressed header block CRC mismatch')
            chunks.append(chunk)
            crc_chunks += 1
        block = b''.join(chunks)
        if compressed:
            prop = block[0]
            decoder = lzma.LZMADecompressor(format=lzma.FORMAT_RAW, filters=[{
                'id': lzma.FILTER_LZMA1,
                'dict_size': int.from_bytes(block[1:5], 'little'),
                'lc': prop % 9, 'lp': prop // 9 % 5, 'pb': prop // 45,
            }])
            block = decoder.decompress(block[5:], max_length=8 * 1024 * 1024)
            if not decoder.eof or decoder.unused_data:
                raise ValueError('Incomplete metadata decompression')
        blocks.append(block)
    records = blocks[1]
    if len(records) % 74:
        raise ValueError('Unexpected Inno 6.1.0 file-location geometry')
    digest = hashlib.sha1(restored).digest()
    matches = []
    for offset in range(0, len(records), 74):
        size = struct.unpack_from('<Q', records, offset + 20)[0]
        flags = struct.unpack_from('<H', records, offset + 72)[0]
        if size == len(restored) and records[offset + 36:offset + 56] == digest:
            matches.append({
                'record_index': offset // 74,
                'stream_offset': struct.unpack_from('<Q', records, offset + 12)[0],
                'size': size, 'flags': flags,
                'call_filter_flag': bool(flags & 0x10),
                'sha1': digest.hex(),
            })
    if not matches or not all(match['call_filter_flag'] for match in matches):
        raise ValueError('Restored PE does not match an optimized installer file record')
    return {'installer_sha256': SETUP_SHA256, 'verified_crc_chunks': crc_chunks,
            'file_location_records': len(records) // 74, 'matches': matches}


def transform(data: bytes, encode: bool) -> bytes:
    buf = bytearray(data)
    for base in range(0, len(buf), 65536):
        end = min(base + 65536, len(buf)) - 4
        i = base
        while i < end:
            if buf[i] not in (0xE8, 0xE9):
                i += 1
                continue
            i += 1
            if buf[i + 3] in (0, 255):
                address = (i + 4) & 0xFFFFFF
                relative = int.from_bytes(buf[i:i + 3], 'little')
                if not encode:
                    relative = (relative - address) & 0xFFFFFFFF
                if relative & 0x800000:
                    buf[i + 3] ^= 255
                if encode:
                    relative += address
                buf[i:i + 3] = (relative & 0xFFFFFF).to_bytes(3, 'little')
            i += 4
    return bytes(buf)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('input', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--installer', type=Path)
    args = parser.parse_args()
    original = args.input.read_bytes()
    if original[:2] != b'MZ':
        raise SystemExit('Expected carved PE input')
    restored = transform(original, False)
    if transform(restored, True) != original:
        raise SystemExit('Inverse round-trip failed')
    verification = (installer_checksum(args.installer, restored)
                    if args.installer else None)
    with args.output.open('xb') as stream:
        stream.write(restored)
    print(json.dumps({
        'input': str(args.input), 'output': str(args.output),
        'input_sha256': hashlib.sha256(original).hexdigest(),
        'output_sha256': hashlib.sha256(restored).hexdigest(),
        'length': len(original),
        'changed_bytes': sum(a != b for a, b in zip(original, restored)),
        'roundtrip_ok': True,
        'installer_file_checksum_verified': verification is not None,
        'installer_verification': verification,
        'source': 'https://github.com/jrsoftware/issrc/blob/main/Projects/Src/Compression.Base.pas',
    }, indent=2))


if __name__ == '__main__':
    main()

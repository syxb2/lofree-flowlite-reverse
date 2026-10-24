#!/usr/bin/env python3
"""Decode and verify the observed CX53730 containers. No hardware access."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zlib

KEY = bytes.fromhex('91cde46996455a639a8cc94cc982231537382918f9f8e6e1555aa56bb8b2acbc')
PAYLOAD_OFFSET = 0x2000


def decode(container: bytes) -> bytes:
    if len(container) < PAYLOAD_OFFSET or not container.startswith(b'ComUsbUpgradeFile\x00', 23):
        raise ValueError('Not the observed container format')
    checksum, header_size, size = struct.unpack_from('<3I', container)
    if header_size != 720 or len(container) != PAYLOAD_OFFSET + size:
        raise ValueError('Unexpected container geometry')
    if checksum != (0x55555555 - sum(container[8:720])) & 0xFFFFFFFF:
        raise ValueError('Header checksum mismatch')
    plain = bytes((value - KEY[index % 32]) & 255
                  for index, value in enumerate(container[PAYLOAD_OFFSET:]))
    stored = int.from_bytes(container[0x1E2:0x1E6], 'big')
    actual = zlib.crc32(plain) ^ 0xFFFFFFFF
    if actual != stored:
        raise ValueError(f'Decoded firmware CRC mismatch: {actual:08x} != {stored:08x}')
    return plain


def encode_payload(plain: bytes) -> bytes:
    return bytes((value + KEY[index % 32]) & 255 for index, value in enumerate(plain))


def analysis_elf(plain: bytes) -> bytes:
    """RV32 analysis wrapper at the CPU's observed flash alias, not a flash image.

    Startup at 0xd410 initializes gp=0x20000820 and sp=0x20005000,
    copies 128 ROM bytes at 0xf1f4 to RAM, and clears BSS through 0x200044f0.
    Geometry is specific to the inspected OE921 v1.66 payload.
    """
    if len(plain) != 56436 or plain[:4] != bytes.fromhex('6fb01061'):
        raise ValueError('ELF mapping is only established for OE921 v1.66')
    text_offset = 0x100
    names = b'\x00.text\x00.data\x00.bss\x00.shstrtab\x00'
    names_offset = (text_offset + len(plain) + 3) & ~3
    sections_offset = (names_offset + len(names) + 3) & ~3
    image = bytearray(sections_offset + 5 * 40)
    ident = b'\x7fELF\x01\x01\x01' + bytes(9)
    struct.pack_into('<16sHHIIIIIHHHHHH', image, 0, ident, 2, 243, 1,
                     0x1600, 52, sections_offset, 1, 52, 32, 2, 40, 5, 4)
    struct.pack_into('<8I', image, 52, 1, text_offset, 0x1600, 0x1600,
                     len(plain), len(plain), 5, 4)
    struct.pack_into('<8I', image, 84, 1, text_offset + 0xDBF4,
                     0x20000000, 0xF1F4, 128, 0x5000, 6, 4)
    image[text_offset:text_offset + len(plain)] = plain
    image[names_offset:names_offset + len(names)] = names
    sections = [
        (0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        (1, 1, 6, 0x1600, text_offset, len(plain), 0, 0, 2, 0),
        (7, 1, 3, 0x20000000, text_offset + 0xDBF4, 128, 0, 0, 4, 0),
        (13, 8, 3, 0x20000080, 0, 0x4F80, 0, 0, 4, 0),
        (18, 3, 0, 0, names_offset, len(names), 0, 0, 1, 0),
    ]
    for index, section in enumerate(sections):
        struct.pack_into('<10I', image, sections_offset + index * 40, *section)
    return bytes(image)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('input', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--elf', type=Path)
    args = parser.parse_args()
    original = args.input.read_bytes()
    plain = decode(original)
    if encode_payload(plain) != original[PAYLOAD_OFFSET:]:
        raise ValueError('Codec round-trip failed')
    elf = analysis_elf(plain) if args.elf else None
    if args.output.exists() or (args.elf and args.elf.exists()):
        raise ValueError('Refusing to overwrite output')
    with args.output.open('xb') as stream:
        stream.write(plain)
    if args.elf:
        with args.elf.open('xb') as stream:
            stream.write(elf)
    print(json.dumps({'source': str(args.input), 'decoded_file': str(args.output),
                     'container_sha256': hashlib.sha256(original).hexdigest(),
                     'decoded_sha256': hashlib.sha256(plain).hexdigest(),
                     'decoded_size': len(plain), 'codec': 'byte_add_repeating_key_32',
                     'key_hex': KEY.hex(), 'checksum': 'CRC32_ISO_HDLC_xor_ffffffff',
                     'checksum_value': f'{zlib.crc32(plain) ^ 0xFFFFFFFF:08x}',
                     'roundtrip_verified': True, 'checksum_verified': True,
                     'elf_is_analysis_wrapper_only': args.elf is not None}, indent=2))


if __name__ == '__main__':
    main()

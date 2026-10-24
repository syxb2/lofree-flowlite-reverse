#!/usr/bin/env python3
"""Build the exact OE921 v1.66 30-minute idle candidate, without hardware I/O."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zlib
from oe921_codec import decode, encode_payload

ORIGINAL_SHA256 = '20521b83834e7352fd2bed040293a599d6e37c1d80df185d003502b8ed801246'
PATCHES = [
    # li a4,60 -> li a4,180: byte-sized ten-second reload count.
    (0x8B88, bytes.fromhex('1307c003'), bytes.fromhex('1307400b'),
     'Bluetooth idle reload: 60 to 180 ten-second periods'),
    # Preserve elapsed 60-second eligibility of the existing MCU-only idle path.
    # remaining <= 54 -> remaining <= 174, as the initial count grows by 120.
    (0x92B8, bytes.fromhex('13076003'), bytes.fromhex('1307e00a'),
     'Compensate existing early low-power gate; keep elapsed trigger unchanged'),
]


def build(original: bytes):
    if hashlib.sha256(original).hexdigest() != ORIGINAL_SHA256:
        raise ValueError('Refusing any firmware except the exact inspected original OE921 v1.66')
    plain = decode(original)
    modified = bytearray(plain)
    changes = []
    allowed = set()
    for address, before, after, reason in PATCHES:
        offset = address - 0x1600
        if modified[offset:offset + len(before)] != before:
            raise ValueError(f'Instruction precondition failed at {address:08x}')
        modified[offset:offset + len(after)] = after
        allowed.update(range(offset, offset + len(before)))
        changes.append({'cpu_address': f'0x{address:08x}',
                        'payload_offset': offset, 'container_offset': offset + 0x2000,
                        'before': before.hex(), 'after': after.hex(), 'reason': reason})
    differences = [index for index, (a, b) in enumerate(zip(plain, modified)) if a != b]
    if not set(differences) <= allowed:
        raise ValueError('Unexpected program difference')
    candidate = bytearray(original)
    candidate[0x2000:] = encode_payload(modified)
    check = zlib.crc32(modified) ^ 0xFFFFFFFF
    candidate[0x1E2:0x1E6] = check.to_bytes(4, 'big')
    struct.pack_into('<I', candidate, 0, (0x55555555 - sum(candidate[8:720])) & 0xFFFFFFFF)
    if decode(candidate) != modified:
        raise ValueError('Repacked firmware verification failed')
    file_differences = [i for i, (a, b) in enumerate(zip(original, candidate)) if a != b]
    allowed_file = {i + 0x2000 for i in allowed} | set(range(0, 4)) | set(range(0x1E2, 0x1E6))
    if not set(file_differences) <= allowed_file or len(candidate) != len(original):
        raise ValueError('Unexpected container difference')
    manifest = {
        'status': 'STATICALLY_VERIFIED_HARDWARE_UNTESTED',
        'model': 'OE921 Flow Lite 84', 'base_version_unchanged': '1.66',
        'original_sha256': ORIGINAL_SHA256,
        'candidate_sha256': hashlib.sha256(candidate).hexdigest(),
        'original_decoded_sha256': hashlib.sha256(plain).hexdigest(),
        'candidate_decoded_sha256': hashlib.sha256(modified).hexdigest(),
        'candidate_length': len(candidate), 'changes': changes,
        'decoded_different_byte_offsets': differences,
        'container_different_byte_offsets': file_differences,
        'device_check_before': original[0x1E2:0x1E6].hex(),
        'device_check_after': f'{check:08x}',
        'header_checksum_after': f'{struct.unpack_from("<I",candidate)[0]:08x}',
        'backlight_timer_code_unchanged': True,
        'wake_and_reconnect_code_unchanged': True,
        'mode_zero_reload_unchanged': 6,
        'mode_nonzero_reload_before': 60, 'mode_nonzero_reload_after': 180,
        'ten_second_tick_reload_unchanged': 10000,
        'early_gate_elapsed_ticks_unchanged': 60000,
        'limitations': [
            'Static verification establishes the main MCU counter, not physical Bluetooth radio behavior.',
            'No firmware flash, hardware observation, full-device backup or recovery test performed.',
            'The exact physical mode mapping and radio-side autonomous timeout need device validation.',
        ],
    }
    return bytes(candidate), bytes(modified), manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('original', type=Path)
    parser.add_argument('output_directory', type=Path)
    args = parser.parse_args()
    candidate, plain, manifest = build(args.original.read_bytes())
    args.output_directory.mkdir(parents=True, exist_ok=True)
    files = {
        'OE921_v1.66_BT_idle_30min_UNTESTED.bin': candidate,
        'OE921_v1.66_BT_idle_30min.decoded.analysis-only.bin': plain,
        'patch-manifest.json': (json.dumps(manifest, indent=2, ensure_ascii=False) + '\n').encode(),
    }
    if any((args.output_directory / name).exists() for name in files):
        raise ValueError('Refusing to overwrite generated artifacts')
    for name, content in files.items():
        with (args.output_directory / name).open('xb') as stream:
            stream.write(content)
    print(json.dumps(manifest, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()

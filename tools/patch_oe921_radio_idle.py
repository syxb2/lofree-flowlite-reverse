#!/usr/bin/env python3
"""Patch the observed radio command parameter in the exact first candidate. No device I/O."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zlib

from oe921_codec import decode, encode_payload

BASE_SHA256 = '525dacbcb3729adfcb0ca7e45ecaae12051ebb6ce1462142d496d7b16a66e250'
PATCHES = (
    (0x9216, bytes.fromhex('0946'), bytes.fromhex('1d46'),
     'c.li a2,2 -> c.li a2,7: command 0x0c parameter high byte'),
    (0x9218, bytes.fromhex('93058005'), bytes.fromhex('93058000'),
     'li a1,0x58 -> li a1,8: command 0x0c parameter low byte'),
)
IMAGE_NAME = 'OE921_v1.66_BT_idle_30min_radio1800_UNTESTED.bin'


def build(base: bytes):
    if hashlib.sha256(base).hexdigest() != BASE_SHA256:
        raise ValueError('Expected the exact first OE921 v1.66 idle candidate')
    plain = decode(base)
    modified = bytearray(plain)
    changes = []
    allowed = set()
    for address, before, after, reason in PATCHES:
        offset = address - 0x1600
        if modified[offset:offset + len(before)] != before:
            raise ValueError(f'Instruction precondition failed at {address:#x}')
        modified[offset:offset + len(before)] = after
        allowed.update(range(offset, offset + len(before)))
        changes.append(dict(cpu_address=hex(address), payload_offset=offset,
                            container_offset=offset + 0x2000,
                            before=before.hex(), after=after.hex(), reason=reason))
    differences = [i for i, (a, b) in enumerate(zip(plain, modified)) if a != b]
    if len(differences) != 2 or not set(differences) <= allowed:
        raise ValueError('Unexpected program difference')
    candidate = bytearray(base)
    candidate[0x2000:] = encode_payload(modified)
    check = zlib.crc32(modified) ^ 0xffffffff
    candidate[0x1e2:0x1e6] = check.to_bytes(4, 'big')
    struct.pack_into('<I', candidate, 0,
                     (0x55555555 - sum(candidate[8:720])) & 0xffffffff)
    if decode(candidate) != modified:
        raise ValueError('Repacked firmware verification failed')
    file_diff = [i for i, (a, b) in enumerate(zip(base, candidate)) if a != b]
    allowed_file = {i + 0x2000 for i in allowed} | set(range(4)) | set(range(0x1e2, 0x1e6))
    if len(candidate) != len(base) or not set(file_diff) <= allowed_file:
        raise ValueError('Unexpected container difference')
    manifest = dict(
        status='OFFLINE_CANDIDATE_NOT_FLASHED_OR_HARDWARE_TESTED',
        model='OE921 Flow Lite 84', base_version_unchanged='1.66',
        base_sha256=BASE_SHA256,
        candidate_sha256=hashlib.sha256(candidate).hexdigest(),
        candidate_decoded_sha256=hashlib.sha256(modified).hexdigest(),
        candidate_length=len(candidate), changes=changes,
        decoded_different_byte_offsets_from_base=differences,
        container_different_byte_offsets_from_base=file_diff,
        device_check_before=base[0x1e2:0x1e6].hex(),
        device_check_after=f'{check:08x}',
        header_checksum_after=f'{struct.unpack_from("<I", candidate)[0]:08x}',
        command='0x0c', parameter_bytes_before='58 02', parameter_bytes_after='08 07',
        parameter_le16_before=600, parameter_le16_after=1800,
        parameter_semantics='Suspected idle timeout in seconds; not confirmed by protocol documentation or hardware test',
        prior_main_mcu_patch_preserved=True,
        all_other_program_bytes_unchanged_from_base=True,
        device_io_performed=False,
    )
    return bytes(candidate), bytes(modified), manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('base', type=Path)
    parser.add_argument('output_directory', type=Path)
    args = parser.parse_args()
    candidate, plain, manifest = build(args.base.read_bytes())
    # A dedicated new directory preserves every earlier image and flash record.
    args.output_directory.mkdir(parents=True, exist_ok=False)
    files = {
        IMAGE_NAME: candidate,
        IMAGE_NAME.replace('_UNTESTED.bin', '.decoded.analysis-only.bin'): plain,
        'patch-manifest.json': (json.dumps(manifest, ensure_ascii=False, indent=2) + '\n').encode(),
    }
    for name, content in files.items():
        with (args.output_directory / name).open('xb') as stream:
            stream.write(content)
    print(json.dumps(manifest, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()

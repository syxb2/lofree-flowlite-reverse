#!/usr/bin/env python3
"""Offline verification of the radio-parameter candidate; no device access.

Executes the caller's actual instructions for all 256 mode values, stopping
before the call. Does not emulate the radio or prove the parameter's units.
Uses a bitwise CRC implementation independent of the builder's zlib call.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct


def require(condition, message):
    if not condition:
        raise ValueError(message)


def unpack(image):
    require(image[23:41] == b'ComUsbUpgradeFile\0', 'Container signature')
    header_check, header_size, size = struct.unpack_from('<3I', image)
    require(header_size == 720 and len(image) == 0x2000 + size, 'Container geometry')
    require(header_check == (0x55555555 - sum(image[8:720])) & 0xffffffff, 'Header checksum')
    key = bytes.fromhex('91cde46996455a639a8cc94cc982231537382918f9f8e6e1555aa56bb8b2acbc')
    plain = bytes((b - key[i % 32]) & 255 for i, b in enumerate(image[0x2000:]))
    crc = 0xffffffff
    for b in plain:
        crc ^= b
        for _ in range(8):
            crc = (crc >> 1) ^ (0xedb88320 if crc & 1 else 0)
    require(crc == int.from_bytes(image[0x1e2:0x1e6], 'big'), 'Device CRC')
    return plain


def signed(value, bits):
    return value - (1 << bits) if value & (1 << (bits - 1)) else value


def call_arguments(code, mode):
    regs = [0] * 32
    regs[8] = 0x20000320  # s0, byte at s0+14 is the mode.
    pc = 0x9204
    for _ in range(16):
        if pc == 0x9224:
            return None
        if pc == 0x9220:
            word = int.from_bytes(code[pc - 0x1600:pc - 0x1600 + 4], 'little')
            delta = ((word >> 31) << 20 | ((word >> 21) & 1023) << 1 |
                     ((word >> 20) & 1) << 11 | ((word >> 12) & 255) << 12)
            require(word & 0xfff == 0xef and pc + signed(delta, 21) == 0x39fc,
                    'Unexpected call target')
            return regs[10:13]
        offset = pc - 0x1600
        h = int.from_bytes(code[offset:offset + 2], 'little')
        if h & 3 != 3:
            q, f, rd = h & 3, h >> 13, (h >> 7) & 31
            imm = signed(((h >> 12) & 1) * 32 + ((h >> 2) & 31), 6)
            if q == 1 and f == 2:  # c.li
                regs[rd] = imm & 0xffffffff
            elif q == 1 and f == 0:  # c.addi
                regs[rd] = (regs[rd] + imm) & 0xffffffff
            elif q == 0 and f == 1:  # QingKe XW c.lbu
                rd, base = 8 + ((h >> 2) & 7), 8 + ((h >> 7) & 7)
                displacement = ((h >> 12) & 1) | ((h >> 10) & 3) * 8 | ((h >> 5) & 3) * 2
                require(regs[base] + displacement == 0x2000032e, 'Unexpected read')
                regs[rd] = mode
            else:
                raise ValueError(f'Unsupported compressed instruction at {pc:x}')
            pc += 2
        else:
            word = int.from_bytes(code[offset:offset + 4], 'little')
            op, rd, f, rs, rt = word & 127, (word >> 7) & 31, (word >> 12) & 7, (word >> 15) & 31, (word >> 20) & 31
            imm, next_pc = signed(word >> 20, 12), pc + 4
            if op == 0x13 and f == 0:
                regs[rd] = (regs[rs] + imm) & 0xffffffff
            elif op == 0x13 and f == 7:
                regs[rd] = regs[rs] & (imm & 0xffffffff)
            elif op == 0x37:
                regs[rd] = word & 0xfffff000
            elif op == 0x63 and f == 6:  # bltu
                delta = ((word >> 31) << 12 | ((word >> 7) & 1) << 11 |
                         ((word >> 25) & 63) << 5 | ((word >> 8) & 15) << 1)
                if regs[rs] < regs[rt]:
                    next_pc = pc + signed(delta, 13)
            else:
                raise ValueError(f'Unsupported instruction at {pc:x}')
            pc = next_pc
        regs[0] = 0
    raise ValueError('Instruction budget exceeded')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('base', type=Path)
    parser.add_argument('candidate', type=Path)
    args = parser.parse_args()
    base, candidate = args.base.read_bytes(), args.candidate.read_bytes()
    require(hashlib.sha256(base).hexdigest() ==
            '525dacbcb3729adfcb0ca7e45ecaae12051ebb6ce1462142d496d7b16a66e250', 'Base SHA256')
    old, new = unpack(base), unpack(candidate)
    expected = {0x9216 - 0x1600, 0x921b - 0x1600}
    require(len(old) == len(new), 'Program size')
    require({i for i, (a, b) in enumerate(zip(old, new)) if a != b} == expected, 'Program diff')
    require(len(base) == len(candidate), 'Container size')
    require(all(a == b or i in {j + 0x2000 for j in expected} | set(range(4)) | set(range(0x1e2, 0x1e6))
                for i, (a, b) in enumerate(zip(base, candidate))), 'Container diff')
    for image, low, high in ((old, 0x58, 2), (new, 8, 7)):
        for mode in range(256):
            expected_args = [0x200003b8, low, high] if 1 <= mode <= 5 else None
            require(call_arguments(image, mode) == expected_args, f'Mode {mode} arguments')
    print(json.dumps(dict(
        status='PASS_OFFLINE_ONLY', candidate_sha256=hashlib.sha256(candidate).hexdigest(),
        mode_values_executed_per_image=256, command_call_modes=[1, 2, 3, 4, 5],
        old_call_arguments=[hex(x) for x in [0x200003b8, 0x58, 2]],
        new_call_arguments=[hex(x) for x in [0x200003b8, 8, 7]],
        changed_program_bytes_from_base=2, all_other_program_bytes_identical=True,
        header_checksum_verified=True, device_crc_bitwise_verified=True,
        radio_firmware_or_bus_emulated=False, parameter_units_confirmed=False,
        device_io_performed=False,
    ), indent=2))


if __name__ == '__main__':
    main()

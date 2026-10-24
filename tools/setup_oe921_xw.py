#!/usr/bin/env python3
"""Create a separate project-local Ghidra language for the observed XW ISA.

XW semantics: Ghidra PR #6390 (ArcaneNibble), independently cross-checked
against LLVM RISCVInstrInfoXwch.td. Original RISCV language files stay intact.
"""
from pathlib import Path
import re
import shutil

root = Path(__file__).resolve().parent.parent
processors = root / '.tools/ghidra/Ghidra/Processors'
source = processors / 'RISCV/data/languages'
module = processors / 'OE921_RISCV_XW'
target = module / 'data/languages'
target.mkdir(parents=True, exist_ok=True)
(module / 'Module.manifest').write_text('')
for path in source.iterdir():
    if path.suffix in ('.sinc', '.cspec', '.pspec'):
        shutil.copyfile(path, target / path.name)
rvc = (target / 'riscv.rvc.sinc').read_text()
for name in ['fld', 'fldsp', 'fsd', 'fsdsp']:
    pattern = r':c\.' + name + r'\s[^\n]*\n\{[^}]*\}'
    rvc, count = re.subn(pattern, '# Replaced by QingKe XW opcode', rvc)
    if count != 1:
        raise ValueError('Unexpected compressed instruction source: ' + name)
(target / 'riscv.rvc.sinc').write_text(rvc)
registers = (target / 'riscv.reg.sinc').read_text()
if 'cop0810=' not in registers:
    registers = registers.replace('cop0710=(7,10)', 'cop0710=(7,10)\n  cop0810=(8,10)')
(target / 'riscv.reg.sinc').write_text(registers)
shutil.copyfile(root / 'research/sources/riscv.rv32xw.sinc', target / 'riscv.rv32xw.sinc')
spec = (source / 'riscv.ilp32d.slaspec').read_text()
spec += '\n@include "riscv.rv32xw.sinc"\n'
(target / 'oe921_xw.slaspec').write_text(spec)
(target / 'oe921_xw.ldefs').write_text('''<?xml version="1.0" encoding="UTF-8"?>
<language_definitions>
  <language processor="RISCV" endian="little" size="32" variant="OE921_XW"
    version="1.0" slafile="oe921_xw.sla" processorspec="RV32.pspec"
    id="RISCV:LE:32:OE921_XW">
    <description>OE921 analysis: RV32 with QingKe XW byte and halfword operations</description>
    <compiler name="gcc" spec="riscv32.cspec" id="gcc"/>
  </language>
</language_definitions>
''')
print(target)

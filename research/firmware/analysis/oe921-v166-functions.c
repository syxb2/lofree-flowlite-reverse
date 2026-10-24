// Input: /Users/baijiale/Code/lofree-flowlite-reverse/research/firmware/analysis/oe921-v166-analysis.elf
// SHA256: b57e247e19049f11f27cd76beac317d3db19d1815377e8a137d3b4d223de128f
// Language: RISCV:LE:32:default
// Pseudocode is analysis output, not recovered source.

// FUNCTION ram:00001600 entry
// THUNK true

// FUNCTION ram:00001700 FUN_ram_00001700
// THUNK false

void FUN_ram_00001700(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &observed_global_pointer;
                    /* WARNING: Could not recover jumptable at 0x0000172e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION ram:00001708 FUN_ram_00001708
// THUNK false

void FUN_ram_00001708(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &observed_global_pointer;
                    /* WARNING: Could not recover jumptable at 0x0000172e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION ram:00001716 FUN_ram_00001716
// THUNK false

void FUN_ram_00001716(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &observed_global_pointer;
                    /* WARNING: Could not recover jumptable at 0x0000172e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION ram:00001730 FUN_ram_00001730
// THUNK false

void FUN_ram_00001730(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &observed_global_pointer;
                    /* WARNING: Could not recover jumptable at 0x0000173a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION ram:0000173c FUN_ram_0000173c
// THUNK false

void FUN_ram_0000173c(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001754 FUN_ram_00001754
// THUNK false

void FUN_ram_00001754(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001760 FUN_ram_00001760
// THUNK false

void FUN_ram_00001760(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint extraout_t1;
  uint uVar2;
  uint extraout_a1;
  int extraout_a2;
  uint uVar3;
  uint *puVar4;
  int extraout_a4;
  int extraout_a5;
  
  gp = &observed_global_pointer;
  uVar1 = 0xf;
  if (0xf < param_3) {
    if (((uint)param_1 & 0xf) != 0) {
      (*(code *)(((uint)param_1 & 0xf) * 4 + 0x1796))();
      param_1 = (uint *)(extraout_a4 - (extraout_a5 + -0x10));
      param_3 = extraout_a2 + extraout_a5 + -0x10;
      uVar1 = extraout_t1;
      param_2 = extraout_a1;
      if (param_3 <= extraout_t1) goto LAB_ram_0000178a;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_2 & 0xff | (param_2 & 0xff) << 8;
      uVar2 = uVar2 | uVar2 << 0x10;
    }
    uVar3 = param_3 & 0xfffffff0;
    param_3 = param_3 & 0xf;
    puVar4 = (uint *)(uVar3 + (int)param_1);
    do {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (param_1 < puVar4);
    if (param_3 == 0) {
      return;
    }
  }
LAB_ram_0000178a:
                    /* WARNING: Could not recover jumptable at 0x00001796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_ram_0000179a + (uVar1 - param_3) * 4))();
  return;
}



// FUNCTION ram:000021bc FUN_ram_000021bc
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000021bc(void)

{
  gp = &observed_global_pointer;
  DAT_ram_4002340c = 0x40;
  DAT_ram_4002340d = 0x44;
  DAT_ram_4002340e = 0;
  _DAT_ram_40023410 = &DAT_ram_200001d8;
  _DAT_ram_40023414 = &DAT_ram_20000090;
  _DAT_ram_40023418 = &DAT_ram_20000218;
  _DAT_ram_4002341c = &DAT_ram_20000098;
  _DAT_ram_40023422 = 2;
  _DAT_ram_40023426 = 2;
  _DAT_ram_4002342a = 2;
  _DAT_ram_4002342e = 2;
  return;
}



// FUNCTION ram:00002360 FUN_ram_00002360
// THUNK false
// CALLS ram:0000d662 FUN_ram_0000d662
// CALLS ram:0000be88 FUN_ram_0000be88
// CALLS ram:000021bc FUN_ram_000021bc
// CALLS ram:00003334 FUN_ram_00003334

/* WARNING: Removing unreachable block (ram,0x000025a4) */
/* WARNING: Removing unreachable block (ram,0x00002586) */
/* WARNING: Removing unreachable block (ram,0x000023a6) */
/* WARNING: Removing unreachable block (ram,0x00002660) */
/* WARNING: Removing unreachable block (ram,0x00002614) */
/* WARNING: Removing unreachable block (ram,0x0000261c) */
/* WARNING: Removing unreachable block (ram,0x0000262a) */
/* WARNING: Removing unreachable block (ram,0x000025c2) */
/* WARNING: Removing unreachable block (ram,0x000025cc) */
/* WARNING: Removing unreachable block (ram,0x000025d4) */
/* WARNING: Removing unreachable block (ram,0x000025de) */
/* WARNING: Removing unreachable block (ram,0x0000260c) */
/* WARNING: Removing unreachable block (ram,0x00002644) */
/* WARNING: Removing unreachable block (ram,0x0000264c) */
/* WARNING: Removing unreachable block (ram,0x00002654) */
/* WARNING: Removing unreachable block (ram,0x0000266e) */
/* WARNING: Removing unreachable block (ram,0x00002686) */
/* WARNING: Removing unreachable block (ram,0x00002632) */
/* WARNING: Removing unreachable block (ram,0x00002636) */
/* WARNING: Removing unreachable block (ram,0x00002f86) */
/* WARNING: Removing unreachable block (ram,0x00002f90) */
/* WARNING: Removing unreachable block (ram,0x00002f9a) */
/* WARNING: Removing unreachable block (ram,0x00002f34) */
/* WARNING: Removing unreachable block (ram,0x00002e5c) */
/* WARNING: Removing unreachable block (ram,0x00002d66) */
/* WARNING: Removing unreachable block (ram,0x00002730) */
/* WARNING: Removing unreachable block (ram,0x00002978) */
/* WARNING: Removing unreachable block (ram,0x00002a08) */
/* WARNING: Removing unreachable block (ram,0x00002a24) */
/* WARNING: Removing unreachable block (ram,0x00002a40) */
/* WARNING: Removing unreachable block (ram,0x00002a4a) */
/* WARNING: Removing unreachable block (ram,0x00002a2e) */
/* WARNING: Removing unreachable block (ram,0x00002a12) */
/* WARNING: Removing unreachable block (ram,0x000023da) */
/* WARNING: Removing unreachable block (ram,0x00002c22) */
/* WARNING: Removing unreachable block (ram,0x00002db0) */
/* WARNING: Removing unreachable block (ram,0x00002e54) */
/* WARNING: Removing unreachable block (ram,0x00002e6a) */
/* WARNING: Removing unreachable block (ram,0x00002e80) */
/* WARNING: Removing unreachable block (ram,0x00002e88) */
/* WARNING: Removing unreachable block (ram,0x00002dbc) */
/* WARNING: Removing unreachable block (ram,0x00002e96) */
/* WARNING: Removing unreachable block (ram,0x00002ea4) */
/* WARNING: Removing unreachable block (ram,0x00002dc2) */
/* WARNING: Removing unreachable block (ram,0x00002dc8) */
/* WARNING: Removing unreachable block (ram,0x00002e34) */
/* WARNING: Removing unreachable block (ram,0x00002e28) */
/* WARNING: Removing unreachable block (ram,0x00002e30) */
/* WARNING: Removing unreachable block (ram,0x00002e3c) */
/* WARNING: Removing unreachable block (ram,0x00002e4c) */
/* WARNING: Removing unreachable block (ram,0x00002e46) */
/* WARNING: Removing unreachable block (ram,0x00002c2e) */
/* WARNING: Removing unreachable block (ram,0x00002c3a) */
/* WARNING: Removing unreachable block (ram,0x00002d9c) */
/* WARNING: Removing unreachable block (ram,0x00002da8) */
/* WARNING: Removing unreachable block (ram,0x00002c40) */
/* WARNING: Removing unreachable block (ram,0x00002c46) */
/* WARNING: Removing unreachable block (ram,0x00002c54) */
/* WARNING: Removing unreachable block (ram,0x00002c94) */
/* WARNING: Removing unreachable block (ram,0x00002ca2) */
/* WARNING: Removing unreachable block (ram,0x00002cb6) */
/* WARNING: Removing unreachable block (ram,0x00002d0a) */
/* WARNING: Removing unreachable block (ram,0x00002d20) */
/* WARNING: Removing unreachable block (ram,0x00002d10) */
/* WARNING: Removing unreachable block (ram,0x00002d24) */
/* WARNING: Removing unreachable block (ram,0x00002d16) */
/* WARNING: Removing unreachable block (ram,0x00002d1a) */
/* WARNING: Removing unreachable block (ram,0x00002d1c) */
/* WARNING: Removing unreachable block (ram,0x00002d28) */
/* WARNING: Removing unreachable block (ram,0x00002cbc) */
/* WARNING: Removing unreachable block (ram,0x00002ca8) */
/* WARNING: Removing unreachable block (ram,0x00002cac) */
/* WARNING: Removing unreachable block (ram,0x00002cb2) */
/* WARNING: Removing unreachable block (ram,0x00002cde) */
/* WARNING: Removing unreachable block (ram,0x00002d2c) */
/* WARNING: Removing unreachable block (ram,0x00002d3c) */
/* WARNING: Removing unreachable block (ram,0x00002d4a) */
/* WARNING: Removing unreachable block (ram,0x00002cec) */
/* WARNING: Removing unreachable block (ram,0x00002cf2) */
/* WARNING: Removing unreachable block (ram,0x00002d08) */
/* WARNING: Removing unreachable block (ram,0x00002d5e) */
/* WARNING: Removing unreachable block (ram,0x00002d78) */
/* WARNING: Removing unreachable block (ram,0x00002d8c) */
/* WARNING: Removing unreachable block (ram,0x00002d94) */
/* WARNING: Removing unreachable block (ram,0x00002460) */
/* WARNING: Removing unreachable block (ram,0x00002468) */
/* WARNING: Removing unreachable block (ram,0x0000246a) */
/* WARNING: Removing unreachable block (ram,0x00002476) */
/* WARNING: Removing unreachable block (ram,0x00002482) */
/* WARNING: Removing unreachable block (ram,0x0000268e) */
/* WARNING: Removing unreachable block (ram,0x000026e6) */
/* WARNING: Removing unreachable block (ram,0x000026f2) */
/* WARNING: Removing unreachable block (ram,0x000026fc) */
/* WARNING: Removing unreachable block (ram,0x00002706) */
/* WARNING: Removing unreachable block (ram,0x00002710) */
/* WARNING: Removing unreachable block (ram,0x0000271a) */
/* WARNING: Removing unreachable block (ram,0x00002724) */
/* WARNING: Removing unreachable block (ram,0x00002694) */
/* WARNING: Removing unreachable block (ram,0x0000269a) */
/* WARNING: Removing unreachable block (ram,0x000026a6) */
/* WARNING: Removing unreachable block (ram,0x000026b4) */
/* WARNING: Removing unreachable block (ram,0x000026be) */
/* WARNING: Removing unreachable block (ram,0x000026c8) */
/* WARNING: Removing unreachable block (ram,0x000026d2) */
/* WARNING: Removing unreachable block (ram,0x00002486) */
/* WARNING: Removing unreachable block (ram,0x000028d4) */
/* WARNING: Removing unreachable block (ram,0x000028e2) */
/* WARNING: Removing unreachable block (ram,0x000028ec) */
/* WARNING: Removing unreachable block (ram,0x000028f6) */
/* WARNING: Removing unreachable block (ram,0x000028fe) */
/* WARNING: Removing unreachable block (ram,0x0000290e) */
/* WARNING: Removing unreachable block (ram,0x0000295e) */
/* WARNING: Removing unreachable block (ram,0x00002966) */
/* WARNING: Removing unreachable block (ram,0x0000297c) */
/* WARNING: Removing unreachable block (ram,0x0000298e) */
/* WARNING: Removing unreachable block (ram,0x00002998) */
/* WARNING: Removing unreachable block (ram,0x00002986) */
/* WARNING: Removing unreachable block (ram,0x0000296c) */
/* WARNING: Removing unreachable block (ram,0x00002972) */
/* WARNING: Removing unreachable block (ram,0x00002916) */
/* WARNING: Removing unreachable block (ram,0x0000291e) */
/* WARNING: Removing unreachable block (ram,0x00002926) */
/* WARNING: Removing unreachable block (ram,0x0000292e) */
/* WARNING: Removing unreachable block (ram,0x00002934) */
/* WARNING: Removing unreachable block (ram,0x0000293e) */
/* WARNING: Removing unreachable block (ram,0x00002940) */
/* WARNING: Removing unreachable block (ram,0x00002944) */
/* WARNING: Removing unreachable block (ram,0x00002952) */
/* WARNING: Removing unreachable block (ram,0x0000274e) */
/* WARNING: Removing unreachable block (ram,0x00002896) */
/* WARNING: Removing unreachable block (ram,0x000028c6) */
/* WARNING: Removing unreachable block (ram,0x000028a2) */
/* WARNING: Removing unreachable block (ram,0x000028b8) */
/* WARNING: Removing unreachable block (ram,0x000028a4) */
/* WARNING: Removing unreachable block (ram,0x000028aa) */
/* WARNING: Removing unreachable block (ram,0x0000275a) */
/* WARNING: Removing unreachable block (ram,0x0000275e) */
/* WARNING: Removing unreachable block (ram,0x00002798) */
/* WARNING: Removing unreachable block (ram,0x00002764) */
/* WARNING: Removing unreachable block (ram,0x00002820) */
/* WARNING: Removing unreachable block (ram,0x00002770) */
/* WARNING: Removing unreachable block (ram,0x00002830) */
/* WARNING: Removing unreachable block (ram,0x00002846) */
/* WARNING: Removing unreachable block (ram,0x00002856) */
/* WARNING: Removing unreachable block (ram,0x0000285e) */
/* WARNING: Removing unreachable block (ram,0x0000284e) */
/* WARNING: Removing unreachable block (ram,0x00002838) */
/* WARNING: Removing unreachable block (ram,0x0000283e) */
/* WARNING: Removing unreachable block (ram,0x00002778) */
/* WARNING: Removing unreachable block (ram,0x00002780) */
/* WARNING: Removing unreachable block (ram,0x00002866) */
/* WARNING: Removing unreachable block (ram,0x0000287e) */
/* WARNING: Removing unreachable block (ram,0x00002886) */
/* WARNING: Removing unreachable block (ram,0x0000286e) */
/* WARNING: Removing unreachable block (ram,0x00002788) */
/* WARNING: Removing unreachable block (ram,0x000027a6) */
/* WARNING: Removing unreachable block (ram,0x0000276a) */
/* WARNING: Removing unreachable block (ram,0x000027aa) */
/* WARNING: Removing unreachable block (ram,0x000027ba) */
/* WARNING: Removing unreachable block (ram,0x000027d0) */
/* WARNING: Removing unreachable block (ram,0x000027e4) */
/* WARNING: Removing unreachable block (ram,0x000027ec) */
/* WARNING: Removing unreachable block (ram,0x000029a0) */
/* WARNING: Removing unreachable block (ram,0x000029ae) */
/* WARNING: Removing unreachable block (ram,0x00002bd4) */
/* WARNING: Removing unreachable block (ram,0x00002bde) */
/* WARNING: Removing unreachable block (ram,0x00002be8) */
/* WARNING: Removing unreachable block (ram,0x00002bf2) */
/* WARNING: Removing unreachable block (ram,0x00002bfc) */
/* WARNING: Removing unreachable block (ram,0x00002c06) */
/* WARNING: Removing unreachable block (ram,0x00002c14) */
/* WARNING: Removing unreachable block (ram,0x00002ab0) */
/* WARNING: Removing unreachable block (ram,0x00002aba) */
/* WARNING: Removing unreachable block (ram,0x00002ac2) */
/* WARNING: Removing unreachable block (ram,0x00002aca) */
/* WARNING: Removing unreachable block (ram,0x00002ad2) */
/* WARNING: Removing unreachable block (ram,0x00002ada) */
/* WARNING: Removing unreachable block (ram,0x00002ae2) */
/* WARNING: Removing unreachable block (ram,0x00002aee) */
/* WARNING: Removing unreachable block (ram,0x00002afa) */
/* WARNING: Removing unreachable block (ram,0x00002a5c) */
/* WARNING: Removing unreachable block (ram,0x00002a68) */
/* WARNING: Removing unreachable block (ram,0x00002a72) */
/* WARNING: Removing unreachable block (ram,0x00002a7c) */
/* WARNING: Removing unreachable block (ram,0x00002a86) */
/* WARNING: Removing unreachable block (ram,0x00002a90) */
/* WARNING: Removing unreachable block (ram,0x00002a9a) */
/* WARNING: Removing unreachable block (ram,0x00002aa4) */
/* WARNING: Removing unreachable block (ram,0x00002b1c) */
/* WARNING: Removing unreachable block (ram,0x00002b26) */
/* WARNING: Removing unreachable block (ram,0x00002b30) */
/* WARNING: Removing unreachable block (ram,0x00002b3a) */
/* WARNING: Removing unreachable block (ram,0x00002b44) */
/* WARNING: Removing unreachable block (ram,0x00002b54) */
/* WARNING: Removing unreachable block (ram,0x00002b5e) */
/* WARNING: Removing unreachable block (ram,0x00002b68) */
/* WARNING: Removing unreachable block (ram,0x00002b8c) */
/* WARNING: Removing unreachable block (ram,0x00002bb0) */
/* WARNING: Removing unreachable block (ram,0x00002bba) */
/* WARNING: Removing unreachable block (ram,0x00002b96) */
/* WARNING: Removing unreachable block (ram,0x00002b72) */
/* WARNING: Removing unreachable block (ram,0x00002b4e) */
/* WARNING: Removing unreachable block (ram,0x000029bc) */
/* WARNING: Removing unreachable block (ram,0x000029c6) */
/* WARNING: Removing unreachable block (ram,0x000029d0) */
/* WARNING: Removing unreachable block (ram,0x000029da) */
/* WARNING: Removing unreachable block (ram,0x000029e4) */
/* WARNING: Removing unreachable block (ram,0x000029f0) */
/* WARNING: Removing unreachable block (ram,0x000029fe) */
/* WARNING: Removing unreachable block (ram,0x0000248a) */
/* WARNING: Removing unreachable block (ram,0x000029ea) */
/* WARNING: Removing unreachable block (ram,0x00002b10) */
/* WARNING: Removing unreachable block (ram,0x00002ae6) */
/* WARNING: Removing unreachable block (ram,0x000026de) */
/* WARNING: Removing unreachable block (ram,0x00002736) */
/* WARNING: Removing unreachable block (ram,0x00002746) */
/* WARNING: Removing unreachable block (ram,0x00002956) */
/* WARNING: Removing unreachable block (ram,0x00002d80) */
/* WARNING: Removing unreachable block (ram,0x00002d86) */
/* WARNING: Removing unreachable block (ram,0x00002d70) */
/* WARNING: Removing unreachable block (ram,0x00002e72) */
/* WARNING: Removing unreachable block (ram,0x0000280c) */
/* WARNING: Removing unreachable block (ram,0x00002eb2) */
/* WARNING: Removing unreachable block (ram,0x00002ebe) */
/* WARNING: Removing unreachable block (ram,0x00002ece) */
/* WARNING: Removing unreachable block (ram,0x00002ed6) */
/* WARNING: Removing unreachable block (ram,0x0000263e) */
/* WARNING: Removing unreachable block (ram,0x00002f0e) */
/* WARNING: Removing unreachable block (ram,0x00002f2e) */
/* WARNING: Removing unreachable block (ram,0x00002816) */
/* WARNING: Removing unreachable block (ram,0x00002f20) */
/* WARNING: Removing unreachable block (ram,0x00002f28) */
/* WARNING: Removing unreachable block (ram,0x000023d2) */
/* WARNING: Removing unreachable block (ram,0x000024a2) */
/* WARNING: Removing unreachable block (ram,0x000024a6) */
/* WARNING: Removing unreachable block (ram,0x000024b8) */
/* WARNING: Removing unreachable block (ram,0x000024be) */
/* WARNING: Removing unreachable block (ram,0x000024ca) */
/* WARNING: Removing unreachable block (ram,0x0000256e) */
/* WARNING: Removing unreachable block (ram,0x000024d6) */
/* WARNING: Removing unreachable block (ram,0x000024dc) */
/* WARNING: Removing unreachable block (ram,0x000024f0) */
/* WARNING: Removing unreachable block (ram,0x000024f8) */
/* WARNING: Removing unreachable block (ram,0x0000253a) */
/* WARNING: Removing unreachable block (ram,0x00002550) */
/* WARNING: Removing unreachable block (ram,0x00002f44) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00002360(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  gp = &observed_global_pointer;
  DAT_ram_200000ac._1_1_ = (undefined1)_DAT_ram_400234c0;
  ram0x200000ae = (undefined7)_DAT_ram_400234e0;
  DAT_ram_200000b5 = (undefined1)((ulonglong)_DAT_ram_400234e0 >> 0x38);
  if ((param_4 & 2) == 0) {
    _DAT_ram_400234c0 = CONCAT71(ram0x200000ae,DAT_ram_200000ac._1_1_);
  }
  else {
    DAT_ram_40023406 = 2;
  }
  return param_1;
}



// FUNCTION ram:000031ec FUN_ram_000031ec
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be6a FUN_ram_0000be6a

/* WARNING: Removing unreachable block (ram,0x0000320c) */
/* WARNING: Removing unreachable block (ram,0x00003216) */
/* WARNING: Removing unreachable block (ram,0x00003220) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000031ec(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00003334 FUN_ram_00003334
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00003334(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_fa4;
  
  gp = &observed_global_pointer;
  _DAT_ram_200000b6 = (undefined6)((ulonglong)in_fa4 >> 0x10);
  _DAT_ram_200000b4 = (ushort)(byte)in_fa4;
  iVar3 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + iVar3);
    puVar2 = (undefined8 *)((int)&DAT_ram_200002d8 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x11);
  return;
}



// FUNCTION ram:000036e2 FUN_ram_000036e2
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001716 FUN_ram_00001716

void FUN_ram_000036e2(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint extraout_a2;
  int extraout_a2_00;
  int extraout_a4;
  uint uVar6;
  int extraout_a5;
  undefined8 uVar7;
  
  gp = &observed_global_pointer;
  uVar7 = FUN_ram_00001716();
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  *(undefined1 *)(extraout_a4 * 0x23 + iVar4 + 0x583) = 1;
  uVar6 = 0;
  while ((uVar6 & 0xff) < extraout_a2) {
    *(char *)((uVar6 & 0xff) * 0x23 + iVar4 + uVar6 + 1 + 0x583) =
         (char)uVar6 + (char)((ulonglong)uVar7 >> 0x20);
    uVar6 = uVar6 + 1;
  }
  uVar3 = FUN_ram_000082b6(*(undefined8 *)(iVar4 + 0x20),iVar4 * 0x24 + 0x583,extraout_a2 + 1 & 0xff
                          );
  *(undefined1 *)(extraout_a2_00 * 0x23 + iVar4 + extraout_a2 + 1 + 0x583) = uVar3;
  bVar1 = *(byte *)(iVar5 + 0x20);
  *(byte *)(extraout_a5 * 0x23 + iVar4 + 0x582) = bVar1;
  cVar2 = *(char *)(iVar5 + 0x21);
  *(char *)((uint)bVar1 * 0x23 + iVar4 + 0x5a4) = cVar2;
  *(undefined8 *)(iVar4 + 0x20) = *(undefined8 *)(iVar4 + 0x20);
  if (0x13 < (byte)(cVar2 + 1U)) {
    *(undefined1 *)(iVar4 + 1) = 0;
  }
  *(undefined8 *)(iVar4 + 8) = *(undefined8 *)(iVar4 + 0x20);
  *(undefined1 *)(iVar4 + 0xafc) = 1;
  return;
}



// FUNCTION ram:00003798 FUN_ram_00003798
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00003798(void)

{
  undefined4 uVar1;
  undefined1 extraout_a1;
  undefined8 extraout_fa2;
  
  gp = &observed_global_pointer;
  uVar1 = FUN_ram_00001730();
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 1;
  DAT_ram_200003b4._0_1_ = 6;
  DAT_ram_200003b4._1_1_ = 6;
  DAT_ram_20000395 = extraout_a1;
  unique0x1000001d = extraout_fa2;
  FUN_ram_000036e2(uVar1,&DAT_ram_20000394,4);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:000037dc FUN_ram_000037dc
// THUNK false
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000be6a FUN_ram_0000be6a

/* WARNING: Removing unreachable block (ram,0x000037e8) */

void FUN_ram_000037dc(void)

{
  int iVar1;
  int iVar2;
  uint extraout_a4;
  int extraout_a5;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  gp = &observed_global_pointer;
  uVar5 = FUN_ram_00001716();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  uVar3 = (extraout_a5 + 1) % 0x14;
  iVar4 = iVar1 + 1;
  iVar1 = iVar1 + 0xb;
  if (uVar3 == extraout_a4) {
    if ((uVar3 & 0xff) != 0) {
      *(undefined8 *)(iVar2 + 0x20) = *(undefined8 *)(iVar2 + 0x20);
    }
    FUN_ram_0000be50(iVar4,7);
    FUN_ram_0000be50(iVar1,0x14);
  }
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 2;
  FUN_ram_0000be6a(&DAT_ram_20000395,iVar4,7);
  FUN_ram_0000be6a(0x2000039c,iVar1,0x14);
  DAT_ram_200003b4._0_1_ = 0x1e;
  DAT_ram_200003b4._1_1_ = 6;
  FUN_ram_000036e2(iVar2,&DAT_ram_20000394,0x1c);
  return;
}



// FUNCTION ram:000038c0 FUN_ram_000038c0
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_000038c0(void)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  if (DAT_ram_2000032f != '\x10') {
    uVar1 = FUN_ram_00001730();
    FUN_ram_0000be50(&DAT_ram_20000394,0x22);
    DAT_ram_20000394 = 6;
    DAT_ram_200003b4._2_6_ =
         (undefined6)((ulonglong)*(undefined8 *)PTR_DAT_ram_20004390_ram_20000044 >> 0x10);
    DAT_ram_200003b4._0_2_ = CONCAT11(0xb,(char)*(undefined8 *)PTR_DAT_ram_20004390_ram_20000044);
    FUN_ram_000036e2(uVar1,&DAT_ram_20000394,4);
    FUN_ram_00001754();
    return;
  }
  return;
}



// FUNCTION ram:00003908 FUN_ram_00003908
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be6a FUN_ram_0000be6a

void FUN_ram_00003908(int param_1)

{
  undefined1 extraout_a4;
  int extraout_a5;
  undefined8 uVar1;
  
  gp = &observed_global_pointer;
  if (*(char *)(param_1 + 0xb03) != '\x01') {
    uVar1 = FUN_ram_00001730();
    *(undefined1 *)(extraout_a5 + -0x4fd) = extraout_a4;
    FUN_ram_0000bd0e();
    FUN_ram_0000be50(&DAT_ram_20000394,0x22);
    DAT_ram_20000394 = 8;
    FUN_ram_0000be6a(&DAT_ram_20000395,(int)((ulonglong)uVar1 >> 0x20),0x11);
    DAT_ram_200003b4._0_1_ = 0x17;
    DAT_ram_200003b4._1_1_ = 6;
    FUN_ram_000036e2((int)uVar1,&DAT_ram_20000394,0x15);
    FUN_ram_00001754();
    return;
  }
  return;
}



// FUNCTION ram:00003964 FUN_ram_00003964
// THUNK false
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000be6a FUN_ram_0000be6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00003964(void)

{
  undefined4 extraout_a3;
  undefined8 extraout_fa2;
  undefined8 extraout_fa3;
  undefined8 uVar1;
  
  gp = &observed_global_pointer;
  uVar1 = FUN_ram_00001716();
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 9;
  DAT_ram_200003b4 = extraout_fa3;
  unique0x10000030 = extraout_fa2;
  FUN_ram_0000be6a(&DAT_ram_20000397,(int)((ulonglong)uVar1 >> 0x20),0x1b,extraout_a3);
  DAT_ram_200003b4 = CONCAT62(DAT_ram_200003b4._2_6_,0x620);
  FUN_ram_000036e2((int)uVar1,&DAT_ram_20000394,0x1e);
  return;
}



// FUNCTION ram:000039bc FUN_ram_000039bc
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_000039bc(void)

{
  undefined4 uVar1;
  undefined1 extraout_a1;
  
  gp = &observed_global_pointer;
  uVar1 = FUN_ram_00001730();
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 10;
  DAT_ram_200003b4._0_1_ = 6;
  DAT_ram_200003b4._1_1_ = 0x20;
  DAT_ram_20000395 = extraout_a1;
  FUN_ram_000036e2(uVar1,&DAT_ram_20000394,4);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:00003a42 FUN_ram_00003a42
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_00003a42(void)

{
  undefined4 uVar1;
  undefined1 extraout_a1;
  
  gp = &observed_global_pointer;
  uVar1 = FUN_ram_00001730();
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 0xd;
  DAT_ram_200003b4._0_1_ = 6;
  DAT_ram_200003b4._1_1_ = 6;
  DAT_ram_20000395 = extraout_a1;
  FUN_ram_000036e2(uVar1,&DAT_ram_20000394,4);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:00003a7e FUN_ram_00003a7e
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_00003a7e(void)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  uVar1 = FUN_ram_00001730();
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 0xe;
  DAT_ram_200003b4._0_1_ = 6;
  DAT_ram_200003b4._1_1_ = 10;
  FUN_ram_000036e2(uVar1,&DAT_ram_20000394,4);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:00003b26 FUN_ram_00003b26
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:000043ea FUN_ram_000043ea
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00003334 FUN_ram_00003334
// CALLS ram:0000bd62 FUN_ram_0000bd62

/* WARNING: Removing unreachable block (ram,0x00004254) */
/* WARNING: Removing unreachable block (ram,0x00004260) */
/* WARNING: Removing unreachable block (ram,0x00003fde) */
/* WARNING: Removing unreachable block (ram,0x00004288) */
/* WARNING: Removing unreachable block (ram,0x00004268) */
/* WARNING: Removing unreachable block (ram,0x00004074) */
/* WARNING: Removing unreachable block (ram,0x0000424c) */
/* WARNING: Removing unreachable block (ram,0x00004278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00003b26(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int extraout_a1;
  int extraout_a1_00;
  int iVar5;
  undefined1 *puVar6;
  uint extraout_a4;
  uint extraout_a5;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int extraout_a5_00;
  int extraout_a5_01;
  int extraout_a5_02;
  undefined8 extraout_fa0;
  undefined8 extraout_fa0_00;
  undefined8 extraout_fa1;
  undefined8 extraout_fa1_00;
  undefined8 uVar12;
  undefined8 extraout_fa1_01;
  undefined8 uVar13;
  undefined8 uVar14;
  
  gp = &observed_global_pointer;
  puVar3 = (undefined8 *)FUN_ram_00001716();
  puVar4 = puVar3;
  iVar5 = extraout_a1;
  uVar14 = extraout_fa0;
  uVar12 = extraout_fa1;
  if (((((extraout_a5 & 0xff) != extraout_a4) && (*(char *)((int)puVar3 + 0xafc) != '\0')) &&
      (*(char *)((int)puVar3 + 0xafa) == '\0')) &&
     (((*(char *)((int)puVar3 + 0xafb) == '\0' && (*(char *)((int)puVar3 + 0xaff) == '\0')) &&
      ((*(char *)(puVar3 + 0x160) == '\0' && ((_DAT_ram_40011008 >> 2 & 1) != 0)))))) {
    _DAT_ram_40010814 = 0x800000;
    FUN_ram_000043ea(extraout_fa0,*puVar3,&DAT_ram_40004400,
                     (undefined1 *)(extraout_a1 * 0x23 + 0x583 + (int)puVar3),
                     *(undefined1 *)((int)puVar3 + 0x11800582));
    *(undefined1 *)((int)puVar3 + 0xafa) = 1;
    *(undefined1 *)((int)puVar3 + 0x5c6) = 0;
    *(undefined1 *)((int)puVar3 + 0xafc) = 0;
    puVar4 = (undefined8 *)FUN_ram_0000bd62(1);
    _DAT_ram_40010820 = 0x80;
    *(undefined1 *)((int)puVar3 + 0xafd) = 100;
    *(undefined1 *)((int)puVar3 + 0xafe) = 0;
    iVar5 = extraout_a1_00;
    uVar14 = extraout_fa0_00;
    uVar12 = extraout_fa1_00;
  }
  puVar6 = (undefined1 *)0x1000;
  puVar7 = puVar3 + 0x200;
  bVar1 = *(byte *)((int)puVar3 + 0xafb);
  if (bVar1 == 0) goto LAB_ram_00003d48;
  *(undefined1 *)((int)puVar3 + 0xafb) = 0;
  puVar7 = (undefined8 *)(uint)*(byte *)((int)puVar3 + (uint)bVar1 * 0x23 + 0x83f);
  if (puVar7 != (undefined8 *)0x2) goto switchD_ram_00003c3c_caseD_6;
  puVar8 = (undefined8 *)(*(byte *)((int)puVar3 + 0x886) - 1 & 0xff);
  puVar7 = puVar8;
  if ((undefined8 *)0xf < puVar8) goto switchD_ram_00003c3c_caseD_6;
  puVar9 = (undefined8 *)(&switchD_ram:00003c3c::switchdataD_ram_0000d900)[(int)puVar8];
  puVar7 = puVar9;
  switch(puVar8) {
  default:
    bVar1 = *(byte *)((int)puVar3 + 0x1db341);
    goto LAB_ram_00003c56;
  case (undefined8 *)0x3:
    puVar6 = (undefined1 *)0x1;
    bVar1 = *(byte *)((int)puVar3 + 0x1db341);
    DAT_ram_20000118._3_1_ = 1;
LAB_ram_00003c56:
    puVar9 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)(uint)bVar1;
    if ((undefined8 *)(uint)bVar1 == (undefined8 *)0x0) goto LAB_ram_00003cfe;
    break;
  case (undefined8 *)0x5:
    puVar9 = (undefined8 *)&DAT_ram_20000320;
    uVar12 = DAT_ram_200003e8;
    if (iVar5 != 0x10) {
      uVar13 = *puVar3;
      puVar6 = (undefined1 *)0x23;
      puVar7 = puVar9;
      if (*(char *)((int)puVar3 + 0xa71) != '\0') break;
      if ((iVar5 != 10) && (DAT_ram_2000018a == '\0')) {
        DAT_ram_20000ee2 = 1;
        uVar13 = *puVar3;
        DAT_ram_200003a8 = uVar13;
      }
      puVar6 = (undefined1 *)0x1000;
      puVar4 = (undefined8 *)(uint)*(byte *)((int)puVar3 + 0x23843);
      DAT_ram_20000330._3_1_ = *(undefined1 *)((int)puVar3 * 0x24 + 0x4ec844);
      DAT_ram_20000388 = *puVar3;
      uVar12 = *puVar3;
      DAT_ram_20000338 = *puVar3;
      DAT_ram_20000358 = uVar13;
      DAT_ram_20000370 = uVar14;
      DAT_ram_200003d0 = DAT_ram_20000388;
      DAT_ram_200003f0 = DAT_ram_20000388;
    }
    goto LAB_ram_00003cfe;
  case (undefined8 *)0x6:
    break;
  case (undefined8 *)0x7:
    puVar7 = (undefined8 *)(uint)*(byte *)((int)puVar3 + 0x1db341);
    if (*(byte *)((int)puVar3 + 0x1db341) == 0) {
      puVar9 = puVar3 + 0x200;
      if (*(char *)((int)puVar3 + 0xb03) != '\0') {
        *(undefined1 *)((int)puVar3 + 0xb03) = 0;
        puVar9 = (undefined8 *)&DAT_ram_200000b4;
        DAT_ram_200000b5 = 0;
      }
      goto LAB_ram_00003cfe;
    }
    break;
  case (undefined8 *)0x9:
    bVar1 = *(byte *)((int)puVar3 + 0x1db342);
    DAT_ram_20000338._0_4_ = CONCAT13(bVar1,(undefined3)DAT_ram_20000338);
    puVar4 = (undefined8 *)FUN_ram_0000be50(0x2000033c,0x1b);
    uVar10 = 0;
    puVar11 = &DAT_ram_20000320;
    while( true ) {
      puVar9 = (undefined8 *)(uVar10 & 0xff);
      puVar6 = puVar11 + 1;
      if ((undefined8 *)(uint)bVar1 <= puVar9) break;
      puVar4 = (undefined8 *)(uVar10 + 4);
      uVar10 = uVar10 + 1;
      *(undefined8 *)(puVar11 + 0x79) = *puVar3;
      puVar11 = puVar6;
    }
    if (puVar9 == (undefined8 *)0x3) {
      puVar9 = (undefined8 *)0x1;
      uVar12 = extraout_fa1_01;
      DAT_ram_20000348 = DAT_ram_20000380;
    }
    else {
      uVar12 = extraout_fa1_01;
      if (puVar9 == (undefined8 *)0x5) {
        puVar9 = (undefined8 *)0x1;
        uVar12 = extraout_fa1_01;
        DAT_ram_20000368 = DAT_ram_20000380;
      }
    }
    goto LAB_ram_00003cfe;
  case (undefined8 *)0xa:
    DAT_ram_20000118._2_1_ = 1;
LAB_ram_00003cfe:
    uVar10 = (uint)((int)puVar9 + 1) & 0xff;
    *puVar3 = *puVar3;
    if (uVar10 == 0x14) {
      *(undefined1 *)puVar3 = 0;
    }
    uVar14 = puVar3[4];
    if (uVar10 != 0x14) {
      *(undefined1 *)((int)puVar3 + 0xafc) = 1;
    }
    DAT_ram_20000320 = 1;
    goto LAB_ram_00003d30;
  case (undefined8 *)0xd:
    puVar6 = (undefined1 *)(uint)*(byte *)((int)puVar3 + 0x23841);
    puVar7 = (undefined8 *)0x23;
    if (*(byte *)((int)puVar3 + 0x23841) == 0) {
      DAT_ram_20000338 = *puVar3;
      DAT_ram_20003608 = *puVar3;
      DAT_ram_200035e8 = *puVar3;
      register0x00003068 = *puVar3;
      puVar6 = (undefined1 *)
               (uint)*(byte *)((int)puVar3 +
                              (uint)*(byte *)((int)puVar3 +
                                             (uint)*(byte *)((int)puVar3 +
                                                            (uint)*(byte *)((int)puVar3 +
                                                                           (uint)*(byte *)((int)
                                                  puVar3 + 0x842) * 0x23 + 0x843) * 0x23 + 0x844) *
                                             0x23 + 0x845) * 0x23 + 0x846);
      puVar9 = (undefined8 *)(uint)*(byte *)((int)puVar3 + (int)puVar6 * 0x23 + 0x847);
      DAT_ram_20000358 = *puVar3;
      unique0x100003df = *puVar3;
      goto LAB_ram_00003cfe;
    }
  }
switchD_ram_00003c3c_caseD_6:
  if (((uint)puVar7 & 0xff) == 0) {
    *puVar3 = *puVar3;
    uVar14 = *puVar3;
    if (*(char *)((int)puVar3 + 0xb03) != '\0') {
      *(undefined1 *)((int)puVar3 + 0xb03) = 0;
      DAT_ram_200000b5 = 0;
    }
    DAT_ram_20000320 = 0;
  }
  else {
    uVar14 = puVar3[1];
    puVar3[1] = uVar14;
    *(undefined1 *)((int)puVar3 + 0xafc) = 1;
  }
LAB_ram_00003d30:
  puVar3[5] = uVar14;
  *(undefined1 *)((int)puVar3 + 0xafd) = 0;
  puVar7 = (undefined8 *)(uint)*(byte *)((int)puVar3 + 0xafe);
  *(undefined1 *)((int)puVar3 + 0xafe) = 0;
LAB_ram_00003d48:
  puVar8 = (undefined8 *)(uint)*(byte *)((int)puVar3 + 0xaff);
  if (*(byte *)((int)puVar3 + 0xaff) == 0) goto LAB_ram_00003e0e;
  *(undefined1 *)((int)puVar3 + 0xaff) = 0;
  DAT_ram_200000b6 = 0;
  puVar11 = (undefined1 *)((int)puVar8 * 0x23 + (int)puVar3);
  if (puVar11 == (undefined1 *)0x3) {
    *(undefined1 *)(puVar3 + 0x160) = 1;
    *(undefined1 *)(puVar3 + 0x66) = 1;
    *(undefined1 *)((int)puVar3 * 0x24 + 0x1123) = 0xf0;
    *(undefined1 *)((int)puVar3 * 0x4ed + 0x1f93a) = 0;
    *(undefined1 *)((int)puVar3 * 0xac68 + 0x44b43d) = 0;
    *(undefined1 *)((int)puVar3 * 0x179239 + 0x9644584) = 0;
    uVar2 = FUN_ram_000082b6(puVar3[8],(undefined1 *)((int)puVar4 * 0x23 + 0x2c7 + (int)puVar3),5);
    puVar6 = (undefined1 *)(extraout_a5_00 * 0x23 + (int)puVar3);
    puVar6[0x2cc] = uVar2;
    *(undefined1 *)((int)puVar3 + (int)puVar6 * 0x23 + 0x2c6) = 6;
    DAT_ram_2000012f = 1;
    _DAT_ram_20000022 = CONCAT71(DAT_ram_20000022_1,0x28);
    DAT_ram_200000b9._0_1_ = 0;
  }
  else {
    puVar11 = (undefined1 *)((int)puVar11 * 0x23 + (int)puVar3);
    if (puVar11 == (undefined1 *)0x8) {
      puVar4 = (undefined8 *)
               FUN_ram_00003334(puVar3[8],uVar12,
                                (undefined1 *)((int)puVar4 * 0x23 + 0xc + (int)puVar3));
      _DAT_ram_20000022 = CONCAT71(DAT_ram_20000022_1,0x28);
      *(undefined1 *)(puVar3 + 0x160) = 1;
      DAT_ram_200000b9._0_1_ = 0;
      *(undefined1 *)((int)puVar3 + 0x600002c7) = 1;
      uVar2 = 0xf1;
    }
    else {
      if ((undefined1 *)((int)puVar11 * 0x23 + (int)puVar3) != (undefined1 *)0x4)
      goto LAB_ram_00003df6;
      puVar7 = (undefined8 *)0xa;
      if ((puVar6 != (undefined1 *)0xa) &&
         (puVar7 = (undefined8 *)0x10, puVar6 != (undefined1 *)0x10)) {
        puVar4 = (undefined8 *)0x1;
        DAT_ram_20000ee2 = 1;
        DAT_ram_200003a8 = puVar3[0x57];
        puVar7 = (undefined8 *)((uint)(puVar6 + -1) & 0xff);
        if (puVar7 < (undefined8 *)0x9) {
          if ((DAT_ram_200000b9._1_1_ == '\x03') && (puVar7 != (undefined8 *)0x3)) {
            puVar7 = (undefined8 *)0x2;
            DAT_ram_200000b9._1_1_ = '\x02';
          }
        }
        else if (puVar6 == (undefined1 *)0x0) {
          puVar7 = (undefined8 *)(DAT_ram_2000017d | 0x200034ec);
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x23;
            if (DAT_ram_200000b9._1_1_ != '\b') {
              puVar7 = puVar3 + 0x23;
              DAT_ram_200000b9._1_1_ = (char)puVar7;
              DAT_ram_20000113 = 1;
            }
          }
          else {
            DAT_ram_200000b8 = 1;
          }
        }
      }
      puVar6 = (undefined1 *)((int)puVar7 * 0x23 + (int)puVar3);
      DAT_ram_20000338 = *(undefined8 *)(puVar6 + 200);
      DAT_ram_20000358 = *(undefined8 *)((int)puVar3 + (int)puVar6 * 0x23 + 0xe8);
      _DAT_ram_20000022 = CONCAT71(DAT_ram_20000022_1,0x28);
      DAT_ram_200000b9._0_1_ = 0;
      *(undefined1 *)((int)puVar3 + 0x600002c7) = 1;
      uVar2 = 0xf2;
    }
    *(undefined1 *)((int)&DAT_ram_200002c8 + (int)puVar3 * 0x24) = uVar2;
    *(undefined1 *)((int)puVar3 * 0x4ed + 0x600002c9) = 0;
    *(undefined1 *)((int)&DAT_ram_200002c8 + (int)puVar3 * 0xac68 + 2) = 0;
    *(undefined1 *)((int)puVar3 * 0x179239 + 0x600002cb) = 0;
    uVar2 = FUN_ram_000082b6(puVar3[8],(undefined1 *)((int)puVar4 * 0x23 + 0x2c7 + (int)puVar3),5);
    puVar6 = (undefined1 *)(extraout_a5_02 * 0x23 + (int)puVar3);
    puVar6[0x2cc] = uVar2;
    *(undefined1 *)((int)puVar3 + (int)puVar6 * 0x23 + 0x2c6) = 6;
  }
LAB_ram_00003df6:
  puVar8 = puVar3 + 0x200;
  *(undefined1 *)((int)puVar3 + 0xb01) = 100;
  puVar7 = (undefined8 *)(uint)*(byte *)((int)puVar3 + 0xb02);
  *(undefined1 *)((int)puVar3 + 0xb02) = 0;
LAB_ram_00003e0e:
  if ((((undefined8 *)((uint)puVar8 & 0xff) != puVar7) && (*(char *)(puVar3 + 0x160) != '\0')) &&
     ((_DAT_ram_40011008 >> 2 & 1) != 0)) {
    _DAT_ram_40010814 = 0x800000;
    FUN_ram_000043ea(&DAT_ram_40004400,(undefined1 *)((int)puVar3 + -0x3fdacd39),
                     *(undefined1 *)((int)puVar3 + 0x118002c6));
    puVar3[8] = puVar3[8];
    if ((extraout_a5_01 + 1U & 0xff) == 0x14) {
      *(undefined1 *)((int)puVar3 + 2) = 0;
    }
    *(undefined1 *)(puVar3 + 0x160) = 0;
    FUN_ram_0000bd62(3);
    _DAT_ram_40010820 = 0x80;
    *(undefined1 *)((int)puVar3 + 0xb01) = 0;
    *(undefined1 *)((int)puVar3 + 0xb02) = 0;
  }
  return;
}



// FUNCTION ram:0000428c FUN_ram_0000428c
// THUNK false
// CALLS ram:0000d650 FUN_ram_0000d650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_0000428c(void)

{
  byte bVar1;
  byte bVar2;
  int extraout_a2;
  uint extraout_a5;
  undefined8 extraout_fa0;
  undefined8 extraout_fa3;
  
  gp = &observed_global_pointer;
  if ((_DAT_ram_40004400 & 0x20) != 0) {
    if (DAT_ram_20000eb2 == '\0') {
      bVar2 = FUN_ram_0000d650(&DAT_ram_40004400);
      DAT_ram_20000478 = extraout_fa3;
      *(undefined8 *)(extraout_a2 * 0x23 + (extraout_a5 & 0xff) + 0x20000420) = extraout_fa0;
    }
    else {
      bVar1 = (&DAT_ram_2000095b)[(uint)DAT_ram_200003b4._4_1_ * 0x23];
      bVar2 = FUN_ram_0000d650(&DAT_ram_40004400);
      *(byte *)((uint)DAT_ram_200003b4._4_1_ * 0x23 + (uint)bVar1 + 0x20000bf7) = bVar2;
      (&DAT_ram_2000095b)[(uint)DAT_ram_200003b4._4_1_ * 0x23] =
           (&DAT_ram_2000095b)[(uint)DAT_ram_200003b4._4_1_ * 0x23] + '\x01';
      if ((&DAT_ram_2000095b)[(uint)DAT_ram_200003b4._4_1_ * 0x23] ==
          (&DAT_ram_2000095c)[(uint)DAT_ram_200003b4._4_1_ * 0x23]) {
        DAT_ram_20000eb2 = '\0';
        DAT_ram_20000eb3 = 1;
      }
      DAT_ram_20000024 = 1;
    }
    return (undefined1 *)(uint)bVar2;
  }
  return &DAT_ram_40004400;
}



// FUNCTION ram:00004380 FUN_ram_00004380
// THUNK false
// CALLS ram:0000d4b8 FUN_ram_0000d4b8
// CALLS ram:0000d49a FUN_ram_0000d49a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00004380(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  iVar1 = FUN_ram_0000d49a(4);
  if (iVar1 != 0) {
    if ((DAT_ram_20000eb2 == '\0') && ((_DAT_ram_40011008 >> 2 & 1) != DAT_ram_20000024)) {
      if ((_DAT_ram_40011008 >> 2 & 1) != 0) {
        DAT_ram_20000eb7 = 1;
      }
      DAT_ram_200003be = 0;
      DAT_ram_20000024 = _DAT_ram_40011008 >> 2 & 1;
    }
    FUN_ram_0000d4b8(4);
  }
  return;
}



// FUNCTION ram:000043ea FUN_ram_000043ea
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000d658 FUN_ram_0000d658
// CALLS ram:0000d648 FUN_ram_0000d648
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_000043ea(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *extraout_a1;
  int extraout_a2;
  undefined8 extraout_fa0;
  undefined8 uVar4;
  undefined8 extraout_fa0_00;
  
  gp = &observed_global_pointer;
  uVar2 = FUN_ram_00001730();
  uVar4 = extraout_fa0;
  for (puVar1 = extraout_a1; puVar1 != (undefined8 *)((int)extraout_a1 + extraout_a2);
      puVar1 = (undefined8 *)((int)puVar1 + 1)) {
    FUN_ram_0000d648(uVar4,*puVar1,uVar2);
    do {
      iVar3 = FUN_ram_0000d658(uVar2,0x80);
    } while (iVar3 == 0);
    uVar4 = extraout_fa0_00;
  }
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000592e FUN_ram_0000592e
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000a9f8 FUN_ram_0000a9f8
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000592e(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int extraout_a1;
  int extraout_a2;
  int iVar3;
  undefined8 extraout_fa0;
  undefined8 uVar4;
  undefined8 extraout_fa4;
  undefined8 uVar5;
  
  gp = &observed_global_pointer;
  puVar2 = (undefined8 *)FUN_ram_00001730();
  puVar1 = PTR_DAT_ram_2000016c_ram_20000040;
  DAT_ram_20000084._1_1_ = 1;
  uVar4 = *(undefined8 *)(PTR_DAT_ram_2000016c_ram_20000040 + 0x40);
  if (extraout_a1 == 1) {
    uVar5 = puVar2[0xe];
    iVar3 = (int)puVar2 + 1;
    *(undefined1 *)((int)puVar2 + 0xb5f) = 0;
    puVar2[10] = uVar4;
    *(undefined1 *)((int)puVar2 + 1) = 0;
    puVar1[2] = 0;
  }
  else {
    DAT_ram_200000c4._5_1_ = 1;
    puVar2[4] = extraout_fa4;
    *puVar2 = extraout_fa4;
    *(undefined8 *)(puVar1 + 0x40) = extraout_fa4;
    iVar3 = extraout_a2;
    uVar5 = extraout_fa4;
  }
  puVar1 = PTR_DAT_ram_2000016c_ram_20000040;
  puVar2 = (undefined8 *)(PTR_DAT_ram_2000016c_ram_20000040 + 0x40);
  *(undefined8 *)(PTR_DAT_ram_2000016c_ram_20000040 + 0x60) = uVar5;
  FUN_ram_0000a9f8(extraout_fa0,uVar4,*puVar2,&DAT_ram_00002132,2,
                   PTR_DAT_ram_2000016c_ram_20000040 + 2,puVar1,0x55 - iVar3);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000598c FUN_ram_0000598c
// THUNK false
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00005a12) */
/* WARNING: Removing unreachable block (ram,0x00005a24) */
/* WARNING: Removing unreachable block (ram,0x000059ba) */

void FUN_ram_0000598c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                     int param_5,undefined4 param_6,int param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int extraout_a3;
  undefined8 unaff_fs0;
  undefined8 uVar3;
  
  gp = &observed_global_pointer;
  if ((param_7 == 0) || (DAT_ram_20004398._6_1_ == '\x01')) {
    return;
  }
  if (param_5 == 4) {
    *(undefined8 *)PTR_DAT_ram_2000016c_ram_20000040 =
         *(undefined8 *)PTR_DAT_ram_2000016c_ram_20000040;
    param_3 = *(undefined8 *)PTR_DAT_ram_2000016c_ram_20000040;
  }
  else {
    if (param_5 == 0x31) {
      uVar3 = *(undefined8 *)PTR_DAT_ram_2000016c_ram_20000040;
    }
    else {
      if (param_5 == 5) {
        return;
      }
      if (param_5 != 6) {
        return;
      }
      uVar3 = *(undefined8 *)PTR_DAT_ram_2000016c_ram_20000040;
    }
    *(undefined8 *)PTR_DAT_ram_2000016c_ram_20000040 = uVar3;
  }
  puVar2 = (undefined8 *)FUN_ram_00001730(param_1,param_2,param_3);
  puVar1 = PTR_DAT_ram_2000016c_ram_20000040;
  puVar2[0xd] = *(undefined8 *)(&DAT_ram_0000da40 + extraout_a3);
  uVar3 = *(undefined8 *)puVar1;
  *puVar2 = unaff_fs0;
  puVar2[0xe] = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION ram:00005a34 FUN_ram_00005a34
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:0000a9f8 FUN_ram_0000a9f8
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be6a FUN_ram_0000be6a

/* WARNING: Control flow encountered bad instruction data */

void FUN_ram_00005a34(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int extraout_a2;
  uint extraout_a3;
  uint extraout_a4;
  byte *extraout_a5;
  undefined8 *puVar6;
  uint extraout_a6;
  int iVar7;
  undefined8 uVar8;
  undefined8 extraout_fa3;
  undefined8 extraout_fa4;
  undefined8 extraout_fa5;
  undefined8 uVar9;
  
  gp = &observed_global_pointer;
  if ((PTR_DAT_ram_2000016c_ram_20000040[2] == '\0') || (DAT_ram_20004398._6_1_ == '\x01')) {
    return;
  }
  uVar9 = FUN_ram_00001716();
  uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
  puVar4 = (undefined1 *)uVar9;
  if (puVar4[0xb] == 'R') {
    *extraout_a5 = 0;
    puVar1 = PTR_DAT_ram_2000016c_ram_20000040;
    *(undefined8 *)(puVar4 + 0x68) = *(undefined8 *)(&DAT_ram_0000da40 + extraout_a3);
    uVar9 = *(undefined8 *)puVar1;
    *puVar4 = (char)extraout_a6;
    *(undefined8 *)(puVar4 + 0x70) = uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = (uint)*extraout_a5 * 0x20;
  puVar2 = puVar4 + iVar7 + 0x8de;
  puVar6 = (undefined8 *)(puVar2 + extraout_a2);
  if (uVar5 == 0) {
    uVar8 = *puVar6;
    uVar9 = extraout_fa4;
    if (extraout_a3 == 0) {
LAB_ram_00005b3e:
      *puVar6 = uVar9;
      goto LAB_ram_00005ac4;
    }
LAB_ram_00005ac2:
    *puVar6 = uVar8;
  }
  else {
    if (uVar5 == extraout_a6) {
      uVar8 = *puVar6;
      if (extraout_a4 < uVar5) goto LAB_ram_00005ac2;
      uVar9 = extraout_fa3;
      if (uVar5 != extraout_a4) {
        return;
      }
    }
    else {
      if (uVar5 == 2) {
        uVar9 = *puVar6;
        if (extraout_a3 <= extraout_a4) {
          return;
        }
        goto LAB_ram_00005b3e;
      }
      if (uVar5 != 3) {
        return;
      }
      uVar9 = *puVar6;
      if (2 < extraout_a4) {
        return;
      }
    }
    *puVar6 = uVar9;
  }
LAB_ram_00005ac4:
  if (extraout_a2 == 0) {
    DAT_ram_200000c4._6_1_ = 1;
    *(undefined8 *)(puVar4 + 0xd0) = extraout_fa5;
  }
  else if (extraout_a2 == 2) {
    DAT_ram_200000c4._5_1_ = 1;
  }
  else if (extraout_a2 == 1) {
    DAT_ram_200000cc = 1;
  }
  uVar3 = FUN_ram_000082b6(puVar2,3);
  puVar4[iVar7 + 0x8e1] = uVar3;
  FUN_ram_0000a9f8(&LAB_ram_00002160 + iVar7,4,puVar2);
  DAT_ram_20000084._2_1_ = 1;
  FUN_ram_0000be6a(PTR_DAT_ram_2000354c_4_ram_20000038 + iVar7,puVar2,4);
  return;
}



// FUNCTION ram:00006392 FUN_ram_00006392
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Removing unreachable block (ram,0x000063c6) */
/* WARNING: Removing unreachable block (ram,0x000063b2) */

void FUN_ram_00006392(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000bd0e();
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:000079b2 FUN_ram_000079b2
// THUNK false
// CALLS ram:0000834a FUN_ram_0000834a

/* WARNING: Removing unreachable block (ram,0x00007bea) */
/* WARNING: Removing unreachable block (ram,0x00007ba2) */
/* WARNING: Removing unreachable block (ram,0x00007b5e) */
/* WARNING: Removing unreachable block (ram,0x00007b22) */
/* WARNING: Removing unreachable block (ram,0x00007af2) */
/* WARNING: Removing unreachable block (ram,0x00007ac2) */
/* WARNING: Removing unreachable block (ram,0x00007a8c) */
/* WARNING: Removing unreachable block (ram,0x00007a6c) */
/* WARNING: Removing unreachable block (ram,0x00007aac) */
/* WARNING: Removing unreachable block (ram,0x00007ad8) */
/* WARNING: Removing unreachable block (ram,0x00007b0a) */
/* WARNING: Removing unreachable block (ram,0x00007b00) */
/* WARNING: Removing unreachable block (ram,0x00007ab8) */
/* WARNING: Removing unreachable block (ram,0x00007b3c) */
/* WARNING: Removing unreachable block (ram,0x00007b7e) */
/* WARNING: Removing unreachable block (ram,0x00007bc6) */
/* WARNING: Removing unreachable block (ram,0x00007bbc) */
/* WARNING: Removing unreachable block (ram,0x00007c0e) */
/* WARNING: Removing unreachable block (ram,0x00007b52) */
/* WARNING: Removing unreachable block (ram,0x00007a1c) */
/* WARNING: Removing unreachable block (ram,0x00007a30) */
/* WARNING: Removing unreachable block (ram,0x00007a32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000079b2(void)

{
  ulonglong uVar1;
  ulonglong in_fa5;
  
  gp = &observed_global_pointer;
  uVar1 = in_fa5;
  if (0xf < (byte)DAT_ram_200000e3) {
    DAT_ram_200000e3 = DAT_ram_200000e3 & 0xffffffffffffff00;
    _DAT_ram_40026818 = PTR_DAT_ram_20002ce0_ram_20000028._0_2_;
    uVar1 = DAT_ram_200000e3;
  }
  DAT_ram_200000e3 = uVar1;
  FUN_ram_0000834a();
  FUN_ram_0000834a();
  FUN_ram_0000834a();
  FUN_ram_0000834a();
  FUN_ram_0000834a();
  FUN_ram_0000834a();
  FUN_ram_0000834a();
  _DAT_ram_40010c00 = 0x44114111;
  _DAT_ram_40010c04 = 0x11444444;
  _DAT_ram_40010c1c = 0x44444444;
  DAT_ram_40026800 = 8;
  _DAT_ram_40026860 = DAT_ram_200000e3;
  return;
}



// FUNCTION ram:000082b6 FUN_ram_000082b6
// THUNK false

char FUN_ram_000082b6(char param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  
  gp = &observed_global_pointer;
  cVar2 = '\0';
  for (bVar1 = 0; bVar1 < param_2; bVar1 = bVar1 + 1) {
    cVar2 = cVar2 + param_1 + bVar1;
  }
  return 'U' - cVar2;
}



// FUNCTION ram:000082de FUN_ram_000082de
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_000082de(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  gp = &observed_global_pointer;
  uVar3 = FUN_ram_00001730();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  uVar1 = FUN_ram_000082b6((int)uVar3,iVar2 - 1U & 0xff);
  FUN_ram_00001754(*(byte *)((int)uVar3 + iVar2 + -1) == uVar1);
  return;
}



// FUNCTION ram:00008320 FUN_ram_00008320
// THUNK false

void FUN_ram_00008320(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000834a FUN_ram_0000834a
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00008320 FUN_ram_00008320
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000834a(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  _DAT_ram_40010c10 = 0x3fc8;
  _DAT_ram_40010c20 = 0xf7;
  _DAT_ram_40010c00 = 0x88118111;
  _DAT_ram_40010c04 = 0x11888888;
  _DAT_ram_40010c1c = 0x88884888;
  _DAT_ram_40010c14 = *(undefined4 *)(&DAT_ram_0000de00 + (uint)DAT_ram_20000104._5_1_ * 4);
  FUN_ram_00008320();
  *(uint *)(&DAT_ram_20003150 + (uint)DAT_ram_20000104._5_1_ * 4) = ~(_DAT_ram_40010c08 & 0xf73fc8);
  _DAT_ram_40010c10 = *(undefined4 *)(&DAT_ram_0000de00 + (uint)DAT_ram_20000104._5_1_ * 4);
  FUN_ram_00008320();
  DAT_ram_20000104._5_1_ = DAT_ram_20000104._5_1_ + 1;
  if (6 < DAT_ram_20000104._5_1_) {
    DAT_ram_20000104._5_1_ = 0;
  }
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:000085e8 FUN_ram_000085e8
// THUNK false
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:000037dc FUN_ram_000037dc
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00003a42 FUN_ram_00003a42

void FUN_ram_000085e8(void)

{
  char cVar1;
  undefined8 extraout_fa4;
  
  gp = &observed_global_pointer;
  FUN_ram_00001716();
  DAT_ram_20000118._2_1_ = '\0';
  if (DAT_ram_2000012b != '\0') {
    FUN_ram_0000be50(&DAT_ram_20003170,0x26e);
    FUN_ram_000037dc(0x200003b8,&DAT_ram_20003170 + (uint)DAT_ram_200033dc * 0x1f);
    FUN_ram_00003b26(0x200003b8);
    FUN_ram_0000be1e(5,1);
    FUN_ram_00003b26(0x200003b8);
    FUN_ram_00003a42(0x200003b8,0);
    FUN_ram_00003b26(0x200003b8);
    FUN_ram_0000be1e(10,1);
    FUN_ram_00003b26(0x200003b8);
    FUN_ram_0000be1e(0x14,1);
  }
  FUN_ram_0000be50(&DAT_ram_20000394,0x22);
  DAT_ram_20000394 = 0xb;
  DAT_ram_200003b4 = CONCAT62((int6)((ulonglong)extraout_fa4 >> 0x10),&hcounteren);
  cVar1 = 'P';
  FUN_ram_000036e2(0x200003b8,&DAT_ram_20000394,4);
  do {
    do {
      if (DAT_ram_20000118._2_1_ != '\0') goto LAB_ram_0000174a;
      FUN_ram_0000bd0e();
    } while (DAT_ram_20000198 == '\0');
    cVar1 = cVar1 + -1;
    DAT_ram_20000198 = '\0';
    FUN_ram_00003b26(0x200003b8);
  } while (cVar1 != '\0');
LAB_ram_0000174a:
  FUN_ram_0000be1e(0x32,1);
  return;
}



// FUNCTION ram:00008708 FUN_ram_00008708
// THUNK false

/* WARNING: Removing unreachable block (ram,0x0000871a) */

void FUN_ram_00008708(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  uVar1 = (DAT_ram_200033dd + 1) % 0x14;
  if (uVar1 != DAT_ram_200033dc) {
    iVar2 = (uint)DAT_ram_200033dd * 0x1f;
    *(undefined8 *)(&DAT_ram_20003170 + iVar2) = *param_1;
    *(undefined8 *)(&DAT_ram_20003190 + iVar2) = param_1[4];
    *(undefined8 *)(&DAT_ram_200031b0 + iVar2) = param_1[8];
    *(undefined8 *)(&DAT_ram_200031d0 + iVar2) = param_1[0xc];
    *(undefined8 *)(&DAT_ram_200031f0 + iVar2) = param_1[0x10];
    *(undefined8 *)(&DAT_ram_20003210 + iVar2) = param_1[0x14];
    *(undefined8 *)(&DAT_ram_20003230 + iVar2) = param_1[0x18];
    *(undefined8 *)(&DAT_ram_20003250 + iVar2) = param_1[0x1c];
    *(undefined8 *)(&DAT_ram_20003178 + iVar2) = param_1[1];
    *(undefined8 *)(&DAT_ram_20003198 + iVar2) = param_1[5];
    *(undefined8 *)(&DAT_ram_200031b8 + iVar2) = param_1[9];
    *(undefined8 *)(&DAT_ram_200031d8 + iVar2) = param_1[0xd];
    *(undefined8 *)(&DAT_ram_200031f8 + iVar2) = param_1[0x11];
    *(undefined8 *)(&DAT_ram_20003218 + iVar2) = param_1[0x15];
    *(undefined8 *)(&DAT_ram_20003238 + iVar2) = param_1[0x19];
    *(undefined8 *)(&DAT_ram_20003258 + iVar2) = param_1[0x1d];
    *(undefined8 *)(&DAT_ram_20003180 + iVar2) = param_1[2];
    *(undefined8 *)(&DAT_ram_200031a0 + iVar2) = param_1[6];
    *(undefined8 *)(&DAT_ram_200031c0 + iVar2) = param_1[10];
    *(undefined8 *)(&DAT_ram_200031e0 + iVar2) = param_1[0xe];
    *(undefined8 *)(&DAT_ram_20003200 + iVar2) = param_1[0x12];
    *(undefined8 *)(&DAT_ram_20003220 + iVar2) = param_1[0x16];
    *(undefined8 *)(&DAT_ram_20003240 + iVar2) = param_1[0x1a];
    *(undefined8 *)(&DAT_ram_20003260 + iVar2) = param_1[0x1e];
    *(undefined8 *)(&DAT_ram_20003188 + iVar2) = param_1[3];
    *(undefined8 *)(&DAT_ram_200031a8 + iVar2) = param_1[7];
    *(undefined8 *)(&DAT_ram_200031c8 + iVar2) = param_1[0xb];
    *(undefined8 *)(&DAT_ram_200031e8 + iVar2) = param_1[0xf];
    *(undefined8 *)(&DAT_ram_20003208 + iVar2) = param_1[0x13];
    *(undefined8 *)(&DAT_ram_20003228 + iVar2) = param_1[0x17];
    DAT_ram_200033dd = (byte)uVar1;
    *(undefined8 *)(&DAT_ram_20003248 + iVar2) = param_1[0x1b];
  }
  return;
}



// FUNCTION ram:00009878 FUN_ram_00009878
// THUNK false

void FUN_ram_00009878(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_2000032e < 6) {
    DAT_ram_200000b9._1_1_ = 2;
  }
  return;
}



// FUNCTION ram:00009f66 FUN_ram_00009f66
// THUNK false

uint FUN_ram_00009f66(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  if (param_1 != 0) {
    uVar1 = 0;
    for (uVar2 = 0; (uVar2 & 0xffff) < (param_1 - 1U & 0xff); uVar2 = uVar2 + 1) {
      uVar1 = uVar1 + param_2 + uVar2 & 0xffff;
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION ram:00009f94 FUN_ram_00009f94
// THUNK false
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000b63c FUN_ram_0000b63c

void FUN_ram_00009f94(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 *extraout_a2;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 unaff_fs1;
  
  gp = &observed_global_pointer;
  iVar11 = FUN_ram_00001708();
  DAT_ram_200034ec = 0;
  DAT_ram_200034ed = 0;
  DAT_ram_2000359c = unaff_fs1;
  FUN_ram_0000b63c();
  uVar8 = DAT_ram_200035bc;
  puVar12 = &UNK_ram_0000de94 + iVar11 * 0xc;
  bVar7 = false;
  bVar6 = false;
  uVar9 = 1;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  uVar15 = 0;
  cVar10 = '\0';
  puVar13 = extraout_a2;
  uVar20 = DAT_ram_200035c4;
  uVar18 = DAT_ram_200000fa;
  uVar19 = DAT_ram_200034ee;
  uVar17 = DAT_ram_20003509;
  uVar16 = DAT_ram_200000f8;
  DAT_ram_2000354c = unaff_fs1;
  do {
    puVar14 = puVar13;
    if ((undefined1 *)0x7 < puVar13) goto LAB_ram_0000a01e;
    puVar14 = (&PTR_LAB_ram_0000a01a_ram_0000de74)[(int)puVar13];
    switch(puVar13) {
    case (undefined1 *)0x0:
      goto LAB_ram_0000a01a;
    case (undefined1 *)0x1:
      goto LAB_ram_0000a018;
    case (undefined1 *)0x2:
      puVar14 = &DAT_ram_200034ec + uVar15;
      (&DAT_ram_20003503)[uVar15] = puVar12[3];
      uVar15 = uVar15 + 1 & 0xff;
      goto LAB_ram_0000a01a;
    case (undefined1 *)0x3:
      uVar17 = puVar12[3];
      uVar20 = *(undefined8 *)(puVar12 + 0x80);
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      uVar18 = 1;
      break;
    case (undefined1 *)0x6:
      if (puVar14 == (undefined1 *)0x2) {
        bVar7 = true;
        uVar19 = 1;
        bVar6 = true;
        uVar9 = 0;
      }
      break;
    case (undefined1 *)0x7:
      puVar14 = &DAT_ram_200034ec + uVar15;
      (&DAT_ram_20003503)[uVar15] = puVar12[4];
LAB_ram_0000a018:
      bVar2 = true;
LAB_ram_0000a01a:
      bVar1 = true;
      uVar16 = 1;
    }
LAB_ram_0000a01e:
    cVar10 = cVar10 + '\x01';
    puVar12 = puVar12 + 3;
    puVar13 = puVar14;
    if (cVar10 == '\x03') {
      if (bVar1) {
        DAT_ram_200000f8 = uVar16;
      }
      if (bVar2) {
        DAT_ram_200035bc = uVar8;
      }
      if (bVar3) {
        DAT_ram_200000fa = uVar18;
      }
      if (bVar4) {
        DAT_ram_20003509 = uVar17;
      }
      if (bVar5) {
        DAT_ram_200035c4 = uVar20;
      }
      if (bVar6) {
        DAT_ram_200034ef = uVar9;
      }
      if (bVar7) {
        DAT_ram_200034ee = uVar19;
      }
      return;
    }
  } while( true );
}



// FUNCTION ram:0000a20e FUN_ram_0000a20e
// THUNK false
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:000082de FUN_ram_000082de
// CALLS ram:0000173c FUN_ram_0000173c
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00006392 FUN_ram_00006392

void FUN_ram_0000a20e(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int extraout_a2;
  uint extraout_a3;
  uint extraout_a4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_20 [32];
  
  gp = &observed_global_pointer;
  uVar14 = FUN_ram_00001700();
  FUN_ram_0000bd0e();
  uVar5 = 4;
  if (4 < extraout_a4) {
    uVar5 = 2;
  }
  iVar2 = 1;
LAB_ram_0000a258:
  do {
    uVar1 = uVar14;
    iVar11 = iVar2;
    uVar9 = (uint)(uVar1 >> 0x20);
    iVar10 = (int)uVar1;
    if (uVar9 == 0) {
LAB_ram_0000a25c:
      FUN_ram_0000173c(iVar11);
      return;
    }
    uVar7 = iVar10 - extraout_a2;
    if (extraout_a3 != 0) {
      uVar7 = (int)uVar7 % (int)extraout_a3;
    }
    uVar7 = uVar7 & 0xff;
    uVar8 = extraout_a3 - uVar7 & 0xff;
    if (uVar9 < uVar8) goto LAB_ram_0000a25c;
    uVar13 = iVar10 - uVar7 & 0xffff;
    if (extraout_a4 < 5) {
      if (uVar13 < 0x1800) {
LAB_ram_0000a2c8:
        cVar12 = 4 < extraout_a4;
        if (extraout_a3 <= uVar5) goto LAB_ram_0000a2ee;
      }
      goto LAB_ram_0000a29a;
    }
    if (extraout_a4 == 5) {
      if ((uVar13 - 0x2130 & 0xffff) < 6) goto LAB_ram_0000a2c8;
      goto LAB_ram_0000a29a;
    }
    if (extraout_a4 == 6) {
      if ((uVar13 - 0x2160 & 0xffff) < 0x340) {
        cVar12 = '\x02';
        goto LAB_ram_0000a2ee;
      }
      goto LAB_ram_0000a29a;
    }
    if (extraout_a4 != 7) {
      if ((uVar13 - 0x1820 & 0xffff) < 0x500) {
        cVar12 = '\x05';
        goto LAB_ram_0000a2ee;
      }
      goto LAB_ram_0000a29a;
    }
    if (0x2f < (uVar13 - 0x24c0 & 0xffff)) goto LAB_ram_0000a29a;
    cVar12 = '\x03';
LAB_ram_0000a2ee:
    iVar2 = FUN_ram_0000c274(uVar13,extraout_a3,auStack_20);
    uVar14 = uVar1 & 0xffffffff;
  } while (iVar2 == 0);
  iVar2 = FUN_ram_000082de(auStack_20,extraout_a3);
  if (iVar2 != 0) {
    if (cVar12 == '\0') {
      if (PTR_DAT_ram_20004390_ram_20000044 == (undefined *)0x0) {
        if (extraout_a4 != 1) goto LAB_ram_0000a29a;
        puVar3 = &DAT_ram_20003d90 + uVar13;
      }
      else {
        if ((PTR_DAT_ram_20004390_ram_20000044 != (undefined *)0x1) || (extraout_a4 != 2))
        goto LAB_ram_0000a29a;
        puVar3 = (undefined *)(uVar13 + 0x20003790);
      }
    }
    else {
      if (cVar12 == '\x01') {
        iVar2 = -0x2130;
        puVar6 = &DAT_ram_2000016c;
      }
      else {
        if (cVar12 != '\x02') {
          if (cVar12 == '\x03') {
            puVar3 = (undefined *)(uVar13 + 0x20001ed0);
          }
          else {
            if (cVar12 != '\x05') goto LAB_ram_0000a29a;
            FUN_ram_00006392(auStack_20,extraout_a3);
            puVar3 = (undefined *)(uVar13 + 0x20002070);
          }
          goto LAB_ram_0000a328;
        }
        iVar2 = -0x2160;
        puVar6 = (undefined8 *)0x20003550;
      }
      puVar3 = (undefined *)(iVar2 + uVar13 + (int)puVar6);
    }
LAB_ram_0000a328:
    FUN_ram_0000be6a(puVar3,auStack_20,extraout_a3);
    goto LAB_ram_0000a29a;
  }
  if (cVar12 == '\0') {
    if (PTR_DAT_ram_20004390_ram_20000044[8] == '\0') {
      if (extraout_a4 != 1) goto LAB_ram_0000a29a;
      puVar3 = &DAT_ram_0000ebe0 + uVar13;
      puVar4 = &DAT_ram_20003d90 + uVar13;
      goto LAB_ram_0000a41c;
    }
    if ((PTR_DAT_ram_20004390_ram_20000044[8] != '\x01') || (extraout_a4 != 2))
    goto LAB_ram_0000a29a;
    FUN_ram_0000be6a(uVar13 + 0x20003790,&UNK_ram_0000e1cc + uVar13,extraout_a3);
    iVar2 = FUN_ram_0000c2b4(uVar13,extraout_a3,&UNK_ram_0000e1cc + uVar13);
  }
  else {
    if (cVar12 == '\x01') {
      iVar2 = uVar13 - 0x2130;
      puVar3 = (undefined *)(uVar13 + 0x1fffdf48);
      puVar6 = &DAT_ram_2000016c;
    }
    else {
      if (cVar12 != '\x02') {
        if (cVar12 == '\x03') {
          puVar3 = &UNK_ram_0000bddc + uVar13;
          puVar4 = (undefined *)(uVar13 + 0x20001ed0);
          goto LAB_ram_0000a41c;
        }
        if (cVar12 != '\x05') goto LAB_ram_0000a29a;
        FUN_ram_0000be6a(uVar13 + 0x20002070,&UNK_ram_0000caac + uVar13,extraout_a3);
        iVar2 = FUN_ram_0000c2b4(uVar13,extraout_a3,&UNK_ram_0000caac + uVar13);
        goto joined_r0x0000a4f8;
      }
      iVar2 = uVar13 - 0x2160;
      puVar3 = &UNK_ram_0000bdfc + uVar13;
      puVar6 = (undefined8 *)0x20003550;
    }
    puVar4 = (undefined *)((int)puVar6 + iVar2);
LAB_ram_0000a41c:
    FUN_ram_0000be6a(puVar4,puVar3,extraout_a3);
    iVar2 = FUN_ram_0000c2b4(uVar13,extraout_a3,puVar3);
  }
joined_r0x0000a4f8:
  uVar14 = uVar1 & 0xffffffff;
  if (iVar2 == 0) goto LAB_ram_0000a258;
LAB_ram_0000a29a:
  iVar2 = iVar11;
  uVar14 = CONCAT44((uVar7 + uVar9) - extraout_a3,iVar10 + uVar8) & 0xff0000ffff;
  goto LAB_ram_0000a258;
}



// FUNCTION ram:0000a4fc FUN_ram_0000a4fc
// THUNK false
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be6a FUN_ram_0000be6a

void FUN_ram_0000a4fc(void)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000be6a(&DAT_ram_20003890,&DAT_ram_0000e2cc,0x500);
  puVar3 = &DAT_ram_0000e2cc;
  sVar1 = 0x1820;
  do {
    sVar2 = sVar1 + 10;
    FUN_ram_0000c2b4(sVar1,10,puVar3);
    puVar3 = puVar3 + 10;
    sVar1 = sVar2;
  } while (sVar2 != 0x1d20);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000a5dc FUN_ram_0000a5dc
// THUNK false
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:000082de FUN_ram_000082de
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be6a FUN_ram_0000be6a

undefined4 FUN_ram_0000a5dc(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  gp = &observed_global_pointer;
  FUN_ram_00001716();
  uStack_4 = 0;
  uStack_8 = 0;
  if (PTR_DAT_ram_20004390_ram_20000044 == (undefined *)0x0) {
    uVar1 = 0;
    uVar2 = 1;
    do {
      FUN_ram_0000c274(uVar1 & 0xffff,4,&uStack_8);
      iVar4 = FUN_ram_000082de(&uStack_8,4);
      puVar6 = &DAT_ram_20003d90 + uVar1;
      if (iVar4 == 0) {
        FUN_ram_0000be6a(puVar6,&DAT_ram_0000ebe0 + uVar1,4);
        iVar4 = FUN_ram_0000c2b4(uVar1 & 0xffff,4,puVar6);
        if (iVar4 == 0) {
          uVar2 = 0;
        }
      }
      else {
        FUN_ram_0000be6a(puVar6,&uStack_8,4);
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 != 0x600);
  }
  else {
    uVar3 = 1;
    uVar2 = 1;
    if (PTR_DAT_ram_20004390_ram_20000044 == (undefined *)0x1) {
      iVar4 = 0;
      do {
        uVar1 = iVar4 + 0x600U & 0xffff;
        FUN_ram_0000c274(uVar1,4,&uStack_8);
        iVar5 = FUN_ram_000082de(&uStack_8,4);
        puVar6 = &DAT_ram_20003d90 + iVar4;
        if (iVar5 == 0) {
          FUN_ram_0000be6a(puVar6,&DAT_ram_0000e7cc + iVar4,4);
          iVar5 = FUN_ram_0000c2b4(uVar1,4,puVar6);
          if (iVar5 == 0) {
            uVar3 = 0;
          }
        }
        else {
          FUN_ram_0000be6a(puVar6,&uStack_8,4);
        }
        iVar4 = iVar4 + 4;
        uVar2 = uVar3;
      } while (iVar4 != 0x600);
    }
  }
  return uVar2;
}



// FUNCTION ram:0000a6c0 FUN_ram_0000a6c0
// THUNK false
// CALLS ram:0000a5dc FUN_ram_0000a5dc
// CALLS ram:00001708 FUN_ram_00001708

/* WARNING: Removing unreachable block (ram,0x0000a6f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000a6c0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint extraout_a1;
  uint extraout_a1_00;
  uint uVar8;
  uint extraout_a3;
  uint extraout_a3_00;
  uint uVar9;
  char *pcVar10;
  undefined *extraout_a4;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 extraout_fa0;
  undefined8 extraout_fa0_00;
  undefined8 uVar16;
  undefined8 extraout_fa1;
  undefined8 extraout_fa1_00;
  undefined8 uVar17;
  
  gp = &observed_global_pointer;
  uVar7 = FUN_ram_00001708();
  uVar8 = extraout_a1;
  uVar9 = extraout_a3;
  uVar16 = extraout_fa0;
  uVar17 = extraout_fa1;
  if (extraout_a4 != PTR_DAT_ram_20004390_ram_20000044) {
    uVar7 = FUN_ram_0000a5dc();
    DAT_ram_20000158 = *(undefined8 *)(PTR_DAT_ram_20004390_ram_20000044 + 8);
    uVar8 = extraout_a1_00;
    uVar9 = extraout_a3_00;
    uVar16 = extraout_fa0_00;
    uVar17 = extraout_fa1_00;
  }
  if (uVar9 == 1) {
    uVar9 = 1;
    DAT_ram_20001af0 = *(undefined8 *)(PTR_DAT_ram_2000016c_ram_20000040 + 0x40);
  }
  else {
    DAT_ram_20001ad1 = 0;
  }
  if (_DAT_ram_20000192 != uVar9) {
    DAT_ram_2000018a = 0;
    _DAT_ram_20000190 = 0;
    _DAT_ram_20000192 = (ushort)uVar9;
  }
  pcVar12 = (char *)&DAT_ram_200023ae;
  pcVar10 = (char *)((int)&DAT_ram_2000354c + 4);
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  uVar15 = DAT_ram_200000c4._6_1_;
  uVar14 = DAT_ram_20001ad0;
  uVar6 = DAT_ram_200000cc;
  uVar5 = DAT_ram_200000c4._5_1_;
  do {
    uVar9 = 0;
    pcVar11 = pcVar12;
    pcVar13 = pcVar10;
    do {
      if (uVar9 == 0) {
        if (uVar7 != uVar8) {
          *(undefined8 *)pcVar12 = *(undefined8 *)pcVar10;
          bVar2 = true;
          uVar14 = 1;
          bVar1 = true;
          uVar15 = 1;
        }
        if (uVar7 != uVar8) {
          *(undefined8 *)(pcVar12 + 0x20) = *(undefined8 *)(pcVar10 + 0x20);
          bVar3 = true;
          uVar6 = 1;
        }
        uVar17 = *(undefined8 *)(pcVar10 + 0x40);
        uVar16 = *(undefined8 *)(pcVar12 + 0x40);
        if (uVar7 != uVar8) {
          *(undefined8 *)(pcVar12 + 0x40) = uVar17;
          bVar4 = true;
          uVar5 = 1;
        }
      }
      else {
        uVar8 = (uint)(byte)pcVar13[2];
        if (((*pcVar11 != *pcVar13) || (pcVar11[1] != pcVar13[1])) || ((byte)pcVar11[2] != uVar8)) {
          *pcVar11 = *pcVar13;
          *(undefined8 *)(pcVar11 + 0x20) = uVar16;
          *(undefined8 *)(pcVar11 + 0x40) = uVar17;
          bVar1 = true;
          uVar15 = 1;
        }
      }
      uVar7 = uVar9 + 1;
      uVar9 = uVar7 & 0xff;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    } while (uVar9 != 8);
    pcVar12 = pcVar12 + 0x20;
    pcVar10 = pcVar10 + 0x20;
  } while (pcVar12 != (char *)0x2000262e);
  if (bVar1) {
    DAT_ram_200000c4._6_1_ = uVar15;
  }
  if (bVar2) {
    DAT_ram_20001ad0 = uVar14;
  }
  if (bVar3) {
    DAT_ram_200000cc = uVar6;
  }
  if (bVar4) {
    DAT_ram_200000c4._5_1_ = uVar5;
  }
  return;
}



// FUNCTION ram:0000a7fa FUN_ram_0000a7fa
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000a6c0 FUN_ram_0000a6c0
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000a7fa(uint param_1)

{
  gp = &observed_global_pointer;
  DAT_ram_20000048 = (byte)param_1;
  if ((DAT_ram_20000049 != param_1) && (DAT_ram_20000049 = DAT_ram_20000048, param_1 == 0)) {
    FUN_ram_00001730();
    FUN_ram_0000a6c0();
    FUN_ram_00001754();
    return;
  }
  return;
}



// FUNCTION ram:0000a81a FUN_ram_0000a81a
// THUNK false
// CALLS ram:0000a7fa FUN_ram_0000a7fa
// CALLS ram:0000a20e FUN_ram_0000a20e
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000a6c0 FUN_ram_0000a6c0

/* WARNING: Control flow encountered bad instruction data */

int FUN_ram_0000a81a(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  gp = &observed_global_pointer;
  uVar6 = FUN_ram_00001716();
  uVar1 = (uint)uVar6;
  if (DAT_ram_20000048 == '\0') {
    gp = &observed_global_pointer;
    return 0;
  }
  if (uVar1 < 0x600) {
    uVar5 = 1;
    uVar4 = 4;
    puVar3 = (undefined *)0x0;
  }
  else if ((uVar1 - 0x600 & 0xffff) < 0x600) {
    uVar5 = 2;
    uVar4 = 4;
    puVar3 = (undefined *)0x600;
  }
  else if ((uVar1 - 0xc00 & 0xffff) < 0x600) {
    uVar5 = 4;
    uVar4 = 4;
    puVar3 = (undefined *)0xc00;
  }
  else if ((uVar1 - 0x1200 & 0xffff) < 0x600) {
    uVar5 = 3;
    uVar4 = 4;
    puVar3 = (undefined *)0x1200;
  }
  else if ((uVar1 - 0x1820 & 0xffff) < 0x500) {
    uVar5 = 8;
    uVar4 = 10;
    puVar3 = &DAT_ram_00001820;
  }
  else if ((uVar1 - 0x2130 & 0xffff) < 6) {
    uVar5 = 5;
    uVar4 = 2;
    puVar3 = &DAT_ram_00002130;
  }
  else if ((uVar1 - 0x2160 & 0xffff) < 0x340) {
    uVar5 = 6;
    uVar4 = 4;
    puVar3 = &LAB_ram_00002160;
  }
  else {
    if (0x2f < (uVar1 - 0x24c0 & 0xffff)) {
      iVar2 = 1;
      if ((uVar1 - 0x2750 & 0xffff) < 0x1681) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_ram_0000a846;
    }
    uVar5 = 7;
    uVar4 = 2;
    puVar3 = (undefined *)0x24c0;
  }
  iVar2 = FUN_ram_0000a20e(uVar1,(uint)((ulonglong)uVar6 >> 0x20) & 0xff,puVar3,uVar4,uVar5);
  if (iVar2 == 0) {
    FUN_ram_0000a7fa(0);
    gp = &observed_global_pointer;
    return 0;
  }
LAB_ram_0000a846:
  FUN_ram_0000a6c0();
  return iVar2;
}



// FUNCTION ram:0000a9f8 FUN_ram_0000a9f8
// THUNK false
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000a9f8(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  iVar1 = FUN_ram_0000c2b4();
  FUN_ram_00001754(iVar1 != 0);
  return;
}



// FUNCTION ram:0000aa08 FUN_ram_0000aa08
// THUNK false
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:0000173c FUN_ram_0000173c
// CALLS ram:0000a7fa FUN_ram_0000a7fa
// CALLS ram:0000a4fc FUN_ram_0000a4fc
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000a6c0 FUN_ram_0000a6c0
// CALLS ram:00001760 FUN_ram_00001760
// CALLS ram:0000be6a FUN_ram_0000be6a

void FUN_ram_0000aa08(void)

{
  short sVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [248];
  
  gp = &observed_global_pointer;
  FUN_ram_00001700();
  FUN_ram_00001760(auStack_f8,0,0xf8);
  FUN_ram_0000be50(auStack_f8,0xf8);
  FUN_ram_0000c2b4(0x2520,0xf8,auStack_f8);
  FUN_ram_0000be6a(&DAT_ram_2000016c,&DAT_ram_20000078,6);
  FUN_ram_0000be6a(0x20003550,&DAT_ram_0000df5c,0x340);
  FUN_ram_0000be6a(&DAT_ram_20004390,&DAT_ram_0000e29c,0x30);
  FUN_ram_0000be50(&DAT_ram_200043c0,0xf);
  FUN_ram_0000afb6();
  cVar3 = '\0';
  if (DAT_ram_20000048 != '\0') {
    puVar6 = &DAT_ram_0000ebe0;
    sVar1 = 0;
    cVar3 = '\x01';
    do {
      iVar4 = FUN_ram_0000c2b4(sVar1,4,puVar6);
      if (iVar4 == 0) {
        cVar3 = '\0';
      }
      sVar1 = sVar1 + 4;
      puVar6 = puVar6 + 4;
    } while (sVar1 != 0x600);
    if (cVar3 != '\0') {
      puVar6 = &DAT_ram_0000e7cc;
      sVar1 = 0x600;
      do {
        iVar4 = FUN_ram_0000c2b4(sVar1,4,puVar6);
        if (iVar4 == 0) {
          cVar3 = '\0';
        }
        sVar1 = sVar1 + 4;
        puVar6 = puVar6 + 4;
      } while (sVar1 != 0xc00);
      if ((cVar3 != '\0') &&
         (iVar4 = FUN_ram_0000c2b4(&DAT_ram_00002130,6,&DAT_ram_20000078), iVar4 != 0)) {
        puVar7 = &DAT_ram_200023ae;
        puVar2 = &LAB_ram_00002160;
        do {
          iVar4 = 0;
          do {
            FUN_ram_0000be6a(iVar4 + (int)puVar7,
                             &UNK_ram_0000bdfc + ((uint)(puVar2 + iVar4) & 0xffff),4);
            iVar5 = FUN_ram_0000c2b4((uint)(puVar2 + iVar4) & 0xffff,4,
                                     &UNK_ram_0000bdfc + ((uint)(puVar2 + iVar4) & 0xffff));
            if (iVar5 == 0) {
              cVar3 = '\0';
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0x20);
          puVar2 = (undefined1 *)((uint)(puVar2 + 0x20) & 0xffff);
          puVar7 = puVar7 + 4;
        } while (puVar2 != (undefined1 *)0x23e0);
        if ((cVar3 != '\0') && (iVar4 = FUN_ram_0000c2b4(0x24c0,0x30,&DAT_ram_0000e29c), iVar4 != 0)
           ) {
          FUN_ram_0000a4fc();
          FUN_ram_0000a6c0();
          goto LAB_ram_0000ab6a;
        }
      }
    }
    FUN_ram_0000a4fc();
    FUN_ram_0000a7fa(0);
    cVar3 = '\0';
  }
LAB_ram_0000ab6a:
  PTR_DAT_ram_2000016c_ram_20000040 = (undefined *)&DAT_ram_2000016c;
  PTR_DAT_ram_2000354c_4_ram_20000038 = (undefined *)((int)&DAT_ram_2000354c + 4);
  PTR_DAT_ram_20004390_ram_20000044 = (undefined *)&DAT_ram_20004390;
  if ((char)DAT_ram_20004398 == '\0') {
    puVar6 = &DAT_ram_0000ebe0;
  }
  else {
    if ((char)DAT_ram_20004398 != '\x01') goto LAB_ram_0000ab9e;
    puVar6 = &DAT_ram_0000e7cc;
  }
  FUN_ram_0000be6a(&DAT_ram_20003d90,puVar6,0x600);
LAB_ram_0000ab9e:
  FUN_ram_0000173c(cVar3);
  return;
}



// FUNCTION ram:0000afb6 FUN_ram_0000afb6
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000afb6(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  DAT_ram_20000164._6_1_ = 0;
  DAT_ram_20000164._5_1_ = 0;
  FUN_ram_0000be50(&DAT_ram_20000174,8);
  FUN_ram_0000be50(0x2000015c,5);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000b3ba FUN_ram_0000b3ba
// THUNK false

/* WARNING: Removing unreachable block (ram,0x0000b420) */
/* WARNING: Removing unreachable block (ram,0x0000b424) */
/* WARNING: Removing unreachable block (ram,0x0000b428) */
/* WARNING: Removing unreachable block (ram,0x0000b42c) */
/* WARNING: Removing unreachable block (ram,0x0000b430) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000b3ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     uint param_5,undefined4 param_6,uint param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  gp = &observed_global_pointer;
  DAT_ram_200000f8 = 1;
  if (param_7 != 0) {
    uVar2 = DAT_ram_20003524;
    uVar3 = DAT_ram_20003544;
    if (param_7 == 0) {
      uVar1 = _DAT_ram_20003504;
      uVar4 = param_1;
      if (param_5 == 0) {
        DAT_ram_200000ef = 0;
        DAT_ram_200000f8 = 1;
        return;
      }
    }
    else {
      if (param_8 != 0) {
        uVar5 = param_8;
        uVar2 = param_1;
        uVar7 = param_7;
        if (DAT_ram_20003505 != 0) {
          if (DAT_ram_20003506 != '\0') {
            DAT_ram_200000f9 = 1;
            if (param_5 != 0) {
              (&DAT_ram_2000350c)[param_5 >> 3] =
                   (byte)(1 << (param_5 & 7)) | (&DAT_ram_2000350c)[param_5 >> 3];
              DAT_ram_200000ef = 1;
            }
            return;
          }
          uVar5 = (uint)DAT_ram_20003505;
          uVar3 = param_1;
          uVar2 = DAT_ram_20003524;
          uVar7 = param_8;
          if (param_7 == param_5) {
            DAT_ram_200000ef = 0;
            DAT_ram_200000f8 = 1;
            return;
          }
        }
        param_7 = uVar5;
        param_1 = _DAT_ram_20003504;
        if (uVar7 == param_5) {
          DAT_ram_200000ef = 0;
          DAT_ram_200000f8 = 1;
          return;
        }
      }
      uVar1 = param_1;
      uVar4 = DAT_ram_200035dc;
      if (param_7 == param_5) {
        DAT_ram_200000ef = 0;
        DAT_ram_200000f8 = 1;
        return;
      }
    }
    DAT_ram_200035dc = uVar4;
    DAT_ram_20003544 = uVar3;
    DAT_ram_20003524 = uVar2;
    _DAT_ram_20003504 = uVar1;
    DAT_ram_200000f8 = 1;
    DAT_ram_200000ef = 0;
    return;
  }
  if (param_5 == 0) {
    DAT_ram_200000f8 = 1;
    return;
  }
  puVar6 = &DAT_ram_200034ec;
  uVar7 = 0;
  while ((byte)puVar6[0x17] != param_5) {
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    if (uVar7 == 5) goto LAB_ram_0000b4b4;
  }
  (&DAT_ram_20003503)[uVar7] = 0;
  puVar6 = &DAT_ram_200034ec + uVar7;
  for (; (uVar7 & 0xff) < 4; uVar7 = uVar7 + 1) {
    puVar6[0x17] = puVar6[0x18];
    puVar6 = puVar6 + 1;
  }
  (&DAT_ram_20003503)[uVar7] = 0;
LAB_ram_0000b4b4:
  uVar7 = param_5 >> 3;
  puVar6 = &DAT_ram_200034ec + uVar7;
  if (((int)(uint)(byte)(&DAT_ram_2000350c)[uVar7] >> (param_5 & 7) & 1U) != 0) {
    (&DAT_ram_2000350c)[uVar7] = ~(byte)(1 << (param_5 & 7)) & (&DAT_ram_2000350c)[uVar7];
    puVar6 = &DAT_ram_200000f8;
    DAT_ram_20000118 = param_4;
  }
  if (((uint)(puVar6 + -1) & 0xff) < 6) {
    DAT_ram_200000ef = 0;
    return;
  }
  DAT_ram_200000ef = 1;
  return;
}



// FUNCTION ram:0000b63c FUN_ram_0000b63c
// THUNK false
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000b63c(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  DAT_ram_200000ef = 0;
  uRam20003501 = 0;
  uRam20003502 = 0;
  DAT_ram_20003503 = 0;
  DAT_ram_20003504 = 0;
  DAT_ram_20003505 = 0;
  DAT_ram_20003506 = 0;
  uRam20003507 = 0;
  uRam20003508 = 0;
  DAT_ram_20003509 = 0;
  DAT_ram_2000350a = 0;
  DAT_ram_2000350b = 0;
  DAT_ram_20003520 = 0;
  FUN_ram_0000be50(&DAT_ram_2000350c,0x14);
  return;
}



// FUNCTION ram:0000b936 FUN_ram_0000b936
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Control flow encountered bad instruction data */

void FUN_ram_0000b936(void)

{
  int iVar1;
  int extraout_a4;
  
  gp = &observed_global_pointer;
  iVar1 = FUN_ram_00001730();
  if (iVar1 == 0x18) {
    if (PTR_DAT_ram_20004390_ram_20000044 != (undefined *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (iVar1 == 0x19) {
    if (extraout_a4 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000bd0e FUN_ram_0000bd0e
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bd0e(void)

{
  gp = &observed_global_pointer;
  if ((DAT_ram_20000183 != '\0') && ((_DAT_ram_40002c00 & 0x7f) < (uint)DAT_ram_20000184)) {
    _DAT_ram_40002c00 = 0x7f;
  }
  return;
}



// FUNCTION ram:0000bd62 FUN_ram_0000bd62
// THUNK false

void FUN_ram_0000bd62(int param_1)

{
  char cVar1;
  
  gp = &observed_global_pointer;
  while (param_1 = param_1 + -1, param_1 != -1) {
    cVar1 = '\x0e';
    do {
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION ram:0000be0a FUN_ram_0000be0a
// THUNK false

void FUN_ram_0000be0a(int param_1)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  while (param_1 = param_1 + -1, param_1 != -1) {
    iVar1 = 0x1b;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



// FUNCTION ram:0000be1e FUN_ram_0000be1e
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be0a FUN_ram_0000be0a

void FUN_ram_0000be1e(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  gp = &observed_global_pointer;
  uVar3 = FUN_ram_00001716();
  iVar2 = (int)uVar3;
  while (iVar2 = iVar2 + -1, iVar2 != -1) {
    cVar1 = '{';
    while (cVar1 = cVar1 + -1, cVar1 != '\0') {
      FUN_ram_0000be0a(1);
    }
    if ((int)((ulonglong)uVar3 >> 0x20) != 0) {
      FUN_ram_0000bd0e();
    }
  }
  return;
}



// FUNCTION ram:0000be50 FUN_ram_0000be50
// THUNK false

void FUN_ram_0000be50(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  gp = &observed_global_pointer;
  puVar1 = param_1 + param_2;
  for (; ((uint)puVar1 & 0xffff) != ((uint)param_1 & 0xffff); param_1 = param_1 + 1) {
    *param_1 = 0;
  }
  return;
}



// FUNCTION ram:0000be6a FUN_ram_0000be6a
// THUNK false

void FUN_ram_0000be6a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  for (uVar1 = 0; param_3 != (uVar1 & 0xffff); uVar1 = uVar1 + 1) {
    *(undefined8 *)(param_1 + uVar1) = *(undefined8 *)(param_2 + uVar1);
  }
  return;
}



// FUNCTION ram:0000be88 FUN_ram_0000be88
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be6a FUN_ram_0000be6a

void FUN_ram_0000be88(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000be6a();
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000be94 FUN_ram_0000be94
// THUNK false

undefined4 FUN_ram_0000be94(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  uVar2 = 0;
  do {
    if (param_3 == (uVar2 & 0xffff)) {
      return 0;
    }
    uVar1 = param_1 + uVar2;
    uVar2 = uVar2 + 1;
  } while (*(byte *)(param_2 + uVar2 + -1) == uVar1);
  return 1;
}



// FUNCTION ram:0000bebc FUN_ram_0000bebc
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bebc(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_e000ed10 = 0x80000040;
  return;
}



// FUNCTION ram:0000bece FUN_ram_0000bece
// THUNK false

void FUN_ram_0000bece(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000bf0c FUN_ram_0000bf0c
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bf0c(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffff0fff | 0x1000;
  return;
}



// FUNCTION ram:0000bf24 FUN_ram_0000bf24
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000bece FUN_ram_0000bece
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bf24(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000bf0c();
  _DAT_ram_40011014 = 0x80000;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  _DAT_ram_40011010 = 0x8000;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  _DAT_ram_40011020 = 8;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000bf5a FUN_ram_0000bf5a
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000bece FUN_ram_0000bece
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bf5a(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000bf0c();
  _DAT_ram_40011020 = 8;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  _DAT_ram_40011010 = 0x8000;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  _DAT_ram_40011014 = 0x80000;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  _DAT_ram_40011014 = 0x8000;
  FUN_ram_0000bece();
  FUN_ram_0000bece();
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000bf9a FUN_ram_0000bf9a
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bf9a(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffff0fff | 0x8000;
  _DAT_ram_40011020 = 8;
  return;
}



// FUNCTION ram:0000bfb6 FUN_ram_0000bfb6
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bf9a FUN_ram_0000bf9a
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000bece FUN_ram_0000bece

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0000bfb6(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  
  gp = &observed_global_pointer;
  cVar3 = FUN_ram_00001716();
  cVar2 = '\0';
  FUN_ram_0000bf0c();
  do {
    if (cVar3 < '\0') {
      FUN_ram_0000bf9a();
    }
    else {
      FUN_ram_0000bf0c();
      _DAT_ram_40011014 = 0x80000;
    }
    _DAT_ram_40011010 = 0x8000;
    FUN_ram_0000bece();
    _DAT_ram_40011014 = 0x8000;
    cVar3 = cVar3 << 1;
    if (cVar2 == '\a') {
      FUN_ram_0000bf9a();
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != '\b');
  FUN_ram_0000bf9a();
  _DAT_ram_40011010 = 0x8000;
  FUN_ram_0000bece();
  uVar1 = _DAT_ram_40011008;
  _DAT_ram_40011014 = 0x8000;
  FUN_ram_0000bece();
  return (uVar1 >> 0x13 ^ 1) & 1;
}



// FUNCTION ram:0000c036 FUN_ram_0000c036
// THUNK false
// CALLS ram:0000bf5a FUN_ram_0000bf5a
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000bfb6 FUN_ram_0000bfb6
// CALLS ram:00001716 FUN_ram_00001716

undefined4 FUN_ram_0000c036(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  gp = &observed_global_pointer;
  uVar2 = FUN_ram_00001716();
  bVar1 = 0;
  do {
    bVar1 = bVar1 + 1;
    if (bVar1 == 0x65) goto LAB_ram_0000c07e;
    FUN_ram_0000bf5a();
    iVar3 = FUN_ram_0000bfb6(0xa0);
  } while (((iVar3 == 0) || (iVar3 = FUN_ram_0000bfb6(uVar2 >> 8), iVar3 == 0)) ||
          (iVar3 = FUN_ram_0000bfb6(uVar2 & 0xff), iVar3 == 0));
  while (bVar1 = bVar1 + 1, bVar1 < 100) {
    FUN_ram_0000bf5a();
    iVar3 = FUN_ram_0000bfb6(0xa1);
    if (iVar3 != 0) {
      return 1;
    }
  }
LAB_ram_0000c07e:
  FUN_ram_0000bf24();
  return 0;
}



// FUNCTION ram:0000c09a FUN_ram_0000c09a
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bf9a FUN_ram_0000bf9a
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000bece FUN_ram_0000bece

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0000c09a(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  gp = &observed_global_pointer;
  iVar2 = FUN_ram_00001716();
  cVar3 = '\b';
  FUN_ram_0000bf9a();
  uVar1 = 0;
  do {
    _DAT_ram_40011010 = 0x8000;
    uVar1 = (uVar1 & 0x7f) << 1;
    if (_DAT_ram_40011008 << 0xc < 0) {
      uVar1 = uVar1 | 1;
    }
    if (-1 < _DAT_ram_40011008 << 0xc) {
      uVar1 = uVar1 & 0xfe;
    }
    cVar3 = cVar3 + -1;
    _DAT_ram_40011014 = 0x8000;
    FUN_ram_0000bece();
  } while (cVar3 != '\0');
  FUN_ram_0000bf0c();
  if (iVar2 == 0) {
    _DAT_ram_40011014 = 0x80000;
  }
  else {
    _DAT_ram_40011020 = 8;
  }
  _DAT_ram_40011010 = 0x8000;
  FUN_ram_0000bece();
  _DAT_ram_40011014 = 0x8000;
  FUN_ram_0000bf9a();
  FUN_ram_0000bece();
  return uVar1;
}



// FUNCTION ram:0000c11a FUN_ram_0000c11a
// THUNK false
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000c036 FUN_ram_0000c036
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000bf5a FUN_ram_0000bf5a
// CALLS ram:0000c09a FUN_ram_0000c09a
// CALLS ram:0000bfb6 FUN_ram_0000bfb6
// CALLS ram:0000bd0e FUN_ram_0000bd0e

int FUN_ram_0000c11a(void)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *extraout_a2;
  undefined1 *puVar9;
  undefined8 uVar10;
  
  gp = &observed_global_pointer;
  uVar10 = FUN_ram_00001708();
  iVar8 = (int)((ulonglong)uVar10 >> 0x20);
  uVar7 = (uint)uVar10;
  cVar5 = '\v';
  do {
    if (iVar8 == 0) {
      return 1;
    }
    cVar3 = 'e';
    do {
      cVar3 = cVar3 + -1;
      if (cVar3 == '\0') {
        FUN_ram_0000bf24();
        goto LAB_ram_0000c194;
      }
      FUN_ram_0000bf5a();
      iVar4 = FUN_ram_0000bfb6(0xa0);
    } while (((iVar4 == 0) || (iVar4 = FUN_ram_0000bfb6(uVar7 >> 8), iVar4 == 0)) ||
            (iVar4 = FUN_ram_0000bfb6(uVar7 & 0xff), iVar4 == 0));
    iVar4 = 0;
    puVar9 = extraout_a2;
    do {
      if (puVar9 == extraout_a2 + iVar8) {
        if (iVar4 != 0) goto LAB_ram_0000c18e;
        break;
      }
      FUN_ram_0000bd0e();
      uVar1 = *puVar9;
      iVar4 = 1;
      puVar9 = puVar9 + 1;
      iVar6 = FUN_ram_0000bfb6(uVar1);
    } while (iVar6 != 0);
    cVar5 = cVar5 + -1;
    if (cVar5 == '\0') {
      iVar4 = 0;
LAB_ram_0000c18e:
      FUN_ram_0000bf24();
      if (iVar4 == 0) goto LAB_ram_0000c194;
      cVar5 = -5;
      break;
    }
    FUN_ram_0000bd0e();
  } while( true );
  while( true ) {
    FUN_ram_0000bf5a();
    iVar6 = FUN_ram_0000bfb6(0xa0);
    if (iVar6 != 0) break;
    cVar5 = cVar5 + -1;
    if (cVar5 == '\0') {
      iVar4 = 0;
      break;
    }
  }
  FUN_ram_0000bf24();
  if ((iVar4 == 0) || (iVar6 = FUN_ram_0000c036(uVar7), iVar6 == 0)) {
LAB_ram_0000c194:
    iVar4 = 0;
  }
  else {
    iVar6 = 0;
    do {
      FUN_ram_0000bd0e();
      bVar2 = extraout_a2[iVar6];
      uVar7 = FUN_ram_0000c09a(iVar8 + -1 <= iVar6);
      iVar6 = iVar6 + 1;
      if (bVar2 != uVar7) {
        iVar4 = 0;
        break;
      }
    } while (iVar6 != iVar8);
    FUN_ram_0000bf24();
  }
  return iVar4;
}



// FUNCTION ram:0000c274 FUN_ram_0000c274
// THUNK false
// CALLS ram:0000c036 FUN_ram_0000c036
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000c09a FUN_ram_0000c09a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001716 FUN_ram_00001716

undefined4 FUN_ram_0000c274(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_a1;
  int extraout_a2;
  undefined8 uVar3;
  
  gp = &observed_global_pointer;
  if (param_2 != 0) {
    FUN_ram_00001716();
    iVar1 = FUN_ram_0000c036();
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = 0;
      do {
        FUN_ram_0000bd0e();
        uVar3 = FUN_ram_0000c09a(extraout_a1 + -1 <= iVar1);
        *(undefined8 *)(extraout_a2 + iVar1) = uVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 != extraout_a1);
      FUN_ram_0000bf24();
      uVar2 = 1;
    }
    return uVar2;
  }
  return 1;
}



// FUNCTION ram:0000c2b4 FUN_ram_0000c2b4
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000c11a FUN_ram_0000c11a
// CALLS ram:00001716 FUN_ram_00001716

undefined4 FUN_ram_0000c2b4(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_a2;
  uint uVar5;
  undefined8 uVar6;
  
  gp = &observed_global_pointer;
  uVar6 = FUN_ram_00001716();
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar2 = (uint)uVar6;
  uVar5 = 0;
  while( true ) {
    FUN_ram_0000bd0e();
    if (uVar4 == 0) {
      return 1;
    }
    uVar1 = 0x20 - (uVar2 & 0x1f) & 0xff;
    if ((int)(uVar4 - uVar5) < (int)uVar1) {
      uVar1 = uVar4 - uVar5 & 0xff;
    }
    iVar3 = FUN_ram_0000c11a(uVar2,uVar1,extraout_a2 + uVar5);
    if ((iVar3 == 0) && (iVar3 = FUN_ram_0000c11a(uVar2,uVar1,extraout_a2 + uVar5), iVar3 == 0))
    break;
    uVar5 = uVar5 + uVar1 & 0xff;
    uVar2 = uVar2 + uVar1 & 0xffff;
    if (uVar4 <= uVar5) {
      return 1;
    }
  }
  gp = &observed_global_pointer;
  return 0;
}



// FUNCTION ram:0000c318 FUN_ram_0000c318
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000c318(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000bd0e();
  puVar3 = (undefined4 *)&DAT_ram_0800f700;
  puVar2 = &DAT_ram_200043f0;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar3 != (undefined4 *)0x800f800);
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000c34a FUN_ram_0000c34a
// THUNK false
// CALLS ram:0000c318 FUN_ram_0000c318
// CALLS ram:0000d4c2 FUN_ram_0000d4c2
// CALLS ram:0000d4ee FUN_ram_0000d4ee
// CALLS ram:0000d4e0 FUN_ram_0000d4e0
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be6a FUN_ram_0000be6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000c34a(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  FUN_ram_0000c318();
  FUN_ram_0000d4c2();
  FUN_ram_0000d4ee(&DAT_ram_0800f700);
  FUN_ram_0000d4e0();
  FUN_ram_0000be6a(&DAT_ram_200043f0,&DAT_ram_200043d0,0x20);
  _DAT_ram_40022004 = 0xcdef89ab;
  _DAT_ram_40022024 = 0xcdef89ab;
  do {
  } while ((_DAT_ram_4002200c & 1) != 0);
  _DAT_ram_40022010 = _DAT_ram_40022010 & 0xfffeffff | 0x80000;
  puVar2 = (undefined4 *)&DAT_ram_0800f700;
  puVar3 = &DAT_ram_200043f0;
  do {
    *puVar2 = *puVar3;
    do {
    } while ((_DAT_ram_4002200c & 1) != 0);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    uVar1 = _DAT_ram_40022010 & 0xfffeffff;
    _DAT_ram_40022010 = uVar1 | 0x40000;
  } while (puVar2 != (undefined4 *)0x800f800);
  _DAT_ram_40022014 = &DAT_ram_0800f700;
  do {
  } while ((_DAT_ram_4002200c & 1) != 0);
  _DAT_ram_40022010 = uVar1 | 0x48040;
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000c440 FUN_ram_0000c440
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:0000c34a FUN_ram_0000c34a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

void FUN_ram_0000c440(void)

{
  undefined8 extraout_fa5;
  
  gp = &observed_global_pointer;
  FUN_ram_00001730();
  DAT_ram_200043d0 = 0x78563412;
  DAT_ram_20004490 = extraout_fa5;
  DAT_ram_200044b0 = FUN_ram_000082b6(&DAT_ram_200043d0,7);
  FUN_ram_0000c34a();
  FUN_ram_00001754();
  return;
}



// FUNCTION ram:0000c772 FUN_ram_0000c772
// THUNK false

/* WARNING: Removing unreachable block (ram,0x0000c7b8) */
/* WARNING: Removing unreachable block (ram,0x0000c7ac) */
/* WARNING: Removing unreachable block (ram,0x0000c7bc) */
/* WARNING: Removing unreachable block (ram,0x0000c88a) */
/* WARNING: Removing unreachable block (ram,0x0000c950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000c772(void)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  uint in_a3;
  short sVar4;
  char cVar5;
  
  gp = &observed_global_pointer;
  if ((_DAT_ram_40000410 & 1) != 0) {
    DAT_ram_20000198 = 1;
    if (DAT_ram_2000008d != '\0') {
      DAT_ram_2000008d = DAT_ram_2000008d + -1;
    }
    if ((DAT_ram_200000f4 != '\0') &&
       (DAT_ram_20000104._6_2_ = DAT_ram_20000104._6_2_ + -1, DAT_ram_20000104._6_2_ == 0)) {
      DAT_ram_200000f4 = '\0';
      DAT_ram_200000f5 = 1;
    }
    if ((DAT_ram_2000008a != '\0') &&
       (DAT_ram_20000020 = DAT_ram_20000020 + -1, DAT_ram_20000020 == 0)) {
      DAT_ram_2000008b = 1;
    }
    DAT_ram_20000118._4_2_ = DAT_ram_20000118._4_2_ + -1;
    if (((DAT_ram_20000118._4_2_ == 0) &&
        (DAT_ram_20000118._4_2_ = 10000, DAT_ram_20000118._6_1_ != '\0')) &&
       (cVar5 = DAT_ram_20000118._6_1_ + -1, bVar1 = DAT_ram_20000118._6_1_ == '\x01',
       DAT_ram_20000118._6_1_ = cVar5, bVar1)) {
      DAT_ram_20000118._0_1_ = 1;
    }
    sVar4 = 10000;
    if (10000 < in_a3) {
      _DAT_ram_2000018c = (uint6)_DAT_ram_2000018c;
      sVar4 = 0x192;
    }
    if (DAT_ram_20000196 < (ushort)(sVar4 + 1U)) {
      DAT_ram_20000194 = 0;
      _DAT_ram_2000018c = CONCAT11(1,DAT_ram_2000018c);
    }
    if (((DAT_ram_20000153 != '\0') && (DAT_ram_20000154 != 0)) &&
       (DAT_ram_20000154 = DAT_ram_20000154 + -1, DAT_ram_20000154 == 0)) {
      DAT_ram_20000156 = 1;
    }
    if ((_DAT_ram_20000eb5 != 0) &&
       (_DAT_ram_20000eb5 =
             CONCAT11((char)(_DAT_ram_20000eb5 - 1 >> 8),
                      (char)((_DAT_ram_20000eb5 - 1) * 0x10000 >> 0x10)), _DAT_ram_20000eb5 == 0)) {
      DAT_ram_20000eb2 = 0;
      DAT_ram_20000eb3 = 0;
      if (DAT_ram_20000ebb != '\0') {
        DAT_ram_20000ebb = '\0';
        DAT_ram_200000b5 = 0;
      }
    }
    uVar3 = _DAT_ram_20000eb9 & 0xff;
    if (_DAT_ram_20000eb9 != 0) {
      bVar2 = (byte)((_DAT_ram_20000eb9 - 1) * 0x10000 >> 0x10);
      _DAT_ram_20000eb9 = CONCAT11((char)(_DAT_ram_20000eb9 - 1 >> 8),bVar2);
      uVar3 = (ushort)bVar2;
      if (_DAT_ram_20000eb9 == 0) {
        DAT_ram_20000eb7 = 0;
        DAT_ram_20000eb8 = 0;
      }
    }
    if (((DAT_ram_20000164._6_1_ != '\0') && (DAT_ram_20000164._6_1_ != '\0' || uVar3 != 0)) &&
       (_DAT_ram_200001dc = DAT_ram_200001bc, (ushort)(uVar3 << 8 | uVar3) == 1)) {
      DAT_ram_20000164._5_1_ = 1;
    }
  }
  return;
}



// FUNCTION ram:0000d338 FUN_ram_0000d338
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d338(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40021000 = _DAT_ram_40021000 | 1;
  _DAT_ram_40022000 = _DAT_ram_40022000 & 0xfffffffc | 2;
  _DAT_ram_40021004 = _DAT_ram_40021004 & 0xf8ffff0f;
  return;
}



// FUNCTION ram:0000d3b4 FUN_ram_0000d3b4
// THUNK false

void FUN_ram_0000d3b4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3b6 FUN_ram_0000d3b6
// THUNK false

void FUN_ram_0000d3b6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3b8 FUN_ram_0000d3b8
// THUNK false

void FUN_ram_0000d3b8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3ba FUN_ram_0000d3ba
// THUNK false

void FUN_ram_0000d3ba(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3bc FUN_ram_0000d3bc
// THUNK false

void FUN_ram_0000d3bc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3be FUN_ram_0000d3be
// THUNK false

void FUN_ram_0000d3be(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3c0 FUN_ram_0000d3c0
// THUNK false

void FUN_ram_0000d3c0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3c2 FUN_ram_0000d3c2
// THUNK false

void FUN_ram_0000d3c2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3c4 FUN_ram_0000d3c4
// THUNK false

void FUN_ram_0000d3c4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3c6 FUN_ram_0000d3c6
// THUNK false

void FUN_ram_0000d3c6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3cc FUN_ram_0000d3cc
// THUNK false

void FUN_ram_0000d3cc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3ce FUN_ram_0000d3ce
// THUNK false

void FUN_ram_0000d3ce(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3d0 FUN_ram_0000d3d0
// THUNK false

void FUN_ram_0000d3d0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3d2 FUN_ram_0000d3d2
// THUNK false

void FUN_ram_0000d3d2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3d4 FUN_ram_0000d3d4
// THUNK false

void FUN_ram_0000d3d4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3d6 FUN_ram_0000d3d6
// THUNK false

void FUN_ram_0000d3d6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3d8 FUN_ram_0000d3d8
// THUNK false

void FUN_ram_0000d3d8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3da FUN_ram_0000d3da
// THUNK false

void FUN_ram_0000d3da(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3dc FUN_ram_0000d3dc
// THUNK false

void FUN_ram_0000d3dc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3de FUN_ram_0000d3de
// THUNK false

void FUN_ram_0000d3de(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3e0 FUN_ram_0000d3e0
// THUNK false

void FUN_ram_0000d3e0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3e2 FUN_ram_0000d3e2
// THUNK false

void FUN_ram_0000d3e2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3e4 FUN_ram_0000d3e4
// THUNK false

void FUN_ram_0000d3e4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3e6 FUN_ram_0000d3e6
// THUNK false

void FUN_ram_0000d3e6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3e8 FUN_ram_0000d3e8
// THUNK false

void FUN_ram_0000d3e8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3ea FUN_ram_0000d3ea
// THUNK false

void FUN_ram_0000d3ea(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3ec FUN_ram_0000d3ec
// THUNK false

void FUN_ram_0000d3ec(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3ee FUN_ram_0000d3ee
// THUNK false

void FUN_ram_0000d3ee(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3f2 FUN_ram_0000d3f2
// THUNK false

void FUN_ram_0000d3f2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3f4 FUN_ram_0000d3f4
// THUNK false

void FUN_ram_0000d3f4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3f6 FUN_ram_0000d3f6
// THUNK false

void FUN_ram_0000d3f6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3f8 FUN_ram_0000d3f8
// THUNK false

void FUN_ram_0000d3f8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3fa FUN_ram_0000d3fa
// THUNK false

void FUN_ram_0000d3fa(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d3fe FUN_ram_0000d3fe
// THUNK false

void FUN_ram_0000d3fe(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d400 FUN_ram_0000d400
// THUNK false

void FUN_ram_0000d400(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d402 FUN_ram_0000d402
// THUNK false

void FUN_ram_0000d402(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d404 FUN_ram_0000d404
// THUNK false

void FUN_ram_0000d404(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d406 FUN_ram_0000d406
// THUNK false

void FUN_ram_0000d406(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d408 FUN_ram_0000d408
// THUNK false

void FUN_ram_0000d408(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d40a FUN_ram_0000d40a
// THUNK false

void FUN_ram_0000d40a(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d40c FUN_ram_0000d40c
// THUNK false

void FUN_ram_0000d40c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION ram:0000d410 FUN_ram_0000d410
// THUNK false
// CALLS ram:0000d338 FUN_ram_0000d338

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d410(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  gp = &observed_global_pointer;
  puVar1 = &DAT_ram_0000f1f4;
  puVar2 = &DAT_ram_20000000;
  do {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_ram_20000080);
  puVar1 = (undefined4 *)&DAT_ram_20000080;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_ram_200044f0);
  _DAT_csreg_0bc0 = 0x1f;
  _DAT_csreg_0804 = 7;
  _mstatus = _mstatus | 0x88;
  _mtvec = &UNK_ram_00001607;
  FUN_ram_0000d338();
  mepc = &UNK_ram_0000ceba;
  return;
}



// FUNCTION ram:0000d49a FUN_ram_0000d49a
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_0000d49a(uint param_1)

{
  gp = &observed_global_pointer;
  if ((_DAT_ram_40010414 & param_1) != 0) {
    return (param_1 & _DAT_ram_40010400) != 0;
  }
  return false;
}



// FUNCTION ram:0000d4b8 FUN_ram_0000d4b8
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d4b8(undefined4 param_1)

{
  gp = &observed_global_pointer;
  _DAT_ram_40010414 = param_1;
  return;
}



// FUNCTION ram:0000d4c2 FUN_ram_0000d4c2
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d4c2(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40022004 = 0xcdef89ab;
  _DAT_ram_40022024 = 0xcdef89ab;
  return;
}



// FUNCTION ram:0000d4e0 FUN_ram_0000d4e0
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d4e0(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40022010 = _DAT_ram_40022010 | 0x8000;
  return;
}



// FUNCTION ram:0000d4ee FUN_ram_0000d4ee
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d4ee(undefined4 param_1)

{
  gp = &observed_global_pointer;
  _DAT_ram_40022014 = param_1;
  do {
  } while ((_DAT_ram_4002200c & 1) != 0);
  _DAT_ram_40022010 = _DAT_ram_40022010 & 0xfffdffff | 0x40;
  return;
}



// FUNCTION ram:0000d648 FUN_ram_0000d648
// THUNK false

void FUN_ram_0000d648(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000d650 FUN_ram_0000d650
// THUNK false

uint FUN_ram_0000d650(uint param_1)

{
  gp = &observed_global_pointer;
  return param_1 & 0x1ff;
}



// FUNCTION ram:0000d658 FUN_ram_0000d658
// THUNK false

bool FUN_ram_0000d658(uint param_1,uint param_2)

{
  gp = &observed_global_pointer;
  return (param_1 & param_2) != 0;
}



// FUNCTION ram:0000d662 FUN_ram_0000d662
// THUNK false

void FUN_ram_0000d662(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  gp = &observed_global_pointer;
  puVar3 = (undefined4 *)((int)param_1 + param_3);
  if (((((uint)param_2 ^ (uint)param_1) & 3) == 0) && (3 < param_3)) {
    for (; ((uint)param_1 & 3) != 0; param_1 = (undefined4 *)((int)param_1 + 1)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(char *)param_1 = (char)((uint)param_1 & 3);
    }
    param_4 = (undefined4 *)((uint)puVar3 & 0xfffffffc);
    for (; param_1 < param_4 + -8; param_1 = param_1 + 9) {
      uVar1 = param_2[1];
      uVar10 = param_2[2];
      uVar9 = param_2[3];
      uVar8 = param_2[4];
      uVar7 = param_2[5];
      uVar2 = param_2[6];
      uVar6 = param_2[7];
      *param_1 = *param_2;
      uVar5 = param_2[8];
      param_1[1] = uVar1;
      param_1[2] = uVar10;
      param_1[3] = uVar9;
      param_1[4] = uVar8;
      param_1[5] = uVar7;
      param_1[6] = uVar2;
      param_1[7] = uVar6;
      param_1[8] = uVar5;
      param_2 = param_2 + 9;
    }
    for (; param_1 < param_4; param_1 = param_1 + 1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
    }
  }
  if (puVar3 <= param_1) {
    return;
  }
  do {
    puVar4 = (undefined4 *)((int)param_1 + 1);
    *(char *)param_1 = (char)param_4;
    param_1 = puVar4;
  } while (puVar4 < puVar3);
  return;
}


// TOTAL completed=126 failed=0

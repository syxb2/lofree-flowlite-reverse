// Input: /Users/baijiale/Code/lofree-flowlite-reverse/research/firmware/analysis/oe921-v166-analysis.elf
// SHA256: b57e247e19049f11f27cd76beac317d3db19d1815377e8a137d3b4d223de128f
// Language: RISCV:LE:32:OE921_XW
// Pseudocode is analysis output, not recovered source.

// FUNCTION ram:00001600 entry
// THUNK true

// FUNCTION ram:00001700 FUN_ram_00001700
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_00001700(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001708 FUN_ram_00001708
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_00001708(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001716 FUN_ram_00001716
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_00001716(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001730 FUN_ram_00001730
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_00001730(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000173c FUN_ram_0000173c
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_0000173c(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001740 FUN_ram_00001740
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_00001740(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000174a FUN_ram_0000174a
// THUNK false

/* WARNING: This is an inlined function */

void FUN_ram_0000174a(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00001754 FUN_ram_00001754
// THUNK false

/* WARNING: This is an inlined function */

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



// FUNCTION ram:00001808 FUN_ram_00001808
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00001808(undefined1 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  _DAT_ram_e000e184 = 0x2000;
  DAT_ram_20000218 = param_1;
  for (uVar1 = 0; (int)uVar1 < param_3 + -1; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_ram_20000219)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  _DAT_ram_40023428 = (short)param_3;
  _DAT_ram_4002342a = _DAT_ram_4002342a & 0xfffc;
  _DAT_ram_e000e104 = 0x2000;
  return;
}



// FUNCTION ram:00001866 FUN_ram_00001866
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00003908 FUN_ram_00003908
// CALLS ram:00001808 FUN_ram_00001808
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00001866(void)

{
  undefined4 uStack_34;
  undefined2 uStack_30;
  byte bStack_2e;
  undefined1 uStack_24;
  
  gp = &observed_global_pointer;
  if (((((cRam20000087 == '\0' && cRam20000086 == '\0') && DAT_ram_20000088 == '\0') &&
       DAT_ram_20000084 == '\0') && DAT_ram_20000083 == '\0') && cRam20000085 == '\0') {
    gp = &observed_global_pointer;
    return;
  }
  FUN_ram_0000be50(&uStack_34,0x11);
  uStack_34 = 0xa08;
  uStack_30 = 0x8a00;
  if (cRam20000087 != '\0') {
    bStack_2e = bStack_2e | 2;
  }
  if (DAT_ram_20000088 != '\0') {
    bStack_2e = bStack_2e | 4;
  }
  if (cRam20000085 != '\0') {
    bStack_2e = bStack_2e | 0x10;
  }
  if (PTR_DAT_ram_20004390_ram_20000044[10] != '\0') {
    bStack_2e = bStack_2e | 0x20;
  }
  if (DAT_ram_20000083 != '\0') {
    bStack_2e = bStack_2e | 0x40;
  }
  if (cRam20000086 != '\0') {
    bStack_2e = bStack_2e | 0x80;
  }
  uStack_24 = FUN_ram_000082b6(&uStack_34,0x10);
  if (DAT_ram_2000032e == '\n') {
    if ((((DAT_ram_2000002d != '\0') && (DAT_ram_200000f3 == '\0')) && (DAT_ram_2000023e != '\0'))
       && ((DAT_ram_200000f1 != '\0' && (_DAT_ram_2000024c == 0)))) {
      DAT_ram_2000002d = 0;
      FUN_ram_00001808(8,(int)&uStack_34 + 1,0x11);
      cRam20000081 = 0;
      DAT_ram_20000083 = 0;
      DAT_ram_20000084 = 0;
      cRam20000085 = 0;
      cRam20000086 = 0;
      cRam20000087 = 0;
      DAT_ram_20000088 = 0;
      return;
    }
  }
  else {
    cRam20000081 = '\x01';
    FUN_ram_00003908(&DAT_ram_200003b8,&uStack_34);
  }
  if (cRam20000081 != '\0') {
    DAT_ram_20000088 = 0;
    cRam20000087 = 0;
    cRam20000086 = 0;
    cRam20000085 = 0;
    DAT_ram_20000084 = 0;
    DAT_ram_20000083 = 0;
    cRam20000081 = 0;
    return;
  }
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:000019c4 FUN_ram_000019c4
// THUNK false
// CALLS ram:00008708 FUN_ram_00008708
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000019c4(void)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  gp = &observed_global_pointer;
  if (DAT_ram_20000177 == '\0') {
    return;
  }
  DAT_ram_20000177 = 0;
  bVar2 = DAT_ram_2000015c & 0xc0;
  if ((bVar2 - 0x40 & 0x80) != 0) {
    if ((DAT_ram_2000015c & 0xc0) != 0) {
      DAT_ram_20000177 = 0;
      return;
    }
    if ((DAT_ram_2000015c & 7) != 5) {
      if ((DAT_ram_2000015c & 7) != 6) {
        return;
      }
      DAT_ram_20000100 = 1;
      DAT_ram_20000106 = DAT_ram_2000015d;
      return;
    }
    DAT_ram_20000100 = 1;
    DAT_ram_20000102 = DAT_ram_2000015d;
    DAT_ram_20000104 = DAT_ram_2000015e;
    DAT_ram_20000103 = (char)DAT_ram_2000015d >> 7;
    DAT_ram_20000105 = DAT_ram_2000015e >> 7;
    return;
  }
  switch(DAT_ram_2000015c & 7) {
  case 0:
    DAT_ram_200000f6 = '\x01';
    DAT_ram_200000f8 = 1;
    DAT_ram_20003070 = DAT_ram_20003070 | 1;
    if (bVar2 == 0x80) {
      DAT_ram_20003071 = DAT_ram_2000015d | DAT_ram_20003071;
    }
    else {
      DAT_ram_20003071 = ~DAT_ram_2000015d & DAT_ram_20003071;
    }
    break;
  case 1:
    uVar6 = (uint)DAT_ram_2000015d;
    puVar1 = &DAT_ram_20003070;
    uVar5 = 0;
    if (bVar2 != 0x80) {
LAB_ram_00001adc:
      uVar3 = uVar5 + 1 & 0xff;
      if ((byte)puVar1[2] != uVar6) goto LAB_ram_00001b20;
      DAT_ram_20003070 = DAT_ram_20003070 | 1;
      DAT_ram_200000f8 = 1;
      puVar1 = &DAT_ram_20003073 + uVar5;
      do {
        puVar7 = puVar1;
        uVar5 = uVar5 + 1 & 0xff;
        puVar7[-1] = *puVar7;
        puVar1 = puVar7 + 1;
      } while (uVar5 != 5);
      *puVar7 = 0;
      goto LAB_ram_00001a94;
    }
    pbVar4 = &DAT_ram_20003072;
    do {
      if (*pbVar4 == 0) {
        *pbVar4 = DAT_ram_2000015d;
        DAT_ram_20003070 = DAT_ram_20003070 | 1;
        DAT_ram_200000f8 = 1;
        goto LAB_ram_00001a94;
      }
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != (byte *)0x20003077);
    if (DAT_ram_2000015d == 0) break;
    bVar2 = (&DAT_ram_2000307b)[DAT_ram_2000015d >> 3];
    if (((int)(uint)bVar2 >> (uVar6 & 7) & 1U) == 0) {
      (&DAT_ram_2000307b)[DAT_ram_2000015d >> 3] = (byte)(1 << (uVar6 & 7)) | bVar2;
    }
    DAT_ram_20003070 = DAT_ram_20003070 | 2;
    DAT_ram_200000f9 = 1;
    goto LAB_ram_00001a94;
  case 2:
    DAT_ram_200000f6 = '\x01';
    DAT_ram_20003070 = DAT_ram_20003070 | 4;
    DAT_ram_200000fa = 1;
    if (bVar2 == 0x80) {
      DAT_ram_20003078 = DAT_ram_2000015d;
      DAT_ram_20003079 = DAT_ram_2000015e;
    }
    else {
      DAT_ram_20003078 = 0;
      DAT_ram_20003079 = '\0';
    }
    break;
  case 3:
    DAT_ram_200000f6 = '\x01';
    DAT_ram_20003070 = DAT_ram_20003070 | 8;
    DAT_ram_200000fb = 1;
    if (bVar2 == 0x80) {
      DAT_ram_2000307a = DAT_ram_2000015d;
    }
    else {
      DAT_ram_2000307a = 0;
    }
    break;
  case 4:
    DAT_ram_20000100 = 1;
    if (bVar2 == 0x80) {
      DAT_ram_20000101 = DAT_ram_20000101 | DAT_ram_2000015d & 0x1f;
    }
    else {
      DAT_ram_20000101 = DAT_ram_20000101 & ~(DAT_ram_2000015d & 0x1f);
    }
  }
switchD_ram_00001a02_default:
  if (DAT_ram_200000f6 == '\0') {
    return;
  }
  FUN_ram_00008708(&DAT_ram_20003070);
  return;
LAB_ram_00001b20:
  puVar1 = puVar1 + 1;
  uVar5 = uVar3;
  if (uVar3 == 5) goto code_r0x00001b28;
  goto LAB_ram_00001adc;
code_r0x00001b28:
  if (DAT_ram_2000015d == 0) goto switchD_ram_00001a02_default;
  (&DAT_ram_2000307b)[DAT_ram_2000015d >> 3] =
       ~(byte)(1 << (uVar6 & 7)) & (&DAT_ram_2000307b)[DAT_ram_2000015d >> 3];
  DAT_ram_20003070 = DAT_ram_20003070 | 2;
  DAT_ram_200000f9 = 1;
LAB_ram_00001a94:
  DAT_ram_200000f6 = '\x01';
  goto switchD_ram_00001a02_default;
}



// FUNCTION ram:00001c54 FUN_ram_00001c54
// THUNK false
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00001808 FUN_ram_00001808

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00001c54(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_20000100 != '\0') {
    _DAT_ram_e000e184 = 0x2000;
    if (((DAT_ram_2000002e != '\0') && (DAT_ram_200000f3 == '\0')) && (DAT_ram_200000f1 != '\0')) {
      DAT_ram_2000002e = '\0';
      if (DAT_ram_2000023e == '\0') {
        DAT_ram_20000098 = DAT_ram_20000101;
        uRam2000009b = DAT_ram_20000106;
        uRam20000099 = 0;
        uRam2000009a = 0;
        uRam4002342c = 4;
      }
      else {
        FUN_ram_0000be6a(&DAT_ram_20000098,&DAT_ram_20000101,7);
        uRam4002342c = 7;
      }
      _DAT_ram_4002342e = _DAT_ram_4002342e & 0xfffc;
      DAT_ram_20000102 = 0;
      DAT_ram_20000103 = 0;
      DAT_ram_20000104 = 0;
      DAT_ram_20000105 = 0;
      DAT_ram_20000106 = 0;
      uRam20000107 = 0;
      DAT_ram_20000100 = '\0';
    }
    _DAT_ram_e000e104 = 0x2000;
  }
  if (((DAT_ram_200000f8 != '\0') && (DAT_ram_2000002c != '\0')) &&
     ((DAT_ram_200000f3 == '\0' && (DAT_ram_200000f1 != '\0')))) {
    DAT_ram_2000002c = '\0';
    _DAT_ram_e000e184 = 0x2000;
    DAT_ram_20000090 = DAT_ram_20003071;
    uRam20000091 = 0;
    uRam20000092 = DAT_ram_20003072;
    uRam20000093 = DAT_ram_20003073;
    uRam20000094 = uRam20003074;
    uRam20000095 = uRam20003075;
    uRam20000096 = uRam20003076;
    uRam20000097 = uRam20003077;
    uRam40023424 = 8;
    _DAT_ram_40023426 = _DAT_ram_40023426 & 0xfffc;
    _DAT_ram_e000e104 = 0x2000;
    DAT_ram_200000f8 = '\0';
    DAT_ram_20003070 = DAT_ram_20003070 & 0xfe;
  }
  if (((DAT_ram_200000f9 != '\0') && (DAT_ram_2000002d != '\0')) &&
     ((DAT_ram_200000f3 == '\0' && ((DAT_ram_2000023e != '\0' && (DAT_ram_200000f1 != '\0')))))) {
    DAT_ram_2000002d = '\0';
    FUN_ram_00001808(4,&DAT_ram_2000307b,0x15);
    DAT_ram_200000f9 = '\0';
    DAT_ram_20003070 = DAT_ram_20003070 & 0xfd;
  }
  if ((((DAT_ram_200000fa != '\0') && (DAT_ram_2000002d != '\0')) && (DAT_ram_200000f3 == '\0')) &&
     ((DAT_ram_2000023e != '\0' && (DAT_ram_200000f1 != '\0')))) {
    DAT_ram_2000002d = '\0';
    FUN_ram_00001808(3,&DAT_ram_20003078,3);
    DAT_ram_200000fa = '\0';
    DAT_ram_20003070 = DAT_ram_20003070 & 0xfb;
  }
  if (((DAT_ram_200000fb != '\0') && (DAT_ram_2000002d != '\0')) &&
     ((DAT_ram_200000f3 == '\0' && ((DAT_ram_2000023e != '\0' && (DAT_ram_200000f1 != '\0')))))) {
    DAT_ram_2000002d = '\0';
    FUN_ram_00001808(2,&DAT_ram_2000307a,2);
    DAT_ram_200000fb = '\0';
    DAT_ram_20003070 = DAT_ram_20003070 & 0xf7;
  }
  return;
}



// FUNCTION ram:00001eae FUN_ram_00001eae
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:000086d4 FUN_ram_000086d4
// CALLS ram:00001c54 FUN_ram_00001c54
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000caba FUN_ram_0000caba
// CALLS ram:00008bc4 FUN_ram_00008bc4
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_00001eae(void)

{
  bool bVar1;
  char cVar2;
  
  gp = &observed_global_pointer;
  DAT_ram_20000020 = 5000;
  DAT_ram_2000008b = '\0';
  FUN_ram_000086d4();
  FUN_ram_0000be50(&DAT_ram_20003170,0x26e);
  FUN_ram_0000bd0e();
  uRam20000edc = 1;
  uRam2000352b = 1;
LAB_ram_00001f08:
  do {
    FUN_ram_0000caba(*PTR_DAT_ram_20004390_ram_20000044);
    DAT_ram_2000008d = *PTR_DAT_ram_20004390_ram_20000044;
    do {
      FUN_ram_0000bd0e();
      if (DAT_ram_20000198 != '\0') {
        DAT_ram_20000198 = '\0';
        FUN_ram_00008bc4();
        if ((cRam200034e7 != '\0') && (DAT_ram_20000080 != '\0')) {
          DAT_ram_20000080 = '\0';
          DAT_ram_20000102 = 1;
          DAT_ram_20000104 = 1;
          DAT_ram_20000100 = 1;
          cRam20000082 = '\x01';
          cRam200034e7 = '\0';
          DAT_ram_20000103 = 0;
          DAT_ram_20000105 = 0;
          cRam2000008c = '\x1e';
        }
        if (((cRam2000008c != '\0') && (cRam20000082 != '\0')) &&
           (cVar2 = cRam2000008c + -1, bVar1 = cRam2000008c == '\x01', cRam2000008c = cVar2, bVar1))
        {
          DAT_ram_20000102 = 2;
          DAT_ram_20000104 = 2;
          cRam20000082 = '\0';
          DAT_ram_20000103 = 0;
          DAT_ram_20000105 = 0;
          DAT_ram_20000100 = 1;
        }
      }
      if (DAT_ram_2000032e != '\n') {
        gp = &observed_global_pointer;
        return;
      }
      if (cRam20000089 != DAT_ram_200000f3) {
        cRam20000089 = DAT_ram_200000f3;
        DAT_ram_200000f4 = 1;
        DAT_ram_2000010a = 500;
        DAT_ram_200000f5 = '\0';
      }
      if (DAT_ram_200000f3 != '\0') {
        if ((DAT_ram_200000f1 != '\0') && (DAT_ram_200000f5 != '\0')) {
          DAT_ram_200000f5 = 0;
          uRam200000bb = 1;
          return;
        }
        if (DAT_ram_200000f1 == '\0') {
          if (DAT_ram_2000008a == '\0') {
            DAT_ram_20000020 = 5000;
            DAT_ram_2000008b = '\0';
            DAT_ram_2000008a = '\x01';
          }
          if (DAT_ram_2000008b != '\0') {
            DAT_ram_2000008a = 0;
            DAT_ram_2000008b = 0;
            uRam200000bb = 1;
            return;
          }
        }
        else {
          DAT_ram_2000008b = '\0';
          DAT_ram_2000008a = '\0';
        }
      }
      if (DAT_ram_2000008d == '\0') {
        FUN_ram_00001c54();
        goto LAB_ram_00001f08;
      }
    } while (DAT_ram_2000018f == '\0');
    DAT_ram_2000018f = '\0';
  } while( true );
}



// FUNCTION ram:0000205c FUN_ram_0000205c
// THUNK false
// CALLS ram:0000ca88 FUN_ram_0000ca88
// CALLS ram:00008dc4 FUN_ram_00008dc4
// CALLS ram:00003038 FUN_ram_00003038
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000bc80 FUN_ram_0000bc80
// CALLS ram:000085e8 FUN_ram_000085e8
// CALLS ram:0000cae4 FUN_ram_0000cae4
// CALLS ram:0000bd32 FUN_ram_0000bd32
// CALLS ram:0000bd7a FUN_ram_0000bd7a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000caa0 FUN_ram_0000caa0
// CALLS ram:0000bbb8 FUN_ram_0000bbb8
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000cae2 FUN_ram_0000cae2
// CALLS ram:00008414 FUN_ram_00008414

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000205c(void)

{
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  FUN_ram_000085e8();
  FUN_ram_0000ca88();
  FUN_ram_0000bc80();
  FUN_ram_0000bd32();
  do {
    FUN_ram_00008dc4();
    if ((DAT_ram_200000f2 != '\0') && (DAT_ram_200000f3 != '\0')) break;
  } while (DAT_ram_200000f3 != '\0');
  DAT_ram_20000020 = 0;
  DAT_ram_2000008b = 0;
  FUN_ram_0000caa0();
  uRam4002680c = 0x85;
  DAT_ram_40026802 = DAT_ram_40026802 | 1;
  uRam4002680d = 0x50;
  FUN_ram_0000bbb8();
  FUN_ram_00003038();
  FUN_ram_0000cae2(0x1c200);
  FUN_ram_0000cae4(1000000);
  FUN_ram_00008414();
  DAT_ram_2000008e = 1;
  uRam200034e7 = 1;
  if (cRam2000008f != '\0') {
    cRam2000008f = '\0';
    if (DAT_ram_200000f3 != '\0') {
      _DAT_ram_40011020 = 0x20001;
      _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffffff00 | 0x88;
      uRam40010018 = uRam40010018 & 0xfffffff0 | 3;
      FUN_ram_0000be1e(8,1);
      uRam40010018 = uRam40010018 & 0xfffffff0 | 0xc;
      _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffffff00 | 0x84;
      _DAT_ram_40011020 = 0x10002;
    }
  }
  FUN_ram_0000bd7a();
  DAT_ram_20000ee2 = 1;
  DAT_ram_200000f3 = 0;
  uRam200000bb = 0;
  return;
}



// FUNCTION ram:00002174 FUN_ram_00002174
// THUNK false
// CALLS ram:0000d714 FUN_ram_0000d714
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00002174(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  uVar2 = FUN_ram_0000d714(param_2);
  *param_1 = ((char)uVar2 + '\x01') * '\x02';
  param_1[1] = '\x03';
  for (uVar3 = 0; (uVar3 & 0xff) < (uVar2 & 0xff); uVar3 = uVar3 + 1) {
    cVar1 = *(char *)(param_2 + uVar3);
    param_1[3] = '\0';
    param_1[2] = cVar1;
    param_1 = param_1 + 2;
  }
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



// FUNCTION ram:00002208 FUN_ram_00002208
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:000021bc FUN_ram_000021bc

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00002208(void)

{
  gp = &observed_global_pointer;
  if (cRam2000009f == '\0') {
    uRam40021014 = uRam40021014 | 0x1000;
    _DAT_ram_40021018 = _DAT_ram_40021018 | 0x11;
    _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffffff00 | 0x84;
    _DAT_ram_40011020 = 2;
    uRam40010018 = uRam40010018 & 0xffffff30 | 0xcc;
    uRam40023400 = 0;
    FUN_ram_000021bc();
    DAT_ram_40023403 = 0;
    uRam40023400 = 0x29;
    DAT_ram_40023406 = 0xff;
    uRam40023401 = 0x81;
    uRam40023402 = 7;
    _DAT_ram_e000e104 = 0x2000;
    uRame000e050 = 0x2d;
    pcRame000e060 = FUN_ram_00002360;
    cRam2000009f = '\x01';
  }
  return;
}



// FUNCTION ram:000022b8 FUN_ram_000022b8
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bd62 FUN_ram_0000bd62
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000022b8(void)

{
  gp = &observed_global_pointer;
  if (cRam2000009f != '\0') {
    _DAT_ram_40021018 = _DAT_ram_40021018 | 0x10;
    _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffffff00 | 0x88;
    _DAT_ram_40011014 = 0x20000;
    uRam40010018 = uRam40010018 & 0xffffff30 | 0xc0;
    uRam40023400 = 6;
    FUN_ram_0000bd62(1000);
    uRam40023400 = 0;
    uRame000e050 = 0x2d;
    uRame000e060 = 0x2361;
    _DAT_ram_e000e184 = 0x2000;
    _DAT_ram_4001101c = _DAT_ram_4001101c & 0xffffff0f | 0x80;
    _DAT_ram_40011014 = 0x20000;
    cRam2000009f = '\0';
  }
  return;
}



// FUNCTION ram:00002360 FUN_ram_00002360
// THUNK false
// CALLS ram:00003334 FUN_ram_00003334
// CALLS ram:0000be88 FUN_ram_0000be88
// CALLS ram:0000d662 FUN_ram_0000d662
// CALLS ram:000021bc FUN_ram_000021bc

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00002360(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  
  uVar3 = DAT_ram_200001dc;
  puVar2 = DAT_ram_200000a0;
  gp = &observed_global_pointer;
  DAT_ram_200000ad = DAT_ram_40023406;
  DAT_ram_200000ae = DAT_ram_40023407;
  if ((DAT_ram_40023406 & 2) == 0) {
    if ((DAT_ram_40023406 & 1) != 0) {
      DAT_ram_20000239 = 0;
      DAT_ram_20000238 = 0;
      DAT_ram_200000f2 = '\0';
      DAT_ram_200000f3 = 0;
      DAT_ram_40023403 = 0;
      uVar10 = FUN_ram_000021bc();
      DAT_ram_2000002c = 1;
      DAT_ram_2000002d = 1;
      DAT_ram_2000002e = 1;
      DAT_ram_2000023e = 1;
      DAT_ram_20000240 = '\x01';
      DAT_ram_20000241 = '\x01';
      DAT_ram_20000242 = '\x01';
      DAT_ram_20000250 = '\0';
      DAT_ram_40023406 = 1;
      return uVar10;
    }
    if ((DAT_ram_40023406 & 4) == 0) {
      return param_1;
    }
    if ((DAT_ram_40023405 & 4) != 0) {
      DAT_ram_200000f3 = 1;
      DAT_ram_40023406 = 4;
      return param_1;
    }
    DAT_ram_200000f3 = 0;
    DAT_ram_40023406 = 4;
    return param_1;
  }
  bVar13 = DAT_ram_40023407 & 0x30;
  if (bVar13 == 0x10) {
    DAT_ram_200000f7 = 1;
    DAT_ram_40023406 = 2;
    return param_1;
  }
  if (bVar13 < 0x11) {
    if ((DAT_ram_40023407 & 0x30) != 0) {
      DAT_ram_40023406 = 2;
      return param_1;
    }
    if ((DAT_ram_40023407 & 0x3f) == 0) {
      if (((DAT_ram_40023407 & 0x40) != 0) && (DAT_ram_20000250 != '\0')) {
        param_1 = FUN_ram_0000be88(&DAT_ram_20000298,&DAT_ram_200001d8,_DAT_ram_20000254);
        if ((DAT_ram_20000256 == 8) && ((DAT_ram_20000257 == 1 && (DAT_ram_20000298 == '\b')))) {
          if (_DAT_ram_20000254 == 0x11) {
            param_1 = FUN_ram_00003334(&DAT_ram_20000298);
          }
        }
        else if ((DAT_ram_20000256 == 0) && ((DAT_ram_20000257 == 0 && (DAT_ram_200000a5 == 9)))) {
          if (_DAT_ram_20000254 == 1) {
            DAT_ram_20000080 = DAT_ram_20000254;
            DAT_ram_2000032c = DAT_ram_20000298;
            if (DAT_ram_2000032d != DAT_ram_20000298) {
              DAT_ram_2000032d = DAT_ram_2000032c;
              DAT_ram_20000ee2 = DAT_ram_20000254;
            }
          }
        }
        DAT_ram_20000250 = '\0';
      }
      DAT_ram_40023406 = 2;
      _DAT_ram_40023420 = 0;
      _DAT_ram_40023422 = 0x40;
      return param_1;
    }
    DAT_ram_40023406 = 2;
    return param_1;
  }
  if (bVar13 == 0x20) {
    bVar13 = DAT_ram_40023407 & 0x3f;
    if (bVar13 == 0x21) {
      DAT_ram_2000002c = 1;
      DAT_ram_40023406 = 2;
      _DAT_ram_40023426 = (_DAT_ram_40023426 & 0xfffc | 2) ^ 0x40;
      return param_1;
    }
    if (0x21 < bVar13) {
      if (bVar13 == 0x22) {
        DAT_ram_2000002d = 1;
        DAT_ram_40023406 = 2;
        _DAT_ram_4002342a = (_DAT_ram_4002342a & 0xfffc | 2) ^ 0x40;
        return param_1;
      }
      if (bVar13 == 0x23) {
        DAT_ram_2000002e = 1;
        DAT_ram_40023406 = 2;
        _DAT_ram_4002342e = (_DAT_ram_4002342e & 0xfffc | 2) ^ 0x40;
        return param_1;
      }
      DAT_ram_40023406 = 2;
      return param_1;
    }
    if (bVar13 != 0x20) {
      DAT_ram_40023406 = 2;
      return param_1;
    }
    if (_DAT_ram_200000aa == 0) {
      _DAT_ram_40023422 = 0x80;
    }
    if ((DAT_ram_200000a4 & 0x60) == 0) {
      if (DAT_ram_200000a5 == 5) {
        DAT_ram_40023403 = DAT_ram_40023403 & 0x80 | DAT_ram_20000238;
        DAT_ram_40023406 = 2;
        return param_1;
      }
      if (DAT_ram_200000a5 == 6) {
        uVar10 = 0x40;
        if (_DAT_ram_200000aa < 0x40) {
          uVar10 = (uint)_DAT_ram_200000aa;
        }
        uVar12 = FUN_ram_0000d662(&DAT_ram_200001d8,DAT_ram_200000a0,uVar10);
        _DAT_ram_200000aa =
             CONCAT11((char)(_DAT_ram_200000aa - uVar10 >> 8),
                      (char)((_DAT_ram_200000aa - uVar10) * 0x10000 >> 0x10));
        DAT_ram_200000a0 = puVar2 + uVar10;
        DAT_ram_40023406 = 2;
        _DAT_ram_40023420 = (ushort)uVar10;
        _DAT_ram_40023422 = _DAT_ram_40023422 ^ 0x40;
        return uVar12;
      }
      DAT_ram_40023406 = 2;
      return param_1;
    }
    DAT_ram_40023406 = 2;
    return param_1;
  }
  if (bVar13 != 0x30) {
    DAT_ram_40023406 = 2;
    return param_1;
  }
  DAT_ram_20000250 = '\0';
  _DAT_ram_40023422 = 0x88;
  bVar1 = DAT_ram_200001d8;
  DAT_ram_200000a4 = DAT_ram_200001d8;
  DAT_ram_200000a5 = DAT_ram_200001d9;
  bVar13 = (byte)DAT_ram_200001da;
  DAT_ram_200000a7 = (byte)((ushort)DAT_ram_200001da >> 8);
  _DAT_ram_200000a8 = DAT_ram_200001dc;
  _DAT_ram_200000aa = DAT_ram_200001de;
  uVar4 = _DAT_ram_200000aa;
  DAT_ram_200000b0 = 0;
  DAT_ram_200000ac = '\0';
  uVar10 = 0x10;
  DAT_ram_200000aa = (byte)DAT_ram_200001de;
  DAT_ram_200000ab = (char)(DAT_ram_200001de >> 8);
  DAT_ram_200000a8 = (byte)DAT_ram_200001dc;
  DAT_ram_200000a6 = bVar13;
  _DAT_ram_200000a8 = uVar3;
  _DAT_ram_200000aa = uVar4;
  bVar5 = DAT_ram_20000238;
  bVar6 = DAT_ram_2000023b;
  bVar7 = DAT_ram_2000023c;
  bVar8 = DAT_ram_2000023d;
  bVar9 = DAT_ram_2000023e;
  if ((DAT_ram_200001d8 & 0x60) == 0x20) {
    if ((char)DAT_ram_200001d8 < '\0') {
      if (DAT_ram_200001d9 == 2) {
        bVar13 = DAT_ram_2000023b;
        if (((DAT_ram_200000a8 == 0) || (bVar13 = DAT_ram_2000023c, DAT_ram_200000a8 == 1)) ||
           (bVar13 = DAT_ram_2000023d, DAT_ram_200000a8 == 2)) {
LAB_ram_00002d70:
          _DAT_ram_200001d8 = CONCAT11(DAT_ram_200001d9,bVar13);
          DAT_ram_200000b0 = 1;
          goto LAB_ram_0000280c;
        }
      }
      else if (DAT_ram_200001d9 == 3) {
        bVar13 = DAT_ram_2000023e;
        if (DAT_ram_200001dc < 3) goto LAB_ram_00002d70;
      }
      else if ((DAT_ram_200001d9 == 1) && (DAT_ram_200001dc < 3)) {
        DAT_ram_20000251 = DAT_ram_200000aa;
        DAT_ram_20000252 = DAT_ram_200000ab;
        iVar11 = 0;
        DAT_ram_20000258 = bVar13;
        do {
          (&DAT_ram_20000258)[iVar11] = 0;
          iVar11 = iVar11 + 1;
        } while (iVar11 != 9);
        uVar10 = 2;
        uVar4 = _DAT_ram_200000aa;
        if (uVar3 == 2) {
          uVar10 = 2;
          uVar3 = _DAT_ram_200000a8;
          if (bVar13 != 0) goto switchD_ram_000029ba_caseD_1;
          DAT_ram_20000258 = DAT_ram_20000101;
LAB_ram_00002cb2:
          uVar12 = 8;
        }
        else if (bVar13 == 1) {
          DAT_ram_20000259 = 0;
          DAT_ram_2000025a = 0;
          DAT_ram_2000025b = 0;
          DAT_ram_2000025c = 0;
          DAT_ram_2000025d = 0;
          DAT_ram_2000025e = 0;
          DAT_ram_2000025f = 0;
          DAT_ram_20000260 = 0;
          uVar12 = 9;
        }
        else if (bVar13 == 8) {
          uVar12 = 0x11;
        }
        else if (bVar13 == 3) {
          uVar12 = 3;
        }
        else {
          if (bVar13 != 2) {
            uVar3 = _DAT_ram_200000a8;
            if (bVar13 == 0) goto LAB_ram_00002cb2;
            goto switchD_ram_000029ba_caseD_1;
          }
          uVar12 = 2;
        }
        if (uVar12 < CONCAT11(DAT_ram_20000252,DAT_ram_20000251)) {
          DAT_ram_200000b0 = (ushort)uVar12;
          uVar15 = 0;
          do {
            uVar10 = (uint)(&DAT_ram_20000258)[uVar15];
            (&DAT_ram_200001d8)[uVar15] = (&DAT_ram_20000258)[uVar15];
            uVar15 = uVar15 + 1 & 0xff;
            uVar3 = _DAT_ram_200000a8;
            bVar5 = DAT_ram_20000238;
            bVar6 = DAT_ram_2000023b;
            bVar7 = DAT_ram_2000023c;
            bVar8 = DAT_ram_2000023d;
            bVar9 = DAT_ram_2000023e;
          } while (uVar15 < uVar12);
        }
        else {
          DAT_ram_200000b0 = CONCAT11(DAT_ram_20000252,DAT_ram_20000251);
          for (uVar12 = 0; uVar10 = (uint)DAT_ram_20000251, uVar3 = _DAT_ram_200000a8,
              bVar5 = DAT_ram_20000238, bVar6 = DAT_ram_2000023b, bVar7 = DAT_ram_2000023c,
              bVar8 = DAT_ram_2000023d, bVar9 = DAT_ram_2000023e,
              uVar12 < CONCAT11(DAT_ram_20000252,DAT_ram_20000251); uVar12 = uVar12 + 1 & 0xff) {
            (&DAT_ram_200001d8)[uVar12] = (&DAT_ram_20000258)[uVar12];
          }
        }
        goto LAB_ram_0000280c;
      }
    }
    else if (DAT_ram_200001d9 == 10) {
      bVar6 = DAT_ram_200000a7;
      if (((DAT_ram_200000a8 == 0) ||
          (bVar6 = DAT_ram_2000023b, bVar7 = DAT_ram_200000a7, DAT_ram_200000a8 == 1)) ||
         (bVar7 = DAT_ram_2000023c, bVar8 = DAT_ram_200000a7, DAT_ram_200000a8 == 2))
      goto LAB_ram_0000280c;
    }
    else if (DAT_ram_200001d9 == 0xb) {
      bVar9 = bVar13;
      if (DAT_ram_200001dc < 3) goto LAB_ram_0000280c;
    }
    else if (DAT_ram_200001d9 == 9) {
      DAT_ram_20000250 = '\0';
      DAT_ram_20000257 = DAT_ram_200000a8;
      _DAT_ram_20000254 = DAT_ram_200001de;
      DAT_ram_20000251 = DAT_ram_200000aa;
      DAT_ram_20000252 = DAT_ram_200000ab;
      DAT_ram_20000253 = DAT_ram_200000a7;
      DAT_ram_20000256 = bVar13;
      if (((DAT_ram_200000a8 != 0) && (bVar13 == 8)) || (bVar13 == 0)) {
        if (DAT_ram_200001de != 0) {
          DAT_ram_20000250 = '\x01';
          goto LAB_ram_0000280c;
        }
        _DAT_ram_200001d8 = 0x900;
LAB_ram_00002746:
        DAT_ram_200000aa = 1;
        goto LAB_ram_00002956;
      }
    }
  }
  else if (((DAT_ram_200001d8 & 0x60) != 0x40) && ((_DAT_ram_200001d8 & 0x60) == 0)) {
    DAT_ram_200000a9 = (byte)(DAT_ram_200001dc >> 8);
    if ((char)DAT_ram_200001d8 < '\0') {
      if (DAT_ram_200001d9 == 6) {
        if (DAT_ram_200000a7 == 3) {
          if (bVar13 == 1) {
            DAT_ram_200000a0 = &DAT_ram_200001c8;
            DAT_ram_200000b0 = (ushort)DAT_ram_200001c8;
          }
          else if (bVar13 == 0) {
            DAT_ram_200000a0 = &DAT_ram_20000054;
            DAT_ram_200000b0 = (ushort)DAT_ram_20000054;
          }
          else {
            if (bVar13 != 2) goto LAB_ram_0000276a;
            DAT_ram_200000a0 = &DAT_ram_200001a8;
            DAT_ram_200000b0 = (ushort)DAT_ram_200001a8;
          }
        }
        else if (DAT_ram_200000a7 < 4) {
          if (DAT_ram_200000a7 == 1) {
            DAT_ram_200000b0 = (ushort)DAT_ram_0000d8c0;
            DAT_ram_200000a0 = &DAT_ram_0000d8c0;
          }
          else {
            if (DAT_ram_200000a7 != 2) goto LAB_ram_0000276a;
            DAT_ram_200000a0 = &DAT_ram_0000d86c;
            DAT_ram_200000b0 = 0x54;
          }
        }
        else if (DAT_ram_200000a7 == 0x21) {
          if (DAT_ram_200000a8 == 0) {
            DAT_ram_200000a0 = &DAT_ram_0000d87e;
          }
          else if (DAT_ram_200000a8 == 1) {
            DAT_ram_200000a0 = &DAT_ram_0000d897;
          }
          else {
            if (DAT_ram_200000a8 != 2) goto LAB_ram_0000276a;
            DAT_ram_200000a0 = &DAT_ram_0000d8b0;
          }
          DAT_ram_200000b0 = 9;
        }
        else if (DAT_ram_200000a7 == 0x22) {
          if (DAT_ram_200000a8 == 0) {
            DAT_ram_200000a0 = &DAT_ram_0000d73c;
            DAT_ram_200000b0 = 0x4d;
          }
          else if (DAT_ram_200000a8 == 1) {
            DAT_ram_200000a0 = &DAT_ram_0000d78c;
            DAT_ram_200000b0 = 0x85;
          }
          else {
            if (DAT_ram_200000a8 != 2) goto LAB_ram_0000276a;
            DAT_ram_200000a0 = &DAT_ram_0000d814;
            DAT_ram_200000b0 = 0x57;
          }
        }
        else {
LAB_ram_0000276a:
          DAT_ram_200000ac = -1;
        }
        puVar2 = DAT_ram_200000a0;
        if (DAT_ram_200000b0 < DAT_ram_200001de) {
          _DAT_ram_200000aa = DAT_ram_200000b0;
        }
        DAT_ram_200000b0 = 0x40;
        if (_DAT_ram_200000aa < 0x40) {
          DAT_ram_200000b0 = _DAT_ram_200000aa;
        }
        uVar10 = FUN_ram_0000d662(&DAT_ram_200001d8,DAT_ram_200000a0,DAT_ram_200000b0);
        DAT_ram_200000a0 = puVar2 + DAT_ram_200000b0;
        uVar3 = _DAT_ram_200000a8;
        bVar5 = DAT_ram_20000238;
        bVar6 = DAT_ram_2000023b;
        bVar7 = DAT_ram_2000023c;
        bVar8 = DAT_ram_2000023d;
        bVar9 = DAT_ram_2000023e;
        goto LAB_ram_0000280c;
      }
      if (DAT_ram_200001d9 < 7) {
        if (((DAT_ram_200001d9 != 0) || (_DAT_ram_200001d8 = 0, DAT_ram_200000a7 != 0)) ||
           ((bVar13 != 0 || ((DAT_ram_200000ab != '\0' || (DAT_ram_200000aa != 2))))))
        goto switchD_ram_000029ba_caseD_1;
        if (bVar1 != 0x81) {
          if (bVar1 == 0x82) {
            if ((DAT_ram_200000a9 != '\0') ||
               (((cVar14 = DAT_ram_20000240, DAT_ram_200000a8 != 0x81 &&
                 (cVar14 = DAT_ram_20000241, DAT_ram_200000a8 != 0x82)) &&
                (cVar14 = DAT_ram_20000242, DAT_ram_200000a8 != 0x83)))) goto LAB_ram_0000292e;
            if (cVar14 != '\x01') goto LAB_ram_0000293e;
            bVar13 = 1;
LAB_ram_00002940:
            _DAT_ram_200001d8 = (ushort)bVar13;
          }
          else if (((bVar1 == 0x80) && (DAT_ram_200000a9 == '\0')) && (DAT_ram_200000a8 == 0)) {
            if (DAT_ram_200000f2 != '\0') {
LAB_ram_0000293e:
              bVar13 = 2;
              goto LAB_ram_00002940;
            }
          }
          else {
LAB_ram_0000292e:
            DAT_ram_200000ac = -1;
          }
        }
        if (DAT_ram_200001de < 3) goto LAB_ram_0000280c;
        DAT_ram_200000aa = 2;
LAB_ram_00002956:
        DAT_ram_20000250 = '\0';
        _DAT_ram_200000aa = (ushort)DAT_ram_200000aa;
        goto LAB_ram_0000280c;
      }
      if (DAT_ram_200001d9 == 8) {
        if (((DAT_ram_200001d8 == 0x80) && (DAT_ram_200000a7 == 0)) &&
           (bVar1 = DAT_ram_20000239, bVar13 == 0)) goto joined_r0x0000270c;
      }
      else if (((DAT_ram_200001d9 == 10) && (DAT_ram_200001d8 == 0x81)) &&
              (bVar1 = DAT_ram_2000023a, DAT_ram_200000a8 = bVar13,
              DAT_ram_200000a9 = DAT_ram_200000a7, DAT_ram_200001dc < 3)) {
joined_r0x0000270c:
        if (((DAT_ram_200000a9 == '\0') && (DAT_ram_200000a8 == 0)) &&
           ((DAT_ram_200000ab == '\0' && (DAT_ram_200000aa == 1)))) {
          _DAT_ram_200001d8 = CONCAT11(DAT_ram_200001d9,bVar1);
          if (DAT_ram_200001de <= (DAT_ram_200001de & 0xff)) goto LAB_ram_0000280c;
          goto LAB_ram_00002746;
        }
      }
    }
    else {
      switch(DAT_ram_200001d9 - 1) {
      case 0:
        if (((DAT_ram_200001d8 != 1) && (DAT_ram_200000ab == '\0')) && (DAT_ram_200000aa == 0)) {
          if ((DAT_ram_200001d8 == 0) && (bVar13 == 1)) {
            DAT_ram_200000f2 = '\0';
            goto LAB_ram_0000280c;
          }
          if ((DAT_ram_200001d8 == 2) && (bVar13 == 0)) {
            if (DAT_ram_200000a8 == 0x81) {
              DAT_ram_20000240 = '\0';
              _DAT_ram_40023426 = 2;
              goto LAB_ram_0000280c;
            }
            if (DAT_ram_200000a8 == 0x82) {
              DAT_ram_20000241 = '\0';
              _DAT_ram_4002342a = 2;
              goto LAB_ram_0000280c;
            }
            if (DAT_ram_200000a8 == 0x83) {
              DAT_ram_20000242 = '\0';
              _DAT_ram_4002342e = 2;
              goto LAB_ram_0000280c;
            }
          }
        }
        break;
      case 2:
        if (((DAT_ram_200001d8 != 1) && (DAT_ram_200000ab == '\0')) && (DAT_ram_200000aa == 0)) {
          if ((DAT_ram_200001d8 == 0) && (bVar13 == 1)) {
            DAT_ram_200000f2 = '\x01';
            goto LAB_ram_0000280c;
          }
          if ((DAT_ram_200001d8 == 2) && (bVar13 == 0)) {
            if (DAT_ram_200000a8 == 0x81) {
              DAT_ram_20000240 = '\x01';
              _DAT_ram_40023426 = _DAT_ram_40023426 | 3;
              goto LAB_ram_0000280c;
            }
            if (DAT_ram_200000a8 == 0x82) {
              DAT_ram_20000241 = '\x01';
              _DAT_ram_4002342a = _DAT_ram_4002342a | 3;
              goto LAB_ram_0000280c;
            }
            if (DAT_ram_200000a8 == 0x83) {
              DAT_ram_20000242 = '\x01';
              _DAT_ram_4002342e = _DAT_ram_4002342e | 3;
              goto LAB_ram_0000280c;
            }
          }
        }
        break;
      case 4:
        if (((((DAT_ram_200001d8 == 0) && (DAT_ram_200000a9 == '\0')) && (DAT_ram_200000a8 == 0)) &&
            ((DAT_ram_200000ab == '\0' && (DAT_ram_200000aa == 0)))) &&
           ((DAT_ram_200000a7 == 0 && (bVar5 = bVar13, -1 < (char)bVar13)))) goto LAB_ram_0000280c;
        break;
      case 8:
        if (((DAT_ram_200001d8 == 0) && (DAT_ram_200000a9 == '\0')) &&
           (((DAT_ram_200000a8 == 0 && ((DAT_ram_200000ab == '\0' && (DAT_ram_200000aa == 0)))) &&
            (bVar13 < 2)))) {
          if (bVar13 == 0) {
            DAT_ram_20000239 = 0;
            DAT_ram_20000240 = '\x01';
            DAT_ram_20000241 = '\x01';
            DAT_ram_20000242 = '\x01';
          }
          else {
            DAT_ram_20000240 = '\0';
            DAT_ram_20000241 = '\0';
            DAT_ram_20000242 = '\0';
            DAT_ram_20000239 = bVar13;
          }
        }
        else {
          DAT_ram_200000ac = -1;
        }
        DAT_ram_200000f1 = 1;
        goto LAB_ram_0000280c;
      case 10:
        if (((DAT_ram_200001d8 == 1) && (DAT_ram_200000ab == '\0')) &&
           ((DAT_ram_200000aa == 0 &&
            (((DAT_ram_200000a7 == 0 && (bVar13 == 0)) && (DAT_ram_200001dc < 3)))))) {
          DAT_ram_2000023a = 0;
          goto LAB_ram_0000280c;
        }
      }
    }
  }
switchD_ram_000029ba_caseD_1:
  _DAT_ram_200000aa = uVar4;
  _DAT_ram_200000a8 = uVar3;
  DAT_ram_200000ac = -1;
  uVar3 = _DAT_ram_200000a8;
  bVar5 = DAT_ram_20000238;
  bVar6 = DAT_ram_2000023b;
  bVar7 = DAT_ram_2000023c;
  bVar8 = DAT_ram_2000023d;
  bVar9 = DAT_ram_2000023e;
LAB_ram_0000280c:
  DAT_ram_2000023e = bVar9;
  DAT_ram_2000023d = bVar8;
  DAT_ram_2000023c = bVar7;
  DAT_ram_2000023b = bVar6;
  DAT_ram_20000238 = bVar5;
  _DAT_ram_200000a8 = uVar3;
  if (DAT_ram_200000ac == -1) {
    DAT_ram_40023406 = 2;
    _DAT_ram_40023422 = 0xcf;
    return uVar10;
  }
  if ((char)DAT_ram_200000a4 < '\0') {
    _DAT_ram_40023420 = 0x40;
    if (_DAT_ram_200000aa < 0x41) {
      _DAT_ram_40023420 = _DAT_ram_200000aa;
    }
    _DAT_ram_200000aa =
         CONCAT11((char)((uint)_DAT_ram_200000aa - (uint)_DAT_ram_40023420 >> 8),
                  (char)(((uint)_DAT_ram_200000aa - (uint)_DAT_ram_40023420) * 0x10000 >> 0x10));
    _DAT_ram_40023422 = 0x40;
    DAT_ram_40023406 = 2;
    DAT_ram_200000b0 = _DAT_ram_40023420;
    return uVar10;
  }
  if (_DAT_ram_200000aa != 0) {
    DAT_ram_40023406 = 2;
    _DAT_ram_40023422 = 0x80;
    return uVar10;
  }
  DAT_ram_40023406 = 2;
  _DAT_ram_40023420 = 0;
  _DAT_ram_40023422 = 0x40;
  return uVar10;
}



// FUNCTION ram:00002fae FUN_ram_00002fae
// THUNK false
// CALLS ram:00005d18 FUN_ram_00005d18
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00006444 FUN_ram_00006444
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000abc6 FUN_ram_0000abc6

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00002fae(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  
  gp = &observed_global_pointer;
  FUN_ram_0000abc6();
  DAT_ram_20001ae3 = *PTR_DAT_ram_2000016c_ram_20000040;
  DAT_ram_20001adb = (&UNK_ram_0000da40)[DAT_ram_20001ae3];
  DAT_ram_20001ad1 = PTR_DAT_ram_2000016c_ram_20000040[2];
  FUN_ram_00006444();
  FUN_ram_00005d18(&DAT_ram_20001ad0);
  puVar1 = PTR_DAT_ram_20004390_ram_20000044;
  DAT_ram_20000190 = 0;
  DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
  PTR_DAT_ram_20004390_ram_20000044[6] = PTR_DAT_ram_20004390_ram_20000044[6] & 0xe7;
  uVar2 = DAT_ram_20000128;
  if (puVar1[4] == '\x01') {
    uRam20001adc = DAT_ram_20001adb;
    uRam20001add = DAT_ram_20001adb;
    DAT_ram_20001adb = 0x60;
    DAT_ram_20000128 = 0;
    DAT_ram_20001ae3 = 0;
    uRam20000129 = uVar2;
    DAT_ram_200000c6 = 1;
    DAT_ram_20001ad0 = 1;
    DAT_ram_20001ad1 = 1;
  }
  uRam2000010d = puVar1[4] == '\x01';
  return;
}



// FUNCTION ram:00003038 FUN_ram_00003038
// THUNK false
// CALLS ram:0000bed6 FUN_ram_0000bed6
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000c20e FUN_ram_0000c20e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000c204 FUN_ram_0000c204
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00003038(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40021018 = _DAT_ram_40021018 | 0x1c;
  uRam40010800 = uRam40010800 & 0xf0000000 | 0x1111111;
  uRam40010804 = uRam40010804 & 0xf0000000 | 0x1111111;
  uRam4001081c = uRam4001081c & 0xf0000000 | 0x1111111;
  uRam40010814 = 0x7f7f7f;
  _DAT_ram_40010c00 = 0x11111111;
  _DAT_ram_40010c04 = _DAT_ram_40010c04 & 0xf000 | 0x11110111;
  _DAT_ram_40010c1c = 0x11110111;
  uRam40010c10 = 0xffff;
  uRam40010c20 = 0xf7;
  uRam40010004 = uRam40010004 & 0xf8ffffff | 0x4000000;
  FUN_ram_0000bed6();
  FUN_ram_0000bf0c();
  FUN_ram_0000c204();
  FUN_ram_0000c20e();
  uRam40010804 = uRam40010804 & 0xfffffff | 0x40000000;
  _DAT_ram_40011004 = _DAT_ram_40011004 & 0xf0ffffff | 0x8000000;
  _DAT_ram_4001101c = _DAT_ram_4001101c & 0xfffff0ff | 0x800;
  _DAT_ram_40011020 = 4;
  _DAT_ram_40010c1c = _DAT_ram_40010c1c & 0xffff0fff | 0x4000;
  uRam4001081c = uRam4001081c & 0xfffffff | 0x10000000;
  uRam40010820 = 0x80;
  uRam40010c10 = 0xc037;
  _DAT_ram_40011000 = _DAT_ram_40011000 & 0xff0000ff | 0x448400;
  _DAT_ram_40011010 = 8;
  return;
}



// FUNCTION ram:000031ec FUN_ram_000031ec
// THUNK false
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000031ec(void)

{
  gp = &observed_global_pointer;
  if ((((DAT_ram_2000002d != '\0') && (DAT_ram_200000f3 == '\0')) && (DAT_ram_2000023e != '\0')) &&
     ((DAT_ram_200000f1 != '\0' && (_DAT_ram_2000024c == 0)))) {
    DAT_ram_2000002d = 0;
    _DAT_ram_e000e184 = 0x2000;
    FUN_ram_0000be6a(&DAT_ram_20000218,0x20000300,0x11);
    _DAT_ram_40023428 = 0x11;
    _DAT_ram_4002342a = _DAT_ram_4002342a & 0xfffc;
    _DAT_ram_e000e104 = 0x2000;
    DAT_ram_200000b5 = 0;
    return;
  }
  return;
}



// FUNCTION ram:0000326e FUN_ram_0000326e
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000326e(void)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(&DAT_ram_200000b4,2);
  FUN_ram_0000be50(&DAT_ram_200002d8,0x11);
  FUN_ram_0000be50(0x200002ec,0x11);
  FUN_ram_0000be50(0x20000300,0x11);
  return;
}



// FUNCTION ram:0000329e FUN_ram_0000329e
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000031ec FUN_ram_000031ec
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00003908 FUN_ram_00003908
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000329e(undefined1 param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  uRam20000300 = 8;
  bRam20000305 = (byte)param_3 | 0x80;
  uRam20000302 = 0;
  uRam20000303 = 0;
  uRam20000304 = 0;
  uVar3 = 0;
  iVar2 = 0x20000300;
  uRam20000301 = param_1;
  while( true ) {
    if (param_3 <= (uVar3 & 0xff)) break;
    puVar1 = (undefined1 *)(param_2 + uVar3);
    uVar3 = uVar3 + 1;
    *(undefined1 *)(iVar2 + 6) = *puVar1;
    iVar2 = iVar2 + 1;
  }
  uRam20000310 = FUN_ram_000082b6(0x20000300,0x10);
  if (DAT_ram_2000032e == '\n') {
    FUN_ram_000031ec();
  }
  else {
    if (cRam20000157 != '\0') {
      cRam20000157 = '\0';
    }
    FUN_ram_00003908(&DAT_ram_200003b8,0x20000300);
    FUN_ram_00003b26(&DAT_ram_200003b8);
    FUN_ram_0000be1e(10,1);
    FUN_ram_00003b26(&DAT_ram_200003b8);
    FUN_ram_0000be1e(0x14,1);
  }
  return;
}



// FUNCTION ram:00003334 FUN_ram_00003334
// THUNK false

void FUN_ram_00003334(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  gp = &observed_global_pointer;
  DAT_ram_200000b4 = 1;
  DAT_ram_200000b5 = 0;
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + iVar3);
    puVar2 = &DAT_ram_200002d8 + iVar3;
    iVar3 = iVar3 + 1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x11);
  return;
}



// FUNCTION ram:0000335c FUN_ram_0000335c
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:000082de FUN_ram_000082de
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000aa08 FUN_ram_0000aa08
// CALLS ram:000031ec FUN_ram_000031ec
// CALLS ram:0000c440 FUN_ram_0000c440
// CALLS ram:000085e8 FUN_ram_000085e8
// CALLS ram:00003908 FUN_ram_00003908
// CALLS ram:0000a7fa FUN_ram_0000a7fa
// CALLS ram:00008b80 FUN_ram_00008b80
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000bebc FUN_ram_0000bebc
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:0000a81a FUN_ram_0000a81a
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_0000335c(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uVar3;
  uint3 uVar4;
  
  gp = &observed_global_pointer;
  if (DAT_ram_200000b4 == '\0') goto LAB_ram_000035d2;
  FUN_ram_0000be6a(0x200002ec,&DAT_ram_200002d8,0x11);
  FUN_ram_0000be6a(0x20000300,0x200002ec,0x11);
  uRam20000300 = 8;
  if ((cRam200002ec == '\b') && (iVar2 = FUN_ram_000082de(0x200002ec,0x11), iVar2 != 0)) {
    FUN_ram_0000bd0e();
    if ((byte)(bRam200002ed - 7) < 2) {
      DAT_ram_2000018a = 0;
      DAT_ram_20000190 = 0;
      DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
      FUN_ram_00008b80();
      if ((PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01') &&
         (DAT_ram_20001ad1 == '\0' && DAT_ram_20000128 == '\0')) {
        DAT_ram_20001ad0 = 1;
        DAT_ram_20001ad1 = '\x01';
      }
    }
    if (bRam200002ed == 9) {
      if (bRam200002f1 == 0x80) {
        iVar2 = FUN_ram_0000aa08();
LAB_ram_000035b6:
        if (iVar2 == 0) goto LAB_ram_000035b8;
        goto LAB_ram_00003530;
      }
      goto LAB_ram_000033aa;
    }
    if (9 < bRam200002ed) {
      if (bRam200002ed == 0x10) {
        if (bRam200002f1 == 0x80) {
          bRam20000305 = 0x83;
          uRam20000306 = CONCAT11(cRam20000339,cRam20000338);
          uRam20000308 = CONCAT11(uRam20000308._1_1_,'U' - (cRam20000338 + cRam20000339));
          goto LAB_ram_00003530;
        }
      }
      else if (bRam200002ed < 0x11) {
        if (bRam200002ed == 0xd) {
          FUN_ram_0000c440();
          uRam20000302 = 0;
          uRam20000310 = FUN_ram_000082b6(0x20000300,0x10);
          FUN_ram_000031ec();
          FUN_ram_0000be1e(200,1);
          FUN_ram_000085e8();
          FUN_ram_0000be1e(10,1);
          FUN_ram_0000bebc();
        }
        else if ((bRam200002ed == 0xf) && (bRam200002f1 == 0x80)) {
          uRam20000306 = CONCAT11(uRam20000306._1_1_,uRam20003530);
          bRam20000305 = 0x81;
          goto LAB_ram_00003530;
        }
      }
      else if (bRam200002ed == 0xb2) {
        if (bRam200002f1 == 0) {
          uRam20000306 = CONCAT11(uRam20000306._1_1_,0xd1);
          bRam20000305 = 1;
        }
      }
      else if (bRam200002ed == 0xb4) {
        if (bRam200002f1 == 0) {
          bRam20000305 = 4;
          uRam20000306 = 0x7fb0;
          uRam20000308 = 0x1dbf;
          uRam20000302 = 0;
          goto LAB_ram_000035ba;
        }
      }
      else if ((bRam200002ed == 0x12) && (bRam200002f1 == 0x80)) {
        bRam20000305 = 0x82;
        uRam20000306 = 0x6601;
        goto LAB_ram_00003530;
      }
      goto LAB_ram_000033aa;
    }
    if (bRam200002ed == 3) {
      if (bRam200002f1 != 0x80) goto LAB_ram_000033aa;
      uRam20000306 = CONCAT11(uRam2000352e,uRam2000352b);
      uVar1 = uRam2000352d;
      uVar3 = uRam2000352c;
LAB_ram_0000355a:
      uRam20000308 = CONCAT11(uVar3,uVar1);
      bRam20000305 = 0x84;
      goto LAB_ram_00003530;
    }
    if (3 < bRam200002ed) {
      if (bRam200002ed == 7) {
        if (((char)bRam200002f1 < '\0') &&
           (bRam200002f1 = bRam200002f1 & 0x7f, (byte)(bRam200002f1 - 1) < 10)) {
          if (DAT_ram_20000048 != '\0') {
            uVar4 = CONCAT21(uRam200002ef,uRam200002ef._1_1_) & 0xffff;
            iVar2 = FUN_ram_0000c2b4(uVar4,bRam200002f1,0x200002f2);
            if (iVar2 != 0) {
              iVar2 = FUN_ram_0000a81a(uVar4,bRam200002f1);
              goto LAB_ram_000035b6;
            }
LAB_ram_0000362e:
            FUN_ram_0000a7fa(0);
          }
LAB_ram_000035b8:
          uRam20000302 = 2;
          goto LAB_ram_000035ba;
        }
      }
      else if (bRam200002ed < 8) {
        if ((bRam200002ed == 4) && (bRam200002f1 == 0x80)) {
          uRam20000306 = CONCAT11(DAT_ram_200034e0,DAT_ram_20003531);
          uVar1 = uRam20003529;
          uVar3 = uRam20003528;
          goto LAB_ram_0000355a;
        }
      }
      else {
        bRam200002f1 = bRam200002f1 & 0x7f;
        if ((byte)(bRam200002f1 - 1) < 10) {
          if (DAT_ram_20000048 != '\0') {
            bRam20000305 = bRam200002f1 | 0x80;
            iVar2 = FUN_ram_0000c274(CONCAT21(uRam200002ef,uRam200002ef._1_1_) & 0xffff,bRam200002f1
                                     ,0x20000306);
            if (iVar2 != 0) goto LAB_ram_00003530;
            goto LAB_ram_0000362e;
          }
          goto LAB_ram_000035b8;
        }
      }
      goto LAB_ram_000033aa;
    }
    if (bRam200002ed == 1) {
      if (bRam200002f1 != 0x88) goto LAB_ram_000033aa;
      cRam2000030a = cRam20000338;
      uRam20000306 = CONCAT11(cRam200002f3 * '\x02' + cRam200002f4 + cRam20000339,
                              bRam200002f2 + cRam200002f3 + cRam20000338);
      cRam2000030b = cRam20000339;
      uRam20000308 = CONCAT11(bRam200002f2 + cRam200002f5 * '\x04',
                              cRam200002f4 * '\x03' + cRam200002f5);
      if (DAT_ram_2000032e == '\n') {
        uRam2000030c = 2;
      }
      else {
        uRam2000030c = 0;
      }
    }
    else {
      if (((bRam200002ed != 2) || (bRam200002f1 != 0x81)) || (1 < bRam200002f2))
      goto LAB_ram_000033aa;
      bRam2000352a = bRam200002f2;
    }
LAB_ram_00003530:
    uRam20000302 = 0;
  }
  else {
LAB_ram_000033aa:
    uRam20000302 = 1;
  }
LAB_ram_000035ba:
  uRam20000310 = FUN_ram_000082b6(0x20000300,0x10);
  DAT_ram_200000b5 = '\x01';
  DAT_ram_200000b4 = '\0';
LAB_ram_000035d2:
  if (DAT_ram_200000b5 != '\0') {
    if (DAT_ram_2000032e == '\n') {
      FUN_ram_000031ec();
    }
    else {
      FUN_ram_00003908(&DAT_ram_200003b8,0x20000300);
    }
  }
  return;
}



// FUNCTION ram:000036e2 FUN_ram_000036e2
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_000036e2(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0x23 + param_1 + 0x583) = 1;
  uVar2 = 0;
  while ((uVar2 & 0xff) < param_3) {
    *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0x23 + param_1 + uVar2 + 1 + 0x583) =
         *(undefined1 *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
  }
  uVar1 = FUN_ram_000082b6((uint)*(byte *)(param_1 + 1) * 0x23 + 0x583 + param_1,param_3 + 1 & 0xff)
  ;
  *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0x23 + param_1 + param_3 + 1 + 0x583) = uVar1;
  *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0x23 + param_1 + 0x582) =
       *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0x23 + param_1 + 0x5a4) =
       *(undefined1 *)(param_2 + 0x21);
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  if (0x13 < *(byte *)(param_1 + 1)) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 200;
  *(undefined1 *)(param_1 + 0xafc) = 1;
  return;
}



// FUNCTION ram:00003798 FUN_ram_00003798
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00003798(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 1;
  uRam200003b4 = 6;
  uRam200003b5 = 6;
  uRam20000395 = param_2;
  uRam20000396 = param_3;
  FUN_ram_000036e2(param_1,0x20000394,4);
  return;
}



// FUNCTION ram:000037dc FUN_ram_000037dc
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Removing unreachable block (ram,0x000037e8) */

void FUN_ram_000037dc(byte *param_1,int param_2)

{
  gp = &observed_global_pointer;
  if ((param_1[1] + 1) % 0x14 == (uint)*param_1) {
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] - 1;
    }
    FUN_ram_0000be50(param_2 + 1,7);
    FUN_ram_0000be50(param_2 + 0xb,0x14);
  }
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 2;
  FUN_ram_0000be6a(0x20000395,param_2 + 1,7);
  FUN_ram_0000be6a(0x2000039c,param_2 + 0xb,0x14);
  uRam200003b4 = 0x1e;
  uRam200003b5 = 6;
  FUN_ram_000036e2(param_1,0x20000394,0x1c);
  return;
}



// FUNCTION ram:00003864 FUN_ram_00003864
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00003864(undefined4 param_1,int param_2,undefined1 param_3,undefined1 param_4,
                     undefined1 param_5)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 3;
  uRam20000395 = param_3;
  uRam20000396 = param_4;
  uRam20000397 = param_5;
  FUN_ram_0000be6a(0x20000398,param_2 + 1,7);
  uRam200003b4 = 0xd;
  uRam200003b5 = 6;
  FUN_ram_000036e2(param_1,0x20000394,0xb);
  return;
}



// FUNCTION ram:000038c0 FUN_ram_000038c0
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000038c0(undefined4 param_1)

{
  gp = &observed_global_pointer;
  if (DAT_ram_2000032f != '\x10') {
    FUN_ram_0000be50(0x20000394,0x22);
    uRam20000394 = 6;
    uRam20000395 = *PTR_DAT_ram_20004390_ram_20000044;
    uRam200003b4 = 6;
    uRam200003b5 = 0xb;
    FUN_ram_000036e2(param_1,0x20000394,4);
    return;
  }
  return;
}



// FUNCTION ram:00003908 FUN_ram_00003908
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00003908(int param_1,undefined4 param_2)

{
  gp = &observed_global_pointer;
  if (*(char *)(param_1 + 0xb03) != '\x01') {
    *(undefined1 *)(param_1 + 0xb03) = 1;
    FUN_ram_0000bd0e();
    FUN_ram_0000be50(0x20000394,0x22);
    uRam20000394 = 8;
    FUN_ram_0000be6a(0x20000395,param_2,0x11);
    uRam200003b4 = 0x17;
    uRam200003b5 = 6;
    FUN_ram_000036e2(param_1,0x20000394,0x15);
    return;
  }
  return;
}



// FUNCTION ram:00003964 FUN_ram_00003964
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00003964(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 9;
  uRam20000395 = param_4;
  uRam20000396 = param_3;
  FUN_ram_0000be6a(0x20000397,param_2,0x1b);
  uRam200003b4 = 0x20;
  uRam200003b5 = 6;
  FUN_ram_000036e2(param_1,0x20000394,0x1e);
  return;
}



// FUNCTION ram:000039bc FUN_ram_000039bc
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000039bc(undefined4 param_1,undefined1 param_2)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 10;
  uRam200003b4 = 6;
  uRam200003b5 = 0x20;
  uRam20000395 = param_2;
  FUN_ram_000036e2(param_1,0x20000394,4);
  return;
}



// FUNCTION ram:000039fc FUN_ram_000039fc
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000039fc(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 0xc;
  uRam200003b4 = 6;
  uRam200003b5 = 6;
  uRam20000395 = param_2;
  uRam20000396 = param_3;
  FUN_ram_000036e2(param_1,0x20000394,4);
  return;
}



// FUNCTION ram:00003a42 FUN_ram_00003a42
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00003a42(undefined4 param_1,undefined1 param_2)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 0xd;
  uRam200003b4 = 6;
  uRam200003b5 = 6;
  uRam20000395 = param_2;
  FUN_ram_000036e2(param_1,0x20000394,4);
  return;
}



// FUNCTION ram:00003a7e FUN_ram_00003a7e
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000036e2 FUN_ram_000036e2
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00003a7e(undefined4 param_1)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 0xe;
  uRam200003b4 = 6;
  uRam200003b5 = 10;
  FUN_ram_000036e2(param_1,0x20000394,4);
  return;
}



// FUNCTION ram:00003ab6 FUN_ram_00003ab6
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:000038c0 FUN_ram_000038c0
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00003ab6(void)

{
  gp = &observed_global_pointer;
  if (((DAT_ram_2000012b != '\0') || (DAT_ram_200000b4 == '\x01')) ||
     (DAT_ram_200000b8 != '\0' || DAT_ram_20000117 != '\0')) {
    return;
  }
  if ((ushort)(DAT_ram_200000b6 + 1) < 500) {
    DAT_ram_200000b6 = DAT_ram_200000b6 + 1;
    return;
  }
  DAT_ram_200000b6 = 0;
  if (DAT_ram_200000ba == '\x03') {
    if (((DAT_ram_2000032e != '\n') && (DAT_ram_200034e0 == '\0')) && (DAT_ram_2000032e != '\0')) {
      return;
    }
  }
  FUN_ram_000038c0(&DAT_ram_200003b8);
  return;
}



// FUNCTION ram:00003b26 FUN_ram_00003b26
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00003334 FUN_ram_00003334
// CALLS ram:000043ea FUN_ram_000043ea
// CALLS ram:0000bd62 FUN_ram_0000bd62
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000be50 FUN_ram_0000be50

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00003b26(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &observed_global_pointer;
  if ((((param_1[1] != *param_1) && (param_1[0xafc] != 0)) && (param_1[0xafa] == 0)) &&
     (((param_1[0xafb] == 0 && (param_1[0xaff] == 0)) &&
      ((param_1[0xb00] == 0 && ((_DAT_ram_40011008 >> 2 & 1) != 0)))))) {
    uRam40010814 = 0x800000;
    FUN_ram_000043ea(&DAT_ram_40004400,param_1 + (uint)*param_1 * 0x23 + 0x583,
                     param_1[(uint)*param_1 * 0x23 + 0x582]);
    param_1[0xafa] = 1;
    param_1[(uint)*param_1 * 0x23 + 0x5a3] = 0;
    param_1[0xafc] = 0;
    FUN_ram_0000bd62(1);
    uRam40010820 = 0x80;
    param_1[0xafd] = 100;
    param_1[0xafe] = 0;
  }
  if (param_1[0xafb] == 0) goto LAB_ram_00003d48;
  param_1[0xafb] = 0;
  if (param_1[(uint)*param_1 * 0x23 + 0x83f] != 2) goto switchD_ram_00003c3c_caseD_6;
  switch(param_1[(uint)*param_1 * 0x23 + 0x840] - 1) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 8:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
    bVar2 = param_1[(uint)*param_1 * 0x23 + 0x841];
    goto LAB_ram_00003c56;
  case 3:
    bVar2 = param_1[(uint)*param_1 * 0x23 + 0x841];
    uRam2000011b = 1;
LAB_ram_00003c56:
    if (bVar2 == 0) goto LAB_ram_00003cfe;
    break;
  case 5:
    if (DAT_ram_2000032e != 0x10) {
      if (param_1[(uint)*param_1 * 0x23 + 0x841] != 0) break;
      if ((DAT_ram_2000032e != 10) && (DAT_ram_2000018a == '\0')) {
        DAT_ram_20000ee2 = 1;
        DAT_ram_2000032c = param_1[(uint)*param_1 * 0x23 + 0x842];
      }
      bRam20000332 = param_1[(uint)*param_1 * 0x23 + 0x843];
      bRam20000333 = param_1[(uint)*param_1 * 0x23 + 0x844];
      bRam20000335 = param_1[(uint)*param_1 * 0x23 + 0x845];
      bRam20000336 = param_1[(uint)*param_1 * 0x23 + 0x846];
      uRam2000032b = 1;
      bRam20000338 = param_1[(uint)*param_1 * 0x23 + 0x847];
      bRam20000339 = param_1[(uint)*param_1 * 0x23 + 0x848];
      if (cRam20000323 == '\x10') {
        DAT_ram_200000ba = bRam20000333;
        DAT_ram_2000032e = bRam20000332;
        bRam20000334 = bRam20000333;
      }
    }
    goto LAB_ram_00003cfe;
  case 7:
    if (param_1[(uint)*param_1 * 0x23 + 0x841] == 0) {
      if (param_1[0xb03] != 0) {
        param_1[0xb03] = 0;
        DAT_ram_200000b5 = 0;
      }
      goto LAB_ram_00003cfe;
    }
    break;
  case 9:
    bRam2000033b = param_1[(uint)*param_1 * 0x23 + 0x842];
    uVar5 = (uint)bRam2000033b;
    FUN_ram_0000be50(0x2000033c,0x1b);
    iVar3 = 0x20000320;
    for (uVar4 = 0; (uVar4 & 0xff) < uVar5; uVar4 = uVar4 + 1) {
      *(byte *)(iVar3 + 0x1c) = param_1[uVar4 + (uint)*param_1 * 0x23 + 0x843];
      iVar3 = iVar3 + 1;
    }
    if (cRam20000323 == '\x03') {
      uRam20000329 = 1;
    }
    else if (cRam20000323 == '\x05') {
      uRam2000032a = 1;
    }
    goto LAB_ram_00003cfe;
  case 10:
    uRam2000011a = 1;
LAB_ram_00003cfe:
    *param_1 = *param_1 + 1;
    if (*param_1 == 0x14) {
      *param_1 = 0;
    }
    if (param_1[1] != *param_1) {
      param_1[0xafc] = 1;
    }
    uRam20000320 = 1;
    goto LAB_ram_00003d30;
  case 0xd:
    if (param_1[(uint)*param_1 * 0x23 + 0x841] == 0) {
      bRam20000338 = param_1[(uint)*param_1 * 0x23 + 0x842];
      bRam20000339 = param_1[(uint)*param_1 * 0x23 + 0x843];
      bRam2000352f = param_1[(uint)*param_1 * 0x23 + 0x844];
      bRam2000352e = param_1[(uint)*param_1 * 0x23 + 0x845];
      bRam2000352d = param_1[(uint)*param_1 * 0x23 + 0x846];
      bRam2000352c = param_1[(uint)*param_1 * 0x23 + 0x847];
      goto LAB_ram_00003cfe;
    }
  }
switchD_ram_00003c3c_caseD_6:
  if (param_1[8] == 0) {
    *param_1 = *param_1 + 1;
    if (*param_1 == 0x14) {
      *param_1 = 0;
    }
    if (param_1[0xb03] != 0) {
      param_1[0xb03] = 0;
      DAT_ram_200000b5 = 0;
    }
    uRam20000320 = 0;
  }
  else {
    param_1[8] = param_1[8] - 1;
    param_1[0xafc] = 1;
  }
LAB_ram_00003d30:
  param_1[9] = 10;
  param_1[0xafd] = 0;
  param_1[0xafe] = 0;
LAB_ram_00003d48:
  if (param_1[0xaff] == 0) goto LAB_ram_00003e0e;
  param_1[0xaff] = 0;
  DAT_ram_200000b6 = 0;
  if (param_1[(uint)param_1[2] * 0x23 + 0xb] == 3) {
    param_1[0xb00] = 1;
    param_1[(uint)param_1[2] * 0x23 + 0x2c7] = 1;
    param_1[(uint)param_1[2] * 0x23 + 0x2c8] = 0xf0;
    param_1[(uint)param_1[2] * 0x23 + 0x2c9] = 0;
    param_1[(uint)param_1[2] * 0x23 + 0x2ca] = 0;
    param_1[(uint)param_1[2] * 0x23 + 0x2cb] = 0;
    bVar2 = FUN_ram_000082b6(param_1 + (uint)param_1[2] * 0x23 + 0x2c7,5);
    param_1[(uint)param_1[2] * 0x23 + 0x2cc] = bVar2;
    param_1[(uint)param_1[2] * 0x23 + 0x2c6] = 6;
    DAT_ram_2000012f = 1;
    cRam20000022 = '(';
    cRam200000b9 = '\0';
  }
  else {
    if (param_1[(uint)param_1[2] * 0x23 + 0xb] == 8) {
      FUN_ram_00003334(param_1 + (uint)param_1[2] * 0x23 + 0xc);
      cRam20000022 = '(';
      param_1[0xb00] = 1;
      cRam200000b9 = '\0';
      param_1[(uint)param_1[2] * 0x23 + 0x2c7] = 1;
      bVar1 = param_1[2];
      bVar2 = 0xf1;
    }
    else {
      if (param_1[(uint)param_1[2] * 0x23 + 0xb] != 4) {
        if ((param_1[(uint)param_1[2] * 0x23 + 0xb] == 2) &&
           (param_1[(uint)param_1[2] * 0x23 + 0xc] == 0)) {
          if (cRam200000b9 == '\0') {
            cRam200000b9 = '\x01';
            if (param_1[2] == 0) {
              bVar2 = 0x13;
            }
            else {
              bVar2 = param_1[2] - 1;
            }
            param_1[2] = bVar2;
          }
          if (cRam20000022 != '\0') {
            cRam20000022 = cRam20000022 + -1;
            param_1[0xb00] = 1;
          }
        }
        goto LAB_ram_00003df6;
      }
      if ((DAT_ram_2000032e != 10) && (DAT_ram_2000032e != 0x10)) {
        DAT_ram_20000ee2 = 1;
        DAT_ram_2000032c = param_1[(uint)param_1[2] * 0x23 + 0xc];
        if ((byte)(DAT_ram_2000032e - 1) < 9) {
          if ((DAT_ram_200000ba == 3) && (param_1[(uint)param_1[2] * 0x23 + 0xd] != 3)) {
            DAT_ram_200000ba = 2;
          }
        }
        else if (DAT_ram_2000032e == 0) {
          if ((DAT_ram_200034f6 == '\0') && (DAT_ram_200034f8 == '\0' && cRam2000017d == '\0')) {
            if (DAT_ram_200000ba != param_1[(uint)param_1[2] * 0x23 + 0xd]) {
              DAT_ram_200000ba = param_1[(uint)param_1[2] * 0x23 + 0xd];
              DAT_ram_20000113 = 1;
            }
          }
          else {
            DAT_ram_200000b8 = 1;
          }
        }
      }
      bRam20000338 = param_1[(uint)param_1[2] * 0x23 + 0xe];
      bRam20000339 = param_1[(uint)param_1[2] * 0x23 + 0xf];
      cRam20000022 = '(';
      cRam200000b9 = '\0';
      param_1[(uint)param_1[2] * 0x23 + 0x2c7] = 1;
      bVar1 = param_1[2];
      bVar2 = 0xf2;
    }
    param_1[(uint)bVar1 * 0x23 + 0x2c8] = bVar2;
    param_1[(uint)param_1[2] * 0x23 + 0x2c9] = 0;
    param_1[(uint)param_1[2] * 0x23 + 0x2ca] = 0;
    param_1[(uint)param_1[2] * 0x23 + 0x2cb] = 0;
    bVar2 = FUN_ram_000082b6(param_1 + (uint)param_1[2] * 0x23 + 0x2c7,5);
    param_1[(uint)param_1[2] * 0x23 + 0x2cc] = bVar2;
    param_1[(uint)param_1[2] * 0x23 + 0x2c6] = 6;
  }
LAB_ram_00003df6:
  param_1[0xb01] = 100;
  param_1[0xb02] = 0;
LAB_ram_00003e0e:
  if (((param_1[3] != param_1[2]) && (param_1[0xb00] != 0)) && ((_DAT_ram_40011008 >> 2 & 1) != 0))
  {
    uRam40010814 = 0x800000;
    FUN_ram_000043ea(&DAT_ram_40004400,param_1 + (uint)param_1[2] * 0x23 + 0x2c7,
                     param_1[(uint)param_1[2] * 0x23 + 0x2c6]);
    param_1[2] = param_1[2] + 1;
    if (param_1[2] == 0x14) {
      param_1[2] = 0;
    }
    param_1[0xb00] = 0;
    FUN_ram_0000bd62(3);
    uRam40010820 = 0x80;
    param_1[0xb01] = 0;
    param_1[0xb02] = 0;
  }
  return;
}



// FUNCTION ram:0000428c FUN_ram_0000428c
// THUNK false
// CALLS ram:0000d650 FUN_ram_0000d650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000428c(void)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  if ((_DAT_ram_40004400 & 0x20) != 0) {
    if (DAT_ram_20000eb2 == '\0') {
      uVar2 = FUN_ram_0000d650(&DAT_ram_40004400);
      uVar3 = (uint)DAT_ram_200003be;
      DAT_ram_200003be = DAT_ram_200003be + 1;
      *(undefined1 *)((uint)DAT_ram_200003ba * 0x23 + uVar3 + 0x200003c3) = uVar2;
    }
    else {
      bVar1 = (&DAT_ram_2000095b)[(uint)DAT_ram_200003b8 * 0x23];
      uVar2 = FUN_ram_0000d650(&DAT_ram_40004400);
      *(undefined1 *)((uint)DAT_ram_200003b8 * 0x23 + (uint)bVar1 + 0x20000bf7) = uVar2;
      (&DAT_ram_2000095b)[(uint)DAT_ram_200003b8 * 0x23] =
           (&DAT_ram_2000095b)[(uint)DAT_ram_200003b8 * 0x23] + '\x01';
      if ((&DAT_ram_2000095b)[(uint)DAT_ram_200003b8 * 0x23] ==
          (&DAT_ram_2000095c)[(uint)DAT_ram_200003b8 * 0x23]) {
        DAT_ram_20000eb2 = '\0';
        DAT_ram_20000eb3 = 1;
      }
      DAT_ram_20000024 = 1;
    }
    return;
  }
  return;
}



// FUNCTION ram:00004380 FUN_ram_00004380
// THUNK false
// CALLS ram:0000d49a FUN_ram_0000d49a
// CALLS ram:0000d4b8 FUN_ram_0000d4b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00004380(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  iVar1 = FUN_ram_0000d49a(4);
  if (iVar1 != 0) {
    if (DAT_ram_20000eb2 == '\0') {
      if ((_DAT_ram_40011008 >> 2 & 1) != DAT_ram_20000024) {
        if ((_DAT_ram_40011008 >> 2 & 1) == 0) {
          DAT_ram_200003bb = DAT_ram_200003bb + '\x01';
        }
        else {
          DAT_ram_20000eb7 = 1;
        }
        DAT_ram_200003be = 0;
        DAT_ram_20000024 = _DAT_ram_40011008 >> 2 & 1;
      }
    }
    FUN_ram_0000d4b8(4);
  }
  return;
}



// FUNCTION ram:000043ea FUN_ram_000043ea
// THUNK false
// CALLS ram:0000d648 FUN_ram_0000d648
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000d658 FUN_ram_0000d658
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000043ea(undefined4 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  gp = &observed_global_pointer;
  puVar2 = param_2 + param_3;
  for (; param_2 != puVar2; param_2 = param_2 + 1) {
    FUN_ram_0000d648(param_1,*param_2);
    do {
      iVar1 = FUN_ram_0000d658(param_1,0x80);
    } while (iVar1 == 0);
  }
  return;
}



// FUNCTION ram:00004416 FUN_ram_00004416
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00004416(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  pcVar2 = (char *)0x20003890;
  uVar4 = 0;
  do {
    if (*pcVar2 == '\x04') {
      bVar1 = (&UNK_ram_0000d940)[uVar4 * 2] * cRam20001ad3 + (&UNK_ram_0000d941)[uVar4 * 2];
      FUN_ram_0000bd0e();
      *(byte *)(((byte)pcVar2[3] - 1 & 0xff) * 0x1e + ((byte)pcVar2[4] - 1 & 0xff) + 0x20000f26) =
           bVar1;
      iVar3 = (uint)bVar1 * 0x11;
      (&DAT_ram_20001af0)[iVar3] = 0xff;
      (&DAT_ram_20001af1)[iVar3] = 0xff;
      (&DAT_ram_20001af2)[iVar3] = 0xff;
      (&DAT_ram_20001af6)[iVar3] = *(undefined1 *)(((byte)pcVar2[5] >> 4) + 0x20000060);
    }
    uVar4 = uVar4 + 1 & 0xff;
    pcVar2 = pcVar2 + 10;
  } while (uVar4 != 0x80);
  return;
}



// FUNCTION ram:000044ba FUN_ram_000044ba
// THUNK false

void FUN_ram_000044ba(int param_1,int param_2)

{
  gp = &observed_global_pointer;
  if ((&DAT_ram_20002660)[param_1 * 0x1f] == -0x80) {
    (&DAT_ram_20001aee)[param_2 * 0x11] = 1;
  }
  if ((param_1 == 7) && (DAT_ram_20000127 = 0, DAT_ram_2000012d != '\0')) {
    DAT_ram_2000012b = 1;
  }
  return;
}



// FUNCTION ram:000044fe FUN_ram_000044fe
// THUNK false

void FUN_ram_000044fe(undefined1 param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  
  cVar1 = DAT_ram_20001ad4;
  gp = &observed_global_pointer;
  puVar3 = &DAT_ram_20001ad0;
  for (cVar2 = '\0'; cVar2 != cVar1; cVar2 = cVar2 + '\x01') {
    if ((puVar3[0x1e] == '\x01') || (puVar3[0x1f] == '\x01')) {
      puVar3[0x1d] = param_1;
    }
    puVar3 = puVar3 + 0x11;
  }
  return;
}



// FUNCTION ram:0000452e FUN_ram_0000452e
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000173c FUN_ram_0000173c

/* WARNING: Inlined function: FUN_ram_00001700 */
/* WARNING: Inlined function: FUN_ram_0000173c */
/* WARNING: Removing unreachable block (ram,0x000045fa) */
/* WARNING: Removing unreachable block (ram,0x000045da) */
/* WARNING: Removing unreachable block (ram,0x00004618) */

void FUN_ram_0000452e(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  
  gp = &observed_global_pointer;
  cVar13 = '\x01';
  do {
    uVar11 = (uint)(byte)(cVar13 - 1);
    if (bRam20000fda <= uVar11) {
      return;
    }
    DAT_ram_200000e1 = 0;
    DAT_ram_200000e2 = 0;
    iVar9 = uVar11 * 3;
    DAT_ram_200000e0 = 0;
    bVar12 = *(byte *)(iVar9 + 0x20000fed);
    bVar1 = *(byte *)(iVar9 + 0x20000fee);
    bVar2 = *(byte *)(iVar9 + 0x20000fef);
    if (bVar12 == 0) {
      if (bVar1 != 0 || bVar2 != 0) goto LAB_ram_000045e4;
      DAT_ram_200000e0 = *(undefined1 *)(uVar11 + 0x20000fe7);
      bVar12 = 0x38;
      DAT_ram_200000e1 = DAT_ram_200000e0;
      DAT_ram_200000e2 = DAT_ram_200000e0;
    }
    else {
      DAT_ram_200000e0 = (undefined1)(((uint)bVar12 * (uint)*(byte *)(uVar11 + 0x20000fe7)) / 0xff);
      bVar12 = 8;
LAB_ram_000045e4:
      if (bVar1 != 0) {
        bVar12 = bVar12 | 0x10;
        DAT_ram_200000e1 = (undefined1)(((uint)bVar1 * (uint)*(byte *)(uVar11 + 0x20000fe7)) / 0xff)
        ;
      }
      if (bVar2 != 0) {
        bVar12 = bVar12 | 0x20;
        DAT_ram_200000e2 = (undefined1)(((uint)bVar2 * (uint)*(byte *)(uVar11 + 0x20000fe7)) / 0xff)
        ;
      }
    }
    iVar9 = uVar11 * 3;
    uVar4 = 0;
    while (uVar4 < *(byte *)(uVar11 + 0x20000fdb)) {
      uVar7 = uVar4 + 1 & 0xff;
      iVar10 = 0x20003890;
      uVar6 = 0;
      do {
        if ((*(char *)(iVar10 + 1) == cVar13) && (*(byte *)(iVar10 + 2) == uVar7))
        goto LAB_ram_0000464e;
        uVar6 = uVar6 + 1 & 0xff;
        iVar10 = iVar10 + 10;
      } while (uVar6 != 0x80);
      uVar6 = 0;
LAB_ram_0000464e:
      FUN_ram_0000bd0e();
      uVar8 = (uint)(byte)(&UNK_ram_0000d940)[uVar6 * 2] * (uint)bRam20001ad3 +
              (uint)(byte)(&UNK_ram_0000d941)[uVar6 * 2] & 0xff;
      iVar10 = uVar8 * 0x11;
      cVar3 = *(char *)(iVar9 + 0x20000fed);
      (&DAT_ram_20001af6)[iVar10] =
           *(undefined1 *)((*(byte *)(uVar6 * 10 + 0x20003895) >> 4) + 0x20000060);
      (&DAT_ram_20001af3)[iVar10] = DAT_ram_200000e0;
      (&DAT_ram_20001af4)[iVar10] = DAT_ram_200000e1;
      (&DAT_ram_20001af5)[iVar10] = DAT_ram_200000e2;
      if (((cVar3 == '\0') && (*(char *)(iVar9 + 0x20000fee) == '\0')) &&
         (*(char *)(iVar9 + 0x20000fef) == '\0')) {
        *(undefined1 *)(iVar10 + 0x20001afa) = 1;
        iVar5 = uVar4 * 4 + uVar11 * 0xd2;
        (&DAT_ram_20001aeb)[iVar10] = *(undefined1 *)(iVar5 + 0x200014eb);
        (&DAT_ram_20001af0)[iVar10] = *(undefined1 *)(iVar5 + 0x200014ec);
        (&DAT_ram_20001af1)[iVar10] = *(undefined1 *)(iVar5 + 0x200014ed);
        (&DAT_ram_20001af2)[iVar10] = *(undefined1 *)(iVar5 + 0x200014ee);
        uVar4 = uVar7;
      }
      else {
        iVar5 = uVar8 * 0x11;
        *(undefined1 *)(iVar5 + 0x20001afa) = 0;
        (&DAT_ram_20001aeb)[iVar5] = bVar12;
        iVar10 = uVar4 * 3 + uVar11 * 0xd2;
        (&DAT_ram_20001af0)[iVar5] = *(undefined1 *)(iVar10 + 0x20001563);
        (&DAT_ram_20001af1)[iVar5] = *(undefined1 *)(iVar10 + 0x20001564);
        (&DAT_ram_20001af2)[iVar5] = *(undefined1 *)(iVar10 + 0x20001565);
        uVar4 = uVar7;
      }
    }
    cVar13 = cVar13 + '\x01';
  } while( true );
}



// FUNCTION ram:0000473e FUN_ram_0000473e
// THUNK false

void FUN_ram_0000473e(undefined1 param_1)

{
  undefined1 *puVar1;
  
  gp = &observed_global_pointer;
  puVar1 = &DAT_ram_20001ad0;
  do {
    puVar1[0x26] = param_1;
    puVar1[0x1a] = 0;
    puVar1[0x1c] = puVar1[0x1c] & 0xc3;
    puVar1[0x20] = param_1;
    puVar1[0x21] = param_1;
    puVar1[0x22] = param_1;
    if (puVar1[0x1e] == '\x01') {
      puVar1[0x1b] = 0;
      puVar1[0x27] = 0;
      puVar1[0x28] = 0;
      puVar1[0x29] = 0;
    }
    puVar1 = puVar1 + 0x11;
  } while (puVar1 != (undefined1 *)0x20002394);
  return;
}



// FUNCTION ram:0000478a FUN_ram_0000478a
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000478a(uint param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  bVar2 = bRam20002b54;
  puVar5 = &DAT_ram_20001ad0 + param_1 * 0x11;
  do {
    if (param_2 <= param_1) {
      return;
    }
    bVar4 = puVar5[0x1b];
    if ((bVar4 & 8) != 0) {
      cVar1 = puVar5[0x1d];
      if ((bVar4 & 1) == 0) {
        if (cVar1 == '\x01') {
          if (bVar2 < (byte)puVar5[0x20]) {
            puVar5[0x20] = puVar5[0x20] - 1;
          }
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x23] * (uint)(byte)puVar5[0x20]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x27] = uVar6;
          }
          if ((byte)puVar5[0x20] <= bVar2) {
            puVar5[0x1b] = bVar4 | 1;
            bVar4 = bVar4 & 0xf7;
            if (puVar5[0x2a] != '\0') {
LAB_ram_00004956:
              bVar4 = bVar4 | 1;
              goto LAB_ram_0000490a;
            }
          }
        }
        else {
          if ((cVar1 - 2U & 0xfd) != 0) goto LAB_ram_000049a6;
          if (puVar5[0x20] != '\0') {
            puVar5[0x20] = puVar5[0x20] + -1;
          }
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x23] * (uint)(byte)puVar5[0x20]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x27] = uVar6;
          }
          if (puVar5[0x20] == '\0') {
            if (cVar1 != '\x02') {
              bVar4 = bVar4 & 0xf7;
              goto LAB_ram_0000490a;
            }
            goto LAB_ram_00004956;
          }
        }
      }
      else if (cVar1 == '\x01') {
        uVar7 = (uint)(byte)puVar5[0x26];
        bVar3 = puVar5[0x20] + 1;
        puVar5[0x20] = bVar3;
        if (puVar5[0x1e] == '\x01') {
          if (uVar7 == 0) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = (undefined1)(((uint)bVar3 * (uint)(byte)puVar5[0x23]) / uVar7);
          }
          puVar5[0x27] = uVar6;
        }
        if (uVar7 <= bVar3) {
          puVar5[0x1b] = bVar4 & 0xfe;
          bVar4 = bVar4 & 0xfe | 0x20;
          if (puVar5[0x2a] != '\0') {
LAB_ram_0000490a:
            puVar5[0x1b] = bVar4;
          }
        }
      }
      else if ((cVar1 - 2U & 0xfd) == 0) {
        uVar7 = (uint)(byte)puVar5[0x26];
        bVar3 = puVar5[0x20] + 1;
        puVar5[0x20] = bVar3;
        if (puVar5[0x1e] == '\x01') {
          if (uVar7 == 0) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = (undefined1)(((uint)bVar3 * (uint)(byte)puVar5[0x23]) / uVar7);
          }
          puVar5[0x27] = uVar6;
        }
        if (uVar7 <= bVar3) {
          bVar4 = bVar4 & 0xfe;
          goto LAB_ram_0000490a;
        }
      }
      else {
LAB_ram_000049a6:
        if (cVar1 == '\x03') {
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x23] * (uint)(byte)puVar5[0x20]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x27] = uVar6;
          }
        }
        else if (cVar1 == '\0') {
          puVar5[0x27] = 0;
        }
      }
    }
    bVar4 = puVar5[0x1b];
    if ((bVar4 & 0x10) != 0) {
      cVar1 = puVar5[0x1d];
      if ((bVar4 & 2) == 0) {
        if (cVar1 == '\x01') {
          if (bVar2 < (byte)puVar5[0x21]) {
            puVar5[0x21] = puVar5[0x21] - 1;
          }
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x24] * (uint)(byte)puVar5[0x21]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x28] = uVar6;
          }
          if ((byte)puVar5[0x21] <= bVar2) {
            puVar5[0x1b] = bVar4 | 2;
            bVar4 = bVar4 & 0xef;
            if (puVar5[0x2a] != '\0') {
LAB_ram_00004a5c:
              bVar4 = bVar4 | 2;
              goto LAB_ram_00004a10;
            }
          }
        }
        else {
          if ((cVar1 - 2U & 0xfd) != 0) goto LAB_ram_00004aaa;
          if (puVar5[0x21] != '\0') {
            puVar5[0x21] = puVar5[0x21] + -1;
          }
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x24] * (uint)(byte)puVar5[0x21]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x28] = uVar6;
          }
          if (puVar5[0x21] == '\0') {
            if (cVar1 != '\x02') goto LAB_ram_00004a0e;
            goto LAB_ram_00004a5c;
          }
        }
      }
      else if (cVar1 == '\x01') {
        uVar7 = (uint)(byte)puVar5[0x26];
        bVar3 = puVar5[0x21] + 1;
        puVar5[0x21] = bVar3;
        if (puVar5[0x1e] == '\x01') {
          if (uVar7 == 0) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = (undefined1)(((uint)bVar3 * (uint)(byte)puVar5[0x24]) / uVar7);
          }
          puVar5[0x28] = uVar6;
        }
        if (uVar7 <= bVar3) {
          puVar5[0x1b] = bVar4 & 0xfd;
          bVar4 = bVar4 & 0xfd | 8;
          if (puVar5[0x2a] != '\0') {
LAB_ram_00004a10:
            puVar5[0x1b] = bVar4;
          }
        }
      }
      else if ((cVar1 - 2U & 0xfd) == 0) {
        uVar7 = (uint)(byte)puVar5[0x26];
        bVar3 = puVar5[0x21] + 1;
        puVar5[0x21] = bVar3;
        if (puVar5[0x1e] == '\x01') {
          if (uVar7 == 0) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = (undefined1)(((uint)bVar3 * (uint)(byte)puVar5[0x24]) / uVar7);
          }
          puVar5[0x28] = uVar6;
        }
        if (uVar7 <= bVar3) {
LAB_ram_00004a0e:
          bVar4 = bVar4 & 0xfd;
          goto LAB_ram_00004a10;
        }
      }
      else {
LAB_ram_00004aaa:
        if (cVar1 == '\x03') {
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x24] * (uint)(byte)puVar5[0x21]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x28] = uVar6;
          }
        }
        else if (cVar1 == '\0') {
          puVar5[0x28] = 0;
        }
      }
    }
    bVar4 = puVar5[0x1b];
    if ((bVar4 & 0x20) != 0) {
      cVar1 = puVar5[0x1d];
      if ((bVar4 & 4) == 0) {
        if (cVar1 == '\x01') {
          if (bVar2 < (byte)puVar5[0x22]) {
            puVar5[0x22] = puVar5[0x22] - 1;
          }
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x25] * (uint)(byte)puVar5[0x22]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x29] = uVar6;
          }
          if ((byte)puVar5[0x22] <= bVar2) {
            puVar5[0x1b] = bVar4 | 4;
            bVar4 = bVar4 & 0xdf;
            if (puVar5[0x2a] != '\0') {
LAB_ram_00004b62:
              bVar4 = bVar4 | 4;
              goto LAB_ram_00004b14;
            }
          }
        }
        else {
          if ((cVar1 - 2U & 0xfd) != 0) goto LAB_ram_00004bb0;
          if (puVar5[0x22] != '\0') {
            puVar5[0x22] = puVar5[0x22] + -1;
          }
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x25] * (uint)(byte)puVar5[0x22]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x29] = uVar6;
          }
          if (puVar5[0x22] == '\0') {
            if (cVar1 != '\x02') goto LAB_ram_00004b12;
            goto LAB_ram_00004b62;
          }
        }
      }
      else if (cVar1 == '\x01') {
        uVar7 = (uint)(byte)puVar5[0x26];
        bVar3 = puVar5[0x22] + 1;
        puVar5[0x22] = bVar3;
        if (puVar5[0x1e] == '\x01') {
          if (uVar7 == 0) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = (undefined1)(((uint)bVar3 * (uint)(byte)puVar5[0x25]) / uVar7);
          }
          puVar5[0x29] = uVar6;
        }
        if (uVar7 <= bVar3) {
          puVar5[0x1b] = bVar4 & 0xfb;
          bVar4 = bVar4 & 0xfb | 0x10;
          if (puVar5[0x2a] != '\0') {
LAB_ram_00004b14:
            puVar5[0x1b] = bVar4;
          }
        }
      }
      else if ((cVar1 - 2U & 0xfd) == 0) {
        uVar7 = (uint)(byte)puVar5[0x26];
        bVar3 = puVar5[0x22] + 1;
        puVar5[0x22] = bVar3;
        if (puVar5[0x1e] == '\x01') {
          if (uVar7 == 0) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = (undefined1)(((uint)bVar3 * (uint)(byte)puVar5[0x25]) / uVar7);
          }
          puVar5[0x29] = uVar6;
        }
        if (uVar7 <= bVar3) {
LAB_ram_00004b12:
          bVar4 = bVar4 & 0xfb;
          goto LAB_ram_00004b14;
        }
      }
      else {
LAB_ram_00004bb0:
        if (cVar1 == '\x03') {
          if (puVar5[0x1e] == '\x01') {
            if ((byte)puVar5[0x26] == 0) {
              uVar6 = 0xff;
            }
            else {
              uVar6 = (undefined1)
                      (((uint)(byte)puVar5[0x25] * (uint)(byte)puVar5[0x22]) /
                      (uint)(byte)puVar5[0x26]);
            }
            puVar5[0x29] = uVar6;
          }
        }
        else if (cVar1 == '\0') {
          puVar5[0x29] = 0;
        }
      }
    }
    param_1 = param_1 + 1 & 0xff;
    puVar5 = puVar5 + 0x11;
  } while( true );
}



// FUNCTION ram:00004bde FUN_ram_00004bde
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000478a FUN_ram_0000478a
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00008b58 FUN_ram_00008b58

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00004bde(void)

{
  byte bVar1;
  
  gp = &observed_global_pointer;
  bVar1 = DAT_ram_20001ad4 >> 1;
  FUN_ram_0000478a(0,bVar1);
  FUN_ram_00008b58();
  FUN_ram_0000478a(bVar1,DAT_ram_20001ad4);
  return;
}



// FUNCTION ram:00004c06 FUN_ram_00004c06
// THUNK false

/* WARNING: Removing unreachable block (ram,0x00004cb8) */
/* WARNING: Removing unreachable block (ram,0x00004c7c) */
/* WARNING: Removing unreachable block (ram,0x00004c50) */
/* WARNING: Removing unreachable block (ram,0x00004c5c) */
/* WARNING: Removing unreachable block (ram,0x00004c88) */
/* WARNING: Removing unreachable block (ram,0x00004cc4) */

void FUN_ram_00004c06(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &observed_global_pointer;
  iVar3 = param_1 * 0x11;
  if ((&DAT_ram_20001aee)[iVar3] == '\x01') {
    (&DAT_ram_20001af0)[iVar3] = 0xff;
    (&DAT_ram_20001af1)[iVar3] = 0xff;
    (&DAT_ram_20001af2)[iVar3] = 0xff;
    uVar1 = (uint)DAT_ram_20001adf;
    uVar4 = (uint)DAT_ram_20001ae7;
    uVar2 = (uint)(byte)(&DAT_ram_20001af6)[iVar3];
    (&DAT_ram_20001af7)[iVar3] = 0;
    (&DAT_ram_20001af8)[iVar3] = 0;
    (&DAT_ram_20001af9)[iVar3] = 0;
    (&DAT_ram_20001aeb)[iVar3] = 0;
    uVar4 = uVar2 * ((uVar1 * uVar4) / 0xff) & 0xffff;
    (&DAT_ram_20001af3)[iVar3] = (char)(uVar4 / 0xff);
    if (0xfe < uVar4) {
      (&DAT_ram_20001aeb)[iVar3] = 8;
    }
    uVar4 = uVar2 * ((uVar1 * DAT_ram_20001ae8) / 0xff) & 0xffff;
    iVar3 = param_1 * 0x11;
    (&DAT_ram_20001af4)[iVar3] = (char)(uVar4 / 0xff);
    if (0xfe < uVar4) {
      (&DAT_ram_20001aeb)[iVar3] = (&DAT_ram_20001aeb)[iVar3] | 0x10;
    }
    param_1 = param_1 * 0x11;
    uVar1 = uVar2 * ((uVar1 * DAT_ram_20001ae9) / 0xff) & 0xffff;
    (&DAT_ram_20001af5)[param_1] = (char)(uVar1 / 0xff);
    if (0xfe < uVar1) {
      (&DAT_ram_20001aeb)[param_1] = (&DAT_ram_20001aeb)[param_1] | 0x20;
    }
  }
  return;
}



// FUNCTION ram:00004cde FUN_ram_00004cde
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00004c06 FUN_ram_00004c06
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00004cde(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  uVar1 = 0;
  do {
    if (DAT_ram_20001ad4 <= uVar1) {
      return;
    }
    uVar4 = (uint)bRam20001ad3;
    uVar2 = uVar1;
    if (uVar4 != 0) {
      uVar2 = uVar1 % uVar4;
    }
    if (uVar4 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = uVar1 / uVar4;
    }
    if (((&DAT_ram_20001aec)[uVar1 * 0x11] & 8) != 0) {
      (&DAT_ram_20001aec)[uVar1 * 0x11] = (&DAT_ram_20001aec)[uVar1 * 0x11] & 0xf7;
      if (uVar2 == 0) {
        if ((int)uVar7 < (int)(bRam20001ad2 - 1)) {
          iVar5 = (uVar4 + uVar1) * 0x11;
          bVar3 = (&DAT_ram_20001aec)[iVar5] | 0x10;
          goto LAB_ram_00004d2c;
        }
        if (uVar7 == bRam20001ad2 - 1) {
          if (cRam200000c5 == '\0') {
            DAT_ram_20001aec = DAT_ram_20001aec | 0x10;
          }
          else {
            cRam200000c5 = '\0';
          }
        }
      }
      else {
        iVar5 = (uVar1 - 1) * 0x11;
        bVar3 = (&DAT_ram_20001aec)[iVar5] | 8;
LAB_ram_00004d2c:
        (&DAT_ram_20001aec)[iVar5] = bVar3;
      }
      FUN_ram_00004c06(uVar1);
    }
    if (((&DAT_ram_20001aec)[uVar1 * 0x11] & 0x10) != 0) {
      if (uVar2 != 0) {
        iVar5 = (uVar1 - 1) * 0x11;
        if (((&DAT_ram_20001aec)[iVar5] & 0x10) != 0) {
          (&DAT_ram_20001aec)[iVar5] = (&DAT_ram_20001aec)[iVar5] & 0xef;
          goto LAB_ram_00004d60;
        }
      }
      uVar6 = (uint)bRam20001ad3;
      uVar4 = uVar6 - 1;
      if ((int)uVar2 < (int)uVar4) {
        iVar5 = (uVar1 + 1) * 0x11;
        bVar3 = (&DAT_ram_20001aec)[iVar5] | 0x10;
LAB_ram_00004db0:
        (&DAT_ram_20001aec)[iVar5] = bVar3;
      }
      else if (uVar2 == uVar4) {
        uVar2 = (uint)bRam20001ad2;
        bVar3 = (&DAT_ram_20001aec)[uVar1 * 0x11] & 0xef;
        (&DAT_ram_20001aec)[uVar1 * 0x11] = bVar3;
        if ((int)uVar7 < (int)(uVar2 - 1)) {
          iVar5 = (uVar6 + uVar1) * 0x11;
          bVar3 = (&DAT_ram_20001aec)[iVar5] | 8;
          goto LAB_ram_00004db0;
        }
        if (uVar7 == uVar2 - 1) {
          (&DAT_ram_20001aec)[uVar1 * 0x11] = bVar3 | 8;
        }
      }
      FUN_ram_00004c06(uVar1);
    }
LAB_ram_00004d60:
    uVar1 = uVar1 + 1 & 0xff;
  } while( true );
}



// FUNCTION ram:00004dee FUN_ram_00004dee
// THUNK false

void FUN_ram_00004dee(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  
  gp = &observed_global_pointer;
  iVar6 = param_1 * 0x11;
  if ((&DAT_ram_20001aee)[iVar6] == '\x01') {
    (&DAT_ram_20001af7)[iVar6] = 0;
    (&DAT_ram_20001af8)[iVar6] = 0;
    (&DAT_ram_20001af9)[iVar6] = 0;
  }
  cVar5 = DAT_ram_20001ae9;
  cVar4 = DAT_ram_20001ae8;
  cVar3 = DAT_ram_20001ae7;
  cVar2 = DAT_ram_20001ae6;
  iVar6 = param_1 * 0x11;
  (&DAT_ram_20001aeb)[iVar6] = 0;
  (&DAT_ram_20001af0)[iVar6] = cVar3;
  (&DAT_ram_20001af1)[iVar6] = cVar4;
  (&DAT_ram_20001af2)[iVar6] = cVar5;
  if (cVar2 == '\a') {
    (&DAT_ram_20001aeb)[iVar6] = (&DAT_ram_20001ad7)[(DAT_ram_200000bc + 0x420) * 4];
    return;
  }
  if (cVar3 != '\0') {
    (&DAT_ram_20001aeb)[iVar6] = 8;
  }
  if (cVar4 != '\0') {
    (&DAT_ram_20001aeb)[param_1 * 0x11] = (&DAT_ram_20001aeb)[param_1 * 0x11] | 0x10;
  }
  if (cVar5 != '\0') {
    (&DAT_ram_20001aeb)[param_1 * 0x11] = (&DAT_ram_20001aeb)[param_1 * 0x11] | 0x20;
  }
  if (DAT_ram_20001adb == '\"') {
    param_1 = param_1 * 0x11;
    iVar6 = (uint)DAT_ram_200000d2 * 3;
    (&DAT_ram_20001af0)[param_1] = (&DAT_ram_20002bcf)[iVar6];
    uVar1 = (&DAT_ram_20002bd1)[iVar6];
    (&DAT_ram_20001af1)[param_1] = (&DAT_ram_20002bd0)[iVar6];
    (&DAT_ram_20001af2)[param_1] = uVar1;
  }
  return;
}



// FUNCTION ram:00004eb6 FUN_ram_00004eb6
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00004c06 FUN_ram_00004c06
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:00004dee FUN_ram_00004dee
// CALLS ram:00001708 FUN_ram_00001708

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

bool FUN_ram_00004eb6(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &observed_global_pointer;
  cVar4 = '\0';
  FUN_ram_0000bd0e();
  uVar1 = 0;
  do {
    if (DAT_ram_20001ad4 <= uVar1) {
      return cVar4 != '\0';
    }
    uVar6 = (uint)bRam20001ad3;
    uVar5 = uVar1;
    if (uVar6 != 0) {
      uVar5 = uVar1 % uVar6;
    }
    if (((&DAT_ram_20001aea)[uVar1 * 0x11] & 1) != 0) {
      if (cVar4 != -1) {
        cVar4 = cVar4 + '\x01';
      }
      (&DAT_ram_20001aea)[uVar1 * 0x11] = (&DAT_ram_20001aea)[uVar1 * 0x11] & 0xfe;
      if (uVar6 <= uVar1) {
        iVar3 = (uVar1 - uVar6) * 0x11;
        (&DAT_ram_20001aea)[iVar3] = (&DAT_ram_20001aea)[iVar3] | 1;
      }
      bVar2 = (&DAT_ram_20001aea)[uVar1 * 0x11];
      if (uVar5 == 0) {
        bVar2 = bVar2 & 0xfb | 8;
      }
      else if (uVar5 == uVar6 - 1) {
        bVar2 = bVar2 & 0xf7 | 4;
      }
      else {
        bVar2 = bVar2 | 0xc;
      }
      (&DAT_ram_20001aea)[uVar1 * 0x11] = bVar2;
      if (param_1 == 0) {
        FUN_ram_00004c06(uVar1);
      }
      else {
        FUN_ram_00004dee(uVar1);
      }
    }
    if (((&DAT_ram_20001aea)[uVar1 * 0x11] & 2) != 0) {
      if (cVar4 != -1) {
        cVar4 = cVar4 + '\x01';
      }
      if (uVar6 <= uVar1) {
        iVar3 = (uVar1 - bRam20001ad3) * 0x11;
        if (((&DAT_ram_20001aea)[iVar3] & 2) != 0) {
          (&DAT_ram_20001aea)[iVar3] = (&DAT_ram_20001aea)[iVar3] & 0xfd;
          goto LAB_ram_00004f90;
        }
      }
      if (uVar6 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = uVar1 / uVar6;
      }
      if ((int)uVar6 < (int)(bRam20001ad2 - 1)) {
        iVar3 = (bRam20001ad3 + uVar1) * 0x11;
        bVar2 = (&DAT_ram_20001aea)[iVar3] | 2;
LAB_ram_00004ff0:
        (&DAT_ram_20001aea)[iVar3] = bVar2;
      }
      else if (uVar6 == bRam20001ad2 - 1) {
        iVar3 = uVar1 * 0x11;
        bVar2 = (&DAT_ram_20001aea)[uVar1 * 0x11] & 0xfd;
        goto LAB_ram_00004ff0;
      }
      bVar2 = (&DAT_ram_20001aea)[uVar1 * 0x11];
      if (uVar5 == 0) {
        bVar2 = bVar2 & 0xfb | 8;
      }
      else if (uVar5 == bRam20001ad3 - 1) {
        bVar2 = bVar2 & 0xf7 | 4;
      }
      else {
        bVar2 = bVar2 | 0xc;
      }
      (&DAT_ram_20001aea)[uVar1 * 0x11] = bVar2;
      if (param_1 == 0) {
        FUN_ram_00004c06(uVar1);
      }
      else {
        FUN_ram_00004dee(uVar1);
      }
    }
LAB_ram_00004f90:
    if (((&DAT_ram_20001aea)[uVar1 * 0x11] & 4) != 0) {
      if (cVar4 != -1) {
        cVar4 = cVar4 + '\x01';
      }
      (&DAT_ram_20001aea)[uVar1 * 0x11] = (&DAT_ram_20001aea)[uVar1 * 0x11] & 0xfb;
      if (uVar5 != 0) {
        iVar3 = (uVar1 - 1) * 0x11;
        (&DAT_ram_20001aea)[iVar3] = (&DAT_ram_20001aea)[iVar3] | 4;
      }
      if (param_1 == 0) {
        FUN_ram_00004c06(uVar1);
      }
      else {
        FUN_ram_00004dee(uVar1);
      }
    }
    if (((&DAT_ram_20001aea)[uVar1 * 0x11] & 8) != 0) {
      if (cVar4 != -1) {
        cVar4 = cVar4 + '\x01';
      }
      if (uVar5 != 0) {
        iVar3 = (uVar1 - 1) * 0x11;
        if (((&DAT_ram_20001aea)[iVar3] & 8) != 0) {
          (&DAT_ram_20001aea)[iVar3] = (&DAT_ram_20001aea)[iVar3] & 0xf7;
          goto LAB_ram_0000507a;
        }
      }
      if ((int)uVar5 < (int)(bRam20001ad3 - 1)) {
        iVar3 = (uVar1 + 1) * 0x11;
        bVar2 = (&DAT_ram_20001aea)[iVar3] | 8;
LAB_ram_00005094:
        (&DAT_ram_20001aea)[iVar3] = bVar2;
      }
      else if (uVar5 == bRam20001ad3 - 1) {
        iVar3 = uVar1 * 0x11;
        bVar2 = (&DAT_ram_20001aea)[uVar1 * 0x11] & 0xf7;
        goto LAB_ram_00005094;
      }
      if (param_1 == 0) {
        FUN_ram_00004c06(uVar1);
      }
      else {
        FUN_ram_00004dee(uVar1);
      }
    }
LAB_ram_0000507a:
    uVar1 = uVar1 + 1 & 0xff;
  } while( true );
}



// FUNCTION ram:000050b8 FUN_ram_000050b8
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:00001760 FUN_ram_00001760

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_000050b8(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_50 [32];
  
  gp = &observed_global_pointer;
  FUN_ram_00001760(auStack_50,0,0x1f);
  if (0x1e < *param_1) {
    *param_1 = 0x1e;
  }
  puVar7 = (undefined1 *)0x20002b57;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7 = puVar7 + 4;
  } while (puVar7 != &DAT_ram_20002bcf);
  if (param_2 != 0) {
    uVar3 = (uint)*param_1;
    uVar2 = 1;
    while (uVar2 <= uVar3) {
      if (uVar3 == 0) {
        uVar5 = 0xff;
      }
      else {
        uVar5 = (undefined1)((int)(param_2 * uVar2) / (int)uVar3);
      }
      auStack_50[uVar2] = uVar5;
      uVar2 = uVar2 + 1 & 0xff;
    }
    for (uVar2 = 1; uVar2 <= *param_1; uVar2 = uVar2 + 1 & 0xff) {
      FUN_ram_0000bd0e();
      uVar8 = uVar2 * 3;
      uVar3 = (uint)*param_1;
      if (uVar8 < uVar3) {
        iVar6 = (uVar2 + 0x3fffffff) * 4;
        (&DAT_ram_20002b58)[iVar6] = auStack_50[uVar8];
        (&DAT_ram_20002b59)[iVar6] = 0;
        (&DAT_ram_20002b5a)[iVar6] = auStack_50[(uint)*param_1 + uVar2 * -3];
LAB_ram_00005186:
        *(undefined1 *)(iVar6 + 0x20002b57) = 0x2e;
      }
      else {
        if (uVar8 == uVar3) {
          iVar6 = (uVar2 + 0x3fffffff) * 4;
          (&DAT_ram_20002b58)[iVar6] = auStack_50[uVar8];
          (&DAT_ram_20002b59)[iVar6] = 0;
          (&DAT_ram_20002b5a)[iVar6] = 0;
          goto LAB_ram_00005186;
        }
        uVar4 = uVar3 << 1;
        if ((uVar3 < uVar8) && (uVar8 < uVar4)) {
          iVar6 = (uVar2 + 0x3fffffff) * 4;
          (&DAT_ram_20002b58)[iVar6] = auStack_50[uVar2 * -3 + uVar3 * 2];
          bVar1 = *param_1;
          (&DAT_ram_20002b5a)[iVar6] = 0;
          *(undefined1 *)(iVar6 + 0x20002b57) = 0x1d;
          (&DAT_ram_20002b59)[iVar6] = auStack_50[uVar8 - bVar1];
        }
        else if (uVar8 == uVar4) {
          iVar6 = (uVar2 + 0x3fffffff) * 4;
          (&DAT_ram_20002b58)[iVar6] = 0;
          bVar1 = *param_1;
          (&DAT_ram_20002b5a)[iVar6] = 0;
          *(undefined1 *)(iVar6 + 0x20002b57) = 0x1d;
          (&DAT_ram_20002b59)[iVar6] = auStack_50[uVar8 - bVar1];
        }
        else if ((uVar4 < uVar8) && (uVar2 < uVar3)) {
          iVar6 = (uVar2 + 0x3fffffff) * 4;
          (&DAT_ram_20002b58)[iVar6] = 0;
          (&DAT_ram_20002b59)[iVar6] = auStack_50[uVar2 * -3 + (uint)*param_1 * 3];
          bVar1 = *param_1;
          *(undefined1 *)(iVar6 + 0x20002b57) = 0x33;
          (&DAT_ram_20002b5a)[iVar6] = auStack_50[uVar8 + (uint)bVar1 * -2];
        }
        else if (uVar2 == uVar3) {
          iVar6 = (uVar2 + 0x3fffffff) * 4;
          (&DAT_ram_20002b58)[iVar6] = 0;
          (&DAT_ram_20002b59)[iVar6] = 0;
          bVar1 = *param_1;
          *(undefined1 *)(iVar6 + 0x20002b57) = 0x33;
          (&DAT_ram_20002b5a)[iVar6] = auStack_50[bVar1];
        }
      }
    }
  }
  return;
}



// FUNCTION ram:00005278 FUN_ram_00005278
// THUNK false

void FUN_ram_00005278(int param_1,uint param_2)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  if ((param_1 != 0) && (DAT_ram_200000bc = DAT_ram_200000bc + 1, param_2 <= DAT_ram_200000bc)) {
    DAT_ram_200000bc = 0;
  }
  if (DAT_ram_20001ae6 == 7) {
    iVar1 = (DAT_ram_200000bc + 0x420) * 4;
    DAT_ram_20001ae7 = (&DAT_ram_20001ad8)[iVar1];
    DAT_ram_20001ae8 = (&DAT_ram_20001ad9)[iVar1];
    DAT_ram_20001ae9 = (&DAT_ram_20001ada)[iVar1];
  }
  else {
    iVar1 = ((uint)DAT_ram_20001ae3 * 8 + (uint)DAT_ram_20001ae6 + 0x234) * 4;
    DAT_ram_20001ae7 = (&DAT_ram_20001ae2)[iVar1];
    DAT_ram_20001ae8 = (&DAT_ram_20001ae3)[iVar1];
    DAT_ram_20001ae9 = (&DAT_ram_20001ae4)[iVar1];
  }
  return;
}



// FUNCTION ram:000052d6 FUN_ram_000052d6
// THUNK false

void FUN_ram_000052d6(byte *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  gp = &observed_global_pointer;
  if (0x1e < *param_1) {
    *param_1 = 0x1e;
  }
  puVar4 = &DAT_ram_20002bcf;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4 = puVar4 + 3;
  } while (puVar4 != (undefined1 *)0x20002c29);
  for (uVar5 = 1; uVar2 = (uint)*param_1, uVar5 <= uVar2; uVar5 = uVar5 + 1 & 0xff) {
    if (uVar2 == 0) {
      uVar1 = 0xff;
    }
    else {
      uVar1 = (undefined1)((int)(param_2 * uVar5) / (int)uVar2);
    }
    iVar3 = uVar5 * 3;
    *(undefined1 *)(iVar3 + 0x20002bcc) = uVar1;
    *(undefined1 *)(iVar3 + 0x20002bcd) = uVar1;
    *(undefined1 *)(iVar3 + 0x20002bce) = uVar1;
  }
  return;
}



// FUNCTION ram:0000533c FUN_ram_0000533c
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:000050b8 FUN_ram_000050b8
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:000052d6 FUN_ram_000052d6
// CALLS ram:00001708 FUN_ram_00001708

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_0000533c(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  uVar5 = 0;
  uVar4 = 0;
  while( true ) {
    do {
      FUN_ram_0000bd0e();
      iVar8 = uVar5 * 10;
      uVar6 = uVar4 + 1;
      if (*(byte *)(iVar8 + 0x20003893) == uVar6) {
        cVar1 = *(char *)(uVar4 + 0x20000f20);
        *(char *)(uVar4 + 0x20000f20) = cVar1 + '\x01';
        if (cVar1 == '\0') {
          uVar2 = *(undefined1 *)((*(byte *)(iVar8 + 0x20003895) >> 4) + 0x20000060);
          *(undefined1 *)(uVar4 + 0x20000f02) =
               *(undefined1 *)((*(byte *)(iVar8 + 0x20003895) & 0xf) + 0x20000058);
          iVar7 = uVar4 * 3;
          *(undefined1 *)(uVar4 + 0x20000efc) = uVar2;
          *(undefined1 *)(iVar7 + 0x20000f08) = *(undefined1 *)(iVar8 + 0x20003896);
          uVar2 = *(undefined1 *)(iVar8 + 0x20003898);
          *(undefined1 *)(iVar7 + 0x20000f09) = *(undefined1 *)(iVar8 + 0x20003897);
          *(undefined1 *)(iVar7 + 0x20000f0a) = uVar2;
        }
      }
      iVar8 = uVar5 * 10;
      if (uVar6 == *(byte *)(iVar8 + 0x20003891)) {
        cVar1 = *(char *)(uVar4 + 0x20000fdb);
        *(char *)(uVar4 + 0x20000fdb) = cVar1 + '\x01';
        if (cVar1 == '\0') {
          uVar2 = *(undefined1 *)((*(byte *)(iVar8 + 0x20003895) >> 4) + 0x20000060);
          *(undefined1 *)(uVar4 + 0x20000fe7) =
               *(undefined1 *)((*(byte *)(iVar8 + 0x20003895) & 0xf) + 0x20000058);
          iVar7 = uVar4 * 3;
          uVar3 = *(undefined1 *)(iVar8 + 0x20003896);
          *(undefined1 *)(uVar4 + 0x20000fe1) = uVar2;
          *(undefined1 *)(iVar7 + 0x20000fed) = uVar3;
          uVar2 = *(undefined1 *)(iVar8 + 0x20003898);
          *(undefined1 *)(iVar7 + 0x20000fee) = *(undefined1 *)(iVar8 + 0x20003897);
          *(undefined1 *)(iVar7 + 0x20000fef) = uVar2;
        }
      }
      uVar4 = uVar6 & 0xff;
    } while (uVar4 != 6);
    uVar4 = uVar5 + 1;
    uVar5 = uVar4 & 0xff;
    if ((int)(uVar4 * 0x1000000) >> 0x18 < 0) break;
    uVar4 = 0;
  }
  iVar8 = 0x20000ef8;
  bRam20000fda = 0;
  bRam20000efb = 0;
  do {
    if (*(char *)(iVar8 + 0x28) != '\0') {
      bRam20000efb = bRam20000efb + 1;
    }
    if (*(char *)(iVar8 + 0xe3) != '\0') {
      bRam20000fda = bRam20000fda + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x20000efe);
  for (uVar4 = 0; uVar4 < bRam20000efb; uVar4 = uVar4 + 1 & 0xff) {
    uRam20002b55 = *(undefined1 *)(uVar4 + 0x20000f20);
    uRam20001ade = 0xff;
    FUN_ram_000050b8(0x20002b55,0xff);
    FUN_ram_0000be6a(uVar4 * 0xd2 + 0x20000fff,0x20002b57,0x78);
  }
  for (uVar4 = 0; uVar4 < bRam20000fda; uVar4 = uVar4 + 1 & 0xff) {
    uRam20002b55 = *(undefined1 *)(uVar4 + 0x20000fdb);
    uRam20001ade = *(undefined1 *)(uVar4 + 0x20000fe1);
    FUN_ram_000050b8(0x20002b55);
    FUN_ram_0000be6a(uVar4 * 0xd2 + 0x200014eb,0x20002b57,0x78);
    uRam20002b56 = *(undefined1 *)(uVar4 + 0x20000fdb);
    FUN_ram_000052d6(0x20002b56,uRam20001ade);
    FUN_ram_0000be6a(uVar4 * 0xd2 + 0x20001563,&DAT_ram_20002bcf,0x78);
  }
  return;
}



// FUNCTION ram:0000554e FUN_ram_0000554e
// THUNK false

void FUN_ram_0000554e(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  if (DAT_ram_200000c9 != '\0') {
    DAT_ram_200000c9 = '\0';
    DAT_ram_20001ae4 = (&DAT_ram_200023b0)[(uint)DAT_ram_20001ae3 * 0x20];
    (&DAT_ram_2000262e)[DAT_ram_20001ae3] = (&DAT_ram_20000068)[DAT_ram_20001ae4];
    DAT_ram_20001ae2 = 1;
  }
  if (DAT_ram_200000cc != '\0') {
    DAT_ram_200000cc = '\0';
    DAT_ram_20001ae5 = (&DAT_ram_200023af)[(uint)DAT_ram_20001ae3 * 0x20];
    DAT_ram_20001ae0 = (&DAT_ram_20000070)[DAT_ram_20001ae5];
  }
  if (((DAT_ram_200000ca != '\0') && (DAT_ram_20001adb != 'P')) && (DAT_ram_20001adb != '\"')) {
    DAT_ram_200000ca = '\0';
    puVar1 = &DAT_ram_20001ad0;
    do {
      if (puVar1[0x1e] == '\x01') {
        puVar1[0x27] = 0;
        puVar1[0x28] = 0;
        puVar1[0x29] = 0;
      }
      puVar1 = puVar1 + 0x11;
    } while (puVar1 != (undefined1 *)0x20002394);
    iVar2 = ((uint)DAT_ram_20001ae3 * 8 + (uint)DAT_ram_20001ae6 + 0x234) * 4;
    DAT_ram_20001ae7 = (&DAT_ram_20001ae2)[iVar2];
    DAT_ram_20001ae8 = (&DAT_ram_20001ae3)[iVar2];
    DAT_ram_20001ae9 = (&DAT_ram_20001ae4)[iVar2];
  }
  return;
}



// FUNCTION ram:00005620 FUN_ram_00005620
// THUNK false

/* WARNING: Removing unreachable block (ram,0x000056ce) */
/* WARNING: Removing unreachable block (ram,0x000056a4) */
/* WARNING: Removing unreachable block (ram,0x000056f2) */

uint FUN_ram_00005620(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  
  cVar4 = DAT_ram_20001ad4;
  gp = &observed_global_pointer;
  DAT_ram_200000e1 = 0;
  DAT_ram_200000e2 = 0;
  DAT_ram_200000e0 = 0;
  if ((&DAT_ram_200023ae)[(uint)DAT_ram_20001ae3 * 0x20] == '\a') {
    uVar5 = 0x38;
    DAT_ram_200000e0 = DAT_ram_20001adf;
    DAT_ram_200000e1 = DAT_ram_20001adf;
    DAT_ram_200000e2 = DAT_ram_20001adf;
  }
  else {
    uVar9 = (uint)DAT_ram_20001ae6;
    iVar8 = (uint)DAT_ram_20001ae3 * 8;
    uVar5 = 0;
    if ((byte)(&DAT_ram_20001ae2)[(iVar8 + uVar9 + 0x234) * 4] != 0) {
      DAT_ram_200000e0 =
           (byte)(((uint)(byte)(&DAT_ram_20001ae2)[(iVar8 + uVar9 + 0x234) * 4] *
                  (uint)DAT_ram_20001adf) / 0xff);
      uVar5 = 8;
    }
    if ((&DAT_ram_20001ae3)[(iVar8 + uVar9 + 0x234) * 4] != 0) {
      uVar5 = uVar5 | 0x10;
      DAT_ram_200000e1 =
           (byte)(((uint)(&DAT_ram_20001ae3)[(iVar8 + uVar9 + 0x234) * 4] * (uint)DAT_ram_20001adf)
                 / 0xff);
    }
    if ((byte)(&DAT_ram_20001ae4)[(iVar8 + uVar9 + 0x234) * 4] != 0) {
      uVar5 = uVar5 | 0x20;
      DAT_ram_200000e2 =
           (byte)(((uint)(byte)(&DAT_ram_20001ae4)[(iVar8 + uVar9 + 0x234) * 4] *
                  (uint)DAT_ram_20001adf) / 0xff);
    }
  }
  bVar3 = DAT_ram_200000e2;
  bVar2 = DAT_ram_200000e1;
  bVar1 = DAT_ram_200000e0;
  puVar7 = &DAT_ram_20001ad0;
  for (cVar6 = '\0'; cVar6 != cVar4; cVar6 = cVar6 + '\x01') {
    puVar7[0x23] = bVar1;
    puVar7[0x24] = bVar2;
    puVar7[0x25] = bVar3;
    puVar7 = puVar7 + 0x11;
  }
  return uVar5;
}



// FUNCTION ram:0000570c FUN_ram_0000570c
// THUNK false
// CALLS ram:00005620 FUN_ram_00005620
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000570c(void)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  gp = &observed_global_pointer;
  uVar6 = FUN_ram_00005620();
  cVar3 = DAT_ram_20001ae6;
  cVar2 = DAT_ram_20001adb;
  puVar9 = &DAT_ram_20001ad0;
  uVar5 = (uint)DAT_ram_20001ad4;
  uVar4 = (uint)bRam20001ad3;
  uVar10 = 0;
  for (uVar7 = 0; uVar7 != uVar5; uVar7 = uVar7 + 1 & 0xff) {
    if (cVar2 == ' ') {
      uVar10 = uVar7;
      if (uVar4 != 0) {
        uVar10 = uVar7 % uVar4;
      }
    }
    else if (cVar2 == '!') {
      if (uVar4 == 0) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = uVar7 / uVar4;
      }
    }
    if (cVar3 == '\a') {
      iVar8 = (uVar10 + 0x420) * 4;
      puVar9[0x1b] = (&DAT_ram_20001ad7)[iVar8];
      puVar9[0x20] = (&DAT_ram_20001ad8)[iVar8];
      puVar9[0x21] = (&DAT_ram_20001ad9)[iVar8];
      uVar1 = (&DAT_ram_20001ada)[iVar8];
      puVar9[0x2a] = 1;
      puVar9[0x22] = uVar1;
    }
    else {
      iVar8 = uVar10 * 3;
      puVar9[0x1b] = uVar6;
      puVar9[0x20] = (&DAT_ram_20002bcf)[iVar8];
      puVar9[0x21] = (&DAT_ram_20002bd0)[iVar8];
      uVar1 = (&DAT_ram_20002bd1)[iVar8];
      puVar9[0x2a] = 0;
      puVar9[0x22] = uVar1;
    }
    puVar9 = puVar9 + 0x11;
  }
  return;
}



// FUNCTION ram:000057b4 FUN_ram_000057b4
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00005620 FUN_ram_00005620
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000570c FUN_ram_0000570c
// CALLS ram:00005278 FUN_ram_00005278
// CALLS ram:00004eb6 FUN_ram_00004eb6
// CALLS ram:0000554e FUN_ram_0000554e
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000057b4(void)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined1 *puVar7;
  
  cVar6 = DAT_ram_20001ad4;
  gp = &observed_global_pointer;
  if ((byte)(DAT_ram_20001adb - 0x20U) < 2) {
    if (DAT_ram_200000ca != '\0') {
      puVar7 = &DAT_ram_20001ad0;
      DAT_ram_200000ca = '\0';
      do {
        if (puVar7[0x1e] == '\x01') {
          puVar7[0x27] = 0;
          puVar7[0x28] = 0;
          puVar7[0x29] = 0;
        }
        puVar7 = puVar7 + 0x11;
      } while (puVar7 != (undefined1 *)0x20002394);
      FUN_ram_0000bd0e();
      FUN_ram_0000570c();
    }
  }
  else if (DAT_ram_200000ca != '\0') {
    if (cRam200000c7 == '\0') {
      bRam200000d7 = 3;
      uVar4 = (uint)bRam20001ad3;
      cRam200000c7 = '\x01';
      bVar5 = bRam20001ad3 >> 1;
      cRam200000d5 = bVar5 + 4;
      uVar2 = (uint)DAT_ram_20001ae3;
      puVar7 = &DAT_ram_20001ad0;
      for (cVar3 = '\0'; cVar3 != cVar6; cVar3 = cVar3 + '\x01') {
        puVar7[0x1a] = 0;
        puVar7[0x2a] = (&DAT_ram_200023ae)[uVar2 * 0x20] == '\a';
        puVar7 = puVar7 + 0x11;
      }
      (&DAT_ram_20001aea)[(uVar4 * 2 + (uint)bVar5 + -1) * 0x11] = 0xf;
      DAT_ram_200000d2 = '\0';
      DAT_ram_200000bc = 0;
    }
    bVar5 = cRam200000d3 + 1;
    cRam200000d3 = cRam200000d3 + '\x01';
    if (bRam200000d7 < bVar5) {
      cRam200000d3 = '\0';
      FUN_ram_00005278(1,(bRam20001ad3 >> 1) + 1);
      FUN_ram_00004eb6(1);
      DAT_ram_200000d2 = DAT_ram_200000d2 + '\x01';
      cVar6 = cRam200000d5 + -1;
      bVar1 = cRam200000d5 == '\x01';
      cRam200000d5 = cVar6;
      if (bVar1) {
        cRam200000c7 = '\0';
        DAT_ram_200000ca = '\0';
      }
    }
  }
  FUN_ram_00005620();
  FUN_ram_0000554e();
  return;
}



// FUNCTION ram:000058dc FUN_ram_000058dc
// THUNK false

void FUN_ram_000058dc(int param_1)

{
  undefined1 *puVar1;
  
  gp = &observed_global_pointer;
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  *(undefined1 *)(param_1 + 0x1082) = 0xff;
  *(undefined1 *)(param_1 + 0x1083) = 0xff;
  puVar1 = (undefined1 *)(param_1 + 0xb8e);
  do {
    *puVar1 = 0xff;
    puVar1 = puVar1 + 0x1f;
  } while (puVar1 != (undefined1 *)(param_1 + 0xfcb));
  DAT_ram_20002c30 = 8;
  DAT_ram_20000196 = 10;
  *(undefined1 *)(param_1 + 3) = 0x10;
  *(undefined1 *)(param_1 + 2) = 6;
  *(undefined1 *)(param_1 + 0x1084) = 5;
  *(undefined1 *)(param_1 + 4) = 0x60;
  return;
}



// FUNCTION ram:0000592e FUN_ram_0000592e
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000a9f8 FUN_ram_0000a9f8
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000592e(undefined1 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_ram_2000016c_ram_20000040;
  gp = &observed_global_pointer;
  uRam20000085 = 1;
  if (PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01') {
    param_1[(byte)param_1[0x13] + 0xb5e] = 0;
    param_1[0x12] = 1;
    param_1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    DAT_ram_200000c9 = 1;
    param_1[1] = 1;
    *param_1 = 1;
    puVar1[2] = 1;
  }
  PTR_DAT_ram_2000016c_ram_20000040[3] = 'U' - PTR_DAT_ram_2000016c_ram_20000040[2];
  FUN_ram_0000a9f8(0x2132,2,PTR_DAT_ram_2000016c_ram_20000040 + 2);
  return;
}



// FUNCTION ram:0000598c FUN_ram_0000598c
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000a9f8 FUN_ram_0000a9f8
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000598c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  char cVar3;
  char cStack_14;
  char cStack_13;
  
  gp = &observed_global_pointer;
  if (PTR_DAT_ram_2000016c_ram_20000040[2] == '\0') {
    gp = &observed_global_pointer;
    return;
  }
  if (DAT_ram_2000439e == '\x01') {
    gp = &observed_global_pointer;
    return;
  }
  if (param_2 == 4) {
    *PTR_DAT_ram_2000016c_ram_20000040 = *PTR_DAT_ram_2000016c_ram_20000040 + '\x01';
    if (2 < (byte)*PTR_DAT_ram_2000016c_ram_20000040) {
      *PTR_DAT_ram_2000016c_ram_20000040 = 0;
    }
    goto LAB_ram_000059be;
  }
  if (param_2 == 0x31) {
    cVar3 = *PTR_DAT_ram_2000016c_ram_20000040;
    if (cVar3 == '\0') {
      cVar3 = '\x02';
    }
    else {
LAB_ram_00005a0e:
      cVar3 = cVar3 + -1;
    }
  }
  else {
    if (param_2 != 5) {
      if (param_2 != 6) {
        gp = &observed_global_pointer;
        return;
      }
      cVar3 = *PTR_DAT_ram_2000016c_ram_20000040;
      if (cVar3 == '\0') {
        gp = &observed_global_pointer;
        return;
      }
      goto LAB_ram_00005a0e;
    }
    if (1 < (byte)*PTR_DAT_ram_2000016c_ram_20000040) {
      return;
    }
    cVar3 = *PTR_DAT_ram_2000016c_ram_20000040 + 1;
  }
  *PTR_DAT_ram_2000016c_ram_20000040 = cVar3;
LAB_ram_000059be:
  puVar2 = PTR_DAT_ram_2000016c_ram_20000040;
  param_1[0xb] = (&UNK_ram_0000da40)[(byte)*PTR_DAT_ram_2000016c_ram_20000040];
  uVar1 = *puVar2;
  *param_1 = 1;
  param_1[0x13] = uVar1;
  cStack_14 = *puVar2;
  cStack_13 = 'U' - cStack_14;
  FUN_ram_0000a9f8(0x2130,2,&cStack_14);
  uRam20000086 = 1;
  return;
}



// FUNCTION ram:00005a34 FUN_ram_00005a34
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000a9f8 FUN_ram_0000a9f8
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00005a34(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  char cStack_24;
  char cStack_23;
  
  gp = &observed_global_pointer;
  if ((PTR_DAT_ram_2000016c_ram_20000040[2] == '\0') || (DAT_ram_2000439e == '\x01')) {
    return;
  }
  if (param_1[0xb] == 'R') {
    *PTR_DAT_ram_2000016c_ram_20000040 = 0;
    puVar1 = PTR_DAT_ram_2000016c_ram_20000040;
    param_1[0xb] = (&UNK_ram_0000da40)[(byte)*PTR_DAT_ram_2000016c_ram_20000040];
    uVar3 = *puVar1;
    *param_1 = 1;
    param_1[0x13] = uVar3;
    cStack_24 = *puVar1;
    cStack_23 = 'U' - cStack_24;
    FUN_ram_0000a9f8(0x2130,2,&cStack_24);
    gp = &observed_global_pointer;
    return;
  }
  iVar6 = (uint)(byte)*PTR_DAT_ram_2000016c_ram_20000040 * 0x20;
  puVar2 = param_1 + iVar6 + 0x8de;
  pbVar5 = puVar2 + param_3;
  if (param_2 == 0) {
    uVar4 = *pbVar5 + 1 & 0xff;
    if (param_4 < uVar4) {
LAB_ram_00005b3e:
      *pbVar5 = (byte)param_5;
      goto LAB_ram_00005ac4;
    }
LAB_ram_00005ac2:
    *pbVar5 = (byte)uVar4;
  }
  else {
    if (param_2 == 1) {
      uVar4 = (uint)*pbVar5;
      if (param_5 < uVar4) {
        uVar4 = uVar4 - 1;
        goto LAB_ram_00005ac2;
      }
      if (uVar4 != param_5) {
        gp = &observed_global_pointer;
        return;
      }
    }
    else {
      if (param_2 == 2) {
        if (param_4 <= *pbVar5) {
          gp = &observed_global_pointer;
          return;
        }
        param_5 = *pbVar5 + 1;
        goto LAB_ram_00005b3e;
      }
      if (param_2 != 3) {
        gp = &observed_global_pointer;
        return;
      }
      if (*pbVar5 <= param_5) {
        gp = &observed_global_pointer;
        return;
      }
      param_4 = *pbVar5 - 1;
    }
    *pbVar5 = (byte)param_4;
  }
LAB_ram_00005ac4:
  if (param_3 == 0) {
    DAT_ram_200000ca = 1;
    param_1[0x16] = param_1[iVar6 + 0x8de];
  }
  else if (param_3 == 2) {
    DAT_ram_200000c9 = 1;
  }
  else if (param_3 == 1) {
    DAT_ram_200000cc = 1;
  }
  uVar3 = FUN_ram_000082b6(puVar2,3);
  param_1[iVar6 + 0x8e1] = uVar3;
  FUN_ram_0000a9f8(iVar6 + 0x2160,4,puVar2);
  uRam20000086 = 1;
  FUN_ram_0000be6a(PTR_DAT_ram_20003550_ram_20000038 + iVar6,puVar2,4);
  return;
}



// FUNCTION ram:00005b6e FUN_ram_00005b6e
// THUNK false

/* WARNING: Removing unreachable block (ram,0x00005c8e) */

void FUN_ram_00005b6e(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  gp = &observed_global_pointer;
  bVar3 = *(byte *)(param_1 + 4);
  puVar7 = (undefined1 *)(param_1 + 0x1d);
  bVar4 = false;
  uVar16 = 0;
  uVar15 = 0;
  bVar6 = DAT_ram_200000cf;
  do {
    if (bVar3 == uVar15) {
      if (bVar4) {
        DAT_ram_200000cf = bVar6;
      }
      return;
    }
    uVar11 = (uint)*(byte *)(param_1 + 3);
    if (uVar11 == 0) {
      uVar11 = 0xffffffff;
      uVar9 = uVar15;
    }
    else {
      uVar9 = uVar15 % uVar11;
      uVar11 = uVar15 / uVar11;
    }
    iVar10 = uVar9 * 7 + uVar11 * 0x9a;
    bVar6 = (&DAT_ram_0000da54)[iVar10];
    puVar7[1] = bVar6 & 0x7f;
    puVar7[2] = bVar6 & 0x7f;
    if ((bVar6 & 0x7f) == 2) {
      uVar12 = (uint)(byte)(&DAT_ram_0000da55)[iVar10];
      uVar9 = (uint)(byte)(&DAT_ram_0000da56)[iVar10];
      uVar1 = (&DAT_ram_0000da59)[iVar10];
      uVar2 = (&DAT_ram_0000da5a)[iVar10];
      bVar8 = uVar12 != 0;
      uVar11 = (uint)(byte)(&UNK_ram_0000da57)[iVar10];
      uVar14 = (undefined1)uVar15;
      if (uVar9 == 0) {
        if (uVar11 != 0) goto LAB_ram_00005c7c;
        bVar8 = 0;
        uVar17 = uVar12;
        if (uVar12 == 0) goto LAB_ram_00005c34;
LAB_ram_00005c42:
        iVar13 = uVar17 * 0x1f + param_1;
        *(undefined *)(iVar13 + 0xb7a) = (&DAT_ram_0000da58)[iVar10];
        *(undefined1 *)(iVar13 + 0xb80) = uVar1;
        *(undefined1 *)(iVar13 + 0xb86) = uVar2;
        *(undefined1 *)(iVar13 + 0xb74) = uVar14;
        *(undefined1 *)(iVar13 + 0xb73) = 1;
        uVar16 = uVar17;
        if ((char)bVar6 < '\0') {
          *(undefined1 *)(iVar13 + 0xb90) = 0x80;
          puVar7[1] = 1;
          puVar7[2] = 1;
          goto LAB_ram_00005cfe;
        }
        *(undefined1 *)(iVar13 + 0xb90) = 0;
      }
      else {
        bVar8 = bVar8 | 2;
        if (uVar11 != 0) {
LAB_ram_00005c7c:
          bVar8 = bVar8 | 4;
          uVar17 = uVar11;
          if (bVar8 != 4) {
            if (bVar8 != 5) goto LAB_ram_00005c38;
LAB_ram_00005ce8:
            uVar17 = uVar12;
            if (uVar12 != uVar11) goto LAB_ram_00005c9c;
          }
          goto LAB_ram_00005c42;
        }
        uVar17 = uVar9;
        if (bVar8 == 2) goto LAB_ram_00005c42;
LAB_ram_00005c34:
        uVar17 = uVar12;
        uVar5 = uVar12;
        if (bVar8 != 3) {
LAB_ram_00005c38:
          uVar17 = uVar9;
          uVar5 = uVar11;
          if (bVar8 != 6) {
            uVar17 = uVar16;
            if (bVar8 == 7) {
              if (uVar12 == uVar9) goto LAB_ram_00005ce8;
              goto LAB_ram_00005c9c;
            }
            goto LAB_ram_00005c42;
          }
        }
        if (uVar9 == uVar5) goto LAB_ram_00005c42;
LAB_ram_00005c9c:
        if (uVar12 != 0) {
          iVar13 = uVar12 * 0x1f + param_1;
          *(undefined *)(iVar13 + 0xb7a) = (&DAT_ram_0000da58)[iVar10];
          *(undefined1 *)(iVar13 + 0xb74) = uVar14;
          *(undefined1 *)(iVar13 + 0xb73) = 1;
        }
        if (uVar9 != 0) {
          iVar10 = uVar9 * 0x1f + param_1;
          *(undefined1 *)(iVar10 + 0xb80) = uVar1;
          *(undefined1 *)(iVar10 + 0xb74) = uVar14;
          *(undefined1 *)(iVar10 + 0xb73) = 1;
        }
        if (uVar11 != 0) {
          iVar10 = uVar11 * 0x1f + param_1;
          *(undefined1 *)(iVar10 + 0xb86) = uVar2;
          *(undefined1 *)(iVar10 + 0xb74) = uVar14;
          *(undefined1 *)(iVar10 + 0xb73) = 1;
        }
      }
      *puVar7 = 5;
      puVar7[1] = 2;
      puVar7[2] = 2;
    }
    else if (bVar6 == 0) {
      *puVar7 = 7;
    }
LAB_ram_00005cfe:
    uVar15 = uVar15 + 1 & 0xff;
    puVar7 = puVar7 + 0x11;
    bVar4 = true;
  } while( true );
}



// FUNCTION ram:00005d18 FUN_ram_00005d18
// THUNK false

void FUN_ram_00005d18(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  
  gp = &observed_global_pointer;
  iVar5 = (uint)*(byte *)(param_1 + 0x13) * 0x20 + param_1;
  bVar1 = *(byte *)(iVar5 + 0x8de);
  *(byte *)(param_1 + 0x16) = bVar1;
  bVar2 = *(byte *)(iVar5 + 0x8e0);
  *(byte *)(param_1 + 0x14) = bVar2;
  bVar3 = *(byte *)(iVar5 + 0x8df);
  uVar4 = (&DAT_ram_20000068)[bVar2];
  *(byte *)(param_1 + 0x15) = bVar3;
  *(undefined1 *)(param_1 + 0xf) = uVar4;
  *(undefined *)(param_1 + 0x10) = (&DAT_ram_20000070)[bVar3];
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  iVar5 = ((uint)*(byte *)(param_1 + 0x13) * 8 + (uint)bVar1) * 4 + param_1;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(iVar5 + 0x8e2);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(iVar5 + 0x8e3);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(iVar5 + 0x8e4);
  return;
}



// FUNCTION ram:00005d72 FUN_ram_00005d72
// THUNK false
// CALLS ram:00005d18 FUN_ram_00005d18
// CALLS ram:0000473e FUN_ram_0000473e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00005d72(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  
  gp = &observed_global_pointer;
  FUN_ram_00005d18(&DAT_ram_20001ad0);
  FUN_ram_0000473e(param_1);
  uVar2 = DAT_ram_20001adf;
  cVar1 = DAT_ram_20001ad4;
  uRam20001ade = (undefined1)param_1;
  DAT_ram_200000e0 = DAT_ram_20001adf;
  DAT_ram_200000e1 = DAT_ram_20001adf;
  DAT_ram_200000e2 = DAT_ram_20001adf;
  puVar4 = &DAT_ram_20001ad0;
  for (cVar3 = '\0'; cVar3 != cVar1; cVar3 = cVar3 + '\x01') {
    puVar4[0x23] = uVar2;
    puVar4[0x24] = uVar2;
    puVar4[0x25] = uVar2;
    puVar4 = puVar4 + 0x11;
  }
  return;
}



// FUNCTION ram:00005dbe FUN_ram_00005dbe
// THUNK false
// CALLS ram:000050b8 FUN_ram_000050b8
// CALLS ram:00005d72 FUN_ram_00005d72
// CALLS ram:000052d6 FUN_ram_000052d6
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000570c FUN_ram_0000570c
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:000044fe FUN_ram_000044fe

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00005dbe(void)

{
  gp = &observed_global_pointer;
  FUN_ram_00005d72(0x60);
  if (DAT_ram_20001adb == ' ') {
    bRam20002b55 = bRam20001ad3;
    bRam20002b56 = bRam20001ad3;
  }
  else if (DAT_ram_20001adb == '!') {
    bRam20002b55 = bRam20001ad2 << 1;
    bRam20002b56 = bRam20001ad2;
  }
  else if (DAT_ram_20001adb == '\"') {
    bRam20002b55 = (bRam20001ad3 >> 1) + 1;
    bRam20002b56 = bRam20002b55;
  }
  FUN_ram_000050b8(0x20002b55,uRam20001ade);
  FUN_ram_000052d6(0x20002b56,uRam20001ade);
  FUN_ram_000044fe(1);
  if (DAT_ram_20001adb == '\"') {
    DAT_ram_200000ca = 1;
    uRam200000c7 = 0;
  }
  else {
    FUN_ram_0000570c();
  }
  return;
}



// FUNCTION ram:00005e62 FUN_ram_00005e62
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00005e62(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  gp = &observed_global_pointer;
  uVar5 = 0;
  do {
    iVar6 = ((uVar5 >> 4) * 0x10 + (uVar5 & 0xf)) * 2;
    uVar4 = (uint)(byte)(&UNK_ram_0000d940)[iVar6];
    uVar3 = (uint)(byte)(&UNK_ram_0000d941)[iVar6];
    bVar1 = (&DAT_ram_0000da54)[uVar3 * 7 + uVar4 * 0x9a];
    if ((((bVar1 & 0x7f) != 0) && (uVar4 < *(byte *)(param_1 + 2))) &&
       (bVar2 = *(byte *)(param_1 + 3), uVar3 < bVar2)) {
      iVar6 = ((uVar5 & 0xf) * 8 + (uVar5 >> 4)) * 4;
      (&DAT_ram_20002ce0)[iVar6] = 0x3f;
      if (param_2 == 0) {
        iVar7 = (bVar2 * uVar4 + uVar3) * 0x11 + param_1;
        *(undefined1 *)(iVar6 + 0x20002ce1) = *(undefined1 *)(iVar7 + 0x27);
        *(undefined1 *)(iVar6 + 0x20002ce2) = *(undefined1 *)(iVar7 + 0x28);
        *(undefined1 *)(iVar6 + 0x20002ce3) = *(undefined1 *)(iVar7 + 0x29);
      }
      else {
        *(undefined1 *)(iVar6 + 0x20002ce1) = 0;
        *(undefined1 *)(iVar6 + 0x20002ce2) = 0;
        *(undefined1 *)(iVar6 + 0x20002ce3) = 0;
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 != 0x80);
  DAT_ram_200000cf = bVar1 & 0x7f;
  return;
}



// FUNCTION ram:00005f14 FUN_ram_00005f14
// THUNK false

undefined1 FUN_ram_00005f14(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte *pbVar3;
  
  gp = &observed_global_pointer;
  if (*(char *)(param_1 + 1) == '\0') {
    pbVar3 = (byte *)(param_1 + 0xb72);
    cVar2 = '\0';
    do {
      if ((*(char *)((uint)pbVar3[2] * 0x11 + param_1 + 0x1e) == '\x02') &&
         ((((pbVar3[0x15] & 0x38) != 0 && (cVar2 != '\a')) ||
          (((*pbVar3 & 7) != 0 && (cVar2 != '\a')))))) goto LAB_ram_00005f60;
      cVar2 = cVar2 + '\x01';
      pbVar3 = pbVar3 + 0x1f;
      uVar1 = 0;
    } while (cVar2 != '#');
  }
  else {
LAB_ram_00005f60:
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION ram:00005f64 FUN_ram_00005f64
// THUNK false

void FUN_ram_00005f64(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  if (param_2 == 1) {
    if (DAT_ram_20002681 != '\0') {
      if ((DAT_ram_2000032c & 1) == 0) {
        (&DAT_ram_20001af7)[(uint)DAT_ram_20002682 * 0x11] = 0;
      }
      else {
        (&DAT_ram_20001af7)[(uint)DAT_ram_20002682 * 0x11] = 0xff;
      }
    }
    if (DAT_ram_20002662 != '\0') {
      if ((DAT_ram_2000032c & 2) == 0) {
        (&DAT_ram_20001af7)[(uint)DAT_ram_20002663 * 0x11] = 0;
      }
      else {
        (&DAT_ram_20001af7)[(uint)DAT_ram_20002663 * 0x11] = 0xff;
      }
    }
    if (DAT_ram_200026a0 == '\0') {
      gp = &observed_global_pointer;
      return;
    }
    uVar1 = (uint)DAT_ram_200026a1;
    if ((DAT_ram_2000032c & 4) != 0) {
      (&DAT_ram_20001af7)[uVar1 * 0x11] = 0xff;
      return;
    }
  }
  else {
    if (DAT_ram_20002681 != '\0') {
      (&DAT_ram_20001af7)[(uint)DAT_ram_20002682 * 0x11] = 0;
    }
    if (DAT_ram_20002662 != '\0') {
      (&DAT_ram_20001af7)[(uint)DAT_ram_20002663 * 0x11] = 0;
    }
    if (DAT_ram_200026a0 == '\0') {
      gp = &observed_global_pointer;
      return;
    }
    uVar1 = (uint)DAT_ram_200026a1;
  }
  (&DAT_ram_20001af7)[uVar1 * 0x11] = 0;
  return;
}



// FUNCTION ram:00006040 FUN_ram_00006040
// THUNK false

void FUN_ram_00006040(int param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  
  gp = &observed_global_pointer;
  iVar5 = param_1 * 0x1f;
  if ((&DAT_ram_20002643)[iVar5] == '\0') {
    gp = &observed_global_pointer;
    return;
  }
  uVar6 = (uint)(byte)(&DAT_ram_20002644)[iVar5];
  if (param_3 < 2) {
    uVar4 = 0x70;
    if ((param_2 & 4) != 0) {
      uVar4 = 0x40;
    }
    *(undefined1 *)(param_4 + 0x12) = uVar4;
    if (param_3 == 1) {
      *(undefined1 *)(param_4 + 0x13) = 0xff;
      *(undefined1 *)(param_4 + 0x14) = 0;
    }
    else {
      *(undefined1 *)(param_4 + 0x13) = 0;
      *(undefined1 *)(param_4 + 0x14) = 0xff;
    }
    *(undefined1 *)(param_4 + 0x15) = 0xff;
    (&DAT_ram_20001aee)[uVar6 * 0x11] = 2;
  }
  else {
    cVar7 = '\x02';
    if (param_3 == 2) {
      iVar5 = uVar6 * 0x11;
      cVar7 = (&DAT_ram_20001aef)[iVar5];
      if ((&DAT_ram_20001aee)[iVar5] == cVar7) goto LAB_ram_000060a0;
      *(undefined1 *)(param_4 + 0x15) = 1;
      *(undefined1 *)(param_4 + 0x12) = 0;
      *(undefined1 *)(param_4 + 0x13) = 0;
      *(undefined1 *)(param_4 + 0x14) = 0;
      bVar3 = (&DAT_ram_20001aeb)[iVar5];
      if ((bVar3 & 8) == 0) {
        (&DAT_ram_20001af7)[iVar5] = 0;
      }
      if ((bVar3 & 0x10) == 0) {
        (&DAT_ram_20001af8)[uVar6 * 0x11] = 0;
      }
      if ((bVar3 & 0x20) == 0) {
        (&DAT_ram_20001af9)[uVar6 * 0x11] = 0;
      }
      if (DAT_ram_20001ad1 == '\0') {
        iVar5 = uVar6 * 0x11;
        (&DAT_ram_20001af7)[iVar5] = 0;
        (&DAT_ram_20001af8)[iVar5] = 0;
        (&DAT_ram_20001af9)[iVar5] = 0;
      }
    }
    else if (param_3 != 3) {
      if (param_3 == 4) {
        *(undefined1 *)(param_4 + 0x12) = 0;
        *(undefined1 *)(param_4 + 0x15) = 0;
        cVar7 = (&DAT_ram_2000264a)[iVar5];
        DAT_ram_200000dc = 0;
        DAT_ram_200000dd = 0;
        DAT_ram_200000de = 0;
        (&DAT_ram_20001aee)[uVar6 * 0x11] = 2;
        cVar1 = (&DAT_ram_20002650)[iVar5];
        cVar2 = (&DAT_ram_20002656)[iVar5];
        DAT_ram_200000e0 = cVar7;
        DAT_ram_200000e1 = cVar1;
        DAT_ram_200000e2 = cVar2;
        (&DAT_ram_20002657)[iVar5] = 0;
        (&DAT_ram_20002658)[iVar5] = 0;
        (&DAT_ram_20002659)[iVar5] = 0;
        (&DAT_ram_2000265a)[iVar5] = 0;
        (&DAT_ram_2000265b)[iVar5] = cVar7;
        (&DAT_ram_2000265c)[iVar5] = cVar1;
        (&DAT_ram_2000265d)[iVar5] = cVar2;
        if (cVar7 != '\0') {
          (&DAT_ram_20002657)[iVar5] = 9;
        }
        if (cVar1 != '\0') {
          (&DAT_ram_20002657)[param_1 * 0x1f] = (&DAT_ram_20002657)[param_1 * 0x1f] | 0x12;
        }
        if (cVar2 != '\0') {
          (&DAT_ram_20002657)[param_1 * 0x1f] = (&DAT_ram_20002657)[param_1 * 0x1f] | 0x24;
        }
      }
      goto LAB_ram_000060a0;
    }
    (&DAT_ram_20001aee)[uVar6 * 0x11] = cVar7;
  }
LAB_ram_000060a0:
  if ((param_2 & 1) != 0) {
    iVar5 = param_1 * 0x1f;
    (&DAT_ram_20002642)[iVar5] = *(byte *)(param_4 + 0x12) | 1;
    uVar4 = *(undefined1 *)(param_4 + 0x13);
    (&DAT_ram_20002645)[iVar5] = uVar4;
    (&DAT_ram_20002646)[iVar5] = uVar4;
    uVar4 = *(undefined1 *)(param_4 + 0x14);
    (&DAT_ram_20002647)[iVar5] = uVar4;
    (&DAT_ram_20002648)[iVar5] = uVar4;
    (&DAT_ram_20002649)[iVar5] = *(undefined1 *)(param_4 + 0x15);
  }
  if ((param_2 & 2) != 0) {
    iVar5 = param_1 * 0x1f;
    (&DAT_ram_20002642)[iVar5] = *(byte *)(param_4 + 0x12) | 2;
    uVar4 = *(undefined1 *)(param_4 + 0x13);
    (&DAT_ram_2000264b)[iVar5] = uVar4;
    (&DAT_ram_2000264c)[iVar5] = uVar4;
    uVar4 = *(undefined1 *)(param_4 + 0x14);
    (&DAT_ram_2000264d)[iVar5] = uVar4;
    (&DAT_ram_2000264e)[iVar5] = uVar4;
    (&DAT_ram_2000264f)[iVar5] = *(undefined1 *)(param_4 + 0x15);
  }
  if ((param_2 & 4) != 0) {
    param_1 = param_1 * 0x1f;
    (&DAT_ram_20002642)[param_1] = *(byte *)(param_4 + 0x12) | 4;
    uVar4 = *(undefined1 *)(param_4 + 0x13);
    (&DAT_ram_20002651)[param_1] = uVar4;
    (&DAT_ram_20002652)[param_1] = uVar4;
    uVar4 = *(undefined1 *)(param_4 + 0x14);
    (&DAT_ram_20002653)[param_1] = uVar4;
    (&DAT_ram_20002654)[param_1] = uVar4;
    (&DAT_ram_20002655)[param_1] = *(undefined1 *)(param_4 + 0x15);
  }
  return;
}



// FUNCTION ram:00006278 FUN_ram_00006278
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00006040 FUN_ram_00006040

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00006278(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_2000032f < 4) {
    FUN_ram_00006040(4,1,3,0x20000edc);
  }
  if ((DAT_ram_2000032f == 0x10) || (DAT_ram_2000032f == 10)) {
    FUN_ram_00006040(4,1,0,0x20000edc);
    FUN_ram_00006040(6,7,0,0x20000edc);
    FUN_ram_00006040(5,7,0,0x20000edc);
    FUN_ram_00006040(8,7,0,0x20000edc);
    FUN_ram_00006040(9,7,0,0x20000edc);
    FUN_ram_00006040(10,7,0,0x20000edc);
  }
  return;
}



// FUNCTION ram:00006300 FUN_ram_00006300
// THUNK false
// CALLS ram:00005f64 FUN_ram_00005f64
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00006300(int param_1)

{
  char cVar1;
  
  cVar1 = DAT_ram_20000128;
  gp = &observed_global_pointer;
  if ((DAT_ram_2000032e != '\n') && (DAT_ram_200034e0 == '\0')) {
    if ((DAT_ram_2000012a != DAT_ram_20000128) && (DAT_ram_200000c6 == '\0')) {
      if (DAT_ram_20000128 != '\0') {
        *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x13) + 0xb5e) = 0;
        *(undefined1 *)(param_1 + 0x12) = 1;
        DAT_ram_200000ce = 1;
      }
      DAT_ram_2000012a = cVar1;
    }
    if (DAT_ram_2000018a != '\0') {
      DAT_ram_2000018a = 0;
      FUN_ram_00005f64(0x20000edc,0);
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x13) + 0xb5e) = 0;
      *(undefined1 *)(param_1 + 0x12) = 1;
      DAT_ram_200000ce = 1;
      return;
    }
  }
  return;
}



// FUNCTION ram:0000637c FUN_ram_0000637c
// THUNK false

void FUN_ram_0000637c(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_2000018b != '\0') {
    DAT_ram_2000018b = '\0';
    DAT_ram_20000ee2 = 1;
  }
  return;
}



// FUNCTION ram:00006392 FUN_ram_00006392
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00006392(char *param_1,int param_2)

{
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  if (param_2 == 10) {
    if (*param_1 == '\x01') {
      uRam20000ef8 = 1;
    }
    else if (*param_1 == '\x04') {
      uRam20000ef9 = 1;
    }
  }
  return;
}



// FUNCTION ram:000063d0 FUN_ram_000063d0
// THUNK false

void FUN_ram_000063d0(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_200034e1 != DAT_ram_200034e0) {
    DAT_ram_20000ee1 = 1;
    DAT_ram_20000083 = 1;
    DAT_ram_200000c8 = 1;
    DAT_ram_2000012a = 0;
    if (DAT_ram_200034e0 != '\0') {
      if (((DAT_ram_20001ad1 == '\0') && (DAT_ram_200000ba == '\x03')) &&
         (PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01')) {
        DAT_ram_20000128 = 0;
        DAT_ram_20001ad0 = 1;
        DAT_ram_20001ad1 = '\x01';
      }
      DAT_ram_20000127 = 0;
      DAT_ram_2000012c = 0;
    }
    DAT_ram_200034e1 = DAT_ram_200034e0;
  }
  if ((DAT_ram_200034e0 != '\0') && (DAT_ram_200034e3 != DAT_ram_200034e2)) {
    DAT_ram_20000ee1 = 1;
    DAT_ram_200034e3 = DAT_ram_200034e2;
  }
  return;
}



// FUNCTION ram:00006444 FUN_ram_00006444
// THUNK false

void FUN_ram_00006444(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00006446 FUN_ram_00006446
// THUNK false
// CALLS ram:0000cd86 FUN_ram_0000cd86
// CALLS ram:0000cd88 FUN_ram_0000cd88
// CALLS ram:0000473e FUN_ram_0000473e
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00006040 FUN_ram_00006040
// CALLS ram:00009ac8 FUN_ram_00009ac8
// CALLS ram:00005d72 FUN_ram_00005d72
// CALLS ram:00006278 FUN_ram_00006278
// CALLS ram:0000bebc FUN_ram_0000bebc
// CALLS ram:000050b8 FUN_ram_000050b8
// CALLS ram:0000533c FUN_ram_0000533c
// CALLS ram:0000452e FUN_ram_0000452e
// CALLS ram:00005dbe FUN_ram_00005dbe
// CALLS ram:000057b4 FUN_ram_000057b4
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:00009dbe FUN_ram_00009dbe
// CALLS ram:00004416 FUN_ram_00004416
// CALLS ram:00005e62 FUN_ram_00005e62
// CALLS ram:00004eb6 FUN_ram_00004eb6
// CALLS ram:000044fe FUN_ram_000044fe
// CALLS ram:00005278 FUN_ram_00005278
// CALLS ram:0000c4c8 FUN_ram_0000c4c8
// CALLS ram:0000173c FUN_ram_0000173c
// CALLS ram:0000554e FUN_ram_0000554e
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:000044ba FUN_ram_000044ba
// CALLS ram:000063d0 FUN_ram_000063d0
// CALLS ram:00006300 FUN_ram_00006300
// CALLS ram:00008b58 FUN_ram_00008b58
// CALLS ram:00003ab6 FUN_ram_00003ab6
// CALLS ram:00004cde FUN_ram_00004cde
// CALLS ram:00005f64 FUN_ram_00005f64
// CALLS ram:00004bde FUN_ram_00004bde

/* WARNING: Inlined function: FUN_ram_00001700 */
/* WARNING: Inlined function: FUN_ram_0000173c */
/* WARNING: Removing unreachable block (ram,0x00006d74) */
/* WARNING: Removing unreachable block (ram,0x0000710c) */
/* WARNING: Removing unreachable block (ram,0x00007144) */
/* WARNING: Removing unreachable block (ram,0x000071aa) */
/* WARNING: Removing unreachable block (ram,0x00007004) */
/* WARNING: Removing unreachable block (ram,0x00006fe6) */
/* WARNING: Removing unreachable block (ram,0x00006bbe) */
/* WARNING: Removing unreachable block (ram,0x000066fc) */
/* WARNING: Removing unreachable block (ram,0x000066e4) */
/* WARNING: Removing unreachable block (ram,0x000066f0) */
/* WARNING: Removing unreachable block (ram,0x00006bca) */
/* WARNING: Removing unreachable block (ram,0x00006ff4) */
/* WARNING: Removing unreachable block (ram,0x000071a6) */
/* WARNING: Removing unreachable block (ram,0x00007138) */
/* WARNING: Removing unreachable block (ram,0x000071b6) */
/* WARNING: Removing unreachable block (ram,0x00006d50) */
/* WARNING: Removing unreachable block (ram,0x00006d82) */
/* WARNING: Removing unreachable block (ram,0x00007118) */
/* WARNING: Removing unreachable block (ram,0x00006bd6) */
/* WARNING: Removing unreachable block (ram,0x00007164) */
/* WARNING: Removing unreachable block (ram,0x00007170) */

void FUN_ram_00006446(void)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  byte bVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  gp = &observed_global_pointer;
  bVar14 = (&UNK_ram_0000da40)[(byte)*PTR_DAT_ram_2000016c_ram_20000040];
  if (bRam20001add != bVar14) {
    DAT_ram_20001ae3 = *PTR_DAT_ram_2000016c_ram_20000040;
    DAT_ram_20001ad0 = '\x01';
    DAT_ram_20001adb = bVar14;
    bRam20001add = bVar14;
  }
  FUN_ram_00009dbe();
  FUN_ram_0000cd86();
  FUN_ram_0000cd88();
  FUN_ram_00008b58();
  FUN_ram_00005e62(&DAT_ram_20001ad0,0);
  FUN_ram_00008b58();
  FUN_ram_00003ab6();
  FUN_ram_0000c4c8();
  FUN_ram_00008b58();
  if (DAT_ram_2000032e != '\x10') {
    FUN_ram_00003b26(&DAT_ram_200003b8);
  }
  if (DAT_ram_20001ad0 == '\0') {
LAB_ram_000064f4:
    if ((DAT_ram_20001ad1 == '\0') || (cRam200000c4 != '\0')) goto LAB_ram_00006500;
    if (cRam200000cb != '\0') {
      cRam200000cb = '\0';
    }
    bVar14 = cRam20001ae1 + 1;
    cRam20001ae1 = cRam20001ae1 + '\x01';
    if (DAT_ram_20001ae0 < bVar14) {
      cRam20001ae1 = '\0';
      bVar14 = DAT_ram_20001adb & 0xf0;
      if (bVar14 == 0x40) {
        if (DAT_ram_20001adb == 0x40) {
          pbVar6 = (byte *)0x200000c2;
          bVar14 = cRam200000c2 + 1;
          if (bVar14 < 0xc) {
LAB_ram_00006a72:
            *pbVar6 = bVar14;
          }
          else {
            cRam200000c2 = '\0';
            FUN_ram_0000554e();
            bVar14 = DAT_ram_20001ad4;
            puVar13 = &DAT_ram_20001ad0;
            for (bVar15 = 0; bVar15 != bVar14; bVar15 = bVar15 + 1) {
              puVar13[0x23] = 0;
              puVar13[0x24] = 0;
              puVar13[0x25] = 0;
              puVar13 = puVar13 + 0x11;
            }
            uVar25 = bRam20001ad2 + 0x7f;
            uVar24 = (uVar25 & 0x7f) << 1;
            if ((DAT_ram_20001ada + 1 & 0xff) < uVar24) {
              DAT_ram_20001ada = (byte)(DAT_ram_20001ada + 1);
            }
            else {
              DAT_ram_20001ada = 0;
            }
            uVar11 = (uint)DAT_ram_20001ada;
            DAT_ram_20001ad9 = (int)(bRam20001ad2 - 1) <= (int)uVar11;
            if ((bool)DAT_ram_20001ad9) {
              uVar11 = (uVar25 & 0x7f) * 2 - uVar11 & 0xff;
            }
            for (uVar25 = 0; uVar25 < bRam20001ad3; uVar25 = uVar25 + 1 & 0xff) {
              if (DAT_ram_20001ad9 == '\0') {
                uVar11 = uVar11 + 1 & 0xff;
                if (uVar11 == bRam20001ad2 - 1) {
                  DAT_ram_20001ad9 = '\x01';
                }
              }
              else {
                uVar11 = uVar11 - 1 & 0xff;
                if (uVar11 == 0) {
                  DAT_ram_20001ad9 = '\0';
                }
              }
              if ((bRam200000bd + 1 & 0xff) < uVar24) {
                bRam200000bd = (byte)(bRam200000bd + 1);
              }
              else {
                bRam200000bd = 0;
              }
              FUN_ram_00005278(1);
              uVar23 = (uint)DAT_ram_20001adf;
              iVar19 = (bRam20001ad3 * uVar11 + uVar25) * 0x11;
              (&DAT_ram_20001af3)[iVar19] = (char)((uVar23 * DAT_ram_20001ae7) / 0xff);
              uVar18 = (uint)DAT_ram_20001ae8;
              (&DAT_ram_20001aeb)[iVar19] = 0x38;
              (&DAT_ram_20001af4)[iVar19] = (char)((uVar23 * uVar18) / 0xff);
              (&DAT_ram_20001af5)[iVar19] = (char)((uVar23 * DAT_ram_20001ae9) / 0xff);
            }
          }
        }
        else if ((0x3f < DAT_ram_20001adb) && (DAT_ram_20001adb < 0x44)) {
          bVar14 = cRam200000be + 1;
          cRam200000be = cRam200000be + '\x01';
          if (3 < bVar14) {
            cRam200000be = '\0';
            FUN_ram_00005278(1,bRam20001ad3);
            if (DAT_ram_20001adb == 0x43) {
              FUN_ram_00004cde();
            }
            else {
              FUN_ram_00004eb6(0);
            }
          }
          FUN_ram_0000554e();
          bVar14 = DAT_ram_20001adb;
          if (((byte)(DAT_ram_20001adb + 0xbf) < 2) && (cRam200000ec != '\0')) {
            uVar24 = (uint)bRam20001ad3;
            uVar25 = (uint)bRam20001ad2;
            puVar17 = (uint *)&DAT_ram_200030d0;
            cRam200000ec = '\0';
            pbVar6 = &UNK_ram_0000d940;
            do {
              uVar18 = *puVar17;
              uVar11 = 0;
              pbVar7 = pbVar6;
              do {
                if ((1 << (uVar11 & 0x1f) & uVar18) != 0) {
                  uVar26 = (uint)*pbVar7;
                  uVar27 = (uint)pbVar7[1];
                  uVar23 = uVar26 * uVar24 + uVar27 & 0xff;
                  iVar19 = uVar23 * 0x11;
                  bVar15 = (&DAT_ram_20001aea)[iVar19];
                  if (uVar27 == 0) {
                    bVar15 = bVar15 & 0xfb | 8;
                  }
                  else if (uVar27 == uVar24 - 1) {
                    bVar15 = bVar15 & 0xf7 | 4;
                  }
                  else {
                    bVar15 = bVar15 | 0xc;
                  }
                  iVar22 = uVar23 * 0x11;
                  (&DAT_ram_20001aea)[iVar19] = bVar15;
                  bVar15 = (&DAT_ram_20001aea)[iVar22] & 0xfc;
                  if (bVar14 == 0x42) {
                    if (uVar26 == 0) {
                      bVar15 = bVar15 | 2;
                    }
                    else if (uVar26 == uVar25 - 1) {
                      bVar15 = bVar15 | 1;
                    }
                    else {
                      bVar15 = bVar15 | 3;
                    }
                  }
                  (&DAT_ram_20001aea)[iVar22] = bVar15;
                }
                uVar11 = uVar11 + 1;
                pbVar7 = pbVar7 + 2;
              } while (uVar11 != 0x10);
              puVar17 = puVar17 + 1;
              pbVar6 = pbVar6 + 0x20;
            } while (puVar17 != &DAT_ram_200030f0);
          }
        }
      }
      else if (bVar14 < 0x41) {
        if (bVar14 == 0x20) {
          if ((byte)(DAT_ram_20001adb - 0x20) < 3) {
            FUN_ram_000057b4();
          }
        }
        else if (bVar14 == 0x30) {
          if (DAT_ram_20001adb == 0x31) {
            pbVar6 = (byte *)0x200000d1;
            bVar14 = cRam200000d1 + 1;
            if (bVar14 < 2) goto LAB_ram_00006a72;
            cRam200000d1 = '\0';
            FUN_ram_0000554e();
            bVar15 = DAT_ram_20001adf;
            bVar14 = DAT_ram_20001ad4;
            puVar13 = &DAT_ram_20001ad0;
            for (bVar20 = 0; bVar20 != bVar14; bVar20 = bVar20 + 1) {
              puVar13[0x23] = bVar15;
              puVar13[0x24] = bVar15;
              puVar13[0x25] = bVar15;
              puVar13 = puVar13 + 0x11;
            }
            FUN_ram_00005278(1,bRam20001ad3);
            bVar20 = DAT_ram_20001ae9;
            bVar15 = DAT_ram_20001ae8;
            bVar14 = DAT_ram_20001ae7;
            uVar25 = (uint)bRam20001ad3;
            puVar17 = (uint *)0x20000ebc;
            iVar19 = 0;
            do {
              uVar11 = *(uint *)((int)&DAT_ram_200030d0 + iVar19);
              uVar24 = *puVar17;
              if (uVar11 != uVar24) {
                pbVar6 = &UNK_ram_0000d940 + iVar19 * 8;
                uVar18 = 0;
                do {
                  uVar23 = 1 << (uVar18 & 0x1f);
                  if (((uVar11 ^ uVar24) & uVar23) != 0) {
                    iVar22 = (uVar25 * *pbVar6 + (uint)pbVar6[1] & 0xff) * 0x11;
                    (&DAT_ram_20001aeb)[iVar22] = (&DAT_ram_20001aeb)[iVar22] | 0x38;
                    if ((uVar11 & uVar23) == 0) {
                      (&DAT_ram_20001aed)[iVar22] = 4;
                      (&DAT_ram_20001af0)[iVar22] = bVar14;
                      (&DAT_ram_20001af1)[iVar22] = bVar15;
                      (&DAT_ram_20001af2)[iVar22] = bVar20;
                    }
                    else {
                      (&DAT_ram_20001aed)[iVar22] = 3;
                      (&DAT_ram_20001af0)[iVar22] = 0xff;
                      (&DAT_ram_20001af1)[iVar22] = 0xff;
                      (&DAT_ram_20001af2)[iVar22] = 0xff;
                    }
                    *puVar17 = *puVar17 ^ uVar23;
                  }
                  uVar18 = uVar18 + 1;
                  pbVar6 = pbVar6 + 2;
                } while (uVar18 != 0x10);
              }
              iVar19 = iVar19 + 4;
              puVar17 = puVar17 + 1;
            } while (iVar19 != 0x20);
          }
          else if (DAT_ram_20001adb == 0x35) {
            FUN_ram_0000554e();
            FUN_ram_0000bd0e();
            cVar21 = DAT_ram_20001ae6;
            uVar26 = (uint)DAT_ram_20001ad4;
            uVar27 = (uint)bRam20001ad3;
            uVar24 = (uint)DAT_ram_20001ae7;
            uVar25 = (uint)DAT_ram_20001adf;
            uVar11 = (uint)DAT_ram_20001ae8;
            uVar23 = (uint)DAT_ram_20001ae9;
            bVar9 = false;
            puVar13 = &DAT_ram_20001ad0;
            for (uVar18 = 0; uVar18 != uVar26; uVar18 = uVar18 + 1 & 0xff) {
              if (cVar21 == '\a') {
                uVar24 = uVar18;
                if (uVar27 != 0) {
                  uVar24 = uVar18 % uVar27;
                }
                bVar9 = true;
                iVar19 = (uVar24 + 0x420) * 4;
                uVar24 = (uint)(byte)(&DAT_ram_20001ad8)[iVar19];
                uVar11 = (uint)(byte)(&DAT_ram_20001ad9)[iVar19];
                uVar23 = (uint)(&DAT_ram_20001ada)[iVar19];
              }
              puVar13[0x23] = (char)((uVar25 * uVar24) / 0xff);
              puVar13[0x24] = (char)((uVar25 * uVar11) / 0xff);
              puVar13[0x25] = (char)((uVar25 * uVar23) / 0xff);
              puVar13 = puVar13 + 0x11;
            }
            if (bVar9) {
              DAT_ram_20001ae7 = (byte)uVar24;
              DAT_ram_20001ae8 = (byte)uVar11;
              DAT_ram_20001ae9 = (byte)uVar23;
            }
          }
          else if (DAT_ram_20001adb == 0x30) {
            FUN_ram_0000554e();
            bVar15 = DAT_ram_20001adf;
            bVar14 = DAT_ram_20001ad4;
            puVar13 = &DAT_ram_20001ad0;
            for (bVar20 = 0; bVar20 != bVar14; bVar20 = bVar20 + 1) {
              puVar13[0x23] = bVar15;
              puVar13[0x24] = bVar15;
              puVar13[0x25] = bVar15;
              puVar13 = puVar13 + 0x11;
            }
          }
        }
      }
      else if (bVar14 == 0x50) {
        if (DAT_ram_20001adb == 0x51) {
          FUN_ram_0000bd0e();
          if (cRam20000ef8 != '\0') {
            cRam20000ef8 = '\0';
            FUN_ram_0000533c();
            FUN_ram_0000452e();
          }
          if (cRam20000ef9 != '\0') {
            cRam20000ef9 = '\0';
            FUN_ram_0000533c();
            FUN_ram_00004416();
          }
          bVar14 = bRam20001ad3;
          uVar25 = (uint)DAT_ram_20001adf;
          puVar13 = (undefined1 *)0x20003890;
          bVar9 = false;
          uVar24 = 0;
          do {
            if ((byte)(&UNK_ram_0000d941)[uVar24 * 2] < bVar14) {
              uVar11 = (uint)(byte)((&UNK_ram_0000d941)[uVar24 * 2] +
                                   bVar14 * (&UNK_ram_0000d940)[uVar24 * 2]);
              iVar19 = uVar11 * 0x11;
              if ((&DAT_ram_20001aee)[iVar19] == '\x01') {
                (&DAT_ram_20001aed)[iVar19] = *puVar13;
              }
              iVar19 = uVar11 * 0x11;
              if ((byte)((&DAT_ram_20001aed)[iVar19] - 2) < 2) {
                (&DAT_ram_20001aeb)[iVar19] = (&DAT_ram_20001aeb)[iVar19] | 0x38;
                uVar25 = (uint)*(byte *)(((byte)puVar13[5] & 0xf) + 0x20000058);
                uVar10 = *(undefined1 *)(((byte)puVar13[5] >> 4) + 0x20000060);
                bVar15 = puVar13[6];
                (&DAT_ram_20001af6)[iVar19] = uVar10;
                (&DAT_ram_20001af3)[iVar19] = (char)((uVar25 * bVar15) / 0xff);
                (&DAT_ram_20001af4)[iVar19] = (char)((uVar25 * (byte)puVar13[7]) / 0xff);
                bVar9 = true;
                (&DAT_ram_20001af5)[iVar19] = (char)((uVar25 * (byte)puVar13[8]) / 0xff);
                if ((&DAT_ram_20001aed)[iVar19] == '\x03') {
                  (&DAT_ram_20001af0)[iVar19] = uVar10;
                  (&DAT_ram_20001af1)[iVar19] = uVar10;
                  (&DAT_ram_20001af2)[iVar19] = uVar10;
                }
              }
            }
            uVar24 = uVar24 + 1 & 0xff;
            puVar13 = puVar13 + 10;
          } while (uVar24 != 0x80);
          if (bVar9) {
            DAT_ram_20001adf = (byte)uVar25;
          }
          pbVar6 = (byte *)0x200000bf;
          bVar14 = cRam200000bf + 1;
          if (bVar14 < 0x15) goto LAB_ram_00006a72;
          cRam200000bf = '\0';
          for (uVar25 = 0; uVar25 < bRam20000efb; uVar25 = uVar25 + 1 & 0xff) {
            if (*(byte *)(uVar25 + 0x20000f20) != 0) {
              if ((byte)(*(char *)(uVar25 + 0x20000f1a) + 1U) < *(byte *)(uVar25 + 0x20000f20)) {
                *(char *)(uVar25 + 0x20000f1a) = *(char *)(uVar25 + 0x20000f1a) + '\x01';
              }
              else {
                *(undefined1 *)(uVar25 + 0x20000f1a) = 0;
              }
              FUN_ram_0000bd0e();
              uVar24 = (uint)*(byte *)(uVar25 * 0x1e + (uint)*(byte *)(uVar25 + 0x20000f1a) +
                                      0x20000f26);
              bVar14 = bRam200000c3 + 1;
              bRam200000c3 = bRam200000c3 + 1;
              if (*(byte *)(uVar25 + 0x20000f20) <= bVar14) {
                bRam200000c3 = 0;
              }
              iVar19 = uVar25 * 3;
              if (*(byte *)(iVar19 + 0x20000f0a) == 0 &&
                  (*(byte *)(iVar19 + 0x20000f08) == 0 && *(byte *)(iVar19 + 0x20000f09) == 0)) {
                iVar19 = (uint)bRam200000c3 * 4 + uVar25 * 0xd2;
                DAT_ram_20001ae7 = *(byte *)(iVar19 + 0x20001000);
                DAT_ram_20001ae8 = *(byte *)(iVar19 + 0x20001001);
                DAT_ram_20001ae9 = *(byte *)(iVar19 + 0x20001002);
              }
              else {
                uVar11 = (uint)*(byte *)(uVar25 + 0x20000f02);
                DAT_ram_20001ae8 = (byte)((uVar11 * *(byte *)(iVar19 + 0x20000f09)) / 0xff);
                DAT_ram_20001ae7 = (byte)((uVar11 * *(byte *)(iVar19 + 0x20000f08)) / 0xff);
                DAT_ram_20001ae9 = (byte)((uVar11 * *(byte *)(iVar19 + 0x20000f0a)) / 0xff);
              }
              iVar19 = uVar24 * 0x11;
              if ((&DAT_ram_20001aee)[iVar19] == '\x01') {
                uVar18 = (uint)*(byte *)(uVar25 + 0x20000f02);
                uVar11 = (uint)*(byte *)(uVar25 + 0x20000efc);
                uVar23 = (uint)DAT_ram_20001ae7;
                (&DAT_ram_20001af0)[iVar19] = 0xff;
                (&DAT_ram_20001af1)[iVar19] = 0xff;
                (&DAT_ram_20001af2)[iVar19] = 0xff;
                uVar23 = uVar11 * ((uVar18 * uVar23) / 0xff) & 0xffff;
                (&DAT_ram_20001af3)[iVar19] = (char)(uVar23 / 0xff);
                if (0xfe < uVar23) {
                  (&DAT_ram_20001aeb)[iVar19] = (&DAT_ram_20001aeb)[iVar19] | 8;
                }
                iVar19 = uVar24 * 0x11;
                uVar23 = uVar11 * ((uVar18 * DAT_ram_20001ae8) / 0xff) & 0xffff;
                (&DAT_ram_20001af4)[iVar19] = (char)(uVar23 / 0xff);
                if (0xfe < uVar23) {
                  (&DAT_ram_20001aeb)[iVar19] = (&DAT_ram_20001aeb)[iVar19] | 0x10;
                }
                iVar19 = uVar24 * 0x11;
                uVar24 = uVar11 * ((uVar18 * DAT_ram_20001ae9) / 0xff) & 0xffff;
                (&DAT_ram_20001af5)[iVar19] = (char)(uVar24 / 0xff);
                if (0xfe < uVar24) {
                  (&DAT_ram_20001aeb)[iVar19] = (&DAT_ram_20001aeb)[iVar19] | 0x20;
                }
              }
            }
          }
        }
        else if (((DAT_ram_20001adb == 0x52) || (DAT_ram_20001adb == 0x50)) &&
                (DAT_ram_20001adb == 0x50)) {
          FUN_ram_0000bd0e();
          bVar15 = DAT_ram_20001adf;
          bVar14 = DAT_ram_20001ad4;
          uVar25 = (uint)DAT_ram_20001ae3;
          puVar13 = &DAT_ram_20001ad0;
          for (bVar20 = 0; bVar20 != bVar14; bVar20 = bVar20 + 1) {
            puVar13[0x23] = bVar15;
            puVar13[0x24] = bVar15;
            puVar13[0x25] = bVar15;
            puVar13[0x2a] = (&DAT_ram_200023ae)[uVar25 * 0x20] == '\a';
            puVar13 = puVar13 + 0x11;
          }
          if (DAT_ram_200000ca != '\0') {
            if (cRam200000c7 == '\0') {
              cRam200000c7 = '\x01';
              bRam200000d7 = 3;
              DAT_ram_200000bc = 0;
              uVar25 = (uint)bRam20001ad3;
              bVar15 = bRam20001ad3 >> 1;
              cRam200000d6 = bVar15 + 4;
              puVar13 = &DAT_ram_20001ad0;
              for (bVar20 = 0; bVar20 != bVar14; bVar20 = bVar20 + 1) {
                puVar13[0x1a] = 0;
                puVar13 = puVar13 + 0x11;
              }
              (&DAT_ram_20001aea)[(uVar25 * 2 + (uint)bVar15 + -1) * 0x11] = 0xf;
            }
            bVar14 = cRam200000d4 + 1;
            cRam200000d4 = cRam200000d4 + '\x01';
            if (bRam200000d7 < bVar14) {
              cRam200000d4 = '\0';
              FUN_ram_00005278(1,(bRam20001ad3 >> 1) + 1);
              FUN_ram_00004eb6(1);
              cVar21 = cRam200000d6 + -1;
              bVar9 = cRam200000d6 == '\x01';
              cRam200000d6 = cVar21;
              if (bVar9) {
                cRam200000c7 = '\0';
                DAT_ram_200000ca = '\0';
              }
            }
          }
          FUN_ram_0000554e();
        }
      }
      else if (bVar14 == 0x60) {
        cVar21 = cRam20001ad5;
        if (cRam20001ad5 == '\x01') {
          FUN_ram_00005278(1,(bRam20001ad3 >> 1) + 1);
          FUN_ram_00004cde();
          if (cRam200000c5 == '\0') {
            cRam20001ad5 = '\x02';
            cRam200000c0 = ' ';
            cRam200000d0 = cVar21;
          }
        }
        else if (cRam20001ad5 == '\x02') {
          if (cRam200000d0 == '\0') {
            FUN_ram_00005278(1,(bRam20001ad3 >> 1) + 1);
            iVar19 = FUN_ram_00004eb6(0);
            if (iVar19 == 0) {
              cRam20001ad5 = '\x03';
            }
          }
          else {
            cVar21 = cRam200000c0 + -1;
            bVar9 = cRam200000c0 == '\x01';
            cRam200000c0 = cVar21;
            if (bVar9) {
              cRam200000d0 = '\0';
              FUN_ram_0000473e(uRam20001ade);
              (&DAT_ram_20001aea)[((uint)bRam20001ad3 * 2 + (uint)(bRam20001ad3 >> 1) + -1) * 0x11]
                   = 0xf;
              FUN_ram_0000bd0e();
              FUN_ram_000044fe(4);
            }
          }
        }
        else if (cRam20001ad5 == '\x03') {
          pbVar6 = (byte *)0x200000c1;
          bVar14 = cRam200000c1 + 1;
          if (bVar14 < 0x3d) goto LAB_ram_00006a72;
          DAT_ram_200000c6 = 0;
          DAT_ram_20001ad0 = '\x01';
          cRam200000c1 = '\0';
          DAT_ram_20001ae3 = *PTR_DAT_ram_2000016c_ram_20000040;
          DAT_ram_20001adb = 0x90;
          if (DAT_ram_2000439e == '\0') {
            DAT_ram_20001adb = bRam20001adc;
          }
          DAT_ram_20001ad1 = PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01';
          DAT_ram_20000128 = uRam20000129;
        }
      }
      FUN_ram_00008b58();
      goto LAB_ram_0000687e;
    }
  }
  else {
    if ((DAT_ram_20001ad1 != '\0') && (cRam200000c4 == '\0')) {
      DAT_ram_20001ad0 = '\0';
      bVar14 = DAT_ram_20001adb & 0xf0;
      if (bVar14 == 0x40) {
        if (DAT_ram_20001adb == 0x40) {
          FUN_ram_00005d72(0xff);
          bRam20002b55 = bRam20001ad3;
          FUN_ram_000050b8(0x20002b55,uRam20001ade);
          DAT_ram_20001ad9 = '\0';
          FUN_ram_000044fe(3);
        }
        else if ((0x3f < DAT_ram_20001adb) && (DAT_ram_20001adb < 0x44)) {
          FUN_ram_00005d72(0xff);
          bRam20002b55 = bRam20001ad3;
          FUN_ram_000050b8(0x20002b55,uRam20001ade);
          FUN_ram_000044fe(4);
          bVar14 = DAT_ram_20001ad4;
          if (DAT_ram_20001adb == 0x43) {
            DAT_ram_20001aec = DAT_ram_20001aec | 0x10;
          }
          DAT_ram_200000e0 = 0xff;
          DAT_ram_200000e1 = 0xff;
          DAT_ram_200000e2 = 0xff;
          puVar13 = &DAT_ram_20001ad0;
          for (bVar15 = 0; bVar15 != bVar14; bVar15 = bVar15 + 1) {
            puVar13[0x20] = 0xff;
            puVar13 = puVar13 + 0x11;
          }
          cRam200000c5 = '\0';
        }
      }
      else if (bVar14 < 0x41) {
        if (bVar14 == 0x20) {
          if ((byte)(DAT_ram_20001adb - 0x20) < 3) {
            FUN_ram_00005dbe();
          }
        }
        else if (bVar14 == 0x30) {
          if (DAT_ram_20001adb == 0x31) {
            FUN_ram_00005d72(0xff);
            bRam20002b55 = bRam20001ad3;
            FUN_ram_000050b8(0x20002b55,uRam20001ade);
          }
          else if (DAT_ram_20001adb == 0x35) {
            FUN_ram_00005d72(0xff);
            bRam20002b55 = bRam20001ad3;
            FUN_ram_000050b8(0x20002b55,uRam20001ade);
            FUN_ram_000044fe(2);
            FUN_ram_00005278(0,bRam20001ad3);
            FUN_ram_0000bd0e();
            cVar21 = DAT_ram_20001ae6;
            uVar26 = (uint)DAT_ram_20001ad4;
            uVar27 = (uint)bRam20001ad3;
            uVar24 = (uint)DAT_ram_20001ae7;
            uVar25 = (uint)DAT_ram_20001adf;
            uVar11 = (uint)DAT_ram_20001ae8;
            uVar23 = (uint)DAT_ram_20001ae9;
            bVar9 = false;
            puVar13 = &DAT_ram_20001ad0;
            for (uVar18 = 0; uVar18 != uVar26; uVar18 = uVar18 + 1 & 0xff) {
              if (cVar21 == '\a') {
                uVar24 = uVar18;
                if (uVar27 != 0) {
                  uVar24 = uVar18 % uVar27;
                }
                bVar9 = true;
                iVar19 = (uVar24 + 0x420) * 4;
                uVar24 = (uint)(byte)(&DAT_ram_20001ad8)[iVar19];
                uVar11 = (uint)(byte)(&DAT_ram_20001ad9)[iVar19];
                uVar23 = (uint)(&DAT_ram_20001ada)[iVar19];
              }
              puVar13[0x1b] = puVar13[0x1b] | 0x38;
              puVar13[0x23] = (char)((uVar25 * uVar24) / 0xff);
              puVar13[0x24] = (char)((uVar25 * uVar11) / 0xff);
              puVar13[0x25] = (char)((uVar25 * uVar23) / 0xff);
              puVar13 = puVar13 + 0x11;
            }
            if (bVar9) {
              DAT_ram_20001ae7 = (byte)uVar24;
              DAT_ram_20001ae8 = (byte)uVar11;
              DAT_ram_20001ae9 = (byte)uVar23;
            }
          }
          else if (DAT_ram_20001adb == 0x30) {
            FUN_ram_00005d72(0xff);
            bRam20002b55 = bRam20001ad3;
            FUN_ram_000050b8(0x20002b55,uRam20001ade);
            FUN_ram_000044fe(1);
            uVar5 = DAT_ram_20002b5a;
            uVar4 = DAT_ram_20002b59;
            uVar3 = DAT_ram_20002b58;
            uVar10 = uRam20002b57;
            bVar14 = DAT_ram_20001ad4;
            puVar13 = &DAT_ram_20001ad0;
            for (bVar15 = 0; bVar15 != bVar14; bVar15 = bVar15 + 1) {
              puVar13[0x1b] = uVar10;
              puVar13[0x20] = uVar3;
              puVar13[0x21] = uVar4;
              puVar13[0x22] = uVar5;
              puVar13[0x2a] = 1;
              puVar13 = puVar13 + 0x11;
            }
          }
        }
      }
      else if (bVar14 == 0x50) {
        if (DAT_ram_20001adb == 0x51) {
          FUN_ram_0000473e(0xff);
          FUN_ram_0000be50(0x20000ef8,0xadf);
          FUN_ram_0000533c();
          FUN_ram_0000452e();
          FUN_ram_00004416();
          DAT_ram_20001ae0 = 0xc;
        }
        else if (((DAT_ram_20001adb == 0x52) || (DAT_ram_20001adb == 0x50)) &&
                (FUN_ram_00005d72(0xff), DAT_ram_20001adb == 0x50)) {
          bRam20002b55 = (bRam20001ad3 >> 1) + 1;
          FUN_ram_000050b8(0x20002b55,0xff);
          FUN_ram_000044fe(3);
          FUN_ram_00005278(0,bRam20001ad3);
          DAT_ram_200000ca = '\x01';
          cRam200000c7 = '\0';
        }
      }
      else if (bVar14 == 0x60) {
        uRam20001ad6 = 3;
        DAT_ram_20001ae0 = 0xc;
        cRam20001ad5 = '\x01';
        DAT_ram_20001adf = 0xff;
        uRam20001ade = 0xff;
        FUN_ram_0000473e(0xff);
        bRam20002b55 = (bRam20001ad3 >> 1) + 1;
        FUN_ram_000050b8(0x20002b55,uRam20001ade);
        FUN_ram_000044fe(4);
        bVar14 = DAT_ram_20001ad4;
        DAT_ram_20001aec = DAT_ram_20001aec | 0x10;
        cRam200000c5 = '\x01';
        DAT_ram_200000c6 = 1;
        DAT_ram_200000e0 = 0xff;
        DAT_ram_200000e1 = 0xff;
        DAT_ram_200000e2 = 0xff;
        puVar13 = &DAT_ram_20001ad0;
        for (bVar15 = 0; bVar15 != bVar14; bVar15 = bVar15 + 1) {
          puVar13[0x20] = 0xff;
          puVar13 = puVar13 + 0x11;
        }
        DAT_ram_20001ae6 = '\0';
      }
      FUN_ram_00008b58();
      goto LAB_ram_000064f4;
    }
LAB_ram_00006500:
    if (cRam200000cb == '\0') {
      cRam200000cb = '\x01';
      FUN_ram_00005d72(uRam20001ade);
    }
    bVar14 = cRam20001ae1 + 1;
    cRam20001ae1 = cRam20001ae1 + '\x01';
    if (DAT_ram_20001ae0 < bVar14) {
      cRam20001ae1 = '\0';
LAB_ram_0000687e:
      FUN_ram_00004bde();
      FUN_ram_00008b58();
    }
  }
  bVar9 = 0x31 < (byte)(cRam200000d8 + 1U);
  cRam200000d8 = cRam200000d8 + '\x01';
  if (bVar9) {
    cRam200000d8 = '\0';
  }
  bVar1 = (byte)(cRam20002c31 + 1U) <= DAT_ram_20002c30;
  cRam20002c31 = cRam20002c31 + '\x01';
  if (!bVar1) {
    cRam20002c31 = '\0';
  }
  pbVar6 = &DAT_ram_20002642;
  cVar21 = '\0';
  do {
    uVar25 = (uint)pbVar6[2];
    if ((&DAT_ram_20001aee)[uVar25 * 0x11] == '\x02') {
      if (bVar1) {
        if (bVar9) {
          if (cRam200000c4 != '\0') goto LAB_ram_000073a6;
LAB_ram_00007346:
          bVar14 = *pbVar6;
          if ((bVar14 & 1) != 0) {
            if (pbVar6[3] == 0) {
              if (pbVar6[5] == 0) {
                pbVar6[3] = pbVar6[4];
                pbVar6[5] = pbVar6[6];
                bVar15 = pbVar6[7];
                if ((bVar15 == 0) || (pbVar6[7] = bVar15 - 1, bVar15 == 1)) {
                  if ((bVar14 & 0x10) == 0) {
                    (&DAT_ram_20001af7)[uVar25 * 0x11] = 0;
                    pbVar6[4] = 0;
                    pbVar6[6] = 0;
                    *pbVar6 = bVar14 & 0xfe;
                    FUN_ram_000044ba(cVar21,uVar25);
                  }
                  else {
                    pbVar6[7] = 0xff;
                  }
                }
              }
              else {
                pbVar6[5] = pbVar6[5] - 1;
                (&DAT_ram_20001af7)[uVar25 * 0x11] = 0;
              }
            }
            else {
              pbVar6[3] = pbVar6[3] - 1;
              (&DAT_ram_20001af7)[uVar25 * 0x11] = pbVar6[8];
            }
          }
          bVar14 = *pbVar6;
          if ((bVar14 & 2) != 0) {
            if (pbVar6[9] == 0) {
              if (pbVar6[0xb] == 0) {
                pbVar6[9] = pbVar6[10];
                pbVar6[0xb] = pbVar6[0xc];
                bVar15 = pbVar6[0xd];
                if ((bVar15 == 0) || (pbVar6[0xd] = bVar15 - 1, bVar15 == 1)) {
                  if ((bVar14 & 0x20) == 0) {
                    (&DAT_ram_20001af8)[uVar25 * 0x11] = 0;
                    pbVar6[10] = 0;
                    pbVar6[0xc] = 0;
                    *pbVar6 = bVar14 & 0xfd;
                    FUN_ram_000044ba(cVar21,uVar25);
                  }
                  else {
                    pbVar6[0xd] = 0xff;
                  }
                }
              }
              else {
                pbVar6[0xb] = pbVar6[0xb] - 1;
                (&DAT_ram_20001af8)[uVar25 * 0x11] = 0;
              }
            }
            else {
              pbVar6[9] = pbVar6[9] - 1;
              (&DAT_ram_20001af8)[uVar25 * 0x11] = pbVar6[0xe];
            }
          }
          bVar14 = *pbVar6;
          if ((bVar14 & 4) != 0) {
            if (pbVar6[0xf] == 0) {
              if (pbVar6[0x11] == 0) {
                pbVar6[0xf] = pbVar6[0x10];
                pbVar6[0x11] = pbVar6[0x12];
                bVar15 = pbVar6[0x13];
                if ((bVar15 == 0) || (pbVar6[0x13] = bVar15 - 1, bVar15 == 1)) {
                  if ((bVar14 & 0x40) == 0) {
                    (&DAT_ram_20001af9)[uVar25 * 0x11] = 0;
                    pbVar6[0x10] = 0;
                    pbVar6[0x12] = 0;
                    *pbVar6 = bVar14 & 0xfb;
                    FUN_ram_000044ba(cVar21,uVar25);
                  }
                  else {
                    pbVar6[0x13] = 0xff;
                  }
                }
              }
              else {
                pbVar6[0x11] = pbVar6[0x11] - 1;
                (&DAT_ram_20001af9)[uVar25 * 0x11] = 0;
              }
            }
            else {
              pbVar6[0xf] = pbVar6[0xf] - 1;
              (&DAT_ram_20001af9)[uVar25 * 0x11] = pbVar6[0x14];
            }
          }
LAB_ram_000073a6:
          bVar14 = DAT_ram_20001ad4;
          if ((bRam20002c29 & 7) != 0) {
            if (cRam20002c2a == '\0') {
              if (cRam20002c2c == '\0') {
                cRam20002c2a = cRam20002c2b;
                cRam20002c2c = cRam20002c2d;
                if ((cRam20002c2e == '\0') ||
                   (cVar16 = cRam20002c2e + -1, bVar2 = cRam20002c2e == '\x01',
                   cRam20002c2e = cVar16, bVar2)) {
                  bRam20002c29 = 0;
                  cRam200000c4 = '\0';
                  if (cRam2000017d != '\0') {
                    cRam2000017d = '\0';
                    if (DAT_ram_200000b8 != '\0') {
                      DAT_ram_200000b8 = '\0';
                      DAT_ram_200000ba = 0;
                      DAT_ram_20000113 = 1;
                    }
                    FUN_ram_0000bebc();
                  }
                }
              }
              else {
                cRam20002c2c = cRam20002c2c + -1;
                if (cRam200000cd != '\0') {
                  cRam200000cd = '\0';
                  puVar13 = &DAT_ram_20001ad0;
                  for (bVar15 = 0; bVar15 != bVar14; bVar15 = bVar15 + 1) {
                    puVar13[0x27] = 0;
                    puVar13[0x28] = 0;
                    puVar13[0x29] = 0;
                    puVar13 = puVar13 + 0x11;
                  }
                }
              }
            }
            else {
              cRam20002c2a = cRam20002c2a + -1;
              if (cRam200000cd == '\0') {
                cRam200000cd = '\x01';
                puVar13 = &DAT_ram_20001ad0;
                for (bVar15 = 0; bVar15 != bVar14; bVar15 = bVar15 + 1) {
                  puVar13[0x27] = 0xff;
                  puVar13[0x28] = 0xff;
                  puVar13[0x29] = 0xff;
                  puVar13 = puVar13 + 0x11;
                }
              }
            }
          }
        }
      }
      else if (cRam200000c4 == '\0') {
        bVar14 = pbVar6[0x15];
        if ((bVar14 & 8) != 0) {
          bVar15 = pbVar6[0x16];
          uVar24 = (uint)bRam20002b52;
          if ((bVar14 & 1) == 0) {
            if (bVar15 != 0) {
              pbVar6[0x16] = bVar15 - 1;
            }
            bVar15 = pbVar6[0x16];
            if (uVar24 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = (undefined1)(((uint)bVar15 * (uint)pbVar6[0x19]) / uVar24);
            }
            (&DAT_ram_20001af7)[uVar25 * 0x11] = uVar10;
            if ((bVar15 == 0) && (pbVar6[0x15] = bVar14 | 1, pbVar6[0x1d] != 0)) {
              bVar14 = bVar14 & 0xf7 | 1;
LAB_ram_000072bc:
              pbVar6[0x15] = bVar14;
            }
          }
          else {
            bVar15 = bVar15 + 1;
            pbVar6[0x16] = bVar15;
            if (uVar24 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = (undefined1)(((uint)bVar15 * (uint)pbVar6[0x19]) / uVar24);
            }
            (&DAT_ram_20001af7)[uVar25 * 0x11] = uVar10;
            if (uVar24 <= bVar15) {
              pbVar6[0x15] = bVar14 & 0xfe;
              bVar14 = bVar14 & 0xfe | 0x20;
              if (pbVar6[0x1d] != 0) goto LAB_ram_000072bc;
            }
          }
        }
        bVar14 = pbVar6[0x15];
        if ((bVar14 & 0x10) != 0) {
          uVar24 = (uint)bRam20002b52;
          if ((bVar14 & 2) == 0) {
            if (pbVar6[0x17] != 0) {
              pbVar6[0x17] = pbVar6[0x17] - 1;
            }
            bVar15 = pbVar6[0x17];
            if (uVar24 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = (undefined1)(((uint)bVar15 * (uint)pbVar6[0x1a]) / uVar24);
            }
            (&DAT_ram_20001af8)[uVar25 * 0x11] = uVar10;
            if ((bVar15 == 0) && (pbVar6[0x15] = bVar14 | 2, pbVar6[0x1d] != 0)) {
              bVar14 = bVar14 & 0xef | 2;
LAB_ram_000072f8:
              pbVar6[0x15] = bVar14;
            }
          }
          else {
            bVar15 = pbVar6[0x17] + 1;
            pbVar6[0x17] = bVar15;
            if (uVar24 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = (undefined1)(((uint)bVar15 * (uint)pbVar6[0x1a]) / uVar24);
            }
            (&DAT_ram_20001af8)[uVar25 * 0x11] = uVar10;
            if (uVar24 <= bVar15) {
              pbVar6[0x15] = bVar14 & 0xfd;
              bVar14 = bVar14 & 0xfd | 8;
              if (pbVar6[0x1d] != 0) goto LAB_ram_000072f8;
            }
          }
        }
        bVar14 = pbVar6[0x15];
        if ((bVar14 & 0x20) != 0) {
          uVar24 = (uint)bRam20002b52;
          if ((bVar14 & 4) == 0) {
            if (pbVar6[0x18] != 0) {
              pbVar6[0x18] = pbVar6[0x18] - 1;
            }
            bVar15 = pbVar6[0x18];
            if (uVar24 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = (undefined1)(((uint)bVar15 * (uint)pbVar6[0x1b]) / uVar24);
            }
            (&DAT_ram_20001af9)[uVar25 * 0x11] = uVar10;
            if ((bVar15 == 0) && (pbVar6[0x15] = bVar14 | 4, pbVar6[0x1d] != 0)) {
              bVar14 = bVar14 & 0xdf | 4;
LAB_ram_00007336:
              pbVar6[0x15] = bVar14;
            }
          }
          else {
            bVar15 = pbVar6[0x18] + 1;
            pbVar6[0x18] = bVar15;
            if (uVar24 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = (undefined1)(((uint)bVar15 * (uint)pbVar6[0x1b]) / uVar24);
            }
            (&DAT_ram_20001af9)[uVar25 * 0x11] = uVar10;
            if (uVar24 <= bVar15) {
              pbVar6[0x15] = bVar14 & 0xfb;
              bVar14 = bVar14 & 0xfb | 0x10;
              if (pbVar6[0x1d] != 0) goto LAB_ram_00007336;
            }
          }
        }
        if (bVar9) goto LAB_ram_00007346;
      }
      else if (bVar9) goto LAB_ram_000073a6;
    }
    cVar21 = cVar21 + '\x01';
    pbVar6 = pbVar6 + 0x1f;
  } while (cVar21 != '#');
  if (DAT_ram_2000018d == '\0') {
    return;
  }
  DAT_ram_2000018d = 0;
  FUN_ram_00008b58();
  if (cRam20000ede == '\0') {
    if (cRam20000edf == '\0') {
      if (cRam20000edd == '\0') {
        if (cRam20000edc == '\0') {
          if (DAT_ram_20000ee2 != '\0') {
            DAT_ram_20000ee2 = '\0';
            FUN_ram_00005f64(0x20000edc,1);
            goto LAB_ram_00007420;
          }
          if (DAT_ram_20000ee3 == '\0') {
            if (DAT_ram_20000ee4 != '\0') {
              uRam20000eee = 1;
              uRam20000eef = 4;
              uRam20000ef0 = 4;
              uRam20000ef1 = 0xc;
              uRam20002730 = 0;
              uRam2000271b = 0;
              uRam200028c3 = 0;
              uRam200028ae = 0;
              DAT_ram_20000ee4 = '\0';
              iVar19 = (uint)bRam200028b0 * 0x11;
              uVar12 = 2;
              (&DAT_ram_20001af7)[iVar19] = 0;
              (&DAT_ram_20001af8)[iVar19] = 0;
              (&DAT_ram_20001af9)[iVar19] = 0;
              if (DAT_ram_2000012c != '\0') {
LAB_ram_0000771e:
                uVar12 = 3;
              }
LAB_ram_000076cc:
              uVar10 = 1;
              goto LAB_ram_000076b4;
            }
            if (DAT_ram_20000ee5 == '\0') {
              if (cRam20000ee0 == '\0') {
                if (DAT_ram_20000ee1 == '\0') {
                  if (cRam20000ee6 == '\0') {
                    if (cRam20000ee7 != '\0') {
                      uRam20000eef = 0x28;
                      cRam20000ee7 = '\0';
                      uRam20000eee = 1;
                      uRam20000ef0 = 1;
                      uRam20000ef1 = 1;
                      uRam20002730 = 0;
                      uRam2000271b = 0;
                      goto LAB_ram_0000771e;
                    }
                    if (cRam20000eec == '\0') {
                      if (cRam20000eea == '\0') goto LAB_ram_00007420;
                      uRam20000eee = 7;
                      uRam20000eef = 5;
                      uRam20000ef0 = 5;
                      cRam20000eea = '\0';
                      uRam20000ef1 = 10;
                      uVar12 = 3;
                      uVar10 = 7;
                      uVar8 = 0x21;
                    }
                    else {
                      cRam20000eec = '\0';
                      if (cRam20000eed == '\0') {
                        uRam20000eee = 7;
                        uRam20000ef0 = 5;
                      }
                      else {
                        uRam20000eee = 0x77;
                        uRam20000ef0 = 0;
                      }
                      uRam20000eef = 5;
                      uRam20000ef1 = 10;
                      uVar12 = 3;
                      uVar10 = 7;
                      uVar8 = 0x22;
                    }
                  }
                  else {
                    uRam20000eee = 1;
                    uRam20000eef = 2;
                    uRam20000ef0 = 2;
                    cRam20000ee6 = '\0';
                    uRam20000ef1 = 0x14;
                    uVar12 = 3;
                    uVar10 = 1;
                    uVar8 = 0x1f;
                  }
                }
                else {
                  DAT_ram_20000ee1 = '\0';
                  iVar19 = (uint)bRam2000271d * 0x11;
                  uRam200028c3 = 0;
                  uRam200028ae = 0;
                  uRam20002730 = 0;
                  uRam2000271b = 0;
                  (&DAT_ram_20001af7)[iVar19] = 0;
                  (&DAT_ram_20001af8)[iVar19] = 0;
                  (&DAT_ram_20001af9)[iVar19] = 0;
                  if (DAT_ram_200034e0 == '\0') {
                    FUN_ram_00006040(0x14,1,0,0x20000edc);
                    iVar19 = (uint)bRam200028b0 * 0x11;
                    (&DAT_ram_20001af7)[iVar19] = 0;
                    (&DAT_ram_20001af8)[iVar19] = 0;
                    (&DAT_ram_20001af9)[iVar19] = 0;
                    goto LAB_ram_00007420;
                  }
                  if (DAT_ram_200034e2 == '\0') {
                    uVar12 = 4;
                  }
                  else {
                    uVar12 = 1;
                  }
                  uRam200028c2 = 0;
                  uRam200028bc = 0;
                  uRam200028b6 = 0xff;
                  uVar10 = DAT_ram_200034e2 != '\0';
                  uVar8 = 0x14;
                }
              }
              else {
                uRam20000eee = 7;
                uRam20000eef = 10;
                uRam20000ef0 = 10;
                cRam20000ee0 = '\0';
                uRam20000ef1 = 3;
                cVar21 = PTR_DAT_ram_20004390_ram_20000044[8];
                if (cVar21 == '\0') {
                  FUN_ram_00006040(0x11,7,3,0x20000edc);
                  uVar12 = 0x10;
LAB_ram_0000779a:
                  FUN_ram_00006040(uVar12,7,2,0x20000edc);
                  uVar12 = 0xf;
                }
                else {
                  if (cVar21 == '\x01') {
                    FUN_ram_00006040(0x10,7,3,0x20000edc);
                    uVar12 = 0x11;
                    goto LAB_ram_0000779a;
                  }
                  if (cVar21 != '\x03') {
                    if (cVar21 != '\x02') goto LAB_ram_00007420;
                    FUN_ram_00006040(0x12,7,3,0x20000edc);
                    FUN_ram_00006040(0x11,7,2,0x20000edc);
                    FUN_ram_00006040(0x10,7,2,0x20000edc);
                    uVar12 = 2;
                    uVar10 = 7;
                    uVar8 = 0xf;
                    goto LAB_ram_0000774e;
                  }
                  FUN_ram_00006040(0xf,7,3,0x20000edc);
                  FUN_ram_00006040(0x11,7,2,0x20000edc);
                  uVar12 = 0x10;
                }
                FUN_ram_00006040(uVar12,7,2,0x20000edc);
                uVar12 = 2;
                uVar10 = 7;
                uVar8 = 0x12;
              }
            }
            else {
              DAT_ram_20000ee5 = '\0';
              if (PTR_DAT_ram_20004390_ram_20000044[10] == '\x01') {
                uRam20000eef = 2;
                uRam20000ef0 = 2;
                uRam20000ef1 = 10;
              }
              else {
                uRam20000eef = 10;
                uRam20000ef0 = 10;
                uRam20000ef1 = 2;
              }
              uRam20000eee = 7;
              uVar12 = 3;
              uVar10 = 7;
              uVar8 = 0x13;
            }
          }
          else {
            DAT_ram_20000ee3 = '\0';
            uRam20002730 = 0;
            iVar19 = (uint)bRam200028b0 * 0x11;
            uRam2000271b = 0;
            uRam200028c3 = 0;
            uRam200028ae = 0;
            (&DAT_ram_20001af7)[iVar19] = 0;
            (&DAT_ram_20001af8)[iVar19] = 0;
            (&DAT_ram_20001af9)[iVar19] = 0;
            if (DAT_ram_20000125 == '\0') {
              uRam20002723 = 0xff;
              uRam20002729 = 0;
              uRam2000272f = 0;
              uVar12 = 0;
              goto LAB_ram_000076cc;
            }
            uRam20002723 = 0xff;
            uRam20002729 = 0;
            uRam2000272f = 0;
            uVar12 = 4;
            uVar10 = 0;
LAB_ram_000076b4:
            uVar8 = 7;
          }
LAB_ram_0000774e:
          FUN_ram_00006040(uVar8,uVar10,uVar12,0x20000edc);
          goto LAB_ram_00007420;
        }
        cRam20000edc = '\0';
        uRam20000ef1 = 1;
        uRam20000eee = 1;
        uRam20000eef = 100;
        uRam20000ef0 = 0;
      }
      else {
        uRam20000ef1 = 1;
        cRam20000edd = '\0';
        uRam20000eee = 1;
        uRam20000eef = 0;
        uRam20000ef0 = 1;
      }
    }
    else {
      uRam20000eee = 0x11;
      uRam20000eef = 2;
      uRam20000ef0 = 2;
      cRam20000edf = '\0';
      uRam20000ef1 = 0x32;
    }
  }
  else {
    uRam20000eee = 0x11;
    uRam20000eef = 10;
    uRam20000ef0 = 10;
    cRam20000ede = '\0';
    uRam20000ef1 = 0xff;
  }
  FUN_ram_00006278();
LAB_ram_00007420:
  if ((DAT_ram_20001ae2 != '\0') &&
     ((((bVar14 = (&DAT_ram_2000262e)[DAT_ram_20001ae3], bVar15 = bVar14, DAT_ram_20001adf < bVar14
        || (bVar14 < DAT_ram_20001adf)) || (bVar15 = DAT_ram_20001adf, bVar14 == DAT_ram_20001adf))
      && (DAT_ram_20001adf = bVar15, DAT_ram_20001ae2 = '\0', DAT_ram_200000ce != '\0')))) {
    DAT_ram_200000ce = '\0';
    DAT_ram_20001ad1 = '\0';
  }
  FUN_ram_00008b58();
  FUN_ram_000063d0();
  FUN_ram_00009ac8();
  FUN_ram_00008b58();
  FUN_ram_00006300(&DAT_ram_20001ad0);
  return;
}



// FUNCTION ram:000079b2 FUN_ram_000079b2
// THUNK false
// CALLS ram:0000834a FUN_ram_0000834a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000079b2(void)

{
  uint uVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  if (DAT_ram_200000e3 < 0x10) {
    DAT_ram_200000e3 = DAT_ram_200000e3 + 1;
  }
  else {
    DAT_ram_200000e3 = 0;
    _DAT_ram_40026818 = PTR_DAT_ram_20002ce0_ram_20000028._0_2_;
  }
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
  uVar2 = (uint)DAT_ram_200000e3;
  if (uVar2 == 0) {
    _DAT_ram_40010c00 = 0x44110111;
    uVar1 = 0x1000;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        _DAT_ram_40010c00 = 0x14114111;
      }
      else if (uVar2 == 3) {
        _DAT_ram_40010c04 = 0x11444441;
      }
      else if (uVar2 == 4) {
        _DAT_ram_40010c04 = 0x11444414;
      }
      else if (uVar2 == 5) {
        _DAT_ram_40010c04 = 0x11444144;
      }
      else {
        if (uVar2 == 6) {
          _DAT_ram_40010c04 = 0x11440444;
          uVar1 = 0x1000;
        }
        else if (uVar2 == 7) {
          _DAT_ram_40010c04 = 0x11404444;
          uVar1 = 0x10000;
        }
        else {
          if (uVar2 != 8) {
            if (uVar2 == 9) {
              _DAT_ram_40010c1c = 0x44444441;
            }
            else if (uVar2 == 10) {
              _DAT_ram_40010c1c = 0x44444414;
            }
            else if (uVar2 == 0xb) {
              _DAT_ram_40010c1c = 0x44444144;
            }
            else {
              if (uVar2 == 0xc) {
                _DAT_ram_40010c1c = 0x44404444;
                uVar1 = 0x10000;
              }
              else if (uVar2 == 0xd) {
                _DAT_ram_40010c1c = 0x44044444;
                uVar1 = 0x100000;
              }
              else {
                if (uVar2 != 0xe) {
                  if (uVar2 == 0xf) {
                    _DAT_ram_40010c1c = 0x14444444;
                  }
                  goto LAB_ram_00007a36;
                }
                _DAT_ram_40010c1c = 0x40444444;
                uVar1 = 0x1000000;
              }
              _DAT_ram_40010c1c = _DAT_ram_40010c1c | uVar1;
            }
            goto LAB_ram_00007a36;
          }
          _DAT_ram_40010c04 = 0x11044444;
          uVar1 = 0x100000;
        }
        _DAT_ram_40010c04 = _DAT_ram_40010c04 | uVar1;
      }
      goto LAB_ram_00007a36;
    }
    _DAT_ram_40010c00 = 0x40114111;
    uVar1 = 0x1000000;
  }
  _DAT_ram_40010c00 = _DAT_ram_40010c00 | uVar1;
LAB_ram_00007a36:
  DAT_ram_40026800 = (&DAT_ram_0000ddf0)[uVar2];
  DAT_ram_40026803 = 8;
  DAT_ram_40026802 = DAT_ram_40026802 | 1;
  return;
}



// FUNCTION ram:00007c2c FUN_ram_00007c2c
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000d518 FUN_ram_0000d518
// CALLS ram:0000bef0 FUN_ram_0000bef0
// CALLS ram:0000c20e FUN_ram_0000c20e
// CALLS ram:0000be0a FUN_ram_0000be0a
// CALLS ram:0000bf9a FUN_ram_0000bf9a
// CALLS ram:0000c204 FUN_ram_0000c204
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00007c2c(void)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &observed_global_pointer;
  _DAT_ram_40021018 = _DAT_ram_40021018 | 0xd;
  uStack_24 = 0x28;
  uStack_28 = 1;
  uStack_2c = 0x7f;
  FUN_ram_0000d518(0x40010800,&uStack_2c);
  uStack_24 = 0x48;
  uStack_2c = 0x7f7f00;
  FUN_ram_0000d518(0x40010800,&uStack_2c);
  _DAT_ram_40010c00 = 0x11111111;
  _DAT_ram_40010c04 = 0x11111111;
  _DAT_ram_40010c1c = 0x11114111;
  uRam40010c10 = 0x3fc8;
  uRam40010c20 = 0xf7;
  FUN_ram_0000be0a(0x32);
  _DAT_ram_40010c00 = 0x88118111;
  _DAT_ram_40010c04 = 0x11888888;
  uRam40010800 = uRam40010800 & 0xfffffff | 0x40000000;
  uRam40010814 = 0x80;
  uRam40010804 = uRam40010804 & 0xfffffff | 0x40000000;
  uRam40010810 = 0x8000;
  _DAT_ram_40011004 = _DAT_ram_40011004 & 0xf0ffffff | 0x4000000;
  _DAT_ram_40011010 = 0x4000;
  _DAT_ram_40010c1c = 0x88884888;
  uRam40010c14 = 0x80000;
  DAT_ram_40026802 = 0;
  uRam4002680c = 0;
  uRam4002680d = 0;
  FUN_ram_0000bef0();
  FUN_ram_0000bf9a();
  FUN_ram_0000c204();
  FUN_ram_0000c20e();
  _DAT_ram_40011000 = _DAT_ram_40011000 & 0xfffff000 | 0x881;
  _DAT_ram_40011010 = 4;
  uRam40010820 = 0x80;
  return;
}



// FUNCTION ram:00007dce FUN_ram_00007dce
// THUNK false
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00007dce(void)

{
  gp = &observed_global_pointer;
  PTR_DAT_ram_20002ce0_ram_20000028 = &DAT_ram_20002ce0;
  FUN_ram_0000be50(&DAT_ram_20002ce0,0x200);
  _DAT_ram_40026818 = PTR_DAT_ram_20002ce0_ram_20000028._0_2_;
  uRam4002680b = 0x71;
  uRam40026807 = 0;
  uRam40026804 = 200;
  uRam40026805 = 0x3f;
  uRam40026806 = 0xf7;
  uRam40026808 = 0x7f;
  uRam40026809 = 0;
  uRam4002680f = 0xf0;
  uRam4002680e = 0x30;
  uRam40026814 = 0;
  uRam4002680d = 0x50;
  uRam40026801 = 4;
  DAT_ram_40026803 = 8;
  DAT_ram_40026800 = 0x13;
  uRam4002680c = 0x85;
  DAT_ram_40026802 = DAT_ram_40026802 | 1;
  uRame000e052 = 0x13;
  uRame000e068 = 0x79b3;
  uRame000e413 = 0xa0;
  _DAT_ram_e000e100 = 0x80000;
  return;
}



// FUNCTION ram:00007e7a FUN_ram_00007e7a
// THUNK false
// CALLS ram:0000cbec FUN_ram_0000cbec
// CALLS ram:0000b63c FUN_ram_0000b63c
// CALLS ram:0000a0a8 FUN_ram_0000a0a8
// CALLS ram:0000ccc8 FUN_ram_0000ccc8
// CALLS ram:0000cd84 FUN_ram_0000cd84
// CALLS ram:0000b6ac FUN_ram_0000b6ac
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000b59c FUN_ram_0000b59c
// CALLS ram:0000af70 FUN_ram_0000af70
// CALLS ram:0000173c FUN_ram_0000173c

/* WARNING: Inlined function: FUN_ram_00001700 */
/* WARNING: Inlined function: FUN_ram_0000173c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_00007e7a(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  
  gp = &observed_global_pointer;
  if (DAT_ram_2000032e != '\x10') {
    puVar19 = (uint *)&DAT_ram_200030d0;
    bVar9 = _DAT_ram_200030d0 == 0;
    bVar10 = _DAT_ram_200030d4 == 0;
    bVar8 = iRam200030d8 == 0;
    bVar7 = iRam200030dc == 0;
    bVar6 = iRam200030e0 == 0;
    bVar5 = iRam200030e4 == 0;
    bVar4 = iRam200030e8 == 0;
    bVar1 = iRam200030ec == 0;
    if (((((((bVar9 && bVar10) && bVar8) && bVar7) && bVar6) && bVar5) && bVar4) && bVar1) {
      cRam200034ef = '\0';
      FUN_ram_0000b63c();
    }
    puVar11 = PTR_DAT_ram_20003d90_ram_2000003c;
    bVar9 = !bVar9;
    bVar10 = !bVar10;
    bVar8 = !bVar8;
    bVar7 = !bVar7;
    bVar6 = !bVar6;
    bVar5 = !bVar5;
    bVar4 = !bVar4;
    bVar1 = !bVar1;
    DAT_ram_200034f1 =
         ((((((bVar9 || bVar10) || bVar8) || bVar7) || bVar6) || bVar5) || bVar4) || bVar1;
    if (((cRam200000ea != DAT_ram_200034f1) && (DAT_ram_20000153 == '\0')) &&
       (cRam200000ea = DAT_ram_200034f1,
       ((((((!bVar9 && !bVar10) && !bVar8) && !bVar7) && !bVar6) && !bVar5) && !bVar4) && !bVar1)) {
      cRam20002f8e = cRam20002f8e + '\x01';
      cRam20002f85 = cRam20002f85 + '\x01';
      DAT_ram_200000f8 = 1;
      DAT_ram_200000f9 = 1;
    }
    DAT_ram_200034ec = '\0';
    uRam200034ed = 0;
    cRam200034ee = '\0';
    bRam200034fc = 0;
    uVar16 = 0;
    do {
      puVar12 = (uint *)&DAT_ram_200030d0;
      uVar18 = 0;
      do {
        if ((1 << (uVar16 & 0x1f) & *puVar12) != 0) {
          uVar17 = uVar18 * 0x10 + (uVar16 & 0xff);
          if ((puVar11[(uVar17 & 0xff) * 4] & 0x7f) == 6) {
            bVar2 = (puVar11 + (uVar17 & 0xff) * 4)[1];
            if (bVar2 == 1) {
              DAT_ram_200034ec = '\x01';
            }
            else if (bVar2 == 2) {
              cRam200034ee = '\x01';
            }
          }
          else {
            uVar15 = (uint)bRam200034fc;
            if (uVar15 < 5) {
              bRam200034fc = bRam200034fc + 1;
              *(char *)(uVar15 + 0x20003521) = (char)uVar17;
            }
          }
        }
        uVar18 = uVar18 + 1 & 0xff;
        puVar12 = puVar12 + 1;
      } while (uVar18 != 8);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x10);
    puVar12 = (uint *)0x20003110;
    puVar20 = (uint *)0x200030b0;
    uVar16 = 0;
    do {
      uVar18 = *puVar19;
      uVar17 = *puVar12;
      *puVar20 = uVar18 ^ uVar17;
      if (uVar18 != uVar17) {
        uVar18 = 0;
        do {
          uVar17 = 1 << (uVar18 & 0x1f);
          if ((uVar17 & *puVar20) != 0) {
            uRam200000ee = (uVar17 & *puVar19) == 0;
            if ((bool)uRam200000ee) {
              uRam200000e9 = 1;
            }
            else {
              uRam200000e8 = 1;
            }
            uRam200000ed = !(bool)uRam200000ee;
            iVar13 = FUN_ram_0000b6ac((uVar16 & 0xf) * 0x10 + uVar18 & 0xff,!(bool)uRam200000ee);
            if (iVar13 != 0) {
              DAT_ram_200000eb = 1;
              uRam200000ec = 1;
              *puVar12 = *puVar12 ^ uVar17;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x10);
      }
      uVar16 = uVar16 + 1 & 0xff;
      puVar19 = puVar19 + 1;
      puVar12 = puVar12 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar16 != 8);
    if (DAT_ram_200000e6 != '\0') {
      DAT_ram_200000e6 = '\0';
      uVar14 = 1;
      if (DAT_ram_200000e7 == '\0') {
        uVar14 = 2;
      }
      FUN_ram_0000b59c(uVar14,0,1);
    }
    FUN_ram_0000a0a8();
    FUN_ram_0000af70();
    FUN_ram_0000cbec();
    FUN_ram_0000ccc8();
    FUN_ram_0000cd84();
    if ((cRam200034ee == '\0') || (cRam200034ef != '\0')) {
      uRam20003508 = 0;
    }
    else if (PTR_DAT_ram_20004390_ram_20000044[8] == '\x01') {
      uRam20003508 = 1;
    }
    uRam20002f60 = DAT_ram_20003502;
    uRam20002f61 = DAT_ram_20003503;
    uRam20002f62 = DAT_ram_20003504;
    uRam20002f63 = DAT_ram_20003505;
    uRam20002f64 = DAT_ram_20003506;
    uRam20002f65 = DAT_ram_20003507;
    uRam20002f66 = uRam20003508;
    uRam20002f67 = DAT_ram_20003509;
    uRam20002f68 = DAT_ram_2000350a;
    uRam20002f69 = DAT_ram_2000350b;
    uRam20002f6a = DAT_ram_2000350c;
    uRam20002f6b = uRam2000350d;
    uRam20002f6c = uRam2000350e;
    uRam20002f6d = uRam2000350f;
    uRam20002f6e = uRam20003510;
    uRam20002f6f = uRam20003511;
    uRam20002f70 = uRam20003512;
    uRam20002f71 = uRam20003513;
    uRam20002f72 = uRam20003514;
    uRam20002f73 = uRam20003515;
    uRam20002f74 = uRam20003516;
    uRam20002f75 = uRam20003517;
    uRam20002f76 = uRam20003518;
    uRam20002f77 = uRam20003519;
    uRam20002f78 = uRam2000351a;
    uRam20002f79 = uRam2000351b;
    uRam20002f7a = uRam2000351c;
    uRam20002f7b = uRam2000351d;
    uRam20002f7c = uRam2000351e;
    uRam20002f7d = uRam2000351f;
    uRam20002f7e = DAT_ram_20003520;
    if ((bRam200034fc == 2) && (cRam200034ee != '\0' || DAT_ram_200034ec != '\0')) {
      cVar3 = PTR_DAT_ram_20003d90_ram_2000003c[(uint)bRam20003522 * 4 + 1];
      if (((PTR_DAT_ram_20003d90_ram_2000003c[(uint)bRam20003521 * 4 + 1] == ')') ||
          (bVar1 = cVar3 == ')',
          cVar3 = PTR_DAT_ram_20003d90_ram_2000003c[(uint)bRam20003521 * 4 + 1], bVar1)) &&
         (cVar3 == '*')) {
        uRam20002f61 = 0;
        uRam20002f62 = 0;
        cRam20002f85 = cRam20002f85 + '\x01';
        DAT_ram_200000f8 = 1;
        if ((uRam200000e4 < 10) && (uRam200000e4 = uRam200000e4 + 1, uRam200000e4 == 10)) {
          DAT_ram_200034f8 = 1;
        }
      }
      else {
        uRam200000e4 = 0;
      }
    }
    else {
      uRam200000e4 = 0;
      DAT_ram_200034f8 = 0;
    }
    return DAT_ram_200034f1;
  }
  return 0;
}



// FUNCTION ram:000081dc FUN_ram_000081dc
// THUNK false
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:0000cd88 FUN_ram_0000cd88
// CALLS ram:00007e7a FUN_ram_00007e7a
// CALLS ram:00008b58 FUN_ram_00008b58
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000834a FUN_ram_0000834a

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_000081dc(uint param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  
  gp = &observed_global_pointer;
  for (uVar4 = 0; uVar4 != param_1; uVar4 = uVar4 + 1 & 0xffff) {
    FUN_ram_0000834a();
    FUN_ram_00008b58();
    FUN_ram_0000cd88();
    FUN_ram_0000be1e(1,1);
  }
  FUN_ram_00007e7a();
  cRam200034fd = '\0';
  cRam200034fe = -1;
  cRam200034ff = -1;
  cRam20003500 = -1;
  iVar5 = 0;
  do {
    uVar4 = 0;
    do {
      FUN_ram_0000bd0e();
      cVar6 = cRam200034fd;
      cVar2 = cRam200034fe;
      cVar3 = cRam200034ff;
      if ((1 << (uVar4 & 0x1f) & *(uint *)((int)&DAT_ram_200030d0 + iVar5)) != 0) {
        cVar1 = (char)iVar5 * '\x04' + (char)uVar4;
        cVar6 = cRam200034fd + '\x01';
        cVar2 = cVar1;
        if (((cRam200034fd != '\0') && (cVar2 = cRam200034fe, cVar3 = cVar1, cRam200034fd != '\x01')
            ) && (cVar3 = cRam200034ff, cRam200034fd == '\x02')) {
          cRam20003500 = cVar1;
        }
      }
      cRam200034ff = cVar3;
      cRam200034fe = cVar2;
      cRam200034fd = cVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x10);
    *(uint *)(iVar5 + 0x20003090) = *(uint *)((int)&DAT_ram_200030d0 + iVar5);
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x20);
  return;
}



// FUNCTION ram:00008298 FUN_ram_00008298
// THUNK false

bool FUN_ram_00008298(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  gp = &observed_global_pointer;
  puVar3 = &DAT_ram_200030d0;
  uVar2 = 0;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    uVar2 = uVar2 | uVar1;
  } while (puVar3 != (ushort *)&DAT_ram_200030f0);
  return uVar2 != 0;
}



// FUNCTION ram:000082b6 FUN_ram_000082b6
// THUNK false

char FUN_ram_000082b6(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  gp = &observed_global_pointer;
  cVar2 = '\0';
  for (uVar1 = 0; (uVar1 & 0xff) < param_2; uVar1 = uVar1 + 1) {
    cVar2 = cVar2 + *(char *)(param_1 + uVar1);
  }
  return 'U' - cVar2;
}



// FUNCTION ram:000082de FUN_ram_000082de
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

bool FUN_ram_000082de(int param_1,int param_2)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  uVar1 = FUN_ram_000082b6(param_1,param_2 - 1U & 0xff);
  return *(byte *)(param_1 + param_2 + -1) == uVar1;
}



// FUNCTION ram:00008302 FUN_ram_00008302
// THUNK false

void FUN_ram_00008302(undefined1 param_1)

{
  gp = &observed_global_pointer;
  DAT_ram_2000011c = 10000;
  DAT_ram_2000011e = param_1;
  DAT_ram_20000118 = 0;
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
// CALLS ram:00008320 FUN_ram_00008320
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000834a(void)

{
  gp = &observed_global_pointer;
  uRam40010c10 = 0x3fc8;
  uRam40010c20 = 0xf7;
  _DAT_ram_40010c00 = 0x88118111;
  _DAT_ram_40010c04 = 0x11888888;
  _DAT_ram_40010c1c = 0x88884888;
  uRam40010c14 = *(undefined4 *)(&UNK_ram_0000de00 + (uint)bRam20000109 * 4);
  FUN_ram_00008320();
  (&DAT_ram_20003150)[bRam20000109] = ~(_DAT_ram_40010c08 & 0xf73fc8);
  uRam40010c10 = *(undefined4 *)(&UNK_ram_0000de00 + (uint)bRam20000109 * 4);
  FUN_ram_00008320();
  bRam20000109 = bRam20000109 + 1;
  if (6 < bRam20000109) {
    bRam20000109 = 0;
  }
  return;
}



// FUNCTION ram:00008414 FUN_ram_00008414
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00008414(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40021018 = _DAT_ram_40021018 | 0x11;
  _DAT_ram_40011000 = _DAT_ram_40011000 & 0xfffff0ff | 0x400;
  _DAT_ram_40010008 = 0x20;
  _DAT_ram_40010404 = 4;
  _DAT_ram_40010400 = _DAT_ram_40010400 & 0xfffffffb | 4;
  _DAT_ram_40010408 = _DAT_ram_40010408 & 0xfffffffb | 4;
  _DAT_ram_4001040c = _DAT_ram_4001040c & 0xfffffffb | 4;
  DAT_ram_e000e414 = 0;
  _DAT_ram_e000e100 = 0x100000;
  return;
}



// FUNCTION ram:00008492 FUN_ram_00008492
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00003a42 FUN_ram_00003a42

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00008492(void)

{
  gp = &observed_global_pointer;
  if (((DAT_ram_20003532 != DAT_ram_20003531) || (DAT_ram_2000012f != '\0')) &&
     (DAT_ram_200000ba == '\x03')) {
    DAT_ram_20003532 = DAT_ram_20003531;
    DAT_ram_2000012f = 0;
    FUN_ram_00003a42(&DAT_ram_200003b8);
    return;
  }
  return;
}



// FUNCTION ram:000084d2 FUN_ram_000084d2
// THUNK false
// CALLS ram:00003864 FUN_ram_00003864
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:000037dc FUN_ram_000037dc

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Removing unreachable block (ram,0x00008578) */

void FUN_ram_000084d2(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  if ((uint)DAT_ram_200033dd != (uint)DAT_ram_200033dc) {
    if (((&DAT_ram_20003170)[(uint)DAT_ram_200033dc * 0x1f] & 3) != 0) {
      FUN_ram_000037dc(&DAT_ram_200003b8);
      (&DAT_ram_20003170)[(uint)DAT_ram_200033dc * 0x1f] =
           (&DAT_ram_20003170)[(uint)DAT_ram_200033dc * 0x1f] & 0xfc;
      DAT_ram_20003070 = DAT_ram_20003070 & 0xfc;
    }
    iVar2 = (uint)DAT_ram_200033dc * 0x1f;
    bVar1 = (&DAT_ram_20003170)[iVar2];
    if ((bVar1 & 0xc) != 0) {
      (&DAT_ram_20003170)[iVar2] = bVar1 & 0xf3;
      DAT_ram_20003070 = DAT_ram_20003070 & 0xf3;
      FUN_ram_00003864(&DAT_ram_200003b8,&DAT_ram_20000100,(&DAT_ram_20003178)[iVar2],
                       (&DAT_ram_20003179)[iVar2],(&DAT_ram_2000317a)[iVar2]);
    }
    if ((((&DAT_ram_20003170)[(uint)DAT_ram_200033dc * 0x1f] & 0xf) == 0) &&
       (uVar3 = (DAT_ram_200033dc + 1) % 0x14, DAT_ram_200033dc = (byte)uVar3,
       DAT_ram_200033dd == uVar3)) {
      DAT_ram_200000f6 = 0;
    }
  }
  return;
}



// FUNCTION ram:00008590 FUN_ram_00008590
// THUNK false
// CALLS ram:00003864 FUN_ram_00003864
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00008590(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  if (DAT_ram_20000100 != '\0') {
    iVar1 = (uint)DAT_ram_200033dc * 0x1f;
    FUN_ram_00003864(&DAT_ram_200003b8,&DAT_ram_20000100,(&DAT_ram_20003178)[iVar1],
                     (&DAT_ram_20003179)[iVar1],(&DAT_ram_2000317a)[iVar1]);
    DAT_ram_20000102 = 0;
    DAT_ram_20000103 = 0;
    DAT_ram_20000104 = 0;
    DAT_ram_20000105 = 0;
    DAT_ram_20000106 = 0;
    uRam20000107 = 0;
    DAT_ram_20000100 = '\0';
  }
  return;
}



// FUNCTION ram:000085e8 FUN_ram_000085e8
// THUNK false
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:00003a42 FUN_ram_00003a42
// CALLS ram:000037dc FUN_ram_000037dc
// CALLS ram:000036e2 FUN_ram_000036e2

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_000085e8(void)

{
  char cVar1;
  
  gp = &observed_global_pointer;
  cRam2000011a = '\0';
  if (DAT_ram_2000012b != '\0') {
    FUN_ram_0000be50(&DAT_ram_20003170,0x26e);
    FUN_ram_000037dc(&DAT_ram_200003b8,&DAT_ram_20003170 + (uint)DAT_ram_200033dc * 0x1f);
    FUN_ram_00003b26(&DAT_ram_200003b8);
    FUN_ram_0000be1e(5,1);
    FUN_ram_00003b26(&DAT_ram_200003b8);
    FUN_ram_00003a42(&DAT_ram_200003b8,0);
    FUN_ram_00003b26(&DAT_ram_200003b8);
    FUN_ram_0000be1e(10,1);
    FUN_ram_00003b26(&DAT_ram_200003b8);
    FUN_ram_0000be1e(0x14,1);
  }
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 0xb;
  uRam20000395 = 1;
  uRam200003b4 = 6;
  uRam200003b5 = 6;
  cVar1 = 'P';
  FUN_ram_000036e2(&DAT_ram_200003b8,0x20000394,4);
  do {
    do {
      if (cRam2000011a != '\0') goto LAB_ram_000086c6;
      FUN_ram_0000bd0e();
    } while (DAT_ram_20000198 == '\0');
    cVar1 = cVar1 + -1;
    DAT_ram_20000198 = '\0';
    FUN_ram_00003b26(&DAT_ram_200003b8);
  } while (cVar1 != '\0');
LAB_ram_000086c6:
  FUN_ram_0000be1e(0x32,1);
  return;
}



// FUNCTION ram:000086d4 FUN_ram_000086d4
// THUNK false
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000086d4(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_2000008e != '\0') {
    DAT_ram_2000008e = 0;
    uRam40010814 = 0x800000;
    FUN_ram_0000be1e(1,1);
    uRam40010820 = 0x80;
    return;
  }
  return;
}



// FUNCTION ram:00008708 FUN_ram_00008708
// THUNK false

/* WARNING: Removing unreachable block (ram,0x0000871a) */

void FUN_ram_00008708(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  uVar1 = (DAT_ram_200033dd + 1) % 0x14;
  if (uVar1 != DAT_ram_200033dc) {
    iVar2 = (uint)DAT_ram_200033dd * 0x1f;
    (&DAT_ram_20003170)[iVar2] = *param_1;
    (&DAT_ram_20003171)[iVar2] = param_1[1];
    (&DAT_ram_20003172)[iVar2] = param_1[2];
    (&DAT_ram_20003173)[iVar2] = param_1[3];
    (&DAT_ram_20003174)[iVar2] = param_1[4];
    (&DAT_ram_20003175)[iVar2] = param_1[5];
    (&DAT_ram_20003176)[iVar2] = param_1[6];
    (&DAT_ram_20003177)[iVar2] = param_1[7];
    (&DAT_ram_20003178)[iVar2] = param_1[8];
    (&DAT_ram_20003179)[iVar2] = param_1[9];
    (&DAT_ram_2000317a)[iVar2] = param_1[10];
    (&DAT_ram_2000317b)[iVar2] = param_1[0xb];
    (&DAT_ram_2000317c)[iVar2] = param_1[0xc];
    (&DAT_ram_2000317d)[iVar2] = param_1[0xd];
    (&DAT_ram_2000317e)[iVar2] = param_1[0xe];
    (&DAT_ram_2000317f)[iVar2] = param_1[0xf];
    (&DAT_ram_20003180)[iVar2] = param_1[0x10];
    (&DAT_ram_20003181)[iVar2] = param_1[0x11];
    (&DAT_ram_20003182)[iVar2] = param_1[0x12];
    (&DAT_ram_20003183)[iVar2] = param_1[0x13];
    (&DAT_ram_20003184)[iVar2] = param_1[0x14];
    (&DAT_ram_20003185)[iVar2] = param_1[0x15];
    (&DAT_ram_20003186)[iVar2] = param_1[0x16];
    (&DAT_ram_20003187)[iVar2] = param_1[0x17];
    (&DAT_ram_20003188)[iVar2] = param_1[0x18];
    (&DAT_ram_20003189)[iVar2] = param_1[0x19];
    (&DAT_ram_2000318a)[iVar2] = param_1[0x1a];
    (&DAT_ram_2000318b)[iVar2] = param_1[0x1b];
    (&DAT_ram_2000318c)[iVar2] = param_1[0x1c];
    (&DAT_ram_2000318d)[iVar2] = param_1[0x1d];
    DAT_ram_200033dd = (byte)uVar1;
    (&DAT_ram_2000318e)[iVar2] = param_1[0x1e];
  }
  return;
}



// FUNCTION ram:000087b0 FUN_ram_000087b0
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be94 FUN_ram_0000be94
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:00008708 FUN_ram_00008708

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_000087b0(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  if (DAT_ram_200000eb != '\0') {
    DAT_ram_200000eb = 0;
    DAT_ram_200000f6 = 1;
    iVar1 = FUN_ram_0000be94(0x20002f84,0x20002f60,7);
    if (iVar1 != 0) {
      DAT_ram_20003071 = uRam20002f60;
      DAT_ram_20003072 = uRam20002f61;
      DAT_ram_20003073 = uRam20002f62;
      uRam20003074 = uRam20002f63;
      uRam20003075 = uRam20002f64;
      uRam20003076 = uRam20002f65;
      uRam20003077 = uRam20002f66;
      DAT_ram_200000f8 = 1;
      uRam20002f84 = uRam20002f60;
      uRam20002f85 = uRam20002f61;
      DAT_ram_20003070 = DAT_ram_20003070 | 1;
      uRam20002f86 = uRam20002f62;
      uRam20002f87 = uRam20002f63;
      uRam20002f88 = uRam20002f64;
      uRam20002f89 = uRam20002f65;
      uRam20002f8a = uRam20002f66;
    }
    iVar1 = FUN_ram_0000be94(0x20002f8e,0x20002f6a,0x14);
    if (iVar1 != 0) {
      FUN_ram_0000be6a(0x20002f8e,0x20002f6a,0x14);
      DAT_ram_200000f9 = 1;
      DAT_ram_20003070 = DAT_ram_20003070 | 2;
      FUN_ram_0000be6a(&DAT_ram_2000307b,0x20002f6a,0x14);
    }
    if ((cRam20002f8b != cRam20002f67) || (cRam20002f8c != cRam20002f68)) {
      DAT_ram_200000fa = 1;
      cRam20002f8b = cRam20002f67;
      cRam20002f8c = cRam20002f68;
      DAT_ram_20003070 = DAT_ram_20003070 | 4;
      DAT_ram_20003078 = cRam20002f67;
      DAT_ram_20003079 = cRam20002f68;
    }
    if (cRam20002f7f != cRam20002f69) {
      DAT_ram_200000fb = 1;
      cRam20002f7f = cRam20002f69;
      DAT_ram_20003070 = DAT_ram_20003070 | 8;
      DAT_ram_2000307a = cRam20002f69;
    }
    if (DAT_ram_200000fc != '\0') {
      DAT_ram_20000100 = 1;
      DAT_ram_200000fc = '\0';
      DAT_ram_20000101 = uRam20002f7e;
    }
    FUN_ram_00008708(&DAT_ram_20003070);
    return;
  }
  return;
}



// FUNCTION ram:0000890a FUN_ram_0000890a
// THUNK false
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:00001c54 FUN_ram_00001c54
// CALLS ram:00007e7a FUN_ram_00007e7a
// CALLS ram:000087b0 FUN_ram_000087b0
// CALLS ram:000084d2 FUN_ram_000084d2
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:00008590 FUN_ram_00008590

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_0000890a(void)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  
  gp = &observed_global_pointer;
  bVar7 = DAT_ram_20000108 + 1;
  DAT_ram_20000108 = DAT_ram_20000108 + 1;
  if (6 < bVar7) {
    DAT_ram_20000108 = 0;
  }
  uVar5 = (uint)DAT_ram_20000108;
  uVar11 = (&DAT_ram_20003150)[uVar5];
  (&DAT_ram_20003130)[uVar5] = (&DAT_ram_200030f0)[uVar5] ^ uVar11;
  if ((&DAT_ram_200030f0)[uVar5] != uVar11) {
    DAT_ram_200000f0 = (byte)(1 << (uVar5 & 0x1f)) | DAT_ram_200000f0;
  }
  (&DAT_ram_200030f0)[uVar5] = uVar11;
  bVar7 = bRam200043a0;
  if (((int)(uint)DAT_ram_200000f0 >> (uVar5 & 0x1f) & 1U) == 0) {
    return;
  }
  cVar9 = -0x42 - bRam200043a0;
  iVar6 = uVar5 << 4;
  uVar8 = 0;
  bVar2 = false;
  puVar4 = (uint *)(uVar5 * 4 + 0x20003050);
  puVar3 = (uint *)(&DAT_ram_200030d0 + uVar5 * 2);
  do {
    pcVar12 = (char *)(iVar6 + 0x20002fd0);
    if (*pcVar12 == '\0') {
      uVar5 = 1 << (uVar8 & 0x1f);
      uVar10 = *puVar4;
      if ((uVar11 & *(uint *)(&UNK_ram_0000de20 + uVar8 * 4)) == 0) {
        *(undefined1 *)(iVar6 + 0x200033e0) = 0;
        bVar1 = *(byte *)(iVar6 + 0x20003460);
        if (bVar1 < 10) {
          *puVar4 = uVar5 | uVar10;
          *(byte *)(iVar6 + 0x20003460) = bVar1 + 1;
        }
        else {
          *puVar3 = *puVar3 & ~uVar5;
          if (*(char *)(iVar6 + 0x20002ee0) == '\x01') {
            *puVar4 = uVar5 | uVar10;
            *(char *)(iVar6 + 0x20002ee0) = '\0';
            *pcVar12 = -0x4c;
            goto LAB_ram_00008a42;
          }
          *puVar4 = ~uVar5 & uVar10;
        }
      }
      else {
        bVar1 = *(byte *)(iVar6 + 0x200033e0);
        *(undefined1 *)(iVar6 + 0x20003460) = 0;
        if (bVar1 < bVar7) {
          *puVar4 = uVar5 | uVar10;
          *(byte *)(iVar6 + 0x200033e0) = bVar1 + 1;
        }
        else {
          *puVar3 = *puVar3 | uVar5;
          if (*(char *)(iVar6 + 0x20002ee0) == '\0') {
            *puVar4 = uVar5 | uVar10;
            *(char *)(iVar6 + 0x20002ee0) = '\x01';
            *pcVar12 = cVar9;
LAB_ram_00008a42:
            bVar2 = true;
          }
          else {
            *puVar4 = ~uVar5 & uVar10;
          }
        }
      }
    }
    else {
      *(undefined1 *)(iVar6 + 0x20003460) = 0;
      *(undefined1 *)(iVar6 + 0x200033e0) = 0;
      *pcVar12 = *pcVar12 + -1;
    }
    uVar8 = uVar8 + 1;
    iVar6 = iVar6 + 1;
    if (uVar8 == 0x10) {
      if (*(int *)((uint)DAT_ram_20000108 * 4 + 0x20003050) == 0) {
        DAT_ram_200000f0 = ~(byte)(1 << (DAT_ram_20000108 & 0x1f)) & DAT_ram_200000f0;
      }
      if (((bVar2) && (DAT_ram_2000032e != '\x10')) &&
         (*PTR_DAT_ram_20004390_ram_20000044 == '\x01')) {
        FUN_ram_00007e7a();
        FUN_ram_000087b0();
        if (DAT_ram_2000032e == '\n') {
          FUN_ram_00001c54();
        }
        else {
          if (DAT_ram_200000f6 != '\0') {
            FUN_ram_000084d2();
          }
          FUN_ram_00008590();
          FUN_ram_00003b26(&DAT_ram_200003b8);
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION ram:00008b58 FUN_ram_00008b58
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000890a FUN_ram_0000890a

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00008b58(void)

{
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  FUN_ram_0000890a();
  FUN_ram_0000890a();
  FUN_ram_0000890a();
  FUN_ram_0000890a();
  FUN_ram_0000890a();
  FUN_ram_0000890a();
  FUN_ram_0000890a();
  return;
}



// FUNCTION ram:00008b80 FUN_ram_00008b80
// THUNK false

void FUN_ram_00008b80(void)

{
  gp = &observed_global_pointer;
  DAT_ram_2000011f = 6;
  if (DAT_ram_2000032e != '\0') {
    DAT_ram_2000011f = 0x3c;
  }
  DAT_ram_2000011c = 10000;
  DAT_ram_2000011e = DAT_ram_2000011f;
  DAT_ram_20000118 = 0;
  return;
}



// FUNCTION ram:00008bc4 FUN_ram_00008bc4
// THUNK false
// CALLS ram:00007e7a FUN_ram_00007e7a
// CALLS ram:000087b0 FUN_ram_000087b0
// CALLS ram:00006446 FUN_ram_00006446
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00009794 FUN_ram_00009794
// CALLS ram:00001866 FUN_ram_00001866
// CALLS ram:0000b212 FUN_ram_0000b212
// CALLS ram:00009b2a FUN_ram_00009b2a
// CALLS ram:00008492 FUN_ram_00008492
// CALLS ram:0000335c FUN_ram_0000335c
// CALLS ram:00008b58 FUN_ram_00008b58
// CALLS ram:0000637c FUN_ram_0000637c
// CALLS ram:00009748 FUN_ram_00009748
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:000019c4 FUN_ram_000019c4

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00008bc4(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  FUN_ram_00006446();
  FUN_ram_00008b58();
  iVar1 = FUN_ram_00007e7a();
  FUN_ram_00008b58();
  FUN_ram_000087b0();
  if (DAT_ram_2000032e != '\n') {
    FUN_ram_00009794();
  }
  FUN_ram_00009b2a();
  FUN_ram_00008b58();
  if ((DAT_ram_200000ba == '\x03') || (DAT_ram_2000032e == '\n')) {
    FUN_ram_0000b212();
    FUN_ram_000019c4();
  }
  if (iVar1 != 0) {
    if (((DAT_ram_20000125 != '\0' || DAT_ram_2000012d != '\0') && (DAT_ram_200034e0 == '\0')) &&
       (DAT_ram_2000032e != '\n')) {
      if (DAT_ram_2000012d == '\0') {
        if ((DAT_ram_20000125 != '\0') && (DAT_ram_20000127 == '\0')) {
          DAT_ram_20000127 = '\x01';
          DAT_ram_20000ee3 = 1;
        }
      }
      else if (DAT_ram_2000012c == '\0') {
        DAT_ram_2000012c = '\x01';
        DAT_ram_20000ee4 = 1;
      }
    }
    if (((DAT_ram_200000c6 == '\0') && (DAT_ram_2000032e != '\x10')) &&
       ((PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01' && (DAT_ram_20000128 == '\0')))) {
      if ((DAT_ram_20001ad1 == '\0') ||
         ((DAT_ram_20001ae2 != '\0' && ((&DAT_ram_2000262e)[DAT_ram_20001ae3] == '\0')))) {
        DAT_ram_20001ad1 = '\x01';
        DAT_ram_20001ad0 = 1;
        DAT_ram_20001ae2 = '\0';
      }
      FUN_ram_0000637c();
      DAT_ram_2000018a = 0;
      DAT_ram_20000190 = 0;
      DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
    }
  }
  FUN_ram_00008b58();
  FUN_ram_00009748();
  FUN_ram_00008492();
  if ((DAT_ram_2000032e == '\n') || (DAT_ram_200034e0 != '\0')) {
    DAT_ram_2000018a = 0;
    DAT_ram_20000190 = 0;
    DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
  }
  FUN_ram_0000335c();
  FUN_ram_00001866();
  return;
}



// FUNCTION ram:00008d02 FUN_ram_00008d02
// THUNK false
// CALLS ram:00008bc4 FUN_ram_00008bc4
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:000087b0 FUN_ram_000087b0
// CALLS ram:000084d2 FUN_ram_000084d2
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00008302 FUN_ram_00008302
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:00008590 FUN_ram_00008590

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00008d02(uint param_1)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  uRam2000352b = 0;
  if (param_1 == 1) {
    uVar1 = 3;
    if (DAT_ram_2000032e != 0) {
      uVar1 = 6;
    }
    FUN_ram_00008302(uVar1);
    uRam20000ede = 1;
  }
  else {
    FUN_ram_00008302(1);
    uRam20000edf = 1;
  }
  do {
    FUN_ram_0000bd0e();
    if (DAT_ram_20000198 != '\0') {
      DAT_ram_20000198 = '\0';
      FUN_ram_00008bc4();
      FUN_ram_000087b0();
      if (DAT_ram_200000f6 != '\0') {
        FUN_ram_000084d2();
      }
      FUN_ram_00008590();
    }
    if ((DAT_ram_2000012b != '\0') && (DAT_ram_200034e0 == '\0')) {
      DAT_ram_200000ba = 0;
      return;
    }
    if ((5 < DAT_ram_2000032e) || (cRam20000116 != '\0')) {
      cRam20000116 = 0;
      return;
    }
    if (DAT_ram_200000ba != param_1) {
      return;
    }
  } while ((DAT_ram_20000118 == '\0') ||
          (((((DAT_ram_200034f3 != '\0' || DAT_ram_200034f4 != '\0') || DAT_ram_200034f5 != '\0') ||
            DAT_ram_200034f8 != '\0') || DAT_ram_200034f6 != '\0') || DAT_ram_200034f9 != '\0'));
  DAT_ram_200000ba = 0;
  return;
}



// FUNCTION ram:00008dc4 FUN_ram_00008dc4
// THUNK false
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:0000be0a FUN_ram_0000be0a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000326e FUN_ram_0000326e
// CALLS ram:00007c2c FUN_ram_00007c2c

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00008dc4(void)

{
  uint uVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  FUN_ram_0000326e();
  FUN_ram_0000afb6();
  _DAT_csreg_0800 = 0x6000;
  _DAT_ram_40021018 = _DAT_ram_40021018 | 1;
  _DAT_ram_4002101c = _DAT_ram_4002101c | 0x10000000;
  FUN_ram_00007c2c();
  FUN_ram_0000be1e(5,0);
  _DAT_ram_40010008 = 0x25555a60;
  uRam4001000c = 0x5555;
  uVar1 = _DAT_ram_40010408 & 0xff000003;
  uVar2 = _DAT_ram_4001040c & 0xff000003;
  if (DAT_ram_2000032e == '\n') {
    uVar1 = _DAT_ram_40010408 & 0xef000003;
    uVar2 = _DAT_ram_4001040c & 0xef000003;
  }
  _DAT_ram_4001040c = uVar2;
  _DAT_ram_40010408 = uVar1;
  uRam40007000 = uRam40007000 & 0xfffffffd;
  wfi();
  wfi();
  _DAT_ram_e000ed10 = (_DAT_ram_e000ed10 | 0x28) & 0xffffffdb | _DAT_ram_e000ed10 & 0x20 | 8;
  uRam2000008f = 1;
  _DAT_ram_40010414 = 0x10fffffc;
  _DAT_ram_40010400 = 0;
  _DAT_ram_40010404 = 0;
  _DAT_ram_40010408 = _DAT_ram_40010408 & 0xef000003;
  _DAT_ram_4001040c = _DAT_ram_4001040c & 0xef000003;
  FUN_ram_0000be0a(10);
  _DAT_csreg_0800 = 0x6088;
  return;
}



// FUNCTION ram:00008f84 FUN_ram_00008f84
// THUNK false
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:00009f06 FUN_ram_00009f06
// CALLS ram:0000cae4 FUN_ram_0000cae4
// CALLS ram:0000bbb8 FUN_ram_0000bbb8
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000bc80 FUN_ram_0000bc80
// CALLS ram:00008dc4 FUN_ram_00008dc4
// CALLS ram:000085e8 FUN_ram_000085e8
// CALLS ram:00009770 FUN_ram_00009770
// CALLS ram:0000cae2 FUN_ram_0000cae2
// CALLS ram:0000945c FUN_ram_0000945c
// CALLS ram:00009878 FUN_ram_00009878
// CALLS ram:0000637c FUN_ram_0000637c
// CALLS ram:0000bd32 FUN_ram_0000bd32
// CALLS ram:000086d4 FUN_ram_000086d4
// CALLS ram:00003038 FUN_ram_00003038
// CALLS ram:00007e7a FUN_ram_00007e7a
// CALLS ram:00005e62 FUN_ram_00005e62
// CALLS ram:000022b8 FUN_ram_000022b8
// CALLS ram:0000ca88 FUN_ram_0000ca88
// CALLS ram:00006446 FUN_ram_00006446
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:00008298 FUN_ram_00008298
// CALLS ram:00008414 FUN_ram_00008414
// CALLS ram:0000bd7a FUN_ram_0000bd7a
// CALLS ram:00009b2a FUN_ram_00009b2a
// CALLS ram:00008b58 FUN_ram_00008b58
// CALLS ram:00009748 FUN_ram_00009748
// CALLS ram:0000caa0 FUN_ram_0000caa0

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_00008f84(void)

{
  char cVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  iVar2 = FUN_ram_00008298();
  if (iVar2 == 1) {
    FUN_ram_00009878();
    return;
  }
  if (DAT_ram_20000113 == '\0') {
    FUN_ram_000085e8();
  }
  FUN_ram_000022b8();
  FUN_ram_0000ca88();
  FUN_ram_0000bc80();
  FUN_ram_0000bd32();
  FUN_ram_00005e62(&DAT_ram_20001ad0,1);
  if (DAT_ram_2000012b == '\0') {
    if (DAT_ram_200034e0 == '\0') {
      FUN_ram_00008dc4();
    }
    else {
      FUN_ram_0000bd0e();
      uRam20000edd = 1;
      FUN_ram_0000caa0();
      FUN_ram_0000bbb8();
      cVar1 = DAT_ram_2000032e;
      DAT_ram_20001ad1 = 0;
      DAT_ram_20000117 = 1;
      DAT_ram_200034e1 = 0;
      do {
        FUN_ram_0000bd0e();
        if (DAT_ram_20000198 != '\0') {
          DAT_ram_20000198 = '\0';
          FUN_ram_00006446();
          FUN_ram_00009b2a();
          FUN_ram_00008b58();
          FUN_ram_00007e7a();
          FUN_ram_00009748();
        }
        iVar2 = FUN_ram_00008298();
      } while (((iVar2 != 1) && (DAT_ram_200034e0 != '\0')) && (DAT_ram_2000032e == cVar1));
      FUN_ram_0000637c();
      DAT_ram_20000117 = 0;
    }
  }
  else {
    do {
      FUN_ram_00008dc4();
      FUN_ram_0000bbb8();
      FUN_ram_00009f06();
      FUN_ram_00009770(0x60);
      FUN_ram_0000bc80();
      if (0xd15 < uRam20003528) break;
    } while (DAT_ram_200034e0 == '\0');
    DAT_ram_20000125 = 1;
    DAT_ram_2000012d = 0;
    DAT_ram_2000012c = 0;
    DAT_ram_2000012e = 0;
    DAT_ram_20000127 = 0;
    if (DAT_ram_200034e0 != '\0') {
      DAT_ram_2000012b = '\0';
      DAT_ram_20000128 = '\0';
    }
    DAT_ram_20003531 = FUN_ram_0000945c();
  }
  FUN_ram_00003038();
  FUN_ram_0000caa0();
  bRam40026801 = bRam40026801 & 0xfe;
  uRam4002680c = 0x85;
  DAT_ram_40026802 = DAT_ram_40026802 | 1;
  uRam4002680d = 0x50;
  FUN_ram_0000cae2(0x1c200);
  FUN_ram_0000cae4(1000000);
  FUN_ram_0000bbb8();
  FUN_ram_0000bd7a();
  FUN_ram_00008414();
  DAT_ram_2000008e = 1;
  FUN_ram_000086d4();
  if (DAT_ram_2000032e == '\0') {
    if (cRam20000112 != '\0') {
      cRam20000112 = '\0';
LAB_ram_0000916a:
      uRam20000114 = 1;
      DAT_ram_200000ba = 3;
      goto LAB_ram_000090a8;
    }
  }
  else if (DAT_ram_20000113 != '\0') goto LAB_ram_0000916a;
  FUN_ram_00009878();
LAB_ram_000090a8:
  FUN_ram_0000bd0e();
  if (PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01') {
    if (DAT_ram_20000128 == '\0') {
      DAT_ram_20001ad0 = 1;
      DAT_ram_20001ad1 = 1;
    }
    DAT_ram_2000018a = 0;
    DAT_ram_20000190 = 0;
    DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
  }
  DAT_ram_20000113 = 0;
  return;
}



// FUNCTION ram:0000917c FUN_ram_0000917c
// THUNK false
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:000087b0 FUN_ram_000087b0
// CALLS ram:0000caba FUN_ram_0000caba
// CALLS ram:00008b80 FUN_ram_00008b80
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:000039fc FUN_ram_000039fc
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:00008bc4 FUN_ram_00008bc4
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:000084d2 FUN_ram_000084d2
// CALLS ram:00005f14 FUN_ram_00005f14
// CALLS ram:00008590 FUN_ram_00008590

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000917c(void)

{
  uint uVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  uVar1 = (uint)DAT_ram_2000032e;
  if (uVar1 < 6) {
    iVar2 = (uVar1 + 3) * 2;
    *(undefined1 *)(iVar2 + 0x2000353d) = 0x55;
    (&DAT_ram_2000353c)[iVar2] = 0;
    FUN_ram_0000c2b4((uVar1 + 0x1f9b) * 2,2);
  }
  FUN_ram_00008b80();
  FUN_ram_0000be50(&DAT_ram_20003170,0x26e);
  uRam2000352b = 1;
  DAT_ram_2000018a = 0;
  DAT_ram_20000190 = 0;
  DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
  if (cRam20000114 == '\0') {
    uRam20000edc = 1;
  }
  else {
    cRam20000114 = '\0';
  }
  DAT_ram_20000ee2 = 1;
  if ((byte)(DAT_ram_2000032e - 1) < 5) {
    FUN_ram_000039fc(&DAT_ram_200003b8,0x58,2);
  }
  while( true ) {
    FUN_ram_0000caba(*PTR_DAT_ram_20004390_ram_20000044);
    FUN_ram_0000bd0e();
    if (DAT_ram_20000198 != '\0') {
      DAT_ram_20000198 = '\0';
      FUN_ram_00008bc4();
    }
    if ((DAT_ram_2000012b != '\0') && (DAT_ram_200034e0 == '\0')) {
      DAT_ram_200000ba = 0;
      return;
    }
    if ((DAT_ram_2000032e < 6) && (cRam20000116 == '\0')) {
      if ((DAT_ram_20000118 != '\0') && (DAT_ram_200034e0 == '\0' && DAT_ram_20001ad1 == '\0')) {
        if (DAT_ram_2000032e != 0) {
          DAT_ram_200000ba = 0;
          return;
        }
        DAT_ram_200000ba = 0;
        uRam20000112 = 1;
        return;
      }
    }
    else {
      cRam20000116 = '\0';
    }
    if (DAT_ram_200000ba != '\x03') {
      return;
    }
    if (5 < DAT_ram_2000032e) break;
    if (cRam200000ed != '\0') {
      FUN_ram_00008b80();
    }
    if (DAT_ram_200034e0 != '\0') {
      FUN_ram_00008b80();
    }
    FUN_ram_000087b0();
    if ((((byte)(DAT_ram_2000032e - 1) < 5) && (DAT_ram_2000011e < 0x37)) &&
       (iVar2 = FUN_ram_00005f14(&DAT_ram_20001ad0), iVar2 == 0)) {
      DAT_ram_200000ba = '\0';
      DAT_ram_20000113 = 1;
    }
    if (DAT_ram_200000f6 != '\0') {
      FUN_ram_000084d2();
    }
    FUN_ram_00008590();
    do {
      if (DAT_ram_20000198 != '\0') {
        DAT_ram_20000198 = '\0';
        if (DAT_ram_20001ad1 == '\0') {
          _DAT_ram_e000ed10 = _DAT_ram_e000ed10 & 0xfffffff7;
          wfi();
        }
        FUN_ram_00008bc4();
      }
    } while (DAT_ram_2000018f == '\0');
    DAT_ram_2000018f = '\0';
  }
  return;
}



// FUNCTION ram:00009338 FUN_ram_00009338
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00008f84 FUN_ram_00008f84
// CALLS ram:00008d02 FUN_ram_00008d02
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000917c FUN_ram_0000917c
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00009338(void)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  do {
    FUN_ram_0000bd0e();
    if (DAT_ram_200000ba == '\x01') {
      uVar1 = 1;
LAB_ram_00009370:
      FUN_ram_00008d02(uVar1);
    }
    else if (DAT_ram_200000ba == '\0') {
      FUN_ram_00008f84();
    }
    else {
      if (DAT_ram_200000ba == '\x02') {
        uVar1 = 2;
        goto LAB_ram_00009370;
      }
      if (DAT_ram_200000ba == '\x03') {
        FUN_ram_0000917c();
      }
    }
    if (5 < DAT_ram_2000032e) {
      return;
    }
  } while( true );
}



// FUNCTION ram:00009380 FUN_ram_00009380
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000205c FUN_ram_0000205c
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:00001eae FUN_ram_00001eae

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00009380(void)

{
  gp = &observed_global_pointer;
  do {
    uRam2000352b = 0;
    FUN_ram_0000bd0e();
    if (cRam200000bb == '\0') {
      FUN_ram_00001eae();
    }
    else if (cRam200000bb == '\x01') {
      FUN_ram_0000205c();
    }
  } while (DAT_ram_2000032e == '\n');
  return;
}



// FUNCTION ram:000093bc FUN_ram_000093bc
// THUNK false
// CALLS ram:00008bc4 FUN_ram_00008bc4
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:000085e8 FUN_ram_000085e8
// CALLS ram:00008f84 FUN_ram_00008f84
// CALLS ram:00005f64 FUN_ram_00005f64
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_000093bc(void)

{
  gp = &observed_global_pointer;
  DAT_ram_20001ad1 = 0;
  uRam20000edd = 1;
  uRam20000115 = 1;
  FUN_ram_000085e8();
  FUN_ram_00005f64(0x20000edc,0);
  DAT_ram_2000032d = 0xff;
  sRam20000110 = 5000;
  do {
    FUN_ram_0000bd0e();
    if (DAT_ram_20000198 != '\0') {
      DAT_ram_20000198 = '\0';
      if (DAT_ram_200034e0 == '\0') {
        sRam20000110 = sRam20000110 + -1;
      }
      FUN_ram_00008bc4();
    }
  } while ((sRam20000110 != 0) && (DAT_ram_2000032e == '\x10'));
  if (DAT_ram_200034e0 == '\0') {
    if (DAT_ram_2000032e != '\x10') {
      uRam20000323 = 0;
      uRam20000330 = 0xff;
      uRam2000033a = 0;
      return;
    }
    FUN_ram_00008f84();
  }
  if (DAT_ram_2000032e != '\x10') {
    uRam2000033a = 0;
    uRam20000330 = 0xff;
    uRam20000323 = 0;
    return;
  }
  return;
}



// FUNCTION ram:0000945c FUN_ram_0000945c
// THUNK false

undefined4 FUN_ram_0000945c(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  gp = &observed_global_pointer;
  if (param_1 < 0xc1d) {
    return 0;
  }
  if (param_1 < 0xc81) {
    return 5;
  }
  if (param_1 < 0xd17) {
    return 10;
  }
  if (param_1 < 0xd53) {
    return 0xf;
  }
  if (param_1 < 0xd8f) {
    return 0x14;
  }
  if (param_1 < 0xdb7) {
    return 0x19;
  }
  if (param_1 < 0xe07) {
    return 0x1e;
  }
  if (param_1 < 0xe43) {
    return 0x23;
  }
  if (param_1 < 0xe6b) {
    return 0x28;
  }
  if (param_1 < 0xe93) {
    return 0x2d;
  }
  if (param_1 < 0xebb) {
    return 0x32;
  }
  if (param_1 < 0xee3) {
    return 0x37;
  }
  if (param_1 < 0xf01) {
    return 0x3c;
  }
  if (param_1 < 0xf1f) {
    return 0x41;
  }
  if (param_1 < 0xf3d) {
    return 0x46;
  }
  if (param_1 < 0xf5b) {
    uVar2 = 0x4b;
  }
  else if (param_1 < 0xf79) {
    uVar2 = 0x50;
  }
  else if (param_1 < 0xfb5) {
    uVar2 = 0x55;
  }
  else if (param_1 < 0x1005) {
    uVar2 = 0x5a;
  }
  else {
    if (0x1036 < param_1) {
      if (DAT_ram_200034e0 == '\0') {
        return 100;
      }
      uVar2 = 0x5f;
      cVar1 = DAT_ram_200034e2;
      goto LAB_ram_00009520;
    }
    uVar2 = 0x5f;
  }
  cVar1 = DAT_ram_200034e0;
  if (DAT_ram_200034e2 == '\0') {
    return uVar2;
  }
LAB_ram_00009520:
  if (cVar1 != '\0') {
    uVar2 = 100;
  }
  return uVar2;
}



// FUNCTION ram:00009594 FUN_ram_00009594
// THUNK false
// CALLS ram:0000945c FUN_ram_0000945c
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00009594(void)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  if (DAT_ram_200034e0 == '\0') {
    uVar1 = uRam20003535 + 1 & 0xffff;
    if (uVar1 < 1000) {
      uRam20003535 = CONCAT11((char)(uVar1 >> 8),(char)((uRam20003535 + 1) * 0x10000 >> 0x10));
    }
    else {
      uRam20003535 = 0;
      uVar1 = FUN_ram_0000945c(sRam20003528);
      if (uVar1 < DAT_ram_20003531) {
        if (DAT_ram_20003531 - 5 == uVar1) {
          DAT_ram_20003531 = (byte)uVar1;
        }
        else {
          DAT_ram_20003531 = DAT_ram_20003531 - 5;
          DAT_ram_20000083 = 1;
        }
      }
    }
    uRam20003533 = 0;
  }
  else {
    uVar1 = uRam20003533 + 1 & 0xffff;
    if (uVar1 < 1000) {
      uRam20003533 = CONCAT11((char)(uVar1 >> 8),(char)((uRam20003533 + 1) * 0x10000 >> 0x10));
    }
    else {
      uRam20003533 = 0;
      uVar1 = FUN_ram_0000945c(sRam20003528 + -100);
      if (DAT_ram_20003531 < uVar1) {
        if (uVar1 - 5 == (uint)DAT_ram_20003531) {
          DAT_ram_20003531 = (byte)uVar1;
        }
        else {
          DAT_ram_20003531 = DAT_ram_20003531 + 5;
          DAT_ram_20000083 = 1;
        }
      }
    }
    uRam20003535 = 0;
  }
  return;
}



// FUNCTION ram:0000966c FUN_ram_0000966c
// THUNK false
// CALLS ram:0000bcde FUN_ram_0000bcde
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00009594 FUN_ram_00009594

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Removing unreachable block (ram,0x000096b2) */

uint FUN_ram_0000966c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  gp = &observed_global_pointer;
  iVar1 = FUN_ram_0000bcde(0xd);
  uRam20000134 = iVar1 + uRam20000134;
  bVar4 = cRam20000130 + 1;
  cRam20000130 = cRam20000130 + '\x01';
  if (0x1f < bVar4) {
    uRam20000032 = (ushort)(uRam20000134 >> 5);
    cRam20000130 = '\0';
    uRam20000134 = 0;
  }
  uVar2 = ((uint)uRam20000034 * (uint)uRam20000032) / 1000;
  uVar3 = uVar2 & 0xffff;
  uRam20003529 = (undefined1)(uVar3 >> 8);
  bRam20003528 = (byte)uVar2;
  if (DAT_ram_20000125 == '\0') {
    if ((uVar3 < uRam20000030) && (DAT_ram_2000032e != '\n')) {
      DAT_ram_20000125 = '\x01';
    }
LAB_ram_0000970c:
    if (uVar3 < 0xc1d) {
      if (DAT_ram_200034e0 == '\0') {
        DAT_ram_2000012d = '\x01';
      }
      goto LAB_ram_00009726;
    }
    if (uVar3 < 0xd17) goto LAB_ram_00009726;
  }
  else {
    if (uVar3 < 0xe06) goto LAB_ram_0000970c;
    DAT_ram_20000125 = '\0';
  }
  DAT_ram_2000012b = 0;
  if (DAT_ram_2000012d != '\0') {
    DAT_ram_2000012d = '\0';
  }
LAB_ram_00009726:
  uVar2 = uVar2 & 0xff;
  if (cRam20003537 == '\0') {
    FUN_ram_00009594(uVar2);
    uVar2 = (uint)bRam20003528;
  }
  return uVar2;
}



// FUNCTION ram:00009748 FUN_ram_00009748
// THUNK false
// CALLS ram:0000966c FUN_ram_0000966c
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00009748(void)

{
  gp = &observed_global_pointer;
  if ((byte)(DAT_ram_20000124 + 1U) < 0x28) {
    DAT_ram_20000124 = DAT_ram_20000124 + '\x01';
    return;
  }
  DAT_ram_20000124 = 0;
  FUN_ram_0000966c();
  return;
}



// FUNCTION ram:00009770 FUN_ram_00009770
// THUNK false
// CALLS ram:0000966c FUN_ram_0000966c
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00009770(uint param_1)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  for (uVar1 = 0; uVar1 != param_1; uVar1 = uVar1 + 1 & 0xff) {
    FUN_ram_0000966c();
    FUN_ram_0000be1e(1,1);
  }
  return;
}



// FUNCTION ram:00009794 FUN_ram_00009794
// THUNK false

void FUN_ram_00009794(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_200034e0 == '\0') {
    if (DAT_ram_20000126 != DAT_ram_20000125) {
      DAT_ram_20000126 = DAT_ram_20000125;
      DAT_ram_20000ee3 = 1;
      DAT_ram_20003531 = 0x19;
    }
    if (DAT_ram_2000012e != DAT_ram_2000012d) {
      DAT_ram_20000127 = 0;
      DAT_ram_20000ee4 = 1;
      DAT_ram_2000012e = DAT_ram_2000012d;
    }
  }
  return;
}



// FUNCTION ram:000097da FUN_ram_000097da
// THUNK false
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:0000c34a FUN_ram_0000c34a
// CALLS ram:0000bcde FUN_ram_0000bcde
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Removing unreachable block (ram,0x00009836) */

bool FUN_ram_000097da(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  while( true ) {
    iVar2 = FUN_ram_0000bcde(0xd);
    uRam20000138 = iVar2 + uRam20000138;
    if (0x1f < (byte)(cRam20000131 + 1U)) break;
    cRam20000131 = cRam20000131 + '\x01';
    FUN_ram_0000be1e(1,1);
  }
  uRam20000120 = uRam20000138 >> 5 & 0xffff;
  if (uRam20000120 == 0) {
    uRam20000120 = 0xffffffff;
  }
  else {
    uRam20000120 = 0x188ec354 / uRam20000120;
  }
  uRam20000138 = 0;
  cRam20000131 = 0;
  uVar3 = (uRam20000120 * 10000) / 0x108b4b;
  uRam20000034 = (undefined2)uVar3;
  bVar1 = 0x18e < (uVar3 - 0xc3d & 0xffff);
  if (bVar1) {
    uRam20000eed = 1;
  }
  else {
    uRam200043ee = uRam20000034;
    FUN_ram_0000c34a();
  }
  return !bVar1;
}



// FUNCTION ram:00009878 FUN_ram_00009878
// THUNK false

void FUN_ram_00009878(void)

{
  gp = &observed_global_pointer;
  if ((DAT_ram_2000032e < 6) &&
     (DAT_ram_200000ba = 1, (&DAT_ram_2000353c)[(DAT_ram_2000032e + 3) * 2] != '\x01')) {
    DAT_ram_200000ba = 2;
  }
  return;
}



// FUNCTION ram:000098a0 FUN_ram_000098a0
// THUNK false
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00003a7e FUN_ram_00003a7e

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_000098a0(void)

{
  gp = &observed_global_pointer;
  DAT_ram_20000eb2 = 0;
  DAT_ram_20000eb3 = 0;
  DAT_ram_20000eb7 = 0;
  DAT_ram_20000eb8 = 0;
  FUN_ram_00003a7e(&DAT_ram_200003b8);
  FUN_ram_00003b26(&DAT_ram_200003b8);
  FUN_ram_0000be1e(10,1);
  FUN_ram_00003b26(&DAT_ram_200003b8);
  FUN_ram_0000be1e(0x14,1);
  return;
}



// FUNCTION ram:000098ec FUN_ram_000098ec
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00003798 FUN_ram_00003798
// CALLS ram:00009878 FUN_ram_00009878
// CALLS ram:00006040 FUN_ram_00006040
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:00003a7e FUN_ram_00003a7e
// CALLS ram:00006444 FUN_ram_00006444
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_000098ec(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  gp = &observed_global_pointer;
  FUN_ram_00006444();
  DAT_ram_2000032d = 0xff;
  bVar1 = (byte)param_2;
  DAT_ram_2000032e = bVar1;
  DAT_ram_2000032f = bVar1;
  FUN_ram_00006040(6,7,2,0x20000edc);
  FUN_ram_00006040(5,7,2,0x20000edc);
  FUN_ram_00006040(8,7,2,0x20000edc);
  FUN_ram_00006040(9,7,2,0x20000edc);
  FUN_ram_00006040(10,7,2,0x20000edc);
  if (DAT_ram_2000353c != DAT_ram_2000032e) {
    DAT_ram_2000353c = DAT_ram_2000032e;
    cRam2000353d = 'U' - DAT_ram_2000032e;
    FUN_ram_0000c2b4(0x3f30,2,&DAT_ram_2000353c);
  }
  if ((param_2 - 1U & 0xff) < 5) {
    cRam2000353f = 'U' - bVar1;
    bRam20000331 = bVar1;
    bRam2000353e = bVar1;
    FUN_ram_0000c2b4(0x3f32,2,0x2000353e);
    cRam2000038f = '\x01';
  }
  else if (param_2 == 0) {
    cRam2000038f = '\0';
  }
  cRam20003541 = 'U' - cRam2000038f;
  cRam20003540 = cRam2000038f;
  FUN_ram_0000c2b4(0x3f34,2,0x20003540);
  if (param_1 == 0) {
    FUN_ram_00009878();
  }
  else if (param_1 == 1) {
    DAT_ram_200000ba = 1;
  }
  DAT_ram_20000eb2 = 0;
  DAT_ram_20000eb3 = 0;
  DAT_ram_20000eb7 = 0;
  DAT_ram_20000eb8 = 0;
  uRam20000116 = 1;
  if (param_2 == 10) {
    FUN_ram_00003a7e(&DAT_ram_200003b8);
  }
  else {
    if (cRam20000322 == '\0') {
      uVar2 = (&DAT_ram_2000353c)[(DAT_ram_2000032e + 3) * 2];
    }
    else {
      cRam20000322 = '\0';
      uVar2 = 1;
    }
    FUN_ram_00003798(&DAT_ram_200003b8,uVar2,param_2);
  }
  return;
}



// FUNCTION ram:00009a58 FUN_ram_00009a58
// THUNK false
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00003b26 FUN_ram_00003b26
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:000036e2 FUN_ram_000036e2

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00009a58(undefined1 param_1)

{
  char cVar1;
  
  gp = &observed_global_pointer;
  cRam2000011b = '\0';
  FUN_ram_0000be50(0x20000394,0x22);
  uRam20000394 = 4;
  uRam200003b4 = 6;
  uRam200003b5 = 6;
  cVar1 = '(';
  uRam20000395 = param_1;
  FUN_ram_000036e2(&DAT_ram_200003b8,0x20000394,4);
  do {
    if (cRam2000011b != '\0') {
      gp = &observed_global_pointer;
      return;
    }
    do {
    } while (DAT_ram_20000198 == '\0');
    DAT_ram_20000198 = '\0';
    cVar1 = cVar1 + -1;
    FUN_ram_0000bd0e();
    FUN_ram_00003b26(&DAT_ram_200003b8);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION ram:00009ac8 FUN_ram_00009ac8
// THUNK false
// CALLS ram:00009a58 FUN_ram_00009a58
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00009ac8(void)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  if (DAT_ram_20003538 == '\0') {
    return;
  }
  if (cRam20000330 != -1) {
    if (cRam20000330 == '\0') {
      uRam20000ee8 = 1;
      uVar1 = 0;
    }
    else if (cRam20000330 == '\x01') {
      uVar1 = 1;
      cRam20000ee9 = cRam20000330;
    }
    else if (cRam20000330 == '\x03') {
      uRam20000eea = 1;
      uVar1 = 3;
    }
    else {
      if (cRam20000330 != '\x04') {
        cRam20000330 = 0xff;
        return;
      }
      uRam20000eeb = 1;
      uVar1 = 4;
    }
    FUN_ram_00009a58(uVar1);
    cRam20000330 = 0xff;
    return;
  }
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:00009b2a FUN_ram_00009b2a
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:000086d4 FUN_ram_000086d4
// CALLS ram:000098ec FUN_ram_000098ec
// CALLS ram:0000bebc FUN_ram_0000bebc
// CALLS ram:0000b810 FUN_ram_0000b810
// CALLS ram:00009a58 FUN_ram_00009a58
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_00009b2a(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_20003538 != '\0') goto LAB_ram_00009ba2;
  if (DAT_ram_200034f3 == '\0') {
    if (((cRam20000150 != '\0') && (DAT_ram_2000032e < 6)) && (DAT_ram_2000032e != 1)) {
      FUN_ram_000098ec(0,1);
    }
    cRam20000150 = '\0';
    uRam20000146 = 0;
LAB_ram_00009b9c:
    if (DAT_ram_20003538 != '\0') goto LAB_ram_00009ba2;
  }
  else {
    cRam20000150 = '\x01';
    if (((uRam20000146 < 3000) && (uRam20000146 = uRam20000146 + 1, uRam20000146 == 3000)) &&
       ((DAT_ram_2000032e < 6 && (DAT_ram_200000ba != '\x01')))) {
      uRam20000322 = 1;
      FUN_ram_000098ec(1,1);
      goto LAB_ram_00009b9c;
    }
  }
  if (DAT_ram_200034f4 == '\0') {
    if (((cRam20000151 != '\0') && (DAT_ram_2000032e < 6)) && (DAT_ram_2000032e != 2)) {
      FUN_ram_000098ec(0,2);
    }
    cRam20000151 = '\0';
    uRam20000148 = 0;
LAB_ram_00009c18:
    if (DAT_ram_20003538 != '\0') goto LAB_ram_00009ba2;
  }
  else {
    cRam20000151 = '\x01';
    if (((uRam20000148 < 3000) && (uRam20000148 = uRam20000148 + 1, uRam20000148 == 3000)) &&
       ((DAT_ram_2000032e < 6 && (DAT_ram_200000ba != '\x01')))) {
      uRam20000322 = 1;
      FUN_ram_000098ec(1,2);
      goto LAB_ram_00009c18;
    }
  }
  if (DAT_ram_200034f5 == '\0') {
    if (((cRam20000152 != '\0') && (DAT_ram_2000032e < 6)) && (DAT_ram_2000032e != 3)) {
      FUN_ram_000098ec(0,3);
    }
    cRam20000152 = '\0';
    uRam2000014a = 0;
LAB_ram_00009c96:
    if (DAT_ram_20003538 != '\0') goto LAB_ram_00009ba2;
  }
  else {
    cRam20000152 = '\x01';
    if (((uRam2000014a < 3000) && (uRam2000014a = uRam2000014a + 1, uRam2000014a == 3000)) &&
       ((DAT_ram_2000032e < 6 && (DAT_ram_200000ba != '\x01')))) {
      uRam20000322 = 1;
      FUN_ram_000098ec(1,3);
      goto LAB_ram_00009c96;
    }
  }
  if (DAT_ram_200034f6 == '\0') {
    if (cRam2000014f != '\0') {
      if ((DAT_ram_2000032e != 10) && (DAT_ram_2000032e != 0)) {
        FUN_ram_000098ec(0,0);
      }
      if (DAT_ram_200000b8 != '\0') {
        DAT_ram_200000ba = '\0';
        DAT_ram_20000113 = 1;
        DAT_ram_200000b8 = '\0';
      }
    }
    cRam2000014f = '\0';
    uRam20000144 = 0;
LAB_ram_00009d20:
    if (DAT_ram_20003538 != '\0') goto LAB_ram_00009ba2;
  }
  else {
    cRam2000014f = '\x01';
    if (uRam20000144 < 3000) {
      uRam20000144 = uRam20000144 + 1;
      if ((uRam20000144 == 3000) && (DAT_ram_2000032e == 0)) {
        uRam20000322 = 1;
        FUN_ram_000098ec(1);
        if (DAT_ram_200000b8 != '\0') {
          DAT_ram_200000b8 = '\0';
        }
        goto LAB_ram_00009d20;
      }
    }
  }
  if ((byte)(DAT_ram_2000032e - 1) < 5) {
    if (DAT_ram_200034f9 == '\0') {
      uRam2000014c = 0;
    }
    else if (uRam2000014c < 3000) {
      uRam2000014c = uRam2000014c + 1;
      if (uRam2000014c == 3000) {
        uRam20000ee6 = 1;
        FUN_ram_00009a58(2);
        FUN_ram_000086d4();
        FUN_ram_0000c2b4(0x3f38,10,&UNK_ram_0000de68);
        FUN_ram_0000bebc();
      }
    }
  }
LAB_ram_00009ba2:
  FUN_ram_0000b810();
  return;
}



// FUNCTION ram:00009dbe FUN_ram_00009dbe
// THUNK false
// CALLS ram:000098a0 FUN_ram_000098a0
// CALLS ram:000098ec FUN_ram_000098ec
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00009dbe(void)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  if (DAT_ram_20003538 != '\0') {
    return;
  }
  uVar3 = _DAT_ram_40011008 >> 0xe & 1;
  if (uVar3 == bRam20000143) {
    bVar2 = cRam2000013d + 1;
    cRam2000013d = cRam2000013d + '\x01';
    if (0x96 < bVar2) {
      cRam2000013d = '\0';
      bRam20000141 = (byte)uVar3;
      cRam2000014e = '\x01';
      if (bRam20000142 != uVar3) {
        bRam20000142 = bRam20000141;
        FUN_ram_0000bd0e();
      }
    }
  }
  else {
    cRam2000013d = '\0';
    cRam2000014e = '\0';
    bRam20000143 = (byte)(_DAT_ram_40011008 >> 0xe) & 1;
  }
  uVar3 = uRam40010808 >> 0xf & 1;
  if (uVar3 != bRam20000140) {
    cRam20000036 = 0;
    cRam2000013c = 0;
    bRam20000140 = (byte)(uRam40010808 >> 0xf) & 1;
    return;
  }
  bVar2 = cRam2000013c + 1;
  cRam2000013c = cRam2000013c + '\x01';
  if (bVar2 < 0x97) {
LAB_ram_00009e80:
    if (cRam20000036 == '\0') {
      return;
    }
  }
  else {
    cRam2000013c = '\0';
    cRam20000036 = '\x01';
    bRam2000013e = (byte)uVar3;
    if (bRam2000013f != uVar3) {
      bRam2000013f = bRam2000013e;
      FUN_ram_0000bd0e();
      goto LAB_ram_00009e80;
    }
  }
  if (cRam2000014e == '\0') {
    return;
  }
  if (bRam20000141 == 0) {
    if (bRam2000013e == 0) {
      return;
    }
    bVar2 = 0x10;
    if (DAT_ram_2000032f == 0x10) {
      return;
    }
LAB_ram_00009eba:
    DAT_ram_2000032e = bVar2;
    DAT_ram_2000032f = DAT_ram_2000032e;
    FUN_ram_000098a0();
  }
  else {
    if (bRam2000013e == 0) {
      if (cRam2000038f == '\x01') {
        uVar1 = uRam20000331;
        if (((DAT_ram_2000032f & 0xef) != 0) && (DAT_ram_2000032f != 10)) {
          return;
        }
      }
      else {
        if (cRam2000038f != '\0') {
          return;
        }
        if (DAT_ram_2000032f == 0) {
          return;
        }
        uVar1 = 0;
      }
    }
    else {
      if (DAT_ram_2000032f == 10) {
        return;
      }
      bVar2 = 10;
      if (cRam20000119 != '\0') goto LAB_ram_00009eba;
      uVar1 = 10;
    }
    FUN_ram_000098ec(0,uVar1);
  }
  return;
}



// FUNCTION ram:00009f06 FUN_ram_00009f06
// THUNK false
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:0000cd86 FUN_ram_0000cd86
// CALLS ram:00009dbe FUN_ram_00009dbe
// CALLS ram:0000cd88 FUN_ram_0000cd88
// CALLS ram:00007e7a FUN_ram_00007e7a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_00009f06(void)

{
  char cVar1;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  cVar1 = -0x1a;
  do {
    FUN_ram_00009dbe();
    FUN_ram_0000cd86();
    FUN_ram_0000cd88();
    FUN_ram_00007e7a();
    cVar1 = cVar1 + -1;
    FUN_ram_0000be1e(1,1);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION ram:00009f36 FUN_ram_00009f36
// THUNK false

uint FUN_ram_00009f36(int param_1)

{
  char cVar1;
  uint uVar2;
  short *psVar3;
  
  gp = &observed_global_pointer;
  psVar3 = &DAT_ram_0000de94;
  uVar2 = 0;
  cVar1 = '\0';
  do {
    cVar1 = cVar1 + '\x01';
    if (*psVar3 == 0) {
      *(char *)(param_1 + uVar2) = cVar1;
      uVar2 = uVar2 + 1 & 0xff;
      cVar1 = '\0';
    }
    psVar3 = psVar3 + 6;
  } while (psVar3 != (short *)&UNK_ram_0000df3c);
  return uVar2;
}



// FUNCTION ram:00009f66 FUN_ram_00009f66
// THUNK false

short FUN_ram_00009f66(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  if (param_1 != 0) {
    sVar1 = 0;
    for (uVar2 = 0; (uVar2 & 0xffff) < (param_1 - 1U & 0xff); uVar2 = uVar2 + 1) {
      sVar1 = sVar1 + (ushort)*(byte *)(param_2 + uVar2);
    }
    return sVar1;
  }
  return 0;
}



// FUNCTION ram:00009f94 FUN_ram_00009f94
// THUNK false
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000b63c FUN_ram_0000b63c
// CALLS ram:00001708 FUN_ram_00001708

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_00009f94(int param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  undefined1 uVar11;
  undefined2 *puVar12;
  byte bVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  
  gp = &observed_global_pointer;
  DAT_ram_20003501 = 1;
  DAT_ram_200034ec = 0;
  uRam200034ed = 0;
  FUN_ram_0000b63c();
  uRam200034ef = 1;
  puVar12 = &DAT_ram_0000de94 + param_1 * 6;
  bVar8 = false;
  bVar7 = false;
  uVar9 = 1;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  uVar14 = 0;
  cVar10 = '\0';
  uVar17 = DAT_ram_200000fa;
  bVar13 = DAT_ram_20003502;
  uVar18 = uRam200034ee;
  uVar16 = DAT_ram_20003509;
  uVar11 = DAT_ram_2000350a;
  uVar15 = DAT_ram_200000f8;
  do {
    switch(*(undefined1 *)(puVar12 + 1)) {
    case 0:
      goto switchD_ram_0000a012_caseD_0;
    case 1:
      bVar1 = *(byte *)((int)puVar12 + 3);
      goto LAB_ram_0000a018;
    case 2:
      (&DAT_ram_20003503)[uVar14] = *(undefined1 *)((int)puVar12 + 3);
      uVar14 = uVar14 + 1 & 0xff;
      goto switchD_ram_0000a012_caseD_0;
    case 3:
      uVar16 = *(undefined1 *)((int)puVar12 + 3);
      uVar11 = *(undefined1 *)(puVar12 + 2);
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      uVar17 = 1;
      break;
    case 6:
      if (*(char *)((int)puVar12 + 3) == '\x02') {
        bVar8 = true;
        uVar18 = 1;
        bVar7 = true;
        uVar9 = 0;
      }
      break;
    case 7:
      bVar1 = *(byte *)((int)puVar12 + 3);
      (&DAT_ram_20003503)[uVar14] = *(undefined1 *)(puVar12 + 2);
LAB_ram_0000a018:
      bVar13 = bVar13 | bVar1;
      bVar3 = true;
switchD_ram_0000a012_caseD_0:
      bVar2 = true;
      uVar15 = 1;
    }
    cVar10 = cVar10 + '\x01';
    puVar12 = (undefined2 *)((int)puVar12 + 3);
    if (cVar10 == '\x03') {
      if (bVar2) {
        DAT_ram_200000f8 = uVar15;
      }
      if (bVar3) {
        DAT_ram_20003502 = bVar13;
      }
      if (bVar4) {
        DAT_ram_200000fa = uVar17;
      }
      if (bVar5) {
        DAT_ram_20003509 = uVar16;
      }
      if (bVar6) {
        DAT_ram_2000350a = uVar11;
      }
      if (bVar7) {
        uRam200034ef = uVar9;
      }
      if (bVar8) {
        uRam200034ee = uVar18;
      }
      return;
    }
  } while( true );
}



// FUNCTION ram:0000a0a8 FUN_ram_0000a0a8
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000b63c FUN_ram_0000b63c
// CALLS ram:00009f66 FUN_ram_00009f66
// CALLS ram:00009f94 FUN_ram_00009f94
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_0000a0a8(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  if (DAT_ram_20000153 != '\0') {
    DAT_ram_200034f1 = 1;
    DAT_ram_200000eb = 0;
    if ((bRam20002fa8 & 1) == 0) {
      if ((DAT_ram_20000156 != '\0') && (DAT_ram_20000156 = '\0', cRam20002fbc != '\0')) {
        cRam20002fbc = cRam20002fbc + -1;
        DAT_ram_20000154 = (&DAT_ram_0000de94)[(uint)uRam20002fba * 6];
        FUN_ram_00009f94();
        if (DAT_ram_20000154 == 0) {
          DAT_ram_20000153 = '\0';
          uRam200000ed = 0;
          uRam200034ef = 0;
        }
        uRam20002fba = CONCAT11((char)(uRam20002fba + 1 >> 8),
                                (char)((uRam20002fba + 1) * 0x10000 >> 0x10));
        DAT_ram_200000eb = 1;
      }
    }
    else {
      bRam20002fa8 = bRam20002fa8 & 0xfe;
      DAT_ram_200000eb = 1;
    }
  }
  if ((bRam20002fa8 & 2) != 0) {
    bRam20002fa8 = bRam20002fa8 & 0xfd;
    FUN_ram_0000b63c();
    DAT_ram_200000f8 = 1;
    DAT_ram_200000fa = 1;
    DAT_ram_200000f9 = 1;
  }
  if ((cRam20002fbd != '\0') &&
     (bVar2 = cRam20002fbe + 1, cRam20002fbe = cRam20002fbe + '\x01', 10 < bVar2)) {
    uVar3 = (uint)bRam20002fbf;
    cRam20002fbe = '\0';
    cRam20002fbd = '\0';
    iVar1 = FUN_ram_00009f66(uVar3,0x20002faa);
    uRam20002fba._1_1_ = (undefined1)((uint)iVar1 >> 8);
    cRam20002fbc = *(char *)(uVar3 + 0x20002fa9);
    uRam20002fba._0_1_ = (undefined1)iVar1;
    DAT_ram_20000154 = (ushort)(&DAT_ram_0000de94)[iVar1 * 6] >> 1;
    FUN_ram_00009f94();
    cRam20002fbc = cRam20002fbc + -1;
    DAT_ram_20000153 = '\x01';
    iVar1 = CONCAT11(uRam20002fba._1_1_,(undefined1)uRam20002fba) + 1;
    uRam20002fba = CONCAT11((char)((uint)iVar1 >> 8),(char)((uint)(iVar1 * 0x10000) >> 0x10));
    bRam20002fa8 = bRam20002fa8 | 1;
    uRam200034ef = 1;
  }
  return;
}



// FUNCTION ram:0000a20e FUN_ram_0000a20e
// THUNK false
// CALLS ram:000082de FUN_ram_000082de
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000173c FUN_ram_0000173c
// CALLS ram:00006392 FUN_ram_00006392
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001700 */
/* WARNING: Inlined function: FUN_ram_0000173c */

int FUN_ram_0000a20e(uint param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  undefined *puVar9;
  uint uVar10;
  undefined1 auStack_60 [44];
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  uVar3 = 4;
  if (4 < param_5) {
    uVar3 = 2;
  }
  iVar1 = 1;
LAB_ram_0000a258:
  do {
    iVar7 = iVar1;
    uVar6 = param_2;
    if (uVar6 == 0) {
      return iVar7;
    }
    uVar4 = param_1 - param_3;
    if (param_4 != 0) {
      uVar4 = (int)uVar4 % (int)param_4;
    }
    uVar4 = uVar4 & 0xff;
    uVar5 = param_4 - uVar4 & 0xff;
    if (uVar6 < uVar5) {
      return iVar7;
    }
    uVar10 = param_1 - uVar4 & 0xffff;
    if (param_5 < 5) {
      if (uVar10 < 0x1800) {
LAB_ram_0000a2c8:
        cVar8 = 4 < param_5;
        if (param_4 <= uVar3) goto LAB_ram_0000a2ee;
      }
      goto LAB_ram_0000a29a;
    }
    if (param_5 == 5) {
      if ((uVar10 - 0x2130 & 0xffff) < 6) goto LAB_ram_0000a2c8;
      goto LAB_ram_0000a29a;
    }
    if (param_5 == 6) {
      if ((uVar10 - 0x2160 & 0xffff) < 0x340) {
        cVar8 = '\x02';
        goto LAB_ram_0000a2ee;
      }
      goto LAB_ram_0000a29a;
    }
    if (param_5 != 7) {
      if ((uVar10 - 0x1820 & 0xffff) < 0x500) {
        cVar8 = '\x05';
        goto LAB_ram_0000a2ee;
      }
      goto LAB_ram_0000a29a;
    }
    if (0x2f < (uVar10 - 0x24c0 & 0xffff)) goto LAB_ram_0000a29a;
    cVar8 = '\x03';
LAB_ram_0000a2ee:
    iVar1 = FUN_ram_0000c274(uVar10,param_4,auStack_60);
    param_2 = 0;
  } while (iVar1 == 0);
  iVar1 = FUN_ram_000082de(auStack_60,param_4);
  if (iVar1 != 0) {
    if (cVar8 == '\0') {
      if (PTR_DAT_ram_20004390_ram_20000044[8] == '\0') {
        if (param_5 != 1) goto LAB_ram_0000a29a;
        puVar2 = &DAT_ram_20003d90 + uVar10;
      }
      else {
        if ((PTR_DAT_ram_20004390_ram_20000044[8] != '\x01') || (param_5 != 2))
        goto LAB_ram_0000a29a;
        puVar2 = (undefined1 *)(uVar10 + 0x20003790);
      }
    }
    else {
      if (cVar8 == '\x01') {
        iVar1 = -0x2130;
        puVar2 = &DAT_ram_2000016c;
      }
      else {
        if (cVar8 != '\x02') {
          if (cVar8 == '\x03') {
            puVar2 = (undefined1 *)(uVar10 + 0x20001ed0);
          }
          else {
            if (cVar8 != '\x05') goto LAB_ram_0000a29a;
            FUN_ram_00006392(auStack_60,param_4);
            puVar2 = (undefined1 *)(uVar10 + 0x20002070);
          }
          goto LAB_ram_0000a328;
        }
        iVar1 = -0x2160;
        puVar2 = &DAT_ram_20003550;
      }
      puVar2 = puVar2 + iVar1 + uVar10;
    }
LAB_ram_0000a328:
    FUN_ram_0000be6a(puVar2,auStack_60,param_4);
    goto LAB_ram_0000a29a;
  }
  if (cVar8 == '\0') {
    if (PTR_DAT_ram_20004390_ram_20000044[8] == '\0') {
      if (param_5 != 1) goto LAB_ram_0000a29a;
      puVar9 = &UNK_ram_0000ebe0 + uVar10;
      puVar2 = &DAT_ram_20003d90 + uVar10;
      goto LAB_ram_0000a41c;
    }
    if ((PTR_DAT_ram_20004390_ram_20000044[8] != '\x01') || (param_5 != 2)) goto LAB_ram_0000a29a;
    FUN_ram_0000be6a(uVar10 + 0x20003790,&UNK_ram_0000e1cc + uVar10,param_4);
    iVar1 = FUN_ram_0000c2b4(uVar10,param_4,&UNK_ram_0000e1cc + uVar10);
  }
  else {
    if (cVar8 == '\x01') {
      iVar1 = uVar10 - 0x2130;
      puVar9 = (undefined *)(uVar10 + 0x1fffdf48);
      puVar2 = &DAT_ram_2000016c;
    }
    else {
      if (cVar8 != '\x02') {
        if (cVar8 == '\x03') {
          puVar9 = (undefined *)(uVar10 + 0xbddc);
          puVar2 = (undefined1 *)(uVar10 + 0x20001ed0);
          goto LAB_ram_0000a41c;
        }
        if (cVar8 != '\x05') goto LAB_ram_0000a29a;
        FUN_ram_0000be6a(uVar10 + 0x20002070,uVar10 + 0xcaac,param_4);
        iVar1 = FUN_ram_0000c2b4(uVar10,param_4,uVar10 + 0xcaac);
        goto joined_r0x0000a4f8;
      }
      iVar1 = uVar10 - 0x2160;
      puVar9 = (undefined *)(uVar10 + 0xbdfc);
      puVar2 = &DAT_ram_20003550;
    }
    puVar2 = puVar2 + iVar1;
LAB_ram_0000a41c:
    FUN_ram_0000be6a(puVar2,puVar9,param_4);
    iVar1 = FUN_ram_0000c2b4(uVar10,param_4,puVar9);
  }
joined_r0x0000a4f8:
  param_2 = 0;
  if (iVar1 == 0) goto LAB_ram_0000a258;
LAB_ram_0000a29a:
  param_1 = param_1 + uVar5 & 0xffff;
  param_2 = (uVar4 + uVar6) - param_4 & 0xff;
  iVar1 = iVar7;
  goto LAB_ram_0000a258;
}



// FUNCTION ram:0000a4fc FUN_ram_0000a4fc
// THUNK false
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000a4fc(void)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  
  gp = &observed_global_pointer;
  FUN_ram_0000be6a(0x20003890,&UNK_ram_0000e2cc,0x500);
  puVar3 = &UNK_ram_0000e2cc;
  sVar1 = 0x1820;
  do {
    sVar2 = sVar1 + 10;
    FUN_ram_0000c2b4(sVar1,10,puVar3);
    puVar3 = puVar3 + 10;
    sVar1 = sVar2;
  } while (sVar2 != 0x1d20);
  return;
}



// FUNCTION ram:0000a53e FUN_ram_0000a53e
// THUNK false
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:00009878 FUN_ram_00009878
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

undefined4 FUN_ram_0000a53e(void)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined2 uStack_34;
  
  gp = &observed_global_pointer;
  sVar1 = 0x3f30;
  uStack_34 = 0;
  pcVar4 = &DAT_ram_2000353c;
  pcVar2 = "\nK\x01T\x01T\x01T\x01T\x01T\x01T\x01T\x01T\x01T\x02)";
  uVar5 = 1;
  do {
    FUN_ram_0000c274(sVar1,2,&uStack_34);
    if (uStack_34._1_1_ == (char)('U' - (char)uStack_34)) {
      *pcVar4 = (char)uStack_34;
      pcVar4[1] = uStack_34._1_1_;
    }
    else {
      iVar3 = FUN_ram_0000c2b4(sVar1,2,pcVar2);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      *pcVar4 = *pcVar2;
      pcVar4[1] = pcVar2[1];
    }
    sVar1 = sVar1 + 2;
    pcVar4 = pcVar4 + 2;
    pcVar2 = pcVar2 + 2;
  } while (sVar1 != 0x3f44);
  DAT_ram_2000032e = DAT_ram_2000353c;
  DAT_ram_2000032f = DAT_ram_2000353c;
  uRam20000331 = uRam2000353e;
  uRam2000038f = uRam20003540;
  FUN_ram_00009878();
  return uVar5;
}



// FUNCTION ram:0000a5dc FUN_ram_0000a5dc
// THUNK false
// CALLS ram:000082de FUN_ram_000082de
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

undefined4 FUN_ram_0000a5dc(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  gp = &observed_global_pointer;
  uStack_24 = 0;
  uStack_28 = 0;
  if (PTR_DAT_ram_20004390_ram_20000044[8] == '\0') {
    uVar1 = 0;
    uVar2 = 1;
    do {
      FUN_ram_0000c274(uVar1 & 0xffff,4,&uStack_28);
      iVar4 = FUN_ram_000082de(&uStack_28,4);
      puVar6 = &DAT_ram_20003d90 + uVar1;
      if (iVar4 == 0) {
        FUN_ram_0000be6a(puVar6,&UNK_ram_0000ebe0 + uVar1,4);
        iVar4 = FUN_ram_0000c2b4(uVar1 & 0xffff,4,puVar6);
        if (iVar4 == 0) {
          uVar2 = 0;
        }
      }
      else {
        FUN_ram_0000be6a(puVar6,&uStack_28,4);
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 != 0x600);
  }
  else {
    uVar3 = 1;
    uVar2 = 1;
    if (PTR_DAT_ram_20004390_ram_20000044[8] == '\x01') {
      iVar4 = 0;
      do {
        uVar1 = iVar4 + 0x600U & 0xffff;
        FUN_ram_0000c274(uVar1,4,&uStack_28);
        iVar5 = FUN_ram_000082de(&uStack_28,4);
        puVar6 = &DAT_ram_20003d90 + iVar4;
        if (iVar5 == 0) {
          FUN_ram_0000be6a(puVar6,&UNK_ram_0000e7cc + iVar4,4);
          iVar5 = FUN_ram_0000c2b4(uVar1,4,puVar6);
          if (iVar5 == 0) {
            uVar3 = 0;
          }
        }
        else {
          FUN_ram_0000be6a(puVar6,&uStack_28,4);
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
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000a5dc FUN_ram_0000a5dc
// CALLS ram:00001708 FUN_ram_00001708

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

void FUN_ram_0000a6c0(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  gp = &observed_global_pointer;
  if (PTR_DAT_ram_20004390_ram_20000044[8] != cRam20000158) {
    FUN_ram_0000a5dc();
    cRam20000158 = PTR_DAT_ram_20004390_ram_20000044[8];
  }
  if (PTR_DAT_ram_2000016c_ram_20000040[2] == '\x01') {
    if (DAT_ram_20001ad1 == '\0') {
      DAT_ram_20001ad0 = 1;
    }
    DAT_ram_20001ad1 = 1;
  }
  else {
    DAT_ram_20001ad1 = 0;
  }
  if (DAT_ram_20000192 != (byte)PTR_DAT_ram_2000016c_ram_20000040[4]) {
    DAT_ram_2000018a = 0;
    DAT_ram_20000190 = 0;
    DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
  }
  pcVar12 = &DAT_ram_200023ae;
  pcVar10 = &DAT_ram_20003550;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  uVar15 = DAT_ram_200000ca;
  uVar14 = DAT_ram_20001ad0;
  uVar8 = DAT_ram_200000cc;
  uVar7 = DAT_ram_200000c9;
  do {
    cVar9 = '\0';
    pcVar11 = pcVar12;
    pcVar13 = pcVar10;
    do {
      if (cVar9 == '\0') {
        if (*pcVar12 != *pcVar10) {
          *pcVar12 = *pcVar10;
          bVar4 = true;
          uVar14 = 1;
          bVar3 = true;
          uVar15 = 1;
        }
        if (pcVar12[1] != pcVar10[1]) {
          pcVar12[1] = pcVar10[1];
          bVar5 = true;
          uVar8 = 1;
        }
        if (pcVar12[2] != pcVar10[2]) {
          pcVar12[2] = pcVar10[2];
          bVar6 = true;
          uVar7 = 1;
        }
      }
      else {
        cVar1 = pcVar13[1];
        cVar2 = pcVar13[2];
        if (((*pcVar11 != *pcVar13) || (pcVar11[1] != cVar1)) || (pcVar11[2] != cVar2)) {
          *pcVar11 = *pcVar13;
          pcVar11[1] = cVar1;
          pcVar11[2] = cVar2;
          bVar3 = true;
          uVar15 = 1;
        }
      }
      cVar9 = cVar9 + '\x01';
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    } while (cVar9 != '\b');
    pcVar12 = pcVar12 + 0x20;
    pcVar10 = pcVar10 + 0x20;
  } while (pcVar12 != &DAT_ram_2000262e);
  if (bVar3) {
    DAT_ram_200000ca = uVar15;
  }
  if (bVar4) {
    DAT_ram_20001ad0 = uVar14;
  }
  if (bVar5) {
    DAT_ram_200000cc = uVar8;
  }
  if (bVar6) {
    DAT_ram_200000c9 = uVar7;
  }
  return;
}



// FUNCTION ram:0000a7fa FUN_ram_0000a7fa
// THUNK false
// CALLS ram:0000a6c0 FUN_ram_0000a6c0
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000a7fa(uint param_1)

{
  gp = &observed_global_pointer;
  DAT_ram_20000048 = (byte)param_1;
  if ((DAT_ram_20000049 != param_1) && (DAT_ram_20000049 = DAT_ram_20000048, param_1 == 0)) {
    FUN_ram_0000a6c0();
    return;
  }
  return;
}



// FUNCTION ram:0000a81a FUN_ram_0000a81a
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000a20e FUN_ram_0000a20e
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000c218 FUN_ram_0000c218
// CALLS ram:0000a7fa FUN_ram_0000a7fa
// CALLS ram:0000a6c0 FUN_ram_0000a6c0
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

int FUN_ram_0000a81a(uint param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort *puVar7;
  char cStack_22;
  byte bStack_21;
  
  gp = &observed_global_pointer;
  if (DAT_ram_20000048 == '\0') {
    return 0;
  }
  if (param_1 < 0x600) {
    uVar5 = 1;
    uVar4 = 4;
    uVar3 = 0;
  }
  else if ((param_1 - 0x600 & 0xffff) < 0x600) {
    uVar5 = 2;
    uVar4 = 4;
    uVar3 = 0x600;
  }
  else if ((param_1 - 0xc00 & 0xffff) < 0x600) {
    uVar5 = 4;
    uVar4 = 4;
    uVar3 = 0xc00;
  }
  else if ((param_1 - 0x1200 & 0xffff) < 0x600) {
    uVar5 = 3;
    uVar4 = 4;
    uVar3 = 0x1200;
  }
  else if ((param_1 - 0x1820 & 0xffff) < 0x500) {
    uVar5 = 8;
    uVar4 = 10;
    uVar3 = 0x1820;
  }
  else if ((param_1 - 0x2130 & 0xffff) < 6) {
    uVar5 = 5;
    uVar4 = 2;
    uVar3 = 0x2130;
  }
  else if ((param_1 - 0x2160 & 0xffff) < 0x340) {
    uVar5 = 6;
    uVar4 = 4;
    uVar3 = 0x2160;
  }
  else {
    if (0x2f < (param_1 - 0x24c0 & 0xffff)) {
      iVar2 = 1;
      if ((param_1 - 0x2750 & 0xffff) < 0x1681) {
        cStack_22 = '\x01';
        bStack_21 = 0;
        if ((param_2 - 1 & 0xffff) < 0x160) {
          puVar7 = (ushort *)&UNK_ram_0000df3c;
          iVar2 = 0;
          do {
            uVar6 = (uint)*puVar7;
            if ((((int)(uVar6 - 0x1f) <= (int)param_1) && (param_1 < uVar6)) &&
               ((int)uVar6 < (int)(param_2 + param_1))) {
              param_2 = (param_2 + param_1) - uVar6 & 0xffff;
              param_1 = uVar6;
            }
            FUN_ram_0000afb6();
            if ((uVar6 <= param_1) && ((int)param_1 <= (int)(uVar6 + 0x15f))) {
              puVar1 = (undefined1 *)(iVar2 + 0x200043c0);
              *puVar1 = 0;
              iVar2 = FUN_ram_0000c274(uVar6,1,&bStack_21);
              if (iVar2 == 0) {
LAB_ram_0000a9e0:
                *puVar1 = 0;
                goto LAB_ram_0000a9e4;
              }
              if ((bStack_21 - 2 & 0xff) < 0x45) {
                iVar2 = (uint)bStack_21 * 5 + 2;
                if ((int)(param_2 + (param_1 - uVar6)) < iVar2) break;
                iVar2 = FUN_ram_0000c218(uVar6,iVar2,&cStack_22);
                if (iVar2 == 0) goto LAB_ram_0000a9e0;
                if (cStack_22 != '\0') {
                  *puVar1 = 1;
                  break;
                }
              }
              *puVar1 = 0;
              break;
            }
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar2 != 0xf);
        }
        iVar2 = 1;
      }
      goto LAB_ram_0000a846;
    }
    uVar5 = 7;
    uVar4 = 2;
    uVar3 = 0x24c0;
  }
  iVar2 = FUN_ram_0000a20e(param_1,param_2 & 0xff,uVar3,uVar4,uVar5);
  if (iVar2 == 0) {
LAB_ram_0000a9e4:
    FUN_ram_0000a7fa(0);
    return 0;
  }
LAB_ram_0000a846:
  FUN_ram_0000a6c0();
  return iVar2;
}



// FUNCTION ram:0000a9f8 FUN_ram_0000a9f8
// THUNK false
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

bool FUN_ram_0000a9f8(void)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  iVar1 = FUN_ram_0000c2b4();
  return iVar1 != 0;
}



// FUNCTION ram:0000aa08 FUN_ram_0000aa08
// THUNK false
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001760 FUN_ram_00001760
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000a7fa FUN_ram_0000a7fa
// CALLS ram:0000a6c0 FUN_ram_0000a6c0
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:0000a4fc FUN_ram_0000a4fc
// CALLS ram:0000173c FUN_ram_0000173c

/* WARNING: Inlined function: FUN_ram_00001700 */
/* WARNING: Inlined function: FUN_ram_0000173c */

char FUN_ram_0000aa08(void)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_138 [260];
  
  gp = &observed_global_pointer;
  FUN_ram_00001760(auStack_138,0,0xf8);
  FUN_ram_0000be50(auStack_138,0xf8);
  FUN_ram_0000c2b4(0x2520,0xf8,auStack_138);
  FUN_ram_0000be6a(&DAT_ram_2000016c,0x20000078,6);
  FUN_ram_0000be6a(&DAT_ram_20003550,&UNK_ram_0000df5c,0x340);
  FUN_ram_0000be6a(&DAT_ram_20004390,&UNK_ram_0000e29c,0x30);
  FUN_ram_0000be50(0x200043c0,0xf);
  FUN_ram_0000afb6();
  cVar3 = '\0';
  if (DAT_ram_20000048 != '\0') {
    puVar5 = &UNK_ram_0000ebe0;
    sVar1 = 0;
    cVar3 = '\x01';
    do {
      iVar4 = FUN_ram_0000c2b4(sVar1,4,puVar5);
      if (iVar4 == 0) {
        cVar3 = '\0';
      }
      sVar1 = sVar1 + 4;
      puVar5 = puVar5 + 4;
    } while (sVar1 != 0x600);
    if (cVar3 != '\0') {
      puVar5 = &UNK_ram_0000e7cc;
      sVar1 = 0x600;
      do {
        iVar4 = FUN_ram_0000c2b4(sVar1,4,puVar5);
        if (iVar4 == 0) {
          cVar3 = '\0';
        }
        sVar1 = sVar1 + 4;
        puVar5 = puVar5 + 4;
      } while (sVar1 != 0xc00);
      if ((cVar3 != '\0') && (iVar4 = FUN_ram_0000c2b4(0x2130,6,0x20000078), iVar4 != 0)) {
        puVar5 = &DAT_ram_200023ae;
        uVar2 = 0x2160;
        do {
          iVar4 = 0;
          do {
            uVar6 = uVar2 + iVar4 & 0xffff;
            iVar7 = uVar6 + 0xbdfc;
            FUN_ram_0000be6a(puVar5 + iVar4,iVar7,4);
            iVar7 = FUN_ram_0000c2b4(uVar6,4,iVar7);
            if (iVar7 == 0) {
              cVar3 = '\0';
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0x20);
          uVar2 = uVar2 + 0x20 & 0xffff;
          puVar5 = puVar5 + 0x20;
        } while (uVar2 != 0x23e0);
        if ((cVar3 != '\0') && (iVar4 = FUN_ram_0000c2b4(0x24c0,0x30,&UNK_ram_0000e29c), iVar4 != 0)
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
  PTR_DAT_ram_2000016c_ram_20000040 = &DAT_ram_2000016c;
  PTR_DAT_ram_20003550_ram_20000038 = &DAT_ram_20003550;
  PTR_DAT_ram_20004390_ram_20000044 = &DAT_ram_20004390;
  if (cRam20004398 == '\0') {
    puVar5 = &UNK_ram_0000ebe0;
  }
  else {
    if (cRam20004398 != '\x01') {
      gp = &observed_global_pointer;
      PTR_DAT_ram_20003550_ram_20000038 = &DAT_ram_20003550;
      PTR_DAT_ram_2000016c_ram_20000040 = &DAT_ram_2000016c;
      PTR_DAT_ram_20004390_ram_20000044 = &DAT_ram_20004390;
      return cVar3;
    }
    puVar5 = &UNK_ram_0000e7cc;
  }
  FUN_ram_0000be6a(&DAT_ram_20003d90,puVar5,0x600);
  return cVar3;
}



// FUNCTION ram:0000abc6 FUN_ram_0000abc6
// THUNK false
// CALLS ram:000082de FUN_ram_000082de
// CALLS ram:0000a5dc FUN_ram_0000a5dc
// CALLS ram:0000a81a FUN_ram_0000a81a
// CALLS ram:00001760 FUN_ram_00001760
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000aa08 FUN_ram_0000aa08
// CALLS ram:00001700 FUN_ram_00001700
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000a6c0 FUN_ram_0000a6c0
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:0000173c FUN_ram_0000173c

/* WARNING: Inlined function: FUN_ram_00001700 */
/* WARNING: Inlined function: FUN_ram_0000173c */

uint FUN_ram_0000abc6(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  gp = &observed_global_pointer;
  PTR_DAT_ram_2000016c_ram_20000040 = &DAT_ram_2000016c;
  PTR_DAT_ram_20003550_ram_20000038 = &DAT_ram_20003550;
  PTR_DAT_ram_20004390_ram_20000044 = &DAT_ram_20004390;
  FUN_ram_00001760(&uStack_60,0,0x20);
  puVar14 = &DAT_ram_2000016c;
  puVar15 = (undefined1 *)0x20000078;
  sVar8 = 0x2130;
  uVar11 = 1;
  puVar2 = &DAT_ram_20004390;
  do {
    FUN_ram_0000c274(sVar8,2,&uStack_60);
    iVar5 = FUN_ram_000082de(&uStack_60,2);
    if (iVar5 == 0) {
      iVar5 = FUN_ram_0000c2b4(sVar8,2,puVar15);
      if (iVar5 == 0) {
        uVar11 = 0;
      }
      *puVar14 = *puVar15;
      uVar1 = puVar15[1];
    }
    else {
      *puVar14 = (undefined1)uStack_60;
      uVar1 = uStack_60._1_1_;
    }
    sVar8 = sVar8 + 2;
    puVar14[1] = uVar1;
    puVar14 = puVar14 + 2;
    puVar15 = puVar15 + 2;
  } while (sVar8 != 0x2136);
  if (0x19 < DAT_ram_2000016c) {
    DAT_ram_20004390 = 1;
    FUN_ram_0000c2b4(0x2130,2,0x20000078);
  }
  if (1 < DAT_ram_2000016e) {
    bRam20004392 = 0;
    FUN_ram_0000c2b4(0x2132,2,0x2000007a);
  }
  iVar5 = 0;
  do {
    iVar13 = 0;
    FUN_ram_0000bd0e();
    uVar9 = iVar5 + 0x2160U & 0xffff;
    FUN_ram_0000c274(uVar9,0x20,&uStack_60);
    do {
      uVar10 = uVar9 + iVar13 & 0xffff;
      puVar12 = &DAT_ram_20003550 + iVar13 + iVar5;
      iVar6 = FUN_ram_000082de((int)&uStack_60 + iVar13,4);
      if (iVar6 == 0) {
        iVar6 = uVar10 + 0xbdfc;
        FUN_ram_0000be6a(puVar12,iVar6,4);
        iVar6 = FUN_ram_0000c2b4(uVar10,4,iVar6);
        if (iVar6 == 0) {
          uVar11 = 0;
        }
      }
      else {
        FUN_ram_0000be6a(puVar12,(int)&uStack_60 + iVar13,4);
      }
      FUN_ram_0000be6a(&DAT_ram_200023ae + iVar13 + iVar5,puVar12,4);
      iVar13 = iVar13 + 4;
    } while (iVar13 != 0x20);
    iVar5 = iVar5 + 0x20;
  } while (iVar5 != 0x280);
  uStack_60 = uStack_60 & 0xffff0000;
  puVar12 = &UNK_ram_0000e29c;
  uVar9 = 1;
  sVar8 = 0x24c0;
  do {
    FUN_ram_0000c274(sVar8,2,&uStack_60);
    if ((uStack_60 >> 8 & 0xff) == (0x55 - (uStack_60 & 0xff) & 0xff)) {
      *puVar2 = (undefined1)uStack_60;
    }
    else {
      iVar5 = FUN_ram_0000c2b4(sVar8,2,puVar12);
      if (iVar5 == 0) {
        uVar9 = 0;
      }
      *puVar2 = *puVar12;
    }
    sVar8 = sVar8 + 2;
    puVar2 = puVar2 + 2;
    puVar12 = puVar12 + 2;
  } while (sVar8 != 0x24f0);
  if (8 < DAT_ram_20004390) {
    DAT_ram_20004390 = 1;
    FUN_ram_0000c2b4(0x24c0,2,&UNK_ram_0000e29c);
  }
  if (1 < bRam20004392) {
    bRam20004392 = 0;
    FUN_ram_0000c2b4(0x24c2,2,&UNK_ram_0000e29e);
  }
  if (1 < bRam20004394) {
    bRam20004394 = 0;
    FUN_ram_0000c2b4(0x24c4,2,&UNK_ram_0000e2a0);
  }
  if (3 < bRam20004398) {
    bRam20004398 = 1;
    FUN_ram_0000c2b4(0x24c8,2,&UNK_ram_0000e2a4);
  }
  if (1 < DAT_ram_2000439a) {
    DAT_ram_2000439a = 0;
    FUN_ram_0000c2b4(0x24ca,2,&UNK_ram_0000e2a6);
  }
  if (1 < DAT_ram_2000439e) {
    DAT_ram_2000439e = 0;
    FUN_ram_0000c2b4(0x24ce,2,&UNK_ram_0000e2aa);
  }
  uVar7 = FUN_ram_0000a5dc();
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  iVar5 = 0;
  uVar10 = 1;
  do {
    uVar4 = iVar5 + 0x1820U & 0xffff;
    FUN_ram_0000c274(uVar4,10,&uStack_60);
    iVar13 = FUN_ram_000082de(&uStack_60,10);
    iVar6 = iVar5 + 0x20003890;
    if (iVar13 == 0) {
      FUN_ram_0000be6a(iVar6,&UNK_ram_0000e2cc + iVar5,10);
      iVar13 = FUN_ram_0000c2b4(uVar4,10,iVar6);
      if (iVar13 == 0) {
        uVar10 = 0;
      }
    }
    else {
      FUN_ram_0000be6a(iVar6,&uStack_60,10);
    }
    iVar5 = iVar5 + 10;
  } while (iVar5 != 0x500);
  uVar10 = uVar9 | uVar11 | uVar7 & 0xff | uVar10;
  if (uVar10 == 1) {
    puVar3 = (undefined2 *)&UNK_ram_0000df3c;
    do {
      uVar11 = FUN_ram_0000a81a(*puVar3,0x160);
      if (uVar11 == 0) break;
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined2 *)&UNK_ram_0000df5a);
    uVar10 = uVar11 & 0xff | 1;
  }
  else if (uVar10 == 0) {
    FUN_ram_0000aa08();
    gp = &observed_global_pointer;
    return 0;
  }
  FUN_ram_0000a6c0();
  return uVar10;
}



// FUNCTION ram:0000af56 FUN_ram_0000af56
// THUNK false

bool FUN_ram_0000af56(void)

{
  gp = &observed_global_pointer;
  return DAT_ram_2000016a != '\0' && DAT_ram_2000017a == -1;
}



// FUNCTION ram:0000af70 FUN_ram_0000af70
// THUNK false
// CALLS ram:0000b63c FUN_ram_0000b63c
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000af70(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_2000017c != '\0') {
    DAT_ram_2000017c = 0;
    FUN_ram_0000b63c();
    DAT_ram_20000102 = 0;
    DAT_ram_20000103 = 0;
    DAT_ram_20000104 = 0;
    DAT_ram_20000105 = 0;
    DAT_ram_20000106 = 0;
    uRam20000107 = 0;
    DAT_ram_200000f8 = 1;
    DAT_ram_20000100 = 1;
    DAT_ram_200000fa = 1;
    DAT_ram_200000fb = 1;
    return;
  }
  return;
}



// FUNCTION ram:0000afb6 FUN_ram_0000afb6
// THUNK false
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000afb6(void)

{
  gp = &observed_global_pointer;
  DAT_ram_2000016a = 0;
  DAT_ram_20000169 = 0;
  FUN_ram_0000be50(0x20000174,8);
  FUN_ram_0000be50(&DAT_ram_2000015c,5);
  return;
}



// FUNCTION ram:0000afda FUN_ram_0000afda
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_0000afda(uint param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  gp = &observed_global_pointer;
  if ((DAT_ram_2000016a == '\0') && (param_1 < 0xf)) {
    bRam20000178 = (byte)param_1;
    uRam20000179 = (undefined1)param_3;
    uRam2000017b = param_2;
    if (param_3 != 0) {
      uVar1 = *(undefined2 *)(&UNK_ram_0000df3c + param_1 * 2);
      uRam20000175 = (undefined1)uVar1;
      uRam20000176 = (undefined1)((ushort)uVar1 >> 8);
      lVar6 = FUN_ram_0000c274(uVar1,1,0x20000174);
      if ((int)lVar6 == 0) {
        *(undefined1 *)(bRam20000178 + 0x200043c0) = 0;
      }
      else if (cRam20000174 != '\0') {
        uVar3 = CONCAT11(uRam20000176,uRam20000175) + 1;
        uVar4 = uVar3 & 0xffff;
        uRam20000175 = (undefined1)(uVar3 * 0x10000 >> 0x10);
        uRam20000176 = (undefined1)(uVar4 >> 8);
        iVar5 = FUN_ram_0000c274(uVar4,5,0x20000164);
        if (iVar5 == 0) {
          *(undefined1 *)(bRam20000178 + 0x200043c0) = 0;
        }
        DAT_ram_2000015c = uRam20000164;
        DAT_ram_2000015d = uRam20000165;
        DAT_ram_2000015e = uRam20000166;
        DAT_ram_2000015f = uRam20000167._1_1_;
        bVar2 = (byte)uRam20000167;
        if (uRam20000167 < 8) {
          uRam20000167 = 8;
        }
        lVar6 = (ulonglong)DAT_ram_20000160 << 0x20;
        DAT_ram_20000160 = bVar2;
        if (iVar5 != 0) {
          iVar5 = CONCAT11(uRam20000176,uRam20000175) + 5;
          DAT_ram_20000169 = 0;
          DAT_ram_2000016a = 1;
          cRam20000174 = cRam20000174 + -1;
          uRam20000175 = (char)((uint)(iVar5 * 0x10000) >> 0x10);
          uRam20000176 = (char)((uint)iVar5 >> 8);
          DAT_ram_20000177 = 1;
          return;
        }
      }
      DAT_ram_2000016a = '\0';
      FUN_ram_0000afb6((int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
    }
  }
  return;
}



// FUNCTION ram:0000b10e FUN_ram_0000b10e
// THUNK false
// CALLS ram:0000afda FUN_ram_0000afda
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000b10e(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  cVar4 = cRam20000179;
  uVar1 = uRam20000178;
  gp = &observed_global_pointer;
  uVar3 = (uint)bRam2000017b;
  if (DAT_ram_2000017a == -2) {
    uVar6 = 0;
    uVar2 = 0;
    bVar8 = false;
    do {
      puVar5 = (uint *)&DAT_ram_200030d0;
      uVar7 = 0;
      do {
        if ((1 << (uVar6 & 0x1f) & *puVar5) != 0) {
          uVar2 = uVar7 * 0x10 + (uVar6 & 0xff) & 0xff;
          bVar8 = true;
        }
        uVar7 = uVar7 + 1 & 0xff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 8);
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x10);
    if ((uVar2 != uVar3) || (!bVar8)) {
LAB_ram_0000b1e6:
      FUN_ram_0000afb6();
      DAT_ram_2000017c = 1;
      return;
    }
    if (param_1 != 1) {
      return;
    }
    FUN_ram_0000afb6();
    DAT_ram_2000017a = -2;
    cVar4 = '\x01';
    uVar3 = uVar2;
  }
  else {
    if (DAT_ram_2000017a == -1) {
      if (cRam2000004a != '\0') {
        DAT_ram_2000017c = 1;
        FUN_ram_0000afb6();
        return;
      }
      if (param_1 != 1) {
        return;
      }
      FUN_ram_0000afb6();
      DAT_ram_2000017a = -1;
    }
    else {
      if (DAT_ram_2000017a != -3) {
        if (param_1 != 1) {
          return;
        }
        FUN_ram_0000afb6();
        cVar4 = cVar4 + -1;
        if (cVar4 == '\0') {
          return;
        }
        goto LAB_ram_0000b1ae;
      }
      if (cRam2000004b != '\0') {
        if (cRam2000004b != '\x01') {
          return;
        }
        goto LAB_ram_0000b1e6;
      }
      if (param_1 != 1) {
        return;
      }
      FUN_ram_0000afb6();
      DAT_ram_2000017a = -3;
    }
    cVar4 = '\x01';
  }
LAB_ram_0000b1ae:
  FUN_ram_0000afda(uVar1,uVar3,cVar4);
  return;
}



// FUNCTION ram:0000b212 FUN_ram_0000b212
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:0000c274 FUN_ram_0000c274
// CALLS ram:0000b10e FUN_ram_0000b10e
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000b212(void)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  if ((DAT_ram_2000016a != '\0') && (DAT_ram_20000169 != '\0')) {
    uVar1 = 1;
    if (cRam20000174 != '\0') {
      iVar2 = FUN_ram_0000c274(CONCAT11(uRam20000176,uRam20000175),5,0x20000164);
      if (iVar2 == 0) {
        *(undefined1 *)(bRam20000178 + 0x200043c0) = 0;
        DAT_ram_2000016a = '\0';
        FUN_ram_0000afb6();
      }
      else {
        iVar2 = CONCAT11(uRam20000176,uRam20000175) + 5;
        uRam20000176 = (undefined1)((uint)iVar2 >> 8);
        uRam20000175 = (undefined1)((uint)(iVar2 * 0x10000) >> 0x10);
        DAT_ram_2000015c = uRam20000164;
        DAT_ram_2000015d = uRam20000165;
        DAT_ram_2000015e = uRam20000166;
        _DAT_ram_2000015f = CONCAT11((char)uRam20000167,uRam20000167._1_1_);
        if (_DAT_ram_2000015f < 8) {
          _DAT_ram_2000015f = 8;
        }
        DAT_ram_20000177 = 1;
        DAT_ram_20000169 = '\0';
        cRam20000174 = cRam20000174 + -1;
      }
      uVar1 = 0;
    }
    FUN_ram_0000b10e(uVar1);
  }
  return;
}



// FUNCTION ram:0000b2f8 FUN_ram_0000b2f8
// THUNK false
// CALLS ram:0000afda FUN_ram_0000afda
// CALLS ram:0000afb6 FUN_ram_0000afb6
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

undefined4 FUN_ram_0000b2f8(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  if (param_3 == 0) {
    return 1;
  }
  if (DAT_ram_2000016a == '\0') {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x200043c0) != '\0') {
      uRam2000004a = 0;
      DAT_ram_2000017a = (char)param_2;
      if ((param_2 + 2U & 0xff) < 2) {
        param_2 = 1;
      }
      FUN_ram_0000afda(param_1,param_4,param_2);
      uVar1 = 1;
    }
  }
  else {
    FUN_ram_0000afb6();
    uRam2000004a = 1;
    uVar1 = 0;
  }
  if ((bRam2000017b == param_4) && (DAT_ram_2000017a == -3)) {
    if (cRam2000004b == '\0') {
      cRam2000004b = '\x01';
    }
    else if (cRam2000004b == '\x01') {
      cRam2000004b = '\0';
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION ram:0000b3ba FUN_ram_0000b3ba
// THUNK false

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_0000b3ba(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  
  gp = &observed_global_pointer;
  DAT_ram_200000f8 = 1;
  if (param_3 != 0) {
    uVar8 = (uint)DAT_ram_20003503;
    bVar6 = (byte)param_1;
    bVar3 = DAT_ram_20003505;
    bVar4 = DAT_ram_20003506;
    if (uVar8 == 0) {
      bVar2 = bVar6;
      bVar6 = DAT_ram_20003504;
      if (param_1 == 0) {
        DAT_ram_200000ef = 0;
        DAT_ram_200000f8 = 1;
        return;
      }
    }
    else {
      uVar7 = (uint)DAT_ram_20003504;
      if (uVar7 != 0) {
        uVar10 = (uint)DAT_ram_20003505;
        uVar5 = uVar7;
        bVar3 = bVar6;
        uVar1 = uVar8;
        if (uVar10 != 0) {
          if (DAT_ram_20003506 != 0) {
            if (DAT_ram_20003507 != '\0') {
              DAT_ram_200000f9 = 1;
              if (param_1 != 0) {
                (&DAT_ram_2000350c)[param_1 >> 3] =
                     (byte)(1 << (param_1 & 7)) | (&DAT_ram_2000350c)[param_1 >> 3];
                DAT_ram_200000ef = 1;
              }
              DAT_ram_20003501 = DAT_ram_20003501 + '\x01';
              return;
            }
            if (uVar8 == param_1) {
              DAT_ram_200000ef = 0;
              DAT_ram_200000f8 = 1;
              return;
            }
            if (uVar7 == param_1) {
              DAT_ram_200000ef = 0;
              DAT_ram_200000f8 = 1;
              return;
            }
            if (uVar10 == param_1) {
              DAT_ram_200000ef = 0;
              DAT_ram_200000f8 = 1;
              return;
            }
            if (DAT_ram_20003506 == param_1) {
              DAT_ram_200000ef = 0;
              DAT_ram_200000f8 = 1;
              return;
            }
            DAT_ram_200000ef = 0;
            DAT_ram_200000f8 = 1;
            DAT_ram_20003501 = DAT_ram_20003501 + '\x01';
            DAT_ram_20003507 = bVar6;
            return;
          }
          uVar5 = uVar10;
          bVar4 = bVar6;
          bVar3 = DAT_ram_20003505;
          uVar1 = uVar7;
          if (uVar8 == param_1) {
            DAT_ram_200000ef = 0;
            DAT_ram_200000f8 = 1;
            return;
          }
        }
        uVar8 = uVar5;
        bVar6 = DAT_ram_20003504;
        if (uVar1 == param_1) {
          DAT_ram_200000ef = 0;
          DAT_ram_200000f8 = 1;
          return;
        }
      }
      bVar2 = DAT_ram_20003503;
      if (uVar8 == param_1) {
        DAT_ram_200000ef = 0;
        DAT_ram_200000f8 = 1;
        return;
      }
    }
    DAT_ram_20003506 = bVar4;
    DAT_ram_20003505 = bVar3;
    DAT_ram_20003504 = bVar6;
    DAT_ram_20003503 = bVar2;
    DAT_ram_20003501 = DAT_ram_20003501 + '\x01';
    DAT_ram_200000f8 = 1;
    DAT_ram_200000ef = 0;
    return;
  }
  if (param_1 == 0) {
    DAT_ram_200000f8 = 1;
    return;
  }
  puVar9 = &DAT_ram_200034ec;
  uVar8 = 0;
  while ((byte)puVar9[0x17] != param_1) {
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 1;
    if (uVar8 == 5) goto LAB_ram_0000b4b4;
  }
  (&DAT_ram_20003503)[uVar8] = 0;
  puVar9 = &DAT_ram_200034ec + uVar8;
  for (; (uVar8 & 0xff) < 4; uVar8 = uVar8 + 1) {
    puVar9[0x17] = puVar9[0x18];
    puVar9 = puVar9 + 1;
  }
  (&DAT_ram_20003503)[uVar8] = 0;
  if (DAT_ram_20003501 != '\0') {
    DAT_ram_20003501 = DAT_ram_20003501 + -1;
  }
LAB_ram_0000b4b4:
  if (((int)(uint)(byte)(&DAT_ram_2000350c)[param_1 >> 3] >> (param_1 & 7) & 1U) != 0) {
    (&DAT_ram_2000350c)[param_1 >> 3] =
         ~(byte)(1 << (param_1 & 7)) & (&DAT_ram_2000350c)[param_1 >> 3];
    DAT_ram_200000f9 = 1;
  }
  if ((byte)(DAT_ram_20003501 - 1U) < 6) {
    DAT_ram_200000ef = 0;
    DAT_ram_20003501 = DAT_ram_20003501 + -1;
    return;
  }
  DAT_ram_200000ef = 1;
  DAT_ram_20003501 = DAT_ram_20003501 + -1;
  return;
}



// FUNCTION ram:0000b59c FUN_ram_0000b59c
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:00009f66 FUN_ram_00009f66
// CALLS ram:00009f94 FUN_ram_00009f94
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_0000b59c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  gp = &observed_global_pointer;
  if (param_3 != 0) {
    if (bRam200034fc < 2) {
      iVar1 = FUN_ram_00009f66(param_1,0x20002faa);
      uRam20002fbb = (undefined1)((uint)iVar1 >> 8);
      cRam20002fbc = *(char *)(param_1 + 0x20002fa9);
      uRam20002fba = (undefined1)iVar1;
      DAT_ram_20000154 = *(ushort *)(&UNK_ram_0000f0a8 + iVar1 * 0xc) >> 1;
      FUN_ram_00009f94();
      DAT_ram_20000153 = 1;
      uRam200034ef = 1;
      cRam20002fbc = cRam20002fbc + -1;
      iVar1 = CONCAT11(uRam20002fbb,uRam20002fba) + 1;
      uRam20002fbb = (undefined1)((uint)iVar1 >> 8);
      uRam20002fba = (undefined1)((uint)(iVar1 * 0x10000) >> 0x10);
      bRam20002fa8 = bRam20002fa8 | 1;
    }
    else {
      uRam20002fbd = 1;
      uRam20002fbf = (undefined1)param_1;
      bRam20002fa8 = bRam20002fa8 | 2;
    }
    return;
  }
  return;
}



// FUNCTION ram:0000b63c FUN_ram_0000b63c
// THUNK false
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000b63c(void)

{
  gp = &observed_global_pointer;
  DAT_ram_200000ef = 0;
  DAT_ram_20003501 = 0;
  DAT_ram_20003502 = 0;
  DAT_ram_20003503 = 0;
  DAT_ram_20003504 = 0;
  DAT_ram_20003505 = 0;
  DAT_ram_20003506 = 0;
  DAT_ram_20003507 = 0;
  uRam20003508 = 0;
  DAT_ram_20003509 = 0;
  DAT_ram_2000350a = 0;
  DAT_ram_2000350b = 0;
  DAT_ram_20003520 = 0;
  FUN_ram_0000be50(&DAT_ram_2000350c,0x14);
  return;
}



// FUNCTION ram:0000b6ac FUN_ram_0000b6ac
// THUNK false
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000b63c FUN_ram_0000b63c
// CALLS ram:0000b2f8 FUN_ram_0000b2f8
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000af56 FUN_ram_0000af56

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

undefined4 FUN_ram_0000b6ac(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  
  gp = &observed_global_pointer;
  if ((char)param_1 < '\0') {
    uVar4 = 0;
    goto LAB_ram_0000b76a;
  }
  pbVar7 = PTR_DAT_ram_20003d90_ram_2000003c + param_1 * 4;
  uVar6 = (uint)*pbVar7;
  bVar1 = pbVar7[1];
  bVar2 = pbVar7[2];
  pbVar8 = PTR_DAT_ram_20003d90_ram_2000003c + (param_1 + 0x80) * 4;
  uVar3 = (uint)*pbVar8;
  if (((char)*pbVar7 < '\0') || ((char)*pbVar8 < '\0')) {
    uVar6 = uVar6 & 0x7f;
    uVar3 = uVar3 & 0x7f;
    if (PTR_DAT_ram_20004390_ram_20000044[10] == '\0') goto LAB_ram_0000b724;
    if (DAT_ram_200034ec != '\0' || cRam200034ee != '\0') goto LAB_ram_0000b71e;
LAB_ram_0000b726:
    cRam200034f0 = '\x01';
  }
  else {
LAB_ram_0000b724:
    if (DAT_ram_200034ec != '\0' || cRam200034ee != '\0') goto LAB_ram_0000b726;
LAB_ram_0000b71e:
    cRam200034f0 = '\0';
  }
  bVar9 = pbVar8[1];
  bVar10 = pbVar8[2];
  if (cRam200034f0 == '\0') {
    uVar3 = uVar6;
    bVar9 = bVar1;
    bVar10 = bVar2;
  }
  if (uVar3 == 8) {
    FUN_ram_0000b63c();
    if (param_2 != 0) {
      DAT_ram_200000f8 = 1;
      DAT_ram_200000fa = 1;
      DAT_ram_200000fb = 1;
      DAT_ram_200000f9 = 1;
      FUN_ram_0000be50(&DAT_ram_20003070,0x1f);
    }
    uVar4 = FUN_ram_0000b2f8(bVar9,bVar10,param_2,param_1);
  }
  else {
    if ((cRam2000004a != '\0') || (iVar5 = FUN_ram_0000af56(), iVar5 == 0)) {
      if (((PTR_DAT_ram_20004390_ram_20000044[6] & 0x10) != 0) &&
         ((bVar2 == 0x65 || (bVar1 == 0x65)))) {
        uVar3 = 0;
      }
      if (((param_2 != 0) && (DAT_ram_20000153 != '\0')) && (uVar3 != 9)) {
        gp = &observed_global_pointer;
        DAT_ram_20000153 = 0;
        bRam20002fa8 = bRam20002fa8 | 2;
        return 0;
      }
      (*(code *)(&PTR_LAB_ram_0000b386_ram_0000f150)[uVar3])(bVar9,bVar10,param_2);
    }
    cRam2000004a = '\x01';
    uVar4 = 1;
  }
LAB_ram_0000b76a:
  if (param_2 == 0) {
    DAT_ram_200034f3 = 0;
    DAT_ram_200034f4 = 0;
    DAT_ram_200034f5 = 0;
    DAT_ram_200034f6 = 0;
    DAT_ram_200034f7 = 0;
    DAT_ram_200034f2 = 0;
    DAT_ram_200034f9 = 0;
    DAT_ram_200034f8 = 0;
    DAT_ram_200034fa = 0;
  }
  return uVar4;
}



// FUNCTION ram:0000b810 FUN_ram_0000b810
// THUNK false
// CALLS ram:0000329e FUN_ram_0000329e
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:000086d4 FUN_ram_000086d4
// CALLS ram:0000aa08 FUN_ram_0000aa08
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00009a58 FUN_ram_00009a58
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000c2b4 FUN_ram_0000c2b4

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_0000b810(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  gp = &observed_global_pointer;
  if (DAT_ram_200034f8 == '\0') {
    if (((DAT_ram_2000017e != '\0') && (DAT_ram_2000017e = '\0', DAT_ram_2000032e == '\0')) &&
       (DAT_ram_200000b8 != '\0')) {
      DAT_ram_200000ba = 0;
      DAT_ram_200000b8 = '\0';
      DAT_ram_20000113 = 1;
    }
    DAT_ram_20000180 = 0;
    return;
  }
  if (DAT_ram_2000017e == '\0') {
    DAT_ram_2000017e = '\x01';
  }
  if (DAT_ram_20000180 < 2000) {
    DAT_ram_20000180 = DAT_ram_20000180 + 1;
    if (DAT_ram_20000180 == 2000) {
      FUN_ram_0000aa08();
      FUN_ram_00009a58(2);
      FUN_ram_000086d4();
      uVar2 = uRam20003543;
      uVar1 = uRam20003542;
      FUN_ram_0000be6a(&DAT_ram_2000353c,&UNK_ram_0000f180,0x14);
      uRam20003542 = uVar1;
      uRam20003543 = uVar2;
      FUN_ram_0000c2b4(0x3f30,0x14,&DAT_ram_2000353c);
      FUN_ram_0000be50(0x20000314,10);
      uRam20000314 = 8;
      uRam20000157 = 1;
      FUN_ram_0000329e(10,0x20000314,10);
      uRam2000017d = 1;
      uRam20002c29 = 7;
      uRam20002c2a = 0x14;
      uRam20002c2b = 0x14;
      uRam20002c2c = 0x14;
      uRam20002c2d = 0x14;
      uRam20002c2e = 5;
      uRam200000c4 = 1;
      DAT_ram_200000cc = 1;
      DAT_ram_200000c9 = 1;
      DAT_ram_20001ad0 = 1;
      DAT_ram_20001ae3 = *PTR_DAT_ram_2000016c_ram_20000040;
      DAT_ram_20001adb = (&UNK_ram_0000da40)[(byte)*PTR_DAT_ram_2000016c_ram_20000040];
      DAT_ram_20000190 = 0;
      DAT_ram_20000192 = (ushort)(byte)PTR_DAT_ram_2000016c_ram_20000040[4];
      return;
    }
  }
  return;
}



// FUNCTION ram:0000b936 FUN_ram_0000b936
// THUNK false
// CALLS ram:0000a5dc FUN_ram_0000a5dc
// CALLS ram:0000a9f8 FUN_ram_0000a9f8
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000b936(int param_1)

{
  char cStack_14;
  char cStack_13;
  
  gp = &observed_global_pointer;
  cStack_14 = '\0';
  if (param_1 == 0x18) {
    if (PTR_DAT_ram_20004390_ram_20000044[8] == '\0') {
      gp = &observed_global_pointer;
      return;
    }
  }
  else {
    if (param_1 != 0x19) {
      gp = &observed_global_pointer;
      return;
    }
    if (PTR_DAT_ram_20004390_ram_20000044[8] == '\x01') {
      gp = &observed_global_pointer;
      return;
    }
    cStack_14 = '\x01';
    PTR_DAT_ram_20004390_ram_20000044[6] = PTR_DAT_ram_20004390_ram_20000044[6] & 0xe7;
  }
  uRam20000ee0 = 1;
  _cStack_14 = CONCAT11('U' - cStack_14,cStack_14);
  FUN_ram_0000a9f8(0x24c8,2,&cStack_14);
  PTR_DAT_ram_20004390_ram_20000044[8] = cStack_14;
  DAT_ram_20000088 = 1;
  FUN_ram_0000a5dc();
  return;
}



// FUNCTION ram:0000bbb8 FUN_ram_0000bbb8
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bbb8(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40021018 = _DAT_ram_40021018 | 0x200;
  _DAT_ram_40011000 = _DAT_ram_40011000 & 0xffff0fff;
  _DAT_ram_4002100c = _DAT_ram_4002100c & 0xfffffdff;
  _DAT_ram_40012450 = _DAT_ram_40012450 & 0xfffffe00 | 0x37;
  _DAT_ram_4001242c = _DAT_ram_4001242c & 0xff0fffff | 0xc00000;
  _DAT_ram_4001240c = _DAT_ram_4001240c & 0xfffff1ff | 0xe00;
  _DAT_ram_40012434 = _DAT_ram_40012434 & 0xffffffe0 | 0xd;
  _DAT_ram_40012404 = _DAT_ram_40012404 & 0xe0f0feff | 0x400;
  _DAT_ram_40012408 = _DAT_ram_40012408 & 0xfff1f7fd | 0xe0001;
  DAT_ram_20000182 = 1;
  return;
}



// FUNCTION ram:0000bc80 FUN_ram_0000bc80
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bc80(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_20000182 != '\0') {
    _DAT_ram_4002100c = _DAT_ram_4002100c & 0xfffffdff;
    _DAT_ram_40021018 = _DAT_ram_40021018 & 0xfffffdff;
    _DAT_ram_40012408 = _DAT_ram_40012408 & 0xfffffffe;
    _DAT_ram_40012404 = _DAT_ram_40012404 & 0xfffffbff;
    DAT_ram_20000182 = '\0';
    _DAT_ram_40011000 = _DAT_ram_40011000 & 0xffff0fff | 0x1000;
    _DAT_ram_40011014 = 8;
  }
  return;
}



// FUNCTION ram:0000bcde FUN_ram_0000bcde
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0000bcde(void)

{
  uint uVar1;
  
  gp = &observed_global_pointer;
  uVar1 = 0;
  if (DAT_ram_20000182 != '\0') {
    _DAT_ram_40012408 = _DAT_ram_40012408 | 0x500000;
    do {
    } while ((_DAT_ram_40012400 & 2) == 0);
    uVar1 = _DAT_ram_4001244c & 0xffff;
  }
  return uVar1;
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



// FUNCTION ram:0000bd32 FUN_ram_0000bd32
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bd32(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_20000183 != '\0') {
    DAT_ram_20000183 = '\0';
    _DAT_ram_40021010 = _DAT_ram_40021010 & 0xfffff7ff;
    _DAT_ram_4002101c = _DAT_ram_4002101c & 0xfffff7ff;
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



// FUNCTION ram:0000bd7a FUN_ram_0000bd7a
// THUNK false
// CALLS ram:0000bd62 FUN_ram_0000bd62
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bd7a(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40021010 = _DAT_ram_40021010 & 0xfffff7ff;
  FUN_ram_0000bd62(100);
  if (DAT_ram_20000183 == '\0') {
    DAT_ram_20000183 = '\x01';
    _DAT_ram_4002101c = _DAT_ram_4002101c | 0x800;
    _DAT_ram_40002c00 = 0xff;
    uRam40002c08 = 0;
    uRam40002c04 = uRam40002c04 & 0xffffff80 | 0x3cf;
  }
  DAT_ram_20000184 = (byte)uRam40002c04 & 0x7f;
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
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000be0a FUN_ram_0000be0a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

void FUN_ram_0000be1e(int param_1,int param_2)

{
  char cVar1;
  
  gp = &observed_global_pointer;
  while (param_1 = param_1 + -1, param_1 != -1) {
    cVar1 = '{';
    while (cVar1 = cVar1 + -1, cVar1 != '\0') {
      FUN_ram_0000be0a(1);
    }
    if (param_2 != 0) {
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
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



// FUNCTION ram:0000be88 FUN_ram_0000be88
// THUNK false
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000be88(void)

{
  gp = &observed_global_pointer;
  FUN_ram_0000be6a();
  return;
}



// FUNCTION ram:0000be94 FUN_ram_0000be94
// THUNK false

undefined4 FUN_ram_0000be94(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  uVar2 = 0;
  do {
    if (param_3 == (uVar2 & 0xffff)) {
      return 0;
    }
    pcVar1 = (char *)(param_1 + uVar2);
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_2 + uVar2 + -1) == *pcVar1);
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



// FUNCTION ram:0000bed6 FUN_ram_0000bed6
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bed6(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40011004 = _DAT_ram_40011004 & 0xfffffff | 0x10000000;
  return;
}



// FUNCTION ram:0000bef0 FUN_ram_0000bef0
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bef0(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40011004 = _DAT_ram_40011004 & 0xfffffff | 0x80000000;
  _DAT_ram_40011010 = 0x8000;
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
// CALLS ram:0000bece FUN_ram_0000bece
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000bf0c FUN_ram_0000bf0c

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bf24(void)

{
  gp = &observed_global_pointer;
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
  return;
}



// FUNCTION ram:0000bf5a FUN_ram_0000bf5a
// THUNK false
// CALLS ram:0000bece FUN_ram_0000bece
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:0000bf0c FUN_ram_0000bf0c

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000bf5a(void)

{
  gp = &observed_global_pointer;
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
// CALLS ram:0000bece FUN_ram_0000bece
// CALLS ram:0000bf9a FUN_ram_0000bf9a
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0000bfb6(char param_1)

{
  uint uVar1;
  char cVar2;
  
  gp = &observed_global_pointer;
  cVar2 = '\0';
  FUN_ram_0000bf0c();
  do {
    if (param_1 < '\0') {
      FUN_ram_0000bf9a();
    }
    else {
      FUN_ram_0000bf0c();
      _DAT_ram_40011014 = 0x80000;
    }
    _DAT_ram_40011010 = 0x8000;
    FUN_ram_0000bece();
    _DAT_ram_40011014 = 0x8000;
    param_1 = param_1 << 1;
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
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bfb6 FUN_ram_0000bfb6
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000bf5a FUN_ram_0000bf5a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

undefined4 FUN_ram_0000c036(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  gp = &observed_global_pointer;
  bVar1 = 0;
  do {
    bVar1 = bVar1 + 1;
    if (bVar1 == 0x65) goto LAB_ram_0000c07e;
    FUN_ram_0000bf5a();
    iVar2 = FUN_ram_0000bfb6(0xa0);
  } while (((iVar2 == 0) || (iVar2 = FUN_ram_0000bfb6(param_1 >> 8), iVar2 == 0)) ||
          (iVar2 = FUN_ram_0000bfb6(param_1 & 0xff), iVar2 == 0));
  while (bVar1 = bVar1 + 1, bVar1 < 100) {
    FUN_ram_0000bf5a();
    iVar2 = FUN_ram_0000bfb6(0xa1);
    if (iVar2 != 0) {
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
// CALLS ram:0000bece FUN_ram_0000bece
// CALLS ram:0000bf9a FUN_ram_0000bf9a
// CALLS ram:0000bf0c FUN_ram_0000bf0c
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0000c09a(int param_1)

{
  uint uVar1;
  char cVar2;
  
  gp = &observed_global_pointer;
  cVar2 = '\b';
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
    cVar2 = cVar2 + -1;
    _DAT_ram_40011014 = 0x8000;
    FUN_ram_0000bece();
  } while (cVar2 != '\0');
  FUN_ram_0000bf0c();
  if (param_1 == 0) {
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
// CALLS ram:00001740 FUN_ram_00001740
// CALLS ram:0000bfb6 FUN_ram_0000bfb6
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000c036 FUN_ram_0000c036
// CALLS ram:0000c09a FUN_ram_0000c09a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000bf5a FUN_ram_0000bf5a

/* WARNING: Inlined function: FUN_ram_00001708 */
/* WARNING: Inlined function: FUN_ram_00001740 */

int FUN_ram_0000c11a(uint param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  gp = &observed_global_pointer;
  cVar5 = '\v';
  do {
    if (param_2 == 0) {
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
    } while (((iVar4 == 0) || (iVar4 = FUN_ram_0000bfb6(param_1 >> 8), iVar4 == 0)) ||
            (iVar4 = FUN_ram_0000bfb6(param_1 & 0xff), iVar4 == 0));
    iVar4 = 0;
    puVar8 = param_3;
    do {
      if (puVar8 == param_3 + param_2) {
        if (iVar4 != 0) goto LAB_ram_0000c18e;
        break;
      }
      FUN_ram_0000bd0e();
      uVar1 = *puVar8;
      iVar4 = 1;
      puVar8 = puVar8 + 1;
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
  if ((iVar4 == 0) || (iVar6 = FUN_ram_0000c036(param_1), iVar6 == 0)) {
LAB_ram_0000c194:
    iVar4 = 0;
  }
  else {
    iVar6 = 0;
    do {
      FUN_ram_0000bd0e();
      bVar2 = param_3[iVar6];
      uVar7 = FUN_ram_0000c09a(param_2 + -1 <= iVar6);
      iVar6 = iVar6 + 1;
      if (bVar2 != uVar7) {
        iVar4 = 0;
        break;
      }
    } while (iVar6 != param_2);
    FUN_ram_0000bf24();
  }
  return iVar4;
}



// FUNCTION ram:0000c204 FUN_ram_0000c204
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000c204(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40011020 = 8;
  return;
}



// FUNCTION ram:0000c20e FUN_ram_0000c20e
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000c20e(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_40011010 = 0x8000;
  return;
}



// FUNCTION ram:0000c218 FUN_ram_0000c218
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000c036 FUN_ram_0000c036
// CALLS ram:0000c09a FUN_ram_0000c09a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

undefined4 FUN_ram_0000c218(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  gp = &observed_global_pointer;
  if (1 < param_2) {
    iVar4 = FUN_ram_0000c036();
    if (iVar4 == 0) {
      gp = &observed_global_pointer;
      return 0;
    }
    uVar2 = 0;
    cVar1 = '\0';
    do {
      FUN_ram_0000bd0e();
      cVar3 = FUN_ram_0000c09a((int)(param_2 - 1) <= (int)uVar2);
      uVar2 = uVar2 + 1;
      cVar1 = cVar1 + cVar3;
    } while ((uVar2 & 0xffff) < param_2);
    FUN_ram_0000bf24();
    if (cVar1 == 'U') {
      *param_3 = 1;
      return 1;
    }
  }
  *param_3 = 0;
  return 1;
}



// FUNCTION ram:0000c274 FUN_ram_0000c274
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bf24 FUN_ram_0000bf24
// CALLS ram:0000c036 FUN_ram_0000c036
// CALLS ram:0000c09a FUN_ram_0000c09a
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

undefined4 FUN_ram_0000c274(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &observed_global_pointer;
  if (param_2 != 0) {
    iVar2 = FUN_ram_0000c036();
    uVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        FUN_ram_0000bd0e();
        uVar1 = FUN_ram_0000c09a(param_2 + -1 <= iVar2);
        *(undefined1 *)(param_3 + iVar2) = uVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != param_2);
      FUN_ram_0000bf24();
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



// FUNCTION ram:0000c2b4 FUN_ram_0000c2b4
// THUNK false
// CALLS ram:00001716 FUN_ram_00001716
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:0000174a FUN_ram_0000174a
// CALLS ram:0000c11a FUN_ram_0000c11a

/* WARNING: Inlined function: FUN_ram_00001716 */
/* WARNING: Inlined function: FUN_ram_0000174a */

undefined4 FUN_ram_0000c2b4(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  uVar3 = 0;
  while( true ) {
    FUN_ram_0000bd0e();
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = 0x20 - (param_1 & 0x1f) & 0xff;
    if ((int)(param_2 - uVar3) < (int)uVar1) {
      uVar1 = param_2 - uVar3 & 0xff;
    }
    iVar2 = FUN_ram_0000c11a(param_1,uVar1,param_3 + uVar3);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_0000c11a(param_1,uVar1,param_3 + uVar3), iVar2 == 0))
    break;
    uVar3 = uVar3 + uVar1 & 0xff;
    param_1 = param_1 + uVar1 & 0xffff;
    if (param_2 <= uVar3) {
      return 1;
    }
  }
  gp = &observed_global_pointer;
  return 0;
}



// FUNCTION ram:0000c318 FUN_ram_0000c318
// THUNK false
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000c318(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &observed_global_pointer;
  FUN_ram_0000bd0e();
  puVar3 = (undefined4 *)0x800f700;
  puVar2 = (undefined4 *)0x200043f0;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar3 != (undefined4 *)0x800f800);
  return;
}



// FUNCTION ram:0000c34a FUN_ram_0000c34a
// THUNK false
// CALLS ram:0000d4c2 FUN_ram_0000d4c2
// CALLS ram:0000c318 FUN_ram_0000c318
// CALLS ram:0000d4ee FUN_ram_0000d4ee
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:0000d4e0 FUN_ram_0000d4e0
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000c34a(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &observed_global_pointer;
  FUN_ram_0000c318();
  FUN_ram_0000d4c2();
  FUN_ram_0000d4ee(0x800f700);
  FUN_ram_0000d4e0();
  FUN_ram_0000be6a(0x200043f0,0x200043d0,0x20);
  _DAT_ram_40022004 = 0xcdef89ab;
  _DAT_ram_40022024 = 0xcdef89ab;
  do {
  } while ((_DAT_ram_4002200c & 1) != 0);
  _DAT_ram_40022010 = _DAT_ram_40022010 & 0xfffeffff | 0x80000;
  puVar2 = (undefined4 *)0x800f700;
  puVar3 = (undefined4 *)0x200043f0;
  do {
    *puVar2 = *puVar3;
    do {
    } while ((_DAT_ram_4002200c & 1) != 0);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    uVar1 = _DAT_ram_40022010 & 0xfffeffff;
    _DAT_ram_40022010 = uVar1 | 0x40000;
  } while (puVar2 != (undefined4 *)0x800f800);
  _DAT_ram_40022014 = 0x800f700;
  do {
  } while ((_DAT_ram_4002200c & 1) != 0);
  _DAT_ram_40022010 = uVar1 | 0x48040;
  return;
}



// FUNCTION ram:0000c440 FUN_ram_0000c440
// THUNK false
// CALLS ram:000082b6 FUN_ram_000082b6
// CALLS ram:0000c34a FUN_ram_0000c34a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000c440(void)

{
  gp = &observed_global_pointer;
  uRam200043d0 = 0x78563412;
  uRam200043d4 = 0xbc9a;
  uRam200043d6 = 0xd1;
  uRam200043d7 = FUN_ram_000082b6(0x200043d0,7);
  FUN_ram_0000c34a();
  return;
}



// FUNCTION ram:0000c478 FUN_ram_0000c478
// THUNK false
// CALLS ram:0000c318 FUN_ram_0000c318
// CALLS ram:0000be6a FUN_ram_0000be6a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000c478(void)

{
  gp = &observed_global_pointer;
  FUN_ram_0000c318();
  FUN_ram_0000be6a(0x200043d0,0x200043f0,0x20);
  if (0x18e < (ushort)(sRam200043ee - 0xc3dU)) {
    sRam200043ee = 0xd04;
  }
  sRam20000034 = sRam200043ee;
  return;
}



// FUNCTION ram:0000c4c8 FUN_ram_0000c4c8
// THUNK false
// CALLS ram:0000be94 FUN_ram_0000be94
// CALLS ram:000039bc FUN_ram_000039bc
// CALLS ram:00003798 FUN_ram_00003798
// CALLS ram:00003964 FUN_ram_00003964
// CALLS ram:000038c0 FUN_ram_000038c0
// CALLS ram:00009878 FUN_ram_00009878
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730
// CALLS ram:00003a7e FUN_ram_00003a7e

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */

void FUN_ram_0000c4c8(void)

{
  int iVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  if (cRam20000323 == '\x10') {
    return;
  }
  if (DAT_ram_20003538 != '\0') {
    return;
  }
  switch(cRam20000323) {
  case '\0':
    cRam20000186 = '\0';
    cRam20000185 = '\0';
    cRam20000187 = '\0';
    sRam2000004c = 0x32;
    cRam2000032b = '\0';
    cRam20000329 = '\0';
    cRam2000032a = '\0';
    cRam20000323 = '\x03';
    break;
  case '\x01':
    if (cRam20000187 == '\0') {
      cRam20000187 = '\x01';
      sRam20000188 = 200;
      FUN_ram_000038c0(&DAT_ram_200003b8);
    }
    if (cRam2000032b == '\0') {
      sRam20000188 = sRam20000188 + -1;
      if (sRam20000188 == 0) {
        cRam20000187 = '\0';
        sRam2000004c = sRam2000004c + -1;
        if (sRam2000004c == 0) {
          sRam2000004c = 0x32;
          cRam20000323 = '\x10';
        }
      }
    }
    else {
      cRam2000032b = '\0';
      if (cRam20000332 == DAT_ram_2000032f) {
        if ((cRam2000033a != '\0') || (cRam20000332 != '\n')) {
          uRam20000116 = 1;
          cRam20000323 = 0x10;
          cRam2000032b = 0;
          DAT_ram_2000032e = cRam20000332;
          return;
        }
        cRam2000033a = '\x01';
      }
      cRam20000323 = '\x02';
    }
    break;
  case '\x02':
    if (DAT_ram_2000032f == '\n') {
      FUN_ram_00003a7e(&DAT_ram_200003b8);
    }
    else {
      FUN_ram_00009878();
      FUN_ram_00003798(&DAT_ram_200003b8,(&DAT_ram_2000353c)[(DAT_ram_2000032e + 3) * 2],
                       DAT_ram_2000032f);
    }
    cRam20000187 = '\0';
    cRam20000324 = '\x01';
    cRam20000323 = '\a';
    uRam20000325 = 0xe8;
    uRam20000327 = 0;
    uRam20000326 = 3;
    break;
  case '\x03':
    if (cRam20000186 == '\0') {
      cRam20000186 = '\x01';
      sRam20000188 = 200;
      FUN_ram_000039bc(&DAT_ram_200003b8,1);
    }
    if (cRam20000329 == '\0') {
      sRam20000188 = sRam20000188 + -1;
      if (sRam20000188 != 0) {
        return;
      }
      cRam20000186 = '\0';
      if ((short)(sRam2000004c + -1) != 0) {
        sRam2000004c = sRam2000004c + -1;
        cRam20000186 = 0;
        return;
      }
      sRam2000004c = 0x32;
      sRam20000188 = 0;
    }
    else {
      cRam20000329 = '\0';
      iVar1 = FUN_ram_0000be94(0x2000033c,0x20000374,cRam20000373);
      if ((iVar1 != 0) || (cRam2000033b != cRam20000373)) {
        cRam20000323 = 4;
        return;
      }
    }
    cRam20000323 = '\x05';
    break;
  case '\x04':
    FUN_ram_00003964(&DAT_ram_200003b8,0x20000374,cRam20000373,1);
    cRam20000186 = '\0';
    cRam20000324 = '\x03';
    goto LAB_ram_0000c5ba;
  case '\x05':
    if (cRam20000185 == '\0') {
      cRam20000185 = '\x01';
      sRam20000188 = 200;
      FUN_ram_000039bc(&DAT_ram_200003b8,0);
    }
    if (cRam2000032a == '\0') {
      sRam20000188 = sRam20000188 + -1;
      if (sRam20000188 != 0) {
        return;
      }
      cRam20000185 = '\0';
      if ((short)(sRam2000004c + -1) != 0) {
        sRam2000004c = sRam2000004c + -1;
        cRam20000185 = 0;
        return;
      }
      sRam2000004c = 0x32;
      sRam20000188 = 0;
    }
    else {
      cRam2000032a = '\0';
      iVar1 = FUN_ram_0000be94(0x2000033c,0x20000358,cRam20000357);
      if ((iVar1 != 0) || (cRam2000033b != cRam20000357)) {
        cRam20000323 = 6;
        return;
      }
    }
    cRam20000323 = '\x01';
    break;
  case '\x06':
    FUN_ram_00003964(&DAT_ram_200003b8,0x20000358,cRam20000357,0);
    cRam20000185 = '\0';
    cRam20000324 = '\x05';
LAB_ram_0000c5ba:
    cRam20000323 = '\a';
    uRam20000327 = 0;
    uRam20000325 = 0x32;
    uRam20000326 = 0;
    break;
  case '\a':
    uVar2 = uRam20000327 + 1 & 0xffff;
    uRam20000327 = CONCAT11((char)(uVar2 >> 8),(char)((uRam20000327 + 1) * 0x10000 >> 0x10));
    if (CONCAT11(uRam20000326,uRam20000325) < uVar2) {
      uRam20000327 = 0;
      cRam20000323 = cRam20000324;
    }
  }
  return;
}



// FUNCTION ram:0000c772 FUN_ram_0000c772
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000c772(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  gp = &observed_global_pointer;
  if ((_DAT_ram_40000410 & 1) != 0) {
    _DAT_ram_40000410 = 0xfffe;
    DAT_ram_20000198 = 1;
    if ((DAT_ram_2000018c != '\0') &&
       (DAT_ram_2000018c = DAT_ram_2000018c + -1, DAT_ram_2000018c == '\0')) {
      if (DAT_ram_2000018e == '\x01') {
        DAT_ram_2000018e = '\x02';
      }
      DAT_ram_2000018f = 1;
    }
    if (DAT_ram_2000008d != '\0') {
      DAT_ram_2000008d = DAT_ram_2000008d + -1;
    }
    if ((DAT_ram_200000f4 != '\0') &&
       (DAT_ram_2000010a = DAT_ram_2000010a + -1, DAT_ram_2000010a == 0)) {
      DAT_ram_200000f4 = '\0';
      DAT_ram_200000f5 = 1;
    }
    if ((DAT_ram_2000008a != '\0') &&
       (DAT_ram_20000020 = DAT_ram_20000020 + -1, DAT_ram_20000020 == 0)) {
      DAT_ram_2000008b = 1;
    }
    DAT_ram_2000011c = DAT_ram_2000011c + -1;
    if (((DAT_ram_2000011c == 0) && (DAT_ram_2000011c = 10000, DAT_ram_2000011e != '\0')) &&
       (cVar2 = DAT_ram_2000011e + -1, bVar1 = DAT_ram_2000011e == '\x01', DAT_ram_2000011e = cVar2,
       bVar1)) {
      DAT_ram_20000118 = 1;
    }
    DAT_ram_20000190 = DAT_ram_20000190 + 1;
    if (10000 < DAT_ram_20000190) {
      DAT_ram_20000190 = 0;
      DAT_ram_20000192 = DAT_ram_20000192 + -1;
      if (DAT_ram_20000192 == 0) {
        DAT_ram_2000018a = 1;
        DAT_ram_2000018b = 1;
      }
    }
    DAT_ram_20000194 = DAT_ram_20000194 + 1;
    if (DAT_ram_20000196 < DAT_ram_20000194) {
      DAT_ram_20000194 = 0;
      DAT_ram_2000018d = 1;
    }
    if (((DAT_ram_20000153 != '\0') && (DAT_ram_20000154 != 0)) &&
       (DAT_ram_20000154 = DAT_ram_20000154 + -1, DAT_ram_20000154 == 0)) {
      DAT_ram_20000156 = 1;
    }
    if (_DAT_ram_20000eb5 != 0) {
      _DAT_ram_20000eb5 =
           CONCAT11((char)(_DAT_ram_20000eb5 - 1 >> 8),
                    (char)((_DAT_ram_20000eb5 - 1) * 0x10000 >> 0x10));
      if (_DAT_ram_20000eb5 == 0) {
        DAT_ram_20000eb2 = 0;
        DAT_ram_20000eb3 = 0;
        if (DAT_ram_200003c1 != '\0') {
          DAT_ram_200003c1 = DAT_ram_200003c1 + -1;
          DAT_ram_20000eb4 = 1;
        }
        if (DAT_ram_20000ebb != '\0') {
          DAT_ram_20000ebb = '\0';
          DAT_ram_200000b5 = 0;
        }
      }
    }
    if (_DAT_ram_20000eb9 != 0) {
      _DAT_ram_20000eb9 =
           CONCAT11((char)(_DAT_ram_20000eb9 - 1 >> 8),
                    (char)((_DAT_ram_20000eb9 - 1) * 0x10000 >> 0x10));
      if (_DAT_ram_20000eb9 == 0) {
        DAT_ram_20000eb7 = 0;
        DAT_ram_20000eb8 = 0;
      }
    }
    if ((DAT_ram_2000016a != '\0') && (_DAT_ram_2000015f != 0)) {
      uVar3 = _DAT_ram_2000015f - 1 & 0xffff;
      _DAT_ram_2000015f =
           CONCAT11((char)(uVar3 >> 8),(char)((_DAT_ram_2000015f - 1) * 0x10000 >> 0x10));
      if (uVar3 == 0) {
        DAT_ram_20000169 = 1;
      }
    }
  }
  return;
}



// FUNCTION ram:0000ca04 FUN_ram_0000ca04
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000ca04(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_4002101c = _DAT_ram_4002101c | 2;
  DAT_ram_e000e053 = 0x36;
  _DAT_ram_e000e06c = 0xc773;
  _DAT_ram_4000042c = &pmpaddr55;
  _DAT_ram_40000428 = 0x2f;
  _DAT_ram_40000414 = 1;
  _DAT_ram_4000040c = _DAT_ram_4000040c | 1;
  DAT_ram_e000e436 = 0xb0;
  _DAT_ram_40000410 = 0xfffe;
  _DAT_ram_e000e104 = 0x400000;
  _DAT_ram_40000400 = _DAT_ram_40000400 & 0xfcff | 1;
  return;
}



// FUNCTION ram:0000ca88 FUN_ram_0000ca88
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000ca88(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_4002101c = _DAT_ram_4002101c & 0xfffffffd;
  _DAT_ram_e000e184 = 0x400000;
  return;
}



// FUNCTION ram:0000caa0 FUN_ram_0000caa0
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000caa0(void)

{
  gp = &observed_global_pointer;
  _DAT_ram_4002101c = _DAT_ram_4002101c | 2;
  _DAT_ram_e000e104 = 0x400000;
  return;
}



// FUNCTION ram:0000caba FUN_ram_0000caba
// THUNK false

/* WARNING: Removing unreachable block (ram,0x0000cada) */

void FUN_ram_0000caba(undefined1 param_1)

{
  gp = &observed_global_pointer;
  DAT_ram_2000018c = param_1;
  DAT_ram_2000018f = 0;
  DAT_ram_2000018e = 0;
  return;
}



// FUNCTION ram:0000cae2 FUN_ram_0000cae2
// THUNK false

void FUN_ram_0000cae2(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000cae4 FUN_ram_0000cae4
// THUNK false
// CALLS ram:0000d63a FUN_ram_0000d63a
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Removing unreachable block (ram,0x0000cba0) */
/* WARNING: Removing unreachable block (ram,0x0000cb9c) */
/* WARNING: Removing unreachable block (ram,0x0000cbac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000cae4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  gp = &observed_global_pointer;
  _DAT_ram_4002101c = _DAT_ram_4002101c | 0x20000;
  _DAT_ram_40021018 = _DAT_ram_40021018 | 0x11;
  _DAT_ram_40011000 = _DAT_ram_40011000 & 0xffffff00 | 0x49;
  uRam40010004 = uRam40010004 & 0xfffffff8 | 0x180;
  uRam40004410 = uRam40004410 & 0xcfff;
  uRam4000440c = uRam4000440c & 0xffffe9f3 | 0xc;
  uRam40004414 = uRam40004414 & 0xfcff;
  uVar1 = FUN_ram_0000d63a(_DAT_ram_40021004 >> 4 & 0xf);
  uVar2 = 48000000 >> (uVar1 & 0x1f);
  if ((_DAT_ram_40021004 & 0x80) == 0) {
    if (uVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 48000000 / uVar1;
    }
  }
  if (param_1 << 2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uVar2 * 0x19) / (uint)(param_1 << 2);
  }
  uRam40004408 = (ushort)(((uVar1 % 100) * 0x10 + 0x32) / 100) & 0xf | (ushort)(uVar1 / 100 << 4);
  uRame000e427 = 0;
  _DAT_ram_e000e104 = 0x80;
  uRam4000440c = uRam4000440c | 0x2020;
  return;
}



// FUNCTION ram:0000cbec FUN_ram_0000cbec
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000cbec(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  
  gp = &observed_global_pointer;
  bVar1 = (_DAT_ram_40011008 & 0x10) != 0;
  bVar3 = bVar1 << 6;
  if ((_DAT_ram_40011008 & 0x20) == 0) {
    if (bVar1) {
      if (DAT_ram_200001a2 == -0x40) {
        DAT_ram_200001a2 = bVar3;
        DAT_ram_200001a3 = 0x81;
        return;
      }
      if (DAT_ram_200001a2 != '\0') {
        DAT_ram_200001a2 = bVar3;
        return;
      }
      DAT_ram_200001a2 = bVar3;
      DAT_ram_200001a3 = 0x82;
      return;
    }
  }
  else {
    bVar3 = bVar3 | 0x80;
    if (bVar3 == 0x80) {
      if (DAT_ram_200001a2 == -0x40) {
        DAT_ram_200001a2 = bVar3;
        DAT_ram_200001a3 = 0x83;
        return;
      }
      if (DAT_ram_200001a2 != '\0') {
        DAT_ram_200001a2 = bVar3;
        return;
      }
      DAT_ram_200001a2 = bVar3;
      DAT_ram_200001a3 = 0x80;
      return;
    }
  }
  if ((char)DAT_ram_200001a3 < '\0') {
    bVar2 = DAT_ram_200001a3 & 0x7f;
    DAT_ram_200001a3 = DAT_ram_200001a3 & 0x7f;
    if (bVar2 == 0) {
      if (bVar3 != 0xc0) {
        DAT_ram_200001a2 = bVar3;
        return;
      }
    }
    else {
      if (DAT_ram_200001a3 != 1) {
        if (DAT_ram_200001a3 == 2) {
          if (bVar3 != 0xc0) {
            DAT_ram_200001a2 = bVar3;
            return;
          }
        }
        else {
          if (DAT_ram_200001a3 != 3) {
            DAT_ram_200001a2 = bVar3;
            return;
          }
          if (bVar3 != 0) {
            DAT_ram_200001a2 = bVar3;
            return;
          }
        }
        if (DAT_ram_20002fc1 == '\0') {
          DAT_ram_20002fc1 = '\x01';
        }
        DAT_ram_200001a2 = bVar3;
        DAT_ram_20002fca = 0xff;
        return;
      }
      if (bVar3 != 0) {
        DAT_ram_200001a2 = bVar3;
        return;
      }
    }
    if (DAT_ram_20002fc0 == '\0') {
      DAT_ram_20002fc0 = '\x01';
    }
    DAT_ram_20002fca = 1;
  }
  DAT_ram_200001a2 = bVar3;
  return;
}



// FUNCTION ram:0000ccc8 FUN_ram_0000ccc8
// THUNK false

void FUN_ram_0000ccc8(void)

{
  gp = &observed_global_pointer;
  if (DAT_ram_20002fca == '\0') {
    if (DAT_ram_20002fcb != '\0') {
      DAT_ram_20002fcb = DAT_ram_20002fcb + -1;
      DAT_ram_20002fcc = 1;
      return;
    }
    if (DAT_ram_20002fcc != '\0') {
      DAT_ram_20002fcc = '\0';
      DAT_ram_200034f1 = 1;
      DAT_ram_200000f6 = 1;
      DAT_ram_20003509 = 0;
      DAT_ram_2000350a = 0;
      DAT_ram_200000eb = 1;
      DAT_ram_200000fa = 1;
    }
    return;
  }
  if (DAT_ram_20002fcb == '\0') {
    if (DAT_ram_20002fc2 == '\0') {
      DAT_ram_20002fcb = 0x1e;
      DAT_ram_20002fc2 = 1;
      if (DAT_ram_20002fca < '\0') {
        DAT_ram_20002fca = DAT_ram_20002fca + '\x01';
        DAT_ram_20003509 = 0xea;
      }
      else {
        DAT_ram_20002fca = DAT_ram_20002fca + -1;
        DAT_ram_20003509 = 0xe9;
      }
      DAT_ram_200034f1 = 1;
      DAT_ram_200000f6 = 1;
      DAT_ram_200000eb = 1;
      DAT_ram_2000350a = 0;
      DAT_ram_200000fa = 1;
      return;
    }
    DAT_ram_20002fcb = 0x1e;
    DAT_ram_20002fc2 = 0;
    DAT_ram_200034f1 = 1;
    DAT_ram_200000eb = 1;
    DAT_ram_200000f6 = 1;
    DAT_ram_20003509 = 0;
    DAT_ram_2000350a = 0;
    DAT_ram_200000fa = 1;
    return;
  }
  DAT_ram_20002fcb = DAT_ram_20002fcb + -1;
  return;
}



// FUNCTION ram:0000cd84 FUN_ram_0000cd84
// THUNK false

void FUN_ram_0000cd84(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000cd86 FUN_ram_0000cd86
// THUNK false

void FUN_ram_0000cd86(void)

{
  gp = &observed_global_pointer;
  return;
}



// FUNCTION ram:0000cd88 FUN_ram_0000cd88
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000cd88(void)

{
  gp = &observed_global_pointer;
  if (_DAT_ram_40010c08 << 0xc < 0) {
    DAT_ram_200001a0 = DAT_ram_200001a0 + 1;
    if (100 < DAT_ram_200001a0) {
      DAT_ram_200001a0 = 0;
      DAT_ram_200034e0 = 1;
    }
    DAT_ram_2000019e = 0;
  }
  else {
    DAT_ram_2000019e = DAT_ram_2000019e + 1;
    if (100 < DAT_ram_2000019e) {
      DAT_ram_2000019e = 0;
      DAT_ram_200034e0 = 0;
      DAT_ram_200034e2 = 0;
    }
    DAT_ram_200001a0 = 0;
  }
  if (_DAT_ram_40010c08 << 0xc < 0) {
    if (-1 < _DAT_ram_40011008 << 0xd) {
      DAT_ram_2000019a = DAT_ram_2000019a + 1;
      if (0x5dc < DAT_ram_2000019a) {
        DAT_ram_2000019a = 0;
        DAT_ram_200034e2 = 0;
      }
      DAT_ram_2000019c = 0;
      return;
    }
    DAT_ram_2000019c = DAT_ram_2000019c + 1;
    if (0x5dc < DAT_ram_2000019c) {
      DAT_ram_2000019c = 0;
      DAT_ram_200034e2 = 1;
    }
    DAT_ram_2000019a = 0;
  }
  return;
}



// FUNCTION ram:0000ce64 FUN_ram_0000ce64
// THUNK false
// CALLS ram:000081dc FUN_ram_000081dc
// CALLS ram:00001754 FUN_ram_00001754
// CALLS ram:00001730 FUN_ram_00001730

/* WARNING: Inlined function: FUN_ram_00001730 */
/* WARNING: Inlined function: FUN_ram_00001754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0000ce64(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  gp = &observed_global_pointer;
  uRame000e180 = 0x80000;
  FUN_ram_000081dc(3000);
  if (((cRam200034fe == '\0') && (bRam200034ff == param_1)) && (bRam20003500 == param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  _DAT_ram_e000e100 = 0x80000;
  return uVar1;
}



// FUNCTION ram:0000ceba FUN_ram_0000ceba
// THUNK false
// CALLS ram:00007dce FUN_ram_00007dce
// CALLS ram:0000d662 FUN_ram_0000d662
// CALLS ram:0000cd86 FUN_ram_0000cd86
// CALLS ram:00002208 FUN_ram_00002208
// CALLS ram:000081dc FUN_ram_000081dc
// CALLS ram:0000cd88 FUN_ram_0000cd88
// CALLS ram:00002fae FUN_ram_00002fae
// CALLS ram:0000cae4 FUN_ram_0000cae4
// CALLS ram:0000bbb8 FUN_ram_0000bbb8
// CALLS ram:0000bd0e FUN_ram_0000bd0e
// CALLS ram:00009338 FUN_ram_00009338
// CALLS ram:0000be1e FUN_ram_0000be1e
// CALLS ram:00009f36 FUN_ram_00009f36
// CALLS ram:0000ce64 FUN_ram_0000ce64
// CALLS ram:00005b6e FUN_ram_00005b6e
// CALLS ram:0000d634 FUN_ram_0000d634
// CALLS ram:00009770 FUN_ram_00009770
// CALLS ram:0000cae2 FUN_ram_0000cae2
// CALLS ram:0000aa08 FUN_ram_0000aa08
// CALLS ram:0000945c FUN_ram_0000945c
// CALLS ram:0000ca04 FUN_ram_0000ca04
// CALLS ram:0000a53e FUN_ram_0000a53e
// CALLS ram:00009380 FUN_ram_00009380
// CALLS ram:00009dbe FUN_ram_00009dbe
// CALLS ram:000086d4 FUN_ram_000086d4
// CALLS ram:000097da FUN_ram_000097da
// CALLS ram:00003038 FUN_ram_00003038
// CALLS ram:000022b8 FUN_ram_000022b8
// CALLS ram:000093bc FUN_ram_000093bc
// CALLS ram:00006446 FUN_ram_00006446
// CALLS ram:00001708 FUN_ram_00001708
// CALLS ram:0000326e FUN_ram_0000326e
// CALLS ram:0000c2b4 FUN_ram_0000c2b4
// CALLS ram:00008414 FUN_ram_00008414
// CALLS ram:0000be50 FUN_ram_0000be50
// CALLS ram:0000bd7a FUN_ram_0000bd7a
// CALLS ram:00002174 FUN_ram_00002174
// CALLS ram:0000d37a FUN_ram_0000d37a
// CALLS ram:00009a58 FUN_ram_00009a58
// CALLS ram:0000c478 FUN_ram_0000c478
// CALLS ram:000058dc FUN_ram_000058dc

/* WARNING: Inlined function: FUN_ram_00001708 */

void FUN_ram_0000ceba(void)

{
  int iVar1;
  char cVar2;
  
  FUN_ram_0000d634(1);
  FUN_ram_0000d37a();
  FUN_ram_0000cae2(0x1c200);
  FUN_ram_0000cae4(1000000);
  FUN_ram_00003038();
  FUN_ram_0000be50(&DAT_ram_20001ad0,0x115f);
  FUN_ram_0000be50(&DAT_ram_200000e0,3);
  FUN_ram_0000be50(0x20000edc,0x19);
  FUN_ram_0000be50(0x20000320,0x71);
  FUN_ram_0000be50(&DAT_ram_200003b8,0xb04);
  FUN_ram_0000be50(&DAT_ram_200034e0,9);
  FUN_ram_0000be50(&DAT_ram_200034ec,0x3a);
  FUN_ram_0000be50(0x2000010c,4);
  FUN_ram_0000be50(&DAT_ram_20000100,8);
  FUN_ram_0000be50(0x20002f60,0x21);
  FUN_ram_0000be50(0x20002f84,0x21);
  FUN_ram_0000be50(&DAT_ram_200000f8,5);
  FUN_ram_0000be50(0x20002fa8,0x18);
  FUN_ram_0000be50(&DAT_ram_20002fc0,0xd);
  FUN_ram_0000be50(&DAT_ram_20003170,0x26e);
  FUN_ram_0000be50(&DAT_ram_20003070,0x1f);
  FUN_ram_0000be50(0x200043f0,0x100);
  FUN_ram_0000be50(0x200043d0,0x20);
  FUN_ram_0000be50(0x200019d8,0xf8);
  FUN_ram_0000326e();
  FUN_ram_0000be50(0x20002fd0,0x80);
  FUN_ram_0000be50(0x20002ee0,0x80);
  FUN_ram_0000be50(0x20003460,0x80);
  FUN_ram_0000be50(0x200033e0,0x80);
  FUN_ram_0000be50(0x20000ef8,0xadf);
  FUN_ram_0000be50(0x20000394,0x22);
  FUN_ram_0000be50(&DAT_ram_20002c30,0xaf);
  FUN_ram_000081dc(0x50);
  FUN_ram_00007dce();
  FUN_ram_0000ca04();
  FUN_ram_0000be1e(0x2e,1);
  uRam20000119 = 1;
  cVar2 = -0x2d;
  FUN_ram_0000a53e();
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    FUN_ram_00009dbe();
    FUN_ram_0000cd86();
    FUN_ram_0000cd88();
    FUN_ram_0000be1e(1,1);
  }
  DAT_ram_20003538 = 0;
  if (cRam200034fe != '\0') goto LAB_ram_0000d0c6;
  if (cRam200034ff == 'U') {
    uRam20000330 = 0;
    DAT_ram_2000032f = 0;
    DAT_ram_2000032e = 0;
  }
  else if (cRam200034ff == '\x12') {
    uRam20000330 = 1;
    DAT_ram_2000032f = 1;
    DAT_ram_2000032e = 1;
  }
  else {
    if (cRam200034ff == '#') {
      if ((cRam20003500 == 'C') && (iVar1 = FUN_ram_0000ce64(0x23,0x43), iVar1 != 0)) {
        FUN_ram_0000aa08();
        uRam20000ee7 = 1;
        DAT_ram_20003538 = 1;
        do {
          do {
          } while (DAT_ram_20000198 == '\0');
          DAT_ram_20000198 = '\0';
          FUN_ram_00006446();
        } while( true );
      }
      goto LAB_ram_0000d0c6;
    }
    if (cRam200034ff == '\x13') {
      iVar1 = FUN_ram_0000ce64(0x13,0xff);
      if (iVar1 != 0) {
        uRam20000ee6 = 1;
        FUN_ram_00009a58(2);
        FUN_ram_000086d4();
        DAT_ram_20003538 = 1;
        FUN_ram_0000c2b4(0x3f38,10,&UNK_ram_0000f1e8);
        do {
          do {
          } while (DAT_ram_20000198 == '\0');
          DAT_ram_20000198 = '\0';
          FUN_ram_00006446();
        } while( true );
      }
      goto LAB_ram_0000d0c6;
    }
    if (cRam200034ff != '\x1c') {
      if (((cRam200034ff == '!') && (cRam20003500 == 'C')) &&
         (iVar1 = FUN_ram_0000ce64(0x21,0x43), iVar1 != 0)) {
        uRam20000eec = 1;
        FUN_ram_000097da();
        DAT_ram_20003538 = 1;
        do {
          do {
          } while (DAT_ram_20000198 == '\0');
          DAT_ram_20000198 = '\0';
          FUN_ram_00006446();
        } while( true );
      }
      goto LAB_ram_0000d0c6;
    }
    if (cRam200034fd != '\x02') goto LAB_ram_0000d0c6;
    uRam20000330 = 3;
    DAT_ram_2000032f = 0;
    DAT_ram_2000032e = 0;
    uRam20000eea = 1;
  }
  DAT_ram_20003538 = 1;
  DAT_ram_200000ba = 3;
LAB_ram_0000d0c6:
  FUN_ram_00002fae();
  uRam20000119 = 0;
  FUN_ram_0000bbb8();
  FUN_ram_0000c478();
  uRam20003537 = 1;
  FUN_ram_00009770(200);
  DAT_ram_20000125 = 0;
  DAT_ram_2000012b = 0;
  DAT_ram_20000128 = 0;
  FUN_ram_00009770(200);
  DAT_ram_20003531 = FUN_ram_0000945c(CONCAT11(uRam20003529,uRam20003528));
  uRam20003537 = 0;
  FUN_ram_000058dc(&DAT_ram_20001ad0);
  FUN_ram_00005b6e(&DAT_ram_20001ad0);
  FUN_ram_0000d662(0x20000358,"Flow84-L@Lofree ",0x11);
  FUN_ram_0000d662(0x20000374,"Flow84-L@Lofree ",0x11);
  uRam20000357 = 0x10;
  uRam20000373 = 0x10;
  DAT_ram_2000023e = 1;
  uRam20000330 = 0xff;
  uRam20000323 = 0;
  uRam2000033a = 0;
  DAT_ram_2000002c = 1;
  DAT_ram_2000002d = 1;
  DAT_ram_2000002e = 1;
  FUN_ram_00009f36(0x20002faa);
  FUN_ram_00002174(&DAT_ram_200001c8,&UNK_ram_0000f1c8);
  FUN_ram_00002174(&DAT_ram_200001a8,&UNK_ram_0000f1d0);
  FUN_ram_00002208();
  FUN_ram_00008414();
  FUN_ram_0000bd7a();
  do {
    while( true ) {
      FUN_ram_0000bd0e();
      if (cRam20000115 != '\0') {
        cRam20000115 = '\0';
        DAT_ram_20001ad0 = 1;
        DAT_ram_20001ad1 = PTR_DAT_ram_2000016c_ram_20000040[2];
      }
      FUN_ram_0000be50(&DAT_ram_20003170,0x26e);
      if (DAT_ram_2000032e != 10) break;
      FUN_ram_00002208();
      FUN_ram_00009380();
    }
    if ((DAT_ram_2000032e < 6) || (DAT_ram_2000032e == 0xb)) {
      FUN_ram_000022b8();
      FUN_ram_00009338();
    }
    else if (DAT_ram_2000032e == 0x10) {
      FUN_ram_000022b8();
      FUN_ram_000093bc();
    }
  } while( true );
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



// FUNCTION ram:0000d37a FUN_ram_0000d37a
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0000d37a(void)

{
  byte bVar1;
  
  gp = &observed_global_pointer;
  bVar1 = *(byte *)((_DAT_ram_40021004 >> 4 & 0xf) + 0x20000000);
  DAT_ram_20000050 = 48000000 >> (bVar1 & 0x1f);
  if ((_DAT_ram_40021004 & 0x80) == 0) {
    if (bVar1 == 0) {
      DAT_ram_20000050 = 0xffffffff;
    }
    else {
      DAT_ram_20000050 = 48000000 / bVar1;
    }
  }
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
  mepc = FUN_ram_0000ceba;
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



// FUNCTION ram:0000d518 FUN_ram_0000d518
// THUNK false

void FUN_ram_0000d518(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &observed_global_pointer;
  uVar6 = param_2[2];
  uVar7 = uVar6 & 0xf;
  if ((uVar6 & 0x10) != 0) {
    uVar7 = uVar7 | param_2[1];
  }
  uVar3 = *param_2;
  if ((uVar3 & 0xff) != 0) {
    uVar4 = *param_1;
    uVar2 = 0;
    do {
      uVar1 = 1 << (uVar2 & 0x1f);
      if (uVar1 == (uVar3 & uVar1)) {
        uVar4 = uVar7 << (uVar2 << 2 & 0x1f) | ~(0xf << (uVar2 << 2 & 0x1f)) & uVar4;
        if (uVar6 == 0x28) {
          param_1[5] = uVar1;
        }
        else if (uVar6 == 0x48) {
          param_1[4] = uVar1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 8);
    *param_1 = uVar4;
  }
  if ((uVar3 & 0xff00) != 0) {
    uVar4 = param_1[1];
    uVar2 = 8;
    do {
      uVar1 = 1 << (uVar2 & 0x1f);
      if (uVar1 == (uVar3 & uVar1)) {
        uVar5 = uVar2 * 4 - 0x20;
        uVar4 = ~(0xf << (uVar5 & 0x1f)) & uVar4 | uVar7 << (uVar5 & 0x1f);
        if (uVar6 == 0x28) {
          param_1[5] = uVar1;
        }
        else if (uVar6 == 0x48) {
          param_1[4] = uVar1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x10);
    param_1[1] = uVar4;
  }
  if (0xffff < uVar3) {
    uVar2 = param_1[7];
    uVar4 = 0;
    do {
      uVar1 = 1 << (uVar4 + 0x10 & 0x1f);
      if (uVar1 == (uVar3 & uVar1)) {
        uVar2 = uVar7 << (uVar4 << 2 & 0x1f) | ~(0xf << (uVar4 << 2 & 0x1f)) & uVar2;
        if (uVar6 == 0x28) {
          param_1[5] = uVar1;
        }
        else if (uVar6 == 0x48) {
          param_1[8] = 1 << (uVar4 & 0x1f);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 8);
    param_1[7] = uVar2;
  }
  return;
}



// FUNCTION ram:0000d634 FUN_ram_0000d634
// THUNK false

void FUN_ram_0000d634(undefined4 param_1)

{
  gp = &observed_global_pointer;
  DAT_ram_200001a4 = param_1;
  return;
}



// FUNCTION ram:0000d63a FUN_ram_0000d63a
// THUNK false

undefined1 FUN_ram_0000d63a(int param_1)

{
  gp = &observed_global_pointer;
  return (&DAT_ram_20000010)[param_1];
}



// FUNCTION ram:0000d648 FUN_ram_0000d648
// THUNK false

void FUN_ram_0000d648(int param_1,ushort param_2)

{
  gp = &observed_global_pointer;
  *(ushort *)(param_1 + 4) = param_2 & 0x1ff;
  return;
}



// FUNCTION ram:0000d650 FUN_ram_0000d650
// THUNK false

ushort FUN_ram_0000d650(int param_1)

{
  gp = &observed_global_pointer;
  return *(ushort *)(param_1 + 4) & 0x1ff;
}



// FUNCTION ram:0000d658 FUN_ram_0000d658
// THUNK false

bool FUN_ram_0000d658(ushort *param_1,ushort param_2)

{
  gp = &observed_global_pointer;
  return (*param_1 & param_2) != 0;
}



// FUNCTION ram:0000d662 FUN_ram_0000d662
// THUNK false

void FUN_ram_0000d662(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  gp = &observed_global_pointer;
  puVar4 = (undefined4 *)((int)param_1 + param_3);
  if (((((uint)param_2 ^ (uint)param_1) & 3) == 0) && (3 < param_3)) {
    for (; ((uint)param_1 & 3) != 0; param_1 = (undefined4 *)((int)param_1 + 1)) {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
    }
    for (; param_1 < (undefined4 *)((uint)puVar4 & 0xfffffffc) + -8; param_1 = param_1 + 9) {
      uVar2 = param_2[1];
      uVar11 = param_2[2];
      uVar10 = param_2[3];
      uVar9 = param_2[4];
      uVar8 = param_2[5];
      uVar3 = param_2[6];
      uVar7 = param_2[7];
      *param_1 = *param_2;
      uVar6 = param_2[8];
      param_1[1] = uVar2;
      param_1[2] = uVar11;
      param_1[3] = uVar10;
      param_1[4] = uVar9;
      param_1[5] = uVar8;
      param_1[6] = uVar3;
      param_1[7] = uVar7;
      param_1[8] = uVar6;
      param_2 = param_2 + 9;
    }
    for (; param_1 < (undefined4 *)((uint)puVar4 & 0xfffffffc); param_1 = param_1 + 1) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
    }
  }
  if (puVar4 <= param_1) {
    return;
  }
  do {
    uVar1 = *(undefined1 *)param_2;
    puVar5 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
    param_1 = puVar5;
  } while (puVar5 < puVar4);
  return;
}



// FUNCTION ram:0000d714 FUN_ram_0000d714
// THUNK false

char * FUN_ram_0000d714(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  gp = &observed_global_pointer;
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_1);
}


// TOTAL completed=259 failed=0

// Input: /Users/baijiale/Code/lofree-flowlite-reverse/research/firmware/vendor/HIDUsb-x64-inno-restored.dll
// SHA256: 0cb20c33f490cbedbc3c78b018c85955322c40d494632c7bebcf86f10aef5ba8
// Language: x86:LE:64:default
// Pseudocode is analysis output, not recovered source.

// FUNCTION 180001000 FUN_180001000
// THUNK false
// CALLS EXTERNAL:00000049 _Mtx_init_in_situ
// CALLS 180018d4c atexit

void FUN_180001000(void)

{
  _Mtx_init_in_situ(&DAT_18002a550,2);
  atexit((_func_5014 *)&LAB_180019f10);
  return;
}



// FUNCTION 180001070 FUN_180001070
// THUNK false
// CALLS 180018d4c atexit
// CALLS 180004a60 FUN_180004a60

void FUN_180001070(void)

{
  FUN_180004a60(&DAT_180023180,L"Software\\DeviceBatteryOptimize",0x1e);
  atexit(FUN_18001a100);
  return;
}



// FUNCTION 1800010a0 FUN_1800010a0
// THUNK false
// CALLS 180018824 FUN_180018824
// CALLS 180018d4c atexit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800010a0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_180018824(0x20);
  uVar1 = s_ComUsbUpgradeFile_18001bad0._8_8_;
  _DAT_1800231b0 = 0x11;
  DAT_1800231b8 = 0x1f;
  DAT_1800231a0 = pcVar2;
  *(undefined8 *)pcVar2 = s_ComUsbUpgradeFile_18001bad0._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar1;
  pcVar2[0x10] = s_ComUsbUpgradeFile_18001bad0[0x10];
  pcVar2[0x11] = '\0';
  atexit(FUN_18001a1d0);
  return;
}



// FUNCTION 180001100 FUN_180001100
// THUNK false
// CALLS 180012980 FUN_180012980
// CALLS 180018d4c atexit

void FUN_180001100(void)

{
  FUN_180012980(0x18002a5d0);
  atexit((_func_5014 *)&LAB_18001a240);
  return;
}



// FUNCTION 180001120 FUN_180001120
// THUNK false
// CALLS 180012980 FUN_180012980
// CALLS 180018d4c atexit

void FUN_180001120(void)

{
  FUN_180012980(0x18002aa90);
  atexit((_func_5014 *)&LAB_18001a250);
  return;
}



// FUNCTION 180001160 FUN_180001160
// THUNK false

undefined * FUN_180001160(void)

{
  return &DAT_180023c50;
}



// FUNCTION 180001170 FUN_180001170
// THUNK false
// CALLS 180001160 FUN_180001160
// CALLS EXTERNAL:0000006e __stdio_common_vsprintf

int FUN_180001170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180001160();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1800011d0 FUN_1800011d0
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy

undefined8 * FUN_1800011d0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



// FUNCTION 180001210 FUN_180001210
// THUNK false

char * FUN_180001210(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



// FUNCTION 180001230 FUN_180001230
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000066 __std_exception_destroy

undefined8 * FUN_180001230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1800012a0 FUN_1800012a0
// THUNK false

undefined8 * FUN_1800012a0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// FUNCTION 1800012d0 FUN_1800012d0
// THUNK false
// CALLS 1800012a0 FUN_1800012a0
// CALLS 1800195a2 _CxxThrowException

void FUN_1800012d0(void)

{
  undefined8 local_28 [5];
  
  FUN_1800012a0(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001f270);
}



// FUNCTION 1800012f0 FUN_1800012f0
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy

undefined8 * FUN_1800012f0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// FUNCTION 180001330 FUN_180001330
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy

undefined8 * FUN_180001330(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



// FUNCTION 180001370 FUN_180001370
// THUNK false
// CALLS EXTERNAL:00000057 _Xlength_error

void FUN_180001370(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 180001390 FUN_180001390
// THUNK false
// CALLS 180004fa0 FUN_180004fa0
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180001390(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  short local_22 [5];
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_78;
  psVar3 = local_22 + 2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
    do {
      psVar2 = psVar3;
      psVar3 = psVar2 + -1;
      *psVar3 = (short)uVar1 + (short)((ulonglong)uVar1 / 10) * -10 + 0x30;
      uVar1 = (uint)((ulonglong)uVar1 / 10);
    } while (uVar1 != 0);
    psVar3 = psVar2 + -2;
    *psVar3 = 0x2d;
  }
  else {
    do {
      psVar3 = psVar3 + -1;
      *psVar3 = (short)param_2 + (short)((ulonglong)param_2 / 10) * -10 + 0x30;
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
  }
  local_50 = param_1;
  FUN_180004fa0(param_1,psVar3,local_22 + 2);
  return param_1;
}



// FUNCTION 180001460 FUN_180001460
// THUNK false

undefined8 * FUN_180001460(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



// FUNCTION 180001490 FUN_180001490
// THUNK false
// CALLS 180001460 FUN_180001460
// CALLS 1800195a2 _CxxThrowException

void FUN_180001490(void)

{
  undefined8 local_28 [5];
  
  FUN_180001460(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001f1b8);
}



// FUNCTION 1800014b0 FUN_1800014b0
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy

undefined8 * FUN_1800014b0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



// FUNCTION 1800014f0 FUN_1800014f0
// THUNK false

void FUN_1800014f0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 180001520 FUN_180001520
// THUNK false
// CALLS 180018824 FUN_180018824
// CALLS 180001370 FUN_180001370
// CALLS EXTERNAL:0000001b GetLocalTime
// CALLS 1800187f0 free
// CALLS 180001170 FUN_180001170
// CALLS 180019703 memcpy
// CALLS 180017020 FUN_180017020
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 1800012d0 FUN_1800012d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t ******* FUN_180001520(undefined8 param_1,wchar_t *******param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong _Size;
  void *pvVar5;
  undefined1 auStack_1b8 [32];
  uint local_198;
  uint local_190;
  uint local_188;
  uint local_180;
  uint local_178;
  uint local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined8 local_140;
  ushort local_138;
  ushort local_136;
  ushort local_134;
  ushort local_132;
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_1b8;
  pvVar5 = (void *)0x0;
  local_140 = param_2;
  GetLocalTime((LPSYSTEMTIME)&local_140);
  local_170 = (uint)local_132;
  local_178 = (uint)local_134;
  local_180 = (uint)local_136;
  local_188 = (uint)local_138;
  local_190 = (uint)local_140._6_2_;
  local_198 = (uint)local_140._2_2_;
  FUN_180001170(local_128,0x100,"%4d-%02d-%02d %02d:%02d:%02d %03d",(ulonglong)local_140 & 0xffff);
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  _Size = 0xffffffffffffffff;
  do {
    uVar2 = _Size;
    _Size = uVar2 + 1;
  } while (local_128[uVar2 + 1] != '\0');
  if (0x7fffffffffffffff < _Size) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  local_150 = 0xf;
  if (_Size < 0x10) {
    local_158 = _Size;
    memcpy(&local_168,local_128,_Size);
    *(undefined1 *)((longlong)&local_168 + uVar2 + 1) = 0;
  }
  else {
    uVar2 = _Size | 0xf;
    if (uVar2 < 0x8000000000000000) {
      if (uVar2 < 0x16) {
        uVar2 = 0x16;
      }
      uVar1 = uVar2 + 1;
      if (0xfff < uVar1) {
        uVar3 = uVar2 + 0x28;
        if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1800012d0();
        }
        goto LAB_180001638;
      }
      if (uVar1 != 0) {
        pvVar5 = (void *)FUN_180018824(uVar1);
      }
    }
    else {
      uVar3 = 0x8000000000000027;
      uVar2 = 0x7fffffffffffffff;
LAB_180001638:
      lVar4 = FUN_180018824(uVar3);
      if (lVar4 == 0) goto LAB_1800016f3;
      pvVar5 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar5 - 8) = lVar4;
    }
    local_168 = pvVar5;
    local_158 = _Size;
    local_150 = uVar2;
    memcpy(pvVar5,local_128,_Size);
    *(undefined1 *)((longlong)pvVar5 + _Size) = 0;
  }
  FUN_180017020(param_2,(byte *)&local_168);
  if (0xf < local_150) {
    pvVar5 = local_168;
    if ((0xfff < local_150 + 1) &&
       (pvVar5 = *(void **)((longlong)local_168 + -8),
       0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pvVar5)))) {
LAB_1800016f3:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar5);
  }
  return param_2;
}



// FUNCTION 180001740 FUN_180001740
// THUNK false
// CALLS 180003340 FUN_180003340
// CALLS 180001370 FUN_180001370
// CALLS 180019709 memmove
// CALLS 1800187f0 free
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019703 memcpy
// CALLS 1800053a0 FUN_1800053a0
// CALLS 1800187d0 __security_check_cookie
// CALLS 180004160 FUN_180004160
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180001740(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 ****_Dst;
  longlong *plVar4;
  void *_Memory;
  longlong *_Src;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  if (DAT_18002af60 == DAT_18002af68) {
    plVar4 = &DAT_18002af58;
    FUN_1800053a0(&DAT_18002af58,DAT_18002af60,param_2);
  }
  else {
    plVar4 = DAT_18002af60;
    FUN_180004160(DAT_18002af60,param_2);
    DAT_18002af60 = DAT_18002af60 + 4;
  }
  if (DAT_18002af50 != '\0') {
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    _Src = param_2;
    if (7 < (ulonglong)param_2[3]) {
      _Src = (longlong *)*param_2;
    }
    uVar1 = param_2[2];
    if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180001370();
    }
    local_40 = 7;
    if (uVar1 < 8) {
      _Dst = &local_58;
      local_48 = uVar1;
      memmove(_Dst,_Src,0x10);
    }
    else {
      uVar3 = uVar1 | 7;
      uVar5 = 0x7ffffffffffffffe;
      if ((uVar3 < 0x7fffffffffffffff) && (plVar4 = (longlong *)0xa, uVar5 = uVar3, uVar3 < 10)) {
        uVar5 = 10;
      }
      _Dst = (undefined8 ****)FUN_180004ec0(plVar4,uVar5 + 1);
      local_58 = _Dst;
      local_48 = uVar1;
      local_40 = uVar5;
      memcpy(_Dst,_Src,uVar1 * 2 + 2);
    }
    FUN_180003340(_Dst,(wchar_t *)&local_58);
  }
  if (7 < (ulonglong)param_2[3]) {
    pvVar2 = (void *)*param_2;
    _Memory = pvVar2;
    if ((0xfff < param_2[3] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  return;
}



// FUNCTION 1800018e0 FUN_1800018e0
// THUNK false
// CALLS 180003340 FUN_180003340
// CALLS 180001520 FUN_180001520
// CALLS 180018824 FUN_180018824
// CALLS 1800040f0 FUN_1800040f0
// CALLS 180001370 FUN_180001370
// CALLS 1800187f0 free
// CALLS 180019703 memcpy
// CALLS 180004a60 FUN_180004a60
// CALLS 180004df0 FUN_180004df0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 180002980 FUN_180002980
// CALLS 180004030 FUN_180004030
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180001390 FUN_180001390
// CALLS 1800046c0 FUN_1800046c0
// CALLS 180005280 FUN_180005280
// CALLS 180004810 FUN_180004810
// CALLS 1800012d0 FUN_1800012d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800018e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  wchar_t ******ppppppwVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  wchar_t *******pppppppwVar8;
  ulonglong *puVar9;
  wchar_t *********pppppppppwVar10;
  wchar_t ********ppppppppwVar11;
  longlong *_Memory;
  wchar_t *********pppppppppwVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStackY_d8 [32];
  wchar_t ********local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  wchar_t *******local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStackY_d8;
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  pppppppppwVar10 = &local_98;
  local_48 = param_2;
  local_40 = param_2;
  FUN_180004a60(pppppppppwVar10,L"logs UsbUpgradeFile",0x13);
  FUN_180003340(pppppppppwVar10,(wchar_t *)&local_98);
  puVar6 = FUN_180001390(&local_98,(uint)((longlong)DAT_18002af60 - DAT_18002af58 >> 5));
  pppppppppwVar10 = (wchar_t *********)&local_70;
  pwVar7 = (wchar_t *)FUN_1800046c0(pppppppppwVar10,(undefined8 *)L"logs size = ",puVar6,param_4);
  FUN_180003340(pppppppppwVar10,pwVar7);
  if (7 < uStack_80) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppppppwVar10);
  }
  pppppppwVar8 = FUN_180001520(pppppppppwVar10,(wchar_t *******)&local_98);
  _Memory = (longlong *)&local_70;
  pwVar7 = (wchar_t *)FUN_1800046c0(_Memory,(undefined8 *)L"time:",pppppppwVar8,param_4);
  FUN_180003340(_Memory,pwVar7);
  if (7 < uStack_80) {
    _Memory = (longlong *)local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (_Memory = (longlong *)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  pppppppwVar8 = FUN_180001520(_Memory,(wchar_t *******)&local_98);
  puVar5 = DAT_18002af60;
  if (DAT_18002af60 == DAT_18002af68) {
    _Memory = &DAT_18002af58;
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,pppppppwVar8);
  }
  else {
    *DAT_18002af60 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    ppppppwVar3 = pppppppwVar8[1];
    *puVar5 = (ulonglong)*pppppppwVar8;
    puVar5[1] = (ulonglong)ppppppwVar3;
    ppppppwVar3 = pppppppwVar8[3];
    puVar5[2] = (ulonglong)pppppppwVar8[2];
    puVar5[3] = (ulonglong)ppppppwVar3;
    pppppppwVar8[2] = (wchar_t ******)0x0;
    pppppppwVar8[3] = (wchar_t ******)0x7;
    *(undefined2 *)pppppppwVar8 = 0;
    DAT_18002af60 = DAT_18002af60 + 4;
  }
  if (7 < uStack_80) {
    _Memory = (longlong *)local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (_Memory = (longlong *)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_70 = (wchar_t *******)0x0;
  uStack_68 = 0;
  local_70 = (wchar_t *******)FUN_180004ec0(_Memory,0x18);
  uVar4 = u_UsbUpgradeFile_18001b738._8_8_;
  local_60 = 0x10;
  uStack_58 = 0x17;
  *local_70 = (wchar_t ******)u_UsbUpgradeFile_18001b738._0_8_;
  local_70[1] = (wchar_t ******)uVar4;
  uVar4 = u_UsbUpgradeFile_18001b738._24_8_;
  local_70[2] = (wchar_t ******)u_UsbUpgradeFile_18001b738._16_8_;
  local_70[3] = (wchar_t ******)uVar4;
  *(wchar_t *)(local_70 + 4) = L'\0';
  puVar5 = DAT_18002af60;
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_70);
    uVar14 = uStack_58;
  }
  else {
    *DAT_18002af60 = (ulonglong)local_70;
    puVar5[1] = uStack_68;
    puVar5[2] = 0x10;
    puVar5[3] = 0x17;
    local_70 = (wchar_t *******)((ulonglong)local_70 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    uVar14 = 7;
  }
  if (7 < uVar14) {
    ppppppppwVar11 = (wchar_t ********)local_70;
    if ((0xfff < uVar14 * 2 + 2) &&
       (ppppppppwVar11 = (wchar_t ********)local_70[-1],
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppppppwVar11))))
    goto LAB_180002916;
    free(ppppppppwVar11);
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (*(char *)(param_2 + 0x499) == '\0') {
    FUN_180004a60(&local_98,L"isEnd:false",0xb);
    puVar5 = DAT_18002af60;
    if (DAT_18002af60 == DAT_18002af68) {
      FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    }
    else {
      *DAT_18002af60 = (ulonglong)local_98;
      puVar5[1] = uStack_90;
      puVar5[2] = local_88;
      puVar5[3] = uStack_80;
      local_88 = _DAT_18001c720;
      uStack_80 = _UNK_18001c728;
      local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
      DAT_18002af60 = DAT_18002af60 + 4;
    }
  }
  else {
    FUN_180004a60(&local_98,L"isEnd:true",10);
    puVar5 = DAT_18002af60;
    if (DAT_18002af60 == DAT_18002af68) {
      FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    }
    else {
      *DAT_18002af60 = (ulonglong)local_98;
      puVar5[1] = uStack_90;
      puVar5[2] = local_88;
      puVar5[3] = uStack_80;
      local_88 = _DAT_18001c720;
      uStack_80 = _UNK_18001c728;
      local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
      DAT_18002af60 = DAT_18002af60 + 4;
    }
  }
  FUN_1800040f0((longlong *)&local_98);
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (*(char *)(param_2 + 0x498) == '\0') {
    FUN_180004a60(&local_98,L"valid:false",0xb);
    puVar5 = DAT_18002af60;
    if (DAT_18002af60 == DAT_18002af68) {
      FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    }
    else {
      *DAT_18002af60 = (ulonglong)local_98;
      puVar5[1] = uStack_90;
      puVar5[2] = local_88;
      puVar5[3] = uStack_80;
      local_88 = _DAT_18001c720;
      uStack_80 = _UNK_18001c728;
      local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
      DAT_18002af60 = DAT_18002af60 + 4;
    }
  }
  else {
    FUN_180004a60(&local_98,L"valid:true",10);
    puVar5 = DAT_18002af60;
    if (DAT_18002af60 == DAT_18002af68) {
      FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    }
    else {
      *DAT_18002af60 = (ulonglong)local_98;
      puVar5[1] = uStack_90;
      puVar5[2] = local_88;
      puVar5[3] = uStack_80;
      local_88 = _DAT_18001c720;
      uStack_80 = _UNK_18001c728;
      local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
      DAT_18002af60 = DAT_18002af60 + 4;
    }
  }
  FUN_1800040f0((longlong *)&local_98);
  puVar6 = FUN_180001390(&local_98,*(uint *)(param_2 + 0x4a0));
  ppppppppwVar11 = &local_70;
  pwVar7 = (wchar_t *)
           FUN_1800046c0(ppppppppwVar11,(undefined8 *)L"totalPacketCount:",puVar6,param_4);
  FUN_180003340(ppppppppwVar11,pwVar7);
  if (7 < uStack_80) {
    ppppppppwVar11 = local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (ppppppppwVar11 = (wchar_t ********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppppppwVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppppwVar11);
  }
  puVar6 = FUN_180001390(&local_70,*(uint *)(param_2 + 0x4a0));
  puVar9 = FUN_1800046c0(&local_98,(undefined8 *)L"totalPacketCount:",puVar6,param_4);
  puVar5 = DAT_18002af60;
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,puVar9);
  }
  else {
    *DAT_18002af60 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    uVar14 = puVar9[1];
    *puVar5 = *puVar9;
    puVar5[1] = uVar14;
    uVar14 = puVar9[3];
    puVar5[2] = puVar9[2];
    puVar5[3] = uVar14;
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    DAT_18002af60 = DAT_18002af60 + 4;
  }
  if (7 < uStack_80) {
    ppppppppwVar11 = local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (ppppppppwVar11 = (wchar_t ********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppppppwVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppppwVar11);
  }
  local_88 = _DAT_18001c720;
  uStack_80 = _UNK_18001c728;
  local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
  if (7 < uStack_58) {
    ppppppppwVar11 = (wchar_t ********)local_70;
    if ((0xfff < uStack_58 * 2 + 2) &&
       (ppppppppwVar11 = (wchar_t ********)local_70[-1],
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppppppwVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppppwVar11);
  }
  puVar6 = (undefined8 *)(param_2 + 0x2f8);
  lVar1 = *(longlong *)(param_2 + 0x308);
  if (0x7ffffffffffffffeU - lVar1 < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  puVar16 = puVar6;
  if (7 < *(ulonglong *)(param_2 + 0x310)) {
    puVar16 = (undefined8 *)*puVar6;
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = lVar1 + 7;
  uVar15 = 7;
  pppppppppwVar10 = &local_98;
  if (7 < uVar14) {
    uVar15 = uVar14 | 7;
    if (uVar15 < 0x7fffffffffffffff) {
      if (uVar15 < 10) {
        uVar15 = 10;
      }
    }
    else {
      uVar15 = 0x7ffffffffffffffe;
    }
    pppppppppwVar10 = (wchar_t *********)FUN_180004ec0(0x7ffffffffffffffe,uVar15 + 1);
    local_98 = (wchar_t ********)pppppppppwVar10;
  }
  local_88 = uVar14;
  uStack_80 = uVar15;
  *pppppppppwVar10 = (wchar_t ********)u_icName__18001b7e8._0_8_;
  *(undefined4 *)(pppppppppwVar10 + 1) = u_icName__18001b7e8._8_4_;
  *(wchar_t *)((longlong)pppppppppwVar10 + 0xc) = u_icName__18001b7e8[6];
  pwVar7 = (wchar_t *)((longlong)pppppppppwVar10 + 0xe);
  memcpy(pwVar7,puVar16,lVar1 * 2);
  *(wchar_t *)((longlong)pppppppppwVar10 + uVar14 * 2) = L'\0';
  FUN_180003340(pwVar7,(wchar_t *)&local_98);
  lVar1 = *(longlong *)(param_2 + 0x308);
  if (0x7ffffffffffffffeU - lVar1 < 7) goto LAB_18000295f;
  if (7 < *(ulonglong *)(param_2 + 0x310)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = lVar1 + 7;
  uVar15 = 7;
  pppppppppwVar10 = &local_98;
  pppppppppwVar12 = (wchar_t *********)local_98;
  if (7 < uVar14) {
    uVar15 = uVar14 | 7;
    if (uVar15 < 0x7fffffffffffffff) {
      if (uVar15 < 10) {
        uVar15 = 10;
      }
      if (0x7fffffffffffffff < uVar15 + 1) goto LAB_180002959;
      uVar13 = (uVar15 + 1) * 2;
      if (uVar13 < 0x1000) {
        pppppppppwVar10 = (wchar_t *********)0x0;
        pppppppppwVar12 = (wchar_t *********)0x0;
        if (uVar13 != 0) {
          pppppppppwVar10 = (wchar_t *********)FUN_180018824(uVar13);
          pppppppppwVar12 = pppppppppwVar10;
        }
        goto LAB_180002069;
      }
    }
    else {
      uVar15 = 0x7ffffffffffffffe;
      uVar13 = 0xfffffffffffffffe;
    }
    if (uVar13 + 0x27 <= uVar13) goto LAB_180002959;
    ppppppppwVar11 = (wchar_t ********)FUN_180018824(uVar13 + 0x27);
    if (ppppppppwVar11 == (wchar_t ********)0x0) goto LAB_180002916;
    pppppppppwVar10 = (wchar_t *********)((longlong)ppppppppwVar11 + 0x27U & 0xffffffffffffffe0);
    pppppppppwVar10[-1] = ppppppppwVar11;
    pppppppppwVar12 = pppppppppwVar10;
  }
LAB_180002069:
  local_98 = (wchar_t ********)pppppppppwVar12;
  local_88 = uVar14;
  uStack_80 = uVar15;
  *pppppppppwVar10 = (wchar_t ********)u_icName__18001b7e8._0_8_;
  *(undefined4 *)(pppppppppwVar10 + 1) = u_icName__18001b7e8._8_4_;
  *(wchar_t *)((longlong)pppppppppwVar10 + 0xc) = u_icName__18001b7e8[6];
  memcpy((wchar_t *)((longlong)pppppppppwVar10 + 0xe),puVar6,lVar1 * 2);
  puVar5 = DAT_18002af60;
  *(wchar_t *)((longlong)pppppppppwVar10 + uVar14 * 2) = L'\0';
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    uVar14 = uStack_80;
  }
  else {
    *DAT_18002af60 = (ulonglong)local_98;
    puVar5[1] = uStack_90;
    puVar5[2] = local_88;
    puVar5[3] = uStack_80;
    local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    uVar14 = 7;
  }
  if (7 < uVar14) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uVar14 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10))))
    goto LAB_180002916;
    free(pppppppppwVar10);
  }
  lVar1 = local_48;
  puVar6 = (undefined8 *)(local_48 + 0x338);
  ppppppppwVar11 = &local_70;
  puVar16 = puVar6;
  pwVar7 = (wchar_t *)FUN_180004810(ppppppppwVar11,0x18001b7f8,puVar6);
  FUN_180003340(ppppppppwVar11,pwVar7);
  if (0x7ffffffffffffffeU - *(longlong *)(lVar1 + 0x348) < 0x12) goto LAB_18000295f;
  if (7 < *(ulonglong *)(lVar1 + 0x350)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_180004df0(&local_98,pwVar7,puVar16,L"bootInputEndPoint:",0x12,puVar6,
                *(longlong *)(lVar1 + 0x348));
  puVar5 = DAT_18002af60;
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    uVar14 = uStack_80;
  }
  else {
    *DAT_18002af60 = (ulonglong)local_98;
    puVar5[1] = uStack_90;
    puVar5[2] = local_88;
    puVar5[3] = uStack_80;
    local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    uVar14 = 7;
  }
  if (7 < uVar14) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uVar14 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10))))
    goto LAB_180002916;
    free(pppppppppwVar10);
  }
  puVar6 = (undefined8 *)(lVar1 + 0x358);
  ppppppppwVar11 = &local_70;
  puVar16 = puVar6;
  pwVar7 = (wchar_t *)FUN_180004810(ppppppppwVar11,0x18001b820,puVar6);
  FUN_180003340(ppppppppwVar11,pwVar7);
  if (0x7ffffffffffffffeU - *(longlong *)(lVar1 + 0x368) < 0x13) goto LAB_18000295f;
  if (7 < *(ulonglong *)(lVar1 + 0x370)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_180004df0(&local_98,pwVar7,puVar16,L"bootOutputEndPoint:",0x13,puVar6,
                *(longlong *)(lVar1 + 0x368));
  puVar5 = DAT_18002af60;
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    uVar14 = uStack_80;
  }
  else {
    *DAT_18002af60 = (ulonglong)local_98;
    puVar5[1] = uStack_90;
    puVar5[2] = local_88;
    puVar5[3] = uStack_80;
    local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    uVar14 = 7;
  }
  if (7 < uVar14) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uVar14 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10))))
    goto LAB_180002916;
    free(pppppppppwVar10);
  }
  puVar6 = (undefined8 *)(lVar1 + 0x378);
  ppppppppwVar11 = &local_70;
  puVar16 = puVar6;
  pwVar7 = (wchar_t *)FUN_180004810(ppppppppwVar11,0x18001b848,puVar6);
  FUN_180003340(ppppppppwVar11,pwVar7);
  if (0x7ffffffffffffffeU - *(longlong *)(lVar1 + 0x388) < 0x14) goto LAB_18000295f;
  if (7 < *(ulonglong *)(lVar1 + 0x390)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_180004df0(&local_98,pwVar7,puVar16,L"normalInputEndPoint:",0x14,puVar6,
                *(longlong *)(lVar1 + 0x388));
  FUN_180004030(&DAT_18002af58,(longlong *)&local_98);
  if (7 < uStack_80) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10))))
    goto LAB_180002916;
    free(pppppppppwVar10);
  }
  puVar6 = (undefined8 *)(lVar1 + 0x398);
  ppppppppwVar11 = &local_70;
  puVar16 = puVar6;
  pwVar7 = (wchar_t *)FUN_180004810(ppppppppwVar11,0x18001b878,puVar6);
  FUN_180003340(ppppppppwVar11,pwVar7);
  if (0x7ffffffffffffffeU - *(longlong *)(lVar1 + 0x3a8) < 0x15) goto LAB_18000295f;
  if (7 < *(ulonglong *)(lVar1 + 0x3b0)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  FUN_180004df0(&local_98,pwVar7,puVar16,L"normalOutputEndPoint:",0x15,puVar6,
                *(longlong *)(lVar1 + 0x3a8));
  FUN_180004030(&DAT_18002af58,(longlong *)&local_98);
  if (7 < uStack_80) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10))))
    goto LAB_180002916;
    free(pppppppppwVar10);
  }
  puVar6 = (undefined8 *)(lVar1 + 0x3b8);
  lVar2 = *(longlong *)(lVar1 + 0x3c8);
  if (0x7ffffffffffffffeU - lVar2 < 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  puVar16 = puVar6;
  if (7 < *(ulonglong *)(lVar1 + 0x3d0)) {
    puVar16 = (undefined8 *)*puVar6;
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = lVar2 + 0xb;
  uVar15 = 7;
  pppppppppwVar10 = &local_98;
  if (7 < uVar14) {
    uVar15 = uVar14 | 7;
    if (uVar15 < 0x7fffffffffffffff) {
      if (uVar15 < 10) {
        uVar15 = 10;
      }
    }
    else {
      uVar15 = 0x7ffffffffffffffe;
    }
    pppppppppwVar10 = (wchar_t *********)FUN_180004ec0(0x7ffffffffffffffe,uVar15 + 1);
    local_98 = (wchar_t ********)pppppppppwVar10;
  }
  local_88 = uVar14;
  uStack_80 = uVar15;
  *pppppppppwVar10 = (wchar_t ********)u_senserName__18001b8a8._0_8_;
  pppppppppwVar10[1] = (wchar_t ********)u_senserName__18001b8a8._8_8_;
  *(undefined4 *)(pppppppppwVar10 + 2) = u_senserName__18001b8a8._16_4_;
  *(wchar_t *)((longlong)pppppppppwVar10 + 0x14) = u_senserName__18001b8a8[10];
  pwVar7 = (wchar_t *)((longlong)pppppppppwVar10 + 0x16);
  memcpy(pwVar7,puVar16,lVar2 * 2);
  *(wchar_t *)((longlong)pppppppppwVar10 + uVar14 * 2) = L'\0';
  FUN_180003340(pwVar7,(wchar_t *)&local_98);
  lVar2 = *(longlong *)(lVar1 + 0x3c8);
  if (0x7ffffffffffffffeU - lVar2 < 0xb) goto LAB_18000295f;
  if (7 < *(ulonglong *)(lVar1 + 0x3d0)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = lVar2 + 0xb;
  uVar15 = 7;
  pppppppppwVar10 = &local_98;
  pppppppppwVar12 = (wchar_t *********)local_98;
  if (7 < uVar14) {
    uVar15 = uVar14 | 7;
    if (uVar15 < 0x7fffffffffffffff) {
      if (uVar15 < 10) {
        uVar15 = 10;
      }
      if (0x7fffffffffffffff < uVar15 + 1) goto LAB_180002959;
      uVar13 = (uVar15 + 1) * 2;
      if (uVar13 < 0x1000) {
        pppppppppwVar10 = (wchar_t *********)0x0;
        pppppppppwVar12 = (wchar_t *********)0x0;
        if (uVar13 != 0) {
          pppppppppwVar10 = (wchar_t *********)FUN_180018824(uVar13);
          pppppppppwVar12 = pppppppppwVar10;
        }
        goto LAB_18000260f;
      }
    }
    else {
      uVar15 = 0x7ffffffffffffffe;
      uVar13 = 0xfffffffffffffffe;
    }
    if (uVar13 + 0x27 <= uVar13) goto LAB_180002959;
    ppppppppwVar11 = (wchar_t ********)FUN_180018824(uVar13 + 0x27);
    if (ppppppppwVar11 == (wchar_t ********)0x0) goto LAB_180002916;
    pppppppppwVar10 = (wchar_t *********)((longlong)ppppppppwVar11 + 0x27U & 0xffffffffffffffe0);
    pppppppppwVar10[-1] = ppppppppwVar11;
    pppppppppwVar12 = pppppppppwVar10;
  }
LAB_18000260f:
  local_98 = (wchar_t ********)pppppppppwVar12;
  local_88 = uVar14;
  uStack_80 = uVar15;
  *pppppppppwVar10 = (wchar_t ********)u_senserName__18001b8a8._0_8_;
  pppppppppwVar10[1] = (wchar_t ********)u_senserName__18001b8a8._8_8_;
  *(undefined4 *)(pppppppppwVar10 + 2) = u_senserName__18001b8a8._16_4_;
  *(wchar_t *)((longlong)pppppppppwVar10 + 0x14) = u_senserName__18001b8a8[10];
  memcpy((wchar_t *)((longlong)pppppppppwVar10 + 0x16),puVar6,lVar2 * 2);
  puVar5 = DAT_18002af60;
  *(wchar_t *)((longlong)pppppppppwVar10 + uVar14 * 2) = L'\0';
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    uVar14 = uStack_80;
  }
  else {
    *DAT_18002af60 = (ulonglong)local_98;
    puVar5[1] = uStack_90;
    puVar5[2] = local_88;
    puVar5[3] = uStack_80;
    local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    uVar14 = 7;
  }
  if (7 < uVar14) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uVar14 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10))))
    goto LAB_180002916;
    free(pppppppppwVar10);
  }
  lVar2 = local_48;
  puVar6 = (undefined8 *)(local_48 + 0x3d8);
  lVar1 = *(longlong *)(local_48 + 1000);
  if (0x7ffffffffffffffeU - lVar1 < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  puVar16 = puVar6;
  if (7 < *(ulonglong *)(local_48 + 0x3f0)) {
    puVar16 = (undefined8 *)*puVar6;
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = lVar1 + 0xc;
  uVar15 = 7;
  pppppppppwVar10 = &local_98;
  if (7 < uVar14) {
    uVar15 = uVar14 | 7;
    if (uVar15 < 0x7fffffffffffffff) {
      if (uVar15 < 10) {
        uVar15 = 10;
      }
    }
    else {
      uVar15 = 0x7ffffffffffffffe;
    }
    pppppppppwVar10 = (wchar_t *********)FUN_180004ec0(0x7ffffffffffffffe,uVar15 + 1);
    local_98 = (wchar_t ********)pppppppppwVar10;
  }
  local_88 = uVar14;
  uStack_80 = uVar15;
  *pppppppppwVar10 = (wchar_t ********)u_productName__18001b8c0._0_8_;
  pppppppppwVar10[1] = (wchar_t ********)u_productName__18001b8c0._8_8_;
  pppppppppwVar10[2] = (wchar_t ********)u_productName__18001b8c0._16_8_;
  pppppppppwVar12 = pppppppppwVar10 + 3;
  memcpy(pppppppppwVar12,puVar16,lVar1 * 2);
  *(wchar_t *)((longlong)pppppppppwVar10 + uVar14 * 2) = L'\0';
  FUN_180003340(pppppppppwVar12,(wchar_t *)&local_98);
  lVar1 = *(longlong *)(lVar2 + 1000);
  if (0x7ffffffffffffffeU - lVar1 < 0xc) {
LAB_18000295f:
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  if (7 < *(ulonglong *)(lVar2 + 0x3f0)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  local_98 = (wchar_t ********)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar14 = lVar1 + 0xc;
  uVar15 = 7;
  pppppppppwVar10 = &local_98;
  pppppppppwVar12 = (wchar_t *********)local_98;
  if (7 < uVar14) {
    uVar15 = uVar14 | 7;
    if (uVar15 < 0x7fffffffffffffff) {
      if (uVar15 < 10) {
        uVar15 = 10;
      }
      if (0x7fffffffffffffff < uVar15 + 1) goto LAB_180002959;
      uVar13 = (uVar15 + 1) * 2;
      if (uVar13 < 0x1000) {
        pppppppppwVar10 = (wchar_t *********)0x0;
        pppppppppwVar12 = (wchar_t *********)0x0;
        if (uVar13 != 0) {
          pppppppppwVar10 = (wchar_t *********)FUN_180018824(uVar13);
          pppppppppwVar12 = pppppppppwVar10;
        }
        goto LAB_18000286d;
      }
    }
    else {
      uVar15 = 0x7ffffffffffffffe;
      uVar13 = 0xfffffffffffffffe;
    }
    if (uVar13 + 0x27 <= uVar13) {
LAB_180002959:
      uStack_80 = 0;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = (wchar_t ********)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_1800012d0();
    }
    ppppppppwVar11 = (wchar_t ********)FUN_180018824(uVar13 + 0x27);
    if (ppppppppwVar11 == (wchar_t ********)0x0) goto LAB_180002916;
    pppppppppwVar10 = (wchar_t *********)((longlong)ppppppppwVar11 + 0x27U & 0xffffffffffffffe0);
    pppppppppwVar10[-1] = ppppppppwVar11;
    pppppppppwVar12 = pppppppppwVar10;
  }
LAB_18000286d:
  local_98 = (wchar_t ********)pppppppppwVar12;
  local_88 = uVar14;
  uStack_80 = uVar15;
  *pppppppppwVar10 = (wchar_t ********)u_productName__18001b8c0._0_8_;
  pppppppppwVar10[1] = (wchar_t ********)u_productName__18001b8c0._8_8_;
  pppppppppwVar10[2] = (wchar_t ********)u_productName__18001b8c0._16_8_;
  memcpy(pppppppppwVar10 + 3,puVar6,lVar1 * 2);
  puVar5 = DAT_18002af60;
  *(wchar_t *)((longlong)pppppppppwVar10 + uVar14 * 2) = L'\0';
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,(longlong *)DAT_18002af60,&local_98);
    uVar14 = uStack_80;
  }
  else {
    *DAT_18002af60 = (ulonglong)local_98;
    puVar5[1] = uStack_90;
    puVar5[2] = local_88;
    puVar5[3] = uStack_80;
    local_98 = (wchar_t ********)((ulonglong)local_98 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    uVar14 = 7;
  }
  if (7 < uVar14) {
    pppppppppwVar10 = (wchar_t *********)local_98;
    if ((0xfff < uVar14 * 2 + 2) &&
       (pppppppppwVar10 = (wchar_t *********)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppppwVar10)))) {
LAB_180002916:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppppppwVar10);
  }
  FUN_180002980(local_48);
  return;
}



// FUNCTION 180002980 FUN_180002980
// THUNK false
// CALLS 1800187f0 free
// CALLS 180004560 FUN_180004560
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_180002980(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_180004560((longlong *)(param_1 + 0x4a8));
  if (7 < *(ulonglong *)(param_1 + 0x490)) {
    pvVar1 = *(void **)(param_1 + 0x478);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x490) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x490) = 7;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined2 *)(param_1 + 0x478) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x470)) {
    pvVar1 = *(void **)(param_1 + 0x458);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x470) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 7;
  *(undefined2 *)(param_1 + 0x458) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x450)) {
    pvVar1 = *(void **)(param_1 + 0x438);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x450) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 7;
  *(undefined2 *)(param_1 + 0x438) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x430)) {
    pvVar1 = *(void **)(param_1 + 0x418);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x430) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 7;
  *(undefined2 *)(param_1 + 0x418) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x410)) {
    pvVar1 = *(void **)(param_1 + 0x3f8);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x410) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 7;
  *(undefined2 *)(param_1 + 0x3f8) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x3f0)) {
    pvVar1 = *(void **)(param_1 + 0x3d8);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x3f0) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 7;
  *(undefined2 *)(param_1 + 0x3d8) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x3d0)) {
    pvVar1 = *(void **)(param_1 + 0x3b8);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x3d0) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 7;
  *(undefined2 *)(param_1 + 0x3b8) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x3b0)) {
    pvVar1 = *(void **)(param_1 + 0x398);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x3b0) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 7;
  *(undefined2 *)(param_1 + 0x398) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x390)) {
    pvVar1 = *(void **)(param_1 + 0x378);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x390) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 7;
  *(undefined2 *)(param_1 + 0x378) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x370)) {
    pvVar1 = *(void **)(param_1 + 0x358);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x370) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 7;
  *(undefined2 *)(param_1 + 0x358) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x350)) {
    pvVar1 = *(void **)(param_1 + 0x338);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x350) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 7;
  *(undefined2 *)(param_1 + 0x338) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x330)) {
    pvVar1 = *(void **)(param_1 + 0x318);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x330) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180002e75;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 7;
  *(undefined2 *)(param_1 + 0x318) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x310)) {
    pvVar1 = *(void **)(param_1 + 0x2f8);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x310) * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_180002e75:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 7;
  *(undefined2 *)(param_1 + 0x2f8) = 0;
  return;
}



// FUNCTION 180002e80 FUN_180002e80
// THUNK false
// CALLS 180001520 FUN_180001520
// CALLS 180019709 memmove
// CALLS 1800187f0 free
// CALLS 180004c80 FUN_180004c80
// CALLS 1800184f0 FUN_1800184f0
// CALLS 180005280 FUN_180005280
// CALLS 180004620 FUN_180004620
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180002f22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002e80(wchar_t ********param_1,longlong *param_2,longlong param_3)

{
  void *pvVar1;
  byte bVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  wchar_t *******pppppppwVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  wchar_t *********_Memory;
  wchar_t ******ppppppwVar10;
  void *_Memory_00;
  short sVar11;
  longlong *plVar12;
  undefined8 ***pppuVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  wchar_t **********ppppppppppwVar18;
  ulonglong uVar19;
  wchar_t *******pppppppwVar20;
  wchar_t **********ppppppppppwVar21;
  undefined1 auStackY_118 [32];
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined8 **local_c0;
  undefined8 **ppuStack_b8;
  undefined8 **local_b0;
  undefined8 **ppuStack_a8;
  wchar_t ******local_a0 [3];
  ulonglong local_88;
  longlong *local_80;
  wchar_t *********local_78;
  wchar_t ******ppppppwStack_70;
  wchar_t ******local_68;
  wchar_t ******ppppppwStack_60;
  wchar_t *********local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStackY_118;
  lVar15 = 0;
  lVar16 = param_3;
  local_80 = param_2;
  if (param_3 == 0) {
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 7;
    local_58 = (wchar_t *********)0x0;
  }
  else {
    ppppppwStack_70 = (wchar_t ******)0x0;
    local_68 = (wchar_t ******)_DAT_18001c720;
    ppppppwStack_60 = (wchar_t ******)_UNK_18001c728;
    local_78 = (wchar_t *********)0x0;
    do {
      bVar2 = *(byte *)(lVar15 + param_3) >> 4;
      uVar14 = *(byte *)(lVar15 + param_3) & 0xf;
      sVar11 = 0x30;
      if (9 < bVar2) {
        sVar11 = 0x57;
      }
      FUN_1800184f0(&local_78,sVar11 + (ushort)bVar2);
      sVar11 = 0x30;
      if (9 < uVar14) {
        sVar11 = 0x57;
      }
      FUN_1800184f0(&local_78,sVar11 + uVar14);
      param_1 = (wchar_t ********)&local_78;
      FUN_1800184f0(param_1,0x20);
      lVar15 = lVar15 + 1;
    } while (lVar15 < 8);
    local_58 = local_78;
    uStack_50 = ppppppwStack_70;
    local_48 = (ulonglong)local_68;
    uStack_40 = (ulonglong)ppppppwStack_60;
  }
  uVar19 = uStack_40;
  uVar5 = local_48;
  pppppppwVar6 = FUN_180001520(param_1,local_a0);
  ppppppwVar10 = pppppppwVar6[2];
  if ((ulonglong)((longlong)pppppppwVar6[3] - (longlong)ppppppwVar10) < 3) {
    pppppppwVar6 = (wchar_t *******)FUN_180004c80(pppppppwVar6,3,lVar16,&DAT_18001b8e0,3);
  }
  else {
    pppppppwVar6[2] = (wchar_t ******)((longlong)ppppppwVar10 + 3);
    pppppppwVar20 = pppppppwVar6;
    if ((wchar_t ******)0x7 < pppppppwVar6[3]) {
      pppppppwVar20 = (wchar_t *******)*pppppppwVar6;
    }
    memmove((void *)((longlong)pppppppwVar20 + (longlong)ppppppwVar10 * 2),&DAT_18001b8e0,6);
    *(undefined2 *)((longlong)pppppppwVar20 + ((longlong)ppppppwVar10 + 3) * 2) = 0;
  }
  local_78 = (wchar_t *********)*pppppppwVar6;
  ppppppwStack_70 = pppppppwVar6[1];
  local_68 = pppppppwVar6[2];
  ppppppwStack_60 = pppppppwVar6[3];
  pppppppwVar6[2] = (wchar_t ******)0x0;
  pppppppwVar6[3] = (wchar_t ******)0x7;
  *(undefined2 *)pppppppwVar6 = 0;
  plVar12 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    plVar12 = (longlong *)*param_2;
  }
  uVar17 = param_2[2];
  puVar7 = FUN_180004620(&local_78,plVar12,uVar17);
  ppppppppppwVar21 = (wchar_t **********)local_58;
  local_e8 = (undefined8 ***)*puVar7;
  uStack_e0 = puVar7[1];
  lVar16 = puVar7[2];
  uStack_d0 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 7;
  *(undefined2 *)puVar7 = 0;
  ppppppppppwVar18 = &local_58;
  if (7 < uVar19) {
    ppppppppppwVar18 = (wchar_t **********)local_58;
  }
  if (uStack_d0 - lVar16 < uVar5) {
    local_d8 = lVar16;
    ppppuVar8 = (undefined8 ****)FUN_180004c80(&local_e8,uVar5,uVar17,ppppppppppwVar18,uVar5);
    uVar19 = uStack_40;
    ppppppppppwVar21 = (wchar_t **********)local_58;
  }
  else {
    local_d8 = uVar5 + lVar16;
    ppppuVar8 = &local_e8;
    if (7 < uStack_d0) {
      ppppuVar8 = (undefined8 ****)local_e8;
    }
    memmove((void *)((longlong)ppppuVar8 + lVar16 * 2),ppppppppppwVar18,uVar5 * 2);
    *(undefined2 *)((longlong)ppppuVar8 + (uVar5 + lVar16) * 2) = 0;
    ppppuVar8 = &local_e8;
  }
  plVar12 = DAT_18002af60;
  pppuVar13 = *ppppuVar8;
  pppuVar9 = ppppuVar8[1];
  local_c0 = pppuVar13;
  ppuStack_b8 = pppuVar9;
  pppuVar3 = ppppuVar8[2];
  pppuVar4 = ppppuVar8[3];
  local_b0 = pppuVar3;
  ppuStack_a8 = pppuVar4;
  ppppuVar8[2] = (undefined8 ***)0x0;
  ppppuVar8[3] = (undefined8 ***)0x7;
  *(undefined2 *)ppppuVar8 = 0;
  if (DAT_18002af60 == DAT_18002af68) {
    FUN_180005280(&DAT_18002af58,DAT_18002af60,&local_c0);
    pppuVar13 = (undefined8 ***)ppuStack_a8;
  }
  else {
    *DAT_18002af60 = (longlong)pppuVar13;
    plVar12[1] = (longlong)pppuVar9;
    plVar12[2] = (longlong)pppuVar3;
    plVar12[3] = (longlong)pppuVar4;
    local_c0 = (undefined8 **)((ulonglong)local_c0 & 0xffffffffffff0000);
    DAT_18002af60 = DAT_18002af60 + 4;
    pppuVar13 = (undefined8 ***)0x7;
  }
  if ((undefined8 ***)0x7 < pppuVar13) {
    pppuVar9 = (undefined8 ***)local_c0;
    if ((0xfff < (longlong)pppuVar13 * 2 + 2U) &&
       (pppuVar9 = (undefined8 ***)local_c0[-1],
       0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pppuVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppuVar9);
  }
  if (7 < uStack_d0) {
    ppppuVar8 = (undefined8 ****)local_e8;
    if ((0xfff < uStack_d0 * 2 + 2) &&
       (ppppuVar8 = (undefined8 ****)local_e8[-1],
       0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar8);
  }
  local_d8 = _DAT_18001c720;
  uStack_d0 = _UNK_18001c728;
  local_e8 = (undefined8 ***)((ulonglong)local_e8 & 0xffffffffffff0000);
  if ((wchar_t ******)0x7 < ppppppwStack_60) {
    _Memory = local_78;
    if ((0xfff < (longlong)ppppppwStack_60 * 2 + 2U) &&
       (_Memory = (wchar_t *********)local_78[-1],
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_68 = (wchar_t ******)_DAT_18001c720;
  ppppppwStack_60 = (wchar_t ******)_UNK_18001c728;
  local_78 = (wchar_t *********)((ulonglong)local_78 & 0xffffffffffff0000);
  if (7 < local_88) {
    ppppppwVar10 = local_a0[0];
    if ((0xfff < local_88 * 2 + 2) &&
       (ppppppwVar10 = (wchar_t ******)local_a0[0][-1],
       0x1f < (ulonglong)((longlong)local_a0[0] + (-8 - (longlong)ppppppwVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppwVar10);
  }
  if (7 < uVar19) {
    ppppppppppwVar18 = ppppppppppwVar21;
    if ((0xfff < uVar19 * 2 + 2) &&
       (ppppppppppwVar18 = (wchar_t **********)ppppppppppwVar21[-1],
       0x1f < (ulonglong)((longlong)ppppppppppwVar21 + (-8 - (longlong)ppppppppppwVar18)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppppppwVar18);
  }
  if (7 < (ulonglong)param_2[3]) {
    pvVar1 = (void *)*param_2;
    _Memory_00 = pvVar1;
    if ((0xfff < param_2[3] * 2 + 2U) &&
       (_Memory_00 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_00);
  }
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  return;
}



// FUNCTION 180003340 FUN_180003340
// THUNK false
// CALLS 1800195a8 memset
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000003f operator<<
// CALLS EXTERNAL:00000037 basic_ios<wchar_t,std::char_traits<wchar_t>_>
// CALLS EXTERNAL:00000031 getloc
// CALLS EXTERNAL:00000032 _Init
// CALLS EXTERNAL:00000036 setstate
// CALLS 1800050b0 FUN_1800050b0
// CALLS EXTERNAL:00000035 clear
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS EXTERNAL:00000044 always_noconv
// CALLS EXTERNAL:00000054 _Fiopen
// CALLS 180003fc0 FUN_180003fc0
// CALLS EXTERNAL:00000030 basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
// CALLS EXTERNAL:0000003e ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>
// CALLS 1800044a0 FUN_1800044a0
// CALLS EXTERNAL:00000038 basic_ostream<wchar_t,std::char_traits<wchar_t>_>
// CALLS EXTERNAL:0000003d ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
// CALLS 1800048c0 FUN_1800048c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003340(undefined8 param_1,wchar_t *param_2)

{
  void *pvVar1;
  bool bVar2;
  _iobuf *p_Var3;
  locale *plVar4;
  _Facet_base *this;
  undefined8 *puVar5;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this_00;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar6;
  void *_Memory;
  wchar_t *pwVar7;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined ***local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined **local_130;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_128 [96];
  _Facet_base *local_c8;
  undefined1 local_be;
  undefined8 local_bc;
  undefined1 local_b4;
  _iobuf *local_b0;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_178;
  local_158 = 0;
  local_140 = param_2;
  memset(&local_138,0,0x108);
  local_138 = &DAT_18001b920;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_90);
  local_158 = 1;
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_ostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)&local_138,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130,false);
  *(undefined ***)((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)) =
       std::basic_ofstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
       *(int *)(local_138 + 4) + -0xa8;
  local_150 = &local_130;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
  local_130 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  local_b4 = 0;
  local_be = 0;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
  local_b0 = (_iobuf *)0x0;
  local_bc = DAT_18002af78;
  local_c8 = (_Facet_base *)0x0;
  p_Var3 = std::_Fiopen("dll_log.txt",10,0x40);
  if (p_Var3 == (_iobuf *)0x0) {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               ((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)),2,false);
  }
  else {
    local_b4 = 1;
    local_be = 0;
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init
              ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
    local_bc = DAT_18002af78;
    local_c8 = (_Facet_base *)0x0;
    local_b0 = p_Var3;
    plVar4 = (locale *)
             std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::getloc
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
    this = FUN_1800048c0(plVar4);
    bVar2 = std::codecvt_base::always_noconv((codecvt_base *)this);
    if (bVar2) {
      local_c8 = (_Facet_base *)0x0;
    }
    else {
      local_c8 = this;
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init
                ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
    }
    if ((local_148 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*local_148 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5);
    }
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::clear
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               ((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)),0,false);
  }
  if (local_b0 != (_iobuf *)0x0) {
    pwVar7 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pwVar7 = *(wchar_t **)param_2;
    }
    this_00 = FUN_1800050b0((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)&local_138,pwVar7,
                            *(ulonglong *)(param_2 + 8));
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(this_00,FUN_180004880);
    pbVar6 = FUN_1800044a0((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
    if (pbVar6 == (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
      std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
                ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                 ((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)),2,false);
    }
  }
  *(undefined ***)((longlong)&local_138 + (longlong)*(int *)(local_138 + 4)) =
       std::basic_ofstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138 + 4) + 4) =
       *(int *)(local_138 + 4) + -0xa8;
  FUN_180003fc0((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_130);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>(local_128);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_90);
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pvVar1 = *(void **)param_2;
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0xc) * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_2[8] = L'\0';
  param_2[9] = L'\0';
  param_2[10] = L'\0';
  param_2[0xb] = L'\0';
  param_2[0xc] = L'\a';
  param_2[0xd] = L'\0';
  param_2[0xe] = L'\0';
  param_2[0xf] = L'\0';
  *param_2 = L'\0';
  return;
}



// FUNCTION 180003630 FUN_180003630
// THUNK false
// CALLS 180003fc0 FUN_180003fc0
// CALLS EXTERNAL:0000003e ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>

void FUN_180003630(longlong *param_1)

{
  basic_ios<wchar_t,std::char_traits<wchar_t>_> *this;
  
  this = (basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 0x15);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0xa8) =
       std::basic_ofstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xac) = *(int *)(*param_1 + 4) + -0xa8;
  FUN_180003fc0((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 1));
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00018000368a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (this);
  return;
}



// FUNCTION 1800036a0 FUN_1800036a0
// THUNK false
// CALLS EXTERNAL:00000044 always_noconv
// CALLS 1800048c0 FUN_1800048c0

void FUN_1800036a0(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1,locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_1800048c0(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x0001800036e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init(param_1);
  return;
}



// FUNCTION 1800036f0 FUN_1800036f0
// THUNK false
// CALLS EXTERNAL:00000076 fflush

int FUN_1800036f0(longlong *param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1[0x10] != 0) {
    sVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffff);
    if (sVar1 != -1) {
      iVar2 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar2) - 1;
    }
  }
  return 0;
}



// FUNCTION 180003750 FUN_180003750
// THUNK false
// CALLS EXTERNAL:0000006c setvbuf
// CALLS EXTERNAL:00000032 _Init

basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *
FUN_180003750(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1,char *param_2,
             longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 == (char *)0x0) && (param_3 == 0)) {
    iVar3 = 4;
  }
  else {
    iVar3 = 0;
  }
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    iVar3 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar3,param_3 * 2);
    if (iVar3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      param_1[0x7c] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x1;
      param_1[0x72] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x0;
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init(param_1);
      uVar2 = DAT_18002af78;
      *(undefined8 *)(param_1 + 0x80) = uVar1;
      *(undefined8 *)(param_1 + 0x74) = uVar2;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
}



// FUNCTION 1800037e0 FUN_1800037e0
// THUNK false
// CALLS 1800043b0 FUN_1800043b0
// CALLS EXTERNAL:00000074 fsetpos
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800037e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180023010 ^ (ulonglong)auStack_48;
  local_28 = param_3[1] + *param_3;
  if (((param_1[0x10] != 0) && (bVar3 = FUN_1800043b0(param_1), bVar3)) &&
     (iVar4 = fsetpos((FILE *)param_1[0x10],&local_28), iVar4 == 0)) {
    *(longlong *)((longlong)param_1 + 0x74) = param_3[2];
    if (*(longlong **)param_1[3] == param_1 + 0xe) {
      lVar1 = param_1[0x11];
      lVar2 = param_1[0x12];
      *(longlong *)param_1[3] = lVar1;
      *(longlong *)param_1[7] = lVar1;
      *(int *)param_1[10] = (int)(lVar2 - lVar1 >> 1);
    }
    lVar1 = *(longlong *)((longlong)param_1 + 0x74);
    *param_2 = local_28;
    param_2[2] = lVar1;
    param_2[1] = 0;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1800038c0 FUN_1800038c0
// THUNK false
// CALLS 180004370 Reset_back
// CALLS 1800043b0 FUN_1800043b0
// CALLS EXTERNAL:00000073 _fseeki64
// CALLS EXTERNAL:00000072 fgetpos
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

fpos_t * FUN_1800038c0(longlong *param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  fpos_t fVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  fpos_t local_38;
  ulonglong local_30;
  
  local_30 = DAT_180023010 ^ (ulonglong)auStack_58;
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3 = param_3 + -2;
  }
  if ((((param_1[0x10] != 0) && (bVar2 = FUN_1800043b0(param_1), bVar2)) &&
      (((param_3 == 0 && (param_4 == 1)) ||
       (iVar3 = _fseeki64((FILE *)param_1[0x10],param_3,param_4), iVar3 == 0)))) &&
     (iVar3 = fgetpos((FILE *)param_1[0x10],&local_38), iVar3 == 0)) {
    Reset_back((longlong)param_1);
    fVar1 = *(fpos_t *)((longlong)param_1 + 0x74);
    *param_2 = local_38;
    param_2[1] = 0;
    param_2[2] = fVar1;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1800039a0 xsputn
// THUNK true

// FUNCTION 1800039b0 xsgetn
// THUNK true

// FUNCTION 1800039c0 FUN_1800039c0
// THUNK false
// CALLS EXTERNAL:00000075 ungetc
// CALLS EXTERNAL:00000043 in
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000006f fgetc
// CALLS 180004b20 FUN_180004b20
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000070 fgetwc
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t FUN_1800039c0(longlong param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  char *******pppppppcVar9;
  FILE *_File;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStackY_88 [32];
  char *local_48;
  wchar_t *local_40;
  wchar_t local_38;
  wchar_t local_36 [3];
  char ******local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStackY_88;
  uVar8 = **(ulonglong **)(param_1 + 0x38);
  if (uVar8 != 0) {
    iVar7 = **(int **)(param_1 + 0x50);
    if (uVar8 < uVar8 + (longlong)iVar7 * 2) {
      **(int **)(param_1 + 0x50) = iVar7 + -1;
      pwVar1 = (wchar_t *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pwVar1 + 1);
      return *pwVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    wVar5 = L'\xffff';
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(undefined4 **)(param_1 + 0x50) = (int)(lVar2 - lVar3 >> 1);
    }
    _File = *(FILE **)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      wVar4 = fgetwc(_File);
      wVar5 = L'\xffff';
      if (wVar4 != L'\xffff') {
        wVar5 = wVar4;
      }
    }
    else {
      uStack_28 = 0;
      local_20 = 0;
      local_18 = 0xf;
      local_30 = (char ******)0x0;
      while( true ) {
        uVar6 = fgetc(_File);
        uVar8 = local_20;
        if (uVar6 == 0xffffffff) break;
        if (local_20 < local_18) {
          pppppppcVar9 = &local_30;
          if (0xf < local_18) {
            pppppppcVar9 = (char *******)local_30;
          }
          pcVar11 = (char *)((longlong)pppppppcVar9 + local_20);
          local_20 = local_20 + 1;
          *pcVar11 = (char)uVar6;
          *(char *)((longlong)pppppppcVar9 + uVar8 + 1) = '\0';
        }
        else {
          FUN_180004b20(&local_30,local_18,(ulonglong)uVar6,(char)uVar6);
        }
        pppppppcVar9 = &local_30;
        if (0xf < local_18) {
          pppppppcVar9 = (char *******)local_30;
        }
        iVar7 = std::codecvt<wchar_t,char,_Mbstatet>::in
                          (*(codecvt<wchar_t,char,_Mbstatet> **)(param_1 + 0x68),
                           (_Mbstatet *)(param_1 + 0x74),(char *)pppppppcVar9,
                           (char *)((longlong)pppppppcVar9 + local_20),&local_48,&local_38,local_36,
                           &local_40);
        if ((iVar7 != 0) && (iVar7 != 1)) {
          if (iVar7 == 3) {
            pppppppcVar9 = &local_30;
            if (0xf < local_18) {
              pppppppcVar9 = (char *******)local_30;
            }
            wVar5 = (short)*(char *)pppppppcVar9;
            goto LAB_180003c1a;
          }
          break;
        }
        if (local_40 != &local_38) {
          pppppppcVar9 = &local_30;
          if (0xf < local_18) {
            pppppppcVar9 = (char *******)local_30;
          }
          pcVar11 = (char *)((longlong)pppppppcVar9 + (local_20 - (longlong)local_48));
          while (wVar5 = local_38, 0 < (longlong)pcVar11) {
            pcVar11 = pcVar11 + -1;
            ungetc((int)pcVar11[(longlong)local_48],*(FILE **)(param_1 + 0x80));
          }
          goto LAB_180003c1a;
        }
        pppppppcVar9 = &local_30;
        if (0xf < local_18) {
          pppppppcVar9 = (char *******)local_30;
        }
        uVar8 = (longlong)local_48 - (longlong)pppppppcVar9;
        if (local_20 < (ulonglong)((longlong)local_48 - (longlong)pppppppcVar9)) {
          uVar8 = local_20;
        }
        pppppppcVar9 = &local_30;
        if (0xf < local_18) {
          pppppppcVar9 = (char *******)local_30;
        }
        uVar10 = local_20 - uVar8;
        memmove(pppppppcVar9,(char *)((longlong)pppppppcVar9 + uVar8),uVar10 + 1);
        _File = *(FILE **)(param_1 + 0x80);
        local_20 = uVar10;
      }
      wVar5 = L'\xffff';
LAB_180003c1a:
      if (0xf < local_18) {
        pppppppcVar9 = (char *******)local_30;
        if ((0xfff < local_18 + 1) &&
           (pppppppcVar9 = (char *******)local_30[-1],
           (char *)0x1f < (char *)((longlong)local_30 + (-8 - (longlong)pppppppcVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppppppcVar9);
      }
    }
  }
  return wVar5;
}



// FUNCTION 180003c80 FUN_180003c80
// THUNK false

short FUN_180003c80(longlong *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  
  psVar1 = *(short **)param_1[7];
  if ((psVar1 != (short *)0x0) && (psVar1 < psVar1 + *(int *)param_1[10])) {
    return *psVar1;
  }
  sVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  sVar3 = -1;
  if (sVar2 != -1) {
    (**(code **)(*param_1 + 0x20))(param_1,sVar2);
    sVar3 = sVar2;
  }
  return sVar3;
}



// FUNCTION 180003cf0 FUN_180003cf0
// THUNK false
// CALLS EXTERNAL:00000077 ungetwc

wint_t FUN_180003cf0(longlong param_1,wint_t param_2)

{
  wint_t *pwVar1;
  ulonglong uVar2;
  wint_t *pwVar3;
  wint_t wVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffff || (*(wint_t *)(uVar2 - 2) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -2;
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (wVar4 = ungetwc(param_2,*(FILE **)(param_1 + 0x80)), wVar4 != 0xffff)) {
      return param_2;
    }
    pwVar1 = (wint_t *)(param_1 + 0x70);
    if ((wint_t *)**(longlong **)(param_1 + 0x38) != pwVar1) {
      *pwVar1 = param_2;
      pwVar3 = (wint_t *)**(longlong **)(param_1 + 0x18);
      if (pwVar3 != pwVar1) {
        *(wint_t **)(param_1 + 0x88) = pwVar3;
        *(longlong *)(param_1 + 0x90) =
             **(longlong **)(param_1 + 0x38) + (longlong)**(int **)(param_1 + 0x50) * 2;
      }
      **(longlong **)(param_1 + 0x18) = (longlong)pwVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)pwVar1;
      **(undefined4 **)(param_1 + 0x50) = 1;
      return param_2;
    }
  }
  return 0xffff;
}



// FUNCTION 180003df0 FUN_180003df0
// THUNK false
// CALLS EXTERNAL:00000042 out
// CALLS EXTERNAL:00000071 fwrite
// CALLS EXTERNAL:00000034 _Pninc
// CALLS EXTERNAL:00000078 fputwc
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t FUN_180003df0(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1,wchar_t param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  wint_t wVar4;
  wchar_t wVar5;
  int iVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  wchar_t _Ch;
  size_t _Count;
  undefined1 auStackY_98 [32];
  char *local_58;
  wchar_t *local_50;
  wchar_t local_48;
  wchar_t local_46 [3];
  char local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180023010 ^ (ulonglong)auStackY_98;
  if (param_2 == L'\xffff') {
    wVar5 = L'\0';
  }
  else {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar1 == 0) || (uVar1 + (longlong)**(int **)(param_1 + 0x58) * 2 <= uVar1)) {
      wVar5 = L'\xffff';
      if (*(longlong *)(param_1 + 0x80) != 0) {
        if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)**(longlong **)(param_1 + 0x18)
            == param_1 + 0x70) {
          lVar2 = *(longlong *)(param_1 + 0x88);
          lVar3 = *(longlong *)(param_1 + 0x90);
          **(longlong **)(param_1 + 0x18) = lVar2;
          **(longlong **)(param_1 + 0x38) = lVar2;
          **(undefined4 **)(param_1 + 0x50) = (int)(lVar3 - lVar2 >> 1);
        }
        _Ch = param_2;
        if (*(codecvt<wchar_t,char,_Mbstatet> **)(param_1 + 0x68) !=
            (codecvt<wchar_t,char,_Mbstatet> *)0x0) {
          local_48 = param_2;
          iVar6 = std::codecvt<wchar_t,char,_Mbstatet>::out
                            (*(codecvt<wchar_t,char,_Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),&local_48,local_46,&local_50,local_40,
                             (char *)&local_20,&local_58);
          if ((iVar6 == 0) || (iVar6 == 1)) {
            _Count = (longlong)local_58 - (longlong)local_40;
            if ((_Count != 0) &&
               (sVar8 = fwrite(local_40,1,_Count,*(FILE **)(param_1 + 0x80)), _Count != sVar8)) {
              return L'\xffff';
            }
            param_1[0x72] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x1;
            if (local_50 == &local_48) {
              return L'\xffff';
            }
            return param_2;
          }
          _Ch = local_48;
          if (iVar6 != 3) {
            return L'\xffff';
          }
        }
        wVar4 = fputwc(_Ch,*(FILE **)(param_1 + 0x80));
        if (wVar4 != 0xffff) {
          wVar5 = param_2;
        }
      }
    }
    else {
      pwVar7 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc(param_1);
      *pwVar7 = param_2;
      wVar5 = param_2;
    }
  }
  return wVar5;
}



// FUNCTION 180003f80 FUN_180003f80
// THUNK false

void FUN_180003f80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file();
    return;
  }
  return;
}



// FUNCTION 180003fa0 FUN_180003fa0
// THUNK false

void FUN_180003fa0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _lock_file();
    return;
  }
  return;
}



// FUNCTION 180003fc0 FUN_180003fc0
// THUNK false
// CALLS 1800044a0 FUN_1800044a0

void FUN_180003fc0(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(undefined4 **)(param_1 + 0x50) = (int)(lVar1 - lVar2 >> 1);
  }
  if (param_1[0x7c] != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x0) {
    FUN_1800044a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000180004025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(param_1);
  return;
}



// FUNCTION 180004030 FUN_180004030
// THUNK false
// CALLS 180005280 FUN_180005280

void FUN_180004030(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)param_1[2]) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    lVar2 = param_2[1];
    *plVar1 = *param_2;
    plVar1[1] = lVar2;
    lVar2 = param_2[3];
    plVar1[2] = param_2[2];
    plVar1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  FUN_180005280(param_1,plVar1,param_2);
  return;
}



// FUNCTION 180004080 FUN_180004080
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_180004080(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_1800049d0((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1800040f0 FUN_1800040f0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_1800040f0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



// FUNCTION 180004160 FUN_180004160
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy

undefined8 * FUN_180004160(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined8 *puVar3;
  undefined8 *_Src;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = param_2;
  if (7 < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  if (uVar1 < 0x7fffffffffffffff) {
    param_1[3] = 7;
    if (uVar1 < 8) {
      param_1[2] = uVar1;
      memmove(param_1,_Src,0x10);
      return param_1;
    }
    uVar2 = uVar1 | 7;
    puVar3 = param_1;
    uVar4 = 0x7ffffffffffffffe;
    if ((uVar2 < 0x7fffffffffffffff) && (puVar3 = (undefined8 *)0xa, uVar4 = uVar2, uVar2 < 10)) {
      uVar4 = 10;
    }
    _Dst = (void *)FUN_180004ec0(puVar3,uVar4 + 1);
    *param_1 = _Dst;
    param_1[2] = uVar1;
    param_1[3] = uVar4;
    memcpy(_Dst,_Src,uVar1 * 2 + 2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001370();
}



// FUNCTION 180004230 FUN_180004230
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_180004230(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 180004290 FUN_180004290
// THUNK false
// CALLS 180003fc0 FUN_180003fc0
// CALLS 1800187f0 free

basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *
FUN_180004290(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1,uint param_2)

{
  FUN_180003fc0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1800042d0 FUN_1800042d0
// THUNK false
// CALLS 180003fc0 FUN_180003fc0
// CALLS EXTERNAL:0000003e ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000003d ~basic_ios<wchar_t,std::char_traits<wchar_t>_>

basic_ios<wchar_t,std::char_traits<wchar_t>_> *
FUN_1800042d0(basic_ios<wchar_t,std::char_traits<wchar_t>_> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xa8) =
       std::basic_ofstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xac) =
       *(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xa8;
  FUN_180003fc0((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + -0xa0));
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + -0x98));
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0xa8);
  }
  return param_1 + -0xa8;
}



// FUNCTION 180004370 Reset_back
// THUNK false

/* Library Function - Multiple Matches With Same Base Name
    private: void __cdecl std::basic_filebuf<unsigned short,struct std::char_traits<unsigned short>
   >::_Reset_back(void) __ptr64
    private: void __cdecl std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Reset_back(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void Reset_back(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(undefined4 **)(param_1 + 0x50) = (int)(lVar2 - lVar1 >> 1);
  }
  return;
}



// FUNCTION 1800043b0 FUN_1800043b0
// THUNK false
// CALLS EXTERNAL:00000071 fwrite
// CALLS EXTERNAL:00000041 unshift
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800043b0(longlong *param_1)

{
  short sVar1;
  int iVar2;
  size_t sVar3;
  size_t _Count;
  undefined1 auStackY_68 [32];
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStackY_68;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x72) == '\0')) {
    return true;
  }
  sVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffff);
  if (sVar1 != -1) {
    iVar2 = std::codecvt<wchar_t,char,_Mbstatet>::unshift
                      ((codecvt<wchar_t,char,_Mbstatet> *)param_1[0xd],
                       (_Mbstatet *)((longlong)param_1 + 0x74),local_30,(char *)&local_10,&local_38)
    ;
    if (iVar2 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    }
    else if (iVar2 != 1) {
      if (iVar2 != 3) {
        return false;
      }
      *(undefined1 *)((longlong)param_1 + 0x72) = 0;
      return true;
    }
    _Count = (longlong)local_38 - (longlong)local_30;
    if ((_Count == 0) || (sVar3 = fwrite(local_30,1,_Count,(FILE *)param_1[0x10]), _Count == sVar3))
    {
      return *(char *)((longlong)param_1 + 0x72) == '\0';
    }
  }
  return false;
}



// FUNCTION 1800044a0 FUN_1800044a0
// THUNK false
// CALLS EXTERNAL:0000006d fclose
// CALLS 1800043b0 FUN_1800043b0
// CALLS EXTERNAL:00000032 _Init

basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *
FUN_1800044a0(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar5;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)**(longlong **)(param_1 + 0x18) ==
        param_1 + 0x70) {
      lVar1 = *(longlong *)(param_1 + 0x90);
      lVar2 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(undefined4 **)(param_1 + 0x50) = (int)(lVar1 - lVar2 >> 1);
    }
    bVar3 = FUN_1800043b0((longlong *)param_1);
    pbVar5 = param_1;
    if (!bVar3) {
      pbVar5 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
    }
    iVar4 = fclose(*(FILE **)(param_1 + 0x80));
    if (iVar4 == 0) goto LAB_180004518;
  }
  pbVar5 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
LAB_180004518:
  param_1[0x7c] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x0;
  param_1[0x72] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x0;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init(param_1);
  *(undefined8 *)(param_1 + 0x74) = DAT_18002af78;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return pbVar5;
}



// FUNCTION 180004560 FUN_180004560
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_180004560(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 1) * 2)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1800045d0 FUN_1800045d0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_1800045d0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 << 5)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}



// FUNCTION 180004620 FUN_180004620
// THUNK false
// CALLS 180019709 memmove
// CALLS 180004c80 FUN_180004c80

undefined8 * FUN_180004620(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    memmove((void *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
    return param_1;
  }
  puVar2 = FUN_180004c80(param_1,param_3,param_3,param_2,param_3);
  return puVar2;
}



// FUNCTION 1800046a0 FUN_1800046a0
// THUNK false
// CALLS EXTERNAL:00000056 _Xout_of_range

void FUN_1800046a0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1800046c0 FUN_1800046c0
// THUNK false
// CALLS 1800054b0 FUN_1800054b0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy

undefined8 *
FUN_1800046c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *_Src;
  ulonglong uVar4;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(short *)((longlong)param_2 + uVar3 * 2) != 0);
  lVar1 = param_3[2];
  if ((ulonglong)(param_3[3] - lVar1) < uVar3) {
    param_3 = FUN_1800054b0(param_3,uVar3,param_3,param_4,param_2,uVar3);
  }
  else {
    param_3[2] = lVar1 + uVar3;
    _Src = param_3;
    if (7 < (ulonglong)param_3[3]) {
      _Src = (undefined8 *)*param_3;
    }
    uVar4 = uVar3;
    if (((_Src < (undefined8 *)((longlong)param_2 + uVar3 * 2)) &&
        (param_2 <= (undefined8 *)(lVar1 * 2 + (longlong)_Src))) && (uVar4 = 0, param_2 < _Src)) {
      uVar4 = (longlong)_Src - (longlong)param_2 >> 1;
    }
    memmove((void *)(uVar3 * 2 + (longlong)_Src),_Src,lVar1 * 2 + 2);
    memcpy(_Src,param_2,uVar4 * 2);
    memcpy((void *)(uVar4 * 2 + (longlong)_Src),(void *)((longlong)param_2 + (uVar4 + uVar3) * 2),
           (uVar3 - uVar4) * 2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  uVar2 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = uVar2;
  param_3[2] = 0;
  param_3[3] = 7;
  *(undefined2 *)param_3 = 0;
  return param_1;
}



// FUNCTION 180004810 FUN_180004810
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180004df0 FUN_180004df0

undefined8 * FUN_180004810(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(short *)(param_2 + uVar2 * 2) != 0);
  plVar1 = param_3 + 2;
  if (uVar2 <= 0x7ffffffffffffffeU - *plVar1) {
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_180004df0(param_1,param_2,param_3,(void *)param_2,uVar2,param_3,*plVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001370();
}



// FUNCTION 180004880 FUN_180004880
// THUNK false
// CALLS EXTERNAL:0000002f widen
// CALLS EXTERNAL:0000002d flush
// CALLS EXTERNAL:0000002c put

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_180004880(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  wchar_t wVar1;
  
  wVar1 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::widen
                    ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::put(param_1,wVar1);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(param_1);
  return param_1;
}



// FUNCTION 1800048c0 FUN_1800048c0
// THUNK false
// CALLS EXTERNAL:00000058 ~_Lockit
// CALLS EXTERNAL:00000059 _Lockit
// CALLS 180001490 FUN_180001490
// CALLS 180018768 _Facet_Register
// CALLS EXTERNAL:00000055 _Getgloballocale
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000045 operator_unsigned___int64
// CALLS EXTERNAL:00000040 _Getcat

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Facet_base * FUN_1800048c0(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  _Facet_base *p_Var4;
  undefined1 auStack_48 [32];
  _Facet_base *local_28;
  _Lockit local_20 [8];
  _Facet_base *local_18;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStack_48;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_180023c48;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(_Var2 * 8 + *(longlong *)(lVar1 + 0x10));
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_180004997;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_18000494d:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_180004997;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(_Var2 * 8 + *(longlong *)(p_Var3 + 0x10));
      goto LAB_18000494d;
    }
  }
  p_Var4 = local_28;
  if (local_28 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<wchar_t,char,_Mbstatet>::_Getcat((facet **)&local_28,param_1);
    p_Var4 = local_28;
    if (_Var2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180001490();
    }
    local_18 = local_28;
    std::_Facet_Register(local_28);
    (**(code **)(*(longlong *)p_Var4 + 8))(p_Var4);
    DAT_180023c48 = local_28;
    p_Var4 = local_28;
  }
LAB_180004997:
  std::_Lockit::~_Lockit(local_20);
  return p_Var4;
}



// FUNCTION 1800049d0 FUN_1800049d0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_1800049d0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    param_1 = param_1 + 4;
  } while( true );
}



// FUNCTION 180004a60 FUN_180004a60
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy

void FUN_180004a60(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  param_1[3] = 7;
  if (param_3 < 8) {
    param_1[2] = param_3;
    memmove(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar1 = param_3 | 7;
  puVar2 = param_1;
  uVar3 = 0x7ffffffffffffffe;
  if ((uVar1 < 0x7fffffffffffffff) && (puVar2 = (undefined8 *)0xa, uVar3 = uVar1, uVar1 < 10)) {
    uVar3 = 10;
  }
  _Dst = (void *)FUN_180004ec0(puVar2,uVar3 + 1);
  param_1[2] = param_3;
  *param_1 = _Dst;
  param_1[3] = uVar3;
  memcpy(_Dst,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
  return;
}



// FUNCTION 180004b20 FUN_180004b20
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 1800012d0 FUN_1800012d0
// CALLS 1800187f0 free
// CALLS 180018824 FUN_180018824
// CALLS 180019703 memcpy
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 *
FUN_180004b20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  uVar2 = param_1[3];
  uVar4 = _Size + 1 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (0xfff < uVar1) {
      uVar4 = uVar5 + 0x28;
      if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1800012d0();
      }
      goto LAB_180004bba;
    }
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_180018824(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_180004bba:
    lVar3 = FUN_180018824(uVar4);
    if (lVar3 == 0) goto LAB_180004c3d;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    _Memory = _Src;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
LAB_180004c3d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 180004c80 FUN_180004c80
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 1800187f0 free
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019703 memcpy
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 *
FUN_180004c80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
             longlong param_5)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  size_t _Size;
  void *_Dst;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  uVar3 = param_1[3];
  uVar5 = param_2 + lVar2 | 7;
  puVar4 = param_1;
  uVar6 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) &&
      (puVar4 = (undefined8 *)(uVar3 >> 1), uVar3 <= 0x7ffffffffffffffeU - (longlong)puVar4)) &&
     (uVar6 = uVar5, uVar5 < (longlong)puVar4 + uVar3)) {
    uVar6 = (longlong)puVar4 + uVar3;
  }
  _Dst = (void *)FUN_180004ec0(puVar4,uVar6 + 1);
  param_1[2] = param_2 + lVar2;
  _Size = lVar2 * 2;
  param_1[3] = uVar6;
  puVar1 = (undefined2 *)((longlong)_Dst + (param_5 + lVar2) * 2);
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5 * 2);
    *puVar1 = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5 * 2);
    *puVar1 = 0;
    _Memory = _Src;
    if ((0xfff < uVar3 * 2 + 2) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 180004df0 FUN_180004df0
// THUNK false
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019703 memcpy

undefined8 *
FUN_180004df0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,
             longlong param_5,void *param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = 7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_5 + param_7;
  param_1[3] = 0;
  puVar3 = param_1;
  if (7 < uVar1) {
    uVar2 = uVar1 | 7;
    uVar4 = 0x7ffffffffffffffe;
    if ((uVar2 < 0x7fffffffffffffff) && (puVar3 = (undefined8 *)0xa, uVar4 = uVar2, uVar2 < 10)) {
      uVar4 = 10;
    }
    puVar3 = (undefined8 *)FUN_180004ec0(puVar3,uVar4 + 1);
    *param_1 = puVar3;
  }
  param_1[3] = uVar4;
  param_1[2] = uVar1;
  memcpy(puVar3,param_4,param_5 * 2);
  memcpy((void *)(param_5 * 2 + (longlong)puVar3),param_6,param_7 * 2);
  *(undefined2 *)((longlong)puVar3 + uVar1 * 2) = 0;
  return param_1;
}



// FUNCTION 180004ec0 FUN_180004ec0
// THUNK false
// CALLS 1800012d0 FUN_1800012d0
// CALLS 180018824 FUN_180018824
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

ulonglong FUN_180004ec0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x8000000000000000) {
    uVar2 = param_2 * 2;
    if (uVar2 < 0x1000) {
      if (uVar2 != 0) {
        uVar2 = FUN_180018824(uVar2);
        return uVar2;
      }
      return 0;
    }
    if (uVar2 < uVar2 + 0x27) {
      lVar1 = FUN_180018824(uVar2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800012d0();
}



// FUNCTION 180004f30 FUN_180004f30
// THUNK false
// CALLS EXTERNAL:0000002b _Osfx
// CALLS EXTERNAL:00000033 uncaught_exception

void FUN_180004f30(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 180004f70 FUN_180004f70
// THUNK false

void FUN_180004f70(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 180004fa0 FUN_180004fa0
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy

undefined8 * FUN_180004fa0(undefined8 *param_1,void *param_2,void *param_3)

{
  ulonglong uVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    return param_1;
  }
  uVar3 = (longlong)param_3 - (longlong)param_2 >> 1;
  if (uVar3 < 0x7fffffffffffffff) {
    param_1[3] = 7;
    if (uVar3 < 8) {
      param_1[2] = uVar3;
      memmove(param_1,param_2,uVar3 * 2);
      *(undefined2 *)(uVar3 * 2 + (longlong)param_1) = 0;
      return param_1;
    }
    uVar1 = uVar3 | 7;
    puVar2 = param_1;
    uVar4 = 0x7ffffffffffffffe;
    if ((uVar1 < 0x7fffffffffffffff) && (puVar2 = (undefined8 *)0xa, uVar4 = uVar1, uVar1 < 10)) {
      uVar4 = 10;
    }
    uVar1 = uVar4 + 1;
    if (uVar4 == 0xffffffffffffffff) {
      uVar1 = 0xffffffffffffffff;
    }
    _Dst = (void *)FUN_180004ec0(puVar2,uVar1);
    param_1[2] = uVar3;
    *param_1 = _Dst;
    param_1[3] = uVar4;
    memcpy(_Dst,param_2,uVar3 * 2);
    *(undefined2 *)(uVar3 * 2 + (longlong)_Dst) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001370();
}



// FUNCTION 1800050b0 FUN_1800050b0
// THUNK false
// CALLS EXTERNAL:0000002b _Osfx
// CALLS EXTERNAL:0000002d flush
// CALLS EXTERNAL:0000002e sputc
// CALLS EXTERNAL:0000005a sputn
// CALLS EXTERNAL:00000036 setstate
// CALLS EXTERNAL:00000033 uncaught_exception

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_1800050b0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,wchar_t *param_2,
             ulonglong param_3)

{
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  bool bVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  uVar3 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar3 < 1) || (uVar3 <= param_3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = uVar3 - param_3;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  lVar4 = *(longlong *)param_1;
  if (*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) {
    this = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)
            (param_1 + (longlong)*(int *)(lVar4 + 4) + 0x50);
    if ((this == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0) || (this == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this);
      lVar4 = *(longlong *)param_1;
      bVar1 = *(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        uVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           *(wchar_t *)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58));
        if (uVar2 == 0xffff) {
          iVar5 = 4;
          goto LAB_1800051d0;
        }
      }
    }
    uVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputn
                      (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       param_3);
    if (uVar3 == param_3) {
LAB_1800051d0:
      do {
        if (lVar6 == 0) goto LAB_1800051fe;
        uVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           *(wchar_t *)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58));
        if (uVar2 == 0xffff) break;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    iVar5 = 4;
LAB_1800051fe:
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar5 = 4;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



// FUNCTION 180005280 FUN_180005280
// THUNK false
// CALLS 180005720 FUN_180005720
// CALLS 1800055f0 FUN_1800055f0
// CALLS 1800056b0 FUN_1800056b0
// CALLS 180005610 FUN_180005610

undefined8 * FUN_180005280(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  
  lVar2 = *param_1;
  lVar4 = param_1[1] - lVar2 >> 5;
  if (lVar4 != 0x7ffffffffffffff) {
    uVar6 = param_1[2] - lVar2 >> 5;
    uVar1 = lVar4 + 1;
    uVar9 = 0x7ffffffffffffff;
    if ((uVar6 <= 0x7ffffffffffffff - (uVar6 >> 1)) && (uVar9 = (uVar6 >> 1) + uVar6, uVar9 < uVar1)
       ) {
      uVar9 = uVar1;
    }
    plVar5 = (longlong *)FUN_1800056b0(uVar6,uVar9);
    puVar10 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)plVar5);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    uVar3 = param_3[1];
    *puVar10 = *param_3;
    puVar10[1] = uVar3;
    uVar3 = param_3[3];
    puVar10[2] = param_3[2];
    puVar10[3] = uVar3;
    param_3[2] = 0;
    param_3[3] = 7;
    *(undefined2 *)param_3 = 0;
    plVar8 = (longlong *)param_1[1];
    plVar7 = (longlong *)*param_1;
    plVar11 = plVar5;
    if (param_2 != plVar8) {
      FUN_180005720((longlong *)*param_1,param_2,plVar5);
      plVar8 = (longlong *)param_1[1];
      plVar11 = puVar10 + 4;
      plVar7 = param_2;
    }
    FUN_180005720(plVar7,plVar8,plVar11);
    FUN_180005610(param_1,(longlong)plVar5,uVar1,uVar9);
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800055f0();
}



// FUNCTION 1800053a0 FUN_1800053a0
// THUNK false
// CALLS 180005720 FUN_180005720
// CALLS 1800055f0 FUN_1800055f0
// CALLS 1800056b0 FUN_1800056b0
// CALLS 180004160 FUN_180004160
// CALLS 180005610 FUN_180005610

undefined8 * FUN_1800053a0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  lVar2 = *param_1;
  lVar3 = param_1[1] - lVar2 >> 5;
  if (lVar3 != 0x7ffffffffffffff) {
    uVar1 = lVar3 + 1;
    uVar5 = param_1[2] - lVar2 >> 5;
    uVar8 = 0x7ffffffffffffff;
    if ((uVar5 <= 0x7ffffffffffffff - (uVar5 >> 1)) && (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar1)
       ) {
      uVar8 = uVar1;
    }
    plVar4 = (longlong *)FUN_1800056b0(uVar5,uVar8);
    puVar10 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)plVar4);
    FUN_180004160(puVar10,param_3);
    plVar7 = (longlong *)param_1[1];
    plVar6 = (longlong *)*param_1;
    plVar9 = plVar4;
    if (param_2 != plVar7) {
      FUN_180005720((longlong *)*param_1,param_2,plVar4);
      plVar7 = (longlong *)param_1[1];
      plVar6 = param_2;
      plVar9 = puVar10 + 4;
    }
    FUN_180005720(plVar6,plVar7,plVar9);
    FUN_180005610(param_1,(longlong)plVar4,uVar1,uVar8);
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800055f0();
}



// FUNCTION 1800054b0 FUN_1800054b0
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 1800187f0 free
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019703 memcpy
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 *
FUN_1800054b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             void *param_5,longlong param_6)

{
  size_t _Size;
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  size_t _Size_00;
  void *_Dst;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  uVar2 = param_1[3];
  uVar4 = param_2 + lVar1 | 7;
  puVar3 = param_1;
  uVar5 = 0x7ffffffffffffffe;
  if (((uVar4 < 0x7fffffffffffffff) &&
      (puVar3 = (undefined8 *)(uVar2 >> 1), uVar2 <= 0x7ffffffffffffffeU - (longlong)puVar3)) &&
     (uVar5 = uVar4, uVar4 < (longlong)puVar3 + uVar2)) {
    uVar5 = (longlong)puVar3 + uVar2;
  }
  uVar4 = uVar5 + 1;
  if (uVar5 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  _Dst = (void *)FUN_180004ec0(puVar3,uVar4);
  param_1[2] = param_2 + lVar1;
  _Size = lVar1 * 2 + 2;
  param_1[3] = uVar5;
  _Size_00 = param_6 * 2;
  if (uVar2 < 8) {
    memcpy(_Dst,param_5,_Size_00);
    memcpy((void *)(_Size_00 + (longlong)_Dst),param_1,_Size);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,param_5,_Size_00);
    memcpy((void *)(_Size_00 + (longlong)_Dst),_Src,_Size);
    _Memory = _Src;
    if ((0xfff < uVar2 * 2 + 2) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 1800055f0 FUN_1800055f0
// THUNK false
// CALLS EXTERNAL:00000057 _Xlength_error

void FUN_1800055f0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 180005610 FUN_180005610
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_180005610(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_1800049d0((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 1800056b0 FUN_1800056b0
// THUNK false
// CALLS 1800012d0 FUN_1800012d0
// CALLS 180018824 FUN_180018824
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

ulonglong FUN_1800056b0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x800000000000000) {
    uVar2 = param_2 * 0x20;
    if (uVar2 < 0x1000) {
      if (uVar2 != 0) {
        uVar2 = FUN_180018824(uVar2);
        return uVar2;
      }
      return 0;
    }
    if (uVar2 < uVar2 + 0x27) {
      lVar1 = FUN_180018824(uVar2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800012d0();
}



// FUNCTION 180005720 FUN_180005720
// THUNK false
// CALLS 1800049d0 FUN_1800049d0

longlong * FUN_180005720(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != param_2) {
    lVar3 = (longlong)param_3 - (longlong)param_1;
    plVar4 = param_1 + 3;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined8 *)(lVar3 + -0x28 + (longlong)(plVar4 + 4)) = 0;
      plVar1 = plVar4 + 1;
      *(undefined8 *)((longlong)plVar4 + lVar3) = 0;
      lVar2 = plVar4[-2];
      *param_3 = plVar4[-3];
      param_3[1] = lVar2;
      lVar2 = *plVar4;
      param_3[2] = plVar4[-1];
      param_3[3] = lVar2;
      plVar4[-1] = 0;
      param_3 = param_3 + 4;
      *plVar4 = 7;
      *(undefined2 *)(plVar4 + -3) = 0;
      plVar4 = plVar4 + 4;
    } while (plVar1 != param_2);
  }
  FUN_1800049d0(param_3,param_3);
  return param_3;
}



// FUNCTION 1800057ac FUN_1800057ac
// THUNK false
// CALLS 1800042d0 FUN_1800042d0

void FUN_1800057ac(longlong param_1,uint param_2)

{
  FUN_1800042d0((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(param_1 - *(int *)(param_1 + -4)),
                param_2);
  return;
}



// FUNCTION 1800057c0 FUN_1800057c0
// THUNK false
// CALLS 180001170 FUN_180001170
// CALLS 1800066c0 FUN_1800066c0
// CALLS 1800187f0 free
// CALLS 180018860 thunk_FUN_180018824
// CALLS EXTERNAL:00000011 MultiByteToWideChar
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800057c0(undefined8 param_1,longlong *param_2,byte *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  int cchWideChar;
  size_t sVar3;
  LPWSTR lpWideCharStr;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_168 [32];
  CHAR local_128;
  char acStack_127 [255];
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStackY_168;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  FUN_180001170(&local_128,0x100,"BatteryValue_%02x%02x%02x",(ulonglong)*param_3);
  uVar4 = 0xffffffffffffffff;
  lVar6 = -1;
  do {
    lVar5 = lVar6 + 1;
    pcVar1 = acStack_127 + lVar6;
    lVar6 = lVar5;
  } while (*pcVar1 != '\0');
  cchWideChar = MultiByteToWideChar(0,0,&local_128,(int)lVar5,(LPWSTR)0x0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(cchWideChar + 1);
  sVar3 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    sVar3 = 0xffffffffffffffff;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_180018824(sVar3);
  lVar6 = -1;
  do {
    lVar5 = lVar6 + 1;
    pcVar1 = acStack_127 + lVar6;
    lVar6 = lVar5;
  } while (*pcVar1 != '\0');
  MultiByteToWideChar(0,0,&local_128,(int)lVar5,lpWideCharStr,cchWideChar);
  lpWideCharStr[cchWideChar] = L'\0';
  do {
    uVar4 = uVar4 + 1;
  } while (lpWideCharStr[uVar4] != L'\0');
  FUN_1800066c0(param_2,lpWideCharStr,uVar4);
  free(lpWideCharStr);
  return param_2;
}



// FUNCTION 180005920 FUN_180005920
// THUNK false
// CALLS 180001170 FUN_180001170
// CALLS 1800066c0 FUN_1800066c0
// CALLS 1800187f0 free
// CALLS 180018860 thunk_FUN_180018824
// CALLS EXTERNAL:00000011 MultiByteToWideChar
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180005920(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  int cchWideChar;
  size_t sVar3;
  LPWSTR lpWideCharStr;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_178 [32];
  CHAR local_138;
  char acStack_137 [255];
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStackY_178;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  FUN_180001170(&local_138,0x100,"%u%u-%u",param_3 >> 0x20);
  uVar4 = 0xffffffffffffffff;
  lVar6 = -1;
  do {
    lVar5 = lVar6 + 1;
    pcVar1 = acStack_137 + lVar6;
    lVar6 = lVar5;
  } while (*pcVar1 != '\0');
  cchWideChar = MultiByteToWideChar(0,0,&local_138,(int)lVar5,(LPWSTR)0x0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(cchWideChar + 1);
  sVar3 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    sVar3 = 0xffffffffffffffff;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_180018824(sVar3);
  lVar6 = -1;
  do {
    lVar5 = lVar6 + 1;
    pcVar1 = acStack_137 + lVar6;
    lVar6 = lVar5;
  } while (*pcVar1 != '\0');
  MultiByteToWideChar(0,0,&local_138,(int)lVar5,lpWideCharStr,cchWideChar);
  lpWideCharStr[cchWideChar] = L'\0';
  do {
    uVar4 = uVar4 + 1;
  } while (lpWideCharStr[uVar4] != L'\0');
  FUN_1800066c0(param_2,lpWideCharStr,uVar4);
  free(lpWideCharStr);
  return param_2;
}



// FUNCTION 180005a80 FUN_180005a80
// THUNK false
// CALLS 180005920 FUN_180005920
// CALLS EXTERNAL:00000024 RegSetValueExW
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000027 RegOpenKeyExW
// CALLS EXTERNAL:00000026 RegCloseKey
// CALLS EXTERNAL:00000023 RegCreateKeyW
// CALLS 1800057c0 FUN_1800057c0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005a80(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  LSTATUS LVar2;
  undefined8 uVar3;
  void *_Memory;
  BYTE ****ppppBVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  undefined1 auStackY_98 [32];
  HKEY local_68;
  WCHAR local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong uStack_48;
  BYTE ***local_40 [2];
  int local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180023010 ^ (ulonglong)auStackY_98;
  FUN_180005920(param_1,(longlong *)local_40,param_2);
  pWVar6 = (LPCWSTR)(param_1 + 0xe0);
  pWVar5 = pWVar6;
  if (7 < *(ulonglong *)(param_1 + 0xf8)) {
    pWVar5 = *(LPCWSTR *)pWVar6;
  }
  uVar3 = 0xffffffff80000001;
  LVar2 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000001,pWVar5,0,2,&local_68);
  if (LVar2 != 0) {
    pWVar5 = pWVar6;
    if (7 < *(ulonglong *)(param_1 + 0xf8)) {
      pWVar5 = *(LPCWSTR *)pWVar6;
    }
    RegCreateKeyW((HKEY)&DAT_ffffffff80000001,pWVar5,&local_68);
    if (7 < *(ulonglong *)(param_1 + 0xf8)) {
      pWVar6 = *(LPCWSTR *)pWVar6;
    }
    uVar3 = 0xffffffff80000001;
    RegOpenKeyExW((HKEY)&DAT_ffffffff80000001,pWVar6,0,2,&local_68);
  }
  FUN_1800057c0(uVar3,(longlong *)&local_60,(byte *)(param_1 + 0xd7));
  ppppBVar4 = local_40;
  if (7 < local_28) {
    ppppBVar4 = (BYTE ****)local_40[0];
  }
  pWVar6 = &local_60;
  if (7 < uStack_48) {
    pWVar6 = (LPCWSTR)CONCAT62(uStack_5e,local_60);
  }
  RegSetValueExW(local_68,pWVar6,0,1,(BYTE *)ppppBVar4,local_30 * 2);
  RegCloseKey(local_68);
  if (7 < uStack_48) {
    pvVar1 = (void *)CONCAT62(uStack_5e,local_60);
    _Memory = pvVar1;
    if ((0xfff < uStack_48 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_50 = _DAT_18001c720;
  uStack_48 = _UNK_18001c728;
  local_60 = L'\0';
  if (7 < local_28) {
    ppppBVar4 = (BYTE ****)local_40[0];
    if ((0xfff < local_28 * 2 + 2) &&
       (ppppBVar4 = (BYTE ****)local_40[0][-1],
       (BYTE *)0x1f < (BYTE *)((longlong)local_40[0] + (-8 - (longlong)ppppBVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppBVar4);
  }
  return;
}



// FUNCTION 180005c50 FUN_180005c50
// THUNK false
// CALLS 1800195a8 memset
// CALLS 1800066c0 FUN_1800066c0
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000025 RegQueryValueExW
// CALLS EXTERNAL:00000027 RegOpenKeyExW
// CALLS EXTERNAL:00000026 RegCloseKey
// CALLS 180004a60 FUN_180004a60
// CALLS 1800057c0 FUN_1800057c0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180005c50(longlong param_1,longlong *param_2)

{
  LSTATUS LVar1;
  LPCWSTR ****pppppWVar2;
  LPCWSTR lpSubKey;
  short *psVar3;
  ulonglong uVar4;
  undefined1 auStackY_288 [32];
  HKEY local_248;
  DWORD local_240 [2];
  LPCWSTR ***local_238 [3];
  ulonglong local_220;
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStackY_288;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180004a60(param_2,&DAT_18001ba30,0);
  lpSubKey = (LPCWSTR)(param_1 + 0xe0);
  if (7 < *(ulonglong *)(param_1 + 0xf8)) {
    lpSubKey = *(LPCWSTR *)lpSubKey;
  }
  LVar1 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000001,lpSubKey,0,0x20019,&local_248);
  if (LVar1 == 0) {
    psVar3 = local_218;
    memset(psVar3,0,0x200);
    local_240[1] = 1;
    local_240[0] = 0x200;
    FUN_1800057c0(psVar3,(longlong *)local_238,(byte *)(param_1 + 0xd7));
    pppppWVar2 = local_238;
    if (7 < local_220) {
      pppppWVar2 = (LPCWSTR ****)local_238[0];
    }
    LVar1 = RegQueryValueExW(local_248,(LPCWSTR)pppppWVar2,(LPDWORD)0x0,local_240 + 1,
                             (LPBYTE)local_218,local_240);
    if (LVar1 == 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (local_218[uVar4] != 0);
      psVar3 = local_218;
    }
    else {
      uVar4 = 0;
      psVar3 = (short *)&DAT_18001ba30;
    }
    FUN_1800066c0(param_2,psVar3,uVar4);
    RegCloseKey(local_248);
    if (7 < local_220) {
      pppppWVar2 = (LPCWSTR ****)local_238[0];
      if ((0xfff < local_220 * 2 + 2) &&
         (pppppWVar2 = (LPCWSTR ****)local_238[0][-1],
         0x1f < (ulonglong)((longlong)local_238[0] + (-8 - (longlong)pppppWVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppWVar2);
    }
  }
  return param_2;
}



// FUNCTION 180005e00 FUN_180005e00
// THUNK false
// CALLS EXTERNAL:00000088 _wtoi
// CALLS 1800061b0 FUN_1800061b0
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 180005c50 FUN_180005c50
// CALLS 1800173f0 FUN_1800173f0
// CALLS 1800171d0 FUN_1800171d0
// CALLS 180004160 FUN_180004160
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS EXTERNAL:00000087 _time64

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005e00(byte *param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  ushort ******_Memory;
  wchar_t *pwVar10;
  void *_Memory_00;
  byte bVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  ushort ******local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  wchar_t *local_78;
  longlong *plStack_70;
  longlong local_68;
  int local_60 [2];
  void *local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStack_c8;
  iVar4 = 0;
  local_a8 = param_2;
  if ((*(longlong *)(param_1 + 200) == -1) || (param_1[0x61] == 0)) {
    param_1[0xc3] = 1;
    if (param_1[0x60] == 0) {
      param_1[0xc] = 0xea;
      param_1[0xd] = 0xb;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0x5c;
      param_1[0x11] = 0xd;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0x98;
      param_1[0x15] = 0xd;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0xd4;
      param_1[0x19] = 0xd;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0x10;
      param_1[0x1d] = 0xe;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0x4c;
      param_1[0x21] = 0xe;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x24] = 0x88;
      param_1[0x25] = 0xe;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x28] = 0xb0;
      param_1[0x29] = 0xe;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0xd8;
      param_1[0x2d] = 0xe;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0xf;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x34] = 0x28;
      param_1[0x35] = 0xf;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x38] = 0x50;
      param_1[0x39] = 0xf;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x3c] = 100;
      param_1[0x3d] = 0xf;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0x78;
      param_1[0x41] = 0xf;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0x44] = 0x8c;
      param_1[0x45] = 0xf;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = 0xa0;
      param_1[0x49] = 0xf;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      param_1[0x4c] = 0xb4;
      param_1[0x4d] = 0xf;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      param_1[0x50] = 200;
      param_1[0x51] = 0xf;
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      param_1[0x54] = 0xdc;
      param_1[0x55] = 0xf;
      param_1[0x56] = 0;
      param_1[0x57] = 0;
      param_1[0x58] = 0xf0;
      param_1[0x59] = 0xf;
      param_1[0x5a] = 0;
      param_1[0x5b] = 0;
      param_1[0x5c] = 0xe;
      param_1[0x5d] = 0x10;
      param_1[0x5e] = 0;
      param_1[0x5f] = 0;
    }
    FUN_180005c50((longlong)param_1,(longlong *)local_58);
    local_78 = (wchar_t *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    uStack_98 = 0;
    local_90 = 1;
    local_88 = 7;
    local_a0 = (ushort ******)0x2d;
    FUN_1800173f0((longlong *)&local_78,local_58,&local_a0);
    if (7 < local_88) {
      _Memory = local_a0;
      if ((0xfff < local_88 * 2 + 2) &&
         (_Memory = (ushort ******)local_a0[-1],
         0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_1[0xd4] = 100;
    if ((longlong)plStack_70 - (longlong)local_78 >> 5 == 2) {
      plVar6 = FUN_180004160(&local_a0,(undefined8 *)local_78);
      uVar7 = FUN_1800171d0(plVar6);
      if ((int)uVar7 != 0) {
        plVar6 = FUN_180004160(&local_a0,(undefined8 *)(local_78 + 0x10));
        uVar7 = FUN_1800171d0(plVar6);
        if ((int)uVar7 != 0) {
          pwVar10 = local_78;
          if (7 < *(ulonglong *)(local_78 + 0xc)) {
            pwVar10 = *(wchar_t **)local_78;
          }
          iVar4 = _wtoi(pwVar10);
          pwVar10 = local_78 + 0x10;
          if (7 < *(ulonglong *)(local_78 + 0x1c)) {
            pwVar10 = *(wchar_t **)pwVar10;
          }
          iVar5 = _wtoi(pwVar10);
          param_1[0xd4] = (byte)iVar5;
        }
      }
    }
    _time64((__time64_t *)local_60);
    *(longlong *)(param_1 + 200) = (longlong)(local_60[0] - iVar4);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1800049d0((longlong *)local_78,plStack_70);
      pwVar10 = local_78;
      if ((0xfff < (local_68 - (longlong)local_78 & 0xffffffffffffffe0U)) &&
         (pwVar10 = *(wchar_t **)(local_78 + -4),
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pwVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pwVar10);
      local_78 = (wchar_t *)0x0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
    }
    if (7 < local_40) {
      _Memory_00 = local_58[0];
      if ((0xfff < local_40 * 2 + 2) &&
         (_Memory_00 = *(void **)((longlong)local_58[0] + -8),
         0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory_00);
    }
  }
  else {
    param_1[0xc3] = 0;
  }
  bVar3 = (byte)param_2;
  if (local_a8._2_2_ != 0) {
    bVar3 = FUN_1800061b0((longlong)param_1,param_2);
  }
  uVar2 = *(ulonglong *)(param_1 + 200);
  bVar1 = param_1[0xd4];
  bVar8 = bVar3;
  if ((uVar2 < 0x709) && (bVar8 = bVar1, 0x3b < uVar2)) {
    uVar9 = (uint)((double)uVar2 * _DAT_18001c708);
    if ((uVar9 & 0xff) + (uint)bVar1 < 0x65) {
      bVar8 = (char)uVar9 + bVar1;
    }
    else {
      bVar8 = 100;
    }
    uVar9 = (uint)((double)uVar2 * _DAT_18001c700);
    bVar11 = (byte)uVar9;
    if (bVar1 < bVar11) {
      bVar11 = 0;
    }
    else if ((int)((uint)bVar1 - (uVar9 & 0xff)) < 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = bVar1 - bVar11;
    }
    if ((bVar3 <= bVar8) && (bVar8 = bVar1, bVar3 < bVar11)) {
      bVar8 = bVar11;
    }
  }
  *param_1 = bVar8;
  return;
}



// FUNCTION 1800061b0 FUN_1800061b0
// THUNK false

char FUN_1800061b0(longlong param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar8 = param_2 >> 0x10;
  if (*(int *)(param_1 + 0x5c) <= (int)uVar8) {
    return ((char)(param_2 >> 8) != '\x01') + 'c';
  }
  uVar5 = 0;
  piVar4 = (int *)(param_1 + 0xc);
  uVar7 = uVar5;
  while (iVar6 = (int)uVar7, *piVar4 <= (int)uVar8) {
    uVar7 = (ulonglong)(iVar6 + 1);
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
    if (0x14 < (longlong)uVar5) {
      return '\0';
    }
  }
  if (iVar6 == -1) {
    return '\0';
  }
  if (iVar6 != 0) {
    iVar1 = *(int *)(param_1 + 8 + (longlong)iVar6 * 4);
    cVar2 = (char)((int)(uVar8 - iVar1) /
                  ((*(int *)(param_1 + 0xc + (longlong)iVar6 * 4) - iVar1) / 5)) +
            (char)uVar7 * '\x05';
    cVar3 = cVar2 + -5;
    if ((cVar3 != '\0') && (cVar3 != '\x0f')) {
      return cVar3;
    }
    return cVar2 + -4;
  }
  return '\x01';
}



// FUNCTION 180006250 FUN_180006250
// THUNK false
// CALLS 180005e00 FUN_180005e00
// CALLS 1800061b0 FUN_1800061b0
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 18000d530 UsbFinder_GetBatteryLevel
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180006250(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ULONGLONG UVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  byte local_40;
  byte local_3f;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x308;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000000308;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar4 = UsbFinder_GetDeviceData((undefined8 *)(param_1 + 0x98),&local_30,&local_48);
  if (((char)uVar4 == '\0') ||
     (uVar4 = UsbFinder_GetBatteryLevel((undefined8 *)(param_1 + 0x98),param_1 + 0xb8),
     (char)uVar4 == '\0')) {
    param_1[0xc0] = 0;
    param_1[0x80] = 0;
    return;
  }
  if (param_1[0xc2] == 0) {
    param_1[0xd7] = local_48._7_1_;
    param_1[0xd8] = local_40;
    param_1[0xd9] = local_3f;
    param_1[0xc2] = 1;
    FUN_180005e00(param_1,*(uint *)(param_1 + 0xb8));
  }
  bVar2 = param_1[0xb8];
  *(uint *)(param_1 + 0xbc) = (uint)bVar2;
  param_1[0xc0] = 1;
  if (*(short *)(param_1 + 0xba) != 0) {
    bVar2 = FUN_1800061b0((longlong)param_1,*(uint *)(param_1 + 0xb8));
    *(uint *)(param_1 + 0xbc) = (uint)bVar2;
  }
  if (param_1[2] != 0) {
    bVar1 = *param_1;
    uVar6 = (uint)bVar2;
    if (bVar1 < uVar6) {
      iVar3 = uVar6 - bVar1;
    }
    else {
      iVar3 = bVar1 - uVar6;
    }
    if (0x1e < iVar3) {
      *param_1 = bVar2;
    }
  }
  if (param_1[0x80] != 0) {
    return;
  }
  param_1[0x80] = 1;
  UVar5 = GetTickCount64();
  *(ULONGLONG *)(param_1 + 0x88) = UVar5;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  return;
}



// FUNCTION 1800063d0 FUN_1800063d0
// THUNK false
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS 1800065a0 FUN_1800065a0

void FUN_1800063d0(undefined8 param_1,undefined *param_2)

{
  ULONGLONG UVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (DAT_180023120 == '\0') {
    return;
  }
  UVar1 = GetTickCount64();
  if (UVar1 <= DAT_180023128) {
    return;
  }
  if (UVar1 - DAT_180023128 < (ulonglong)DAT_180023130) {
    return;
  }
  DAT_180023120 = 0;
  uVar3 = DAT_1800230a4;
  if (DAT_180023159 == '\0') {
    bVar2 = DAT_1800230a0;
    if (DAT_18002315c < (int)(uint)DAT_1800230a0) {
      if (DAT_180023158 == 0) {
        DAT_1800230a0 = DAT_180023158;
        bVar2 = 0;
      }
      else {
        if (DAT_1800230a0 != 0) {
          DAT_1800230a0 = DAT_1800230a0 - 1;
        }
        bVar2 = DAT_1800230a0;
        if ((DAT_180023158 < 0x10) && (0xf < DAT_1800230a0)) {
          DAT_1800230a0 = 0xf;
          bVar2 = 0xf;
        }
      }
    }
  }
  else {
    if ((DAT_18002315c < 0x5f) || (DAT_1800230a0 < 0x55)) {
      bVar2 = DAT_1800230a0;
      if (10 < (int)(DAT_18002315c - (uint)DAT_1800230a0)) {
        bVar2 = DAT_1800230a0 + 1;
      }
    }
    else {
      uVar3 = DAT_1800230a8;
      bVar2 = DAT_1800230a0 + 1;
      if (0x62 < DAT_1800230a0) {
        bVar2 = DAT_1800230a0;
      }
    }
    DAT_1800230a0 = bVar2;
    bVar2 = DAT_1800230a0;
    if (99 < DAT_180023158) {
      DAT_180023170 = DAT_180023170 + 1;
      if (DAT_180023170 < 10) {
        bVar4 = false;
        if (DAT_1800230a0 < 100) {
          DAT_180023108 = 1;
          DAT_180023110 = GetTickCount64();
          DAT_180023118 = 100;
          DAT_180023120 = 1;
          DAT_180023128 = GetTickCount64();
          DAT_180023130 = 100;
          return;
        }
        goto LAB_180006552;
      }
      DAT_1800230a0 = 100;
      bVar2 = 100;
    }
  }
  DAT_180023170 = 0;
  bVar4 = bVar2 < 100;
LAB_180006552:
  if (!bVar4 && bVar2 != 100) {
    DAT_1800230a0 = 100;
    bVar2 = 100;
  }
  FUN_1800065a0(0x1800230a0,bVar2,param_2,'\0');
  DAT_180023120 = 1;
  DAT_180023128 = GetTickCount64();
  DAT_180023130 = uVar3;
  return;
}



// FUNCTION 1800065a0 FUN_1800065a0
// THUNK false
// CALLS 180005a80 FUN_180005a80
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000087 _time64

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800065a0(longlong param_1,char param_2,undefined *param_3,char param_4)

{
  undefined1 auStack_78 [32];
  ulonglong local_58;
  char local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180023010 ^ (ulonglong)auStack_78;
  if (((*(char *)(param_1 + 0xd5) != param_2) ||
      ((bool)*(char *)(param_1 + 0xd6) != (*(char *)(param_1 + 0xb9) != '\0'))) || (param_4 != '\0')
     ) {
    local_4f = *(undefined1 *)(param_1 + 0xb9);
    local_38 = 0x408;
    local_34 = 0x200;
    local_2c = 0;
    local_28 = 0x49;
    local_4c = 0;
    local_44 = 0;
    local_40 = 0;
    local_4e = (undefined1)((ushort)*(undefined2 *)(param_1 + 0xba) >> 8);
    local_4d = (undefined1)*(undefined2 *)(param_1 + 0xba);
    local_50 = param_2;
    if (((*(char *)(param_1 + 0xd5) != param_2) && (*(char *)(param_1 + 0xc3) != '\0')) &&
       (*(char *)(param_1 + 1) != '\0')) {
      _time64((__time64_t *)&local_58);
      FUN_180005a80(param_1,local_58);
    }
    *(char *)(param_1 + 0xd5) = param_2;
    *(bool *)(param_1 + 0xd6) = *(char *)(param_1 + 0xb9) != '\0';
    if (param_3 != (undefined *)0x0) {
      (*(code *)param_3)(&local_38,0x11,&local_50);
    }
  }
  return;
}



// FUNCTION 1800066c0 FUN_1800066c0
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 1800187f0 free
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

longlong * FUN_1800066c0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *_Dst;
  ulonglong uVar4;
  void *_Memory;
  ulonglong uVar5;
  longlong *_Dst_00;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_180001370();
    }
    uVar4 = param_3 | 7;
    uVar5 = 0x7ffffffffffffffe;
    if (((uVar4 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar5 = uVar4, uVar4 < uVar1)) {
      uVar5 = uVar1;
    }
    _Dst = (void *)FUN_180004ec0(uVar4,uVar5 + 1);
    param_1[3] = uVar5;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar2) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    _Dst_00 = param_1;
    if (7 < uVar2) {
      _Dst_00 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst_00,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst_00) = 0;
  }
  return param_1;
}



// FUNCTION 1800067e0 FUN_1800067e0
// THUNK false

undefined8 FUN_1800067e0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_18002852c = 0;
    if (DAT_18002a5a0 != DAT_18002a5a8) {
      DAT_18002a5a8 = DAT_18002a5a0;
    }
    DAT_180023050 = 0xffffffffffffffff;
    if (DAT_18002a5b8 != DAT_18002a5c0) {
      DAT_18002a5c0 = DAT_18002a5b8;
    }
    DAT_180023048 = 0xffffffffffffffff;
  }
  return 1;
}



// FUNCTION 180006850 FUN_180006850
// THUNK false
// CALLS 180006cb0 FUN_180006cb0
// CALLS 1800195a8 memset
// CALLS 18000fe40 UsbServer_ReadFalshData
// CALLS 18000f050 FUN_18000f050
// CALLS 180009960 BufferToMacroKey
// CALLS 180009880 MacroKeyToBuffer
// CALLS 180006d10 FUN_180006d10
// CALLS 180006af0 FUN_180006af0
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006850(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte in_R9B;
  undefined1 auStack_288 [32];
  byte local_268 [592];
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_288;
  if (0x50 < in_R9B - 1) {
    return;
  }
  switch(in_R9B) {
  case 1:
    memset(&DAT_180023d20,0xff,8000);
    _DAT_180023c60 = CONCAT71(DAT_180028550._1_7_,(byte)DAT_180028550);
    uRam0000000180023c68 = _DAT_180028558;
    _DAT_180023c70 = ram0x000180028560;
    uRam0000000180023c78 = uRam0000000180028568;
    _DAT_180023c80 = _DAT_180028570;
    uRam0000000180023c88 = uRam0000000180028578;
    _DAT_180023c90 = _DAT_180028580;
    uRam0000000180023c98 = uRam0000000180028588;
    _DAT_180023ca0 = _DAT_180028590;
    uRam0000000180023ca8 = uRam0000000180028598;
    _DAT_180023cb0 = _DAT_1800285a0;
    uRam0000000180023cb8 = uRam00000001800285a8;
    _DAT_180023cc0 = _DAT_1800285b0;
    uRam0000000180023cc8 = uRam00000001800285b8;
    _DAT_180023cd0 = _DAT_1800285c0;
    uRam0000000180023cd8 = uRam00000001800285c8;
    _DAT_180023ce0 = _DAT_1800285d0;
    uRam0000000180023ce8 = uRam00000001800285d8;
    _DAT_180023cf0 = _DAT_1800285e0;
    uRam0000000180023cf8 = uRam00000001800285e8;
    _DAT_180023d00 = _DAT_1800285f0;
    uRam0000000180023d08 = uRam00000001800285f8;
    _DAT_180023d10 = _DAT_180028600;
    uRam0000000180023d18 = uRam0000000180028608;
    UsbServer_ReadFalshData(0x100,10,2);
    break;
  default:
    bVar3 = in_R9B - 2;
    if ((byte)((byte)DAT_180028550 - 2) < 5) {
      UsbServer_ReadFalshData((bVar3 + 8) * 0x20,(uint)(byte)DAT_180028550 * 3 + 2,in_R9B + 0x10);
      return;
    }
    goto LAB_1800069df;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    bVar3 = in_R9B - 0x12;
    if ((byte)((byte)DAT_180028550 - 2) < 5) {
      uVar1 = (uint)(byte)DAT_180028550 * 3;
      cVar2 = FUN_18000f050(0x180028550,0,uVar1 + 1);
      if (*(char *)((longlong)&DAT_180028550 + (ulonglong)uVar1 + 1) == cVar2) {
        memcpy(&DAT_180023d60 + (ulonglong)bVar3 * 0x20,&DAT_180028550,(ulonglong)uVar1 + 1);
      }
    }
LAB_1800069df:
    if (bVar3 < 0xf) {
      UsbServer_ReadFalshData(((byte)(bVar3 + 1) + 8) * 0x20,10,bVar3 + 3);
    }
    else {
      FUN_180006af0(0);
    }
    break;
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
    FUN_180006cb0((ulonglong)
                  (&switchD_18000689e::switchdataD_180006a84)
                  [(&switchD_18000689e::switchdataD_180006a9c)[(int)(in_R9B - 1)]] + 0x180000000,
                  in_R9B - 0x22);
    break;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
    FUN_180006cb0((ulonglong)
                  (&switchD_18000689e::switchdataD_180006a84)
                  [(&switchD_18000689e::switchdataD_180006a9c)[(int)(in_R9B - 1)]] + 0x180000000,
                  in_R9B - 0x32);
    break;
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
    BufferToMacroKey((byte *)&DAT_180028550,local_268);
    MacroKeyToBuffer(local_268,&DAT_180023f60 + (ulonglong)(byte)(in_R9B + 0xbe) * 0x180);
    if ((byte)(in_R9B + 0xbe) < 0xf) {
      FUN_180006af0(in_R9B + 0xbf);
    }
    else {
      FUN_180006d10();
    }
  }
  return;
}



// FUNCTION 180006af0 FUN_180006af0
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180006af0(byte param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 uStack_37;
  char cStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180023010 ^ (ulonglong)auStack_58;
  local_38 = 0;
  cStack_36 = 0;
  uStack_35 = 0;
  uStack_34 = 0;
  uStack_33 = 0;
  uStack_32 = 0;
  uStack_31 = 0;
  uStack_30 = 0;
  uStack_2f = 0;
  uStack_2d = 0;
  uStack_2c = 0;
  uStack_37 = 1;
  local_28 = 0;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  cVar4 = DAT_18002851d;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cStack_36 = param_1 + 0x22;
  iVar6 = ((uint)param_1 + (uint)param_1 * 2) * 0x80;
  uStack_2f = 0;
  uStack_2d = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_33 = 0;
  iVar5 = iVar6 + 0x300;
  uStack_32 = (undefined1)((uint)iVar5 >> 8);
  uStack_31 = (undefined1)iVar5;
  uStack_30 = 10;
  if (DAT_18002851d != '\0') {
    uStack_30 = 0x8a;
  }
  local_38 = 0;
  uStack_35 = 8;
  uStack_34 = 8;
  cVar3 = FUN_18000f050((longlong)&uStack_35,0,0x10);
  puVar2 = DAT_18002a5a8;
  local_28 = CONCAT13(cVar3,(undefined3)local_28);
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_38);
    cVar4 = DAT_18002851d;
  }
  else {
    *DAT_18002a5a8 =
         CONCAT17(uStack_31,
                  CONCAT16(uStack_32,
                           CONCAT15(uStack_33,
                                    CONCAT14(uStack_34,
                                             CONCAT13(uStack_35,
                                                      CONCAT12(cStack_36,
                                                               CONCAT11(uStack_37,local_38)))))));
    puVar2[1] = CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30)));
    *(undefined4 *)(puVar2 + 2) = local_28;
    DAT_18002a5a8 = (undefined8 *)((longlong)DAT_18002a5a8 + 0x14);
  }
  puVar2 = DAT_18002a5a8;
  local_38 = 1;
  iVar6 = iVar6 + 799;
  uStack_2f = 0;
  uStack_2d = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_33 = 0;
  uStack_32 = (undefined1)((uint)iVar6 >> 8);
  uStack_31 = (undefined1)iVar6;
  uStack_30 = 10;
  if (cVar4 != '\0') {
    uStack_30 = 0x8a;
  }
  uStack_35 = 8;
  uStack_34 = 8;
  cVar4 = FUN_18000f050((longlong)&uStack_35,0,0x10);
  local_28 = CONCAT13(cVar4,(undefined3)local_28);
  if (puVar2 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,puVar2,(undefined8 *)&local_38);
  }
  else {
    *(uint *)puVar2 = CONCAT13(uStack_35,CONCAT12(cStack_36,CONCAT11(uStack_37,local_38)));
    *(uint *)((longlong)puVar2 + 4) =
         CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,uStack_34)));
    *(uint *)(puVar2 + 1) = CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30));
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_2c;
    *(undefined4 *)(puVar2 + 2) = local_28;
    DAT_18002a5a8 = (undefined8 *)((longlong)DAT_18002a5a8 + 0x14);
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180006cb0 FUN_180006cb0
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData
// CALLS 180006d10 FUN_180006d10
// CALLS 180006af0 FUN_180006af0

void FUN_180006cb0(undefined8 param_1,byte param_2)

{
  uint uVar1;
  
  if ((byte)((byte)DAT_180028550 - 1) < 0x1e) {
    uVar1 = (byte)DAT_180028550 + 1;
    if ((byte)((byte)DAT_18002855a - 2) < 0x45) {
      uVar1 = (uint)(byte)DAT_18002855a * 5 + 0x21;
    }
    UsbServer_ReadFalshData((param_2 + 2) * 0x180,uVar1,param_2 + 0x42);
    return;
  }
  if (param_2 < 0xf) {
    FUN_180006af0(param_2 + 1);
    return;
  }
  FUN_180006d10();
  return;
}



// FUNCTION 180006d10 FUN_180006d10
// THUNK false
// CALLS 180007480 ProtocolDataParser
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180006d10(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStack_48;
  uStack_20 = 0;
  local_28 = 0x808;
  local_18 = 0;
  if (DAT_180028548 != (code *)0x0) {
    ProtocolDataParser(&DAT_180023c60,&DAT_180025c60);
    (*DAT_180028548)(&local_28,0x11,&DAT_180023c60,0x1b00);
  }
  return;
}



// FUNCTION 180006d90 FUN_180006d90
// THUNK false
// CALLS 1800012d0 FUN_1800012d0
// CALLS 1800187f0 free
// CALLS 180018824 FUN_180018824
// CALLS 1800055f0 FUN_1800055f0
// CALLS 180019709 memmove
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 * FUN_180006d90(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Dst;
  size_t _Size;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  lVar8 = (param_1[1] - lVar2 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_1800055f0();
  }
  uVar9 = lVar8 + 1;
  uVar6 = (param_1[2] - lVar2 >> 2) * -0x3333333333333333;
  uVar5 = 0xccccccccccccccc - (uVar6 >> 1);
  if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
LAB_180006f73:
                    /* WARNING: Subroutine does not return */
    FUN_1800012d0();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar5 = uVar9;
  if (uVar9 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0xccccccccccccccc < uVar5) goto LAB_180006f73;
  uVar5 = uVar5 * 0x14;
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_180018824(uVar5);
    }
  }
  else {
    if (uVar5 + 0x27 <= uVar5) goto LAB_180006f73;
    lVar8 = FUN_180018824(uVar5 + 0x27);
    if (lVar8 == 0) goto LAB_180006f66;
    _Dst = (void *)(lVar8 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar8;
  }
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)_Dst + (((longlong)param_2 - lVar2) / 0x14) * 0x14);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
  pvVar3 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar3;
    pvVar7 = _Dst;
    param_2 = pvVar3;
  }
  else {
    memmove(_Dst,pvVar3,(longlong)param_2 - (longlong)pvVar3);
    pvVar7 = (void *)((longlong)puVar1 + 0x14);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar7,param_2,_Size);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar7 = pvVar3;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 2) << 2)) &&
       (pvVar7 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
LAB_180006f66:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar9 * 0x14);
  param_1[2] = (longlong)(uVar5 + (longlong)_Dst);
  return puVar1;
}



// FUNCTION 180006f80 CS_GetDeviceInfo
// THUNK false

void CS_GetDeviceInfo(longlong param_1,undefined1 *param_2)

{
                    /* 0x6f80  10  CS_GetDeviceInfo
                       0x6f80  97  GetDeviceInfo */
  *param_2 = *(undefined1 *)(param_1 + 4);
  param_2[1] = *(undefined1 *)(param_1 + 5);
  param_2[2] = *(undefined1 *)(param_1 + 6);
  return;
}



// FUNCTION 180006fa0 CS_isDeviceOnLine
// THUNK false

bool CS_isDeviceOnLine(char *param_1)

{
                    /* 0x6fa0  95  CS_isDeviceOnLine
                       0x6fa0  207  isDeviceOnLine */
  return *param_1 != '\0';
}



// FUNCTION 180006fb0 CS_GetDeviceBatteryStatus
// THUNK false

void CS_GetDeviceBatteryStatus(undefined1 *param_1,undefined1 *param_2)

{
                    /* 0x6fb0  9  CS_GetDeviceBatteryStatus
                       0x6fb0  96  GetDeviceBatteryStatus */
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[2],param_1[3]);
  return;
}



// FUNCTION 180006fe0 CS_GetDeviceStatusChanged
// THUNK false

void CS_GetDeviceStatusChanged(byte *param_1,byte *param_2)

{
                    /* 0x6fe0  11  CS_GetDeviceStatusChanged
                       0x6fe0  98  GetDeviceStatusChanged */
  *param_2 = *param_1 & 1;
  param_2[1] = *param_1 >> 1 & 1;
  param_2[2] = *param_1 >> 2 & 1;
  param_2[3] = *param_1 >> 3 & 1;
  param_2[4] = *param_1 >> 4 & 1;
  param_2[5] = *param_1 >> 5 & 1;
  param_2[6] = *param_1 >> 6 & 1;
  return;
}



// FUNCTION 180007030 CS_GetDeviceVersion
// THUNK false

undefined2 CS_GetDeviceVersion(undefined1 *param_1)

{
                    /* 0x7030  12  CS_GetDeviceVersion
                       0x7030  99  GetDeviceVersion */
  return CONCAT11(*param_1,param_1[1]);
}



// FUNCTION 180007040 MouseConfigParser
// THUNK false
// CALLS 18000f050 FUN_18000f050

void MouseConfigParser(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  byte bVar2;
  
                    /* 0x7040  101  MouseConfigParser */
  *param_2 = 1;
  cVar1 = FUN_18000f050((longlong)param_1,0,1);
  if (param_1[1] == cVar1) {
    *param_2 = *param_1;
  }
  param_2[1] = 6;
  bVar2 = 6;
  cVar1 = FUN_18000f050((longlong)param_1,2,3);
  if (param_1[3] == cVar1) {
    bVar2 = param_1[2];
    param_2[1] = bVar2;
  }
  param_2[2] = 2;
  cVar1 = FUN_18000f050((longlong)param_1,4,5);
  if ((param_1[5] == cVar1) && ((byte)param_1[4] < bVar2)) {
    param_2[2] = param_1[4];
  }
  param_2[3] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,6,7);
  if (param_1[7] == cVar1) {
    param_2[3] = param_1[6];
  }
  param_2[4] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,8,9);
  if (param_1[9] == cVar1) {
    param_2[4] = param_1[8];
  }
  param_2[5] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,10,0xb);
  if (param_1[0xb] == cVar1) {
    param_2[5] = param_1[10];
  }
  param_2[6] = 8;
  cVar1 = FUN_18000f050((longlong)param_1,0xa9,0xaa);
  if (param_1[0xaa] == cVar1) {
    param_2[6] = param_1[0xa9];
  }
  param_2[7] = 1;
  cVar1 = FUN_18000f050((longlong)param_1,0xab,0xac);
  if (param_1[0xac] == cVar1) {
    param_2[7] = param_1[0xab] != '\0';
  }
  param_2[8] = 6;
  cVar1 = FUN_18000f050((longlong)param_1,0xad,0xae);
  if (param_1[0xae] == cVar1) {
    param_2[8] = param_1[0xad];
  }
  param_2[9] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,0xaf,0xb0);
  if (param_1[0xb0] == cVar1) {
    param_2[9] = param_1[0xaf] != '\0';
  }
  param_2[10] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,0xb1,0xb2);
  if (param_1[0xb2] == cVar1) {
    param_2[10] = param_1[0xb1] != '\0';
  }
  param_2[0xb] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,0xb3,0xb4);
  if (param_1[0xb4] == cVar1) {
    param_2[0xb] = param_1[0xb3] != '\0';
  }
  param_2[0xc] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,0xb5,0xb6);
  if (param_1[0xb6] == cVar1) {
    param_2[0xc] = param_1[0xb5] != '\0';
  }
  param_2[0xd] = 6;
  cVar1 = FUN_18000f050((longlong)param_1,0xb7,0xb8);
  if (param_1[0xb8] == cVar1) {
    param_2[0xd] = param_1[0xb7];
  }
  param_2[0xe] = 0;
  cVar1 = FUN_18000f050((longlong)param_1,0xb9,0xba);
  if (param_1[0xba] == cVar1) {
    param_2[0xe] = param_1[0xb9];
  }
  return;
}



// FUNCTION 1800072a0 BufferToDPIColor
// THUNK false
// CALLS 18000f050 FUN_18000f050

void BufferToDPIColor(undefined1 *param_1,longlong param_2)

{
  char cVar1;
  
                    /* 0x72a0  1  BufferToDPIColor */
  *(undefined2 *)(param_2 + 3) = 0xffff;
  *(undefined1 *)(param_2 + 5) = 0xff;
  cVar1 = FUN_18000f050((longlong)param_1,0,3);
  if (param_1[3] == cVar1) {
    *(undefined1 *)(param_2 + 3) = *param_1;
    *(undefined1 *)(param_2 + 4) = param_1[1];
    *(undefined1 *)(param_2 + 5) = param_1[2];
  }
  return;
}



// FUNCTION 1800072f0 BufferToDPILed
// THUNK false
// CALLS 18000f050 FUN_18000f050

void BufferToDPILed(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  
                    /* 0x72f0  2  BufferToDPILed */
  *param_2 = 2;
  cVar1 = FUN_18000f050((longlong)param_1,0,1);
  if (param_1[1] == cVar1) {
    *param_2 = *param_1;
  }
  param_2[1] = 0x80;
  cVar1 = FUN_18000f050((longlong)param_1,2,3);
  if (param_1[3] == cVar1) {
    param_2[1] = param_1[2];
  }
  param_2[2] = 3;
  cVar1 = FUN_18000f050((longlong)param_1,4,5);
  if (param_1[5] == cVar1) {
    param_2[2] = param_1[4];
  }
  param_2[3] = 1;
  cVar1 = FUN_18000f050((longlong)param_1,6,7);
  if (param_1[7] == cVar1) {
    param_2[3] = param_1[6];
  }
  return;
}



// FUNCTION 180007390 CS_BufferToDPILed
// THUNK true

// FUNCTION 1800073a0 BufferToLedBar
// THUNK false
// CALLS 18000f050 FUN_18000f050

void BufferToLedBar(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  
                    /* 0x73a0  4  BufferToLedBar */
  *param_2 = 0xffffff01;
  *(undefined2 *)(param_2 + 1) = 0x908;
  cVar1 = FUN_18000f050((longlong)param_1,0,6);
  if (param_1[6] == cVar1) {
    *(undefined1 *)param_2 = *param_1;
    *(undefined1 *)((longlong)param_2 + 1) = param_1[1];
    *(undefined1 *)((longlong)param_2 + 2) = param_1[2];
    *(undefined1 *)((longlong)param_2 + 3) = param_1[3];
    *(undefined1 *)(param_2 + 1) = param_1[4];
    *(undefined1 *)((longlong)param_2 + 5) = param_1[5];
  }
  *(undefined1 *)((longlong)param_2 + 6) = 1;
  cVar1 = FUN_18000f050((longlong)param_1,7,8);
  if (param_1[8] == cVar1) {
    *(undefined1 *)((longlong)param_2 + 6) = param_1[7];
  }
  return;
}



// FUNCTION 180007420 CS_BufferToLedBar
// THUNK true

// FUNCTION 180007430 BufferToKeyFunMap
// THUNK false
// CALLS 18000f050 FUN_18000f050

void BufferToKeyFunMap(undefined1 *param_1,undefined2 *param_2)

{
  char cVar1;
  
                    /* 0x7430  3  BufferToKeyFunMap */
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  cVar1 = FUN_18000f050((longlong)param_1,0,3);
  if (param_1[3] == cVar1) {
    *(undefined1 *)param_2 = *param_1;
    *(undefined1 *)((longlong)param_2 + 1) = param_1[1];
    *(undefined1 *)(param_2 + 1) = param_1[2];
  }
  return;
}



// FUNCTION 180007480 ProtocolDataParser
// THUNK false
// CALLS 180007040 MouseConfigParser
// CALLS 18000f050 FUN_18000f050
// CALLS 180009960 BufferToMacroKey
// CALLS 180009770 BufferToShortcutKey

void ProtocolDataParser(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
                    /* 0x7480  102  ProtocolDataParser */
  DAT_18002851c = 1;
  MouseConfigParser(param_1,param_2);
  puVar2 = param_2 + 0x11;
  lVar3 = 8;
  puVar5 = param_1 + 0xd;
  do {
    *(undefined2 *)(puVar2 + -2) = 0xffff;
    *puVar2 = 0;
    cVar1 = FUN_18000f050((longlong)(puVar5 + -1),0,3);
    if (puVar5[2] == cVar1) {
      puVar2[-2] = puVar5[-1];
      puVar2[-1] = *puVar5;
      *puVar2 = puVar5[1];
    }
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    puVar2[3] = 0xff;
    cVar1 = FUN_18000f050((longlong)(puVar5 + 0x1f),0,3);
    if (puVar5[0x22] == cVar1) {
      puVar2[1] = puVar5[0x1f];
      puVar2[2] = puVar5[0x20];
      puVar2[3] = puVar5[0x21];
    }
    puVar5 = puVar5 + 4;
    puVar2 = puVar2 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_2[0x3f] = 2;
  cVar1 = FUN_18000f050((longlong)(param_1 + 0x4c),0,1);
  if (param_1[0x4d] == cVar1) {
    param_2[0x3f] = param_1[0x4c];
  }
  param_2[0x40] = 0x80;
  cVar1 = FUN_18000f050((longlong)(param_1 + 0x4c),2,3);
  if (param_1[0x4f] == cVar1) {
    param_2[0x40] = param_1[0x4e];
  }
  param_2[0x41] = 3;
  cVar1 = FUN_18000f050((longlong)(param_1 + 0x4c),4,5);
  if (param_1[0x51] == cVar1) {
    param_2[0x41] = param_1[0x50];
  }
  param_2[0x42] = 1;
  cVar1 = FUN_18000f050((longlong)(param_1 + 0x4c),6,7);
  if (param_1[0x53] == cVar1) {
    param_2[0x42] = param_1[0x52];
  }
  *(undefined4 *)(param_2 + 0x43) = 0xffffff01;
  puVar2 = param_1 + 0xa0;
  *(undefined2 *)(param_2 + 0x47) = 0x908;
  cVar1 = FUN_18000f050((longlong)puVar2,0,6);
  if (param_1[0xa6] == cVar1) {
    param_2[0x43] = *puVar2;
    param_2[0x44] = param_1[0xa1];
    param_2[0x45] = param_1[0xa2];
    param_2[0x46] = param_1[0xa3];
    param_2[0x47] = param_1[0xa4];
    param_2[0x48] = param_1[0xa5];
  }
  param_2[0x49] = 1;
  cVar1 = FUN_18000f050((longlong)puVar2,7,8);
  if (param_1[0xa8] == cVar1) {
    param_2[0x49] = param_1[0xa7];
  }
  pbVar7 = param_2 + 0x3bc;
  pbVar6 = param_2 + 0x7c;
  puVar2 = param_2 + 0x4c;
  lVar3 = 0x10;
  pbVar4 = param_1 + 0x300;
  pbVar8 = param_1 + 0x100;
  puVar5 = param_1 + 0x61;
  do {
    *(undefined2 *)(puVar2 + -2) = 0;
    *puVar2 = 0;
    cVar1 = FUN_18000f050((longlong)(puVar5 + -1),0,3);
    if (puVar5[2] == cVar1) {
      puVar2[-2] = puVar5[-1];
      puVar2[-1] = *puVar5;
      *puVar2 = puVar5[1];
    }
    BufferToShortcutKey(pbVar8,pbVar6);
    BufferToMacroKey(pbVar4,pbVar7);
    pbVar6 = pbVar6 + 0x34;
    pbVar7 = pbVar7 + 0x250;
    pbVar8 = pbVar8 + 0x20;
    pbVar4 = pbVar4 + 0x180;
    puVar5 = puVar5 + 4;
    puVar2 = puVar2 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1800076f0 CS_ProtocolDataParser
// THUNK true

// FUNCTION 180007700 FUN_180007700
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007700(longlong *param_1,void *param_2,undefined4 param_3,int param_4,undefined1 param_5
                  )

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  byte bStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_78;
  uStack_56 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
  uStack_55 = (undefined1)((uint)_DAT_18001c740 >> 0x18);
  uStack_54 = (undefined1)_UNK_18001c744;
  uStack_53 = (undefined1)((uint)_UNK_18001c744 >> 8);
  uStack_52 = (undefined1)((uint)_UNK_18001c744 >> 0x10);
  uStack_51 = (undefined1)((uint)_UNK_18001c744 >> 0x18);
  bStack_50 = (byte)_UNK_18001c748;
  uStack_4f = (undefined2)((uint)_UNK_18001c748 >> 8);
  uStack_4d = (undefined1)((uint)_UNK_18001c748 >> 0x18);
  uStack_4c = _UNK_18001c74c;
  local_58 = param_5;
  uStack_57 = 1;
  local_48 = _DAT_18001c740;
  memcpy(local_40,param_2,(longlong)param_4);
  uStack_4f = 0;
  uStack_4d = 0;
  uStack_4c = 0;
  uStack_53 = 0;
  local_48 = 0;
  uStack_55 = 8;
  uStack_54 = 7;
  uStack_52 = (undefined1)((uint)param_3 >> 8);
  bStack_50 = (byte)param_4;
  if (DAT_18002851d != '\0') {
    bStack_50 = bStack_50 | 0x80;
  }
  uStack_51 = (char)param_3;
  memcpy(&uStack_4f,local_40,(longlong)param_4);
  cVar2 = FUN_18000f050((longlong)&uStack_55,0,0x10);
  puVar1 = (undefined8 *)param_1[1];
  local_48 = CONCAT13(cVar2,(undefined3)local_48);
  if (puVar1 == (undefined8 *)param_1[2]) {
    FUN_180006d90(param_1,puVar1,(undefined8 *)&local_58);
  }
  else {
    *puVar1 = CONCAT17(uStack_51,
                       CONCAT16(uStack_52,
                                CONCAT15(uStack_53,
                                         CONCAT14(uStack_54,
                                                  CONCAT13(uStack_55,
                                                           CONCAT12(uStack_56,
                                                                    CONCAT11(uStack_57,local_58)))))
                               ));
    puVar1[1] = CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,bStack_50)));
    *(undefined4 *)(puVar1 + 2) = local_48;
    param_1[1] = param_1[1] + 0x14;
  }
  return;
}



// FUNCTION 180007810 FUN_180007810
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180007700 FUN_180007700
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007810(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined2 local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined2 uStack_47;
  char cStack_45;
  ulonglong local_40;
  
  if (0 < param_4) {
    local_40 = DAT_180023010 ^ (ulonglong)auStack_88;
    iVar3 = 0;
    while( true ) {
      puVar2 = (undefined8 *)(iVar3 + param_2);
      if (param_4 < 0xb) break;
      cStack_45 = 0;
      uStack_56 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
      local_58 = 0x100;
      uStack_53 = 0;
      uVar1 = *puVar2;
      uStack_52 = (undefined1)((uint)param_3 >> 8);
      uStack_50 = 10;
      if (DAT_18002851d != '\0') {
        uStack_50 = 0x8a;
      }
      uStack_55 = 8;
      uStack_54 = 7;
      uStack_47 = *(undefined2 *)(puVar2 + 1);
      uStack_51 = (undefined1)param_3;
      uStack_4f = (undefined2)uVar1;
      uStack_4d = (undefined1)((ulonglong)uVar1 >> 0x10);
      uStack_4c = (undefined4)((ulonglong)uVar1 >> 0x18);
      uStack_48 = (undefined1)((ulonglong)uVar1 >> 0x38);
      cStack_45 = FUN_18000f050((longlong)&uStack_55,0,0x10);
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 == (undefined8 *)param_1[2]) {
        FUN_180006d90(param_1,puVar2,(undefined8 *)&local_58);
        iVar3 = iVar3 + 10;
        param_3 = param_3 + 10;
        param_4 = param_4 + -10;
      }
      else {
        iVar3 = iVar3 + 10;
        param_3 = param_3 + 10;
        *puVar2 = CONCAT17(uStack_51,
                           CONCAT16(uStack_52,
                                    CONCAT15(uStack_53,
                                             CONCAT14(uStack_54,
                                                      CONCAT13(uStack_55,
                                                               CONCAT12(uStack_56,local_58))))));
        puVar2[1] = CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,uStack_50)));
        *(uint *)(puVar2 + 2) = CONCAT13(cStack_45,CONCAT21(uStack_47,uStack_48));
        param_1[1] = param_1[1] + 0x14;
        param_4 = param_4 + -10;
      }
    }
    FUN_180007700(param_1,puVar2,param_3,param_4,1);
  }
  return;
}



// FUNCTION 180007960 CS_ProtocolDataUpdate
// THUNK false
// CALLS 1800079a0 FUN_1800079a0

void CS_ProtocolDataUpdate(char *param_1)

{
                    /* 0x7960  15  CS_ProtocolDataUpdate
                       0x7960  103  ProtocolDataUpdate */
  if (DAT_18002851c != '\0') {
    FUN_1800079a0(param_1,&DAT_180025c60);
    return;
  }
  return;
}



// FUNCTION 1800079a0 FUN_1800079a0
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800195a8 memset
// CALLS 18000f050 FUN_18000f050
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS 180019703 memcpy
// CALLS 180007810 FUN_180007810
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800079a0(char *param_1,char *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  void *pvVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  void *_Memory;
  longlong lVar19;
  char *pcVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte *pbVar26;
  int iVar27;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  char *local_390;
  char *local_388;
  longlong local_380;
  undefined1 local_378;
  undefined1 uStack_377;
  undefined1 uStack_376;
  undefined1 uStack_375;
  undefined1 uStack_374;
  undefined1 uStack_373;
  undefined1 uStack_372;
  undefined1 uStack_371;
  undefined1 uStack_370;
  undefined2 uStack_36f;
  char cStack_36d;
  char cStack_36c;
  undefined2 uStack_36b;
  uint uStack_369;
  char cStack_365;
  void *local_360;
  undefined8 *puStack_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined2 local_344;
  byte local_342;
  byte local_329;
  byte local_327 [351];
  byte local_1c8 [384];
  ulonglong local_48;
  
  local_48 = DAT_180023010 ^ (ulonglong)auStack_3b8;
  pbVar26 = (byte *)0x0;
  lVar25 = 0x10;
  local_350 = (undefined8 *)0x0;
  local_360 = (void *)0x0;
  puStack_358 = (undefined8 *)0x0;
  local_390 = param_2;
  local_388 = param_1;
  if (*param_2 != *param_1) {
    *param_2 = *param_1;
    local_348 = CONCAT31(local_348._1_3_,*param_1);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    uStack_371 = 0;
    uStack_370 = 2;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    FUN_180006d90((longlong *)&local_360,(void *)0x0,(undefined8 *)&local_378);
  }
  if (param_2[1] != param_1[1]) {
    param_2[1] = param_1[1];
    local_348 = CONCAT31(local_348._1_3_,param_1[1]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 2;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puStack_358 == local_350) {
      FUN_180006d90((longlong *)&local_360,puStack_358,(undefined8 *)&local_378);
    }
    else {
      *puStack_358 = CONCAT17(uStack_371,
                              CONCAT16(uStack_372,
                                       CONCAT15(uStack_373,
                                                CONCAT14(uStack_374,
                                                         CONCAT13(uStack_375,
                                                                  CONCAT12(uStack_376,
                                                                           CONCAT11(uStack_377,
                                                                                    local_378)))))))
      ;
      puStack_358[1] =
           CONCAT17((undefined1)uStack_369,
                    CONCAT25(uStack_36b,
                             CONCAT14(cStack_36c,
                                      CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370)))));
      *(uint *)(puStack_358 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puStack_358 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[2] != param_1[2]) {
    param_2[2] = param_1[2];
    local_348 = CONCAT31(local_348._1_3_,param_1[2]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 4;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[3] != param_1[3]) {
    param_2[3] = param_1[3];
    local_348 = CONCAT31(local_348._1_3_,param_1[3]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 6;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[4] != param_1[4]) {
    param_2[4] = param_1[4];
    local_348 = CONCAT31(local_348._1_3_,param_1[4]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 8;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[5] != param_1[5]) {
    param_2[5] = param_1[5];
    local_348 = CONCAT31(local_348._1_3_,param_1[5]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 10;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[6] != param_1[6]) {
    param_2[6] = param_1[6];
    local_348 = CONCAT31(local_348._1_3_,param_1[6]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xa9;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[7] != param_1[7]) {
    param_2[7] = param_1[7];
    local_348 = CONCAT31(local_348._1_3_,param_1[7] != '\0');
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xab;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[8] != param_1[8]) {
    param_2[8] = param_1[8];
    local_348 = CONCAT31(local_348._1_3_,param_1[8]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xad;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[9] != param_1[9]) {
    param_2[9] = param_1[9];
    local_348 = CONCAT31(local_348._1_3_,param_1[9]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xaf;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[10] != param_1[10]) {
    param_2[10] = param_1[10];
    local_348 = CONCAT31(local_348._1_3_,param_1[10]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xb1;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[0xb] != param_1[0xb]) {
    param_2[0xb] = param_1[0xb];
    local_348 = CONCAT31(local_348._1_3_,param_1[0xb]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xb3;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[0xc] != param_1[0xc]) {
    param_2[0xc] = param_1[0xc];
    local_348 = CONCAT31(local_348._1_3_,param_1[0xc]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xb5;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[0xd] != param_1[0xd]) {
    param_2[0xd] = param_1[0xd];
    local_348 = CONCAT31(local_348._1_3_,param_1[0xd]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xb7;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  puVar17 = puStack_358;
  if (param_2[0xe] != param_1[0xe]) {
    param_2[0xe] = param_1[0xe];
    local_348 = CONCAT31(local_348._1_3_,param_1[0xe]);
    cVar10 = FUN_18000f050((longlong)&local_348,0,1);
    local_348._0_2_ = CONCAT11(cVar10,(undefined1)local_348);
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
    uStack_370 = 2;
    local_378 = 1;
    uStack_377 = 1;
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_36f = (undefined2)local_348;
    uStack_371 = 0xb9;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
    }
  }
  local_398 = 8;
  lVar19 = (longlong)param_1 - (longlong)param_2;
  pcVar20 = param_2 + 0x10;
  iVar27 = 0x2c;
  puVar17 = puStack_358;
  local_380 = lVar19;
  do {
    uVar2 = _DAT_18001c740;
    if (((pcVar20[-1] != pcVar20[lVar19 + -1]) || (*pcVar20 != pcVar20[lVar19])) ||
       (pcVar20[1] != pcVar20[lVar19 + 1])) {
      pcVar20[-1] = pcVar20[lVar19 + -1];
      *pcVar20 = pcVar20[lVar19];
      pcVar20[1] = pcVar20[lVar19 + 1];
      cStack_36d = pcVar20[lVar19 + 1];
      uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
      uVar5 = CONCAT21(CONCAT11(cStack_36d,pcVar20[lVar19]),pcVar20[lVar19 + -1]);
      cStack_36c = 'U' - (cStack_36d + pcVar20[lVar19] + pcVar20[lVar19 + -1]);
      local_378 = 1;
      uStack_377 = 1;
      local_348 = CONCAT13(cStack_36c,uVar5);
      uStack_36b = 0;
      uStack_369 = 0;
      cStack_365 = 0;
      uStack_373 = 0;
      uStack_372 = (undefined1)((uint)(iVar27 + -0x20) >> 8);
      uStack_370 = 4;
      if (DAT_18002851d != '\0') {
        uStack_370 = 0x84;
      }
      uStack_371 = (undefined1)(iVar27 + -0x20);
      uStack_36f = (undefined2)uVar5;
      uStack_375 = 8;
      uStack_374 = 7;
      cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
      if (puVar17 == local_350) {
        FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
        puVar17 = puStack_358;
      }
      else {
        *puVar17 = CONCAT17(uStack_371,
                            CONCAT16(uStack_372,
                                     CONCAT15(uStack_373,
                                              CONCAT14(uStack_374,
                                                       CONCAT13(uStack_375,
                                                                CONCAT12(uStack_376,
                                                                         CONCAT11(uStack_377,
                                                                                  local_378)))))));
        puVar17[1] = CONCAT17((undefined1)uStack_369,
                              CONCAT25(uStack_36b,
                                       CONCAT14(cStack_36c,
                                                CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))
                                               )));
        *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
        puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
        puVar17 = puStack_358;
      }
    }
    uVar2 = _DAT_18001c740;
    if (((pcVar20[2] != pcVar20[lVar19 + 2]) || (pcVar20[3] != pcVar20[lVar19 + 3])) ||
       (pcVar20[4] != pcVar20[lVar19 + 4])) {
      pcVar20[2] = pcVar20[lVar19 + 2];
      pcVar20[3] = pcVar20[lVar19 + 3];
      pcVar20[4] = pcVar20[lVar19 + 4];
      cStack_36d = pcVar20[lVar19 + 4];
      uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
      uVar5 = CONCAT21(CONCAT11(cStack_36d,pcVar20[lVar19 + 3]),pcVar20[lVar19 + 2]);
      cStack_36c = 'U' - (pcVar20[lVar19 + 3] + pcVar20[lVar19 + 2] + cStack_36d);
      local_378 = 1;
      uStack_377 = 1;
      local_348 = CONCAT13(cStack_36c,uVar5);
      uStack_36b = 0;
      uStack_369 = 0;
      cStack_365 = 0;
      uStack_373 = 0;
      uStack_372 = (undefined1)((uint)iVar27 >> 8);
      uStack_370 = 4;
      if (DAT_18002851d != '\0') {
        uStack_370 = 0x84;
      }
      uStack_375 = 8;
      uStack_374 = 7;
      uStack_36f = (undefined2)uVar5;
      uStack_371 = (undefined1)iVar27;
      cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
      if (puVar17 == local_350) {
        FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
        puVar17 = puStack_358;
      }
      else {
        *puVar17 = CONCAT17(uStack_371,
                            CONCAT16(uStack_372,
                                     CONCAT15(uStack_373,
                                              CONCAT14(uStack_374,
                                                       CONCAT13(uStack_375,
                                                                CONCAT12(uStack_376,
                                                                         CONCAT11(uStack_377,
                                                                                  local_378)))))));
        puVar17[1] = CONCAT17((undefined1)uStack_369,
                              CONCAT25(uStack_36b,
                                       CONCAT14(cStack_36c,
                                                CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))
                                               )));
        *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
        puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
        puVar17 = puStack_358;
      }
    }
    pcVar7 = local_388;
    pcVar21 = local_390;
    uVar2 = _DAT_18001c740;
    iVar27 = iVar27 + 4;
    pcVar20 = pcVar20 + 6;
    local_398 = local_398 + -1;
  } while (local_398 != 0);
  if (local_390[0x3f] != local_388[0x3f]) {
    local_390[0x3f] = local_388[0x3f];
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
    local_348 = CONCAT31(CONCAT21(local_348._2_2_,'U' - local_388[0x3f]),local_388[0x3f]);
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    uStack_370 = 2;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    local_378 = 1;
    uStack_377 = 1;
    uStack_36f = (undefined2)local_348;
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_371 = 0x4c;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      puVar17 = puStack_358;
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      puVar17 = puStack_358;
    }
  }
  uVar2 = _DAT_18001c740;
  if (pcVar21[0x40] != pcVar7[0x40]) {
    pcVar21[0x40] = pcVar7[0x40];
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
    uStack_370 = 2;
    local_348 = CONCAT31(CONCAT21(local_348._2_2_,'U' - pcVar7[0x40]),pcVar7[0x40]);
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    local_378 = 1;
    uStack_377 = 1;
    uStack_36f = (undefined2)local_348;
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_371 = 0x4e;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      puVar17 = puStack_358;
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      puVar17 = puStack_358;
    }
  }
  uVar2 = _DAT_18001c740;
  if (pcVar21[0x41] != pcVar7[0x41]) {
    pcVar21[0x41] = pcVar7[0x41];
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
    uStack_370 = 2;
    local_348 = CONCAT31(CONCAT21(local_348._2_2_,'U' - pcVar7[0x41]),pcVar7[0x41]);
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    local_378 = 1;
    uStack_377 = 1;
    uStack_36f = (undefined2)local_348;
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_371 = 0x50;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      puVar17 = puStack_358;
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      puVar17 = puStack_358;
    }
  }
  uVar2 = _DAT_18001c740;
  if (pcVar21[0x42] != pcVar7[0x42]) {
    pcVar21[0x42] = pcVar7[0x42];
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
    uStack_370 = 2;
    local_348 = CONCAT31(CONCAT21(local_348._2_2_,'U' - pcVar7[0x42]),pcVar7[0x42]);
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    local_378 = 1;
    uStack_377 = 1;
    uStack_36f = (undefined2)local_348;
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_371 = 0x52;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      puVar17 = puStack_358;
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      puVar17 = puStack_358;
    }
  }
  if (((pcVar21[0x43] != pcVar7[0x43]) || (pcVar21[0x47] != pcVar7[0x47])) ||
     ((pcVar21[0x48] != pcVar7[0x48] ||
      (((pcVar21[0x44] != pcVar7[0x44] || (pcVar21[0x45] != pcVar7[0x45])) ||
       (pcVar21[0x46] != pcVar7[0x46])))))) {
    pcVar21[0x43] = pcVar7[0x43];
    pcVar21[0x47] = pcVar7[0x47];
    pcVar21[0x48] = pcVar7[0x48];
    pcVar21[0x44] = pcVar7[0x44];
    pcVar21[0x45] = pcVar7[0x45];
    pcVar21[0x46] = pcVar7[0x46];
    cStack_36d = pcVar7[0x45];
    uStack_36b = *(undefined2 *)(pcVar7 + 0x47);
    pcVar20 = pcVar7 + 0x43;
    cStack_36c = pcVar7[0x46];
    uStack_36f = *(undefined2 *)pcVar20;
    local_348 = *(undefined4 *)pcVar20;
    cStack_365 = 0;
    local_342 = 0x55 - (*pcVar20 + cStack_36c + cStack_36d + pcVar7[0x44] + pcVar7[0x48] +
                       pcVar7[0x47]);
    uStack_377 = 1;
    uStack_376 = 0xff;
    uStack_370 = 7;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x87;
    }
    uStack_369 = (uint)local_342;
    local_378 = 1;
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_371 = 0xa0;
    local_344 = uStack_36b;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      puVar17 = puStack_358;
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      puVar17 = puStack_358;
    }
  }
  uVar2 = _DAT_18001c740;
  if (pcVar21[0x49] != pcVar7[0x49]) {
    pcVar21[0x49] = pcVar7[0x49];
    cStack_365 = 0;
    uStack_376 = (undefined1)((uint)uVar2 >> 0x10);
    uStack_370 = 2;
    local_348 = CONCAT31(CONCAT21(local_348._2_2_,'U' - pcVar7[0x49]),pcVar7[0x49]);
    cStack_36d = '\0';
    cStack_36c = '\0';
    uStack_36b = 0;
    uStack_369 = 0;
    if (DAT_18002851d != '\0') {
      uStack_370 = 0x82;
    }
    local_378 = 1;
    uStack_377 = 1;
    uStack_36f = (undefined2)local_348;
    uStack_375 = 8;
    uStack_374 = 7;
    uStack_373 = 0;
    uStack_372 = 0;
    uStack_371 = 0xa7;
    cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
    if (puVar17 == local_350) {
      FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      puVar17 = puStack_358;
    }
    else {
      *puVar17 = CONCAT17(uStack_371,
                          CONCAT16(uStack_372,
                                   CONCAT15(uStack_373,
                                            CONCAT14(uStack_374,
                                                     CONCAT13(uStack_375,
                                                              CONCAT12(uStack_376,
                                                                       CONCAT11(uStack_377,local_378
                                                                               )))))));
      puVar17[1] = CONCAT17((undefined1)uStack_369,
                            CONCAT25(uStack_36b,
                                     CONCAT14(cStack_36c,
                                              CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))))
                           );
      *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
      puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      puVar17 = puStack_358;
    }
  }
  iVar27 = 0x60;
  local_398 = 0x10;
  pcVar21 = pcVar21 + 0x4a;
  do {
    cVar10 = pcVar21[lVar19];
    if (((*pcVar21 != cVar10) || (pcVar21[1] != pcVar21[lVar19 + 1])) ||
       (pcVar21[2] != pcVar21[lVar19 + 2])) {
      cStack_36d = pcVar21[lVar19 + 2];
      uStack_376 = (undefined1)((uint)_DAT_18001c740 >> 0x10);
      local_348._0_2_ = CONCAT11(pcVar21[lVar19 + 1],cVar10);
      cStack_36c = 'U' - (cVar10 + cStack_36d + pcVar21[lVar19 + 1]);
      local_378 = 1;
      uStack_377 = 1;
      local_348 = CONCAT13(cStack_36c,CONCAT12(cStack_36d,(undefined2)local_348));
      uStack_36b = 0;
      uStack_369 = 0;
      cStack_365 = 0;
      uStack_373 = 0;
      uStack_372 = (undefined1)((uint)iVar27 >> 8);
      uStack_370 = 4;
      if (DAT_18002851d != '\0') {
        uStack_370 = 0x84;
      }
      uStack_375 = 8;
      uStack_374 = 7;
      uStack_36f = (undefined2)local_348;
      uStack_371 = (undefined1)iVar27;
      cStack_365 = FUN_18000f050((longlong)&uStack_375,0,0x10);
      if (puVar17 == local_350) {
        FUN_180006d90((longlong *)&local_360,puVar17,(undefined8 *)&local_378);
      }
      else {
        *puVar17 = CONCAT17(uStack_371,
                            CONCAT16(uStack_372,
                                     CONCAT15(uStack_373,
                                              CONCAT14(uStack_374,
                                                       CONCAT13(uStack_375,
                                                                CONCAT12(uStack_376,
                                                                         CONCAT11(uStack_377,
                                                                                  local_378)))))));
        puVar17[1] = CONCAT17((undefined1)uStack_369,
                              CONCAT25(uStack_36b,
                                       CONCAT14(cStack_36c,
                                                CONCAT13(cStack_36d,CONCAT21(uStack_36f,uStack_370))
                                               )));
        *(uint *)(puVar17 + 2) = CONCAT13(cStack_365,uStack_369._1_3_);
        puStack_358 = (undefined8 *)((longlong)puVar17 + 0x14);
      }
      *pcVar21 = pcVar21[lVar19];
      pcVar21[1] = pcVar21[lVar19 + 1];
      pcVar21[2] = pcVar21[lVar19 + 2];
      puVar17 = puStack_358;
    }
    iVar27 = iVar27 + 4;
    pcVar21 = pcVar21 + 3;
    local_398 = local_398 + -1;
  } while (local_398 != 0);
  iVar27 = 0x100;
  lVar22 = (longlong)local_390 - (longlong)local_388;
  pbVar18 = (byte *)(local_388 + 0x81);
  local_398 = 0;
  do {
    memset(&local_348,0xff,0x180);
    memset(local_1c8,0xff,0x180);
    bVar11 = pbVar18[-5];
    uVar24 = (ulonglong)bVar11;
    local_348 = CONCAT31(local_348._1_3_,bVar11);
    if ((byte)(bVar11 - 2) < 5) {
      pbVar14 = pbVar26;
      iVar23 = 0;
      if (bVar11 != 0) {
        pbVar16 = (byte *)((longlong)&local_348 + 1);
        pbVar12 = pbVar18;
        iVar9 = 4;
        do {
          iVar23 = iVar9;
          if (pbVar12[-1] == 0) {
            bVar11 = 0x80;
          }
          else {
            bVar11 = 0;
            if (pbVar12[-1] == 1) {
              bVar11 = 0x40;
            }
          }
          pbVar14 = pbVar16 + (4 - ((longlong)&local_348 + 1));
          *pbVar16 = bVar11 | *pbVar12;
          pbVar16[1] = pbVar12[1];
          pbVar13 = pbVar12 + 2;
          pbVar12 = pbVar12 + 8;
          pbVar16[2] = *pbVar13;
          pbVar16 = pbVar16 + 3;
          uVar24 = uVar24 - 1;
          lVar19 = local_380;
          iVar9 = iVar23 + 3;
        } while (uVar24 != 0);
      }
      bVar11 = FUN_18000f050((longlong)&local_348,0,iVar23);
      *(byte *)((longlong)&local_348 + (longlong)pbVar14) = bVar11;
    }
    else {
      pbVar18[-5] = 0;
      pbVar18[-1] = 0;
      pbVar18[0] = 0;
      pbVar18[1] = 0;
      pbVar18[2] = 0;
      pbVar18[3] = 0;
      pbVar18[4] = 0;
      pbVar18[5] = 0;
      pbVar18[6] = 0;
      pbVar18[7] = 0;
      pbVar18[8] = 0;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      pbVar18[0x10] = 0;
      pbVar18[0x11] = 0;
      pbVar18[0x12] = 0;
      pbVar18[0x13] = 0;
      pbVar18[0x14] = 0;
      pbVar18[0x15] = 0;
      pbVar18[0x16] = 0;
      pbVar18[0x17] = 0;
      pbVar18[0x18] = 0;
      pbVar18[0x19] = 0;
      pbVar18[0x1a] = 0;
      pbVar18[0x1b] = 0;
      pbVar18[0x1c] = 0;
      pbVar18[0x1d] = 0;
      pbVar18[0x1e] = 0;
      pbVar18[0x1f] = 0;
      pbVar18[0x20] = 0;
      pbVar18[0x21] = 0;
      pbVar18[0x22] = 0;
      pbVar18[0x23] = 0;
      pbVar18[0x24] = 0;
      pbVar18[0x25] = 0;
      pbVar18[0x26] = 0;
      pbVar18[0x27] = 0;
      pbVar18[0x28] = 0;
      pbVar18[0x29] = 0;
      pbVar18[0x2a] = 0;
      pbVar18[0x2b] = 0;
      pbVar18[0x2c] = 0;
      pbVar18[0x2d] = 0;
      pbVar18[0x2e] = 0;
    }
    local_1c8[0] = pbVar18[lVar22 + -5];
    uVar24 = (ulonglong)local_1c8[0];
    pbVar14 = pbVar26;
    if ((byte)(local_1c8[0] - 2) < 5) {
      pbVar16 = pbVar26;
      iVar23 = 0;
      if (local_1c8[0] != 0) {
        pbVar12 = local_1c8 + 1;
        pbVar13 = pbVar18 + lVar22;
        iVar9 = 4;
        do {
          iVar23 = iVar9;
          if (pbVar13[-1] == 0) {
            bVar11 = 0x80;
          }
          else {
            bVar11 = 0;
            if (pbVar13[-1] == 1) {
              bVar11 = 0x40;
            }
          }
          pbVar16 = pbVar12 + (4 - (longlong)(local_1c8 + 1));
          *pbVar12 = bVar11 | *pbVar13;
          pbVar12[1] = pbVar13[1];
          pbVar1 = pbVar13 + 2;
          pbVar13 = pbVar13 + 8;
          pbVar12[2] = *pbVar1;
          pbVar12 = pbVar12 + 3;
          uVar24 = uVar24 - 1;
          lVar19 = local_380;
          iVar9 = iVar23 + 3;
        } while (uVar24 != 0);
      }
      bVar11 = FUN_18000f050((longlong)local_1c8,0,iVar23);
      local_1c8[(longlong)pbVar16] = bVar11;
    }
    else {
      pbVar18[lVar22 + -5] = 0;
      (pbVar18 + lVar22 + -1)[0] = 0;
      (pbVar18 + lVar22 + -1)[1] = 0;
      pbVar18[lVar22 + 1] = 0;
      pbVar18[lVar22 + 2] = 0;
      pbVar16 = pbVar18 + lVar22 + 3;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16 = pbVar18 + lVar22 + 7;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16 = pbVar18 + lVar22 + 0xf;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16 = pbVar18 + lVar22 + 0x17;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16 = pbVar18 + lVar22 + 0x1f;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16 = pbVar18 + lVar22 + 0x27;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
    }
    do {
      if (*(byte *)((longlong)&local_348 + (longlong)pbVar14) != local_1c8[(longlong)pbVar14]) {
        FUN_180007810((longlong *)&local_360,(longlong)&local_348,iVar27,(uint)pbVar18[-5] * 3 + 2);
        bVar11 = pbVar18[-5];
        pbVar18[lVar22 + -5] = bVar11;
        if (bVar11 != 0) {
          pbVar14 = pbVar18 + lVar22;
          pbVar16 = pbVar26;
          do {
            uVar15 = (int)pbVar16 + 1;
            pbVar16 = (byte *)(ulonglong)uVar15;
            *pbVar14 = pbVar14[lVar19];
            pbVar14[-1] = pbVar14[lVar19 + -1];
            pbVar14[1] = pbVar14[lVar19 + 1];
            pbVar14[2] = pbVar14[lVar19 + 2];
            *(undefined4 *)(pbVar14 + 3) = *(undefined4 *)(pbVar14 + lVar19 + 3);
            pbVar14 = pbVar14 + 8;
          } while ((int)uVar15 < (int)(uint)pbVar18[lVar22 + -5]);
        }
        break;
      }
      pbVar14 = pbVar14 + 1;
    } while ((longlong)pbVar14 < 0x180);
    iVar27 = iVar27 + 0x20;
    pbVar18 = pbVar18 + 0x34;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  iVar27 = 0x300;
  pcVar20 = local_390 + 0x3bd;
  pbVar18 = (byte *)(local_388 + 0x3db);
  do {
    memset(&local_348,0xff,0x180);
    memset(local_1c8,0xff,0x180);
    bVar11 = pbVar18[-0x1f];
    pbVar14 = (byte *)0x20;
    local_348 = CONCAT31(local_348._1_3_,bVar11);
    if (bVar11 != 0) {
      memcpy((void *)((longlong)&local_348 + 1),pbVar18 + -0x1e,(ulonglong)bVar11);
    }
    local_329 = *pbVar18;
    if (local_329 != 0) {
      pbVar16 = local_327;
      pbVar12 = pbVar18 + 2;
      uVar24 = (ulonglong)local_329;
      do {
        bVar11 = *pbVar12 & 0xf;
        if (pbVar12[-1] == 0) {
          bVar11 = bVar11 | 0x80;
        }
        else if (pbVar12[-1] == 1) {
          bVar11 = bVar11 | 0x40;
        }
        pbVar16[-1] = bVar11;
        pbVar14 = pbVar16 + (0x25 - (longlong)local_327);
        uVar2 = *(undefined4 *)(pbVar12 + 3);
        *pbVar16 = pbVar12[1];
        pbVar13 = pbVar12 + 2;
        pbVar12 = pbVar12 + 8;
        pbVar16[1] = *pbVar13;
        pbVar16[2] = (byte)((uint)uVar2 >> 8);
        pbVar16[3] = (byte)uVar2;
        pbVar16 = pbVar16 + 5;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    bVar11 = FUN_18000f050((longlong)&local_348,0x1f,(uint)*pbVar18 * 5 + 0x20);
    *(byte *)((longlong)&local_348 + (longlong)pbVar14) = bVar11;
    pbVar14 = (byte *)0x20;
    local_1c8[0] = pbVar18[lVar22 + -0x1f];
    if (local_1c8[0] != 0) {
      memcpy(local_1c8 + 1,pbVar18 + lVar22 + -0x1e,(ulonglong)local_1c8[0]);
    }
    local_1c8[0x1f] = pbVar18[lVar22];
    if (local_1c8[0x1f] != 0) {
      pbVar12 = pbVar18 + lVar22 + 2;
      pbVar16 = local_1c8 + 0x21;
      uVar24 = (ulonglong)local_1c8[0x1f];
      do {
        bVar11 = *pbVar12 & 0xf;
        if (pbVar12[-1] == 0) {
          bVar11 = bVar11 | 0x80;
        }
        else if (pbVar12[-1] == 1) {
          bVar11 = bVar11 | 0x40;
        }
        pbVar16[-1] = bVar11;
        pbVar14 = pbVar16 + (0x25 - (longlong)(local_1c8 + 0x21));
        uVar2 = *(undefined4 *)(pbVar12 + 3);
        *pbVar16 = pbVar12[1];
        pbVar13 = pbVar12 + 2;
        pbVar12 = pbVar12 + 8;
        pbVar16[1] = *pbVar13;
        pbVar16[2] = (byte)((uint)uVar2 >> 8);
        pbVar16[3] = (byte)uVar2;
        pbVar16 = pbVar16 + 5;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    bVar11 = FUN_18000f050((longlong)local_1c8,0x1f,(uint)pbVar18[lVar22] * 5 + 0x20);
    local_1c8[(longlong)pbVar14] = bVar11;
    pbVar14 = pbVar26;
    while (*(byte *)((longlong)&local_348 + (longlong)pbVar14) == local_1c8[(longlong)pbVar14]) {
      pbVar14 = pbVar14 + 1;
      if (0x17f < (longlong)pbVar14) goto LAB_180009552;
    }
    FUN_180007810((longlong *)&local_360,(longlong)&local_348,iVar27,
                  (uint)*pbVar18 * 4 + 0x21 + (uint)*pbVar18);
    bVar11 = pbVar18[-0x1f];
    pbVar18[lVar22 + -0x1f] = bVar11;
    memcpy(pcVar20,pcVar20 + lVar19,(ulonglong)bVar11);
    pbVar18[lVar22] = *pbVar18;
    pbVar14 = pbVar18 + lVar22 + 2;
    lVar25 = 7;
    do {
      *pbVar14 = pbVar14[lVar19];
      pbVar14[-1] = pbVar14[lVar19 + -1];
      pbVar14[1] = pbVar14[lVar19 + 1];
      pbVar14[2] = pbVar14[lVar19 + 2];
      *(undefined4 *)(pbVar14 + 3) = *(undefined4 *)(pbVar14 + lVar19 + 3);
      pbVar14[8] = pbVar14[lVar19 + 8];
      pbVar14[7] = pbVar14[lVar19 + 7];
      pbVar14[9] = pbVar14[lVar19 + 9];
      pbVar14[10] = pbVar14[lVar19 + 10];
      *(undefined4 *)(pbVar14 + 0xb) = *(undefined4 *)(pbVar14 + lVar19 + 0xb);
      pbVar14[0x10] = pbVar14[lVar19 + 0x10];
      pbVar14[0xf] = pbVar14[lVar19 + 0xf];
      pbVar14[0x11] = pbVar14[lVar19 + 0x11];
      pbVar14[0x12] = pbVar14[lVar19 + 0x12];
      *(undefined4 *)(pbVar14 + 0x13) = *(undefined4 *)(pbVar14 + lVar19 + 0x13);
      pbVar14[0x18] = pbVar14[lVar19 + 0x18];
      pbVar14[0x17] = pbVar14[lVar19 + 0x17];
      pbVar14[0x19] = pbVar14[lVar19 + 0x19];
      pbVar14[0x1a] = pbVar14[lVar19 + 0x1a];
      *(undefined4 *)(pbVar14 + 0x1b) = *(undefined4 *)(pbVar14 + lVar19 + 0x1b);
      pbVar14[0x20] = pbVar14[lVar19 + 0x20];
      pbVar14[0x1f] = pbVar14[lVar19 + 0x1f];
      pbVar14[0x21] = pbVar14[lVar19 + 0x21];
      pbVar14[0x22] = pbVar14[lVar19 + 0x22];
      *(undefined4 *)(pbVar14 + 0x23) = *(undefined4 *)(pbVar14 + lVar19 + 0x23);
      pbVar14[0x28] = pbVar14[lVar19 + 0x28];
      pbVar14[0x27] = pbVar14[lVar19 + 0x27];
      pbVar14[0x29] = pbVar14[lVar19 + 0x29];
      pbVar14[0x2a] = pbVar14[lVar19 + 0x2a];
      *(undefined4 *)(pbVar14 + 0x2b) = *(undefined4 *)(pbVar14 + lVar19 + 0x2b);
      pbVar14[0x30] = pbVar14[lVar19 + 0x30];
      pbVar14[0x2f] = pbVar14[lVar19 + 0x2f];
      pbVar14[0x31] = pbVar14[lVar19 + 0x31];
      pbVar14[0x32] = pbVar14[lVar19 + 0x32];
      *(undefined4 *)(pbVar14 + 0x33) = *(undefined4 *)(pbVar14 + lVar19 + 0x33);
      pbVar14[0x38] = pbVar14[lVar19 + 0x38];
      pbVar14[0x37] = pbVar14[lVar19 + 0x37];
      pbVar14[0x39] = pbVar14[lVar19 + 0x39];
      pbVar14[0x3a] = pbVar14[lVar19 + 0x3a];
      *(undefined4 *)(pbVar14 + 0x3b) = *(undefined4 *)(pbVar14 + lVar19 + 0x3b);
      pbVar14[0x40] = pbVar14[lVar19 + 0x40];
      pbVar14[0x3f] = pbVar14[lVar19 + 0x3f];
      pbVar14[0x41] = pbVar14[lVar19 + 0x41];
      pbVar14[0x42] = pbVar14[lVar19 + 0x42];
      *(undefined4 *)(pbVar14 + 0x43) = *(undefined4 *)(pbVar14 + lVar19 + 0x43);
      pbVar14[0x48] = pbVar14[lVar19 + 0x48];
      pbVar14[0x47] = pbVar14[lVar19 + 0x47];
      pbVar14[0x49] = pbVar14[lVar19 + 0x49];
      pbVar14[0x4a] = pbVar14[lVar19 + 0x4a];
      *(undefined4 *)(pbVar14 + 0x4b) = *(undefined4 *)(pbVar14 + lVar19 + 0x4b);
      pbVar14 = pbVar14 + 0x50;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
LAB_180009552:
    pvVar8 = local_360;
    iVar27 = iVar27 + 0x180;
    pcVar20 = pcVar20 + 0x250;
    pbVar18 = pbVar18 + 0x250;
    if (0x1aff < iVar27) {
      pbVar18 = (byte *)(((longlong)puStack_358 - (longlong)local_360 >> 2) * -0x3333333333333333);
      if (pbVar18 != (byte *)0x0) {
        iVar27 = _Mtx_lock(&DAT_18002a550);
        if (iVar27 != 0) {
          std::_Throw_C_error(iVar27);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        do {
          puVar6 = DAT_18002a5a8;
          puVar17 = (undefined8 *)((longlong)pvVar8 + (longlong)pbVar26 * 0x14);
          if (DAT_18002a5a8 == DAT_18002a5b0) {
            FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,puVar17);
          }
          else {
            uVar4 = puVar17[1];
            *DAT_18002a5a8 = *puVar17;
            puVar6[1] = uVar4;
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar17 + 2);
            DAT_18002a5a8 = (undefined8 *)((longlong)DAT_18002a5a8 + 0x14);
          }
          pbVar26 = (byte *)(ulonglong)((int)pbVar26 + 1);
        } while (pbVar26 < pbVar18);
        _Mtx_unlock(&DAT_18002a550);
      }
      if (pvVar8 != (void *)0x0) {
        _Memory = pvVar8;
        if ((0xfff < (ulonglong)(((longlong)local_350 - (longlong)pvVar8 >> 2) << 2)) &&
           (_Memory = *(void **)((longlong)pvVar8 + -8),
           0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      return;
    }
  } while( true );
}



// FUNCTION 180009680 CS_ProtocolDataCompareUpdate
// THUNK true

// FUNCTION 180009690 ShortcutKeyToBuffer
// THUNK false
// CALLS 18000f050 FUN_18000f050

void ShortcutKeyToBuffer(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
                    /* 0x9690  105  ShortcutKeyToBuffer */
  iVar7 = 0;
  iVar5 = 0;
  *param_2 = *param_1;
  if ((byte)(*param_1 - 2) < 5) {
    if (*param_1 != 0) {
      pbVar4 = param_2 + 1;
      pbVar6 = param_1 + 5;
      iVar2 = 4;
      do {
        iVar5 = iVar2;
        *pbVar4 = 0;
        if (pbVar6[-1] == 0) {
          *pbVar4 = 0x80;
          bVar3 = 0x80;
        }
        else {
          bVar3 = 0;
          if (pbVar6[-1] == 1) {
            *pbVar4 = 0x40;
            bVar3 = 0x40;
          }
        }
        *pbVar4 = bVar3 | *pbVar6;
        iVar7 = iVar7 + 1;
        pbVar4[1] = pbVar6[1];
        pbVar1 = pbVar6 + 2;
        pbVar6 = pbVar6 + 8;
        pbVar4[2] = *pbVar1;
        pbVar4 = pbVar4 + 3;
        iVar2 = iVar5 + 3;
      } while (iVar7 < (int)(uint)*param_1);
    }
    bVar3 = FUN_18000f050((longlong)param_2,0,iVar5);
    param_2[iVar5] = bVar3;
    return;
  }
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return;
}



// FUNCTION 180009770 BufferToShortcutKey
// THUNK false
// CALLS 18000f050 FUN_18000f050

void BufferToShortcutKey(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
                    /* 0x9770  6  BufferToShortcutKey */
  bVar2 = *param_1;
  *param_2 = bVar2;
  uVar4 = (uint)bVar2 + (uint)bVar2 * 2;
  if ((byte)(bVar2 - 2) < 5) {
    bVar2 = FUN_18000f050((longlong)param_1,0,uVar4 + 1);
    param_1[(ulonglong)uVar4 + 1] = bVar2;
    if (bVar2 != 0) {
      iVar6 = 0;
      if (*param_2 == 0) {
        return;
      }
      pbVar5 = param_1 + 1;
      pbVar3 = param_2 + 4;
      do {
        *pbVar3 = 2;
        if ((*pbVar5 & 0xc0) == 0x80) {
          *pbVar3 = 0;
        }
        else {
          bVar2 = *pbVar3;
          if ((*pbVar5 & 0xc0) == 0x40) {
            bVar2 = 1;
          }
          *pbVar3 = bVar2;
        }
        iVar6 = iVar6 + 1;
        pbVar3[1] = *pbVar5 & 0xf;
        pbVar3[2] = pbVar5[1];
        pbVar1 = pbVar5 + 2;
        pbVar5 = pbVar5 + 3;
        pbVar3[3] = *pbVar1;
        pbVar3[4] = 0;
        pbVar3[5] = 0;
        pbVar3[6] = 0;
        pbVar3[7] = 0;
        pbVar3 = pbVar3 + 8;
      } while (iVar6 < (int)(uint)*param_2);
      return;
    }
  }
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 180009880 MacroKeyToBuffer
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180019703 memcpy

void MacroKeyToBuffer(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
                    /* 0x9880  100  MacroKeyToBuffer */
  bVar3 = *param_1;
  *param_2 = bVar3;
  iVar5 = 0x20;
  if (bVar3 != 0) {
    memcpy(param_2 + 1,param_1 + 1,(ulonglong)bVar3);
  }
  iVar7 = 0;
  param_2[0x1f] = param_1[0x1f];
  bVar3 = 0;
  if (param_1[0x1f] != 0) {
    pbVar4 = param_1 + 0x21;
    pbVar6 = param_2 + 0x22;
    iVar2 = 0x25;
    do {
      iVar5 = iVar2;
      bVar3 = *pbVar4 & 0xf;
      if (pbVar4[-1] == 0) {
        bVar3 = bVar3 | 0x80;
      }
      else if (pbVar4[-1] == 1) {
        bVar3 = bVar3 | 0x40;
      }
      pbVar6[-2] = bVar3;
      iVar7 = iVar7 + 1;
      pbVar6[-1] = pbVar4[1];
      *pbVar6 = pbVar4[2];
      pbVar6[1] = (byte)((uint)*(undefined4 *)(pbVar4 + 3) >> 8);
      pbVar1 = pbVar4 + 3;
      pbVar4 = pbVar4 + 8;
      pbVar6[2] = *pbVar1;
      pbVar6 = pbVar6 + 5;
      bVar3 = param_1[0x1f];
      iVar2 = iVar5 + 5;
    } while (iVar7 < (int)(uint)bVar3);
  }
  bVar3 = FUN_18000f050((longlong)param_2,0x1f,(uint)bVar3 * 5 + 0x20);
  param_2[iVar5] = bVar3;
  return;
}



// FUNCTION 180009960 BufferToMacroKey
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180019703 memcpy

void BufferToMacroKey(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
                    /* 0x9960  5  BufferToMacroKey */
  *param_2 = 0;
  pbVar8 = param_2 + 1;
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  bVar4 = *param_1;
  if ((byte)(bVar4 - 1) < 0x1e) {
    *param_2 = bVar4;
    memcpy(pbVar8,param_1 + 1,(ulonglong)bVar4);
  }
  bVar4 = param_1[0x1f];
  param_2[0x1f] = bVar4;
  if (((1 < bVar4) && (bVar4 < 0x47)) &&
     (uVar7 = (uint)bVar4 + (uint)bVar4 * 4,
     bVar3 = FUN_18000f050((longlong)param_1,0x1f,uVar7 + 0x20),
     param_1[(ulonglong)uVar7 + 0x20] == bVar3)) {
    iVar6 = 0;
    if (bVar4 == 0) {
      return;
    }
    pbVar8 = param_2 + 0x20;
    pbVar9 = param_1 + 0x22;
    do {
      *pbVar8 = 2;
      if ((pbVar9[-2] & 0xc0) == 0x80) {
        *pbVar8 = 0;
      }
      else {
        bVar4 = *pbVar8;
        if ((pbVar9[-2] & 0xc0) == 0x40) {
          bVar4 = 1;
        }
        *pbVar8 = bVar4;
      }
      iVar6 = iVar6 + 1;
      pbVar8[1] = pbVar9[-2] & 0xf;
      pbVar8[2] = pbVar9[-1];
      pbVar8[3] = *pbVar9;
      pbVar1 = pbVar9 + 2;
      pbVar2 = pbVar9 + 1;
      pbVar9 = pbVar9 + 5;
      *(uint *)(pbVar8 + 4) = (uint)CONCAT11(*pbVar2,*pbVar1);
      pbVar8 = pbVar8 + 8;
    } while (iVar6 < (int)(uint)param_2[0x1f]);
    return;
  }
  param_2[0x1f] = 0;
  pbVar8 = param_2 + 0x21;
  lVar5 = 2;
  do {
    pbVar8[-1] = 0;
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 0;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    pbVar8[0xc] = 0;
    pbVar8[0xd] = 0;
    pbVar8[0xe] = 0;
    pbVar8[0xf] = 0;
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x12] = 0;
    pbVar8[0x13] = 0;
    pbVar8[0x14] = 0;
    pbVar8[0x15] = 0;
    pbVar8[0x16] = 0;
    pbVar8[0x17] = 0;
    pbVar8[0x18] = 0;
    pbVar8[0x19] = 0;
    pbVar8[0x1a] = 0;
    pbVar8[0x1b] = 0;
    pbVar8[0x1c] = 0;
    pbVar8[0x1d] = 0;
    pbVar8[0x1e] = 0;
    pbVar8[0x1f] = 0;
    pbVar8[0x20] = 0;
    pbVar8[0x21] = 0;
    pbVar8[0x22] = 0;
    pbVar8[0x23] = 0;
    pbVar8[0x24] = 0;
    pbVar8[0x25] = 0;
    pbVar8[0x26] = 0;
    pbVar8[0x27] = 0;
    pbVar8[0x28] = 0;
    pbVar8[0x29] = 0;
    pbVar8[0x2a] = 0;
    pbVar8[0x2b] = 0;
    pbVar8[0x2c] = 0;
    pbVar8[0x2d] = 0;
    pbVar8[0x2e] = 0;
    pbVar8[0x2f] = 0;
    pbVar8[0x30] = 0;
    pbVar8[0x31] = 0;
    pbVar8[0x32] = 0;
    pbVar8[0x33] = 0;
    pbVar8[0x34] = 0;
    pbVar8[0x35] = 0;
    pbVar8[0x36] = 0;
    pbVar8[0x37] = 0;
    pbVar8[0x38] = 0;
    pbVar8[0x39] = 0;
    pbVar8[0x3a] = 0;
    pbVar8[0x3b] = 0;
    pbVar8[0x3c] = 0;
    pbVar8[0x3d] = 0;
    pbVar8[0x3e] = 0;
    pbVar8[0x3f] = 0;
    pbVar8[0x40] = 0;
    pbVar8[0x41] = 0;
    pbVar8[0x42] = 0;
    pbVar8[0x43] = 0;
    pbVar8[0x44] = 0;
    pbVar8[0x45] = 0;
    pbVar8[0x46] = 0;
    pbVar8[0x47] = 0;
    pbVar8[0x48] = 0;
    pbVar8[0x49] = 0;
    pbVar8[0x4a] = 0;
    pbVar8[0x4b] = 0;
    pbVar8[0x4c] = 0;
    pbVar8[0x4d] = 0;
    pbVar8[0x4e] = 0;
    pbVar8[0x4f] = 0;
    pbVar8[0x50] = 0;
    pbVar8[0x51] = 0;
    pbVar8[0x52] = 0;
    pbVar8[0x53] = 0;
    pbVar8[0x54] = 0;
    pbVar8[0x55] = 0;
    pbVar8[0x56] = 0;
    pbVar8[0x57] = 0;
    pbVar8[0x58] = 0;
    pbVar8[0x59] = 0;
    pbVar8[0x5a] = 0;
    pbVar8[0x5b] = 0;
    pbVar8[0x5c] = 0;
    pbVar8[0x5d] = 0;
    pbVar8[0x5e] = 0;
    pbVar8[0x5f] = 0;
    pbVar8[0x60] = 0;
    pbVar8[0x61] = 0;
    pbVar8[0x62] = 0;
    pbVar8[99] = 0;
    pbVar8[100] = 0;
    pbVar8[0x65] = 0;
    pbVar8[0x66] = 0;
    pbVar8[0x67] = 0;
    pbVar8[0x68] = 0;
    pbVar8[0x69] = 0;
    pbVar8[0x6a] = 0;
    pbVar8[0x6b] = 0;
    pbVar8[0x6c] = 0;
    pbVar8[0x6d] = 0;
    pbVar8[0x6e] = 0;
    pbVar8[0x6f] = 0;
    pbVar8[0x70] = 0;
    pbVar8[0x71] = 0;
    pbVar8[0x72] = 0;
    pbVar8[0x73] = 0;
    pbVar8[0x74] = 0;
    pbVar8[0x75] = 0;
    pbVar8[0x76] = 0;
    pbVar8[0x77] = 0;
    pbVar8[0x78] = 0;
    pbVar8[0x79] = 0;
    pbVar8[0x7a] = 0;
    pbVar8[0x7b] = 0;
    pbVar8[0x7c] = 0;
    pbVar8[0x7d] = 0;
    pbVar8[0x7e] = 0;
    pbVar8[0x7f] = 0;
    pbVar8[0x80] = 0;
    pbVar8[0x81] = 0;
    pbVar8[0x82] = 0;
    pbVar8[0x83] = 0;
    pbVar8[0x84] = 0;
    pbVar8[0x85] = 0;
    pbVar8[0x86] = 0;
    pbVar8[0x87] = 0;
    pbVar8[0x88] = 0;
    pbVar8[0x89] = 0;
    pbVar8[0x8a] = 0;
    pbVar8[0x8b] = 0;
    pbVar8[0x8c] = 0;
    pbVar8[0x8d] = 0;
    pbVar8[0x8e] = 0;
    pbVar8[0x8f] = 0;
    pbVar8[0x90] = 0;
    pbVar8[0x91] = 0;
    pbVar8[0x92] = 0;
    pbVar8[0x93] = 0;
    pbVar8[0x94] = 0;
    pbVar8[0x95] = 0;
    pbVar8[0x96] = 0;
    pbVar8[0x97] = 0;
    pbVar8[0x98] = 0;
    pbVar8[0x99] = 0;
    pbVar8[0x9a] = 0;
    pbVar8[0x9b] = 0;
    pbVar8[0x9c] = 0;
    pbVar8[0x9d] = 0;
    pbVar8[0x9e] = 0;
    pbVar8[0x9f] = 0;
    pbVar8[0xa0] = 0;
    pbVar8[0xa1] = 0;
    pbVar8[0xa2] = 0;
    pbVar8[0xa3] = 0;
    pbVar8[0xa4] = 0;
    pbVar8[0xa5] = 0;
    pbVar8[0xa6] = 0;
    pbVar8[0xa7] = 0;
    pbVar8[0xa8] = 0;
    pbVar8[0xa9] = 0;
    pbVar8[0xaa] = 0;
    pbVar8[0xab] = 0;
    pbVar8[0xac] = 0;
    pbVar8[0xad] = 0;
    pbVar8[0xae] = 0;
    pbVar8[0xaf] = 0;
    pbVar8[0xb0] = 0;
    pbVar8[0xb1] = 0;
    pbVar8[0xb2] = 0;
    pbVar8[0xb3] = 0;
    pbVar8[0xb4] = 0;
    pbVar8[0xb5] = 0;
    pbVar8[0xb6] = 0;
    pbVar8[0xb7] = 0;
    pbVar8[0xb8] = 0;
    pbVar8[0xb9] = 0;
    pbVar8[0xba] = 0;
    pbVar8[0xbb] = 0;
    pbVar8[0xbc] = 0;
    pbVar8[0xbd] = 0;
    pbVar8[0xbe] = 0;
    pbVar8[0xbf] = 0;
    pbVar8[0xc0] = 0;
    pbVar8[0xc1] = 0;
    pbVar8[0xc2] = 0;
    pbVar8[0xc3] = 0;
    pbVar8[0xc4] = 0;
    pbVar8[0xc5] = 0;
    pbVar8[0xc6] = 0;
    pbVar8[199] = 0;
    pbVar8[200] = 0;
    pbVar8[0xc9] = 0;
    pbVar8[0xca] = 0;
    pbVar8[0xcb] = 0;
    pbVar8[0xcc] = 0;
    pbVar8[0xcd] = 0;
    pbVar8[0xce] = 0;
    pbVar8[0xcf] = 0;
    pbVar8[0xd0] = 0;
    pbVar8[0xd1] = 0;
    pbVar8[0xd2] = 0;
    pbVar8[0xd3] = 0;
    pbVar8[0xd4] = 0;
    pbVar8[0xd5] = 0;
    pbVar8[0xd6] = 0;
    pbVar8[0xd7] = 0;
    pbVar8[0xd8] = 0;
    pbVar8[0xd9] = 0;
    pbVar8[0xda] = 0;
    pbVar8[0xdb] = 0;
    pbVar8[0xdc] = 0;
    pbVar8[0xdd] = 0;
    pbVar8[0xde] = 0;
    pbVar8[0xdf] = 0;
    pbVar8[0xe0] = 0;
    pbVar8[0xe1] = 0;
    pbVar8[0xe2] = 0;
    pbVar8[0xe3] = 0;
    pbVar8[0xe4] = 0;
    pbVar8[0xe5] = 0;
    pbVar8[0xe6] = 0;
    pbVar8[0xe7] = 0;
    pbVar8[0xe8] = 0;
    pbVar8[0xe9] = 0;
    pbVar8[0xea] = 0;
    pbVar8[0xeb] = 0;
    pbVar8[0xec] = 0;
    pbVar8[0xed] = 0;
    pbVar8[0xee] = 0;
    pbVar8[0xef] = 0;
    pbVar8[0xf0] = 0;
    pbVar8[0xf1] = 0;
    pbVar8[0xf2] = 0;
    pbVar8[0xf3] = 0;
    pbVar8[0xf4] = 0;
    pbVar8[0xf5] = 0;
    pbVar8[0xf6] = 0;
    pbVar8[0xf7] = 0;
    pbVar8[0xf8] = 0;
    pbVar8[0xf9] = 0;
    pbVar8[0xfa] = 0;
    pbVar8[0xfb] = 0;
    pbVar8[0xfc] = 0;
    pbVar8[0xfd] = 0;
    pbVar8[0xfe] = 0;
    pbVar8[0xff] = 0;
    pbVar8[0x100] = 0;
    pbVar8[0x101] = 0;
    pbVar8[0x102] = 0;
    pbVar8[0x103] = 0;
    pbVar8[0x104] = 0;
    pbVar8[0x105] = 0;
    pbVar8[0x106] = 0;
    pbVar8[0x107] = 0;
    pbVar8[0x108] = 0;
    pbVar8[0x109] = 0;
    pbVar8[0x10a] = 0;
    pbVar8[0x10b] = 0;
    pbVar8[0x10c] = 0;
    pbVar8[0x10d] = 0;
    pbVar8[0x10e] = 0;
    pbVar8[0x10f] = 0;
    pbVar8[0x110] = 0;
    pbVar8[0x111] = 0;
    pbVar8[0x112] = 0;
    pbVar8[0x113] = 0;
    pbVar8[0x114] = 0;
    pbVar8[0x115] = 0;
    pbVar8[0x116] = 0;
    pbVar8 = pbVar8 + 0x118;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 180009c10 FUN_180009c10
// THUNK false
// CALLS EXTERNAL:0000000f Sleep

void FUN_180009c10(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0x219) {
    if (param_3 == 0x8004) {
      if ((*(int *)(param_4 + 4) != 5) || (DAT_180028520 == (code *)0x0)) goto LAB_180009ca5;
      if (0 < (int)DAT_180028528) {
        Sleep(DAT_180028528);
      }
      uVar1 = 0;
    }
    else {
      if (((param_3 != 0x8000) || (*(int *)(param_4 + 4) != 5)) || (DAT_180028520 == (code *)0x0))
      goto LAB_180009ca5;
      if (0 < (int)DAT_180028528) {
        Sleep(DAT_180028528);
      }
      uVar1 = 1;
    }
    (*DAT_180028520)(uVar1);
  }
LAB_180009ca5:
                    /* WARNING: Could not recover jumptable at 0x000180009cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DefWindowProcW(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 180009cd0 StartUsbChanged
// THUNK false
// CALLS EXTERNAL:0000001e CreateWindowExW
// CALLS EXTERNAL:00000021 RegisterDeviceNotificationW
// CALLS EXTERNAL:00000010 GetModuleHandleW
// CALLS EXTERNAL:00000022 RegisterClassW
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void StartUsbChanged(undefined *param_1,undefined4 param_2)

{
  HMODULE hInstance;
  undefined1 auStackY_e8 [32];
  WNDCLASSW local_88;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
                    /* 0x9cd0  106  StartUsbChanged */
  local_18 = DAT_180023010 ^ (ulonglong)auStackY_e8;
  DAT_180028520 = (code *)param_1;
  DAT_180028528 = param_2;
  if (DAT_180028530 == (HWND)0x0) {
    local_88.hIcon = (HICON)0x0;
    local_88.hCursor = (HCURSOR)0x0;
    local_88.style = 0;
    local_88._4_4_ = 0;
    local_88.cbClsExtra = 0;
    local_88.cbWndExtra = 0;
    local_88.hbrBackground = (HBRUSH)0x0;
    local_88.lpszMenuName = (LPCWSTR)0x0;
    local_88.lpfnWndProc = FUN_180009c10;
    local_88.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_88.lpszClassName = L"usb hook msg window";
    RegisterClassW(&local_88);
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    DAT_180028530 =
         CreateWindowExW(0,L"usb hook msg window",L"",0xcf0000,-0x80000000,-0x80000000,-0x80000000,
                         -0x80000000,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
    local_88.style = 0xa5dcbf10;
    local_88._4_4_ = 0x11d26530;
    local_88.lpfnWndProc = (WNDPROC)0xed51b94fc0001f90;
    local_2c = 0xa5dcbf10;
    uStack_28 = 0x11d26530;
    uStack_24 = 0xc0001f90;
    uStack_20 = 0xed51b94f;
    local_34 = 5;
    local_1c = 0;
    local_38 = 0x20;
    RegisterDeviceNotificationW(DAT_180028530,&local_38,0);
  }
  if (DAT_180028520 != (code *)0x0) {
    (*DAT_180028520)(1);
  }
  return;
}



// FUNCTION 180009e30 CS_StartUsbChanged
// THUNK true

// FUNCTION 180009e40 CS_StopUsbChanged
// THUNK false
// CALLS EXTERNAL:00000020 PostMessageW

void CS_StopUsbChanged(void)

{
                    /* 0x9e40  19  CS_StopUsbChanged
                       0x9e40  107  StopUsbChanged */
  if (DAT_180028530 != (HWND)0x0) {
    PostMessageW(DAT_180028530,0x10,0,0);
  }
  DAT_180028530 = (HWND)0x0;
  return;
}



// FUNCTION 180009e70 CS_SetUsbChangedCallBack
// THUNK false

void CS_SetUsbChangedCallBack(undefined8 param_1,undefined4 param_2)

{
                    /* 0x9e70  17  CS_SetUsbChangedCallBack
                       0x9e70  104  SetUsbChangedCallBack */
  DAT_180028520 = param_1;
  DAT_180028528 = param_2;
  return;
}



// FUNCTION 180009e80 CS_UsbFinder_GetDllVersion
// THUNK false
// CALLS 180005280 FUN_180005280
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 180016d80 FUN_180016d80
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CS_UsbFinder_GetDllVersion(void)

{
  void *pvVar1;
  longlong *plVar2;
  undefined8 uVar3;
  void *_Memory;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong local_18;
  ulonglong local_10;
  
                    /* 0x9e80  32  CS_UsbFinder_GetDllVersion */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_48 = DAT_18001ba38;
  uStack_44 = DAT_18001ba3c;
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  local_18 = 0;
  uStack_42 = 0;
  local_40 = _DAT_18001c710;
  uStack_38 = _UNK_18001c718;
  local_30 = 7;
  FUN_180005280((longlong *)&local_28,(longlong *)0x0,(undefined8 *)&local_48);
  if (7 < local_30) {
    pvVar1 = (void *)CONCAT26(uStack_42,CONCAT24(uStack_44,local_48));
    _Memory = pvVar1;
    if ((0xfff < local_30 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  plVar2 = FUN_18000ee60((undefined8 *)&local_48,(longlong *)&local_28);
  uVar3 = FUN_180016d80(plVar2);
  if (local_28 != (longlong *)0x0) {
    FUN_1800049d0(local_28,plStack_20);
    plVar2 = local_28;
    if ((0xfff < (local_18 - (longlong)local_28 & 0xffffffffffffffe0U)) &&
       (plVar2 = (longlong *)local_28[-1],
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
  }
  return uVar3;
}



// FUNCTION 180009fc0 UsbFinder_EnumHidDeviceList
// THUNK false
// CALLS 180005280 FUN_180005280
// CALLS EXTERNAL:00000060 SetupDiDestroyDeviceInfoList
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000061 SetupDiGetClassDevsW
// CALLS 180018860 thunk_FUN_180018824
// CALLS EXTERNAL:0000005e SetupDiEnumDeviceInterfaces
// CALLS 180004a60 FUN_180004a60
// CALLS EXTERNAL:0000005f SetupDiGetDeviceInterfaceDetailW
// CALLS EXTERNAL:0000005c HidD_GetHidGuid
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbFinder_EnumHidDeviceList(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *DeviceInfoSet;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  void *_Memory;
  DWORD MemberIndex;
  ulonglong uVar3;
  undefined1 auStackY_a8 [32];
  void *local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  DWORD local_58 [2];
  GUID local_50;
  _SP_DEVICE_INTERFACE_DATA local_40;
  ulonglong local_20;
  
                    /* 0x9fc0  135  UsbFinder_EnumHidDeviceList */
  local_20 = DAT_180023010 ^ (ulonglong)auStackY_a8;
  if ((longlong *)*param_1 != (longlong *)param_1[1]) {
    FUN_1800049d0((longlong *)*param_1,(longlong *)param_1[1]);
    param_1[1] = *param_1;
  }
  HidD_GetHidGuid(&local_50);
  DeviceInfoSet = SetupDiGetClassDevsW(&local_50,(PCWSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet != &DAT_ffffffffffffffff) {
    MemberIndex = 0;
    local_40.cbSize = 0x20;
    iVar2 = SetupDiEnumDeviceInterfaces(DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_50,0,&local_40);
    while (iVar2 != 0) {
      local_58[0] = 0;
      SetupDiGetDeviceInterfaceDetailW
                (DeviceInfoSet,&local_40,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,local_58,
                 (PSP_DEVINFO_DATA)0x0);
      DeviceInterfaceDetailData =
           (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)thunk_FUN_180018824((ulonglong)local_58[0]);
      DeviceInterfaceDetailData->cbSize = 8;
      SetupDiGetDeviceInterfaceDetailW
                (DeviceInfoSet,&local_40,DeviceInterfaceDetailData,local_58[0],(PDWORD)0x0,
                 (PSP_DEVINFO_DATA)0x0);
      local_68 = 0;
      local_78 = (void *)0x0;
      lStack_70 = 0;
      uStack_60 = 0;
      uVar3 = 0xffffffffffffffff;
      do {
        uVar3 = uVar3 + 1;
      } while (DeviceInterfaceDetailData->DevicePath[uVar3] != L'\0');
      FUN_180004a60(&local_78,DeviceInterfaceDetailData->DevicePath,uVar3);
      plVar1 = (longlong *)param_1[1];
      if (plVar1 == (longlong *)param_1[2]) {
        FUN_180005280(param_1,plVar1,&local_78);
        if (7 < uStack_60) {
          _Memory = local_78;
          if ((0xfff < uStack_60 * 2 + 2) &&
             (_Memory = *(void **)((longlong)local_78 + -8),
             0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
      }
      else {
        *plVar1 = (longlong)local_78;
        plVar1[1] = lStack_70;
        plVar1[2] = local_68;
        plVar1[3] = uStack_60;
        param_1[1] = param_1[1] + 0x20;
      }
      free(DeviceInterfaceDetailData);
      MemberIndex = MemberIndex + 1;
      iVar2 = SetupDiEnumDeviceInterfaces
                        (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_50,MemberIndex,&local_40);
    }
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  }
  return;
}



// FUNCTION 18000a1e0 UsbFinderC_EnumHidDeviceList
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 1800172d0 FUN_1800172d0
// CALLS 180009fc0 UsbFinder_EnumHidDeviceList
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * UsbFinderC_EnumHidDeviceList(undefined4 *param_1)

{
  void *pvVar1;
  longlong *_Memory;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  longlong local_18;
  ulonglong local_10;
  
                    /* 0xa1e0  109  UsbFinderC_EnumHidDeviceList */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  UsbFinder_EnumHidDeviceList((longlong *)&local_28);
  *param_1 = (int)((longlong)plStack_20 - (longlong)local_28 >> 5);
  pvVar1 = FUN_1800172d0((longlong *)&local_28);
  if (local_28 != (longlong *)0x0) {
    FUN_1800049d0(local_28,plStack_20);
    _Memory = local_28;
    if ((0xfff < (local_18 - (longlong)local_28 & 0xffffffffffffffe0U)) &&
       (_Memory = (longlong *)local_28[-1],
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return pvVar1;
}



// FUNCTION 18000a2a0 UsbFinderC_Free
// THUNK false
// CALLS EXTERNAL:0000008a free

void UsbFinderC_Free(void *param_1,int param_2)

{
  longlong lVar1;
  
                    /* 0xa2a0  114  UsbFinderC_Free */
  if (0 < param_2) {
    lVar1 = 0;
    do {
      free(*(void **)((longlong)param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00018000a2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}



// FUNCTION 18000a2f0 CS_UsbFinder_EnumHidDeviceList
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180016d80 FUN_180016d80
// CALLS 1800187f0 free
// CALLS 180009fc0 UsbFinder_EnumHidDeviceList
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CS_UsbFinder_EnumHidDeviceList(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48 [3];
  longlong *local_30;
  longlong *plStack_28;
  longlong local_20;
  ulonglong local_18;
  
                    /* 0xa2f0  21  CS_UsbFinder_EnumHidDeviceList */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  UsbFinder_EnumHidDeviceList((longlong *)&local_30);
  plVar1 = FUN_18000ee60(local_48,(longlong *)&local_30);
  uVar2 = FUN_180016d80(plVar1);
  if (local_30 != (longlong *)0x0) {
    FUN_1800049d0(local_30,plStack_28);
    plVar1 = local_30;
    if ((0xfff < (local_20 - (longlong)local_30 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_30[-1],
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)plVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000a3b0 UsbFinder_FindHidDevices
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180001170 FUN_180001170
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000008e towlower
// CALLS 180018860 thunk_FUN_180018824
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 1800066c0 FUN_1800066c0
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180009fc0 UsbFinder_EnumHidDeviceList
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180004160 FUN_180004160
// CALLS 1800053a0 FUN_1800053a0
// CALLS 180019709 memmove
// CALLS EXTERNAL:00000011 MultiByteToWideChar

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbFinder_FindHidDevices(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  wint_t *****pppppwVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ushort *****pppppuVar5;
  ushort *****pppppuVar6;
  longlong *plVar7;
  ushort ****ppppuVar8;
  ulonglong uVar9;
  wint_t wVar10;
  int cchWideChar;
  size_t sVar11;
  LPWSTR lpWideCharStr;
  ushort *****_Dst;
  ushort *****pppppuVar12;
  void *pvVar13;
  wint_t ****_Memory;
  ushort *****pppppuVar14;
  longlong *plVar15;
  wint_t *****pppppwVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ushort *****pppppuVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ushort *****pppppuVar23;
  ulonglong uVar24;
  undefined1 auStackY_278 [32];
  wint_t ****local_220;
  undefined8 uStack_218;
  longlong local_210;
  ulonglong uStack_208;
  wint_t ****local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  ulonglong uStack_1e8;
  longlong *local_1e0;
  longlong *plStack_1d8;
  longlong local_1d0;
  wint_t ****local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  wint_t ****local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  ulonglong uStack_190;
  ushort ****local_188;
  longlong lStack_180;
  ulonglong local_178;
  ulonglong local_170;
  ushort ****local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  CHAR local_148;
  char acStack_147 [255];
  ulonglong local_48;
  
                    /* 0xa3b0  136  UsbFinder_FindHidDevices */
  local_48 = DAT_180023010 ^ (ulonglong)auStackY_278;
  local_198 = 0;
  uStack_190 = 7;
  uStack_1a0 = 0;
  local_1a8 = (wint_t ****)0x0;
  uStack_1c0 = 0;
  local_1c8 = (void *)0x0;
  uStack_160 = 0;
  local_168 = (ushort ****)0x0;
  local_1b8 = 0;
  uStack_1b0 = 7;
  local_158 = 0;
  local_150 = 7;
  local_1e0 = (longlong *)0x0;
  plStack_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  UsbFinder_EnumHidDeviceList((longlong *)&local_1e0);
  if ((longlong *)*param_3 != (longlong *)param_3[1]) {
    FUN_1800049d0((longlong *)*param_3,(longlong *)param_3[1]);
    param_3[1] = *param_3;
  }
  FUN_180004160(&local_220,param_1);
  pppppwVar16 = &local_220;
  if (7 < uStack_208) {
    pppppwVar16 = (wint_t *****)local_220;
  }
  pppppwVar1 = (wint_t *****)((longlong)pppppwVar16 + local_210 * 2);
  for (; pppppwVar16 != pppppwVar1; pppppwVar16 = (wint_t *****)((longlong)pppppwVar16 + 2)) {
    wVar10 = towlower(*(wint_t *)pppppwVar16);
    *(wint_t *)pppppwVar16 = wVar10;
  }
  if (7 < uStack_190) {
    _Memory = local_1a8;
    if ((0xfff < uStack_190 * 2 + 2) &&
       (_Memory = (wint_t ****)local_1a8[-1],
       0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_1a8 = local_220;
  uStack_1a0 = uStack_218;
  local_198 = local_210;
  uStack_190 = uStack_208;
  FUN_180004160(&local_200,param_2);
  pppppwVar16 = &local_200;
  if (7 < uStack_1e8) {
    pppppwVar16 = (wint_t *****)local_200;
  }
  pppppwVar1 = (wint_t *****)((longlong)pppppwVar16 + local_1f0 * 2);
  for (; pppppwVar16 != pppppwVar1; pppppwVar16 = (wint_t *****)((longlong)pppppwVar16 + 2)) {
    wVar10 = towlower(*(wint_t *)pppppwVar16);
    *(wint_t *)pppppwVar16 = wVar10;
  }
  if (7 < uStack_1b0) {
    pvVar13 = local_1c8;
    if ((0xfff < uStack_1b0 * 2 + 2) &&
       (pvVar13 = *(void **)((longlong)local_1c8 + -8),
       0x1f < (ulonglong)((longlong)local_1c8 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
  }
  local_1b8 = local_1f0;
  uStack_1b0 = uStack_1e8;
  local_1c8 = local_200;
  uStack_1c0 = uStack_1f8;
  pppppwVar16 = &local_1a8;
  if (7 < uStack_190) {
    pppppwVar16 = (wint_t *****)local_1a8;
  }
  FUN_180001170(&local_148,0x100,"vid_%ls&pid_%ls",pppppwVar16);
  uVar17 = 0xffffffffffffffff;
  lVar22 = -1;
  do {
    lVar21 = lVar22 + 1;
    pcVar2 = acStack_147 + lVar22;
    lVar22 = lVar21;
  } while (*pcVar2 != '\0');
  cchWideChar = MultiByteToWideChar(0,0,&local_148,(int)lVar21,(LPWSTR)0x0,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(cchWideChar + 1);
  sVar11 = SUB168(ZEXT816(2) * auVar4,0);
  if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
    sVar11 = 0xffffffffffffffff;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_180018824(sVar11);
  lVar22 = -1;
  do {
    lVar21 = lVar22 + 1;
    pcVar2 = acStack_147 + lVar22;
    lVar22 = lVar21;
  } while (*pcVar2 != '\0');
  MultiByteToWideChar(0,0,&local_148,(int)lVar21,lpWideCharStr,cchWideChar);
  lpWideCharStr[cchWideChar] = L'\0';
  do {
    uVar17 = uVar17 + 1;
  } while (lpWideCharStr[uVar17] != L'\0');
  FUN_1800066c0((longlong *)&local_168,lpWideCharStr,uVar17);
  free(lpWideCharStr);
  uVar9 = local_150;
  uVar17 = local_158;
  ppppuVar8 = local_168;
  plVar7 = plStack_1d8;
  for (plVar15 = local_1e0; plVar15 != plVar7; plVar15 = plVar15 + 4) {
    pppppuVar14 = (ushort *****)0xa;
    local_188 = (ushort ****)0x0;
    lStack_180 = 0;
    plVar18 = plVar15;
    if (7 < (ulonglong)plVar15[3]) {
      plVar18 = (longlong *)*plVar15;
    }
    uVar3 = plVar15[2];
    if (0x7ffffffffffffffe < uVar3) {
LAB_18000aab2:
                    /* WARNING: Subroutine does not return */
      FUN_180001370();
    }
    if (uVar3 < 8) {
      _Dst = (ushort *****)*plVar18;
      uVar24 = 7;
      local_178 = uVar3;
      local_170 = 7;
      local_188 = (ushort ****)_Dst;
      lStack_180 = plVar18[1];
    }
    else {
      uVar24 = uVar3 | 7;
      if (uVar24 < 0x7fffffffffffffff) {
        if (uVar24 < 10) {
          uVar24 = 10;
        }
      }
      else {
        uVar24 = 0x7ffffffffffffffe;
      }
      _Dst = (ushort *****)FUN_180004ec0(10,uVar24 + 1);
      pppppuVar14 = _Dst;
      local_188 = (ushort ****)_Dst;
      local_178 = uVar3;
      local_170 = uVar24;
      memcpy(_Dst,plVar18,uVar3 * 2 + 2);
    }
    pppppuVar19 = &local_168;
    if (7 < uVar9) {
      pppppuVar19 = (ushort *****)ppppuVar8;
    }
    pppppuVar23 = &local_188;
    if (7 < uVar24) {
      pppppuVar23 = _Dst;
    }
    if (uVar17 <= uVar3) {
      if (uVar17 == 0) {
LAB_18000a80a:
        plVar18 = (longlong *)param_3[1];
        if (plVar18 == (longlong *)param_3[2]) {
          FUN_1800053a0(param_3,plVar18,&local_188);
          _Dst = (ushort *****)local_188;
          uVar24 = local_170;
        }
        else {
          *plVar18 = 0;
          plVar18[1] = 0;
          plVar18[2] = 0;
          pppppuVar19 = &local_188;
          if (7 < uVar24) {
            pppppuVar19 = _Dst;
          }
          plVar18[3] = 0;
          if (0x7ffffffffffffffe < uVar3) goto LAB_18000aab2;
          plVar18[3] = 7;
          if (uVar3 < 8) {
            plVar18[2] = uVar3;
            memmove(plVar18,pppppuVar19,0x10);
            param_3[1] = param_3[1] + 0x20;
          }
          else {
            uVar20 = uVar3 | 7;
            if (uVar20 < 0x7fffffffffffffff) {
              if (uVar20 < 10) {
                uVar20 = 10;
              }
            }
            else {
              uVar20 = 0x7ffffffffffffffe;
            }
            pvVar13 = (void *)FUN_180004ec0(pppppuVar14,uVar20 + 1);
            *plVar18 = (longlong)pvVar13;
            plVar18[2] = uVar3;
            plVar18[3] = uVar20;
            memcpy(pvVar13,pppppuVar19,uVar3 * 2 + 2);
            param_3[1] = param_3[1] + 0x20;
          }
        }
      }
      else {
        for (pppppuVar12 = pppppuVar23;
            pppppuVar14 = (ushort *****)
                          ((longlong)
                           ((longlong)pppppuVar23 +
                           (((uVar3 - uVar17) + 1) * 2 - (longlong)pppppuVar12)) >> 1),
            pppppuVar14 != (ushort *****)0x0;
            pppppuVar12 = (ushort *****)((longlong)pppppuVar12 + 2)) {
          while (*(ushort *)pppppuVar12 != *(ushort *)pppppuVar19) {
            pppppuVar12 = (ushort *****)((longlong)pppppuVar12 + 2);
            pppppuVar14 = (ushort *****)((longlong)pppppuVar14 + -1);
            if (pppppuVar14 == (ushort *****)0x0) goto LAB_18000a8fb;
          }
          pppppuVar5 = pppppuVar12;
          pppppuVar6 = pppppuVar19;
          uVar20 = uVar17;
          if (pppppuVar12 == (ushort *****)0x0) break;
          while( true ) {
            if (uVar20 == 0) {
              if ((longlong)pppppuVar12 - (longlong)pppppuVar23 >> 1 == -1) goto LAB_18000a8fb;
              goto LAB_18000a80a;
            }
            pppppuVar14 = (ushort *****)(ulonglong)*(ushort *)pppppuVar6;
            if (*(ushort *)pppppuVar5 != *(ushort *)pppppuVar6) break;
            pppppuVar5 = (ushort *****)((longlong)pppppuVar5 + 2);
            pppppuVar6 = (ushort *****)((longlong)pppppuVar6 + 2);
            uVar20 = uVar20 - 1;
          }
        }
      }
    }
LAB_18000a8fb:
    if (7 < uVar24) {
      pppppuVar14 = _Dst;
      if ((0xfff < uVar24 * 2 + 2) &&
         (pppppuVar14 = (ushort *****)_Dst[-1],
         0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pppppuVar14)))) goto LAB_18000aa77;
      free(pppppuVar14);
    }
  }
  if (local_1e0 != (longlong *)0x0) {
    FUN_1800049d0(local_1e0,plStack_1d8);
    plVar15 = local_1e0;
    if ((0xfff < (local_1d0 - (longlong)local_1e0 & 0xffffffffffffffe0U)) &&
       (plVar15 = (longlong *)local_1e0[-1],
       0x1f < (ulonglong)((longlong)local_1e0 + (-8 - (longlong)plVar15)))) goto LAB_18000aa77;
    free(plVar15);
    local_1d0 = 0;
    local_1e0 = (longlong *)0x0;
    plStack_1d8 = (longlong *)0x0;
  }
  if (7 < uVar9) {
    pppppuVar14 = (ushort *****)ppppuVar8;
    if ((0xfff < uVar9 * 2 + 2) &&
       (pppppuVar14 = (ushort *****)ppppuVar8[-1],
       0x1f < (ulonglong)((longlong)ppppuVar8 + (-8 - (longlong)pppppuVar14)))) goto LAB_18000aa77;
    free(pppppuVar14);
  }
  if (7 < uStack_1b0) {
    pppppwVar16 = (wint_t *****)local_1c8;
    if ((0xfff < uStack_1b0 * 2 + 2) &&
       (pppppwVar16 = (wint_t *****)local_1c8[-1],
       0x1f < (ulonglong)((longlong)local_1c8 + (-8 - (longlong)pppppwVar16)))) goto LAB_18000aa77;
    free(pppppwVar16);
  }
  local_1b8 = 0;
  uStack_1b0 = 7;
  local_1c8 = (wint_t ****)((ulonglong)local_1c8 & 0xffffffffffff0000);
  if (7 < uStack_190) {
    pppppwVar16 = (wint_t *****)local_1a8;
    if ((0xfff < uStack_190 * 2 + 2) &&
       (pppppwVar16 = (wint_t *****)local_1a8[-1],
       0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppwVar16)))) {
LAB_18000aa77:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppwVar16);
  }
  return;
}



// FUNCTION 18000aac0 UsbFinderC_FindHidDevices
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000a3b0 UsbFinder_FindHidDevices
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 1800172d0 FUN_1800172d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * UsbFinderC_FindHidDevices(LPCSTR param_1,LPCSTR param_2,undefined4 *param_3)

{
  void *pvVar1;
  longlong *_Memory;
  void *pvVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
                    /* 0xaac0  110  UsbFinderC_FindHidDevices */
  local_20 = DAT_180023010 ^ (ulonglong)auStack_98;
  uStack_38 = 0;
  local_40 = (void *)0x0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_30 = _DAT_18001c720;
  uStack_28 = _UNK_18001c728;
  local_68 = 0;
  local_50 = _DAT_18001c720;
  uStack_48 = _UNK_18001c728;
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  FUN_180016f40(param_1,(longlong *)&local_40);
  FUN_180016f40(param_2,(longlong *)&local_60);
  UsbFinder_FindHidDevices(&local_40,&local_60,(longlong *)&local_78);
  *param_3 = (int)((longlong)plStack_70 - (longlong)local_78 >> 5);
  pvVar1 = FUN_1800172d0((longlong *)&local_78);
  if (local_78 != (longlong *)0x0) {
    FUN_1800049d0(local_78,plStack_70);
    _Memory = local_78;
    if ((0xfff < (local_68 - (longlong)local_78 & 0xffffffffffffffe0U)) &&
       (_Memory = (longlong *)local_78[-1],
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)_Memory)))) goto LAB_18000ac20;
    free(_Memory);
    local_68 = 0;
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
  }
  if (7 < uStack_48) {
    pvVar2 = local_60;
    if ((0xfff < uStack_48 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar2)))) goto LAB_18000ac20;
    free(pvVar2);
  }
  if (7 < uStack_28) {
    pvVar2 = local_40;
    if ((0xfff < uStack_28 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)local_40 + -8),
       0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pvVar2)))) {
LAB_18000ac20:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  return pvVar1;
}



// FUNCTION 18000ac50 CS_UsbFinder_FindHidDevices
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000a3b0 UsbFinder_FindHidDevices
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180016d80 FUN_180016d80
// CALLS 1800187f0 free
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CS_UsbFinder_FindHidDevices(LPCSTR param_1,LPCSTR param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [3];
  longlong *local_70;
  longlong *plStack_68;
  longlong local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xac50  22  CS_UsbFinder_FindHidDevices */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_a8;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  uStack_50 = 0;
  local_58 = (void *)0x0;
  local_70 = (longlong *)0x0;
  plStack_68 = (longlong *)0x0;
  local_60 = 0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  local_48 = _DAT_18001c720;
  uStack_40 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  FUN_180016f40(param_2,(longlong *)&local_58);
  UsbFinder_FindHidDevices(&local_38,&local_58,(longlong *)&local_70);
  plVar1 = FUN_18000ee60(local_88,(longlong *)&local_70);
  uVar2 = FUN_180016d80(plVar1);
  if (7 < uStack_40) {
    pvVar3 = local_58;
    if ((0xfff < uStack_40 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar3)))) goto LAB_18000adb7;
    free(pvVar3);
  }
  if (7 < uStack_20) {
    pvVar3 = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar3)))) goto LAB_18000adb7;
    free(pvVar3);
  }
  if (local_70 != (longlong *)0x0) {
    FUN_1800049d0(local_70,plStack_68);
    plVar1 = local_70;
    if ((0xfff < (local_60 - (longlong)local_70 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_70[-1],
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)plVar1)))) {
LAB_18000adb7:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000ade0 UsbFinder_FindHidDevicesByKey
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000008e towlower
// CALLS 180009fc0 UsbFinder_EnumHidDeviceList
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180004160 FUN_180004160
// CALLS 1800053a0 FUN_1800053a0
// CALLS 180019703 memcpy
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbFinder_FindHidDevicesByKey(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  wint_t wVar3;
  wint_t *pwVar4;
  ushort ****_Dst;
  ushort ****ppppuVar5;
  void *pvVar6;
  ushort ****ppppuVar7;
  longlong *plVar8;
  ushort *puVar9;
  wint_t *pwVar10;
  longlong *plVar11;
  ushort ****ppppuVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ushort *puVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  wint_t local_98;
  undefined6 uStack_96;
  ulonglong local_88;
  ulonglong local_80;
  ushort ***local_78;
  longlong lStack_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48;
  ulonglong local_40;
  
                    /* 0xade0  139  UsbFinder_FindHidDevicesByKey */
  local_40 = DAT_180023010 ^ (ulonglong)auStack_c8;
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_a0 = param_2;
  UsbFinder_EnumHidDeviceList((longlong *)&local_58);
  if ((longlong *)*param_2 != (longlong *)param_2[1]) {
    FUN_1800049d0((longlong *)*param_2,(longlong *)param_2[1]);
    param_2[1] = *param_2;
  }
  FUN_180004160((undefined8 *)&local_98,param_1);
  pwVar4 = &local_98;
  if (7 < local_80) {
    pwVar4 = (wint_t *)CONCAT62(uStack_96,local_98);
  }
  pwVar10 = &local_98;
  if (7 < local_80) {
    pwVar10 = (wint_t *)CONCAT62(uStack_96,local_98);
  }
  pwVar4 = pwVar4 + local_88;
  uVar13 = local_88;
  plVar8 = local_58;
  plVar14 = plStack_50;
  for (; local_88 = uVar13, local_58 = plVar8, plStack_50 = plVar14, pwVar10 != pwVar4;
      pwVar10 = pwVar10 + 1) {
    wVar3 = towlower(*pwVar10);
    *pwVar10 = wVar3;
    uVar13 = local_88;
    plVar8 = local_58;
    plVar14 = plStack_50;
  }
  if ((param_1[2] != 0) && (local_a8 = plVar14, plVar8 != plVar14)) {
    do {
      ppppuVar7 = (ushort ****)0xa;
      local_78 = (ushort ***)0x0;
      lStack_70 = 0;
      local_60 = 0;
      plVar11 = plVar8;
      if (7 < (ulonglong)plVar8[3]) {
        plVar11 = (longlong *)*plVar8;
      }
      uVar1 = plVar8[2];
      if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180001370();
      }
      if (uVar1 < 8) {
        _Dst = (ushort ****)*plVar11;
        uVar17 = 7;
        local_68 = uVar1;
        local_60 = 7;
        local_78 = (ushort ***)_Dst;
        lStack_70 = plVar11[1];
      }
      else {
        uVar17 = uVar1 | 7;
        if (uVar17 < 0x7fffffffffffffff) {
          if (uVar17 < 10) {
            uVar17 = 10;
          }
        }
        else {
          uVar17 = 0x7ffffffffffffffe;
        }
        _Dst = (ushort ****)FUN_180004ec0(10,uVar17 + 1);
        ppppuVar7 = _Dst;
        local_78 = (ushort ***)_Dst;
        local_68 = uVar1;
        local_60 = uVar17;
        memcpy(_Dst,plVar11,uVar1 * 2 + 2);
        uVar13 = local_88;
      }
      plVar11 = local_a0;
      puVar16 = &local_98;
      if (7 < local_80) {
        puVar16 = (ushort *)CONCAT62(uStack_96,local_98);
      }
      ppppuVar12 = &local_78;
      if (7 < uVar17) {
        ppppuVar12 = _Dst;
      }
      if (uVar13 <= uVar1) {
        if (uVar13 == 0) {
LAB_18000b015:
          plVar14 = (longlong *)local_a0[1];
          if (plVar14 == (longlong *)local_a0[2]) {
            FUN_1800053a0(local_a0,plVar14,&local_78);
            plVar14 = local_a8;
            uVar13 = local_88;
            _Dst = (ushort ****)local_78;
            uVar17 = local_60;
          }
          else {
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar14[2] = 0;
            ppppuVar12 = &local_78;
            if (7 < uVar17) {
              ppppuVar12 = _Dst;
            }
            plVar14[3] = 7;
            if (uVar1 < 8) {
              plVar14[2] = uVar1;
              memmove(plVar14,ppppuVar12,0x10);
              plVar11[1] = plVar11[1] + 0x20;
              plVar14 = local_a8;
              uVar13 = local_88;
            }
            else {
              uVar13 = uVar1 | 7;
              if (uVar13 < 0x7fffffffffffffff) {
                if (uVar13 < 10) {
                  uVar13 = 10;
                }
              }
              else {
                uVar13 = 0x7ffffffffffffffe;
              }
              pvVar6 = (void *)FUN_180004ec0(ppppuVar7,uVar13 + 1);
              *plVar14 = (longlong)pvVar6;
              plVar14[2] = uVar1;
              plVar14[3] = uVar13;
              memcpy(pvVar6,ppppuVar12,uVar1 * 2 + 2);
              local_a0[1] = local_a0[1] + 0x20;
              plVar14 = local_a8;
              uVar13 = local_88;
            }
          }
        }
        else {
          for (ppppuVar5 = ppppuVar12;
              ppppuVar7 = (ushort ****)
                          ((longlong)
                           ((longlong)ppppuVar12 +
                           (((uVar1 - uVar13) + 1) * 2 - (longlong)ppppuVar5)) >> 1),
              plVar14 = local_a8, ppppuVar7 != (ushort ****)0x0;
              ppppuVar5 = (ushort ****)((longlong)ppppuVar5 + 2)) {
            while (*(ushort *)ppppuVar5 != *puVar16) {
              ppppuVar5 = (ushort ****)((longlong)ppppuVar5 + 2);
              ppppuVar7 = (ushort ****)((longlong)ppppuVar7 + -1);
              if (ppppuVar7 == (ushort ****)0x0) goto LAB_18000b0ed;
            }
            if (ppppuVar5 == (ushort ****)0x0) break;
            if (uVar13 == 0) {
LAB_18000b005:
              if ((longlong)ppppuVar5 - (longlong)ppppuVar12 >> 1 != -1) goto LAB_18000b015;
              break;
            }
            puVar9 = puVar16;
            uVar15 = uVar13;
            while (ppppuVar7 = (ushort ****)(ulonglong)*puVar9,
                  *(ushort *)(((longlong)ppppuVar5 - (longlong)puVar16) + (longlong)puVar9) ==
                  *puVar9) {
              puVar9 = puVar9 + 1;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_18000b005;
            }
          }
        }
      }
LAB_18000b0ed:
      if (7 < uVar17) {
        ppppuVar7 = _Dst;
        if ((0xfff < uVar17 * 2 + 2) &&
           (ppppuVar7 = (ushort ****)_Dst[-1],
           0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)ppppuVar7)))) goto LAB_18000b1db;
        free(ppppuVar7);
        uVar13 = local_88;
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != plVar14);
  }
  if (7 < local_80) {
    pvVar2 = (void *)CONCAT62(uStack_96,local_98);
    pvVar6 = pvVar2;
    if ((0xfff < local_80 * 2 + 2) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) goto LAB_18000b1db;
    free(pvVar6);
  }
  local_88 = 0;
  local_80 = 7;
  local_98 = 0;
  if (local_58 != (longlong *)0x0) {
    FUN_1800049d0(local_58,plStack_50);
    plVar8 = local_58;
    if ((0xfff < (local_48 - (longlong)local_58 & 0xffffffffffffffe0U)) &&
       (plVar8 = (longlong *)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)plVar8)))) {
LAB_18000b1db:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar8);
  }
  return;
}



// FUNCTION 18000b220 UsbFinderC_FindHidDevicesByKey
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 1800172d0 FUN_1800172d0
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * UsbFinderC_FindHidDevicesByKey(LPCSTR param_1,undefined4 *param_2)

{
  void *pvVar1;
  longlong *_Memory;
  void *_Memory_00;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  void *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
                    /* 0xb220  113  UsbFinderC_FindHidDevicesByKey */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = (void *)0x0;
  local_20 = _DAT_18001c720;
  uStack_18 = _UNK_18001c728;
  local_38 = 0;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  FUN_180016f40(param_1,(longlong *)&local_30);
  UsbFinder_FindHidDevicesByKey(&local_30,(longlong *)&local_48);
  *param_2 = (int)((longlong)plStack_40 - (longlong)local_48 >> 5);
  pvVar1 = FUN_1800172d0((longlong *)&local_48);
  if (local_48 != (longlong *)0x0) {
    FUN_1800049d0(local_48,plStack_40);
    _Memory = local_48;
    if ((0xfff < (local_38 - (longlong)local_48 & 0xffffffffffffffe0U)) &&
       (_Memory = (longlong *)local_48[-1],
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) goto LAB_18000b32c;
    free(_Memory);
    local_38 = 0;
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  if (7 < uStack_18) {
    _Memory_00 = local_30;
    if ((0xfff < uStack_18 * 2 + 2) &&
       (_Memory_00 = *(void **)((longlong)local_30 + -8),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)_Memory_00)))) {
LAB_18000b32c:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_00);
  }
  return pvVar1;
}



// FUNCTION 18000b360 CS_UsbFinder_FindHidDevicesByKey
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180016d80 FUN_180016d80
// CALLS 1800187f0 free
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CS_UsbFinder_FindHidDevicesByKey(LPCSTR param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *_Memory;
  undefined1 auStack_88 [32];
  undefined8 local_68 [3];
  longlong *local_50;
  longlong *plStack_48;
  longlong local_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xb360  25  CS_UsbFinder_FindHidDevicesByKey */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_50 = (longlong *)0x0;
  plStack_48 = (longlong *)0x0;
  local_40 = 0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  UsbFinder_FindHidDevicesByKey(&local_38,(longlong *)&local_50);
  plVar1 = FUN_18000ee60(local_68,(longlong *)&local_50);
  uVar2 = FUN_180016d80(plVar1);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) goto LAB_18000b457;
    free(_Memory);
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1800049d0(local_50,plStack_48);
    plVar1 = local_50;
    if ((0xfff < (local_40 - (longlong)local_50 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_50[-1],
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)plVar1)))) {
LAB_18000b457:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000b480 UsbFinder_FindHidDevicesByDefaultDeviceId
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 18000b900 UsbFinder_FindHidDevicesByDeviceId

void UsbFinder_FindHidDevicesByDefaultDeviceId
               (undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
                    /* 0xb480  137  UsbFinder_FindHidDevicesByDefaultDeviceId */
  if ((longlong *)*param_3 != (longlong *)param_3[1]) {
    FUN_1800049d0((longlong *)*param_3,(longlong *)param_3[1]);
    param_3[1] = *param_3;
  }
  UsbFinder_FindHidDevicesByDeviceId(param_1,param_2,1,5,param_3);
  return;
}



// FUNCTION 18000b4e0 CS_UsbFinder_FindHidDevicesByDefaultDeviceId
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000b900 UsbFinder_FindHidDevicesByDeviceId
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 180016d80 FUN_180016d80
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CS_UsbFinder_FindHidDevicesByDefaultDeviceId(LPCSTR param_1,LPCSTR param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *_Memory;
  void *pvVar3;
  longlong *plVar4;
  undefined1 auStackY_c8 [32];
  undefined8 local_98 [3];
  longlong *local_80;
  longlong *plStack_78;
  longlong local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
                    /* 0xb4e0  23  CS_UsbFinder_FindHidDevicesByDefaultDeviceId */
  local_28 = DAT_180023010 ^ (ulonglong)auStackY_c8;
  uStack_40 = 0;
  local_48 = (void *)0x0;
  uStack_60 = 0;
  local_68 = (void *)0x0;
  local_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  local_70 = 0;
  local_38 = _DAT_18001c720;
  uStack_30 = _UNK_18001c728;
  local_58 = _DAT_18001c720;
  uStack_50 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_48);
  FUN_180016f40(param_2,(longlong *)&local_68);
  plVar1 = plStack_78;
  plVar4 = local_80;
  if (local_80 != plStack_78) {
    do {
      if (7 < (ulonglong)plVar4[3]) {
        pvVar3 = (void *)*plVar4;
        _Memory = pvVar3;
        if ((0xfff < plVar4[3] * 2 + 2U) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      plVar4[2] = 0;
      plVar4[3] = 7;
      *(undefined2 *)plVar4 = 0;
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar1);
    plStack_78 = local_80;
  }
  UsbFinder_FindHidDevicesByDeviceId(&local_48,&local_68,1,5,(longlong *)&local_80);
  plVar1 = FUN_18000ee60(local_98,(longlong *)&local_80);
  uVar2 = FUN_180016d80(plVar1);
  if (7 < uStack_50) {
    pvVar3 = local_68;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_68 + -8),
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar3)))) goto LAB_18000b6b5;
    free(pvVar3);
  }
  if (7 < uStack_30) {
    pvVar3 = local_48;
    if ((0xfff < uStack_30 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar3)))) goto LAB_18000b6b5;
    free(pvVar3);
  }
  if (local_80 != (longlong *)0x0) {
    FUN_1800049d0(local_80,plStack_78);
    plVar1 = local_80;
    if ((0xfff < (local_70 - (longlong)local_80 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_80[-1],
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)plVar1)))) {
LAB_18000b6b5:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000b6f0 UsbFinderC_FindHidDevicesByDefaultDeviceId
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000b900 UsbFinder_FindHidDevicesByDeviceId
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 1800172d0 FUN_1800172d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * UsbFinderC_FindHidDevicesByDefaultDeviceId(LPCSTR param_1,LPCSTR param_2,undefined4 *param_3)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined1 auStackY_b8 [32];
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
                    /* 0xb6f0  111  UsbFinderC_FindHidDevicesByDefaultDeviceId */
  local_30 = DAT_180023010 ^ (ulonglong)auStackY_b8;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  local_78 = 0;
  local_60 = _DAT_18001c720;
  uStack_58 = _UNK_18001c728;
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_180016f40(param_1,(longlong *)&local_50);
  FUN_180016f40(param_2,(longlong *)&local_70);
  plVar2 = plStack_80;
  plVar4 = local_88;
  if (local_88 != plStack_80) {
    do {
      if (7 < (ulonglong)plVar4[3]) {
        pvVar1 = (void *)*plVar4;
        pvVar3 = pvVar1;
        if ((0xfff < plVar4[3] * 2 + 2U) &&
           (pvVar3 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_18000b8d4;
        free(pvVar3);
      }
      plVar4[2] = 0;
      plVar4[3] = 7;
      *(undefined2 *)plVar4 = 0;
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar2);
    plStack_80 = local_88;
  }
  UsbFinder_FindHidDevicesByDeviceId(&local_50,&local_70,1,5,(longlong *)&local_88);
  *param_3 = (int)((longlong)plStack_80 - (longlong)local_88 >> 5);
  pvVar1 = FUN_1800172d0((longlong *)&local_88);
  if (local_88 != (longlong *)0x0) {
    FUN_1800049d0(local_88,plStack_80);
    plVar2 = local_88;
    if ((0xfff < (local_78 - (longlong)local_88 & 0xffffffffffffffe0U)) &&
       (plVar2 = (longlong *)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)plVar2)))) goto LAB_18000b8d4;
    free(plVar2);
    local_78 = 0;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
  }
  if (7 < uStack_58) {
    pvVar3 = local_70;
    if ((0xfff < uStack_58 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar3)))) goto LAB_18000b8d4;
    free(pvVar3);
  }
  if (7 < uStack_38) {
    pvVar3 = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar3)))) {
LAB_18000b8d4:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  return pvVar1;
}



// FUNCTION 18000b900 UsbFinder_FindHidDevicesByDeviceId
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180001170 FUN_180001170
// CALLS 18000a3b0 UsbFinder_FindHidDevices
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000008e towlower
// CALLS 180018860 thunk_FUN_180018824
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 1800066c0 FUN_1800066c0
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180004160 FUN_180004160
// CALLS 1800053a0 FUN_1800053a0
// CALLS 180019709 memmove
// CALLS EXTERNAL:00000011 MultiByteToWideChar

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void UsbFinder_FindHidDevicesByDeviceId
               (undefined8 *param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
               longlong *param_5)

{
  wint_t *******pppppppwVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort *******pppppppuVar6;
  ushort *******pppppppuVar7;
  longlong lVar8;
  longlong *plVar9;
  wint_t wVar10;
  int iVar11;
  size_t sVar12;
  LPWSTR pWVar13;
  ushort *******pppppppuVar14;
  longlong lVar15;
  void *pvVar16;
  ushort *******pppppppuVar17;
  wint_t ******_Memory;
  ushort *******pppppppuVar18;
  longlong *plVar19;
  wint_t *******pppppppwVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ushort *******pppppppuVar23;
  ushort *******pppppppuVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ushort *******pppppppuVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auStackY_3e8 [32];
  ulonglong local_390;
  wint_t *******local_370;
  undefined8 uStack_368;
  longlong local_360;
  ulonglong uStack_358;
  wint_t *******local_350;
  undefined8 uStack_348;
  longlong local_340;
  ulonglong uStack_338;
  wint_t *******local_330;
  undefined8 uStack_328;
  longlong local_320;
  ulonglong uStack_318;
  longlong *local_310;
  longlong *plStack_308;
  longlong local_300;
  ushort *******local_2f8;
  undefined8 uStack_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  wint_t *******local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  ushort *******local_2b8;
  longlong lStack_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  ushort *******local_298;
  longlong lStack_290;
  ulonglong local_288;
  ulonglong local_280;
  ushort *******local_278;
  undefined8 uStack_270;
  ulonglong local_268;
  ulonglong local_260;
  CHAR local_258;
  char acStack_257 [255];
  CHAR local_158;
  char acStack_157 [255];
  ulonglong local_58;
  
                    /* 0xb900  138  UsbFinder_FindHidDevicesByDeviceId */
  local_58 = DAT_180023010 ^ (ulonglong)auStackY_3e8;
  local_2e0 = 7;
  local_390 = 7;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_270 = 0;
  local_2f8 = (ushort *******)0x0;
  uStack_328 = 0;
  local_268 = 0;
  uStack_2d0 = 0;
  local_278 = (ushort *******)0x0;
  local_320 = 0;
  local_330 = (wint_t *******)0x0;
  local_2c8 = 0;
  local_2d8 = (void *)0x0;
  local_300 = 0;
  local_260 = 7;
  uStack_318 = 7;
  uStack_2c0 = 7;
  local_310 = (longlong *)0x0;
  plStack_308 = (longlong *)0x0;
  FUN_180004160(&local_370,param_1);
  pppppppwVar20 = (wint_t *******)&local_370;
  if (7 < uStack_358) {
    pppppppwVar20 = local_370;
  }
  pppppppwVar1 = (wint_t *******)((longlong)pppppppwVar20 + local_360 * 2);
  for (; pppppppwVar20 != pppppppwVar1;
      pppppppwVar20 = (wint_t *******)((longlong)pppppppwVar20 + 2)) {
    wVar10 = towlower(*(wint_t *)pppppppwVar20);
    *(wint_t *)pppppppwVar20 = wVar10;
  }
  if (7 < uStack_318) {
    _Memory = (wint_t ******)local_330;
    if ((0xfff < uStack_318 * 2 + 2) &&
       (_Memory = local_330[-1], 0x1f < (ulonglong)((longlong)local_330 + (-8 - (longlong)_Memory)))
       ) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_330 = local_370;
  uStack_328 = uStack_368;
  local_320 = local_360;
  uStack_318 = uStack_358;
  FUN_180004160(&local_350,param_2);
  pppppppwVar20 = (wint_t *******)&local_350;
  if (7 < uStack_338) {
    pppppppwVar20 = local_350;
  }
  pppppppwVar1 = (wint_t *******)((longlong)pppppppwVar20 + local_340 * 2);
  for (; pppppppwVar20 != pppppppwVar1;
      pppppppwVar20 = (wint_t *******)((longlong)pppppppwVar20 + 2)) {
    wVar10 = towlower(*(wint_t *)pppppppwVar20);
    *(wint_t *)pppppppwVar20 = wVar10;
  }
  if (7 < uStack_2c0) {
    pvVar16 = local_2d8;
    if ((0xfff < uStack_2c0 * 2 + 2) &&
       (pvVar16 = *(void **)((longlong)local_2d8 + -8),
       0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar16);
  }
  local_2d8 = local_350;
  uStack_2d0 = uStack_348;
  local_2c8 = local_340;
  uStack_2c0 = uStack_338;
  if ((longlong *)*param_5 != (longlong *)param_5[1]) {
    FUN_1800049d0((longlong *)*param_5,(longlong *)param_5[1]);
    param_5[1] = *param_5;
  }
  UsbFinder_FindHidDevices(param_1,param_2,(longlong *)&local_310);
  if (param_2[2] == 0) {
    pppppppwVar20 = (wint_t *******)&local_330;
    if (7 < uStack_318) {
      pppppppwVar20 = local_330;
    }
    FUN_180001170(&local_258,0x100,"vid_%ls&pid_",pppppppwVar20);
    FUN_180001170(&local_158,0x100,"mi_%02d&col%02d",(ulonglong)param_3);
    uVar21 = 0xffffffffffffffff;
    lVar15 = -1;
    do {
      lVar27 = lVar15 + 1;
      lVar8 = lVar15 + 1;
      lVar15 = lVar27;
    } while ((&local_258)[lVar8] != '\0');
    iVar11 = MultiByteToWideChar(0,0,&local_258,(int)lVar27,(LPWSTR)0x0,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(iVar11 + 1);
    sVar12 = SUB168(ZEXT816(2) * auVar3,0);
    if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
      sVar12 = 0xffffffffffffffff;
    }
    pWVar13 = (LPWSTR)thunk_FUN_180018824(sVar12);
    lVar15 = -1;
    do {
      lVar27 = lVar15 + 1;
      lVar8 = lVar15 + 1;
      lVar15 = lVar27;
    } while ((&local_258)[lVar8] != '\0');
    MultiByteToWideChar(0,0,&local_258,(int)lVar27,pWVar13,iVar11);
    uVar26 = 0xffffffffffffffff;
    pWVar13[iVar11] = L'\0';
    do {
      uVar26 = uVar26 + 1;
    } while (pWVar13[uVar26] != L'\0');
    FUN_1800066c0((longlong *)&local_2f8,pWVar13,uVar26);
    free(pWVar13);
    lVar15 = -1;
    do {
      lVar27 = lVar15 + 1;
      lVar8 = lVar15 + 1;
      lVar15 = lVar27;
    } while ((&local_158)[lVar8] != '\0');
    iVar11 = MultiByteToWideChar(0,0,&local_158,(int)lVar27,(LPWSTR)0x0,0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(iVar11 + 1);
    sVar12 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      sVar12 = 0xffffffffffffffff;
    }
    pWVar13 = (LPWSTR)thunk_FUN_180018824(sVar12);
    lVar15 = -1;
    do {
      lVar27 = lVar15 + 1;
      lVar8 = lVar15 + 1;
      lVar15 = lVar27;
    } while ((&local_158)[lVar8] != '\0');
    MultiByteToWideChar(0,0,&local_158,(int)lVar27,pWVar13,iVar11);
    pWVar13[iVar11] = L'\0';
    do {
      uVar21 = uVar21 + 1;
    } while (pWVar13[uVar21] != L'\0');
    FUN_1800066c0((longlong *)&local_278,pWVar13,uVar21);
    free(pWVar13);
    local_390 = local_260;
    uVar2 = local_268;
    uVar26 = local_2e0;
    uVar21 = local_2e8;
    pppppppuVar24 = local_2f8;
    plVar9 = plStack_308;
    for (plVar19 = local_310; plVar19 != plVar9; plVar19 = plVar19 + 4) {
      pppppppuVar18 = (ushort *******)0x7ffffffffffffffe;
      local_2b8 = (ushort *******)0x0;
      lStack_2b0 = 0;
      plVar22 = plVar19;
      if (7 < (ulonglong)plVar19[3]) {
        plVar22 = (longlong *)*plVar19;
      }
      uVar30 = plVar19[2];
      if (0x7ffffffffffffffe < uVar30) {
LAB_18000c5f0:
                    /* WARNING: Subroutine does not return */
        FUN_180001370();
      }
      if (uVar30 < 8) {
        pppppppuVar14 = (ushort *******)*plVar22;
        uVar29 = 7;
        local_2a8 = uVar30;
        local_2a0 = 7;
        local_2b8 = pppppppuVar14;
        lStack_2b0 = plVar22[1];
      }
      else {
        uVar29 = uVar30 | 7;
        if (uVar29 < 0x7fffffffffffffff) {
          if (uVar29 < 10) {
            uVar29 = 10;
          }
        }
        else {
          uVar29 = 0x7ffffffffffffffe;
        }
        pppppppuVar14 = (ushort *******)FUN_180004ec0(0x7ffffffffffffffe,uVar29 + 1);
        pppppppuVar18 = pppppppuVar14;
        local_2b8 = pppppppuVar14;
        local_2a8 = uVar30;
        local_2a0 = uVar29;
        memcpy(pppppppuVar14,plVar22,uVar30 * 2 + 2);
      }
      pppppppuVar23 = (ushort *******)&local_2f8;
      if (7 < uVar26) {
        pppppppuVar23 = pppppppuVar24;
      }
      pppppppuVar28 = (ushort *******)&local_2b8;
      if (7 < uVar29) {
        pppppppuVar28 = pppppppuVar14;
      }
      if (uVar21 <= uVar30) {
        if (uVar21 == 0) {
LAB_18000be5a:
          pppppppuVar23 = (ushort *******)&local_278;
          if (7 < local_390) {
            pppppppuVar23 = local_278;
          }
          pppppppuVar28 = (ushort *******)&local_2b8;
          if (7 < uVar29) {
            pppppppuVar28 = pppppppuVar14;
          }
          if (uVar2 <= uVar30) {
            if (uVar2 == 0) {
LAB_18000bf1a:
              plVar22 = (longlong *)param_5[1];
              if (plVar22 == (longlong *)param_5[2]) {
                FUN_1800053a0(param_5,plVar22,&local_2b8);
                pppppppuVar14 = local_2b8;
                uVar29 = local_2a0;
              }
              else {
                *plVar22 = 0;
                plVar22[1] = 0;
                plVar22[2] = 0;
                pppppppuVar23 = (ushort *******)&local_2b8;
                if (7 < uVar29) {
                  pppppppuVar23 = pppppppuVar14;
                }
                plVar22[3] = 0;
                if (0x7ffffffffffffffe < uVar30) goto LAB_18000c5f0;
                plVar22[3] = 7;
                if (uVar30 < 8) {
                  plVar22[2] = uVar30;
                  memmove(plVar22,pppppppuVar23,0x10);
                  param_5[1] = param_5[1] + 0x20;
                }
                else {
                  uVar25 = uVar30 | 7;
                  if (uVar25 < 0x7fffffffffffffff) {
                    if (uVar25 < 10) {
                      uVar25 = 10;
                    }
                  }
                  else {
                    uVar25 = 0x7ffffffffffffffe;
                  }
                  pvVar16 = (void *)FUN_180004ec0(pppppppuVar18,uVar25 + 1);
                  *plVar22 = (longlong)pvVar16;
                  plVar22[2] = uVar30;
                  plVar22[3] = uVar25;
                  memcpy(pvVar16,pppppppuVar23,uVar30 * 2 + 2);
                  param_5[1] = param_5[1] + 0x20;
                }
              }
            }
            else {
              for (pppppppuVar17 = pppppppuVar28;
                  lVar15 = (longlong)
                           ((longlong)pppppppuVar28 +
                           (((uVar30 - uVar2) + 1) * 2 - (longlong)pppppppuVar17)) >> 1, lVar15 != 0
                  ; pppppppuVar17 = (ushort *******)((longlong)pppppppuVar17 + 2)) {
                while (*(ushort *)pppppppuVar17 != *(ushort *)pppppppuVar23) {
                  pppppppuVar17 = (ushort *******)((longlong)pppppppuVar17 + 2);
                  lVar15 = lVar15 + -1;
                  if (lVar15 == 0) goto LAB_18000c00e;
                }
                pppppppuVar18 = pppppppuVar17;
                pppppppuVar6 = pppppppuVar23;
                uVar25 = uVar2;
                if (pppppppuVar17 == (ushort *******)0x0) break;
                while( true ) {
                  if (uVar25 == 0) {
                    if ((longlong)pppppppuVar17 - (longlong)pppppppuVar28 >> 1 != -1)
                    goto LAB_18000bf1a;
                    goto LAB_18000c00e;
                  }
                  if (*(ushort *)pppppppuVar18 != *(ushort *)pppppppuVar6) break;
                  pppppppuVar18 = (ushort *******)((longlong)pppppppuVar18 + 2);
                  pppppppuVar6 = (ushort *******)((longlong)pppppppuVar6 + 2);
                  uVar25 = uVar25 - 1;
                }
              }
            }
          }
        }
        else {
          for (pppppppuVar17 = pppppppuVar28;
              lVar15 = (longlong)
                       ((longlong)pppppppuVar28 +
                       (((uVar30 - uVar21) + 1) * 2 - (longlong)pppppppuVar17)) >> 1, lVar15 != 0;
              pppppppuVar17 = (ushort *******)((longlong)pppppppuVar17 + 2)) {
            while (*(ushort *)pppppppuVar17 != *(ushort *)pppppppuVar23) {
              pppppppuVar17 = (ushort *******)((longlong)pppppppuVar17 + 2);
              lVar15 = lVar15 + -1;
              if (lVar15 == 0) goto LAB_18000c00e;
            }
            pppppppuVar18 = pppppppuVar17;
            pppppppuVar6 = pppppppuVar23;
            uVar25 = uVar21;
            if (pppppppuVar17 == (ushort *******)0x0) break;
            while( true ) {
              if (uVar25 == 0) {
                if ((longlong)pppppppuVar17 - (longlong)pppppppuVar28 >> 1 != -1)
                goto LAB_18000be5a;
                goto LAB_18000c00e;
              }
              if (*(ushort *)pppppppuVar18 != *(ushort *)pppppppuVar6) break;
              pppppppuVar18 = (ushort *******)((longlong)pppppppuVar18 + 2);
              pppppppuVar6 = (ushort *******)((longlong)pppppppuVar6 + 2);
              uVar25 = uVar25 - 1;
            }
          }
        }
      }
LAB_18000c00e:
      if (7 < uVar29) {
        pppppppuVar18 = pppppppuVar14;
        if ((0xfff < uVar29 * 2 + 2) &&
           (pppppppuVar18 = (ushort *******)pppppppuVar14[-1],
           0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar18))))
        goto LAB_18000c5be;
        free(pppppppuVar18);
      }
    }
  }
  else {
    pppppppwVar20 = (wint_t *******)&local_330;
    if (7 < uStack_318) {
      pppppppwVar20 = local_330;
    }
    FUN_180001170(&local_258,0x100,"vid_%ls&pid_%ls&mi_%02d&col%02d",pppppppwVar20);
    uVar21 = 0xffffffffffffffff;
    lVar15 = -1;
    do {
      lVar27 = lVar15 + 1;
      lVar8 = lVar15 + 1;
      lVar15 = lVar27;
    } while ((&local_258)[lVar8] != '\0');
    iVar11 = MultiByteToWideChar(0,0,&local_258,(int)lVar27,(LPWSTR)0x0,0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)(iVar11 + 1);
    sVar12 = SUB168(ZEXT816(2) * auVar5,0);
    if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
      sVar12 = 0xffffffffffffffff;
    }
    pWVar13 = (LPWSTR)thunk_FUN_180018824(sVar12);
    lVar15 = -1;
    do {
      lVar27 = lVar15 + 1;
      lVar8 = lVar15 + 1;
      lVar15 = lVar27;
    } while ((&local_258)[lVar8] != '\0');
    MultiByteToWideChar(0,0,&local_258,(int)lVar27,pWVar13,iVar11);
    pWVar13[iVar11] = L'\0';
    do {
      uVar21 = uVar21 + 1;
    } while (pWVar13[uVar21] != L'\0');
    FUN_1800066c0((longlong *)&local_2f8,pWVar13,uVar21);
    free(pWVar13);
    uVar26 = local_2e0;
    uVar21 = local_2e8;
    pppppppuVar24 = local_2f8;
    plVar9 = plStack_308;
    for (plVar19 = local_310; plVar19 != plVar9; plVar19 = plVar19 + 4) {
      pppppppuVar18 = (ushort *******)0x7ffffffffffffffe;
      local_298 = (ushort *******)0x0;
      lStack_290 = 0;
      plVar22 = plVar19;
      if (7 < (ulonglong)plVar19[3]) {
        plVar22 = (longlong *)*plVar19;
      }
      uVar2 = plVar19[2];
      if (0x7ffffffffffffffe < uVar2) goto LAB_18000c5f0;
      if (uVar2 < 8) {
        pppppppuVar14 = (ushort *******)*plVar22;
        uVar30 = 7;
        local_288 = uVar2;
        local_280 = 7;
        local_298 = pppppppuVar14;
        lStack_290 = plVar22[1];
      }
      else {
        uVar30 = uVar2 | 7;
        if (uVar30 < 0x7fffffffffffffff) {
          if (uVar30 < 10) {
            uVar30 = 10;
          }
        }
        else {
          uVar30 = 0x7ffffffffffffffe;
        }
        pppppppuVar14 = (ushort *******)FUN_180004ec0(0x7ffffffffffffffe,uVar30 + 1);
        pppppppuVar18 = pppppppuVar14;
        local_298 = pppppppuVar14;
        local_288 = uVar2;
        local_280 = uVar30;
        memcpy(pppppppuVar14,plVar22,uVar2 * 2 + 2);
      }
      pppppppuVar23 = (ushort *******)&local_2f8;
      if (7 < uVar26) {
        pppppppuVar23 = pppppppuVar24;
      }
      pppppppuVar28 = (ushort *******)&local_298;
      if (7 < uVar30) {
        pppppppuVar28 = pppppppuVar14;
      }
      if (uVar21 <= uVar2) {
        if (uVar21 == 0) {
LAB_18000c2fa:
          plVar22 = (longlong *)param_5[1];
          if (plVar22 == (longlong *)param_5[2]) {
            FUN_1800053a0(param_5,plVar22,&local_298);
            pppppppuVar14 = local_298;
            uVar30 = local_280;
          }
          else {
            *plVar22 = 0;
            plVar22[1] = 0;
            plVar22[2] = 0;
            pppppppuVar23 = (ushort *******)&local_298;
            if (7 < uVar30) {
              pppppppuVar23 = pppppppuVar14;
            }
            plVar22[3] = 0;
            if (0x7ffffffffffffffe < uVar2) goto LAB_18000c5f0;
            plVar22[3] = 7;
            if (uVar2 < 8) {
              plVar22[2] = uVar2;
              memmove(plVar22,pppppppuVar23,0x10);
              param_5[1] = param_5[1] + 0x20;
            }
            else {
              uVar29 = uVar2 | 7;
              if (uVar29 < 0x7fffffffffffffff) {
                if (uVar29 < 10) {
                  uVar29 = 10;
                }
              }
              else {
                uVar29 = 0x7ffffffffffffffe;
              }
              pvVar16 = (void *)FUN_180004ec0(pppppppuVar18,uVar29 + 1);
              *plVar22 = (longlong)pvVar16;
              plVar22[2] = uVar2;
              plVar22[3] = uVar29;
              memcpy(pvVar16,pppppppuVar23,uVar2 * 2 + 2);
              param_5[1] = param_5[1] + 0x20;
            }
          }
        }
        else {
          for (pppppppuVar17 = pppppppuVar28;
              pppppppuVar18 =
                   (ushort *******)
                   ((longlong)
                    ((longlong)pppppppuVar28 +
                    (((uVar2 - uVar21) + 1) * 2 - (longlong)pppppppuVar17)) >> 1),
              pppppppuVar18 != (ushort *******)0x0;
              pppppppuVar17 = (ushort *******)((longlong)pppppppuVar17 + 2)) {
            while (*(ushort *)pppppppuVar17 != *(ushort *)pppppppuVar23) {
              pppppppuVar17 = (ushort *******)((longlong)pppppppuVar17 + 2);
              pppppppuVar18 = (ushort *******)((longlong)pppppppuVar18 + -1);
              if (pppppppuVar18 == (ushort *******)0x0) goto LAB_18000c3eb;
            }
            pppppppuVar6 = pppppppuVar17;
            pppppppuVar7 = pppppppuVar23;
            uVar29 = uVar21;
            if (pppppppuVar17 == (ushort *******)0x0) break;
            while( true ) {
              if (uVar29 == 0) {
                if ((longlong)pppppppuVar17 - (longlong)pppppppuVar28 >> 1 != -1)
                goto LAB_18000c2fa;
                goto LAB_18000c3eb;
              }
              pppppppuVar18 = (ushort *******)(ulonglong)*(ushort *)pppppppuVar7;
              if (*(ushort *)pppppppuVar6 != *(ushort *)pppppppuVar7) break;
              pppppppuVar6 = (ushort *******)((longlong)pppppppuVar6 + 2);
              pppppppuVar7 = (ushort *******)((longlong)pppppppuVar7 + 2);
              uVar29 = uVar29 - 1;
            }
          }
        }
      }
LAB_18000c3eb:
      if (7 < uVar30) {
        pppppppuVar18 = pppppppuVar14;
        if ((0xfff < uVar30 * 2 + 2) &&
           (pppppppuVar18 = (ushort *******)pppppppuVar14[-1],
           0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar18))))
        goto LAB_18000c5be;
        free(pppppppuVar18);
      }
    }
  }
  if (local_310 != (longlong *)0x0) {
    FUN_1800049d0(local_310,plStack_308);
    plVar19 = local_310;
    if ((0xfff < (local_300 - (longlong)local_310 & 0xffffffffffffffe0U)) &&
       (plVar19 = (longlong *)local_310[-1],
       0x1f < (ulonglong)((longlong)local_310 + (-8 - (longlong)plVar19)))) goto LAB_18000c5be;
    free(plVar19);
    local_300 = 0;
    local_310 = (longlong *)0x0;
    plStack_308 = (longlong *)0x0;
  }
  if (7 < uStack_2c0) {
    pppppppwVar20 = local_2d8;
    if ((0xfff < uStack_2c0 * 2 + 2) &&
       (pppppppwVar20 = (wint_t *******)local_2d8[-1],
       0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)pppppppwVar20))))
    goto LAB_18000c5be;
    free(pppppppwVar20);
  }
  local_2c8 = 0;
  uStack_2c0 = 7;
  local_2d8 = (wint_t *******)((ulonglong)local_2d8 & 0xffffffffffff0000);
  if (7 < uStack_318) {
    pppppppwVar20 = local_330;
    if ((0xfff < uStack_318 * 2 + 2) &&
       (pppppppwVar20 = (wint_t *******)local_330[-1],
       0x1f < (ulonglong)((longlong)local_330 + (-8 - (longlong)pppppppwVar20))))
    goto LAB_18000c5be;
    free(pppppppwVar20);
  }
  local_320 = 0;
  uStack_318 = 7;
  local_330 = (wint_t *******)((ulonglong)local_330 & 0xffffffffffff0000);
  if (7 < local_390) {
    pppppppuVar18 = local_278;
    if ((0xfff < local_390 * 2 + 2) &&
       (pppppppuVar18 = (ushort *******)local_278[-1],
       0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)pppppppuVar18))))
    goto LAB_18000c5be;
    free(pppppppuVar18);
  }
  if (7 < uVar26) {
    pppppppuVar18 = pppppppuVar24;
    if ((0xfff < uVar26 * 2 + 2) &&
       (pppppppuVar18 = (ushort *******)pppppppuVar24[-1],
       0x1f < (ulonglong)((longlong)pppppppuVar24 + (-8 - (longlong)pppppppuVar18)))) {
LAB_18000c5be:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppppuVar18);
  }
  return;
}



// FUNCTION 18000c600 CS_UsbFinder_FindHidDevicesByDeviceId
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000b900 UsbFinder_FindHidDevicesByDeviceId
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180016d80 FUN_180016d80
// CALLS 1800187f0 free
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
CS_UsbFinder_FindHidDevicesByDeviceId(LPCSTR param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 auStackY_c8 [32];
  undefined8 local_98 [3];
  longlong *local_80;
  longlong *plStack_78;
  longlong local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
                    /* 0xc600  24  CS_UsbFinder_FindHidDevicesByDeviceId */
  local_28 = DAT_180023010 ^ (ulonglong)auStackY_c8;
  local_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  local_70 = 0;
  uStack_40 = 0;
  local_48 = (void *)0x0;
  uStack_60 = 0;
  local_68 = (void *)0x0;
  local_38 = _DAT_18001c720;
  uStack_30 = _UNK_18001c728;
  local_58 = _DAT_18001c720;
  uStack_50 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_48);
  FUN_180016f40(param_2,(longlong *)&local_68);
  UsbFinder_FindHidDevicesByDeviceId
            (&local_48,&local_68,param_3,(ulonglong)param_4,(longlong *)&local_80);
  plVar1 = FUN_18000ee60(local_98,(longlong *)&local_80);
  uVar2 = FUN_180016d80(plVar1);
  if (7 < uStack_50) {
    pvVar3 = local_68;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_68 + -8),
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar3)))) goto LAB_18000c77d;
    free(pvVar3);
  }
  if (7 < uStack_30) {
    pvVar3 = local_48;
    if ((0xfff < uStack_30 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar3)))) goto LAB_18000c77d;
    free(pvVar3);
  }
  if (local_80 != (longlong *)0x0) {
    FUN_1800049d0(local_80,plStack_78);
    plVar1 = local_80;
    if ((0xfff < (local_70 - (longlong)local_80 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_80[-1],
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)plVar1)))) {
LAB_18000c77d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000c7b0 UsbFinderC_FindHidDevicesByDeviceId
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000b900 UsbFinder_FindHidDevicesByDeviceId
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187f0 free
// CALLS 1800172d0 FUN_1800172d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * UsbFinderC_FindHidDevicesByDeviceId
                 (LPCSTR param_1,LPCSTR param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  void *pvVar1;
  longlong *_Memory;
  void *pvVar2;
  undefined1 auStackY_c8 [32];
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
                    /* 0xc7b0  112  UsbFinderC_FindHidDevicesByDeviceId */
  local_40 = DAT_180023010 ^ (ulonglong)auStackY_c8;
  local_88 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_50 = _DAT_18001c720;
  uStack_48 = _UNK_18001c728;
  local_70 = _DAT_18001c720;
  uStack_68 = _UNK_18001c728;
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  FUN_180016f40(param_1,(longlong *)&local_60);
  FUN_180016f40(param_2,(longlong *)&local_80);
  UsbFinder_FindHidDevicesByDeviceId
            (&local_60,&local_80,param_3,(ulonglong)param_4,(longlong *)&local_98);
  *param_5 = (int)((longlong)plStack_90 - (longlong)local_98 >> 5);
  pvVar1 = FUN_1800172d0((longlong *)&local_98);
  if (local_98 != (longlong *)0x0) {
    FUN_1800049d0(local_98,plStack_90);
    _Memory = local_98;
    if ((0xfff < (local_88 - (longlong)local_98 & 0xffffffffffffffe0U)) &&
       (_Memory = (longlong *)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)_Memory)))) goto LAB_18000c928;
    free(_Memory);
    local_88 = 0;
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  if (7 < uStack_68) {
    pvVar2 = local_80;
    if ((0xfff < uStack_68 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)local_80 + -8),
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pvVar2)))) goto LAB_18000c928;
    free(pvVar2);
  }
  if (7 < uStack_48) {
    pvVar2 = local_60;
    if ((0xfff < uStack_48 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar2)))) {
LAB_18000c928:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  return pvVar1;
}



// FUNCTION 18000c960 UsbFinder_GetDeviceData
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000018 ResetEvent
// CALLS EXTERNAL:0000000d ReadFile
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS EXTERNAL:0000000c WriteFile
// CALLS 180012820 FUN_180012820
// CALLS 1800128d0 FUN_1800128d0
// CALLS 180004160 FUN_180004160
// CALLS EXTERNAL:0000000e CreateEventW
// CALLS EXTERNAL:00000009 WaitForSingleObject
// CALLS EXTERNAL:00000001 CancelIo
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_GetDeviceData(undefined8 *param_1,LPCVOID param_2,undefined8 *param_3)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  LPCWSTR pWVar4;
  HANDLE hFile;
  HANDLE hFile_00;
  undefined4 extraout_var;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStackY_f8 [32];
  undefined8 local_c8 [4];
  undefined8 local_a8 [4];
  _OVERLAPPED local_88;
  DWORD local_68;
  DWORD local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50;
  ulonglong local_48;
  
                    /* 0xc960  142  UsbFinder_GetDeviceData */
  local_48 = DAT_180023010 ^ (ulonglong)auStackY_f8;
  *param_3 = 0;
  param_3[1] = 0;
  iVar6 = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  local_68 = 0;
  pWVar4 = (LPCWSTR)FUN_180004160(local_c8,param_1);
  hFile = FUN_180012820(pWVar4);
  pWVar4 = (LPCWSTR)FUN_180004160(local_a8,param_1);
  hFile_00 = FUN_1800128d0(pWVar4);
  local_88.Internal = 0;
  local_88.InternalHigh = 0;
  local_88.u.Pointer = (PVOID)0x0;
  local_88.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  BVar2 = ReadFile(hFile_00,&local_60,0x11,&local_64,&local_88);
  if (local_88.hEvent == (HANDLE)0x0) {
    uVar5 = CONCAT44(extraout_var,BVar2) & 0xffffffffffffff00;
  }
  else {
    uVar5 = 0;
    do {
      BVar2 = WriteFile(hFile,param_2,0x11,&local_68,(LPOVERLAPPED)0x0);
      if ((BVar2 == 1) && (DVar3 = WaitForSingleObject(local_88.hEvent,100), DVar3 == 0)) {
        cVar1 = FUN_18000f050((longlong)&local_60,0,0x10);
        if (local_50 == cVar1) {
          if (local_60._1_1_ == *(char *)((longlong)param_2 + 1)) {
            uVar5 = 1;
            *(undefined4 *)param_3 = (undefined4)local_60;
            *(undefined4 *)((longlong)param_3 + 4) = local_60._4_4_;
            *(undefined4 *)(param_3 + 1) = (undefined4)uStack_58;
            *(undefined4 *)((longlong)param_3 + 0xc) = uStack_58._4_4_;
            *(char *)(param_3 + 2) = local_50;
            break;
          }
          local_60 = 0;
          uStack_58 = 0;
          local_50 = '\0';
          ResetEvent(local_88.hEvent);
        }
        ReadFile(hFile_00,&local_60,0x11,&local_64,&local_88);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    CancelIo(hFile);
    CancelIo(hFile_00);
    if ((longlong)hFile_00 - 1U < 0xfffffffffffffffe) {
      CloseHandle(hFile_00);
    }
    if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
      CloseHandle(hFile);
    }
  }
  return uVar5;
}



// FUNCTION 18000cb80 CS_UsbFinder_GetDeviceData
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong CS_UsbFinder_GetDeviceData(LPCSTR param_1,LPCVOID param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xcb80  28  CS_UsbFinder_GetDeviceData
                       0xcb80  117  UsbFinderC_GetDeviceData */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  uVar1 = UsbFinder_GetDeviceData(&local_38,param_2,param_3);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return uVar1 & 0xff;
}



// FUNCTION 18000cc40 UsbFinder_GetDeviceInfo
// THUNK false
// CALLS 18000f150 FUN_18000f150
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * UsbFinder_GetDeviceInfo(undefined2 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined8 local_30 [3];
  ulonglong local_18;
  
                    /* 0xcc40  143  UsbFinder_GetDeviceInfo */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  FUN_18000f150(local_30);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = UsbFinder_GetDeviceData(param_2,local_30,&local_48);
  if ((char)uVar1 != '\0') {
    *(undefined1 *)param_1 = local_3e;
    *(undefined1 *)((longlong)param_1 + 1) = local_3d;
    *(undefined1 *)(param_1 + 1) = local_3c;
  }
  return param_1;
}



// FUNCTION 18000ccc0 UsbFinderC_GetDeviceInfo
// THUNK false
// CALLS 18000f150 FUN_18000f150
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * UsbFinderC_GetDeviceInfo(undefined1 *param_1,LPCSTR param_2)

{
  ulonglong uVar1;
  void *_Memory;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30 [3];
  ulonglong local_18;
  
                    /* 0xccc0  118  UsbFinderC_GetDeviceInfo */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_2,(longlong *)&local_50);
  FUN_18000f150(local_30);
  uVar1 = UsbFinder_GetDeviceData(&local_50,local_30,&local_68);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if ((char)uVar1 != '\0') {
    uVar4 = local_5c;
    uVar3 = local_5d;
    uVar2 = local_5e;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return param_1;
}



// FUNCTION 18000cdd0 CS_UsbFinder_GetDeviceInfo
// THUNK false
// CALLS 18000f150 FUN_18000f150
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CS_UsbFinder_GetDeviceInfo(LPCSTR param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 local_40 [3];
  ulonglong local_28;
  
                    /* 0xcdd0  29  CS_UsbFinder_GetDeviceInfo */
  local_28 = DAT_180023010 ^ (ulonglong)auStack_98;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = _DAT_18001c720;
  uStack_48 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_60);
  FUN_18000f150(local_40);
  uVar1 = UsbFinder_GetDeviceData(&local_60,local_40,&local_78);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if ((char)uVar1 != '\0') {
    uVar4 = local_6c;
    uVar3 = local_6d;
    uVar2 = local_6e;
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  if (7 < uStack_48) {
    _Memory = local_60;
    if ((0xfff < uStack_48 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return;
}



// FUNCTION 18000ced0 UsbFinder_GetVersion
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 UsbFinder_GetVersion(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xced0  150  UsbFinder_GetVersion */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x1208;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001208;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar1 != '\0') {
    return CONCAT11(local_48._6_1_,local_48._7_1_);
  }
  return 0;
}



// FUNCTION 18000cf70 CS_UsbFinder_GetVersion
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 CS_UsbFinder_GetVersion(LPCSTR param_1)

{
  ulonglong uVar1;
  void *_Memory;
  undefined2 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xcf70  37  CS_UsbFinder_GetVersion
                       0xcf70  125  UsbFinderC_GetVersion */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uVar2 = 0;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0x1208;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001208;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,&local_68);
  if ((char)uVar1 != '\0') {
    uVar2 = CONCAT11(local_68._6_1_,local_68._7_1_);
  }
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return uVar2;
}



// FUNCTION 18000d070 UsbFinder_GetDeviceOnLine
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool UsbFinder_GetDeviceOnLine(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xd070  144  UsbFinder_GetDeviceOnLine */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x308;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000000308;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar1 != '\0') {
    return local_48._6_1_ != '\0';
  }
  return false;
}



// FUNCTION 18000d110 CS_UsbFinder_GetDeviceOnLine
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_GetDeviceOnLine(LPCSTR param_1)

{
  ulonglong uVar1;
  void *_Memory;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xd110  30  CS_UsbFinder_GetDeviceOnLine
                       0xd110  119  UsbFinderC_GetDeviceOnLine */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0x308;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000000308;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,&local_68);
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return (char)uVar1 != '\0' && local_68._6_1_ != '\0';
}



// FUNCTION 18000d220 UsbFinder_GetDeviceOnLineWithUsbAddress
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool UsbFinder_GetDeviceOnLineWithUsbAddress(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  char local_18;
  ulonglong local_10;
  
                    /* 0xd220  145  UsbFinder_GetDeviceOnLineWithUsbAddress */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_48;
  uStack_20 = 0;
  local_28 = 0x308;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    local_28 = 0x800000000308;
  }
  local_18 = FUN_18000f050((longlong)&local_28,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_28,param_2);
  return (char)uVar1 != '\0';
}



// FUNCTION 18000d2b0 CS_UsbFinder_GetDeviceOnLineWithUsbAddress
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000028 Ordinal_26
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS EXTERNAL:0000002a Ordinal_15
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CS_UsbFinder_GetDeviceOnLineWithUsbAddress(LPCSTR param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  void *_Memory;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined8 local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  ulonglong local_18;
  
                    /* 0xd2b0  31  CS_UsbFinder_GetDeviceOnLineWithUsbAddress */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_98;
  uStack_60 = 0;
  local_68 = (void *)0x0;
  local_58 = _DAT_18001c720;
  uStack_50 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_68);
  uStack_40 = 0;
  local_48 = 0x308;
  local_38 = 0;
  if (DAT_18002851d != '\0') {
    local_48 = 0x800000000308;
  }
  local_38 = FUN_18000f050((longlong)&local_48,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_68,&local_48,&local_30);
  local_70 = 0x11;
  if ((char)uVar1 == '\0') {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uVar2 = Ordinal_15(0x11,1,&local_70);
    local_78[0] = 0;
    do {
      Ordinal_26(uVar2,local_78,(longlong)&local_30 + (longlong)local_78[0]);
      local_78[0] = local_78[0] + 1;
    } while (local_78[0] < 0x11);
  }
  else {
    uVar2 = Ordinal_15(0x11,1,&local_70);
    local_78[0] = 0;
    do {
      Ordinal_26(uVar2,local_78,(longlong)&local_30 + (longlong)local_78[0]);
      local_78[0] = local_78[0] + 1;
    } while (local_78[0] < 0x11);
  }
  if (7 < uStack_50) {
    _Memory = local_68;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_68 + -8),
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return uVar2;
}



// FUNCTION 18000d440 UsbFinderC_GetDeviceOnLineWithUsbAddress
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool UsbFinderC_GetDeviceOnLineWithUsbAddress(LPCSTR param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  char local_18;
  ulonglong local_10;
  
                    /* 0xd440  120  UsbFinderC_GetDeviceOnLineWithUsbAddress */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_40 = 0;
  local_48 = (void *)0x0;
  local_38 = _DAT_18001c720;
  uStack_30 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_48);
  uStack_20 = 0;
  local_28 = 0x308;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    local_28 = 0x800000000308;
  }
  local_18 = FUN_18000f050((longlong)&local_28,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_48,&local_28,param_2);
  if (7 < uStack_30) {
    _Memory = local_48;
    if ((0xfff < uStack_30 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return (char)uVar1 != '\0';
}



// FUNCTION 18000d530 UsbFinder_GetBatteryLevel
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_GetBatteryLevel(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xd530  141  UsbFinder_GetBatteryLevel */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x408;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000000408;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    *param_2 = local_48._6_1_;
    param_2[1] = local_48._7_1_;
    uVar1 = 1;
    *(ushort *)(param_2 + 2) = CONCAT11(local_40,local_3f);
  }
  return uVar1;
}



// FUNCTION 18000d5e0 CS_UsbFinder_GetBatteryLevel
// THUNK true

// FUNCTION 18000d5f0 UsbFinderC_GetBatteryLevel
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool UsbFinderC_GetBatteryLevel(LPCSTR param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xd5f0  116  UsbFinderC_GetBatteryLevel */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0x408;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000000408;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,&local_68);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    *param_2 = local_68._6_1_;
    param_2[1] = local_68._7_1_;
    *(ushort *)(param_2 + 2) = CONCAT11(local_60,local_5f);
  }
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar2;
}



// FUNCTION 18000d710 UsbFinder_GetUsbDeviceAttribute
// THUNK false
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS 1800128d0 FUN_1800128d0
// CALLS 180004160 FUN_180004160
// CALLS EXTERNAL:0000005d HidD_GetAttributes

void UsbFinder_GetUsbDeviceAttribute(undefined8 *param_1,undefined8 param_2)

{
  LPCWSTR pWVar1;
  HANDLE hObject;
  undefined8 local_28 [4];
  
                    /* 0xd710  149  UsbFinder_GetUsbDeviceAttribute */
  pWVar1 = (LPCWSTR)FUN_180004160(local_28,param_1);
  hObject = FUN_1800128d0(pWVar1);
  HidD_GetAttributes(hObject,param_2);
  CloseHandle(hObject);
  return;
}



// FUNCTION 18000d760 CS_UsbFinder_GetUsbDeviceAttribute
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180016f40 FUN_180016f40
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS 1800187f0 free
// CALLS 180004ec0 FUN_180004ec0
// CALLS 1800128d0 FUN_1800128d0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy
// CALLS EXTERNAL:0000005d HidD_GetAttributes
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CS_UsbFinder_GetUsbDeviceAttribute(LPCSTR param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  HANDLE hObject;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0xd760  36  CS_UsbFinder_GetUsbDeviceAttribute
                       0xd760  124  UsbFinderC_GetUsbDeviceAttribute */
  local_38 = DAT_180023010 ^ (ulonglong)auStack_98;
  local_40 = 7;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (undefined8 ****)0x0;
  FUN_180016f40(param_1,(longlong *)&local_58);
  uVar3 = local_40;
  uVar2 = local_48;
  pppuVar1 = local_58;
  ppppuVar6 = &local_58;
  if (7 < local_40) {
    ppppuVar6 = (undefined8 ****)local_58;
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (local_48 < 0x7fffffffffffffff) {
    if (local_48 < 8) {
      local_68 = local_48;
      local_60 = 7;
      memmove(&local_78,ppppuVar6,0x10);
    }
    else {
      uVar4 = local_48 | 7;
      uVar5 = 0x7ffffffffffffffe;
      if ((uVar4 < 0x7fffffffffffffff) && (param_1 = (LPCSTR)0xa, uVar5 = uVar4, uVar4 < 10)) {
        uVar5 = 10;
      }
      local_78 = (void *)FUN_180004ec0(param_1,uVar5 + 1);
      local_68 = uVar2;
      local_60 = uVar5;
      memcpy(local_78,ppppuVar6,uVar2 * 2 + 2);
    }
    hObject = FUN_1800128d0((LPCWSTR)&local_78);
    HidD_GetAttributes(hObject,param_2);
    CloseHandle(hObject);
    if (7 < uVar3) {
      ppppuVar6 = (undefined8 ****)pppuVar1;
      if ((0xfff < uVar3 * 2 + 2) &&
         (ppppuVar6 = (undefined8 ****)pppuVar1[-1],
         0x1f < (ulonglong)((longlong)pppuVar1 + (-8 - (longlong)ppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001370();
}



// FUNCTION 18000d8e0 UsbFinder_Set4KDongleRGB
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char UsbFinder_Set4KDongleRGB(undefined8 *param_1,undefined1 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  int iStack_46;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  char local_38;
  undefined8 local_30;
  ulonglong local_18;
  
                    /* 0xd8e0  152  UsbFinder_Set4KDongleRGB */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_42 = *param_2;
  local_38 = 0;
  bVar1 = 10;
  if (DAT_18002851d != '\0') {
    bVar1 = 0x8a;
  }
  iStack_46 = (uint)bVar1 << 0x18;
  uStack_39 = param_2[9];
  local_48 = 0x1408;
  uStack_41 = (undefined1)*(undefined8 *)(param_2 + 1);
  uStack_40 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 1) >> 8);
  local_38 = FUN_18000f050((longlong)&local_48,0,0x10);
  uVar2 = UsbFinder_GetDeviceData(param_1,&local_48,&local_30);
  if ((char)uVar2 == '\0') {
    local_30._2_1_ = '\x03';
  }
  else if (local_30._2_1_ == '\0') {
    lVar3 = 0;
    do {
      pcVar4 = (char *)((longlong)&local_30 + lVar3 + 6);
      if (*pcVar4 != pcVar4[(longlong)param_2 - ((longlong)&local_30 + 6)]) {
        return '\x01';
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < 10);
    local_30._2_1_ = '\0';
  }
  return local_30._2_1_;
}



// FUNCTION 18000d9d0 CS_UsbFinder_Set4KDongleRGB
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000d8e0 UsbFinder_Set4KDongleRGB
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char CS_UsbFinder_Set4KDongleRGB(LPCSTR param_1,undefined1 *param_2)

{
  char cVar1;
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xd9d0  41  CS_UsbFinder_Set4KDongleRGB
                       0xd9d0  129  UsbFinderC_Set4KDongleRGB */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  cVar1 = UsbFinder_Set4KDongleRGB(&local_38,param_2);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return cVar1;
}



// FUNCTION 18000da80 UsbFinder_Get4KDongleRGBValue
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_Get4KDongleRGBValue(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [14];
  undefined2 local_3a;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xda80  140  UsbFinder_Get4KDongleRGBValue */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x1508;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001508;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,(undefined8 *)local_48);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    *param_2 = local_48._6_8_;
    *(undefined2 *)(param_2 + 1) = local_3a;
    uVar1 = (ulonglong)CONCAT11((char)((ushort)local_3a >> 8),local_48[5] != '\0');
  }
  return uVar1;
}



// FUNCTION 18000db30 CS_UsbFinder_Get4KDongleRGBValue
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_Get4KDongleRGBValue(LPCSTR param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [14];
  undefined2 local_5a;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xdb30  26  CS_UsbFinder_Get4KDongleRGBValue
                       0xdb30  115  UsbFinderC_Get4KDongleRGBValue */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0x1508;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001508;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,(undefined8 *)local_68);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    *param_2 = local_68._6_8_;
    *(undefined2 *)(param_2 + 1) = local_5a;
  }
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar2 && local_68[5] != '\0';
}



// FUNCTION 18000dc40 UsbFinder_ReadCidMid
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool UsbFinder_ReadCidMid(undefined8 *param_1,undefined1 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_18;
  
                    /* 0xdc40  151  UsbFinder_ReadCidMid */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_40 = 0;
  local_38 = 0;
  local_48 = 0x83000000f108;
  local_38 = FUN_18000f050((longlong)&local_48,0,0x10);
  uVar2 = UsbFinder_GetDeviceData(param_1,&local_48,&local_30);
  if ((char)uVar2 == '\0') {
    bVar3 = false;
  }
  else {
    *param_2 = local_30._6_1_;
    param_2[1] = local_30._7_1_;
    param_2[2] = local_30._5_1_ >> 7;
    cVar1 = FUN_18000f050((longlong)&local_30,6,7);
    bVar3 = cVar1 == local_28;
  }
  return bVar3;
}



// FUNCTION 18000dd00 CS_UsbFinder_ReadCidMid
// THUNK false
// CALLS 18000dc40 UsbFinder_ReadCidMid
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_ReadCidMid(LPCSTR param_1,undefined1 *param_2)

{
  bool bVar1;
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xdd00  39  CS_UsbFinder_ReadCidMid
                       0xdd00  127  UsbFinderC_ReadCidMid */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  bVar1 = UsbFinder_ReadCidMid(&local_38,param_2);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar1;
}



// FUNCTION 18000ddb0 UsbFinder_WriteCidMid
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool UsbFinder_WriteCidMid
               (undefined8 *param_1,undefined1 param_2,undefined1 param_3,byte param_4,
               undefined2 *param_5)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  undefined6 local_48;
  undefined2 uStack_42;
  ulonglong uStack_40;
  char local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_18;
  
                    /* 0xddb0  156  UsbFinder_WriteCidMid */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_38 = 0;
  _local_48 = CONCAT26(CONCAT11(param_3,param_2),0x83000000f008);
  uStack_40 = (ulonglong)param_4;
  local_38 = FUN_18000f050((longlong)&local_48,0,0x10);
  uVar2 = UsbFinder_GetDeviceData(param_1,&local_48,&local_30);
  if ((char)uVar2 == '\0') {
    *param_5 = 0;
    bVar3 = false;
    *(undefined1 *)(param_5 + 1) = 0;
  }
  else {
    *(undefined1 *)param_5 = local_30._6_1_;
    *(undefined1 *)((longlong)param_5 + 1) = local_30._7_1_;
    *(byte *)(param_5 + 1) = local_30._5_1_ >> 7;
    cVar1 = FUN_18000f050((longlong)&local_30,6,7);
    bVar3 = cVar1 == local_28;
  }
  return bVar3;
}



// FUNCTION 18000de80 CS_UsbFinder_WriteCidMid
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 18000ddb0 UsbFinder_WriteCidMid
// CALLS 1800187f0 free
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_WriteCidMid
               (LPCSTR param_1,undefined1 param_2,undefined1 param_3,byte param_4,
               undefined2 *param_5)

{
  bool bVar1;
  void *_Memory;
  undefined1 auStackY_88 [32];
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
                    /* 0xde80  45  CS_UsbFinder_WriteCidMid
                       0xde80  133  UsbFinderC_WriteCidMid */
  local_38 = DAT_180023010 ^ (ulonglong)auStackY_88;
  uStack_50 = 0;
  local_58 = (void *)0x0;
  local_48 = _DAT_18001c720;
  uStack_40 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_58);
  bVar1 = UsbFinder_WriteCidMid(&local_58,param_2,param_3,param_4,param_5);
  if (7 < uStack_40) {
    _Memory = local_58;
    if ((0xfff < uStack_40 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar1;
}



// FUNCTION 18000df50 UsbFinder_SetLongRangeMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_SetLongRangeMode(undefined8 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xdf50  155  UsbFinder_SetLongRangeMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  uStack_28 = 0;
  uVar1 = 10;
  if (DAT_18002851d != '\0') {
    uVar1 = 0x8a;
  }
  local_30._0_6_ = CONCAT15(uVar1,0x1608);
  local_30 = (ulonglong)CONCAT16(param_2,(undefined6)local_30);
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar2 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar2 != '\0') {
    return (ulonglong)(local_48._6_1_ == local_30._6_1_);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 18000e000 CS_UsbFinder_SetLongRangeMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_SetLongRangeMode(LPCSTR param_1,undefined1 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  void *_Memory;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xe000  44  CS_UsbFinder_SetLongRangeMode
                       0xe000  132  UsbFinderC_SetLongRangeMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  local_20 = 0;
  uStack_28 = 0;
  uVar1 = 10;
  if (DAT_18002851d != '\0') {
    uVar1 = 0x8a;
  }
  local_30 = (ulonglong)CONCAT16(param_2,CONCAT15(uVar1,0x1608));
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar2 = UsbFinder_GetDeviceData(&local_50,&local_30,&local_68);
  if ((char)uVar2 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = local_68._6_1_ == local_30._6_1_;
  }
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar3;
}



// FUNCTION 18000e110 UsbFinder_GetLongRangeMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_GetLongRangeMode(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xe110  147  UsbFinder_GetLongRangeMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x1708;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001708;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar1 == '\0') {
    *param_2 = 0;
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    *param_2 = local_48._6_1_;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 18000e1b0 CS_UsbFinder_GetLongRangeMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_GetLongRangeMode(LPCSTR param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xe1b0  34  CS_UsbFinder_GetLongRangeMode
                       0xe1b0  122  UsbFinderC_GetLongRangeMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0x1708;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001708;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,&local_68);
  bVar2 = (char)uVar1 == '\0';
  if (bVar2) {
    *param_2 = 0;
  }
  else {
    *param_2 = local_68._6_1_;
  }
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return !bVar2;
}



// FUNCTION 18000e2b0 UsbFinder_GetSlaveVersion
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_GetSlaveVersion(undefined8 *param_1,uint *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xe2b0  148  UsbFinder_GetSlaveVersion */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0xb308;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x80000000b308;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar1 == '\0') {
    *param_2 = 0;
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar1 = 1;
    *param_2 = (uint)CONCAT11(local_48._6_1_,local_48._7_1_);
  }
  return uVar1;
}



// FUNCTION 18000e360 CS_UsbFinder_GetSlaveVersion
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_GetSlaveVersion(LPCSTR param_1,uint *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xe360  35  CS_UsbFinder_GetSlaveVersion
                       0xe360  123  UsbFinderC_GetSlaveVersion */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uVar2 = 0;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0xb308;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x80000000b308;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,&local_68);
  bVar3 = (char)uVar1 != '\0';
  if (bVar3) {
    uVar2 = (uint)CONCAT11(local_68._6_1_,local_68._7_1_);
  }
  *param_2 = uVar2;
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar3;
}



// FUNCTION 18000e490 CS_UsbFinder_OpenDevice
// THUNK false
// CALLS 180001370 FUN_180001370
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 180012820 FUN_180012820
// CALLS 180004ec0 FUN_180004ec0
// CALLS 1800128d0 FUN_1800128d0
// CALLS 180019709 memmove
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CS_UsbFinder_OpenDevice(LPCSTR param_1)

{
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void **ppvVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0xe490  38  CS_UsbFinder_OpenDevice
                       0xe490  126  UsbFinderC_OpenDevice */
  local_38 = DAT_180023010 ^ (ulonglong)auStack_98;
  local_40 = 7;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (undefined8 ****)0x0;
  FUN_180016f40(param_1,(longlong *)&local_58);
  uVar3 = local_40;
  uVar2 = local_48;
  pppuVar1 = local_58;
  ppppuVar8 = &local_58;
  if (7 < local_40) {
    ppppuVar8 = (undefined8 ****)local_58;
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (local_48 < 0x7fffffffffffffff) {
    if (local_48 < 8) {
      local_68 = local_48;
      local_60 = 7;
      memmove(&local_78,ppppuVar8,0x10);
    }
    else {
      uVar7 = local_48 | 7;
      if (uVar7 < 0x7fffffffffffffff) {
        if (uVar7 < 10) {
          uVar7 = 10;
        }
      }
      else {
        uVar7 = 0x7ffffffffffffffe;
      }
      local_78 = (void *)FUN_180004ec0(param_1,uVar7 + 1);
      local_68 = uVar2;
      local_60 = uVar7;
      memcpy(local_78,ppppuVar8,uVar2 * 2 + 2);
    }
    ppvVar5 = &local_78;
    DAT_180028538 = FUN_180012820((LPCWSTR)ppvVar5);
    ppppuVar8 = &local_58;
    if (7 < uVar3) {
      ppppuVar8 = (undefined8 ****)pppuVar1;
    }
    local_78 = (void *)0x0;
    uStack_70 = 0;
    if (uVar2 < 8) {
      local_68 = uVar2;
      local_60 = 7;
      memmove(&local_78,ppppuVar8,0x10);
    }
    else {
      uVar4 = uVar2 | 7;
      uVar7 = 0x7ffffffffffffffe;
      if ((uVar4 < 0x7fffffffffffffff) && (uVar7 = uVar4, uVar4 < 10)) {
        uVar7 = 10;
      }
      local_78 = (void *)FUN_180004ec0(ppvVar5,uVar7 + 1);
      local_68 = uVar2;
      local_60 = uVar7;
      memcpy(local_78,ppppuVar8,uVar2 * 2 + 2);
    }
    DAT_180028540 = FUN_1800128d0((LPCWSTR)&local_78);
    if (((longlong)DAT_180028540 - 1U < 0xfffffffffffffffe) &&
       ((longlong)DAT_180028538 - 1U < 0xfffffffffffffffe)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    if (7 < uVar3) {
      ppppuVar8 = (undefined8 ****)pppuVar1;
      if ((0xfff < uVar3 * 2 + 2) &&
         (ppppuVar8 = (undefined8 ****)pppuVar1[-1],
         0x1f < (ulonglong)((longlong)pppuVar1 + (-8 - (longlong)ppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar8);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001370();
}



// FUNCTION 18000e6b0 FUN_18000e6b0
// THUNK false
// CALLS 1800195a8 memset
// CALLS EXTERNAL:0000000d ReadFile
// CALLS EXTERNAL:0000000c WriteFile
// CALLS EXTERNAL:0000000e CreateEventW
// CALLS EXTERNAL:00000009 WaitForSingleObject
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000e6b0(LPCVOID param_1,void *param_2,byte param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStackY_1a8 [32];
  _OVERLAPPED local_178;
  DWORD local_158;
  DWORD local_154 [3];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_180023010 ^ (ulonglong)auStackY_1a8;
  iVar4 = 0;
  local_158 = 0;
  memset(param_2,0,(ulonglong)param_3);
  local_178.Internal = 0;
  local_178.InternalHigh = 0;
  local_178.u.Pointer = (PVOID)0x0;
  local_178.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  BVar1 = ReadFile(DAT_180028540,local_148,(uint)param_3,local_154,&local_178);
  if (local_178.hEvent == (HANDLE)0x0) {
    uVar3 = CONCAT44(extraout_var,BVar1) & 0xffffffffffffff00;
  }
  else {
    uVar3 = 0;
    do {
      BVar1 = WriteFile(DAT_180028538,param_1,(uint)param_3,&local_158,(LPOVERLAPPED)0x0);
      if ((BVar1 == 1) && (DVar2 = WaitForSingleObject(local_178.hEvent,200), DVar2 == 0)) {
        memcpy(param_2,local_148,(ulonglong)param_3);
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  return uVar3;
}



// FUNCTION 18000e7e0 CS_UsbFinder_ReadWriteDeviceData
// THUNK false
// CALLS EXTERNAL:00000028 Ordinal_26
// CALLS 18000e6b0 FUN_18000e6b0
// CALLS EXTERNAL:0000002a Ordinal_15
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CS_UsbFinder_ReadWriteDeviceData(LPCVOID param_1,byte param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  int local_128 [2];
  ulonglong local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
                    /* 0xe7e0  40  CS_UsbFinder_ReadWriteDeviceData */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_148;
  uVar1 = FUN_18000e6b0(param_1,local_118,param_2);
  if ((char)uVar1 == '\0') {
    local_120 = 0;
    uVar2 = Ordinal_15(0x11,1,&local_120);
  }
  else {
    local_120 = (ulonglong)(uint)param_2;
    uVar2 = Ordinal_15();
    local_128[0] = 0;
    if (param_2 != 0) {
      do {
        Ordinal_26(uVar2,local_128,local_118 + local_128[0]);
        local_128[0] = local_128[0] + 1;
      } while (local_128[0] < (int)(uint)param_2);
    }
  }
  return uVar2;
}



// FUNCTION 18000e8c0 UsbFinderC_ReadWriteDeviceData
// THUNK true

// FUNCTION 18000e8d0 CS_UsbFinder_CloseDevice
// THUNK false
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS EXTERNAL:00000001 CancelIo

void CS_UsbFinder_CloseDevice(void)

{
                    /* 0xe8d0  20  CS_UsbFinder_CloseDevice
                       0xe8d0  108  UsbFinderC_CloseDevice */
  CancelIo(DAT_180028540);
  CancelIo(DAT_180028538);
  if ((longlong)DAT_180028540 - 1U < 0xfffffffffffffffe) {
    CloseHandle(DAT_180028540);
  }
  if ((longlong)DAT_180028538 - 1U < 0xfffffffffffffffe) {
    CloseHandle(DAT_180028538);
  }
  DAT_180028538 = (HANDLE)0x0;
  DAT_180028540 = (HANDLE)0x0;
  return;
}



// FUNCTION 18000e940 CS_UsbFinder_WriteDeviceData
// THUNK false
// CALLS EXTERNAL:0000000c WriteFile
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CS_UsbFinder_WriteDeviceData(LPCVOID param_1,byte param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined1 auStackY_48 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
                    /* 0xe940  46  CS_UsbFinder_WriteDeviceData
                       0xe940  134  UsbFinderC_WriteDeviceData
                       0xe940  157  UsbFinder_WriteDeviceData */
  local_10 = DAT_180023010 ^ (ulonglong)auStackY_48;
  local_18[0] = 0;
  BVar1 = WriteFile(DAT_180028538,param_1,(uint)param_2,local_18,(LPOVERLAPPED)0x0);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}



// FUNCTION 18000e990 UsbFinder_SetDongleRGBBarMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_SetDongleRGBBarMode(undefined8 *param_1,undefined1 *param_2)

{
  undefined7 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_30 [5];
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  ulonglong uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xe990  154  UsbFinder_SetDongleRGBBarMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  uVar2 = 10;
  _local_30 = 0x1808;
  uStack_28 = (ulonglong)*(uint *)(param_2 + 2);
  uVar1 = _local_30;
  if (param_2[6] != '\0') {
    _local_30 = CONCAT16(*param_2,0x1808);
    uVar1 = _local_30;
  }
  _local_30 = CONCAT17(param_2[1],uVar1);
  if (DAT_18002851d != '\0') {
    uVar2 = 0x8a;
  }
  _local_30 = CONCAT15(uVar2,SUB75(uVar1,0));
  local_20 = FUN_18000f050((longlong)local_30,0,0x10);
  uVar3 = UsbFinder_GetDeviceData(param_1,local_30,&local_48);
  if ((char)uVar3 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = (ulonglong)(local_48._1_1_ == local_30[1]);
  }
  return uVar3;
}



// FUNCTION 18000ea70 CS_UsbFinder_SetDongleRGBBarMode
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 1800187d0 __security_check_cookie
// CALLS 18000e990 UsbFinder_SetDongleRGBBarMode
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong CS_UsbFinder_SetDongleRGBBarMode(LPCSTR param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xea70  43  CS_UsbFinder_SetDongleRGBBarMode
                       0xea70  131  UsbFinderC_SetDongleRGBBarMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  uVar1 = UsbFinder_SetDongleRGBBarMode(&local_38,param_2);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return uVar1 & 0xff;
}



// FUNCTION 18000eb20 UsbFinder_GetDongleRGBBarMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong UsbFinder_GetDongleRGBBarMode(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [10];
  undefined2 local_3e;
  undefined1 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xeb20  146  UsbFinder_GetDongleRGBBarMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  local_30 = 0x1908;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001908;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(param_1,&local_30,(undefined8 *)local_48);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    *param_2 = local_48._6_4_;
    *(undefined2 *)(param_2 + 1) = local_3e;
    *(undefined1 *)((longlong)param_2 + 6) = local_3c;
    uVar1 = (ulonglong)(local_48[5] != '\0');
  }
  return uVar1;
}



// FUNCTION 18000ebd0 CS_UsbFinder_GetDongleRGBBarMode
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_GetDongleRGBBarMode(LPCSTR param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  void *_Memory;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [10];
  undefined2 local_5e;
  undefined1 local_5c;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulonglong local_18;
  
                    /* 0xebd0  33  CS_UsbFinder_GetDongleRGBBarMode
                       0xebd0  121  UsbFinderC_GetDongleRGBBarMode */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_88;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = _DAT_18001c720;
  uStack_38 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_50);
  uStack_28 = 0;
  local_30 = 0x1908;
  local_20 = 0;
  if (DAT_18002851d != '\0') {
    local_30 = 0x800000001908;
  }
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar1 = UsbFinder_GetDeviceData(&local_50,&local_30,(undefined8 *)local_68);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    *param_2 = local_68._6_4_;
    *(undefined2 *)(param_2 + 1) = local_5e;
    *(undefined1 *)((longlong)param_2 + 6) = local_5c;
  }
  if (7 < uStack_38) {
    _Memory = local_50;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar2 && local_68[5] != '\0';
}



// FUNCTION 18000ecf0 UsbFinder_SetDongleIDToMouse
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS 18000c960 UsbFinder_GetDeviceData
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool UsbFinder_SetDongleIDToMouse(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 local_30;
  int iStack_2e;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  undefined2 uStack_22;
  char local_20;
  ulonglong local_18;
  
                    /* 0xecf0  153  UsbFinder_SetDongleIDToMouse */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_30 = 0x1a08;
  bVar1 = 10;
  if (DAT_18002851d != '\0') {
    bVar1 = 0x8a;
  }
  uStack_2a = (undefined2)*param_2;
  uStack_28 = (undefined6)((ulonglong)*param_2 >> 0x10);
  iStack_2e = (uint)bVar1 << 0x18;
  uStack_22 = *(undefined2 *)(param_2 + 1);
  local_20 = FUN_18000f050((longlong)&local_30,0,0x10);
  uVar2 = UsbFinder_GetDeviceData(param_1,&local_30,&local_48);
  if ((char)uVar2 != '\0') {
    return local_48._5_1_ != '\0';
  }
  return false;
}



// FUNCTION 18000edb0 CS_UsbFinder_SetDongleIDToMouse
// THUNK false
// CALLS 18000ecf0 UsbFinder_SetDongleIDToMouse
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CS_UsbFinder_SetDongleIDToMouse(LPCSTR param_1,undefined8 *param_2)

{
  bool bVar1;
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0xedb0  42  CS_UsbFinder_SetDongleIDToMouse
                       0xedb0  130  UsbFinderC_SetDongleIDToMouse */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  bVar1 = UsbFinder_SetDongleIDToMouse(&local_38,param_2);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return bVar1;
}



// FUNCTION 18000ee60 FUN_18000ee60
// THUNK false
// CALLS 1800012d0 FUN_1800012d0
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180018824 FUN_180018824
// CALLS 1800055f0 FUN_1800055f0
// CALLS 180004160 FUN_180004160
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18000ee60(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  longlong *plStack_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = param_2[1] - *param_2 >> 5;
  if (uVar4 != 0) {
    if (0x7ffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1800055f0();
    }
    uVar5 = uVar4 * 0x20;
    if (uVar5 < 0x1000) {
      if (uVar5 != 0) {
        plVar3 = (longlong *)FUN_180018824(uVar5);
      }
    }
    else {
      if (uVar5 + 0x27 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800012d0();
      }
      lVar2 = FUN_180018824(uVar5 + 0x27);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      plVar3 = (longlong *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      plVar3[-1] = lVar2;
    }
    *param_1 = plVar3;
    param_1[1] = plVar3;
    param_1[2] = plVar3 + uVar4 * 4;
    puVar1 = (undefined8 *)param_2[1];
    local_48 = param_1;
    local_30 = param_1;
    local_40 = plVar3;
    for (puVar6 = (undefined8 *)*param_2; plStack_38 = plVar3, puVar6 != puVar1; puVar6 = puVar6 + 4
        ) {
      FUN_180004160(plVar3,puVar6);
      plVar3 = plVar3 + 4;
    }
    FUN_1800049d0(plVar3,plVar3);
    param_1[1] = plVar3;
  }
  return param_1;
}



// FUNCTION 18000efa0 FUN_18000efa0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

longlong * FUN_18000efa0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}



// FUNCTION 18000f050 FUN_18000f050
// THUNK false

char FUN_18000f050(longlong param_1,uint param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  uint uVar18;
  char *pcVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 in_XMM1_Ba;
  char cVar22;
  undefined1 in_XMM1_Bb;
  char cVar23;
  undefined1 in_XMM1_Bc;
  char cVar24;
  undefined1 in_XMM1_Bd;
  char cVar25;
  undefined1 in_XMM1_Be;
  char cVar26;
  undefined1 in_XMM1_Bf;
  char cVar27;
  undefined1 in_XMM1_Bg;
  char cVar28;
  undefined1 in_XMM1_Bh;
  char cVar29;
  undefined1 in_XMM1_Bi;
  char cVar30;
  undefined1 in_XMM1_Bj;
  char cVar31;
  undefined1 in_XMM1_Bk;
  char cVar32;
  undefined1 in_XMM1_Bl;
  char cVar33;
  undefined1 in_XMM1_Bm;
  char cVar34;
  undefined1 in_XMM1_Bn;
  char cVar35;
  undefined1 in_XMM1_Bo;
  char cVar36;
  undefined1 in_XMM1_Bp;
  char cVar37;
  char cVar38;
  char cVar40;
  char cVar41;
  undefined4 uVar39;
  char cVar42;
  char cVar43;
  char cVar45;
  char cVar46;
  undefined4 uVar44;
  char cVar47;
  char cVar48;
  char cVar50;
  char cVar51;
  undefined4 uVar49;
  char cVar52;
  char cVar53;
  char cVar55;
  char cVar56;
  undefined4 uVar54;
  char cVar57;
  
  lVar20 = (longlong)param_3;
  uVar21 = (ulonglong)(int)param_2;
  cVar22 = '\0';
  if (((int)param_2 < param_3) && (0x1f < param_3 - param_2)) {
    uVar39 = 0;
    uVar44 = 0;
    uVar49 = 0;
    uVar54 = 0;
    uVar18 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
             CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
    cVar22 = (char)uVar18;
    cVar23 = (char)(uVar18 >> 8);
    cVar24 = (char)(uVar18 >> 0x10);
    cVar25 = (char)(uVar18 >> 0x18);
    uVar18 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
             CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
    cVar26 = (char)uVar18;
    cVar27 = (char)(uVar18 >> 8);
    cVar28 = (char)(uVar18 >> 0x10);
    cVar29 = (char)(uVar18 >> 0x18);
    uVar18 = CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ^
             CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)));
    cVar30 = (char)uVar18;
    cVar31 = (char)(uVar18 >> 8);
    cVar32 = (char)(uVar18 >> 0x10);
    cVar33 = (char)(uVar18 >> 0x18);
    uVar18 = CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ^
             CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)));
    cVar34 = (char)uVar18;
    cVar35 = (char)(uVar18 >> 8);
    cVar36 = (char)(uVar18 >> 0x10);
    cVar37 = (char)(uVar18 >> 0x18);
    uVar18 = param_3 - param_2 & 0x8000001f;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
    }
    pcVar19 = (char *)(uVar21 + param_1);
    do {
      param_2 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)param_2;
      cVar38 = (char)uVar39 + *pcVar19;
      cVar40 = (char)((uint)uVar39 >> 8) + pcVar19[1];
      cVar41 = (char)((uint)uVar39 >> 0x10) + pcVar19[2];
      cVar42 = (char)((uint)uVar39 >> 0x18) + pcVar19[3];
      uVar39 = CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar38)));
      cVar43 = (char)uVar44 + pcVar19[4];
      cVar45 = (char)((uint)uVar44 >> 8) + pcVar19[5];
      cVar46 = (char)((uint)uVar44 >> 0x10) + pcVar19[6];
      cVar47 = (char)((uint)uVar44 >> 0x18) + pcVar19[7];
      uVar44 = CONCAT13(cVar47,CONCAT12(cVar46,CONCAT11(cVar45,cVar43)));
      cVar48 = (char)uVar49 + pcVar19[8];
      cVar50 = (char)((uint)uVar49 >> 8) + pcVar19[9];
      cVar51 = (char)((uint)uVar49 >> 0x10) + pcVar19[10];
      cVar52 = (char)((uint)uVar49 >> 0x18) + pcVar19[0xb];
      uVar49 = CONCAT13(cVar52,CONCAT12(cVar51,CONCAT11(cVar50,cVar48)));
      cVar53 = (char)uVar54 + pcVar19[0xc];
      cVar55 = (char)((uint)uVar54 >> 8) + pcVar19[0xd];
      cVar56 = (char)((uint)uVar54 >> 0x10) + pcVar19[0xe];
      cVar57 = (char)((uint)uVar54 >> 0x18) + pcVar19[0xf];
      uVar54 = CONCAT13(cVar57,CONCAT12(cVar56,CONCAT11(cVar55,cVar53)));
      pcVar1 = pcVar19 + 0x10;
      pcVar2 = pcVar19 + 0x11;
      pcVar3 = pcVar19 + 0x12;
      pcVar4 = pcVar19 + 0x13;
      pcVar5 = pcVar19 + 0x14;
      pcVar6 = pcVar19 + 0x15;
      pcVar7 = pcVar19 + 0x16;
      pcVar8 = pcVar19 + 0x17;
      pcVar9 = pcVar19 + 0x18;
      pcVar10 = pcVar19 + 0x19;
      pcVar11 = pcVar19 + 0x1a;
      pcVar12 = pcVar19 + 0x1b;
      pcVar13 = pcVar19 + 0x1c;
      pcVar14 = pcVar19 + 0x1d;
      pcVar15 = pcVar19 + 0x1e;
      pcVar16 = pcVar19 + 0x1f;
      pcVar19 = pcVar19 + 0x20;
      cVar22 = cVar22 + *pcVar1;
      cVar23 = cVar23 + *pcVar2;
      cVar24 = cVar24 + *pcVar3;
      cVar25 = cVar25 + *pcVar4;
      cVar26 = cVar26 + *pcVar5;
      cVar27 = cVar27 + *pcVar6;
      cVar28 = cVar28 + *pcVar7;
      cVar29 = cVar29 + *pcVar8;
      cVar30 = cVar30 + *pcVar9;
      cVar31 = cVar31 + *pcVar10;
      cVar32 = cVar32 + *pcVar11;
      cVar33 = cVar33 + *pcVar12;
      cVar34 = cVar34 + *pcVar13;
      cVar35 = cVar35 + *pcVar14;
      cVar36 = cVar36 + *pcVar15;
      cVar37 = cVar37 + *pcVar16;
    } while ((longlong)pcVar19 - param_1 < (longlong)(int)(param_3 - uVar18));
    cVar22 = cVar22 + cVar38 + cVar30 + cVar48 + cVar26 + cVar43 + cVar34 + cVar53 +
             cVar24 + cVar41 + cVar32 + cVar51 + cVar28 + cVar46 + cVar36 + cVar56 +
             cVar23 + cVar40 + cVar31 + cVar50 + cVar27 + cVar45 + cVar35 + cVar55 +
             cVar25 + cVar42 + cVar33 + cVar52 + cVar29 + cVar47 + cVar37 + cVar57;
  }
  cVar24 = '\0';
  lVar17 = (longlong)(int)param_2;
  cVar23 = '\0';
  if (lVar20 <= lVar17) goto LAB_18000f141;
  if (lVar20 - lVar17 < 2) {
LAB_18000f137:
    cVar22 = cVar22 + *(char *)(lVar17 + param_1);
  }
  else {
    do {
      cVar24 = cVar24 + *(char *)(lVar17 + param_1);
      cVar23 = cVar23 + *(char *)(lVar17 + 1 + param_1);
      lVar17 = lVar17 + 2;
    } while (lVar17 < lVar20 + -1);
    if (lVar17 < lVar20) goto LAB_18000f137;
  }
  cVar22 = cVar22 + cVar23 + cVar24;
LAB_18000f141:
  return 'U' - cVar22;
}



// FUNCTION 18000f150 FUN_18000f150
// THUNK false
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:0000008d srand
// CALLS EXTERNAL:0000008c rand
// CALLS EXTERNAL:00000087 _time64

void FUN_18000f150(undefined8 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  __time64_t _Var4;
  bool bVar5;
  
  bVar5 = DAT_18002851d != '\0';
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 5) = 8;
  uVar1 = *(undefined1 *)((longlong)param_1 + 5);
  *(undefined2 *)param_1 = 0x108;
  if (bVar5) {
    uVar1 = 0x88;
  }
  *(undefined1 *)((longlong)param_1 + 5) = uVar1;
  _Var4 = _time64((__time64_t *)0x0);
  srand((uint)_Var4);
  iVar3 = rand();
  *(char *)((longlong)param_1 + 6) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)param_1 + 7) = (char)iVar3;
  iVar3 = rand();
  *(char *)(param_1 + 1) = (char)iVar3;
  iVar3 = rand();
  *(char *)((longlong)param_1 + 9) = (char)iVar3;
  cVar2 = FUN_18000f050((longlong)param_1,0,0x10);
  *(char *)(param_1 + 2) = cVar2;
  return;
}



// FUNCTION 18000f210 UsbServer_GetCurrentInputDevice
// THUNK false
// CALLS 1800066c0 FUN_1800066c0

void UsbServer_GetCurrentInputDevice(longlong *param_1)

{
  undefined8 *puVar1;
  
                    /* 0xf210  169  UsbServer_GetCurrentInputDevice */
  if ((undefined8 **)param_1 != &DAT_180023060) {
    puVar1 = &DAT_180023060;
    if (7 < DAT_180023078) {
      puVar1 = DAT_180023060;
    }
    FUN_1800066c0(param_1,puVar1,DAT_180023070);
    return;
  }
  return;
}



// FUNCTION 18000f240 UsbServer_GetCurrentOutputDevice
// THUNK false
// CALLS 1800066c0 FUN_1800066c0

void UsbServer_GetCurrentOutputDevice(longlong *param_1)

{
  undefined8 *puVar1;
  
                    /* 0xf240  170  UsbServer_GetCurrentOutputDevice */
  if ((undefined8 **)param_1 != &DAT_180023080) {
    puVar1 = &DAT_180023080;
    if (7 < DAT_180023098) {
      puVar1 = DAT_180023080;
    }
    FUN_1800066c0(param_1,puVar1,DAT_180023090);
    return;
  }
  return;
}



// FUNCTION 18000f270 CS_UsbServer_GetCurrentInputDevice
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180016d80 FUN_180016d80
// CALLS 1800187f0 free
// CALLS 1800053a0 FUN_1800053a0
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CS_UsbServer_GetCurrentInputDevice(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48 [3];
  longlong *local_30;
  longlong *plStack_28;
  longlong local_20;
  ulonglong local_18;
  
                    /* 0xf270  54  CS_UsbServer_GetCurrentInputDevice */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  FUN_1800053a0((longlong *)&local_30,(longlong *)0x0,&DAT_180023060);
  plVar1 = FUN_18000ee60(local_48,(longlong *)&local_30);
  uVar2 = FUN_180016d80(plVar1);
  if (local_30 != (longlong *)0x0) {
    FUN_1800049d0(local_30,plStack_28);
    plVar1 = local_30;
    if ((0xfff < (local_20 - (longlong)local_30 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_30[-1],
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)plVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000f330 CS_UsbServer_GetCurrentOutputDevice
// THUNK false
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180016d80 FUN_180016d80
// CALLS 1800187f0 free
// CALLS 1800053a0 FUN_1800053a0
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CS_UsbServer_GetCurrentOutputDevice(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48 [3];
  longlong *local_30;
  longlong *plStack_28;
  longlong local_20;
  ulonglong local_18;
  
                    /* 0xf330  55  CS_UsbServer_GetCurrentOutputDevice */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  FUN_1800053a0((longlong *)&local_30,(longlong *)0x0,&DAT_180023080);
  plVar1 = FUN_18000ee60(local_48,(longlong *)&local_30);
  uVar2 = FUN_180016d80(plVar1);
  if (local_30 != (longlong *)0x0) {
    FUN_1800049d0(local_30,plStack_28);
    plVar1 = local_30;
    if ((0xfff < (local_20 - (longlong)local_30 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_30[-1],
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)plVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 18000f3f0 FUN_18000f3f0
// THUNK false
// CALLS 180011ff0 UsbReaderWriterServer

undefined8 FUN_18000f3f0(void)

{
  UsbReaderWriterServer();
  DAT_18002851e = 0;
  return 0;
}



// FUNCTION 18000f410 UsbServer_Start
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800066c0 FUN_1800066c0
// CALLS EXTERNAL:00000003 CreateThread
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock

void UsbServer_Start(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  
                    /* 0xf410  200  UsbServer_Start */
  iVar2 = _Mtx_lock(&DAT_18002a550);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5b8 != DAT_18002a5c0) {
    DAT_18002a5c0 = DAT_18002a5b8;
  }
  if (DAT_18002a5a0 != DAT_18002a5a8) {
    DAT_18002a5a8 = DAT_18002a5a0;
  }
  DAT_180028548 = param_3;
  if (param_1 != &DAT_180023060) {
    puVar3 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    FUN_1800066c0(&DAT_180023060,puVar3,param_1[2]);
  }
  if (param_2 != &DAT_180023080) {
    puVar3 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_1800066c0(&DAT_180023080,puVar3,param_2[2]);
  }
  DAT_18002851f = 1;
  DAT_18002852c = 0;
  DAT_18002851d = 0;
  _Mtx_unlock(&DAT_18002a550);
  if (DAT_18002851e == '\0') {
    DAT_18002851e = '\x01';
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18000f3f0,(LPVOID)0x0,0,(LPDWORD)0x0);
  }
  return;
}



// FUNCTION 18000f530 CS_UsbServer_Start
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800066c0 FUN_1800066c0
// CALLS 180016f40 FUN_180016f40
// CALLS EXTERNAL:00000003 CreateThread
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CS_UsbServer_Start(LPCSTR param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStackY_88 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 ***local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
                    /* 0xf530  88  CS_UsbServer_Start */
  local_18 = DAT_180023010 ^ (ulonglong)auStackY_88;
  uStack_30 = 0;
  local_28 = 0;
  uStack_50 = 0;
  local_20 = 7;
  local_48 = 0;
  local_40 = 7;
  local_38 = (undefined8 ****)0x0;
  local_58 = (undefined8 ****)0x0;
  FUN_180016f40(param_1,(longlong *)&local_38);
  FUN_180016f40(param_1,(longlong *)&local_58);
  iVar2 = _Mtx_lock(&DAT_18002a550);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5b8 != DAT_18002a5c0) {
    DAT_18002a5c0 = DAT_18002a5b8;
  }
  if (DAT_18002a5a0 != DAT_18002a5a8) {
    DAT_18002a5a8 = DAT_18002a5a0;
  }
  ppppuVar3 = &local_38;
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
  }
  DAT_180028548 = param_3;
  FUN_1800066c0(&DAT_180023060,ppppuVar3,local_28);
  ppppuVar3 = &local_58;
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
  }
  FUN_1800066c0(&DAT_180023080,ppppuVar3,local_48);
  DAT_18002851f = 1;
  DAT_18002852c = 0;
  DAT_18002851d = 0;
  _Mtx_unlock();
  if (DAT_18002851e == '\0') {
    DAT_18002851e = '\x01';
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18000f3f0,(LPVOID)0x0,0,(LPDWORD)0x0);
  }
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
    if ((0xfff < local_40 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar3)))) goto LAB_18000f704;
    free(ppppuVar3);
  }
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
    if ((0xfff < local_20 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_38[-1],
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar3)))) {
LAB_18000f704:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar3);
  }
  return;
}



// FUNCTION 18000f740 UsbServerC_Start
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800066c0 FUN_1800066c0
// CALLS 180016f40 FUN_180016f40
// CALLS EXTERNAL:00000003 CreateThread
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServerC_Start(LPCSTR param_1,LPCSTR param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStackY_88 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 ***local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
                    /* 0xf740  161  UsbServerC_Start */
  local_18 = DAT_180023010 ^ (ulonglong)auStackY_88;
  uStack_30 = 0;
  local_28 = 0;
  uStack_50 = 0;
  local_20 = 7;
  local_48 = 0;
  local_40 = 7;
  local_38 = (undefined8 ****)0x0;
  local_58 = (undefined8 ****)0x0;
  FUN_180016f40(param_1,(longlong *)&local_38);
  FUN_180016f40(param_2,(longlong *)&local_58);
  iVar2 = _Mtx_lock(&DAT_18002a550);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5b8 != DAT_18002a5c0) {
    DAT_18002a5c0 = DAT_18002a5b8;
  }
  if (DAT_18002a5a0 != DAT_18002a5a8) {
    DAT_18002a5a8 = DAT_18002a5a0;
  }
  ppppuVar3 = &local_38;
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
  }
  DAT_180028548 = param_3;
  FUN_1800066c0(&DAT_180023060,ppppuVar3,local_28);
  ppppuVar3 = &local_58;
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
  }
  FUN_1800066c0(&DAT_180023080,ppppuVar3,local_48);
  DAT_18002851f = 1;
  DAT_18002852c = 0;
  DAT_18002851d = 0;
  _Mtx_unlock();
  if (DAT_18002851e == '\0') {
    DAT_18002851e = '\x01';
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18000f3f0,(LPVOID)0x0,0,(LPDWORD)0x0);
  }
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
    if ((0xfff < local_40 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar3)))) goto LAB_18000f914;
    free(ppppuVar3);
  }
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
    if ((0xfff < local_20 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_38[-1],
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar3)))) {
LAB_18000f914:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar3);
  }
  return;
}



// FUNCTION 18000f950 UsbServer_KeyboardStart
// THUNK false
// CALLS 18000f410 UsbServer_Start

void UsbServer_KeyboardStart(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* 0xf950  174  UsbServer_KeyboardStart */
  UsbServer_Start(param_1,param_2,param_3);
  DAT_18002851d = 1;
  return;
}



// FUNCTION 18000f970 CS_UsbServer_KeyboardStart
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800066c0 FUN_1800066c0
// CALLS 180016f40 FUN_180016f40
// CALLS EXTERNAL:00000003 CreateThread
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CS_UsbServer_KeyboardStart(LPCSTR param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStackY_88 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 ***local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
                    /* 0xf970  59  CS_UsbServer_KeyboardStart */
  local_18 = DAT_180023010 ^ (ulonglong)auStackY_88;
  uStack_30 = 0;
  local_28 = 0;
  uStack_50 = 0;
  local_20 = 7;
  local_48 = 0;
  local_40 = 7;
  local_38 = (undefined8 ****)0x0;
  local_58 = (undefined8 ****)0x0;
  FUN_180016f40(param_1,(longlong *)&local_38);
  FUN_180016f40(param_1,(longlong *)&local_58);
  iVar2 = _Mtx_lock(&DAT_18002a550);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5b8 != DAT_18002a5c0) {
    DAT_18002a5c0 = DAT_18002a5b8;
  }
  if (DAT_18002a5a0 != DAT_18002a5a8) {
    DAT_18002a5a8 = DAT_18002a5a0;
  }
  ppppuVar3 = &local_38;
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
  }
  DAT_180028548 = param_3;
  FUN_1800066c0(&DAT_180023060,ppppuVar3,local_28);
  ppppuVar3 = &local_58;
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
  }
  FUN_1800066c0(&DAT_180023080,ppppuVar3,local_48);
  DAT_18002851f = 1;
  DAT_18002852c = 0;
  DAT_18002851d = 0;
  _Mtx_unlock();
  if (DAT_18002851e == '\0') {
    DAT_18002851e = '\x01';
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18000f3f0,(LPVOID)0x0,0,(LPDWORD)0x0);
  }
  DAT_18002851d = 1;
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
    if ((0xfff < local_40 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar3)))) goto LAB_18000fb4b;
    free(ppppuVar3);
  }
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
    if ((0xfff < local_20 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_38[-1],
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar3)))) {
LAB_18000fb4b:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar3);
  }
  return;
}



// FUNCTION 18000fb80 UsbServerC_KeyboardStart
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800066c0 FUN_1800066c0
// CALLS 180016f40 FUN_180016f40
// CALLS EXTERNAL:00000003 CreateThread
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServerC_KeyboardStart(LPCSTR param_1,LPCSTR param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStackY_88 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 ***local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
                    /* 0xfb80  159  UsbServerC_KeyboardStart */
  local_18 = DAT_180023010 ^ (ulonglong)auStackY_88;
  uStack_30 = 0;
  local_28 = 0;
  uStack_50 = 0;
  local_20 = 7;
  local_48 = 0;
  local_40 = 7;
  local_38 = (undefined8 ****)0x0;
  local_58 = (undefined8 ****)0x0;
  FUN_180016f40(param_1,(longlong *)&local_38);
  FUN_180016f40(param_2,(longlong *)&local_58);
  iVar2 = _Mtx_lock(&DAT_18002a550);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5b8 != DAT_18002a5c0) {
    DAT_18002a5c0 = DAT_18002a5b8;
  }
  if (DAT_18002a5a0 != DAT_18002a5a8) {
    DAT_18002a5a8 = DAT_18002a5a0;
  }
  ppppuVar3 = &local_38;
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
  }
  DAT_180028548 = param_3;
  FUN_1800066c0(&DAT_180023060,ppppuVar3,local_28);
  ppppuVar3 = &local_58;
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
  }
  FUN_1800066c0(&DAT_180023080,ppppuVar3,local_48);
  DAT_18002851f = 1;
  DAT_18002852c = 0;
  DAT_18002851d = 0;
  _Mtx_unlock();
  if (DAT_18002851e == '\0') {
    DAT_18002851e = '\x01';
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18000f3f0,(LPVOID)0x0,0,(LPDWORD)0x0);
  }
  DAT_18002851d = 1;
  if (7 < local_40) {
    ppppuVar3 = (undefined8 ****)local_58;
    if ((0xfff < local_40 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar3)))) goto LAB_18000fd5b;
    free(ppppuVar3);
  }
  if (7 < local_20) {
    ppppuVar3 = (undefined8 ****)local_38;
    if ((0xfff < local_20 * 2 + 2) &&
       (ppppuVar3 = (undefined8 ****)local_38[-1],
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar3)))) {
LAB_18000fd5b:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar3);
  }
  return;
}



// FUNCTION 18000fd90 CS_UsbServer_Exit
// THUNK false

void CS_UsbServer_Exit(void)

{
                    /* 0xfd90  52  CS_UsbServer_Exit
                       0xfd90  167  UsbServer_Exit */
  DAT_18002852c = 1;
  return;
}



// FUNCTION 18000fda0 UsbServer_InitWriteCommand
// THUNK false

void UsbServer_InitWriteCommand(undefined8 *param_1)

{
                    /* 0xfda0  173  UsbServer_InitWriteCommand */
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)param_1 = 0x101;
  return;
}



// FUNCTION 18000fdc0 UsbServer_WriteCommand
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 180006d90 FUN_180006d90

void UsbServer_WriteCommand(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
                    /* 0xfdc0  201  UsbServer_WriteCommand */
  iVar7 = _Mtx_lock(&DAT_18002a550);
  puVar6 = DAT_18002a5a8;
  if (iVar7 != 0) {
    std::_Throw_C_error(iVar7);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_18002a5a8 != DAT_18002a5b0) {
    uVar3 = *(undefined4 *)((longlong)param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 1);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 2);
    *DAT_18002a5a8 = *(undefined4 *)param_1;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar6[4] = uVar1;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
                    /* WARNING: Could not recover jumptable at 0x00018000fe13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Mtx_unlock(&DAT_18002a550);
    return;
  }
  FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00018000fe35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 18000fe40 UsbServer_ReadFalshData
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadFalshData(int param_1,uint param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  undefined1 auStack_58 [32];
  bool local_38 [3];
  undefined2 uStack_35;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  byte bStack_30;
  undefined2 uStack_2f;
  undefined5 uStack_2d;
  undefined4 local_28;
  ulonglong local_20;
  
                    /* 0xfe40  183  UsbServer_ReadFalshData */
  local_20 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_35 = 0;
  uStack_33 = 0;
  uStack_32 = 0;
  uStack_31 = 0;
  bStack_30 = 0;
  uStack_2f = 0;
  uStack_2d = 0;
  local_38[0] = true;
  local_38[1] = true;
  local_28 = 0;
  local_38[2] = (bool)param_3;
  iVar4 = _Mtx_lock();
  if (iVar4 == 0) {
    if (0 < (int)param_2) {
      cVar5 = DAT_18002851d;
      do {
        uStack_2f = 0;
        uStack_2d = 0;
        local_28 = 0;
        uStack_35 = 0x808;
        uStack_33 = 0;
        uStack_32 = (undefined1)((uint)param_1 >> 8);
        uStack_31 = (undefined1)param_1;
        if (param_2 < 10) {
          bStack_30 = (byte)param_2;
          if (cVar5 != '\0') {
            bStack_30 = bStack_30 | 0x80;
          }
          cVar3 = FUN_18000f050((longlong)&uStack_35,0,0x10);
          param_2 = 0;
          local_38[0] = true;
        }
        else {
          bStack_30 = 10;
          if (cVar5 != '\0') {
            bStack_30 = 0x8a;
          }
          cVar3 = FUN_18000f050((longlong)&uStack_35,0,0x10);
          param_1 = param_1 + 10;
          local_38[0] = param_2 == 10;
          param_2 = param_2 - 10;
        }
        puVar2 = DAT_18002a5a8;
        local_28 = CONCAT13(cVar3,(undefined3)local_28);
        local_38[1] = true;
        if (DAT_18002a5a8 == DAT_18002a5b0) {
          FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)local_38);
          cVar5 = DAT_18002851d;
        }
        else {
          *DAT_18002a5a8 =
               CONCAT17(uStack_31,
                        CONCAT16(uStack_32,
                                 CONCAT15(uStack_33,
                                          CONCAT23(uStack_35,
                                                   CONCAT12(local_38[2],CONCAT11(1,local_38[0]))))))
          ;
          puVar2[1] = CONCAT53(uStack_2d,CONCAT21(uStack_2f,bStack_30));
          *(undefined4 *)(puVar2 + 2) = local_28;
          DAT_18002a5a8 = (undefined8 *)((longlong)DAT_18002a5a8 + 0x14);
        }
      } while (0 < (int)param_2);
    }
    _Mtx_unlock(&DAT_18002a550);
    return;
  }
  std::_Throw_C_error(iVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 18000ffa0 CS_UsbServer_ReadFalshData
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData

void CS_UsbServer_ReadFalshData(int param_1,uint param_2)

{
                    /* 0xffa0  69  CS_UsbServer_ReadFalshData */
  UsbServer_ReadFalshData(param_1,param_2,0);
  return;
}



// FUNCTION 18000ffb0 CS_UsbServer_ReadAllFlashData
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData

void CS_UsbServer_ReadAllFlashData(void)

{
                    /* 0xffb0  61  CS_UsbServer_ReadAllFlashData
                       0xffb0  175  UsbServer_ReadAllFlashData */
  UsbServer_ReadFalshData(0,0xc0,1);
  return;
}



// FUNCTION 18000ffc0 UsbServer_ReadEncryption
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f150 FUN_18000f150
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadEncryption(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_28 [4];
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0xffc0  182  UsbServer_ReadEncryption */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  _local_28 = 0x101;
  local_18 = 0;
  FUN_18000f150((undefined8 *)(local_28 + 3));
  uVar3 = local_18;
  local_38 = local_18;
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  iVar4 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = local_28;
    puVar2[1] = uStack_24;
    puVar2[2] = (undefined4)uStack_20;
    puVar2[3] = uStack_20._4_4_;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180010080 CS_UsbServer_ReadCidMid
// THUNK true

// FUNCTION 180010090 UsbServer_SetPCDriverStatus
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetPCDriverStatus(char param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  char cStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x10090  198  UsbServer_SetPCDriverStatus */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 1;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x81;
  }
  local_28 = 0x101;
  uStack_1e = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_25 = 8;
  uStack_24 = 2;
  cStack_1f = param_1;
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(cStack_1f,uStack_20)));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(cStack_1f,uStack_20)));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  DAT_180023161 = param_1;
  if (param_1 == '\0') {
    DAT_180023108 = 0;
    DAT_180023120 = 0;
  }
  else {
    DAT_180023108 = 1;
    DAT_180023110 = GetTickCount64();
    DAT_180023118 = 0;
  }
  return;
}



// FUNCTION 1800101c0 CS_UsbServer_SetPCDriverStatus
// THUNK true

// FUNCTION 1800101d0 UsbServer_ReadOnLine
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadOnLine(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x101d0  185  UsbServer_ReadOnLine */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 3;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800102b0 CS_UsbServer_ReadOnLine
// THUNK true

// FUNCTION 1800102c0 UsbServer_ReadBatteryLevel
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadBatteryLevel(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x102c0  176  UsbServer_ReadBatteryLevel */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 4;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800103a0 CS_UsbServer_ReadBatteryLevel
// THUNK true

// FUNCTION 1800103b0 CS_UsbServer_EnterDonglePair
// THUNK false
// CALLS 1800103c0 UsbServer_EnterDonglePairWithCidMid

void CS_UsbServer_EnterDonglePair(void)

{
                    /* 0x103b0  47  CS_UsbServer_EnterDonglePair
                       0x103b0  162  UsbServer_EnterDonglePair */
  UsbServer_EnterDonglePairWithCidMid(0,0);
  return;
}



// FUNCTION 1800103c0 UsbServer_EnterDonglePairWithCidMid
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_EnterDonglePairWithCidMid(undefined1 param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x103c0  164  UsbServer_EnterDonglePairWithCidMid */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_20 = 2;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x82;
  }
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 5;
  uStack_1f = param_1;
  uStack_1e = param_2;
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800104c0 CS_UsbServer_EnterDonglePairWithCidMid
// THUNK true

// FUNCTION 1800104d0 UsbServer_EnterDonglePairOnlyCid
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_EnterDonglePairOnlyCid(undefined1 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x104d0  163  UsbServer_EnterDonglePairOnlyCid */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x82;
  }
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 5;
  uStack_1f = 0;
  uStack_1d = param_1;
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800105d0 CS_UsbServer_EnterDonglePairOnlyCid
// THUNK true

// FUNCTION 1800105e0 UsbServer_ReadDonglePairStatus
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadDonglePairStatus(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined2 uStack_22;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x105e0  181  UsbServer_ReadDonglePairStatus */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 6;
  uStack_23 = 0;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_44 = CONCAT22(uStack_22,CONCAT11(uStack_23,uStack_24));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = CONCAT22(uStack_22,CONCAT11(uStack_23,uStack_24));
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800106d0 CS_UsbServer_ReadDonglePairStatus
// THUNK true

// FUNCTION 1800106e0 UsbServer_SetClearSetting
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetClearSetting(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x106e0  193  UsbServer_SetClearSetting */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 9;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800107c0 CS_UsbServer_SetClearSetting
// THUNK true

// FUNCTION 1800107d0 UsbServer_SetVidPid
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetVidPid(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  byte bStack_1f;
  undefined1 uStack_1e;
  byte bStack_1d;
  uint uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x107d0  199  UsbServer_SetVidPid */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_20 = 4;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x84;
  }
  uStack_26 = 0;
  local_28 = 0x101;
  local_18 = 0;
  bStack_1f = (byte)((uint)param_1 >> 8) & 0xf;
  uStack_1c = param_2 & 0xff;
  uStack_1e = (undefined1)param_1;
  bStack_1d = (byte)(param_2 >> 8) & 0xf;
  uStack_25 = 8;
  uStack_24 = 0xb;
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(bStack_1d,CONCAT12(uStack_1e,CONCAT11(bStack_1f,uStack_20)));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(bStack_1d,CONCAT12(uStack_1e,CONCAT11(bStack_1f,uStack_20)));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800108e0 CS_UsbServer_SetVidPid
// THUNK true

// FUNCTION 1800108f0 UsbServer_SetDeviceDescriptorString
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:0000008a free
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000005 WideCharToMultiByte
// CALLS 180019703 memcpy
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000089 malloc
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetDeviceDescriptorString(LPCWSTR param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint cbMultiByte;
  int iVar4;
  LPSTR lpMultiByteStr;
  ulonglong uVar5;
  ulonglong uVar6;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_98 [32];
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  byte bStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined2 uStack_47;
  char cStack_45;
  undefined8 local_40;
  undefined2 auStack_38 [12];
  ulonglong local_20;
  
                    /* 0x108f0  195  UsbServer_SetDeviceDescriptorString */
  local_20 = DAT_180023010 ^ (ulonglong)auStackY_98;
  lpWideCharStr = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    lpWideCharStr = *(LPCWSTR *)param_1;
  }
  cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lpMultiByteStr = malloc((longlong)(int)cbMultiByte);
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  WideCharToMultiByte(0,0,param_1,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  if (0x1e < (int)cbMultiByte) {
    cbMultiByte = 0x1e;
  }
  memcpy(&local_40,(void *)0x0,(longlong)(int)cbMultiByte);
  uVar5 = (ulonglong)cbMultiByte;
  if (0 < (int)cbMultiByte) {
    uVar6 = 0;
    do {
      iVar4 = _Mtx_lock(&DAT_18002a550);
      if (iVar4 != 0) {
        std::_Throw_C_error(iVar4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cStack_45 = 0;
      uStack_56 = 0;
      local_58 = 1;
      uStack_57 = 1;
      uStack_53 = 0;
      uStack_4f = 0;
      uStack_4d = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_47 = 0;
      uStack_55 = 8;
      uStack_54 = 0xc;
      uStack_52 = (undefined1)cbMultiByte;
      uStack_51 = (undefined1)uVar6;
      iVar4 = (int)uVar6;
      if ((uint)uVar5 < 0xb) {
        bStack_50 = (byte)uVar5;
        if (DAT_18002851d != '\0') {
          bStack_50 = bStack_50 | 0x80;
        }
        memcpy(&uStack_4f,(void *)((longlong)&local_40 + (longlong)iVar4),uVar5 & 0xff);
        cStack_45 = FUN_18000f050((longlong)&uStack_55,0,0x10);
        local_58 = 1;
        uVar5 = 0;
      }
      else {
        bStack_50 = 10;
        if (DAT_18002851d != '\0') {
          bStack_50 = 0x8a;
        }
        uVar1 = *(undefined8 *)((longlong)&local_40 + (longlong)iVar4);
        uStack_47 = *(undefined2 *)((longlong)auStack_38 + (longlong)iVar4);
        uStack_4f = (undefined2)uVar1;
        uStack_4d = (undefined1)((ulonglong)uVar1 >> 0x10);
        uStack_4c = (undefined4)((ulonglong)uVar1 >> 0x18);
        uStack_48 = (undefined1)((ulonglong)uVar1 >> 0x38);
        cStack_45 = FUN_18000f050((longlong)&uStack_55,0,0x10);
        local_58 = 0;
        uVar6 = (ulonglong)(iVar4 + 10);
        uVar5 = (ulonglong)((uint)uVar5 - 10);
      }
      puVar3 = DAT_18002a5a8;
      if (DAT_18002a5a8 == DAT_18002a5b0) {
        FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_58);
      }
      else {
        *DAT_18002a5a8 = CONCAT13(uStack_55,CONCAT12(uStack_56,CONCAT11(uStack_57,local_58)));
        puVar3[1] = CONCAT13(uStack_51,CONCAT12(uStack_52,CONCAT11(uStack_53,uStack_54)));
        puVar3[2] = CONCAT13(uStack_4d,CONCAT21(uStack_4f,bStack_50));
        puVar3[3] = uStack_4c;
        puVar3[4] = CONCAT13(cStack_45,CONCAT21(uStack_47,uStack_48));
        DAT_18002a5a8 = DAT_18002a5a8 + 5;
      }
      _Mtx_unlock(&DAT_18002a550);
    } while (0 < (int)uVar5);
  }
  free((void *)0x0);
  return;
}



// FUNCTION 180010b20 CS_UsbServer_SetDeviceDescriptorString
// THUNK false
// CALLS 180016f40 FUN_180016f40
// CALLS 1800187f0 free
// CALLS 1800108f0 UsbServer_SetDeviceDescriptorString
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CS_UsbServer_SetDeviceDescriptorString(LPCSTR param_1)

{
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
                    /* 0x10b20  81  CS_UsbServer_SetDeviceDescriptorString
                       0x10b20  160  UsbServerC_SetDeviceDescriptorString */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_38 = (void *)0x0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  FUN_180016f40(param_1,(longlong *)&local_38);
  UsbServer_SetDeviceDescriptorString((LPCWSTR)&local_38);
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return;
}



// FUNCTION 180010bc0 UsbServer_EnterUsbUpdateMode
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_EnterUsbUpdateMode(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x10bc0  166  UsbServer_EnterUsbUpdateMode */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0xd;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180010ca0 CS_UsbServer_EnterUsbUpdateMode
// THUNK true

// FUNCTION 180010cb0 UsbServer_ReadConfig
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadConfig(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x10cb0  178  UsbServer_ReadConfig */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0xe;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180010d90 CS_UsbServer_ReadConfig
// THUNK true

// FUNCTION 180010da0 UsbServer_SetCurrentConfig
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetCurrentConfig(undefined1 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x10da0  194  UsbServer_SetCurrentConfig */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 1;
  uStack_1e = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x81;
  }
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 0xf;
  uStack_1f = param_1;
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180010e90 CS_UsbServer_SetCurrentConfig
// THUNK true

// FUNCTION 180010ea0 UsbServer_EnterMTKMode
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_EnterMTKMode(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x10ea0  165  UsbServer_EnterMTKMode */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0x11;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180010f80 CS_UsbServer_EnterMTKMode
// THUNK true

// FUNCTION 180010f90 UsbServer_ReadVersion
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_ReadVersion(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x10f90  187  UsbServer_ReadVersion */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0x12;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011070 CS_UsbServer_ReadVersion
// THUNK true

// FUNCTION 180011080 CS_UsbServer_ReadCurrentDPI
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData

void CS_UsbServer_ReadCurrentDPI(void)

{
                    /* 0x11080  65  CS_UsbServer_ReadCurrentDPI
                       0x11080  179  UsbServer_ReadCurrentDPI */
  UsbServer_ReadFalshData(4,1,0);
  return;
}



// FUNCTION 180011090 CS_UsbServer_ReadReportRate
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData

void CS_UsbServer_ReadReportRate(void)

{
                    /* 0x11090  72  CS_UsbServer_ReadReportRate
                       0x11090  186  UsbServer_ReadReportRate */
  UsbServer_ReadFalshData(0,1,0);
  return;
}



// FUNCTION 1800110a0 CS_UsbServer_ReadDPILed
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData

void CS_UsbServer_ReadDPILed(void)

{
                    /* 0x110a0  66  CS_UsbServer_ReadDPILed
                       0x110a0  180  UsbServer_ReadDPILed */
  UsbServer_ReadFalshData(0x4c,8,0);
  return;
}



// FUNCTION 1800110b0 CS_UsbServer_ReadLedBar
// THUNK false
// CALLS 18000fe40 UsbServer_ReadFalshData

void CS_UsbServer_ReadLedBar(void)

{
                    /* 0x110b0  70  CS_UsbServer_ReadLedBar
                       0x110b0  184  UsbServer_ReadLedBar */
  UsbServer_ReadFalshData(0xa0,9,0);
  return;
}



// FUNCTION 1800110d0 UsbServer_Set4KDongleRGB
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_Set4KDongleRGB(undefined1 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  char cStack_15;
  ulonglong local_10;
  
                    /* 0x110d0  188  UsbServer_Set4KDongleRGB */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_1f = *param_1;
  cStack_15 = 0;
  uStack_26 = 0;
  uStack_20 = 10;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x8a;
  }
  uVar1 = *(undefined8 *)(param_1 + 1);
  uStack_16 = param_1[9];
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 0x14;
  uStack_1e = (undefined1)uVar1;
  uStack_1d = (undefined1)((ulonglong)uVar1 >> 8);
  uStack_1c = (undefined4)((ulonglong)uVar1 >> 0x10);
  uStack_18 = (undefined2)((ulonglong)uVar1 >> 0x30);
  cStack_15 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
  uVar3 = CONCAT13(cStack_15,CONCAT12(uStack_16,uStack_18));
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = uVar3;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar4 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar4[1] = uStack_24;
    puVar4[2] = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
    puVar4[3] = uStack_1c;
    puVar4[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800111e0 CS_UsbServer_Set4KDongleRGB
// THUNK true

// FUNCTION 1800111f0 UsbServer_Get4KDongleRGBValue
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_Get4KDongleRGBValue(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x111f0  168  UsbServer_Get4KDongleRGBValue */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0x15;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 1800112d0 CS_UsbServer_Get4KDongleRGBValue
// THUNK true

// FUNCTION 1800112e0 CS_UsbServer_SetBatteryOptimizeEnable
// THUNK false

void CS_UsbServer_SetBatteryOptimizeEnable(undefined1 param_1)

{
                    /* 0x112e0  75  CS_UsbServer_SetBatteryOptimizeEnable
                       0x112e0  189  UsbServer_SetBatteryOptimizeEnable */
  DAT_1800230a1 = param_1;
  return;
}



// FUNCTION 1800112f0 CS_UsbServer_ReStartBatteryOptimize
// THUNK false

void CS_UsbServer_ReStartBatteryOptimize(void)

{
                    /* 0x112f0  60  CS_UsbServer_ReStartBatteryOptimize */
  DAT_180023162 = 0;
  return;
}



// FUNCTION 180011300 CS_UsbServer_SetBatteryOptimizeLastBattery
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CS_UsbServer_SetBatteryOptimizeLastBattery(int param_1,undefined1 param_2)

{
                    /* 0x11300  76  CS_UsbServer_SetBatteryOptimizeLastBattery
                       0x11300  190  UsbServer_SetBatteryOptimizeLastBattery */
  _DAT_180023168 = (longlong)param_1;
  DAT_180023174 = param_2;
  DAT_180023101 = 1;
  return;
}



// FUNCTION 180011320 UsbServer_SetBatteryOptimizeParam
// THUNK false

void UsbServer_SetBatteryOptimizeParam(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x11320  191  UsbServer_SetBatteryOptimizeParam */
  DAT_1800230a2 = param_1;
  DAT_1800230a4 = param_2;
  DAT_1800230a8 = param_3;
  return;
}



// FUNCTION 180011340 CS_UsbServer_SetBatteryOptimizeParam
// THUNK false

void CS_UsbServer_SetBatteryOptimizeParam(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x11340  77  CS_UsbServer_SetBatteryOptimizeParam */
  DAT_1800230a4 = param_2;
  DAT_1800230a8 = param_3;
  DAT_1800230a2 = param_1 != 0;
  return;
}



// FUNCTION 180011360 UsbServer_SetBatteryOptimizeSection
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UsbServer_SetBatteryOptimizeSection(undefined4 *param_1)

{
                    /* 0x11360  192  UsbServer_SetBatteryOptimizeSection */
  _DAT_1800230ac = *param_1;
  _DAT_1800230b0 = param_1[1];
  _DAT_1800230b4 = param_1[2];
  _DAT_1800230b8 = param_1[3];
  _DAT_1800230bc = param_1[4];
  _DAT_1800230c0 = param_1[5];
  _DAT_1800230c4 = param_1[6];
  _DAT_1800230c8 = param_1[7];
  _DAT_1800230cc = param_1[8];
  _DAT_1800230d0 = param_1[9];
  _DAT_1800230d4 = param_1[10];
  _DAT_1800230d8 = param_1[0xb];
  _DAT_1800230dc = param_1[0xc];
  _DAT_1800230e0 = param_1[0xd];
  _DAT_1800230e4 = param_1[0xe];
  _DAT_1800230e8 = param_1[0xf];
  _DAT_1800230ec = param_1[0x10];
  _DAT_1800230f0 = param_1[0x11];
  _DAT_1800230f4 = param_1[0x12];
  _DAT_1800230f8 = param_1[0x13];
  _DAT_1800230fc = param_1[0x14];
  DAT_180023100 = 1;
  return;
}



// FUNCTION 180011430 CS_UsbServer_SetBatteryOptimizeSection
// THUNK true

// FUNCTION 180011440 UsbServer_SetLongRangeMode
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetLongRangeMode(undefined1 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x11440  197  UsbServer_SetLongRangeMode */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 10;
  uStack_1e = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x8a;
  }
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 0x16;
  uStack_1f = param_1;
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011530 CS_UsbServer_SetLongRangeMode
// THUNK true

// FUNCTION 180011540 UsbServer_GetLongRangeMode
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_GetLongRangeMode(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x11540  171  UsbServer_GetLongRangeMode */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0x17;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011620 CS_UsbServer_GetLongRangeMode
// THUNK true

// FUNCTION 180011630 UsbServer_GetSlaveVersion
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_GetSlaveVersion(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x11630  172  UsbServer_GetSlaveVersion */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0xb3;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011710 CS_UsbServer_GetSlaveVersion
// THUNK true

// FUNCTION 180011720 CS_UsbServer_SetDongleRGBBarMode
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CS_UsbServer_SetDongleRGBBarMode(undefined1 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined4 uStack_19;
  char cStack_15;
  ulonglong local_10;
  
                    /* 0x11720  83  CS_UsbServer_SetDongleRGBBarMode */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_1b = param_1[4];
  uStack_1a = param_1[5];
  uStack_1c = param_1[3];
  uStack_1d = param_1[2];
  uStack_1e = param_1[1];
  uStack_26 = 0;
  cStack_15 = 0;
  uStack_19 = 0;
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 0x18;
  if (param_1[6] == '\0') {
    uStack_1f = 0;
  }
  else {
    uStack_1f = *param_1;
  }
  uStack_20 = 10;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x8a;
  }
  cStack_15 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
  uStack_3c = CONCAT13((undefined1)uStack_19,CONCAT12(uStack_1a,CONCAT11(uStack_1b,uStack_1c)));
  uVar2 = CONCAT13(cStack_15,uStack_19._1_3_);
  uStack_44 = uStack_24;
  local_38 = uVar2;
  iVar4 = _Mtx_lock(&DAT_18002a550);
  puVar3 = DAT_18002a5a8;
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar3[1] = uStack_24;
    puVar3[2] = CONCAT13(uStack_1d,CONCAT12(uStack_1e,CONCAT11(uStack_1f,uStack_20)));
    puVar3[3] = CONCAT13((undefined1)uStack_19,CONCAT12(uStack_1a,CONCAT11(uStack_1b,uStack_1c)));
    puVar3[4] = uVar2;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011840 CS_UsbServer_GetDongleRGBBarMode
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CS_UsbServer_GetDongleRGBBarMode(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
                    /* 0x11840  56  CS_UsbServer_GetDongleRGBBarMode */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1d = 0;
  uStack_1c = 0;
  uStack_25 = 8;
  uStack_24 = 0x19;
  local_28 = 0x101;
  local_18 = 0;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x80;
  }
  cVar4 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  local_18 = CONCAT13(cVar4,(undefined3)local_18);
  uVar3 = local_18;
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar2 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar2[1] = uStack_24;
    puVar2[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar2[3] = uStack_1c;
    puVar2[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011920 UsbServer_SetDongleIDToMouse
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UsbServer_SetDongleIDToMouse(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined2 uStack_17;
  char cStack_15;
  ulonglong local_10;
  
                    /* 0x11920  196  UsbServer_SetDongleIDToMouse */
  local_10 = DAT_180023010 ^ (ulonglong)auStack_68;
  cStack_15 = 0;
  uStack_26 = 0;
  uStack_20 = 10;
  if (DAT_18002851d != '\0') {
    uStack_20 = 0x8a;
  }
  uVar1 = *param_1;
  uStack_17 = *(undefined2 *)(param_1 + 1);
  local_28 = 0x101;
  uStack_25 = 8;
  uStack_24 = 0x1a;
  uStack_1f = (undefined2)uVar1;
  uStack_1d = (undefined1)((ulonglong)uVar1 >> 0x10);
  uStack_1c = (undefined4)((ulonglong)uVar1 >> 0x18);
  uStack_18 = (undefined1)((ulonglong)uVar1 >> 0x38);
  cStack_15 = FUN_18000f050((longlong)&uStack_25,0,0x10);
  local_48 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
  uStack_40 = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
  uVar3 = CONCAT13(cStack_15,CONCAT21(uStack_17,uStack_18));
  uStack_44 = uStack_24;
  uStack_3c = uStack_1c;
  local_38 = uVar3;
  iVar5 = _Mtx_lock(&DAT_18002a550);
  puVar4 = DAT_18002a5a8;
  if (iVar5 != 0) {
    std::_Throw_C_error(iVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_18002a5a8 == DAT_18002a5b0) {
    FUN_180006d90(&DAT_18002a5a0,DAT_18002a5a8,(undefined8 *)&local_48);
  }
  else {
    *DAT_18002a5a8 = CONCAT13(uStack_25,CONCAT12(uStack_26,local_28));
    puVar4[1] = uStack_24;
    puVar4[2] = CONCAT13(uStack_1d,CONCAT21(uStack_1f,uStack_20));
    puVar4[3] = uStack_1c;
    puVar4[4] = uVar3;
    DAT_18002a5a8 = DAT_18002a5a8 + 5;
  }
  _Mtx_unlock(&DAT_18002a550);
  return;
}



// FUNCTION 180011a20 CS_UsbServer_SetDongleIDToMouse
// THUNK true

// FUNCTION 180011a30 FUN_180011a30
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 1800195a8 memset
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS 1800065a0 FUN_1800065a0
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 180006850 FUN_180006850
// CALLS 180006250 FUN_180006250
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS 180006d90 FUN_180006d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180011a30(undefined8 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  char cVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  ulonglong local_40;
  
  pcVar1 = DAT_180028548;
  uVar4 = _DAT_180023158;
  local_40 = DAT_180023010 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = *(undefined1 *)(param_1 + 2);
  uVar10 = 0;
  bVar3 = false;
  cVar14 = '\0';
  uVar11 = 0;
  if (*(char *)((longlong)param_1 + 1) != '\n') {
    iVar8 = _Mtx_lock(&DAT_18002a550);
    if (iVar8 != 0) {
      std::_Throw_C_error(iVar8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar12 = 0;
    if ((((DAT_18002a5a8 - (longlong)DAT_18002a5a0 >> 2) * -0x3333333333333333 != 0) &&
        (uVar12 = uVar11, *(char *)((longlong)DAT_18002a5a0 + 1) == '\0')) &&
       (*(char *)((longlong)DAT_18002a5a0 + 4) == *(char *)((longlong)param_1 + 1))) {
      uVar9 = uVar10;
      if (*(char *)((longlong)param_1 + 1) == '\a') {
        do {
          if (*(char *)((longlong)DAT_18002a5a0 + uVar9 + 3) != *(char *)(uVar9 + (longlong)param_1)
             ) {
            *(undefined1 *)((longlong)DAT_18002a5a0 + 1) = 1;
            _Mtx_unlock(&DAT_18002a550);
            return;
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < 0x11);
      }
      *param_2 = 0;
      puVar5 = DAT_18002a5a0;
      uStack_50 = *(undefined8 *)((longlong)DAT_18002a5a0 + 0xb);
      local_48 = *(undefined1 *)((longlong)DAT_18002a5a0 + 0x13);
      uVar2 = param_1[1];
      local_58._6_2_ = (undefined2)((ulonglong)*(undefined8 *)((longlong)DAT_18002a5a0 + 3) >> 0x30)
      ;
      local_58._0_6_ =
           CONCAT15(*(undefined1 *)((longlong)param_1 + 5),
                    (int5)*(undefined8 *)((longlong)DAT_18002a5a0 + 3));
      *(undefined8 *)((longlong)DAT_18002a5a0 + 3) = *param_1;
      *(undefined8 *)((longlong)puVar5 + 0xb) = uVar2;
      *(undefined1 *)((longlong)puVar5 + 0x13) = *(undefined1 *)(param_1 + 2);
      puVar6 = DAT_18002a5c0;
      puVar5 = DAT_18002a5a0;
      if (DAT_18002a5c0 == DAT_18002a5c8) {
        FUN_180006d90((longlong *)&DAT_18002a5b8,DAT_18002a5c0,DAT_18002a5a0);
      }
      else {
        uVar2 = DAT_18002a5a0[1];
        *DAT_18002a5c0 = *DAT_18002a5a0;
        puVar6[1] = uVar2;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
        DAT_18002a5c0 = (undefined8 *)((longlong)DAT_18002a5c0 + 0x14);
      }
      memmove(DAT_18002a5a0,(void *)((longlong)DAT_18002a5a0 + 0x14),
              DAT_18002a5a8 - ((longlong)DAT_18002a5a0 + 0x14));
      puVar5 = DAT_18002a5c0;
      DAT_18002a5a8 = DAT_18002a5a8 + -0x14;
      if (*(char *)((longlong)DAT_18002a5c0 + -0x14) != '\0') {
        memset(&DAT_180028550,0,0x2000);
        puVar6 = DAT_18002a5b8;
        cVar14 = DAT_18002851d;
        uVar12 = 0;
        if (((longlong)puVar5 - (longlong)DAT_18002a5b8 >> 2) * -0x3333333333333333 != 0) {
          lVar13 = (longlong)puVar5 - (longlong)DAT_18002a5b8;
          uVar9 = uVar10;
          do {
            uVar11 = (int)uVar10 * 10;
            *(undefined8 *)((longlong)&DAT_180028550 + (ulonglong)uVar11) =
                 *(undefined8 *)((longlong)puVar6 + uVar10 * 0x14 + 9);
            *(undefined2 *)((longlong)&DAT_180028558 + (ulonglong)uVar11) =
                 *(undefined2 *)((longlong)puVar6 + uVar10 * 0x14 + 0x11);
            bVar7 = *(byte *)((longlong)puVar6 + uVar10 * 0x14 + 8);
            if (cVar14 != '\0') {
              bVar7 = bVar7 & 0x7f;
            }
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar12 = (int)uVar9 + (uint)bVar7;
            uVar9 = (ulonglong)uVar12;
          } while (uVar10 < (ulonglong)((lVar13 >> 2) * -0x3333333333333333));
        }
        cVar14 = *(char *)((longlong)puVar5 + -0x12);
        bVar3 = true;
        if (puVar6 != puVar5) {
          DAT_18002a5c0 = puVar6;
          _Mtx_unlock(&DAT_18002a550);
          goto LAB_180011e14;
        }
      }
    }
    _Mtx_unlock(&DAT_18002a550);
    if (!bVar3) {
      return;
    }
LAB_180011e14:
    if ((byte)(cVar14 - 1U) < 0x50) {
      FUN_180006850();
    }
    else {
      if ((int)uVar12 < 0xb) {
        if (*(char *)((longlong)param_1 + 1) == '\x04') {
          uVar12 = 4;
          if (DAT_1800230a1 != '\0') {
            FUN_1800065a0(0x1800230a0,DAT_1800230a0,DAT_180028548,'\x01');
            return;
          }
        }
        else if (*(char *)((longlong)param_1 + 1) == '\x03') {
          uVar12 = 4;
        }
      }
      if (DAT_180028548 != (code *)0x0) {
        (*DAT_180028548)(&local_58,0x11,&DAT_180028550,uVar12);
      }
    }
    return;
  }
  DAT_180028550 = *(ulonglong *)((longlong)param_1 + 6);
  DAT_180028558 = *(undefined2 *)((longlong)param_1 + 0xe);
  if (DAT_1800230a1 == '\0') goto LAB_180011bf3;
  bVar7 = (byte)DAT_180028550;
  if ((DAT_180028550 & 0x40) != 0) {
    bVar3 = false;
    FUN_180006250(&DAT_1800230a0);
    DAT_180023108 = 1;
    DAT_180023110 = GetTickCount64();
    DAT_180023118 = 5000;
    if (DAT_180023160 != '\0') {
      bVar7 = (byte)_DAT_180023158;
      if (bVar7 == 0) {
        DAT_1800230a0 = 0;
LAB_180011b39:
        bVar3 = true;
      }
      else if ((bVar7 < 0x10) && (0xf < DAT_1800230a0)) {
        DAT_1800230a0 = 0xf;
        goto LAB_180011b39;
      }
      if (((char)((uint)uVar4 >> 8) != DAT_180023159) || (bVar3)) {
        FUN_1800065a0(0x1800230a0,DAT_1800230a0,pcVar1,'\x01');
        uVar4 = DAT_180023130;
        if (DAT_180023120 != '\0') {
          DAT_180023120 = '\x01';
          DAT_180023128 = GetTickCount64();
        }
        bVar7 = (byte)_DAT_180023158;
        DAT_180023130 = uVar4;
      }
      if ((99 < bVar7) && (DAT_1800230a0 < 100)) {
        DAT_180023108 = 1;
        DAT_180023110 = GetTickCount64();
        DAT_180023118 = 100;
        DAT_180023120 = '\x01';
        DAT_180023128 = GetTickCount64();
        DAT_180023130 = 100;
      }
    }
    bVar7 = (byte)DAT_180028550 & 0xbf;
    DAT_180028550 = DAT_180028550 & 0xffffffffffffffbf;
  }
  if (bVar7 == 0) {
    return;
  }
LAB_180011bf3:
  if (DAT_180028548 == (code *)0x0) {
    return;
  }
  (*DAT_180028548)(&local_58,0x11,&DAT_180028550);
  return;
}



// FUNCTION 180011ec0 FUN_180011ec0
// THUNK false
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS EXTERNAL:00000001 CancelIo

void FUN_180011ec0(void)

{
  if (DAT_180023050 + -1 < (undefined1 *)0xfffffffffffffffe) {
    CancelIo(DAT_180023050);
    CloseHandle(DAT_180023050);
    DAT_180023050 = &DAT_ffffffffffffffff;
  }
  if (DAT_180023048 + -1 < (undefined1 *)0xfffffffffffffffe) {
    CancelIo(DAT_180023048);
    CloseHandle(DAT_180023048);
    DAT_180023048 = &DAT_ffffffffffffffff;
  }
  return;
}



// FUNCTION 180011f30 FUN_180011f30
// THUNK false
// CALLS 180011ec0 FUN_180011ec0
// CALLS 1800187f0 free
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180011f30(void)

{
  longlong *_Memory;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  UsbFinder_FindHidDevicesByKey(&DAT_180023060,(longlong *)&local_28);
  if (((longlong)plStack_20 - (longlong)local_28 & 0xffffffffffffffe0U) == 0) {
    FUN_180011ec0();
  }
  if (local_28 != (longlong *)0x0) {
    FUN_1800049d0(local_28,plStack_20);
    _Memory = local_28;
    if ((0xfff < (local_18 - (longlong)local_28 & 0xffffffffffffffe0U)) &&
       (_Memory = (longlong *)local_28[-1],
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return;
}



// FUNCTION 180011ff0 UsbReaderWriterServer
// THUNK false
// CALLS EXTERNAL:00000046 _Throw_C_error
// CALLS 180012820 FUN_180012820
// CALLS 1800187f0 free
// CALLS 180019703 memcpy
// CALLS 1800066c0 FUN_1800066c0
// CALLS EXTERNAL:00000047 _Mtx_lock
// CALLS 180011f30 FUN_180011f30
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS EXTERNAL:0000000d ReadFile
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS EXTERNAL:00000018 ResetEvent
// CALLS EXTERNAL:00000086 clock
// CALLS EXTERNAL:0000000f Sleep
// CALLS EXTERNAL:00000087 _time64
// CALLS EXTERNAL:0000000c WriteFile
// CALLS 180005a80 FUN_180005a80
// CALLS 180011a30 FUN_180011a30
// CALLS EXTERNAL:00000048 _Mtx_unlock
// CALLS EXTERNAL:00000001 CancelIo
// CALLS 180006250 FUN_180006250
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:0000000e CreateEventW
// CALLS 1800128d0 FUN_1800128d0
// CALLS 1800063d0 FUN_1800063d0
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000009 WaitForSingleObject
// CALLS 180001370 FUN_180001370
// CALLS 180004ec0 FUN_180004ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UsbReaderWriterServer(void)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  clock_t cVar5;
  clock_t cVar6;
  BOOL BVar7;
  DWORD DVar8;
  ULONGLONG UVar9;
  ULONGLONG UVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ************ppppppppppppuVar12;
  undefined8 ************ppppppppppppuVar13;
  ULONGLONG UVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  undefined1 auStackY_e8 [32];
  undefined8 ***********local_b8;
  undefined8 *puStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  char local_98 [8];
  ULONGLONG local_90;
  uint local_88;
  _OVERLAPPED local_80;
  DWORD local_60;
  DWORD local_5c;
  ulonglong local_58 [3];
  char local_40;
  ulonglong local_38;
  
                    /* 0x11ff0  158  UsbReaderWriterServer */
  local_38 = DAT_180023010 ^ (ulonglong)auStackY_e8;
  UVar9 = 0;
  cVar18 = '\0';
  local_60 = 0;
  local_98[0] = '\0';
  local_90 = 0;
  local_88 = 0;
  ppppppppppppuVar12 = (undefined8 ************)0x0;
  local_80.Internal = 0;
  local_80.InternalHigh = 0;
  local_80.u.Pointer = (PVOID)0x0;
  local_80.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  UVar14 = UVar9;
  do {
    if (DAT_18002851f != '\0') {
      DAT_18002851f = '\0';
      if (DAT_180023050 + -1 < (undefined1 *)0xfffffffffffffffe) {
        CancelIo(DAT_180023050);
        CloseHandle(DAT_180023050);
        DAT_180023050 = &DAT_ffffffffffffffff;
      }
      pppppppuVar11 = DAT_180023048;
      if ((longlong)DAT_180023048 - 1U < 0xfffffffffffffffe) {
        CancelIo(DAT_180023048);
        pppppppuVar11 = DAT_180023048;
        CloseHandle(DAT_180023048);
        DAT_180023048 = (undefined8 *******)&DAT_ffffffffffffffff;
      }
      uVar15 = DAT_180023090;
      ppuVar16 = &DAT_180023080;
      if (7 < DAT_180023098) {
        ppuVar16 = (undefined8 **)DAT_180023080;
      }
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = (undefined8 ***********)0x0;
      puStack_b0 = (undefined8 *)0x0;
      if (0x7ffffffffffffffe < DAT_180023090) {
                    /* WARNING: Subroutine does not return */
        FUN_180001370();
      }
      local_a0 = 7;
      if (DAT_180023090 < 8) {
        local_a8 = DAT_180023090;
        memmove(&local_b8,ppuVar16,0x10);
      }
      else {
        uVar17 = DAT_180023090 | 7;
        if (uVar17 < 0x7fffffffffffffff) {
          if (uVar17 < 10) {
            uVar17 = 10;
          }
        }
        else {
          uVar17 = 0x7ffffffffffffffe;
        }
        local_b8 = (undefined8 ***********)FUN_180004ec0(pppppppuVar11,uVar17 + 1);
        local_a8 = uVar15;
        local_a0 = uVar17;
        memcpy(local_b8,ppuVar16,uVar15 * 2 + 2);
      }
      ppppppppppppuVar12 = &local_b8;
      DAT_180023050 = FUN_180012820((LPCWSTR)ppppppppppppuVar12);
      uVar15 = DAT_180023070;
      ppuVar16 = &DAT_180023060;
      if (7 < DAT_180023078) {
        ppuVar16 = (undefined8 **)DAT_180023060;
      }
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = (undefined8 ***********)0x0;
      puStack_b0 = (undefined8 *)0x0;
      if (0x7ffffffffffffffe < DAT_180023070) {
                    /* WARNING: Subroutine does not return */
        FUN_180001370();
      }
      local_a0 = 7;
      if (DAT_180023070 < 8) {
        local_a8 = DAT_180023070;
        memmove(&local_b8,ppuVar16,0x10);
      }
      else {
        uVar17 = DAT_180023070 | 7;
        if (uVar17 < 0x7fffffffffffffff) {
          if (uVar17 < 10) {
            uVar17 = 10;
          }
        }
        else {
          uVar17 = 0x7ffffffffffffffe;
        }
        local_b8 = (undefined8 ***********)FUN_180004ec0(ppppppppppppuVar12,uVar17 + 1);
        local_a8 = uVar15;
        local_a0 = uVar17;
        memcpy(local_b8,ppuVar16,uVar15 * 2 + 2);
      }
      UVar14 = 0;
      DAT_180023048 = FUN_1800128d0((LPCWSTR)&local_b8);
      local_80.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      pppppppuVar11 = DAT_180023048;
      ReadFile(DAT_180023048,local_58 + 1,0x11,&local_5c,&local_80);
      if (local_80.hEvent == (undefined8 ************)0x0) {
        if (DAT_180023050 + -1 < (undefined1 *)0xfffffffffffffffe) {
          CancelIo(DAT_180023050);
          CloseHandle(DAT_180023050);
          DAT_180023050 = &DAT_ffffffffffffffff;
        }
        pppppppuVar11 = DAT_180023048;
        if ((longlong)DAT_180023048 - 1U < 0xfffffffffffffffe) {
          CancelIo(DAT_180023048);
          pppppppuVar11 = DAT_180023048;
          CloseHandle(DAT_180023048);
          DAT_180023048 = (undefined8 *******)&DAT_ffffffffffffffff;
        }
        DAT_18002851f = '\x01';
      }
      uVar15 = DAT_180023070;
      ppuVar16 = &DAT_180023060;
      if (7 < DAT_180023078) {
        ppuVar16 = (undefined8 **)DAT_180023060;
      }
      local_b8 = (undefined8 ***********)0x0;
      puStack_b0 = (undefined8 *)0x0;
      if (0x7ffffffffffffffe < DAT_180023070) {
                    /* WARNING: Subroutine does not return */
        FUN_180001370();
      }
      if (DAT_180023070 < 8) {
        local_b8 = (undefined8 ***********)*ppuVar16;
        puStack_b0 = ppuVar16[1];
        local_a8 = DAT_180023070;
        local_a0 = 7;
        ppppppppppppuVar13 = &local_b8;
      }
      else {
        uVar17 = DAT_180023070 | 7;
        if (uVar17 < 0x7fffffffffffffff) {
          if (uVar17 < 10) {
            uVar17 = 10;
          }
        }
        else {
          uVar17 = 0x7ffffffffffffffe;
        }
        ppppppppppppuVar12 = (undefined8 ************)FUN_180004ec0(pppppppuVar11,uVar17 + 1);
        local_a8 = uVar15;
        local_b8 = ppppppppppppuVar12;
        local_a0 = uVar17;
        memcpy(ppppppppppppuVar12,ppuVar16,uVar15 * 2 + 2);
        ppppppppppppuVar13 = &local_b8;
        if (7 < uVar17) {
          ppppppppppppuVar13 = ppppppppppppuVar12;
        }
      }
      ppppppppppppuVar12 = (undefined8 ************)&DAT_180023138;
      FUN_1800066c0(&DAT_180023138,ppppppppppppuVar13,uVar15);
      DAT_180023108 = '\x01';
      DAT_180023110 = (undefined8 *******)GetTickCount64();
      DAT_180023118 = 0;
      if (7 < local_a0) {
        ppppppppppppuVar12 = (undefined8 ************)local_b8;
        if ((0xfff < local_a0 * 2 + 2) &&
           (ppppppppppppuVar12 = (undefined8 ************)local_b8[-1],
           (undefined1 *)0x1f <
           (undefined1 *)((longlong)local_b8 + (-8 - (longlong)ppppppppppppuVar12)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppppppppppuVar12);
      }
    }
    if (DAT_180023050 + -1 < (undefined1 *)0xfffffffffffffffe) {
      iVar4 = _Mtx_lock(&DAT_18002a550);
      if (iVar4 != 0) {
        std::_Throw_C_error(iVar4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((DAT_18002a5a8 - DAT_18002a5a0 >> 2) * -0x3333333333333333 == 0) ||
         (*(char *)(DAT_18002a5a0 + 1) == '\0')) {
LAB_18001255f:
        if (cVar18 != '\0') {
          uVar15 = (ulonglong)local_88;
LAB_180012567:
          UVar10 = GetTickCount64();
          if ((UVar9 < UVar10) && (uVar15 <= UVar10 - UVar9)) {
            cVar18 = '\0';
            local_98[0] = '\0';
            if ((DAT_18002a5a8 - DAT_18002a5a0 >> 2) * -0x3333333333333333 != 0) {
              *(undefined1 *)(DAT_18002a5a0 + 1) = 1;
            }
            FUN_180011f30();
          }
        }
      }
      else {
        cVar5 = clock();
        do {
          cVar6 = clock();
        } while (cVar6 - cVar5 < 8);
        BVar7 = WriteFile(DAT_180023050,(LPCVOID)(DAT_18002a5a0 + 3),0x11,&local_60,
                          (LPOVERLAPPED)0x0);
        if (BVar7 == 0) {
          FUN_180011f30();
          goto LAB_18001255f;
        }
        uVar19 = (int)UVar14 + 1;
        UVar14 = (ULONGLONG)uVar19;
        *(undefined1 *)(DAT_18002a5a0 + 1) = 0;
        if (uVar19 < 5) {
          cVar18 = '\x01';
          local_98[0] = '\x01';
          if (*(char *)(DAT_18002a5a0 + 4) == '\t') {
            UVar9 = GetTickCount64();
            uVar15 = 5000;
            local_88 = 5000;
            local_90 = UVar9;
          }
          else {
            UVar9 = GetTickCount64();
            uVar15 = 1000;
            local_88 = 1000;
            local_90 = UVar9;
          }
          goto LAB_180012567;
        }
        UVar14 = 0;
        if (DAT_18002a5b8 != DAT_18002a5c0) {
          DAT_18002a5c0 = DAT_18002a5b8;
        }
        if (DAT_18002a5a0 != DAT_18002a5a8) {
          DAT_18002a5a8 = DAT_18002a5a0;
        }
        cVar18 = '\0';
        local_98[0] = '\0';
      }
      ppppppppppppuVar12 = (undefined8 ************)&DAT_18002a550;
      _Mtx_unlock();
    }
    if (((longlong)DAT_180023048 - 1U < 0xfffffffffffffffe) &&
       (ppppppppppppuVar12 = local_80.hEvent, DVar8 = WaitForSingleObject(local_80.hEvent,0),
       DVar8 == 0)) {
      cVar3 = FUN_18000f050((longlong)(local_58 + 1),0,0x10);
      if (local_40 == cVar3) {
        FUN_180011a30(local_58 + 1,local_98);
        local_58[1] = 0;
        local_58[2] = 0;
        local_40 = '\0';
        UVar14 = 0;
        UVar9 = local_90;
        cVar18 = local_98[0];
      }
      ResetEvent(local_80.hEvent);
      ppppppppppppuVar12 = (undefined8 ************)DAT_180023048;
      ReadFile(DAT_180023048,local_58 + 1,0x11,&local_5c,&local_80);
    }
    if (((undefined1 *)0xfffffffffffffffd < DAT_180023050 + -1) || (DAT_18002a5a8 == DAT_18002a5a0))
    {
      ppppppppppppuVar12 = (undefined8 ************)(ulonglong)DAT_180023040;
      Sleep(DAT_180023040);
      FUN_180011f30();
    }
    puVar2 = DAT_180028548;
    if (DAT_1800230a1 != '\0') {
      if (((DAT_180023108 != '\0') &&
          (pppppppuVar11 = (undefined8 *******)GetTickCount64(),
          ppppppppppppuVar12 = (undefined8 ************)DAT_180023110, DAT_180023110 < pppppppuVar11
          )) && (ppppppppppppuVar12 = (undefined8 ************)(ulonglong)DAT_180023118,
                ppppppppppppuVar12 <=
                (undefined8 ************)((longlong)pppppppuVar11 - (longlong)DAT_180023110))) {
        DAT_180023108 = '\x01';
        DAT_180023110 = (undefined8 *******)GetTickCount64();
        ppppppppppppuVar12 = (undefined8 ************)&DAT_1800230a0;
        DAT_180023118 = 5000;
        FUN_180006250(&DAT_1800230a0);
      }
      if (DAT_180023160 != '\0') {
        FUN_1800063d0(ppppppppppppuVar12,puVar2);
      }
    }
    if (DAT_18002852c != '\0') {
      if ((DAT_180023163 != '\0') && (DAT_1800230a1 != '\0')) {
        _time64((__time64_t *)local_58);
        FUN_180005a80(0x1800230a0,local_58[0]);
      }
      DAT_180023162 = 0;
      _DAT_180023168 = 0xffffffffffffffff;
      _DAT_180023100 = 0;
      DAT_180023108 = '\0';
      if (DAT_180023050 + -1 < (undefined1 *)0xfffffffffffffffe) {
        CancelIo(DAT_180023050);
        CloseHandle(DAT_180023050);
        DAT_180023050 = &DAT_ffffffffffffffff;
      }
      if ((longlong)DAT_180023048 - 1U < 0xfffffffffffffffe) {
        CancelIo(DAT_180023048);
        CloseHandle(DAT_180023048);
        DAT_180023048 = (undefined8 *******)&DAT_ffffffffffffffff;
      }
      return;
    }
  } while( true );
}



// FUNCTION 180012800 CS_UsbServer_Thread
// THUNK true

// FUNCTION 180012810 CS_UsbServer_SetThreadSleepTime
// THUNK false

void CS_UsbServer_SetThreadSleepTime(undefined4 param_1)

{
                    /* 0x12810  86  CS_UsbServer_SetThreadSleepTime */
  DAT_180023040 = param_1;
  return;
}



// FUNCTION 180012820 FUN_180012820
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000004 CreateFileW
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

HANDLE FUN_180012820(LPCWSTR param_1)

{
  void *pvVar1;
  HANDLE pvVar2;
  LPCWSTR lpFileName;
  void *_Memory;
  
  lpFileName = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    lpFileName = *(LPCWSTR *)param_1;
  }
  pvVar2 = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pvVar1 = *(void **)param_1;
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0xc) * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  *param_1 = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  return pvVar2;
}



// FUNCTION 1800128d0 FUN_1800128d0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000004 CreateFileW
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

HANDLE FUN_1800128d0(LPCWSTR param_1)

{
  void *pvVar1;
  HANDLE pvVar2;
  LPCWSTR lpFileName;
  void *_Memory;
  
  lpFileName = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    lpFileName = *(LPCWSTR *)param_1;
  }
  pvVar2 = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0);
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pvVar1 = *(void **)param_1;
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0xc) * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  *param_1 = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  return pvVar2;
}



// FUNCTION 180012980 FUN_180012980
// THUNK false
// CALLS 180004a60 FUN_180004a60

longlong FUN_180012980(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x2f8),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x318),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x338),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x358),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x378),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x398),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x3b8),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x3d8),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x3f8),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x418),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x438),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x458),&DAT_18001ba30,0);
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  FUN_180004a60((undefined8 *)(param_1 + 0x478),&DAT_18001ba30,0);
  *(undefined2 *)(param_1 + 0x498) = 0x100;
  *(undefined8 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0xd2;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return param_1;
}



// FUNCTION 180012bc0 FUN_180012bc0
// THUNK false
// CALLS 180001740 FUN_180001740
// CALLS 180015b10 FUN_180015b10
// CALLS 180001390 FUN_180001390
// CALLS 1800187f0 free
// CALLS 1800166f0 FUN_1800166f0
// CALLS 1800167d0 FUN_1800167d0
// CALLS 180015720 FUN_180015720
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 180004a60 FUN_180004a60
// CALLS 180014b10 FUN_180014b10
// CALLS 1800046c0 FUN_1800046c0
// CALLS 1800049d0 FUN_1800049d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180012bc0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong **pplVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *in_R9;
  undefined1 auStack_78 [40];
  undefined8 local_50 [4];
  longlong *local_30;
  longlong *plStack_28;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStack_78;
  uVar10 = (int)(DAT_18002af40 - _DAT_18002af38 >> 1) * 0x3e0f83e1 +
           (int)(DAT_18002aa80 - _DAT_18002aa78 >> 1) * 0x3e0f83e1;
  local_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = 0;
  pplVar6 = &local_30;
  FUN_180004a60(pplVar6,L"Start Upgrade Thread ",0x15);
  FUN_180001740(pplVar6,(longlong *)&local_30);
  if (DAT_18002af28 == '\0') {
    return 0;
  }
  if (DAT_18002aa68 == '\0') {
    uVar4 = FUN_1800167d0(0x18002aa90);
    local_20 = 0;
    local_18 = 0;
    pplVar6 = &local_30;
    local_30 = (longlong *)0x0;
    plStack_28 = (longlong *)0x0;
    if ((char)uVar4 == '\0') {
      uVar4 = 0x17;
      FUN_180004a60(pplVar6,L"Not found Normal Device",0x17);
      FUN_180001740(pplVar6,(longlong *)&local_30);
    }
    else {
      uVar4 = 0x13;
      FUN_180004a60(pplVar6,L"Found Normal Device",0x13);
      FUN_180001740(pplVar6,(longlong *)&local_30);
      uVar10 = uVar10 + 200;
    }
    DAT_18002aa69 = 1;
    _DAT_18002af30 = uVar10;
  }
  else {
    _DAT_18002aa70 = uVar10 + 200;
    _DAT_18002af30 = _DAT_18002aa70;
    puVar2 = FUN_180001390(&local_30,_DAT_18002aa70);
    puVar8 = local_50;
    plVar3 = FUN_1800046c0(puVar8,(undefined8 *)L"Main and Slave Mode,totalPacketCount = ",puVar2,
                           in_R9);
    FUN_180001740(puVar8,plVar3);
    if (7 < local_18) {
      plVar3 = local_30;
      if ((0xfff < local_18 * 2 + 2) &&
         (plVar3 = (longlong *)local_30[-1],
         0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(plVar3);
    }
    puVar7 = &DAT_18002a5d0;
    uVar4 = FUN_1800167d0(0x18002a5d0);
    local_20 = 0;
    if ((char)uVar4 == '\0') {
      local_30 = (longlong *)0x0;
      plStack_28 = (longlong *)0x0;
      FUN_1800166f0(puVar7,(int *)&DAT_18002aab0,(longlong *)&local_30);
      lVar11 = (longlong)plStack_28 - (longlong)local_30;
      if (local_30 != (longlong *)0x0) {
        FUN_1800049d0(local_30,plStack_28);
        plVar3 = local_30;
        if ((0xfff < (local_20 - (longlong)local_30 & 0xffffffffffffffe0U)) &&
           (plVar3 = (longlong *)local_30[-1],
           0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(plVar3);
      }
      if (lVar11 >> 5 == 0) {
        return 0;
      }
      DAT_18002aa69 = 1;
      DAT_18002af29 = 0;
      local_30 = (longlong *)0x0;
      plStack_28 = (longlong *)0x0;
      local_20 = 0;
      local_18 = 0;
      uVar12 = 0x17;
      pplVar6 = &local_30;
      FUN_180004a60(pplVar6,L"Start Upgrade Main Boot",0x17);
      FUN_180001740(pplVar6,(longlong *)&local_30);
      uVar4 = 0;
      bVar1 = FUN_180014b10((undefined8 *)&DAT_18002aa90,0,uVar12,in_R9);
      if (!bVar1) {
        return 0;
      }
      uVar4 = FUN_180015720((undefined8 *)&DAT_18002aa90,uVar4,uVar12,in_R9);
      if ((char)uVar4 == '\0') {
        return 0;
      }
      uVar5 = FUN_180015b10((undefined8 *)&DAT_18002aa90);
      if ((char)uVar5 == '\0') {
        return 0;
      }
      DAT_18002aa6c = DAT_18002af2c;
      local_30 = (longlong *)0x0;
      plStack_28 = (longlong *)0x0;
      local_20 = 0;
      local_18 = 0;
      uVar12 = 0x13;
      pplVar6 = &local_30;
      FUN_180004a60(pplVar6,L"Start Upgrade Slave",0x13);
      pplVar9 = &local_30;
      FUN_180001740(pplVar6,(longlong *)pplVar9);
      uVar4 = CONCAT71((int7)((ulonglong)pplVar9 >> 8),1);
      bVar1 = FUN_180014b10((undefined8 *)&DAT_18002a5d0,1,uVar12,in_R9);
      if (!bVar1) {
        return 0;
      }
      uVar4 = FUN_180015720((undefined8 *)&DAT_18002a5d0,uVar4,uVar12,in_R9);
      if ((char)uVar4 == '\0') {
        return 0;
      }
      puVar8 = (undefined8 *)&DAT_18002a5d0;
      goto LAB_180012fa2;
    }
    DAT_18002aa69 = 0;
    DAT_18002af29 = 1;
    local_30 = (longlong *)0x0;
    plStack_28 = (longlong *)0x0;
    local_18 = 0;
    uVar12 = 0x14;
    pplVar6 = &local_30;
    FUN_180004a60(pplVar6,L"Start Upgrade Slave ",0x14);
    FUN_180001740(pplVar6,(longlong *)&local_30);
    uVar4 = 0;
    bVar1 = FUN_180014b10((undefined8 *)&DAT_18002a5d0,0,uVar12,in_R9);
    if (!bVar1) {
      return 0;
    }
    uVar4 = FUN_180015720((undefined8 *)&DAT_18002a5d0,uVar4,uVar12,in_R9);
    if ((char)uVar4 == '\0') {
      return 0;
    }
    uVar5 = FUN_180015b10((undefined8 *)&DAT_18002a5d0);
    if ((char)uVar5 == '\0') {
      return 0;
    }
    DAT_18002af2c = DAT_18002aa6c;
    local_30 = (longlong *)0x0;
    plStack_28 = (longlong *)0x0;
    local_20 = 0;
    local_18 = 0;
    uVar4 = 0x13;
    pplVar6 = &local_30;
    FUN_180004a60(pplVar6,L"Start Upgrade Main ",0x13);
    FUN_180001740(pplVar6,(longlong *)&local_30);
  }
  uVar12 = 0;
  bVar1 = FUN_180014b10((undefined8 *)&DAT_18002aa90,0,uVar4,in_R9);
  if (!bVar1) {
    return 0;
  }
  uVar4 = FUN_180015720((undefined8 *)&DAT_18002aa90,uVar12,uVar4,in_R9);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  puVar8 = (undefined8 *)&DAT_18002aa90;
LAB_180012fa2:
  FUN_180015b10(puVar8);
  return 0;
}



// FUNCTION 180012fd0 UsbUpgrade_Start
// THUNK false
// CALLS 180003340 FUN_180003340
// CALLS 180013440 FUN_180013440
// CALLS 1800195a8 memset
// CALLS 180001740 FUN_180001740
// CALLS EXTERNAL:00000003 CreateThread
// CALLS 1800131a0 FUN_1800131a0
// CALLS 180004a60 FUN_180004a60
// CALLS 180012980 FUN_180012980
// CALLS 1800018e0 FUN_1800018e0
// CALLS 180002980 FUN_180002980
// CALLS 180013f20 FUN_180013f20
// CALLS 1800049d0 FUN_1800049d0

ulonglong UsbUpgrade_Start(int *param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  HANDLE pvVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  wchar_t local_4e8 [16];
  undefined8 local_4c8 [152];
  
                    /* 0x12fd0  206  UsbUpgrade_Start */
  uVar3 = (ulonglong)param_3;
  if (DAT_18002af58 != DAT_18002af60) {
    FUN_1800049d0(DAT_18002af58,DAT_18002af60);
    DAT_18002af60 = DAT_18002af58;
  }
  if (DAT_18002af50 != '\0') {
    pwVar5 = local_4e8;
    local_4e8[0] = L'\0';
    local_4e8[1] = L'\0';
    local_4e8[2] = L'\0';
    local_4e8[3] = L'\0';
    local_4e8[4] = L'\0';
    local_4e8[5] = L'\0';
    local_4e8[6] = L'\0';
    local_4e8[7] = L'\0';
    local_4e8[8] = L'\0';
    local_4e8[9] = L'\0';
    local_4e8[10] = L'\0';
    local_4e8[0xb] = L'\0';
    local_4e8[0xc] = L'\0';
    local_4e8[0xd] = L'\0';
    local_4e8[0xe] = L'\0';
    local_4e8[0xf] = L'\0';
    FUN_180004a60((undefined8 *)pwVar5,L"log reset",9);
    FUN_180003340(pwVar5,local_4e8);
  }
  memset(local_4c8,0,0x4c0);
  puVar1 = (undefined8 *)FUN_180012980((longlong)local_4c8);
  FUN_1800131a0((undefined8 *)&DAT_18002aa90,puVar1);
  FUN_180002980((longlong)local_4c8);
  uVar6 = param_2;
  uVar7 = uVar3;
  FUN_180013f20((undefined8 *)&DAT_18002aa90,param_1,param_2,param_3);
  puVar1 = local_4c8;
  puVar2 = FUN_180013440(puVar1,(undefined8 *)&DAT_18002aa90);
  FUN_1800018e0(puVar1,(longlong)puVar2,uVar6,uVar7);
  memset(local_4c8,0,0x4c0);
  puVar1 = (undefined8 *)FUN_180012980((longlong)local_4c8);
  FUN_1800131a0((undefined8 *)&DAT_18002a5d0,puVar1);
  FUN_180002980((longlong)local_4c8);
  if (DAT_18002aabc != 0) {
    FUN_180013f20((undefined8 *)&DAT_18002a5d0,(int *)((longlong)param_1 + (ulonglong)DAT_18002aabc)
                  ,param_2,param_3);
    puVar1 = local_4c8;
    puVar2 = FUN_180013440(puVar1,(undefined8 *)&DAT_18002a5d0);
    FUN_1800018e0(puVar1,(longlong)puVar2,param_2,uVar3);
  }
  if ((DAT_18002af28 == '\0') && (DAT_18002aa68 == '\0')) {
    pwVar5 = local_4e8;
    local_4e8[0] = L'\0';
    local_4e8[1] = L'\0';
    local_4e8[2] = L'\0';
    local_4e8[3] = L'\0';
    local_4e8[4] = L'\0';
    local_4e8[5] = L'\0';
    local_4e8[6] = L'\0';
    local_4e8[7] = L'\0';
    local_4e8[8] = L'\0';
    local_4e8[9] = L'\0';
    local_4e8[10] = L'\0';
    local_4e8[0xb] = L'\0';
    local_4e8[0xc] = L'\0';
    local_4e8[0xd] = L'\0';
    local_4e8[0xe] = L'\0';
    local_4e8[0xf] = L'\0';
    FUN_180004a60((undefined8 *)pwVar5,L"Upgrade Bin File Error,Upgrade return",0x25);
    uVar3 = FUN_180001740(pwVar5,(longlong *)local_4e8);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180012bc0,(LPVOID)0x0,0,(LPDWORD)0x0);
    uVar3 = CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1800131a0 FUN_1800131a0
// THUNK false
// CALLS 1800187f0 free
// CALLS 18000efa0 FUN_18000efa0
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 * FUN_1800131a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void *_Memory;
  undefined8 *puVar9;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  lVar8 = 5;
  puVar5 = param_2 + 4;
  puVar6 = param_1 + 4;
  do {
    puVar9 = puVar6;
    puVar7 = puVar5;
    uVar4 = puVar7[1];
    *puVar9 = *puVar7;
    puVar9[1] = uVar4;
    uVar4 = puVar7[3];
    puVar9[2] = puVar7[2];
    puVar9[3] = uVar4;
    uVar4 = puVar7[5];
    puVar9[4] = puVar7[4];
    puVar9[5] = uVar4;
    uVar4 = puVar7[7];
    puVar9[6] = puVar7[6];
    puVar9[7] = uVar4;
    uVar4 = puVar7[9];
    puVar9[8] = puVar7[8];
    puVar9[9] = uVar4;
    uVar4 = puVar7[0xb];
    puVar9[10] = puVar7[10];
    puVar9[0xb] = uVar4;
    uVar4 = puVar7[0xd];
    puVar9[0xc] = puVar7[0xc];
    puVar9[0xd] = uVar4;
    uVar4 = puVar7[0xf];
    puVar9[0xe] = puVar7[0xe];
    puVar9[0xf] = uVar4;
    lVar8 = lVar8 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar9 + 0x10;
  } while (lVar8 != 0);
  uVar4 = puVar7[0x11];
  puVar9[0x10] = puVar7[0x10];
  puVar9[0x11] = uVar4;
  uVar4 = puVar7[0x13];
  puVar9[0x12] = puVar7[0x12];
  puVar9[0x13] = uVar4;
  uVar4 = puVar7[0x15];
  puVar9[0x14] = puVar7[0x14];
  puVar9[0x15] = uVar4;
  uVar4 = puVar7[0x17];
  puVar9[0x16] = puVar7[0x16];
  puVar9[0x17] = uVar4;
  uVar4 = puVar7[0x19];
  puVar9[0x18] = puVar7[0x18];
  puVar9[0x19] = uVar4;
  puVar9[0x1a] = puVar7[0x1a];
  FUN_18000efa0(param_1 + 0x5f,param_2 + 0x5f);
  FUN_18000efa0(param_1 + 99,param_2 + 99);
  FUN_18000efa0(param_1 + 0x67,param_2 + 0x67);
  FUN_18000efa0(param_1 + 0x6b,param_2 + 0x6b);
  FUN_18000efa0(param_1 + 0x6f,param_2 + 0x6f);
  FUN_18000efa0(param_1 + 0x73,param_2 + 0x73);
  FUN_18000efa0(param_1 + 0x77,param_2 + 0x77);
  FUN_18000efa0(param_1 + 0x7b,param_2 + 0x7b);
  FUN_18000efa0(param_1 + 0x7f,param_2 + 0x7f);
  FUN_18000efa0(param_1 + 0x83,param_2 + 0x83);
  FUN_18000efa0(param_1 + 0x87,param_2 + 0x87);
  FUN_18000efa0(param_1 + 0x8b,param_2 + 0x8b);
  FUN_18000efa0(param_1 + 0x8f,param_2 + 0x8f);
  plVar1 = param_2 + 0x95;
  *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
  *(undefined1 *)((longlong)param_1 + 0x499) = *(undefined1 *)((longlong)param_2 + 0x499);
  *(undefined4 *)((longlong)param_1 + 0x49c) = *(undefined4 *)((longlong)param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  plVar2 = param_1 + 0x95;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = *(undefined4 *)((longlong)param_2 + 0x4a4);
  if (plVar2 != plVar1) {
    pvVar3 = (void *)*plVar2;
    if (pvVar3 != (void *)0x0) {
      _Memory = pvVar3;
      if ((0xfff < (ulonglong)((param_1[0x97] - (longlong)pvVar3 >> 1) * 2)) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
      *plVar2 = 0;
      param_1[0x96] = 0;
      param_1[0x97] = 0;
    }
    *plVar2 = *plVar1;
    param_1[0x96] = param_2[0x96];
    param_1[0x97] = param_2[0x97];
    *plVar1 = 0;
    param_2[0x96] = 0;
    param_2[0x97] = 0;
  }
  return param_1;
}



// FUNCTION 180013440 FUN_180013440
// THUNK false
// CALLS 180004160 FUN_180004160
// CALLS 180018824 FUN_180018824
// CALLS 1800012d0 FUN_1800012d0
// CALLS 180019709 memmove
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 1800055f0 FUN_1800055f0

undefined8 * FUN_180013440(undefined8 *param_1,undefined8 *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  size_t _Size;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  lVar6 = 5;
  puVar2 = param_2 + 4;
  puVar3 = param_1 + 4;
  do {
    puVar8 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar4[1];
    *puVar8 = *puVar4;
    puVar8[1] = uVar1;
    uVar1 = puVar4[3];
    puVar8[2] = puVar4[2];
    puVar8[3] = uVar1;
    uVar1 = puVar4[5];
    puVar8[4] = puVar4[4];
    puVar8[5] = uVar1;
    uVar1 = puVar4[7];
    puVar8[6] = puVar4[6];
    puVar8[7] = uVar1;
    uVar1 = puVar4[9];
    puVar8[8] = puVar4[8];
    puVar8[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar8[10] = puVar4[10];
    puVar8[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar8[0xc] = puVar4[0xc];
    puVar8[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar8[0xe] = puVar4[0xe];
    puVar8[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar8 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar4[0x11];
  puVar8[0x10] = puVar4[0x10];
  puVar8[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar8[0x12] = puVar4[0x12];
  puVar8[0x13] = uVar1;
  uVar1 = puVar4[0x15];
  puVar8[0x14] = puVar4[0x14];
  puVar8[0x15] = uVar1;
  uVar1 = puVar4[0x17];
  puVar8[0x16] = puVar4[0x16];
  puVar8[0x17] = uVar1;
  uVar1 = puVar4[0x19];
  puVar8[0x18] = puVar4[0x18];
  puVar8[0x19] = uVar1;
  puVar8[0x1a] = puVar4[0x1a];
  FUN_180004160(param_1 + 0x5f,param_2 + 0x5f);
  FUN_180004160(param_1 + 99,param_2 + 99);
  FUN_180004160(param_1 + 0x67,param_2 + 0x67);
  FUN_180004160(param_1 + 0x6b,param_2 + 0x6b);
  FUN_180004160(param_1 + 0x6f,param_2 + 0x6f);
  FUN_180004160(param_1 + 0x73,param_2 + 0x73);
  FUN_180004160(param_1 + 0x77,param_2 + 0x77);
  FUN_180004160(param_1 + 0x7b,param_2 + 0x7b);
  FUN_180004160(param_1 + 0x7f,param_2 + 0x7f);
  FUN_180004160(param_1 + 0x83,param_2 + 0x83);
  FUN_180004160(param_1 + 0x87,param_2 + 0x87);
  FUN_180004160(param_1 + 0x8b,param_2 + 0x8b);
  FUN_180004160(param_1 + 0x8f,param_2 + 0x8f);
  *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
  *(undefined1 *)((longlong)param_1 + 0x499) = *(undefined1 *)((longlong)param_2 + 0x499);
  *(undefined4 *)((longlong)param_1 + 0x49c) = *(undefined4 *)((longlong)param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)((longlong)param_1 + 0x4a4) = *(undefined4 *)((longlong)param_2 + 0x4a4);
  uVar5 = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  lVar6 = (longlong)(param_2[0x96] - param_2[0x95]) >> 1;
  uVar7 = lVar6 * 0xf83e0f83e0f83e1;
  if (uVar7 != 0) {
    if (0x3e0f83e0f83e0f8 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1800055f0();
    }
    uVar7 = lVar6 * 2;
    if (uVar7 < 0x1000) {
      if (uVar7 != 0) {
        uVar5 = FUN_180018824(uVar7);
      }
    }
    else {
      if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800012d0();
      }
      lVar6 = FUN_180018824(uVar7 + 0x27);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar6;
    }
    param_1[0x95] = uVar5;
    param_1[0x96] = uVar5;
    param_1[0x97] = uVar5 + uVar7;
    _Dst = (void *)param_1[0x95];
    _Size = param_2[0x96] - (longlong)param_2[0x95];
    memmove(_Dst,(void *)param_2[0x95],_Size);
    param_1[0x96] = (void *)(((longlong)_Size >> 1) * 2 + (longlong)_Dst);
  }
  return param_1;
}



// FUNCTION 180013770 CS_UsbUpgrade_Start
// THUNK true

// FUNCTION 180013780 CS_UsbUpgrade_EnableSaveLogFile
// THUNK false

void CS_UsbUpgrade_EnableSaveLogFile(undefined1 param_1)

{
                    /* 0x13780  90  CS_UsbUpgrade_EnableSaveLogFile
                       0x13780  204  UsbUpgrade_EnableSaveLogFile */
  DAT_18002af50 = param_1;
  return;
}



// FUNCTION 180013790 UsbUpgradeC_FindBootDevices
// THUNK false
// CALLS 1800195a8 memset
// CALLS 1800172d0 FUN_1800172d0
// CALLS 1800187f0 free
// CALLS 180016f40 FUN_180016f40
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 180012980 FUN_180012980
// CALLS 180002980 FUN_180002980
// CALLS 180013e10 FUN_180013e10
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * UsbUpgradeC_FindBootDevices(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  void *pvVar3;
  undefined1 *_Memory;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_558 [32];
  longlong *local_538;
  longlong *plStack_530;
  longlong local_528;
  void *local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  ulonglong uStack_508;
  undefined1 local_4f8 [1216];
  ulonglong local_38;
  
                    /* 0x13790  202  UsbUpgradeC_FindBootDevices */
  local_38 = DAT_180023010 ^ (ulonglong)auStack_558;
  local_528 = 0;
  local_538 = (longlong *)0x0;
  plStack_530 = (longlong *)0x0;
  memset(local_4f8,0,0x4c0);
  _Memory = local_4f8;
  FUN_180012980((longlong)_Memory);
  plVar4 = plStack_530;
  uStack_518 = 0;
  local_520 = (void *)0x0;
  local_510 = _DAT_18001c720;
  uStack_508 = _UNK_18001c728;
  plVar5 = local_538;
  if (local_538 != plStack_530) {
    do {
      if (7 < (ulonglong)plVar5[3]) {
        puVar1 = (undefined1 *)*plVar5;
        _Memory = puVar1;
        if ((0xfff < plVar5[3] * 2 + 2U) &&
           (_Memory = *(undefined1 **)(puVar1 + -8),
           (undefined1 *)0x1f < puVar1 + (-8 - (longlong)_Memory))) goto LAB_18001396a;
        free(_Memory);
      }
      plVar5[2] = 0;
      plVar5[3] = 7;
      *(undefined2 *)plVar5 = 0;
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar4);
    plStack_530 = local_538;
  }
  plVar5 = plStack_530;
  plVar4 = local_538;
  bVar2 = FUN_180013e10(_Memory,param_1);
  if (bVar2) {
    FUN_180016f40((LPCSTR)((longlong)param_1 + 0x97),(longlong *)&local_520);
    UsbFinder_FindHidDevicesByKey(&local_520,(longlong *)&local_538);
    plVar4 = local_538;
    plVar5 = plStack_530;
  }
  if (7 < uStack_508) {
    pvVar3 = local_520;
    if ((0xfff < uStack_508 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_520 + -8),
       0x1f < (ulonglong)((longlong)local_520 + (-8 - (longlong)pvVar3)))) goto LAB_18001396a;
    free(pvVar3);
    plVar4 = local_538;
    plVar5 = plStack_530;
  }
  *param_2 = (int)((longlong)plVar5 - (longlong)plVar4 >> 5);
  pvVar3 = FUN_1800172d0((longlong *)&local_538);
  FUN_180002980((longlong)local_4f8);
  if (local_538 != (longlong *)0x0) {
    FUN_1800049d0(local_538,plStack_530);
    plVar4 = local_538;
    if ((0xfff < (local_528 - (longlong)local_538 & 0xffffffffffffffe0U)) &&
       (plVar4 = (longlong *)local_538[-1],
       0x1f < (ulonglong)((longlong)local_538 + (-8 - (longlong)plVar4)))) {
LAB_18001396a:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar4);
  }
  return pvVar3;
}



// FUNCTION 1800139a0 CS_UsbUpgrade_FindBootDevices
// THUNK false
// CALLS 1800195a8 memset
// CALLS 18000ee60 FUN_18000ee60
// CALLS 1800187f0 free
// CALLS 180016f40 FUN_180016f40
// CALLS 180016d80 FUN_180016d80
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 180012980 FUN_180012980
// CALLS 180002980 FUN_180002980
// CALLS 180013e10 FUN_180013e10
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CS_UsbUpgrade_FindBootDevices(int *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *_Memory;
  void *_Memory_00;
  longlong *plVar5;
  undefined1 auStack_538 [32];
  longlong *local_518;
  longlong *plStack_510;
  longlong local_508;
  void *local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  ulonglong uStack_4e8;
  undefined1 local_4d8 [1216];
  ulonglong local_18;
  
                    /* 0x139a0  92  CS_UsbUpgrade_FindBootDevices */
  local_18 = DAT_180023010 ^ (ulonglong)auStack_538;
  local_508 = 0;
  local_518 = (longlong *)0x0;
  plStack_510 = (longlong *)0x0;
  memset(local_4d8,0,0x4c0);
  _Memory = local_4d8;
  FUN_180012980((longlong)_Memory);
  plVar3 = plStack_510;
  uStack_4f8 = 0;
  local_500 = (void *)0x0;
  local_4f0 = _DAT_18001c720;
  uStack_4e8 = _UNK_18001c728;
  plVar5 = local_518;
  if (local_518 != plStack_510) {
    do {
      if (7 < (ulonglong)plVar5[3]) {
        puVar1 = (undefined1 *)*plVar5;
        _Memory = puVar1;
        if ((0xfff < plVar5[3] * 2 + 2U) &&
           (_Memory = *(undefined1 **)(puVar1 + -8),
           (undefined1 *)0x1f < puVar1 + (-8 - (longlong)_Memory))) goto LAB_180013ae8;
        free(_Memory);
      }
      plVar5[2] = 0;
      plVar5[3] = 7;
      *(undefined2 *)plVar5 = 0;
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar3);
    plStack_510 = local_518;
  }
  bVar2 = FUN_180013e10(_Memory,param_1);
  if (bVar2) {
    FUN_180016f40((LPCSTR)((longlong)param_1 + 0x97),(longlong *)&local_500);
    UsbFinder_FindHidDevicesByKey(&local_500,(longlong *)&local_518);
  }
  if (7 < uStack_4e8) {
    _Memory_00 = local_500;
    if ((0xfff < uStack_4e8 * 2 + 2) &&
       (_Memory_00 = *(void **)((longlong)local_500 + -8),
       0x1f < (ulonglong)((longlong)local_500 + (-8 - (longlong)_Memory_00)))) {
LAB_180013ae8:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_00);
  }
  plVar3 = FUN_18000ee60(&local_500,(longlong *)&local_518);
  uVar4 = FUN_180016d80(plVar3);
  FUN_180002980((longlong)local_4d8);
  if (local_518 != (longlong *)0x0) {
    FUN_1800049d0(local_518,plStack_510);
    plVar3 = local_518;
    if ((0xfff < (local_508 - (longlong)local_518 & 0xffffffffffffffe0U)) &&
       (plVar3 = (longlong *)local_518[-1],
       0x1f < (ulonglong)((longlong)local_518 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar3);
  }
  return uVar4;
}



// FUNCTION 180013ba0 UsbUpgrade_FileSplit
// THUNK false
// CALLS 1800195a8 memset
// CALLS 180012980 FUN_180012980
// CALLS 180019703 memcpy
// CALLS 180013f20 FUN_180013f20
// CALLS 180002980 FUN_180002980
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UsbUpgrade_FileSplit(int *param_1,undefined8 param_2,undefined1 *param_3,int *param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 auStack_9c8 [32];
  undefined8 local_9a8 [5];
  int local_980;
  uint local_97c;
  char local_510;
  undefined8 local_4e8 [5];
  int local_4c0;
  char local_50;
  ulonglong local_28;
  
                    /* 0x13ba0  205  UsbUpgrade_FileSplit */
  local_28 = DAT_180023010 ^ (ulonglong)auStack_9c8;
  memset(local_9a8,0,0x4c0);
  FUN_180012980((longlong)local_9a8);
  FUN_180013f20(local_9a8,param_1,0,10000);
  memset(local_4e8,0,0x4c0);
  FUN_180012980((longlong)local_4e8);
  if (local_97c != 0) {
    FUN_180013f20(local_4e8,(int *)((longlong)param_1 + (ulonglong)local_97c),0,10000);
  }
  if (param_5 == 0) {
    local_4c0 = local_980;
    if (local_510 == '\0') {
LAB_180013c89:
      *param_4 = 0;
      *param_3 = 0;
      uVar1 = 0;
      goto LAB_180013c94;
    }
  }
  else {
    if (local_50 == '\0') goto LAB_180013c89;
    param_1 = (int *)((ulonglong)local_97c + (longlong)param_1);
  }
  *param_4 = local_4c0 + 0x2000;
  memcpy(param_3,param_1,(longlong)(local_4c0 + 0x2000));
  uVar1 = 1;
LAB_180013c94:
  FUN_180002980((longlong)local_4e8);
  FUN_180002980((longlong)local_9a8);
  return uVar1;
}



// FUNCTION 180013cd0 CS_UsbUpgrade_FileSplit
// THUNK false
// CALLS EXTERNAL:0000008a free
// CALLS 180016eb0 FUN_180016eb0
// CALLS EXTERNAL:00000089 malloc
// CALLS 180013ba0 UsbUpgrade_FileSplit

undefined8 CS_UsbUpgrade_FileSplit(int *param_1,uint param_2,int param_3)

{
  undefined1 *_Memory;
  undefined8 uVar1;
  int local_res10 [2];
  
                    /* 0x13cd0  91  CS_UsbUpgrade_FileSplit */
  local_res10[0] = param_2 + 0x3000;
  _Memory = malloc((longlong)local_res10[0]);
  uVar1 = 0;
  if (_Memory != (undefined1 *)0x0) {
    UsbUpgrade_FileSplit(param_1,(ulonglong)param_2,_Memory,local_res10,param_3);
    uVar1 = FUN_180016eb0((longlong)_Memory,local_res10[0]);
    free(_Memory);
  }
  return uVar1;
}



// FUNCTION 180013d50 UsbUpgradeC_GetLogs
// THUNK false
// CALLS 1800172d0 FUN_1800172d0

void UsbUpgradeC_GetLogs(undefined4 *param_1)

{
                    /* 0x13d50  203  UsbUpgradeC_GetLogs */
  *param_1 = (int)(DAT_18002af60 - DAT_18002af58 >> 5);
  FUN_1800172d0(&DAT_18002af58);
  return;
}



// FUNCTION 180013d70 CS_UsbUpgrade_GetLogs
// THUNK false
// CALLS 18000ee60 FUN_18000ee60
// CALLS 180016d80 FUN_180016d80

void CS_UsbUpgrade_GetLogs(void)

{
  longlong *plVar1;
  undefined8 local_28 [5];
  
                    /* 0x13d70  93  CS_UsbUpgrade_GetLogs */
  plVar1 = FUN_18000ee60(local_28,&DAT_18002af58);
  FUN_180016d80(plVar1);
  return;
}



// FUNCTION 180013da0 FUN_180013da0
// THUNK false
// CALLS 180018824 FUN_180018824
// CALLS 1800012d0 FUN_1800012d0
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

ulonglong FUN_180013da0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  
  if (param_2 < 0x3e0f83e0f83e0f9) {
    sVar3 = param_2 * 0x42;
    if (sVar3 < 0x1000) {
      if (sVar3 != 0) {
        uVar2 = FUN_180018824(sVar3);
        return uVar2;
      }
      return 0;
    }
    if (sVar3 < sVar3 + 0x27) {
      lVar1 = FUN_180018824(sVar3 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800012d0();
}



// FUNCTION 180013e10 FUN_180013e10
// THUNK false

bool FUN_180013e10(undefined8 param_1,int *param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  uint5 uVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar7 = 0;
  iVar13 = 0;
  if ((param_2 == (int *)0x0) || (uVar1 = param_2[1], 0x2000 < uVar1)) goto LAB_180013f18;
  uVar11 = 8;
  if ((8 < uVar1) && (7 < uVar1 - 8)) {
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    do {
      iVar8 = (int)uVar11;
      uVar10 = *(uint *)(uVar11 + (longlong)param_2);
      uVar9 = iVar8 + 8;
      uVar11 = (ulonglong)uVar9;
      auVar2[0xc] = (char)(uVar10 >> 0x18);
      auVar2._0_12_ = ZEXT712(0);
      uVar4 = CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar10 >> 0x10));
      auVar5._5_8_ = 0;
      auVar5._0_5_ = uVar4;
      iVar17 = iVar17 + (uVar10 & 0xff);
      iVar18 = iVar18 + (int)CONCAT72(SUB137(auVar5 << 0x40,6),(ushort)(byte)(uVar10 >> 8));
      iVar19 = iVar19 + (int)uVar4;
      iVar20 = iVar20 + (uint)(uint3)(auVar2._10_3_ >> 0x10);
      uVar10 = *(uint *)((ulonglong)(iVar8 + 4) + (longlong)param_2);
      auVar3[0xc] = (char)(uVar10 >> 0x18);
      auVar3._0_12_ = ZEXT712(0);
      uVar4 = CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar10 >> 0x10));
      auVar6._5_8_ = 0;
      auVar6._0_5_ = uVar4;
      iVar13 = iVar13 + (uVar10 & 0xff);
      iVar14 = iVar14 + (int)CONCAT72(SUB137(auVar6 << 0x40,6),(ushort)(byte)(uVar10 >> 8));
      iVar15 = iVar15 + (int)uVar4;
      iVar16 = iVar16 + (uint)(uint3)(auVar3._10_3_ >> 0x10);
    } while (uVar9 < uVar1 - (uVar1 - 8 & 7));
    iVar13 = iVar13 + iVar17 + iVar15 + iVar19 + iVar14 + iVar18 + iVar16 + iVar20;
  }
  iVar14 = 0;
  uVar10 = (uint)uVar11;
  if (uVar10 < uVar1) {
    if (uVar1 - uVar10 < 2) {
LAB_180013efe:
      iVar13 = iVar13 + (uint)*(byte *)(uVar11 + (longlong)param_2);
    }
    else {
      uVar9 = ((uVar1 - uVar10) - 2 >> 1) + 1;
      uVar12 = (ulonglong)uVar9;
      do {
        iVar7 = iVar7 + (uint)*(byte *)(uVar11 + (longlong)param_2);
        iVar14 = iVar14 + (uint)*(byte *)(uVar11 + 1 + (longlong)param_2);
        uVar11 = uVar11 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar10 + uVar9 * 2 < uVar1) goto LAB_180013efe;
    }
    iVar13 = iVar13 + iVar14 + iVar7;
  }
  iVar7 = 0x55555555 - iVar13;
LAB_180013f18:
  return *param_2 == iVar7;
}



// FUNCTION 180013f20 FUN_180013f20
// THUNK false
// CALLS 180001740 FUN_180001740
// CALLS 180014870 FUN_180014870
// CALLS 180016f40 FUN_180016f40
// CALLS 180004a60 FUN_180004a60
// CALLS 180019703 memcpy
// CALLS 180001370 FUN_180001370
// CALLS 180013e10 FUN_180013e10
// CALLS 180004ec0 FUN_180004ec0

void FUN_180013f20(undefined8 *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int *piVar5;
  wchar_t ****ppppwVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  wchar_t ****_Dst;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  wchar_t ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  int *piStack_40;
  
  *(undefined1 *)(param_1 + 0x93) = 0;
  if (param_1[0x95] != param_1[0x96]) {
    param_1[0x96] = param_1[0x95];
  }
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  local_58 = 0;
  ppppwVar6 = &local_68;
  uStack_50 = 0;
  local_68 = (wchar_t ***)0x0;
  uStack_60 = 0;
  piStack_40 = param_2;
  FUN_180004a60(ppppwVar6,L"File check init",0xf);
  FUN_180001740(ppppwVar6,(longlong *)&local_68);
  bVar4 = FUN_180013e10(ppppwVar6,param_2);
  local_58 = 0;
  uStack_50 = 0;
  ppppwVar6 = &local_68;
  local_68 = (wchar_t ***)0x0;
  uStack_60 = 0;
  if (!bVar4) {
    FUN_180004a60(ppppwVar6,L"Invalid header",0xe);
    FUN_180001740(ppppwVar6,(longlong *)&local_68);
    return;
  }
  FUN_180004a60(ppppwVar6,L"File header check ok",0x14);
  FUN_180001740(ppppwVar6,(longlong *)&local_68);
  *(undefined2 *)(param_1 + 0x93) = 0x101;
  *(undefined4 *)(param_1 + 1) = param_4;
  local_58 = 0;
  ppppwVar6 = &local_68;
  uStack_50 = 0;
  local_68 = (wchar_t ***)0x0;
  uStack_60 = 0;
  FUN_180004a60(ppppwVar6,L"File header memset",0x12);
  FUN_180001740(ppppwVar6,(longlong *)&local_68);
  lVar9 = 5;
  puVar3 = param_1 + 4;
  do {
    puVar7 = puVar3;
    piVar5 = param_2;
    uVar2 = *(undefined8 *)(piVar5 + 2);
    *puVar7 = *(undefined8 *)piVar5;
    puVar7[1] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 6);
    puVar7[2] = *(undefined8 *)(piVar5 + 4);
    puVar7[3] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 10);
    puVar7[4] = *(undefined8 *)(piVar5 + 8);
    puVar7[5] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 0xe);
    puVar7[6] = *(undefined8 *)(piVar5 + 0xc);
    puVar7[7] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 0x12);
    puVar7[8] = *(undefined8 *)(piVar5 + 0x10);
    puVar7[9] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 0x16);
    puVar7[10] = *(undefined8 *)(piVar5 + 0x14);
    puVar7[0xb] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 0x1a);
    puVar7[0xc] = *(undefined8 *)(piVar5 + 0x18);
    puVar7[0xd] = uVar2;
    uVar2 = *(undefined8 *)(piVar5 + 0x1e);
    puVar7[0xe] = *(undefined8 *)(piVar5 + 0x1c);
    puVar7[0xf] = uVar2;
    lVar9 = lVar9 + -1;
    param_2 = piVar5 + 0x20;
    puVar3 = puVar7 + 0x10;
  } while (lVar9 != 0);
  uVar2 = *(undefined8 *)(piVar5 + 0x22);
  plVar12 = param_1 + 0x5f;
  puVar7[0x10] = *(undefined8 *)(piVar5 + 0x20);
  puVar7[0x11] = uVar2;
  uVar2 = *(undefined8 *)(piVar5 + 0x26);
  puVar7[0x12] = *(undefined8 *)(piVar5 + 0x24);
  puVar7[0x13] = uVar2;
  uVar2 = *(undefined8 *)(piVar5 + 0x2a);
  puVar7[0x14] = *(undefined8 *)(piVar5 + 0x28);
  puVar7[0x15] = uVar2;
  uVar2 = *(undefined8 *)(piVar5 + 0x2e);
  puVar7[0x16] = *(undefined8 *)(piVar5 + 0x2c);
  puVar7[0x17] = uVar2;
  uVar2 = *(undefined8 *)(piVar5 + 0x32);
  puVar7[0x18] = *(undefined8 *)(piVar5 + 0x30);
  puVar7[0x19] = uVar2;
  puVar7[0x1a] = *(undefined8 *)(piVar5 + 0x34);
  *param_1 = param_3;
  FUN_180016f40((LPCSTR)((longlong)param_1 + 0x77),plVar12);
  lVar9 = param_1[0x61];
  if (0x7ffffffffffffffeU - lVar9 < 0x13) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  if (7 < (ulonglong)param_1[0x62]) {
    plVar12 = (longlong *)*plVar12;
  }
  uVar10 = 7;
  local_58 = 0;
  uVar1 = lVar9 + 0x13;
  uStack_50 = 0;
  ppppwVar6 = &local_68;
  uVar11 = 7;
  local_68 = (wchar_t ***)0x0;
  uStack_60 = 0;
  if (7 < uVar1) {
    uVar11 = uVar1 | 7;
    if (uVar11 < 0x7fffffffffffffff) {
      if (uVar11 < 10) {
        uVar11 = 10;
      }
    }
    else {
      uVar11 = 0x7ffffffffffffffe;
    }
    ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
    local_68 = (wchar_t ***)ppppwVar6;
  }
  local_58 = uVar1;
  uStack_50 = uVar11;
  *ppppwVar6 = (wchar_t ***)u_File_header_icName__18001bd48._0_8_;
  ppppwVar6[1] = (wchar_t ***)u_File_header_icName__18001bd48._8_8_;
  ppppwVar6[2] = (wchar_t ***)u_File_header_icName__18001bd48._16_8_;
  ppppwVar6[3] = (wchar_t ***)u_File_header_icName__18001bd48._24_8_;
  *(undefined4 *)(ppppwVar6 + 4) = u_File_header_icName__18001bd48._32_4_;
  *(wchar_t *)((longlong)ppppwVar6 + 0x24) = u_File_header_icName__18001bd48[0x12];
  pwVar8 = (wchar_t *)((longlong)ppppwVar6 + 0x26);
  memcpy(pwVar8,plVar12,lVar9 * 2);
  *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
  FUN_180001740(pwVar8,(longlong *)&local_68);
  plVar12 = param_1 + 99;
  FUN_180016f40((LPCSTR)((longlong)param_1 + 0x37),plVar12);
  lVar9 = param_1[0x65];
  if (0x7ffffffffffffffeU - lVar9 < 0x13) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  if (7 < (ulonglong)param_1[0x66]) {
    plVar12 = (longlong *)*plVar12;
  }
  uVar1 = lVar9 + 0x13;
  local_58 = 0;
  uStack_50 = 0;
  ppppwVar6 = &local_68;
  uVar11 = 7;
  local_68 = (wchar_t ***)0x0;
  uStack_60 = 0;
  if (7 < uVar1) {
    uVar11 = uVar1 | 7;
    if (uVar11 < 0x7fffffffffffffff) {
      if (uVar11 < 10) {
        uVar11 = 10;
      }
    }
    else {
      uVar11 = 0x7ffffffffffffffe;
    }
    ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
    local_68 = (wchar_t ***)ppppwVar6;
  }
  local_58 = uVar1;
  uStack_50 = uVar11;
  *ppppwVar6 = (wchar_t ***)u_File_header_fileId__18001bd70._0_8_;
  ppppwVar6[1] = (wchar_t ***)u_File_header_fileId__18001bd70._8_8_;
  ppppwVar6[2] = (wchar_t ***)u_File_header_fileId__18001bd70._16_8_;
  ppppwVar6[3] = (wchar_t ***)u_File_header_fileId__18001bd70._24_8_;
  *(undefined4 *)(ppppwVar6 + 4) = u_File_header_fileId__18001bd70._32_4_;
  *(wchar_t *)((longlong)ppppwVar6 + 0x24) = u_File_header_fileId__18001bd70[0x12];
  pwVar8 = (wchar_t *)((longlong)ppppwVar6 + 0x26);
  memcpy(pwVar8,plVar12,lVar9 * 2);
  *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
  FUN_180001740(pwVar8,(longlong *)&local_68);
  plVar12 = param_1 + 0x67;
  FUN_180016f40((LPCSTR)((longlong)param_1 + 0xb7),plVar12);
  lVar9 = param_1[0x69];
  if (0x1d < 0x7ffffffffffffffeU - lVar9) {
    if (7 < (ulonglong)param_1[0x6a]) {
      plVar12 = (longlong *)*plVar12;
    }
    uVar1 = lVar9 + 0x1e;
    local_58 = 0;
    uStack_50 = 0;
    ppppwVar6 = &local_68;
    uVar11 = 7;
    local_68 = (wchar_t ***)0x0;
    uStack_60 = 0;
    if (7 < uVar1) {
      uVar11 = uVar1 | 7;
      if (uVar11 < 0x7fffffffffffffff) {
        if (uVar11 < 10) {
          uVar11 = 10;
        }
      }
      else {
        uVar11 = 0x7ffffffffffffffe;
      }
      ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
      local_68 = (wchar_t ***)ppppwVar6;
    }
    pwVar8 = (wchar_t *)((longlong)ppppwVar6 + 0x3c);
    local_58 = uVar1;
    uStack_50 = uVar11;
    *ppppwVar6 = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._0_8_;
    ppppwVar6[1] = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._8_8_;
    ppppwVar6[2] = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._16_8_;
    ppppwVar6[3] = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._24_8_;
    ppppwVar6[4] = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._32_8_;
    ppppwVar6[5] = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._40_8_;
    ppppwVar6[6] = (wchar_t ***)u_File_header_bootInputEndPoint__18001bd98._48_8_;
    *(undefined4 *)(ppppwVar6 + 7) = u_File_header_bootInputEndPoint__18001bd98._56_4_;
    memcpy(pwVar8,plVar12,lVar9 * 2);
    *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
    FUN_180001740(pwVar8,(longlong *)&local_68);
    plVar12 = param_1 + 0x6b;
    FUN_180016f40((LPCSTR)((longlong)param_1 + 0xf7),plVar12);
    lVar9 = param_1[0x6d];
    if (0x7ffffffffffffffeU - lVar9 < 0x1f) {
                    /* WARNING: Subroutine does not return */
      FUN_180001370();
    }
    if (7 < (ulonglong)param_1[0x6e]) {
      plVar12 = (longlong *)*plVar12;
    }
    uVar1 = lVar9 + 0x1f;
    local_58 = 0;
    uStack_50 = 0;
    ppppwVar6 = &local_68;
    uVar11 = 7;
    local_68 = (wchar_t ***)0x0;
    uStack_60 = 0;
    if (7 < uVar1) {
      uVar11 = uVar1 | 7;
      if (uVar11 < 0x7fffffffffffffff) {
        if (uVar11 < 10) {
          uVar11 = 10;
        }
      }
      else {
        uVar11 = 0x7ffffffffffffffe;
      }
      ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
      local_68 = (wchar_t ***)ppppwVar6;
    }
    pwVar8 = (wchar_t *)((longlong)ppppwVar6 + 0x3e);
    local_58 = uVar1;
    uStack_50 = uVar11;
    *ppppwVar6 = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._0_8_;
    ppppwVar6[1] = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._8_8_;
    ppppwVar6[2] = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._16_8_;
    ppppwVar6[3] = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._24_8_;
    ppppwVar6[4] = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._32_8_;
    ppppwVar6[5] = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._40_8_;
    ppppwVar6[6] = (wchar_t ***)u_File_header_bootOutputEndPoint__18001bde0._48_8_;
    *(undefined4 *)(ppppwVar6 + 7) = u_File_header_bootOutputEndPoint__18001bde0._56_4_;
    *(wchar_t *)((longlong)ppppwVar6 + 0x3c) = u_File_header_bootOutputEndPoint__18001bde0[0x1e];
    memcpy(pwVar8,plVar12,lVar9 * 2);
    *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
    FUN_180001740(pwVar8,(longlong *)&local_68);
    plVar12 = param_1 + 0x6f;
    FUN_180016f40((LPCSTR)((longlong)param_1 + 0x137),plVar12);
    lVar9 = param_1[0x71];
    if (0x7ffffffffffffffeU - lVar9 < 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_180001370();
    }
    if (7 < (ulonglong)param_1[0x72]) {
      plVar12 = (longlong *)*plVar12;
    }
    uVar1 = lVar9 + 0x20;
    local_58 = 0;
    uStack_50 = 0;
    ppppwVar6 = &local_68;
    uVar11 = 7;
    local_68 = (wchar_t ***)0x0;
    uStack_60 = 0;
    if (7 < uVar1) {
      uVar11 = uVar1 | 7;
      if (uVar11 < 0x7fffffffffffffff) {
        if (uVar11 < 10) {
          uVar11 = 10;
        }
      }
      else {
        uVar11 = 0x7ffffffffffffffe;
      }
      ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
      local_68 = (wchar_t ***)ppppwVar6;
    }
    _Dst = ppppwVar6 + 8;
    local_58 = uVar1;
    uStack_50 = uVar11;
    *ppppwVar6 = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._0_8_;
    ppppwVar6[1] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._8_8_;
    ppppwVar6[2] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._16_8_;
    ppppwVar6[3] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._24_8_;
    ppppwVar6[4] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._32_8_;
    ppppwVar6[5] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._40_8_;
    ppppwVar6[6] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._48_8_;
    ppppwVar6[7] = (wchar_t ***)u_File_header_normalInputEndPoint__18001be20._56_8_;
    memcpy(_Dst,plVar12,lVar9 * 2);
    *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
    FUN_180001740(_Dst,(longlong *)&local_68);
    plVar12 = param_1 + 0x73;
    FUN_180016f40((LPCSTR)((longlong)param_1 + 0x177),plVar12);
    lVar9 = param_1[0x75];
    if (0x20 < 0x7ffffffffffffffeU - lVar9) {
      if (7 < (ulonglong)param_1[0x76]) {
        plVar12 = (longlong *)*plVar12;
      }
      uVar1 = lVar9 + 0x21;
      local_58 = 0;
      uStack_50 = 0;
      ppppwVar6 = &local_68;
      uVar11 = 7;
      local_68 = (wchar_t ***)0x0;
      uStack_60 = 0;
      if (7 < uVar1) {
        uVar11 = uVar1 | 7;
        if (uVar11 < 0x7fffffffffffffff) {
          if (uVar11 < 10) {
            uVar11 = 10;
          }
        }
        else {
          uVar11 = 0x7ffffffffffffffe;
        }
        ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
        local_68 = (wchar_t ***)ppppwVar6;
      }
      pwVar8 = (wchar_t *)((longlong)ppppwVar6 + 0x42);
      local_58 = uVar1;
      uStack_50 = uVar11;
      *ppppwVar6 = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._0_8_;
      ppppwVar6[1] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._8_8_;
      ppppwVar6[2] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._16_8_;
      ppppwVar6[3] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._24_8_;
      ppppwVar6[4] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._32_8_;
      ppppwVar6[5] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._40_8_;
      ppppwVar6[6] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._48_8_;
      ppppwVar6[7] = (wchar_t ***)u_File_header_normalOutputEndPoint_18001be70._56_8_;
      *(wchar_t *)(ppppwVar6 + 8) = u_File_header_normalOutputEndPoint_18001be70[0x20];
      memcpy(pwVar8,plVar12,lVar9 * 2);
      *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
      FUN_180001740(pwVar8,(longlong *)&local_68);
      plVar12 = param_1 + 0x77;
      FUN_180016f40((LPCSTR)((longlong)param_1 + 0x277),plVar12);
      lVar9 = param_1[0x79];
      if (0x16 < 0x7ffffffffffffffeU - lVar9) {
        if (7 < (ulonglong)param_1[0x7a]) {
          plVar12 = (longlong *)*plVar12;
        }
        uVar1 = lVar9 + 0x17;
        local_58 = 0;
        uStack_50 = 0;
        ppppwVar6 = &local_68;
        local_68 = (wchar_t ***)0x0;
        uStack_60 = 0;
        if (7 < uVar1) {
          uVar10 = uVar1 | 7;
          if (uVar10 < 0x7fffffffffffffff) {
            if (uVar10 < 10) {
              uVar10 = 10;
            }
          }
          else {
            uVar10 = 0x7ffffffffffffffe;
          }
          ppppwVar6 = (wchar_t ****)FUN_180004ec0(0x7ffffffffffffffe,uVar10 + 1);
          local_68 = (wchar_t ***)ppppwVar6;
        }
        local_58 = uVar1;
        uStack_50 = uVar10;
        *ppppwVar6 = (wchar_t ***)u_File_header_senserName__18001beb8._0_8_;
        ppppwVar6[1] = (wchar_t ***)u_File_header_senserName__18001beb8._8_8_;
        ppppwVar6[2] = (wchar_t ***)u_File_header_senserName__18001beb8._16_8_;
        ppppwVar6[3] = (wchar_t ***)u_File_header_senserName__18001beb8._24_8_;
        ppppwVar6[4] = (wchar_t ***)u_File_header_senserName__18001beb8._32_8_;
        *(undefined4 *)(ppppwVar6 + 5) = u_File_header_senserName__18001beb8._40_4_;
        pwVar8 = (wchar_t *)((longlong)ppppwVar6 + 0x2e);
        *(wchar_t *)((longlong)ppppwVar6 + 0x2c) = u_File_header_senserName__18001beb8[0x16];
        memcpy(pwVar8,plVar12,lVar9 * 2);
        *(wchar_t *)((longlong)ppppwVar6 + uVar1 * 2) = L'\0';
        FUN_180001740(pwVar8,(longlong *)&local_68);
        FUN_180016f40((LPCSTR)((longlong)param_1 + 0x2b7),param_1 + 0x7b);
        local_58 = 0;
        uStack_50 = 0;
        ppppwVar6 = &local_68;
        local_68 = (wchar_t ***)0x0;
        uStack_60 = 0;
        FUN_180004a60(ppppwVar6,L"File header info ok",0x13);
        FUN_180001740(ppppwVar6,(longlong *)&local_68);
        FUN_180014870((longlong)param_1,(longlong)piStack_40);
        local_58 = 0;
        uStack_50 = 0;
        ppppwVar6 = &local_68;
        local_68 = (wchar_t ***)0x0;
        uStack_60 = 0;
        FUN_180004a60(ppppwVar6,L"Create Upgrade Packet OK",0x18);
        FUN_180001740(ppppwVar6,(longlong *)&local_68);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_180001370();
    }
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001370();
}



// FUNCTION 180014810 FUN_180014810
// THUNK false
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180014810(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStack_38;
  local_18._0_4_ = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,7)));
  local_18 = (ulonglong)CONCAT14(param_5,(undefined4)local_18);
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(&local_18,8);
  }
  return;
}



// FUNCTION 180014870 FUN_180014870
// THUNK false
// CALLS 180016ae0 FUN_180016ae0
// CALLS 180019703 memcpy
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180014870(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  char cStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined5 uStack_75;
  undefined3 uStack_70;
  undefined5 uStack_6d;
  undefined3 local_68;
  undefined5 uStack_65;
  undefined3 uStack_60;
  undefined5 uStack_5d;
  undefined3 local_58;
  undefined5 uStack_55;
  undefined8 uStack_50;
  undefined2 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x4a8);
  puVar6 = (undefined8 *)*plVar1;
  puVar5 = *(undefined8 **)(param_1 + 0x4b0);
  if (puVar6 != *(undefined8 **)(param_1 + 0x4b0)) {
    *(undefined8 **)(param_1 + 0x4b0) = puVar6;
    puVar5 = puVar6;
  }
  local_88 = 0x100;
  memcpy(&uStack_86,(void *)(param_2 + 0x1d9),(ulonglong)*(byte *)(param_2 + 0x1d7));
  if (puVar5 == *(undefined8 **)(param_1 + 0x4b8)) {
    FUN_180016ae0(plVar1,puVar5,(undefined8 *)&local_88);
  }
  else {
    *puVar5 = CONCAT17(uStack_81,
                       CONCAT16(uStack_82,
                                CONCAT15(cStack_83,
                                         CONCAT14(uStack_84,
                                                  CONCAT13(uStack_85,CONCAT12(uStack_86,local_88))))
                               ));
    puVar5[1] = CONCAT53(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_80)));
    puVar5[2] = CONCAT53(uStack_75,CONCAT12(uStack_76,local_78));
    puVar5[3] = CONCAT53(uStack_6d,uStack_70);
    puVar5[4] = CONCAT53(uStack_65,local_68);
    puVar5[5] = CONCAT53(uStack_5d,uStack_60);
    puVar5[6] = CONCAT53(uStack_55,local_58);
    puVar5[7] = uStack_50;
    *(undefined2 *)(puVar5 + 8) = local_48;
    *(longlong *)(param_1 + 0x4b0) = *(longlong *)(param_1 + 0x4b0) + 0x42;
  }
  uVar4 = 0;
  uVar2 = *(uint *)(param_2 + 8);
  iVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_2 + 0x21e),
                                     *(undefined1 *)(param_2 + 0x21f)),
                            *(undefined1 *)(param_2 + 0x220)),*(undefined1 *)(param_2 + 0x221));
  if (uVar2 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x4b0);
    do {
      uStack_76 = 0;
      uStack_86 = *(undefined1 *)(param_2 + 0x219);
      uStack_7d = 0;
      local_78 = 0;
      uStack_85 = 0xb1;
      uStack_75 = (undefined5)_DAT_18001c740;
      uStack_70 = (undefined3)((ulonglong)_DAT_18001c740 >> 0x28);
      uStack_6d = (undefined5)_UNK_18001c748;
      local_68 = (undefined3)((ulonglong)_UNK_18001c748 >> 0x28);
      if (uVar4 + 0x20 < uVar2) {
        uStack_84 = 0xc0;
        cStack_83 = ' ';
        bVar3 = 0x20;
      }
      else {
        cStack_83 = (char)uVar2 - (char)uVar4;
        uStack_84 = 0xc1;
        bVar3 = (char)uVar2 - (char)uVar4;
      }
      uStack_81 = (undefined1)((uint)iVar7 >> 0x18);
      uStack_80 = (undefined1)((uint)iVar7 >> 0x10);
      uStack_7f = (undefined1)((uint)iVar7 >> 8);
      uStack_82 = 0;
      uStack_7e = (undefined1)iVar7;
      uStack_65 = uStack_75;
      uStack_60 = uStack_70;
      uStack_5d = uStack_6d;
      local_58 = local_68;
      memcpy(&uStack_75,(void *)((ulonglong)(uVar4 + 0x2000) + param_2),(ulonglong)bVar3);
      iVar7 = iVar7 + 0x20;
      local_88 = 0x100;
      uVar4 = uVar4 + 0x20;
      if (puVar6 == *(undefined8 **)(param_1 + 0x4b8)) {
        FUN_180016ae0(plVar1,puVar6,(undefined8 *)&local_88);
      }
      else {
        *puVar6 = CONCAT17(uStack_81,
                           CONCAT16(uStack_82,
                                    CONCAT15(cStack_83,
                                             CONCAT14(uStack_84,
                                                      CONCAT13(uStack_85,CONCAT12(uStack_86,0x100)))
                                            )));
        puVar6[1] = CONCAT53(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_80)));
        puVar6[2] = CONCAT53(uStack_75,CONCAT12(uStack_76,local_78));
        puVar6[3] = CONCAT53(uStack_6d,uStack_70);
        puVar6[4] = CONCAT53(uStack_65,local_68);
        puVar6[5] = CONCAT53(uStack_5d,uStack_60);
        puVar6[6] = CONCAT53(uStack_55,local_58);
        puVar6[7] = uStack_50;
        *(undefined2 *)(puVar6 + 8) = local_48;
        *(longlong *)(param_1 + 0x4b0) = *(longlong *)(param_1 + 0x4b0) + 0x42;
      }
      uVar2 = *(uint *)(param_2 + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x4b0);
    } while (uVar4 < uVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x4b0) + -0x42) = 1;
  return;
}



// FUNCTION 180014a90 FUN_180014a90
// THUNK false
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180014a90(undefined8 *param_1)

{
  byte bVar1;
  undefined1 auStack_38 [32];
  undefined2 local_18;
  uint6 uStack_16;
  ulonglong local_10;
  
  local_10 = DAT_180023010 ^ (ulonglong)auStack_38;
  bVar1 = (byte)((*(int *)((longlong)param_1 + 0x49c) * 100) / *(int *)(param_1 + 0x94));
  if (*(byte *)((longlong)param_1 + 0xc) != bVar1) {
    *(byte *)((longlong)param_1 + 0xc) = bVar1;
    if (99 < bVar1) {
      bVar1 = 100;
    }
    _local_18 = CONCAT62((uint6)bVar1,0x107);
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(&local_18,8);
    }
  }
  return;
}



// FUNCTION 180014b10 FUN_180014b10
// THUNK false
// CALLS EXTERNAL:0000005b HidD_SetFeature
// CALLS 180012820 FUN_180012820
// CALLS 180001740 FUN_180001740
// CALLS 180001390 FUN_180001390
// CALLS EXTERNAL:0000000c WriteFile
// CALLS 180014810 FUN_180014810
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000001 CancelIo
// CALLS 180004fa0 FUN_180004fa0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS EXTERNAL:0000000e CreateEventW
// CALLS 1800128d0 FUN_1800128d0
// CALLS 180004160 FUN_180004160
// CALLS EXTERNAL:0000000d ReadFile
// CALLS 18000f050 FUN_18000f050
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS EXTERNAL:00000009 WaitForSingleObject
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 180004a60 FUN_180004a60
// CALLS 1800046c0 FUN_1800046c0
// CALLS 1800049d0 FUN_1800049d0
// CALLS 180002e80 FUN_180002e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool FUN_180014b10(undefined8 *param_1,byte param_2,undefined8 param_3,longlong *param_4)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  DWORD DVar6;
  ULONGLONG UVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  LPCWSTR pWVar11;
  HANDLE hFile;
  HANDLE hFile_00;
  undefined8 *puVar12;
  byte bVar13;
  _OVERLAPPED *p_Var14;
  wchar_t *******pppppppwVar15;
  wchar_t ********ppppppppwVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  HANDLE pvVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  HANDLE pvVar25;
  short *psVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStackY_1d8 [32];
  wchar_t *******local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 local_188 [4];
  undefined8 local_168 [4];
  _OVERLAPPED local_148;
  longlong *local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *local_110;
  longlong *plStack_108;
  longlong local_100;
  DWORD local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8 [5];
  short local_c0 [24];
  short local_90 [4];
  char local_88 [16];
  char local_78;
  ulonglong local_48;
  
  local_48 = DAT_180023010 ^ (ulonglong)auStackY_1d8;
  iVar27 = 0;
  local_f8[1] = 0;
  local_f8[0] = 0;
  local_110 = (longlong *)0x0;
  plStack_108 = (longlong *)0x0;
  local_100 = 0;
  local_128 = (longlong *)0x0;
  plStack_120 = (longlong *)0x0;
  local_118 = 0;
  UVar7 = GetTickCount64();
  iVar2 = *(int *)(param_1 + 1);
  puVar8 = FUN_180001390(&local_1a8,(uint)param_2);
  p_Var14 = &local_148;
  plVar9 = FUN_1800046c0(&p_Var14->Internal,(undefined8 *)L"Start ResetToBootMode-waitNormal-",
                         puVar8,param_4);
  FUN_180001740(p_Var14,plVar9);
  iVar23 = iVar27;
  iVar22 = iVar27;
  if (7 < local_190) {
    pppppppwVar15 = local_1a8;
    if ((0xfff < local_190 * 2 + 2) &&
       (pppppppwVar15 = (wchar_t *******)local_1a8[-1],
       0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppppwVar15)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppppwVar15);
  }
  while( true ) {
    do {
      UVar10 = GetTickCount64();
      if ((UVar7 < UVar10) && (9 < UVar10 - UVar7)) {
        UVar7 = GetTickCount64();
        iVar23 = iVar23 + 1;
        *(int *)((longlong)param_1 + 0x49c) = *(int *)((longlong)param_1 + 0x49c) + 1;
        bVar13 = (byte)((*(int *)((longlong)param_1 + 0x49c) * 100) / *(int *)(param_1 + 0x94));
        if (*(byte *)((longlong)param_1 + 0xc) != bVar13) {
          *(byte *)((longlong)param_1 + 0xc) = bVar13;
          if (99 < bVar13) {
            bVar13 = 100;
          }
          local_f0 = (ulonglong)CONCAT12(bVar13,0x107);
          if ((code *)*param_1 != (code *)0x0) {
            (*(code *)*param_1)(&local_f0,8);
          }
        }
      }
    } while ((iVar23 < 0x15) && (param_2 != 0));
    if (iVar2 / 200 < iVar22 + 1) {
      puVar12 = FUN_180001390(&local_1a8,iVar2 / 200);
      puVar8 = local_e8;
      plVar9 = FUN_1800046c0(puVar8,(undefined8 *)L"ResetToBootMode-TimeOut-",puVar12,param_4);
      FUN_180001740(puVar8,plVar9);
      if (7 < local_190) {
        pppppppwVar15 = local_1a8;
        if ((0xfff < local_190 * 2 + 2) &&
           (pppppppwVar15 = (wchar_t *******)local_1a8[-1],
           0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppppwVar15)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppppppwVar15);
      }
      local_f0 = 0x1060207;
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(&local_f0,8);
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1800049d0(local_128,plStack_120);
        plVar9 = local_128;
        if ((0xfff < (local_118 - (longlong)local_128 & 0xffffffffffffffe0U)) &&
           (plVar9 = (longlong *)local_128[-1],
           0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)plVar9)))) goto LAB_1800156a6;
        free(plVar9);
        local_128 = (longlong *)0x0;
        plStack_120 = (longlong *)0x0;
        local_118 = 0;
      }
      if (local_110 == (longlong *)0x0) {
        return false;
      }
      FUN_1800049d0(local_110,plStack_108);
      plVar9 = local_110;
      if (((local_100 - (longlong)local_110 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar9 = (longlong *)local_110[-1],
         (ulonglong)((longlong)local_110 + (-8 - (longlong)plVar9)) < 0x20)) goto LAB_180015014;
      goto LAB_18001570c;
    }
    UsbFinder_FindHidDevicesByKey(param_1 + 0x6f,(longlong *)&local_110);
    UsbFinder_FindHidDevicesByKey(param_1 + 0x73,(longlong *)&local_128);
    uVar24 = (longlong)plStack_108 - (longlong)local_110 >> 5;
    if (uVar24 == 1) break;
    if ((uVar24 != 0) || (0x1f < (ulonglong)((longlong)plStack_120 - (longlong)local_128))) {
LAB_180014db2:
      psVar26 = local_c0 + 1;
      do {
        psVar26 = psVar26 + -1;
        uVar19 = uVar24 / 10;
        *psVar26 = (short)uVar24 + (short)uVar19 * -10 + 0x30;
        uVar24 = uVar19;
      } while (uVar19 != 0);
      FUN_180004fa0(&local_1a8,psVar26,local_c0 + 1);
      p_Var14 = &local_148;
      plVar9 = FUN_1800046c0(&p_Var14->Internal,
                             (undefined8 *)L"ResetToBootMode-Found Multi Devices-input Size =",
                             &local_1a8,psVar26);
      FUN_180001740(p_Var14,plVar9);
      if (7 < local_190) {
        pppppppwVar15 = local_1a8;
        if ((0xfff < local_190 * 2 + 2) &&
           (pppppppwVar15 = (wchar_t *******)local_1a8[-1],
           0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppppwVar15)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppppppwVar15);
      }
      psVar26 = local_c0 + 1;
      uVar24 = (longlong)plStack_120 - (longlong)local_128 >> 5;
      do {
        psVar26 = psVar26 + -1;
        uVar19 = uVar24 / 10;
        *psVar26 = (short)uVar24 + (short)uVar19 * -10 + 0x30;
        uVar24 = uVar19;
      } while (uVar19 != 0);
      FUN_180004fa0(&local_1a8,psVar26,local_c0 + 1);
      p_Var14 = &local_148;
      plVar9 = FUN_1800046c0(&p_Var14->Internal,
                             (undefined8 *)L"ResetToBootMode-Found Multi Devices-output Size =",
                             &local_1a8,psVar26);
      FUN_180001740(p_Var14,plVar9);
      if (7 < local_190) {
        pppppppwVar15 = local_1a8;
        if ((0xfff < local_190 * 2 + 2) &&
           (pppppppwVar15 = (wchar_t *******)local_1a8[-1],
           0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppppwVar15)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pppppppwVar15);
      }
      local_f0._0_4_ = CONCAT13((char)((longlong)plStack_108 - (longlong)local_110 >> 5),0x40207);
      local_f0._0_5_ =
           CONCAT14((char)((longlong)plStack_120 - (longlong)local_128 >> 5),(undefined4)local_f0);
      local_f0 = (ulonglong)(uint5)local_f0;
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(&local_f0,8);
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1800049d0(local_128,plStack_120);
        plVar9 = local_128;
        if ((0xfff < (local_118 - (longlong)local_128 & 0xffffffffffffffe0U)) &&
           (plVar9 = (longlong *)local_128[-1],
           0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)plVar9)))) goto LAB_1800156a6;
        free(plVar9);
        local_128 = (longlong *)0x0;
        plStack_120 = (longlong *)0x0;
        local_118 = 0;
      }
      if (local_110 == (longlong *)0x0) {
        return false;
      }
      FUN_1800049d0(local_110,plStack_108);
      plVar9 = local_110;
      if ((0xfff < (local_100 - (longlong)local_110 & 0xffffffffffffffe0U)) &&
         (plVar9 = (longlong *)local_110[-1],
         0x1f < (ulonglong)((longlong)local_110 + (-8 - local_110[-1])))) goto LAB_18001570c;
LAB_180015014:
      free(plVar9);
      return false;
    }
    param_4 = local_110;
    iVar23 = iVar27;
    iVar22 = iVar22 + 1;
    if (param_2 == 0) {
      if (local_128 != (longlong *)0x0) {
        FUN_1800049d0(local_128,plStack_120);
        plVar9 = local_128;
        if ((0xfff < (local_118 - (longlong)local_128 & 0xffffffffffffffe0U)) &&
           (plVar9 = (longlong *)local_128[-1],
           0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)plVar9)))) {
LAB_1800156a6:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(plVar9);
        local_128 = (longlong *)0x0;
        plStack_120 = (longlong *)0x0;
        local_118 = 0;
      }
      if (local_110 != (longlong *)0x0) {
        FUN_1800049d0(local_110,plStack_108);
        plVar9 = local_110;
        if ((0xfff < (local_100 - (longlong)local_110 & 0xffffffffffffffe0U)) &&
           (plVar9 = (longlong *)local_110[-1],
           0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)plVar9)))) {
LAB_18001570c:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(plVar9);
      }
      return true;
    }
  }
  if ((longlong)plStack_120 - (longlong)local_128 >> 5 != 1) goto LAB_180014db2;
  pWVar11 = (LPCWSTR)FUN_180004160(local_188,local_128);
  hFile = FUN_180012820(pWVar11);
  pWVar11 = (LPCWSTR)FUN_180004160(local_168,local_110);
  hFile_00 = FUN_1800128d0(pWVar11);
  psVar26 = local_90 + 1;
  pvVar25 = hFile;
  do {
    psVar26 = psVar26 + -1;
    pvVar20 = (HANDLE)((ulonglong)pvVar25 / 10);
    *psVar26 = (short)pvVar25 + (short)pvVar20 * -10 + 0x30;
    pvVar25 = pvVar20;
  } while (pvVar20 != (HANDLE)0x0);
  FUN_180004fa0(&local_1a8,psVar26,local_90 + 1);
  puVar8 = local_e8;
  plVar9 = FUN_1800046c0(puVar8,(undefined8 *)L"ResetToBootMode-hDeviceWrite =",&local_1a8,psVar26);
  FUN_180001740(puVar8,plVar9);
  if (7 < local_190) {
    pppppppwVar15 = local_1a8;
    if ((0xfff < local_190 * 2 + 2) &&
       (pppppppwVar15 = (wchar_t *******)local_1a8[-1],
       0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppppwVar15)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppppwVar15);
  }
  psVar26 = local_90 + 1;
  pvVar25 = hFile_00;
  do {
    psVar26 = psVar26 + -1;
    pvVar20 = (HANDLE)((ulonglong)pvVar25 / 10);
    *psVar26 = (short)pvVar25 + (short)pvVar20 * -10 + 0x30;
    pvVar25 = pvVar20;
  } while (pvVar20 != (HANDLE)0x0);
  FUN_180004fa0(&local_1a8,psVar26,local_90 + 1);
  puVar8 = local_e8;
  plVar9 = FUN_1800046c0(puVar8,(undefined8 *)L"ResetToBootMode-hDeviceRead =",&local_1a8,psVar26);
  FUN_180001740(puVar8,plVar9);
  if (7 < local_190) {
    pppppppwVar15 = local_1a8;
    if ((0xfff < local_190 * 2 + 2) &&
       (pppppppwVar15 = (wchar_t *******)local_1a8[-1],
       0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppppppwVar15)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppppppwVar15);
  }
  pbVar1 = (byte *)((longlong)param_1 + 0x1b7);
  local_148.Internal = 0;
  local_148.InternalHigh = 0;
  local_148.u.Pointer = (PVOID)0x0;
  local_148.hEvent = (HANDLE)0x0;
  local_148.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if (local_148.hEvent == (HANDLE)0x0) {
    local_1a8 = (wchar_t *******)0x0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    ppppppppwVar16 = &local_1a8;
    FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-osReader.hEvent = 0",0x23);
    FUN_180001740(ppppppppwVar16,(longlong *)&local_1a8);
  }
  ReadFile(hFile_00,local_88,(uint)*pbVar1,local_f8 + 1,&local_148);
  local_1a8 = (wchar_t *******)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  ppppppppwVar16 = &local_1a8;
  FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-Write data:",0x1b);
  FUN_180002e80(ppppppppwVar16,(longlong *)&local_1a8,(longlong)pbVar1);
  if (*(char *)(param_1 + 0x37) == '\0') {
    BVar5 = WriteFile(hFile,(LPCVOID)((longlong)param_1 + 0x1b9),(uint)*pbVar1,local_f8,
                      (LPOVERLAPPED)0x0);
    bVar28 = BVar5 == 0;
  }
  else {
    cVar4 = HidD_SetFeature();
    bVar28 = cVar4 == '\0';
  }
  bVar28 = !bVar28;
  if ((!bVar28) || (local_148.hEvent == (HANDLE)0x0)) {
    local_1a8 = (wchar_t *******)0x0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    ppppppppwVar16 = &local_1a8;
    FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-Write Usb Error",0x1f);
    FUN_180001740(ppppppppwVar16,(longlong *)&local_1a8);
    local_f0._0_4_ = CONCAT13(bVar28,0x80207);
    local_f0._0_5_ = CONCAT14(local_148.hEvent != (HANDLE)0x0,(undefined4)local_f0);
    local_f0 = (ulonglong)(uint5)local_f0;
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(&local_f0,8);
    }
    bVar28 = false;
    goto LAB_1800154e8;
  }
  if (*(char *)((longlong)param_1 + 0x1be) == '\0') {
    local_1a8 = (wchar_t *******)0x0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    ppppppppwVar16 = &local_1a8;
    FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-Write data success",0x22);
    FUN_180001740(ppppppppwVar16,(longlong *)&local_1a8);
    FUN_180014810(param_1,3,0x11,2,0);
    goto LAB_1800154e8;
  }
  UVar7 = GetTickCount64();
  local_1a8 = (wchar_t *******)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  ppppppppwVar16 = &local_1a8;
  FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-Write data success-Wait Usb",0x2b);
  FUN_180001740(ppppppppwVar16,(longlong *)&local_1a8);
  do {
    DVar6 = WaitForSingleObject(local_148.hEvent,100);
    if ((DVar6 == 0) && (cVar4 = FUN_18000f050((longlong)local_88,0,0x10), local_78 == cVar4)) {
      if ((ulonglong)*pbVar1 != 0) {
        lVar21 = 0;
        do {
          bVar3 = false;
          if ((local_88 + lVar21)[(longlong)(pbVar1 + (2 - (longlong)local_88))] != local_88[lVar21]
             ) goto LAB_18001538e;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (longlong)(ulonglong)*pbVar1);
      }
      bVar3 = true;
LAB_18001538e:
      if (!bVar3) goto LAB_180015392;
      local_1a8 = (wchar_t *******)0x0;
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      ppppppppwVar16 = &local_1a8;
      FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-Device Respone Success",0x26);
      FUN_180001740(ppppppppwVar16,(longlong *)&local_1a8);
      uVar17 = 3;
      uVar18 = 0x11;
      goto LAB_1800153e4;
    }
LAB_180015392:
    UVar10 = GetTickCount64();
  } while ((UVar10 <= UVar7) || (UVar10 - UVar7 < 1000));
  bVar28 = false;
  local_1a8 = (wchar_t *******)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  ppppppppwVar16 = &local_1a8;
  FUN_180004a60(ppppppppwVar16,L"ResetToBootMode-Timer Out Error",0x1f);
  FUN_180001740(ppppppppwVar16,(longlong *)&local_1a8);
  uVar17 = 2;
  uVar18 = 2;
LAB_1800153e4:
  FUN_180014810(param_1,uVar17,uVar18,1,0);
LAB_1800154e8:
  if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
    CancelIo(hFile);
    CloseHandle(hFile);
  }
  if ((longlong)hFile_00 - 1U < 0xfffffffffffffffe) {
    CancelIo(hFile_00);
    CloseHandle(hFile_00);
  }
  if (local_128 != (longlong *)0x0) {
    FUN_1800049d0(local_128,plStack_120);
    plVar9 = local_128;
    if ((0xfff < (local_118 - (longlong)local_128 & 0xffffffffffffffe0U)) &&
       (plVar9 = (longlong *)local_128[-1],
       0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)plVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar9);
    local_128 = (longlong *)0x0;
    plStack_120 = (longlong *)0x0;
    local_118 = 0;
  }
  if (local_110 == (longlong *)0x0) {
    return bVar28;
  }
  FUN_1800049d0(local_110,plStack_108);
  plVar9 = local_110;
  if ((0xfff < (local_100 - (longlong)local_110 & 0xffffffffffffffe0U)) &&
     (plVar9 = (longlong *)local_110[-1],
     0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)plVar9)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(plVar9);
  return bVar28;
}



// FUNCTION 180015720 FUN_180015720
// THUNK false
// CALLS 180001740 FUN_180001740
// CALLS 180001390 FUN_180001390
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS 1800187f0 free
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 180004a60 FUN_180004a60
// CALLS 1800046c0 FUN_1800046c0
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180015720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  ULONGLONG UVar3;
  ULONGLONG UVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  void **ppvVar8;
  undefined8 *puVar9;
  void *_Memory;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88 [4];
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  longlong *plStack_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180023010 ^ (ulonglong)auStack_c8;
  uVar12 = 0;
  local_50 = (longlong *)0x0;
  plStack_48 = (longlong *)0x0;
  iVar13 = 0;
  local_40 = 0;
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  UVar3 = GetTickCount64();
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  ppvVar8 = &local_a8;
  FUN_180004a60(ppvVar8,L"Start WaitBootMode",0x12);
  FUN_180001740(ppvVar8,(longlong *)&local_a8);
  iVar1 = *(int *)(param_1 + 1);
  iVar10 = iVar13;
  iVar11 = iVar13;
  while( true ) {
    do {
      UVar4 = GetTickCount64();
      if ((UVar3 < UVar4) && (9 < UVar4 - UVar3)) {
        UVar3 = GetTickCount64();
        iVar13 = iVar13 + 1;
        *(int *)((longlong)param_1 + 0x49c) = *(int *)((longlong)param_1 + 0x49c) + 1;
        bVar2 = (byte)((*(int *)((longlong)param_1 + 0x49c) * 100) / *(int *)(param_1 + 0x94));
        if (*(byte *)((longlong)param_1 + 0xc) != bVar2) {
          *(byte *)((longlong)param_1 + 0xc) = bVar2;
          if (99 < bVar2) {
            bVar2 = 100;
          }
          local_38 = (ulonglong)CONCAT12(bVar2,0x107);
          if ((code *)*param_1 != (code *)0x0) {
            (*(code *)*param_1)(&local_38,8);
          }
        }
      }
    } while (iVar13 < 0x15);
    iVar13 = 0;
    iVar11 = iVar11 + 1;
    if (iVar1 / 200 < iVar11) break;
    UsbFinder_FindHidDevicesByKey(param_1 + 0x67,(longlong *)&local_50);
    UsbFinder_FindHidDevicesByKey(param_1 + 0x6b,(longlong *)&local_68);
    uVar5 = (longlong)plStack_48 - (longlong)local_50 >> 5;
    if (uVar5 != 1) {
      if (uVar5 < 2) goto LAB_18001592d;
LAB_180015941:
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      ppvVar8 = &local_a8;
      FUN_180004a60(ppvVar8,L"WaitBootMode-Multi Boot Device Error",0x24);
      FUN_180001740(ppvVar8,(longlong *)&local_a8);
      local_38 = (ulonglong)
                 CONCAT14((char)((longlong)plStack_60 - (longlong)local_68 >> 5),
                          CONCAT13((char)((longlong)plStack_48 - (longlong)local_50 >> 5),0x50207));
      goto LAB_180015a1a;
    }
    if ((longlong)plStack_60 - (longlong)local_68 >> 5 == 1) {
      iVar11 = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      ppvVar8 = &local_a8;
      FUN_180004a60(ppvVar8,L"WaitBootMode-Found one device-wait stable",0x29);
      FUN_180001740(ppvVar8,(longlong *)&local_a8);
      iVar10 = iVar10 + 1;
      if (2 < iVar10) {
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        ppvVar8 = &local_a8;
        FUN_180004a60(ppvVar8,L"WaitBootMode-usb stable",0x17);
        FUN_180001740(ppvVar8,(longlong *)&local_a8);
        local_38 = 0x2110307;
        if ((code *)*param_1 != (code *)0x0) {
          (*(code *)*param_1)(&local_38,8);
        }
        uVar12 = 1;
LAB_180015a2e:
        if (local_68 != (longlong *)0x0) {
          FUN_1800049d0(local_68,plStack_60);
          plVar7 = local_68;
          if ((0xfff < (local_58 - (longlong)local_68 & 0xffffffffffffffe0U)) &&
             (plVar7 = (longlong *)local_68[-1],
             0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)plVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(plVar7);
          local_68 = (longlong *)0x0;
          plStack_60 = (longlong *)0x0;
          local_58 = 0;
        }
        if (local_50 != (longlong *)0x0) {
          FUN_1800049d0(local_50,plStack_48);
          plVar7 = local_50;
          if ((0xfff < (local_40 - (longlong)local_50 & 0xffffffffffffffe0U)) &&
             (plVar7 = (longlong *)local_50[-1],
             0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)plVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(plVar7);
        }
        return uVar12;
      }
    }
    else {
LAB_18001592d:
      if (1 < (ulonglong)((longlong)plStack_60 - (longlong)local_68 >> 5)) goto LAB_180015941;
      iVar10 = 0;
    }
  }
  puVar6 = FUN_180001390(&local_a8,iVar1 / 200);
  puVar9 = local_88;
  plVar7 = FUN_1800046c0(puVar9,(undefined8 *)L"WaitBootMode-NotBootFoundDeviceError-TimeOut-",
                         puVar6,param_4);
  FUN_180001740(puVar9,plVar7);
  if (7 < local_90) {
    _Memory = local_a8;
    if ((0xfff < local_90 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_a8 + -8),
       0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_38 = 0x1070207;
LAB_180015a1a:
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(&local_38,8);
  }
  goto LAB_180015a2e;
}



// FUNCTION 180015b10 FUN_180015b10
// THUNK false
// CALLS EXTERNAL:0000005b HidD_SetFeature
// CALLS 180012820 FUN_180012820
// CALLS 1800187f0 free
// CALLS 180004c80 FUN_180004c80
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 180004160 FUN_180004160
// CALLS EXTERNAL:0000000d ReadFile
// CALLS 180016410 FUN_180016410
// CALLS EXTERNAL:00000002 CloseHandle
// CALLS EXTERNAL:00000019 GetTickCount64
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS EXTERNAL:00000018 ResetEvent
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800046c0 FUN_1800046c0
// CALLS 180001740 FUN_180001740
// CALLS EXTERNAL:0000000c WriteFile
// CALLS 180014810 FUN_180014810
// CALLS EXTERNAL:00000001 CancelIo
// CALLS 180004fa0 FUN_180004fa0
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:0000000e CreateEventW
// CALLS 1800128d0 FUN_1800128d0
// CALLS EXTERNAL:00000009 WaitForSingleObject
// CALLS 180004a60 FUN_180004a60
// CALLS 180016930 FUN_180016930
// CALLS 180002e80 FUN_180002e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180015b10(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  char cVar3;
  BOOL BVar4;
  DWORD DVar5;
  ULONGLONG UVar6;
  LPCWSTR pWVar7;
  HANDLE hFile;
  HANDLE hFile_00;
  undefined8 uVar8;
  ULONGLONG UVar9;
  undefined8 *puVar10;
  undefined4 extraout_var;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar11;
  wchar_t ********ppppppppwVar12;
  longlong *plVar13;
  wchar_t *******_Memory;
  void *pvVar14;
  HANDLE pvVar15;
  wchar_t *pwVar16;
  undefined8 *puVar17;
  HANDLE pvVar18;
  short *psVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStackY_248 [32];
  wchar_t *******local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined2 local_1f8;
  undefined6 uStack_1f6;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  void *local_1d8 [3];
  ulonglong local_1c0;
  longlong local_1b8 [4];
  undefined8 local_198 [4];
  undefined8 local_178 [4];
  _OVERLAPPED local_158;
  DWORD local_138 [2];
  longlong *local_130;
  longlong *plStack_128;
  longlong local_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong local_108;
  DWORD local_100 [2];
  undefined8 local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  short local_c8 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStackY_248;
  local_100[0] = 0;
  local_118 = (longlong *)0x0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  local_130 = (longlong *)0x0;
  plStack_128 = (longlong *)0x0;
  local_120 = 0;
  local_158.Internal = 0;
  local_158.InternalHigh = 0;
  local_158.u.Pointer = (PVOID)0x0;
  local_158.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  uVar20 = *(uint *)(param_1 + 1);
  UVar6 = GetTickCount64();
  UsbFinder_FindHidDevicesByKey(param_1 + 0x67,(longlong *)&local_118);
  UsbFinder_FindHidDevicesByKey(param_1 + 0x6b,(longlong *)&local_130);
  pWVar7 = (LPCWSTR)FUN_180004160(local_198,local_130);
  hFile = FUN_180012820(pWVar7);
  pWVar7 = (LPCWSTR)FUN_180004160(local_178,local_118);
  hFile_00 = FUN_1800128d0(pWVar7);
  if (((longlong)hFile - 1U < 0xfffffffffffffffe) && ((longlong)hFile_00 - 1U < 0xfffffffffffffffe))
  {
    ReadFile(hFile_00,&local_b8,(uint)*(byte *)((longlong)param_1 + 0x237),local_138,&local_158);
    local_218 = (wchar_t *******)0x0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    ppppppppwVar12 = &local_218;
    FUN_180004a60(ppppppppwVar12,L"Start DownloadFile",0x12);
    FUN_180001740(ppppppppwVar12,(longlong *)&local_218);
    param_1[3] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 2) = 0;
    do {
      lVar1 = param_1[0x95];
      if (((param_1[0x96] - lVar1 >> 1) * 0xf83e0f83e0f83e1 != 0) && (*(char *)(lVar1 + 1) != '\0'))
      {
        if (*(char *)(param_1 + 0x47) == '\0') {
          BVar4 = WriteFile(hFile,(LPCVOID)(lVar1 + 2),(uint)*(byte *)((longlong)param_1 + 0x237),
                            local_100,(LPOVERLAPPED)0x0);
          bVar21 = BVar4 != 0;
        }
        else {
          cVar3 = HidD_SetFeature();
          bVar21 = cVar3 != '\0';
        }
        if (bVar21) {
          *(undefined1 *)(param_1[0x95] + 1) = 0;
          uVar20 = *(uint *)(param_1 + 1);
          UVar6 = GetTickCount64();
          local_218 = (wchar_t *******)0x0;
          uStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          ppppppppwVar12 = &local_218;
          FUN_180004a60(ppppppppwVar12,L"Write Data Success:",0x13);
          FUN_180002e80(ppppppppwVar12,(longlong *)&local_218,param_1[0x95] + 2);
        }
        else {
          local_218 = (wchar_t *******)0x0;
          uStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          ppppppppwVar12 = &local_218;
          FUN_180004a60(ppppppppwVar12,L"Write Data Fail:",0x10);
          FUN_180002e80(ppppppppwVar12,(longlong *)&local_218,param_1[0x95] + 2);
        }
      }
      if ((local_158.hEvent != (HANDLE)0x0) &&
         (DVar5 = WaitForSingleObject(local_158.hEvent,0), DVar5 == 0)) {
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_48 = local_88;
        uStack_40 = uStack_80;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        ResetEvent(local_158.hEvent);
        ReadFile(hFile_00,&local_b8,(uint)*(byte *)((longlong)param_1 + 0x237),local_138,&local_158)
        ;
        uVar8 = FUN_180016410(param_1,&local_78);
        if ((char)uVar8 != '\0') {
          uVar11 = 1;
          ppppppppwVar12 = &local_218;
          local_218 = (wchar_t *******)0x0;
          uStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          if (*(char *)((longlong)param_1 + 0x499) == '\0') {
            FUN_180004a60(ppppppppwVar12,L"Upgrade One Device OK",0x15);
            FUN_180001740(ppppppppwVar12,(longlong *)&local_218);
          }
          else {
            FUN_180004a60(ppppppppwVar12,L"All Upgrade Success",0x13);
            FUN_180001740(ppppppppwVar12,(longlong *)&local_218);
            FUN_180014810(param_1,1,100,0,0);
            FUN_180014810(param_1,2,1,0,0);
          }
          goto LAB_180015eb8;
        }
      }
      UVar9 = GetTickCount64();
    } while ((UVar9 <= UVar6) || (UVar9 - UVar6 < (ulonglong)uVar20));
    uVar11 = 0;
    local_218 = (wchar_t *******)0x0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    ppppppppwVar12 = &local_218;
    FUN_180004a60(ppppppppwVar12,L"Upgrade Timeout",0xf);
    FUN_180001740(ppppppppwVar12,(longlong *)&local_218);
    local_f8 = 0x3020207;
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(&local_f8,8);
    }
LAB_180015eb8:
    CancelIo(hFile);
    CloseHandle(hFile);
    CancelIo(hFile_00);
    CloseHandle(hFile_00);
    if (local_130 != (longlong *)0x0) {
      FUN_1800049d0(local_130,plStack_128);
      plVar13 = local_130;
      if ((0xfff < (local_120 - (longlong)local_130 & 0xffffffffffffffe0U)) &&
         (plVar13 = (longlong *)local_130[-1],
         0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)plVar13)))) {
LAB_180016373:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(plVar13);
      local_130 = (longlong *)0x0;
      plStack_128 = (longlong *)0x0;
      local_120 = 0;
    }
    if (local_118 != (longlong *)0x0) {
      FUN_1800049d0(local_118,plStack_110);
      plVar13 = local_118;
      if ((0xfff < (local_108 - (longlong)local_118 & 0xffffffffffffffe0U)) &&
         (plVar13 = (longlong *)local_118[-1],
         0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)plVar13)))) {
LAB_1800163cd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(plVar13);
    }
  }
  else {
    psVar19 = local_c8 + 1;
    pvVar18 = hFile_00;
    do {
      psVar19 = psVar19 + -1;
      pvVar15 = (HANDLE)((ulonglong)pvVar18 / 10);
      *psVar19 = (short)pvVar18 + (short)pvVar15 * -10 + 0x30;
      pvVar18 = pvVar15;
    } while (pvVar15 != (HANDLE)0x0);
    FUN_180004fa0(local_1d8,psVar19,local_c8 + 1);
    psVar19 = (short *)((longlong)&uStack_50 + 2);
    pvVar18 = hFile;
    do {
      psVar19 = psVar19 + -1;
      pvVar15 = (HANDLE)((ulonglong)pvVar18 / 10);
      *psVar19 = (short)pvVar18 + (short)pvVar15 * -10 + 0x30;
      pvVar18 = pvVar15;
    } while (pvVar15 != (HANDLE)0x0);
    FUN_180004fa0(&local_218,psVar19,(void *)((longlong)&uStack_50 + 2));
    ppppppppwVar12 = &local_218;
    puVar10 = FUN_1800046c0((undefined8 *)&local_1f8,
                            (undefined8 *)L"DownloadFile-HANDLE Error,hDeviceWrite=",ppppppppwVar12,
                            psVar19);
    lVar1 = puVar10[2];
    if ((ulonglong)(puVar10[3] - lVar1) < 0xf) {
      pwVar16 = (wchar_t *)0xf;
      puVar10 = FUN_180004c80(puVar10,0xf,ppppppppwVar12,L"  hDeviceRead =",0xf);
    }
    else {
      puVar10[2] = lVar1 + 0xf;
      puVar17 = puVar10;
      if (7 < (ulonglong)puVar10[3]) {
        puVar17 = (undefined8 *)*puVar10;
      }
      pwVar16 = L"  hDeviceRead =";
      memmove((void *)((longlong)puVar17 + lVar1 * 2),L"  hDeviceRead =",0x1e);
      *(undefined2 *)((longlong)puVar17 + (lVar1 + 0xf) * 2) = 0;
    }
    local_f0 = (void *)*puVar10;
    uStack_e8 = puVar10[1];
    local_e0 = puVar10[2];
    uStack_d8 = puVar10[3];
    puVar10[2] = 0;
    puVar10[3] = 7;
    *(undefined2 *)puVar10 = 0;
    plVar13 = local_1b8;
    FUN_180016930(plVar13,pwVar16,&local_f0,local_1d8);
    FUN_180001740(plVar13,local_1b8);
    if (7 < uStack_d8) {
      pvVar14 = local_f0;
      if ((0xfff < uStack_d8 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_f0 + -8),
         0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    if (7 < uStack_1e0) {
      pvVar2 = (void *)CONCAT62(uStack_1f6,local_1f8);
      pvVar14 = pvVar2;
      if ((0xfff < uStack_1e0 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_1e8 = _DAT_18001c720;
    uStack_1e0 = _UNK_18001c728;
    local_1f8 = 0;
    if (7 < uStack_200) {
      _Memory = local_218;
      if ((0xfff < uStack_200 * 2 + 2) &&
         (_Memory = (wchar_t *******)local_218[-1],
         0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    local_208 = _DAT_18001c720;
    uStack_200 = _UNK_18001c728;
    local_218 = (wchar_t *******)((ulonglong)local_218 & 0xffffffffffff0000);
    if (7 < local_1c0) {
      pvVar14 = local_1d8[0];
      if ((0xfff < local_1c0 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_1d8[0] + -8),
         0x1f < (ulonglong)((longlong)local_1d8[0] + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_f8 = (ulonglong)
               CONCAT14((longlong)hFile_00 - 1U < 0xfffffffffffffffe,
                        CONCAT13((longlong)hFile - 1U < 0xfffffffffffffffe,0x90207));
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(&local_f8,8);
    }
    if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
      CancelIo(hFile);
      CloseHandle(hFile);
    }
    uVar11 = (longlong)hFile_00 - 1;
    if (uVar11 < 0xfffffffffffffffe) {
      CancelIo(hFile_00);
      BVar4 = CloseHandle(hFile_00);
      uVar11 = CONCAT44(extraout_var,BVar4);
    }
    if (local_130 != (longlong *)0x0) {
      FUN_1800049d0(local_130,plStack_128);
      plVar13 = local_130;
      if ((0xfff < (local_120 - (longlong)local_130 & 0xffffffffffffffe0U)) &&
         (plVar13 = (longlong *)local_130[-1],
         0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)plVar13)))) goto LAB_180016373;
      free(plVar13);
      local_130 = (longlong *)0x0;
      plStack_128 = (longlong *)0x0;
      local_120 = 0;
      uVar11 = extraout_RAX;
    }
    if (local_118 != (longlong *)0x0) {
      FUN_1800049d0(local_118,plStack_110);
      plVar13 = local_118;
      if ((0xfff < (local_108 - (longlong)local_118 & 0xffffffffffffffe0U)) &&
         (plVar13 = (longlong *)local_118[-1],
         0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)plVar13)))) goto LAB_1800163cd;
      free(plVar13);
      uVar11 = extraout_RAX_00;
    }
    uVar11 = uVar11 & 0xffffffffffffff00;
  }
  return uVar11;
}



// FUNCTION 180016410 FUN_180016410
// THUNK false
// CALLS 180001740 FUN_180001740
// CALLS 180014a90 FUN_180014a90
// CALLS 180014810 FUN_180014810
// CALLS 180004a60 FUN_180004a60
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS 180002e80 FUN_180002e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180016410(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  wchar_t ********ppppppppwVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  wchar_t *******local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_c8;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  iVar5 = 0;
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  local_48 = param_2[4];
  uStack_40 = param_2[5];
  ppppppppwVar3 = &local_98;
  local_38 = param_2[6];
  uStack_30 = param_2[7];
  local_98 = (wchar_t *******)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_180004a60(ppppppppwVar3,L"Received Data:",0xe);
  FUN_180002e80(ppppppppwVar3,(longlong *)&local_98,(longlong)param_2);
  cVar1 = *(char *)((longlong)param_2 + 1);
  if (cVar1 == -0x50) {
    local_78[0] = 0x3100307;
    if ((code *)*param_1 == (code *)0x0) {
      return 0;
    }
    (*(code *)*param_1)(local_78,8);
    return 0;
  }
  if (cVar1 == '[') {
    if (*(char *)((longlong)param_2 + 2) == -0x4b) {
      local_78[0] = CONCAT62((uint6)*(ushort *)((longlong)param_2 + 3),0x307);
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(local_78,8);
      }
      cVar1 = *(char *)((longlong)param_2 + 3);
      if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
        if (cVar1 != -0x78) {
          return 0;
        }
        return 1;
      }
      if (*(char *)((longlong)param_2 + 4) != '\x01') {
        return 0;
      }
      pvVar2 = (void *)param_1[0x95];
      if ((param_1[0x96] - (longlong)pvVar2 >> 1) * 0xf83e0f83e0f83e1 == 0) {
        return 0;
      }
      memmove(pvVar2,(void *)((longlong)pvVar2 + 0x42),param_1[0x96] - ((longlong)pvVar2 + 0x42));
      param_1[0x96] = param_1[0x96] + -0x42;
      return 0;
    }
  }
  else {
    if (cVar1 == -0x4f) {
      iVar7 = *(byte *)((longlong)param_1 + 0x237) - 1;
      if (0 < iVar7) {
        pcVar6 = (char *)((longlong)&local_68 + 1);
        pcVar4 = (char *)(param_1[0x95] + 3);
        do {
          if (*pcVar6 != *pcVar4) {
            *(undefined1 *)(param_1[0x95] + 1) = 1;
            if (param_1[3] != ((longlong)(param_1[0x96] - param_1[0x95]) >> 1) * 0xf83e0f83e0f83e1)
            {
              *(undefined4 *)(param_1 + 2) = 0;
              param_1[3] = ((longlong)(param_1[0x96] - param_1[0x95]) >> 1) * 0xf83e0f83e0f83e1;
              FUN_180014a90(param_1);
              return 0;
            }
            iVar5 = *(int *)(param_1 + 2);
            *(int *)(param_1 + 2) = iVar5 + 1;
            if (8 < iVar5 + 1) {
              local_88 = 0;
              local_80 = 0;
              ppppppppwVar3 = &local_98;
              local_98 = (wchar_t *******)0x0;
              uStack_90 = 0;
              FUN_180004a60(ppppppppwVar3,L"Repeat timeout",0xe);
              FUN_180001740(ppppppppwVar3,(longlong *)&local_98);
              *(undefined1 *)(param_1[0x95] + 1) = 0;
              FUN_180014a90(param_1);
              return 0;
            }
            goto LAB_1800165e3;
          }
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
        } while (iVar5 < iVar7);
      }
      *(int *)((longlong)param_1 + 0x49c) = *(int *)((longlong)param_1 + 0x49c) + 1;
      pvVar2 = (void *)((longlong)param_1[0x95] + 0x42);
      memmove((void *)param_1[0x95],pvVar2,param_1[0x96] - (longlong)pvVar2);
      param_1[0x96] = param_1[0x96] + -0x42;
LAB_1800165e3:
      FUN_180014a90(param_1);
      return 0;
    }
    if (cVar1 != 'Z') {
      return 0;
    }
    if (*(char *)((longlong)param_2 + 2) == -0x5b) {
      FUN_180014810(param_1,2,10,*(undefined1 *)((longlong)param_2 + 3),0);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1800166f0 FUN_1800166f0
// THUNK false
// CALLS 1800187f0 free
// CALLS 180016f40 FUN_180016f40
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 180013e10 FUN_180013e10
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800166f0(undefined8 param_1,int *param_2,longlong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  void *_Memory;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = _DAT_18001c720;
  uStack_20 = _UNK_18001c728;
  local_38 = (void *)0x0;
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)param_3[1]) {
    FUN_1800049d0(plVar2,(longlong *)param_3[1]);
    param_3[1] = *param_3;
  }
  bVar1 = FUN_180013e10(plVar2,param_2);
  if (bVar1) {
    FUN_180016f40((LPCSTR)((longlong)param_2 + 0x97),(longlong *)&local_38);
    UsbFinder_FindHidDevicesByKey(&local_38,param_3);
  }
  if (7 < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return;
}



// FUNCTION 1800167d0 FUN_1800167d0
// THUNK false
// CALLS 1800187f0 free
// CALLS 18000ade0 UsbFinder_FindHidDevicesByKey
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800167d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  longlong *plStack_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_38 = 0;
  local_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  UsbFinder_FindHidDevicesByKey((undefined8 *)(param_1 + 0x378),(longlong *)&local_30);
  UsbFinder_FindHidDevicesByKey((undefined8 *)(param_1 + 0x398),(longlong *)&local_48);
  if ((((longlong)plStack_28 - (longlong)local_30 & 0xffffffffffffffe0U) == 0x20) &&
     (((longlong)plStack_40 - (longlong)local_48 & 0xffffffffffffffe0U) == 0x20)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1800049d0(local_48,plStack_40);
    plVar1 = local_48;
    if ((0xfff < (local_38 - (longlong)local_48 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_48[-1],
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)plVar1)))) goto LAB_180016904;
    free(plVar1);
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    local_38 = 0;
  }
  if (local_30 != (longlong *)0x0) {
    FUN_1800049d0(local_30,plStack_28);
    plVar1 = local_30;
    if ((0xfff < (local_20 - (longlong)local_30 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)local_30[-1],
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)plVar1)))) {
LAB_180016904:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar1);
  }
  return uVar2;
}



// FUNCTION 180016930 FUN_180016930
// THUNK false
// CALLS 180019703 memcpy
// CALLS 180001370 FUN_180001370
// CALLS 180019709 memmove
// CALLS 180004ec0 FUN_180004ec0

undefined8 *
FUN_180016930(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar3 + uVar2;
  if ((param_3[3] - uVar2 < uVar3) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    uVar8 = param_4[3] - uVar3;
    if (uVar8 < uVar2) {
      if (0x7ffffffffffffffe - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180001370();
      }
      uVar6 = uVar1 | 7;
      uVar9 = 0x7ffffffffffffffe;
      if ((uVar6 < 0x7fffffffffffffff) && (uVar8 = 10, uVar9 = uVar6, uVar6 < 10)) {
        uVar9 = 10;
      }
      pvVar7 = (void *)FUN_180004ec0(uVar8,uVar9 + 1);
      *param_1 = pvVar7;
      param_1[2] = uVar1;
      param_1[3] = uVar9;
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      memcpy(pvVar7,param_3,uVar2 * 2);
      if (7 < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      memcpy((void *)(uVar2 * 2 + (longlong)pvVar7),param_4,uVar3 * 2 + 2);
    }
    else {
      uVar4 = param_4[1];
      *param_1 = *param_4;
      param_1[1] = uVar4;
      uVar4 = param_4[3];
      param_1[2] = param_4[2];
      param_1[3] = uVar4;
      param_4[2] = 0;
      *(undefined2 *)param_4 = 0;
      param_4[3] = 7;
      pvVar7 = (void *)*param_1;
      memmove((void *)(uVar2 * 2 + (longlong)pvVar7),pvVar7,uVar3 * 2 + 2);
      if (7 < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      memcpy(pvVar7,param_3,uVar2 * 2);
      param_1[2] = uVar1;
    }
  }
  else {
    uVar4 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar4;
    uVar4 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar4;
    param_3[2] = 0;
    param_3[3] = 7;
    *(undefined2 *)param_3 = 0;
    puVar5 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    memcpy((void *)((longlong)puVar5 + uVar2 * 2),param_4,uVar3 * 2 + 2);
    param_1[2] = uVar1;
  }
  return param_1;
}



// FUNCTION 180016ae0 FUN_180016ae0
// THUNK false
// CALLS 180013da0 FUN_180013da0
// CALLS 1800187f0 free
// CALLS 180019709 memmove
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn
// CALLS 1800055f0 FUN_1800055f0

undefined8 * FUN_180016ae0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  void *_Dst;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  size_t _Size;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar1 = *param_1;
  lVar9 = (param_1[1] - lVar1 >> 1) * 0xf83e0f83e0f83e1;
  if (lVar9 == 0x3e0f83e0f83e0f8) {
                    /* WARNING: Subroutine does not return */
    FUN_1800055f0();
  }
  uVar10 = lVar9 + 1;
  uVar5 = (param_1[2] - lVar1 >> 1) * 0xf83e0f83e0f83e1;
  uVar4 = 0x3e0f83e0f83e0f8 - (uVar5 >> 1);
  uVar8 = 0x3e0f83e0f83e0f8;
  if ((uVar5 < uVar4 || uVar5 - uVar4 == 0) && (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar10)) {
    uVar8 = uVar10;
  }
  _Dst = (void *)FUN_180013da0(uVar5,uVar8);
  uVar3 = param_3[1];
  puVar7 = (undefined8 *)((((longlong)param_2 - lVar1) / 0x42) * 0x42 + (longlong)_Dst);
  *puVar7 = *param_3;
  puVar7[1] = uVar3;
  uVar3 = param_3[3];
  puVar7[2] = param_3[2];
  puVar7[3] = uVar3;
  uVar3 = param_3[5];
  puVar7[4] = param_3[4];
  puVar7[5] = uVar3;
  uVar3 = param_3[7];
  puVar7[6] = param_3[6];
  puVar7[7] = uVar3;
  *(undefined2 *)(puVar7 + 8) = *(undefined2 *)(param_3 + 8);
  pvVar2 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar2;
    pvVar6 = _Dst;
    param_2 = pvVar2;
  }
  else {
    memmove(_Dst,pvVar2,(longlong)param_2 - (longlong)pvVar2);
    pvVar6 = (void *)((longlong)puVar7 + 0x42);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar6,param_2,_Size);
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar6 = pvVar2;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 1) * 2)) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar6);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(uVar10 * 0x42 + (longlong)_Dst);
  param_1[2] = (longlong)(uVar8 * 0x42 + (longlong)_Dst);
  return puVar7;
}



// FUNCTION 180016c70 FUN_180016c70
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180016c70(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  char *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_48;
  local_20 = 1;
  *param_1 = std::exception::vftable;
  local_28 = "bad conversion";
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(&local_28);
  *param_1 = std::range_error::vftable;
  return param_1;
}



// FUNCTION 180016ce0 FUN_180016ce0
// THUNK false
// CALLS 1800195a2 _CxxThrowException
// CALLS 180016c70 FUN_180016c70

void FUN_180016ce0(void)

{
  undefined8 local_28 [5];
  
  FUN_180016c70(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001f300);
}



// FUNCTION 180016d00 FUN_180016d00
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy

undefined8 * FUN_180016d00(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::range_error::vftable;
  return param_1;
}



// FUNCTION 180016d40 FUN_180016d40
// THUNK false
// CALLS EXTERNAL:00000067 __std_exception_copy

undefined8 * FUN_180016d40(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



// FUNCTION 180016d80 FUN_180016d80
// THUNK false
// CALLS EXTERNAL:00000029 Ordinal_2
// CALLS 1800187f0 free
// CALLS EXTERNAL:0000002a Ordinal_15
// CALLS EXTERNAL:00000028 Ordinal_26
// CALLS 1800049d0 FUN_1800049d0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180016d80(longlong *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *_Memory;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  int local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180023010 ^ (ulonglong)auStack_48;
  uVar6 = 0;
  local_20 = (undefined4)(param_1[1] - *param_1 >> 5);
  local_1c = 0;
  uVar2 = Ordinal_15(8,1,&local_20);
  plVar5 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  if ((longlong)plVar5 - (longlong)plVar4 >> 5 != 0) {
    do {
      plVar4 = plVar4 + uVar6 * 4;
      if (7 < (ulonglong)plVar4[3]) {
        plVar4 = (longlong *)*plVar4;
      }
      local_28[0] = (int)uVar6;
      uVar3 = Ordinal_2(plVar4);
      Ordinal_26(uVar2,local_28,uVar3);
      plVar5 = (longlong *)param_1[1];
      uVar6 = (ulonglong)((int)uVar6 + 1);
      plVar4 = (longlong *)*param_1;
    } while (uVar6 < (ulonglong)((longlong)plVar5 - (longlong)plVar4 >> 5));
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_1800049d0(plVar4,plVar5);
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return uVar2;
}



// FUNCTION 180016eb0 FUN_180016eb0
// THUNK false
// CALLS EXTERNAL:0000002a Ordinal_15
// CALLS EXTERNAL:00000028 Ordinal_26
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180016eb0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  int local_38 [2];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_180023010 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  local_30[0] = param_2;
  uVar1 = Ordinal_15(0x11,1,local_30);
  local_38[0] = 0;
  if (0 < param_2) {
    do {
      Ordinal_26(uVar1,local_38,local_38[0] + param_1);
      local_38[0] = local_38[0] + 1;
    } while (local_38[0] < param_2);
  }
  return uVar1;
}



// FUNCTION 180016f40 FUN_180016f40
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000011 MultiByteToWideChar
// CALLS 180018860 thunk_FUN_180018824
// CALLS 1800066c0 FUN_1800066c0

void FUN_180016f40(LPCSTR param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  int cchWideChar;
  size_t sVar2;
  LPWSTR lpWideCharStr;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0xffffffffffffffff;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_1[lVar4] != '\0');
  cchWideChar = MultiByteToWideChar(0,0,param_1,(int)lVar4,(LPWSTR)0x0,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(cchWideChar + 1);
  sVar2 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    sVar2 = 0xffffffffffffffff;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_180018824(sVar2);
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_1[lVar4] != '\0');
  MultiByteToWideChar(0,0,param_1,(int)lVar4,lpWideCharStr,cchWideChar);
  lpWideCharStr[cchWideChar] = L'\0';
  do {
    uVar3 = uVar3 + 1;
  } while (lpWideCharStr[uVar3] != L'\0');
  FUN_1800066c0(param_2,lpWideCharStr,uVar3);
  free(lpWideCharStr);
  return;
}



// FUNCTION 180017020 FUN_180017020
// THUNK false
// CALLS EXTERNAL:0000004f codecvt<wchar_t,char,_Mbstatet>
// CALLS EXTERNAL:0000004c _New_Locimp
// CALLS EXTERNAL:0000004b _Init
// CALLS EXTERNAL:00000050 _Addfac
// CALLS 180018824 FUN_180018824
// CALLS EXTERNAL:0000004d operator=
// CALLS 180017fd0 FUN_180017fd0
// CALLS 180017e60 FUN_180017e60
// CALLS EXTERNAL:00000045 operator_unsigned___int64
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t ******* FUN_180017020(wchar_t *******param_1,byte *param_2)

{
  codecvt<wchar_t,char,_Mbstatet> *this;
  _Locimp *this_00;
  __uint64 _Var1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined1 auStack_e8 [40];
  codecvt<wchar_t,char,_Mbstatet> *local_c0;
  undefined **local_b8;
  codecvt<wchar_t,char,_Mbstatet> *pcStack_b0;
  undefined8 local_a8;
  _Locimp *p_Stack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180023010 ^ (ulonglong)auStack_e8;
  pcStack_b0 = (codecvt<wchar_t,char,_Mbstatet> *)0x0;
  local_a8 = 0;
  p_Stack_a0 = (_Locimp *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_b8 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  local_c0 = (codecvt<wchar_t,char,_Mbstatet> *)param_1;
  p_Stack_a0 = std::locale::_Init(true);
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 7;
  local_78 = 0;
  uStack_50 = uStack_50 & 0xffffffffff000000;
  this = (codecvt<wchar_t,char,_Mbstatet> *)FUN_180018824(0x40);
  local_c0 = this;
  std::codecvt<wchar_t,char,_Mbstatet>::codecvt<wchar_t,char,_Mbstatet>(this,0);
  *(undefined ***)this = std::codecvt_utf8<wchar_t,1114111,0>::vftable;
  local_58 = 0;
  pcStack_b0 = this;
  this_00 = std::locale::_Locimp::_New_Locimp(p_Stack_a0);
  _Var1 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  std::locale::_Locimp::_Addfac(this_00,(facet *)this,_Var1);
  *(undefined4 *)(this_00 + 0x20) = 0;
  std::_Yarn<char>::operator=((_Yarn<char> *)(this_00 + 0x28),"*");
  if (p_Stack_a0 != this_00) {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)p_Stack_a0 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    p_Stack_a0 = this_00;
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)this_00 + 0x10))(this_00);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_48 = 0;
  pbVar3 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar3 = *(byte **)param_2;
  }
  FUN_180017fd0((longlong)&local_b8,param_1,pbVar3,pbVar3 + *(longlong *)(param_2 + 0x10));
  FUN_180017e60(&local_b8);
  return param_1;
}



// FUNCTION 1800171d0 FUN_1800171d0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 FUN_1800171d0(longlong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (param_1[2] != 0) {
    uVar1 = param_1[3];
    do {
      plVar3 = param_1;
      if (7 < uVar1) {
        plVar3 = (longlong *)*param_1;
      }
      if (*(ushort *)(uVar6 * 2 + (longlong)plVar3) < 0x30) {
LAB_180017289:
        if (7 < uVar1) {
          pvVar2 = (void *)*param_1;
          pvVar5 = pvVar2;
          if ((0xfff < uVar1 * 2 + 2) &&
             (pvVar5 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) goto LAB_1800172c4;
          free(pvVar5);
        }
        uVar4 = 0;
        goto LAB_18001726a;
      }
      plVar3 = param_1;
      if (7 < uVar1) {
        plVar3 = (longlong *)*param_1;
      }
      if (0x39 < *(ushort *)(uVar6 * 2 + (longlong)plVar3)) goto LAB_180017289;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < (ulonglong)param_1[2]);
  }
  if (7 < (ulonglong)param_1[3]) {
    pvVar2 = (void *)*param_1;
    pvVar5 = pvVar2;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (pvVar5 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
LAB_1800172c4:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar5);
  }
  uVar4 = 1;
LAB_18001726a:
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  param_1[2] = 0;
  return uVar4;
}



// FUNCTION 1800172d0 FUN_1800172d0
// THUNK false
// CALLS EXTERNAL:00000005 WideCharToMultiByte
// CALLS EXTERNAL:00000089 malloc

void * FUN_1800172d0(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  int cbMultiByte;
  size_t _Size;
  void *pvVar3;
  LPSTR lpMultiByteStr;
  LPCWSTR lpWideCharStr;
  longlong lVar4;
  longlong lVar5;
  LPCWSTR lpWideCharStr_00;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(int)(param_1[1] - *param_1 >> 5);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  _Size = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  pvVar3 = malloc(_Size);
  if (0 < (longlong)uVar6) {
    lVar4 = 0;
    lVar5 = lVar4;
    do {
      lpWideCharStr = (LPCWSTR)(*param_1 + lVar4);
      lpWideCharStr_00 = lpWideCharStr;
      if (7 < *(ulonglong *)(lpWideCharStr + 0xc)) {
        lpWideCharStr_00 = *(LPCWSTR *)lpWideCharStr;
      }
      cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr_00,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                       );
      lpMultiByteStr = malloc((longlong)cbMultiByte);
      uVar1 = *(ulonglong *)(lpWideCharStr + 0xc);
      *(LPSTR *)((longlong)pvVar3 + lVar5 * 8) = lpMultiByteStr;
      if (7 < uVar1) {
        lpWideCharStr = *(LPCWSTR *)lpWideCharStr;
      }
      WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar5 < (longlong)uVar6);
  }
  return pvVar3;
}



// FUNCTION 1800173f0 FUN_1800173f0
// THUNK false
// CALLS 180004160 FUN_180004160
// CALLS 1800046a0 FUN_1800046a0
// CALLS 1800187f0 free
// CALLS 180018824 FUN_180018824
// CALLS 1800053a0 FUN_1800053a0
// CALLS 180019703 memcpy
// CALLS 180001370 FUN_180001370
// CALLS 1800012d0 FUN_1800012d0
// CALLS 180004ec0 FUN_180004ec0
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800173f0(longlong *param_1,undefined8 *param_2,ushort *******param_3)

{
  ushort *_Src;
  ushort ******ppppppuVar1;
  code *pcVar2;
  longlong *plVar3;
  ushort ***********pppppppppppuVar4;
  longlong lVar5;
  longlong *plVar6;
  ushort ************ppppppppppppuVar7;
  ushort ***********pppppppppppuVar8;
  ulonglong uVar9;
  ushort ************ppppppppppppuVar10;
  ulonglong uVar11;
  ushort ************ppppppppppppuVar12;
  ushort ***********pppppppppppuVar13;
  ushort ***********pppppppppppuVar14;
  uint uVar15;
  ushort *******_Src_00;
  undefined1 auStack_e8 [32];
  uint local_c8;
  ushort ***********local_c0;
  undefined8 uStack_b8;
  ushort **********local_b0;
  ulonglong uStack_a8;
  ushort ***********local_a0;
  longlong *local_98;
  longlong *local_90;
  ushort ***********local_88;
  undefined8 uStack_80;
  ushort **********local_78;
  ulonglong uStack_70;
  ushort ***********local_68;
  undefined8 uStack_60;
  ushort **********local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180023010 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_c8 = 1;
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    return param_1;
  }
  ppppppuVar1 = param_3[2];
  local_a0 = (ushort ***********)param_3;
  local_98 = param_1;
  local_90 = param_1;
  if ((ushort ******)(0x7ffffffffffffffeU - lVar5) < ppppppuVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  _Src_00 = param_3;
  if ((ushort ******)0x7 < param_3[3]) {
    _Src_00 = (ushort *******)*param_3;
  }
  local_88 = (ushort ***********)0x0;
  uStack_80 = 0;
  local_78 = (ushort **********)0x0;
  uStack_70 = 0;
  pppppppppppuVar14 = (ushort ***********)((longlong)ppppppuVar1 + lVar5);
  uVar9 = 7;
  ppppppppppppuVar12 = &local_88;
  pppppppppppuVar4 = local_88;
  if ((ushort ***********)0x7 < pppppppppppuVar14) {
    uVar9 = (ulonglong)pppppppppppuVar14 | 7;
    if (uVar9 < 0x7fffffffffffffff) {
      if (uVar9 < 10) {
        uVar9 = 10;
      }
      if (0x7fffffffffffffff < uVar9 + 1) goto LAB_180017a06;
      uVar11 = (uVar9 + 1) * 2;
      if (uVar11 < 0x1000) {
        ppppppppppppuVar12 = (ushort ************)0x0;
        pppppppppppuVar4 = (ushort ***********)(ushort ************)0x0;
        if (uVar11 != 0) {
          ppppppppppppuVar12 = (ushort ************)FUN_180018824(uVar11);
          pppppppppppuVar4 = (ushort ***********)ppppppppppppuVar12;
        }
        goto LAB_18001753b;
      }
    }
    else {
      uVar9 = 0x7ffffffffffffffe;
      uVar11 = 0xfffffffffffffffe;
    }
    if (uVar11 + 0x27 <= uVar11) {
LAB_180017a06:
                    /* WARNING: Subroutine does not return */
      FUN_1800012d0();
    }
    pppppppppppuVar4 = (ushort ***********)FUN_180018824(uVar11 + 0x27);
    if (pppppppppppuVar4 == (ushort ***********)0x0) goto LAB_18001762a;
    ppppppppppppuVar12 =
         (ushort ************)((longlong)pppppppppppuVar4 + 0x27U & 0xffffffffffffffe0);
    ppppppppppppuVar12[-1] = pppppppppppuVar4;
    pppppppppppuVar4 = (ushort ***********)ppppppppppppuVar12;
  }
LAB_18001753b:
  local_88 = pppppppppppuVar4;
  local_78 = (ushort **********)pppppppppppuVar14;
  uStack_70 = uVar9;
  memcpy(ppppppppppppuVar12,param_2,lVar5 * 2);
  ppppppppppppuVar7 = (ushort ************)((longlong)ppppppppppppuVar12 + lVar5 * 2);
  memcpy(ppppppppppppuVar7,_Src_00,(longlong)ppppppuVar1 * 2);
  pppppppppppuVar4 = (ushort ***********)0x0;
  *(ushort *)((longlong)ppppppppppppuVar12 + (longlong)pppppppppppuVar14 * 2) = 0;
  uVar15 = 9;
  local_c8 = 9;
  pppppppppppuVar14 = local_a0;
  if ((ushort ***********)0x7 < local_a0[3]) {
    pppppppppppuVar14 = (ushort ***********)*local_a0;
  }
  ppppppppppppuVar12 = &local_88;
  if (7 < uStack_70) {
    ppppppppppppuVar12 = (ushort ************)local_88;
  }
  pppppppppppuVar13 = (ushort ***********)local_a0[2];
  if (pppppppppppuVar13 <= local_78) {
    if (pppppppppppuVar13 == (ushort ***********)0x0) {
LAB_180017680:
      do {
        local_68 = (ushort ***********)0x0;
        uStack_60 = 0;
        local_58 = (ushort **********)0x0;
        local_50 = 0;
        pppppppppppuVar14 = pppppppppppuVar4;
        if (local_78 < pppppppppppuVar4) {
          pppppppppppuVar14 = (ushort ***********)local_78;
        }
        ppppppppppppuVar12 = &local_88;
        if (7 < uStack_70) {
          ppppppppppppuVar12 = (ushort ************)local_88;
        }
        if ((ushort ***********)0x7ffffffffffffffe < pppppppppppuVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_180001370();
        }
        if (pppppppppppuVar14 < (ushort ***********)0x8) {
          local_50 = 7;
          local_58 = (ushort **********)pppppppppppuVar14;
          memcpy(&local_68,ppppppppppppuVar12,(longlong)pppppppppppuVar14 * 2);
          *(undefined2 *)((longlong)&local_68 + (longlong)pppppppppppuVar14 * 2) = 0;
        }
        else {
          uVar9 = (ulonglong)pppppppppppuVar14 | 7;
          if (uVar9 < 0x7fffffffffffffff) {
            if (uVar9 < 10) {
              uVar9 = 10;
            }
          }
          else {
            uVar9 = 0x7ffffffffffffffe;
          }
          ppppppppppppuVar7 = (ushort ************)FUN_180004ec0(ppppppppppppuVar7,uVar9 + 1);
          local_68 = (ushort ***********)ppppppppppppuVar7;
          local_58 = (ushort **********)pppppppppppuVar14;
          local_50 = uVar9;
          memcpy(ppppppppppppuVar7,ppppppppppppuVar12,(longlong)pppppppppppuVar14 * 2);
          *(ushort *)((longlong)pppppppppppuVar14 * 2 + (longlong)ppppppppppppuVar7) = 0;
        }
        plVar3 = local_98;
        local_c8 = uVar15 | 2;
        plVar6 = (longlong *)local_98[1];
        if (plVar6 == (longlong *)local_98[2]) {
          FUN_1800053a0(local_98,plVar6,&local_68);
        }
        else {
          FUN_180004160(plVar6,&local_68);
          plVar3[1] = plVar3[1] + 0x20;
        }
        uVar9 = uStack_70;
        pppppppppppuVar14 = local_88;
        pppppppppppuVar4 = (ushort ***********)((longlong)pppppppppppuVar4 + 1);
        local_c0 = (ushort ***********)0x0;
        uStack_b8 = 0;
        if (local_78 < pppppppppppuVar4) {
          FUN_1800046a0();
          pcVar2 = (code *)swi(3);
          plVar6 = (longlong *)(*pcVar2)();
          return plVar6;
        }
        pppppppppppuVar13 = (ushort ***********)local_78;
        if ((ushort ***********)((longlong)local_78 - (longlong)pppppppppppuVar4) < local_78) {
          pppppppppppuVar13 = (ushort ***********)((longlong)local_78 - (longlong)pppppppppppuVar4);
        }
        ppppppppppppuVar12 = &local_88;
        if (7 < uStack_70) {
          ppppppppppppuVar12 = (ushort ************)local_88;
        }
        _Src = (ushort *)((longlong)ppppppppppppuVar12 + (longlong)pppppppppppuVar4 * 2);
        if ((ushort ***********)0x7ffffffffffffffe < pppppppppppuVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180001370();
        }
        if (pppppppppppuVar13 < (ushort ***********)0x8) {
          uStack_a8 = 7;
          ppppppppppppuVar7 = &local_c0;
          local_b0 = (ushort **********)pppppppppppuVar13;
          memcpy(ppppppppppppuVar7,_Src,(longlong)pppppppppppuVar13 * 2);
          *(undefined2 *)((longlong)&local_c0 + (longlong)pppppppppppuVar13 * 2) = 0;
          uVar11 = uStack_a8;
          pppppppppppuVar13 = (ushort ***********)local_b0;
          pppppppppppuVar4 = local_c0;
        }
        else {
          uVar11 = (ulonglong)pppppppppppuVar13 | 7;
          if (uVar11 < 0x7fffffffffffffff) {
            if (uVar11 < 10) {
              uVar11 = 10;
            }
          }
          else {
            uVar11 = 0x7ffffffffffffffe;
          }
          pppppppppppuVar4 = (ushort ***********)FUN_180004ec0(0x7ffffffffffffffe,uVar11 + 1);
          ppppppppppppuVar7 = (ushort ************)pppppppppppuVar4;
          local_c0 = pppppppppppuVar4;
          local_b0 = (ushort **********)pppppppppppuVar13;
          uStack_a8 = uVar11;
          memcpy(pppppppppppuVar4,_Src,(longlong)pppppppppppuVar13 * 2);
          *(ushort *)((longlong)pppppppppppuVar13 * 2 + (longlong)pppppppppppuVar4) = 0;
          pppppppppppuVar14 = local_88;
          uVar9 = uStack_70;
        }
        uVar15 = local_c8 | 4;
        local_c8 = uVar15;
        if (7 < uVar9) {
          ppppppppppppuVar7 = (ushort ************)pppppppppppuVar14;
          if ((0xfff < uVar9 * 2 + 2) &&
             (ppppppppppppuVar7 = (ushort ************)pppppppppppuVar14[-1],
             0x1f < (ulonglong)((longlong)pppppppppppuVar14 + (-8 - (longlong)ppppppppppppuVar7))))
          {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(ppppppppppppuVar7);
        }
        local_88 = local_c0;
        uStack_80 = uStack_b8;
        local_78 = local_b0;
        uStack_70 = uStack_a8;
        pppppppppppuVar14 = local_a0;
        if ((ushort ***********)0x7 < local_a0[3]) {
          pppppppppppuVar14 = (ushort ***********)*local_a0;
        }
        ppppppppppppuVar12 = &local_88;
        if (7 < uVar11) {
          ppppppppppppuVar12 = (ushort ************)pppppppppppuVar4;
        }
        pppppppppppuVar4 = (ushort ***********)local_a0[2];
        if (pppppppppppuVar13 < pppppppppppuVar4) {
LAB_180017911:
          pppppppppppuVar4 = (ushort ***********)&DAT_ffffffffffffffff;
        }
        else {
          if (pppppppppppuVar4 != (ushort ***********)0x0) {
            for (ppppppppppppuVar10 = ppppppppppppuVar12;
                lVar5 = (longlong)ppppppppppppuVar12 +
                        ((longlong)((longlong)pppppppppppuVar13 + (1 - (longlong)pppppppppppuVar4))
                         * 2 - (longlong)ppppppppppppuVar10) >> 1, lVar5 != 0;
                ppppppppppppuVar10 = (ushort ************)((longlong)ppppppppppppuVar10 + 2)) {
              ppppppppppppuVar7 = (ushort ************)(ulonglong)*(ushort *)pppppppppppuVar14;
              while (*(ushort *)ppppppppppppuVar10 != *(ushort *)pppppppppppuVar14) {
                ppppppppppppuVar10 = (ushort ************)((longlong)ppppppppppppuVar10 + 2);
                lVar5 = lVar5 + -1;
                if (lVar5 == 0) goto LAB_180017911;
              }
              if (ppppppppppppuVar10 == (ushort ************)0x0) break;
              ppppppppppppuVar7 = (ushort ************)pppppppppppuVar14;
              if (pppppppppppuVar4 == (ushort ***********)0x0) {
LAB_1800179a4:
                pppppppppppuVar4 =
                     (ushort ***********)
                     ((longlong)ppppppppppppuVar10 - (longlong)ppppppppppppuVar12 >> 1);
                goto LAB_18001791b;
              }
              pppppppppppuVar8 = pppppppppppuVar4;
              while (*(ushort *)
                      ((longlong)ppppppppppppuVar7 +
                      ((longlong)ppppppppppppuVar10 - (longlong)pppppppppppuVar14)) ==
                     *(ushort *)ppppppppppppuVar7) {
                ppppppppppppuVar7 = (ushort ************)((longlong)ppppppppppppuVar7 + 2);
                pppppppppppuVar8 = (ushort ***********)((longlong)pppppppppppuVar8 + -1);
                if (pppppppppppuVar8 == (ushort ***********)0x0) goto LAB_1800179a4;
              }
            }
            goto LAB_180017911;
          }
          pppppppppppuVar4 = (ushort ***********)0x0;
        }
LAB_18001791b:
        if (7 < local_50) {
          ppppppppppppuVar7 = (ushort ************)local_68;
          if ((0xfff < local_50 * 2 + 2) &&
             (ppppppppppppuVar7 = (ushort ************)local_68[-1],
             0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppppppppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(ppppppppppppuVar7);
        }
      } while (pppppppppppuVar4 != (ushort ***********)&DAT_ffffffffffffffff);
    }
    else {
      for (ppppppppppppuVar10 = ppppppppppppuVar12;
          lVar5 = (longlong)ppppppppppppuVar12 +
                  ((longlong)((longlong)local_78 + (1 - (longlong)pppppppppppuVar13)) * 2 -
                  (longlong)ppppppppppppuVar10) >> 1, lVar5 != 0;
          ppppppppppppuVar10 = (ushort ************)((longlong)ppppppppppppuVar10 + 2)) {
        while (*(ushort *)ppppppppppppuVar10 != *(ushort *)pppppppppppuVar14) {
          ppppppppppppuVar10 = (ushort ************)((longlong)ppppppppppppuVar10 + 2);
          lVar5 = lVar5 + -1;
          if (lVar5 == 0) goto LAB_1800175ef;
        }
        if (ppppppppppppuVar10 == (ushort ************)0x0) break;
        ppppppppppppuVar7 = (ushort ************)pppppppppppuVar14;
        if (pppppppppppuVar13 == (ushort ***********)0x0) {
LAB_180017668:
          pppppppppppuVar4 =
               (ushort ***********)
               ((longlong)ppppppppppppuVar10 - (longlong)ppppppppppppuVar12 >> 1);
          if (pppppppppppuVar4 != (ushort ***********)&DAT_ffffffffffffffff) goto LAB_180017680;
          break;
        }
        pppppppppppuVar4 = pppppppppppuVar13;
        while (*(ushort *)
                ((longlong)ppppppppppppuVar7 +
                ((longlong)ppppppppppppuVar10 - (longlong)pppppppppppuVar14)) ==
               *(ushort *)ppppppppppppuVar7) {
          ppppppppppppuVar7 = (ushort ************)((longlong)ppppppppppppuVar7 + 2);
          pppppppppppuVar4 = (ushort ***********)((longlong)pppppppppppuVar4 + -1);
          if (pppppppppppuVar4 == (ushort ***********)0x0) goto LAB_180017668;
        }
      }
    }
  }
LAB_1800175ef:
  if (7 < uStack_70) {
    ppppppppppppuVar12 = (ushort ************)local_88;
    if ((0xfff < uStack_70 * 2 + 2) &&
       (ppppppppppppuVar12 = (ushort ************)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppppppppppuVar12)))) {
LAB_18001762a:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppppppppppuVar12);
  }
  return local_98;
}



// FUNCTION 180017a20 FUN_180017a20
// THUNK false

undefined8 FUN_180017a20(void)

{
  return 0;
}



// FUNCTION 180017a30 FUN_180017a30
// THUNK false

undefined8 FUN_180017a30(void)

{
  return 6;
}



// FUNCTION 180017a40 FUN_180017a40
// THUNK false

undefined1 FUN_180017a40(void)

{
  return 0;
}



// FUNCTION 180017a50 FUN_180017a50
// THUNK false
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180017a50(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,
                       longlong param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_28 [2];
  undefined1 local_26 [14];
  
  pbVar4 = param_3;
  if (param_5 != 0) {
    while (pbVar6 = pbVar4, puVar8 = local_28, pbVar4 != param_4) {
      do {
        if (puVar8 == local_26) break;
        bVar1 = *pbVar6;
        uVar3 = (uint)bVar1;
        if (bVar1 < 0x80) {
          pbVar6 = pbVar6 + 1;
        }
        else {
          if (bVar1 < 0xc0) goto LAB_180017b8d;
          uVar2 = (uint)bVar1;
          if (bVar1 < 0xe0) {
            uVar2 = uVar2 & 0x1f;
            iVar7 = 1;
          }
          else if (bVar1 < 0xf0) {
            uVar2 = uVar2 & 0xf;
            iVar7 = 2;
          }
          else if (bVar1 < 0xf8) {
            uVar2 = uVar2 & 7;
            iVar7 = 3;
          }
          else {
            uVar2 = uVar2 & 3;
            iVar7 = 5 - (uint)(uVar3 < 0xfc);
          }
          if ((longlong)param_4 - (longlong)pbVar6 < (longlong)(ulonglong)(iVar7 + 1)) break;
          pbVar6 = pbVar6 + 1;
          uVar3 = uVar2;
          do {
            if (0x3f < *pbVar6 - 0x80) goto LAB_180017b8d;
            uVar3 = *pbVar6 & 0x3f | uVar3 << 6;
            iVar7 = iVar7 + -1;
            pbVar6 = pbVar6 + 1;
          } while (0 < iVar7);
        }
        if (*param_2 == '\0') {
          *param_2 = '\x01';
        }
        if (0x10ffff < uVar3) goto LAB_180017b8d;
        puVar8 = puVar8 + 2;
      } while (pbVar6 != param_4);
      if (pbVar4 == pbVar6) break;
      if (puVar8 == local_26) {
        param_5 = param_5 + -1;
      }
      pbVar4 = pbVar6;
      if (param_5 == 0) break;
    }
  }
LAB_180017b8d:
  uVar5 = (longlong)pbVar4 - (longlong)param_3 & 0xffffffff;
  if (0x7fffffff < (longlong)pbVar4 - (longlong)param_3) {
    uVar5 = 0x7fffffff;
  }
  return uVar5;
}



// FUNCTION 180017bc0 FUN_180017bc0
// THUNK false

undefined8
FUN_180017bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}



// FUNCTION 180017bd0 FUN_180017bd0
// THUNK false

bool FUN_180017bd0(undefined8 param_1,char *param_2,longlong param_3,ushort *param_4,
                  longlong *param_5,byte *param_6,byte *param_7,longlong *param_8)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  *param_5 = param_3;
  *param_8 = (longlong)param_6;
  puVar2 = (ushort *)*param_5;
  while ((puVar2 != param_4 && (param_6 != param_7))) {
    uVar1 = *puVar2;
    if (uVar1 < 0x80) {
      bVar5 = (byte)uVar1;
      iVar3 = 0;
    }
    else if (uVar1 < 0x800) {
      iVar3 = 1;
      bVar5 = (byte)(uVar1 >> 6) | 0xc0;
    }
    else {
      iVar3 = 2;
      bVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
    }
    if ((longlong)param_7 - *param_8 < (longlong)(ulonglong)(iVar3 + 1)) break;
    *param_5 = *param_5 + 2;
    *(byte *)*param_8 = bVar5;
    param_6 = (byte *)(*param_8 + 1);
    *param_8 = (longlong)param_6;
    if (iVar3 != 0) {
      iVar4 = iVar3 * 6;
      do {
        iVar4 = iVar4 + -6;
        iVar3 = iVar3 + -1;
        *param_6 = (byte)(uVar1 >> ((byte)iVar4 & 0x1f)) & 0x3f | 0x80;
        param_6 = (byte *)(*param_8 + 1);
        *param_8 = (longlong)param_6;
      } while (0 < iVar3);
    }
    puVar2 = (ushort *)*param_5;
  }
  return param_3 == *param_5;
}



// FUNCTION 180017d00 FUN_180017d00
// THUNK false

bool FUN_180017d00(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  *param_5 = (longlong)param_3;
  *param_8 = param_6;
  pbVar4 = (byte *)*param_5;
  do {
    if ((pbVar4 == param_4) || (param_6 == param_7)) goto LAB_180017e2e;
    bVar1 = *pbVar4;
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x80) {
      *param_5 = (longlong)(pbVar4 + 1);
    }
    else {
      if (bVar1 < 0xc0) {
        *param_5 = (longlong)(pbVar4 + 1);
        return true;
      }
      uVar2 = (uint)bVar1;
      if (bVar1 < 0xe0) {
        uVar2 = uVar2 & 0x1f;
        iVar5 = 1;
      }
      else if (bVar1 < 0xf0) {
        uVar2 = uVar2 & 0xf;
        iVar5 = 2;
      }
      else if (bVar1 < 0xf8) {
        uVar2 = uVar2 & 7;
        iVar5 = 3;
      }
      else {
        uVar2 = uVar2 & 3;
        iVar5 = 5 - (uint)(uVar3 < 0xfc);
      }
      if ((longlong)param_4 - (longlong)pbVar4 < (longlong)(ulonglong)(iVar5 + 1)) {
LAB_180017e2e:
        return param_3 == pbVar4;
      }
      pbVar4 = pbVar4 + 1;
      *param_5 = (longlong)pbVar4;
      uVar3 = uVar2;
      do {
        if (0x3f < *pbVar4 - 0x80) {
          return true;
        }
        iVar5 = iVar5 + -1;
        uVar3 = *pbVar4 & 0x3f | uVar3 << 6;
        pbVar4 = pbVar4 + 1;
        *param_5 = (longlong)pbVar4;
      } while (0 < iVar5);
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
    }
    if (0x10ffff < uVar3) {
      return true;
    }
    *(short *)*param_8 = (short)uVar3;
    *param_8 = *param_8 + 2;
    pbVar4 = (byte *)*param_5;
    param_6 = *param_8;
  } while( true );
}



// FUNCTION 180017e60 FUN_180017e60
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_180017e60(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  if (7 < (ulonglong)param_1[0xb]) {
    pvVar1 = (void *)param_1[8];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0xb] * 2 + 2U) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) goto LAB_180017f3d;
    free(pvVar3);
  }
  param_1[0xb] = 7;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  if (0xf < (ulonglong)param_1[7]) {
    pvVar1 = (void *)param_1[4];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[7] + 1) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
LAB_180017f3d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  if (((longlong *)param_1[3] != (longlong *)0x0) &&
     (puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))(),
     puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}



// FUNCTION 180017f50 FUN_180017f50
// THUNK false
// CALLS EXTERNAL:0000004e ~codecvt<wchar_t,char,_Mbstatet>
// CALLS 1800187f0 free

codecvt<wchar_t,char,_Mbstatet> *
FUN_180017f50(codecvt<wchar_t,char,_Mbstatet> *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::codecvt_utf8<wchar_t,1114111,0>::vftable;
  std::codecvt<wchar_t,char,_Mbstatet>::~codecvt<wchar_t,char,_Mbstatet>(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 180017f90 FUN_180017f90
// THUNK false
// CALLS 1800187f0 free
// CALLS 180017e60 FUN_180017e60

undefined8 * FUN_180017f90(undefined8 *param_1,uint param_2)

{
  FUN_180017e60(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 180017fd0 FUN_180017fd0
// THUNK false
// CALLS EXTERNAL:00000043 in
// CALLS 180004160 FUN_180004160
// CALLS 180016ce0 FUN_180016ce0
// CALLS 1800187f0 free
// CALLS 180019703 memcpy
// CALLS 180001370 FUN_180001370
// CALLS 180004c80 FUN_180004c80
// CALLS 180018640 FUN_180018640
// CALLS 180004ec0 FUN_180004ec0
// CALLS 180019709 memmove
// CALLS 1800187d0 __security_check_cookie
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

wchar_t ******* FUN_180017fd0(longlong param_1,wchar_t *******param_2,byte *param_3,byte *param_4)

{
  wchar_t ******ppppppwVar1;
  byte bVar2;
  size_t _Size;
  wchar_t ******ppppppwVar3;
  int iVar4;
  wchar_t ************ppppppppppppwVar5;
  longlong lVar6;
  ulonglong uVar7;
  wchar_t ************ppppppppppppwVar8;
  wchar_t ***********pppppppppppwVar9;
  wchar_t ******ppppppwVar10;
  wchar_t ******ppppppwVar11;
  wchar_t ************ppppppppppppwVar12;
  byte *pbVar13;
  undefined1 auStackY_118 [32];
  byte *local_a8;
  wchar_t ************local_a0;
  wchar_t ***********local_98;
  wchar_t ******ppppppwStack_90;
  wchar_t ******local_88;
  wchar_t ******ppppppwStack_80;
  wchar_t ***********local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180023010 ^ (ulonglong)auStackY_118;
  uStack_70 = 0;
  local_68 = 0;
  ppppppwVar10 = (wchar_t ******)0x7;
  local_60 = 7;
  local_78 = (wchar_t ***********)0x0;
  ppppppwStack_90 = (wchar_t ******)0x0;
  local_88 = (wchar_t ******)0x0;
  ppppppwStack_80 = (wchar_t ******)0x7;
  local_98 = (wchar_t ***********)0x0;
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_a8 = param_3;
  local_a0 = (wchar_t ************)param_2;
  FUN_180018640(&local_78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  pbVar13 = local_a8;
  ppppppppppppwVar8 = (wchar_t ************)local_98;
  do {
    local_a8 = pbVar13;
    if (pbVar13 == param_4) {
      *param_2 = (wchar_t ******)local_98;
      param_2[1] = ppppppwStack_90;
      param_2[2] = local_88;
      param_2[3] = ppppppwStack_80;
      if (7 < local_60) {
        ppppppppppppwVar8 = (wchar_t ************)local_78;
        if ((0xfff < local_60 * 2 + 2) &&
           (ppppppppppppwVar8 = (wchar_t ************)local_78[-1],
           0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1])))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
LAB_18001840f:
        free(ppppppppppppwVar8);
      }
      return param_2;
    }
    ppppppppppppwVar5 = &local_78;
    if (7 < local_60) {
      ppppppppppppwVar5 = (wchar_t ************)local_78;
    }
    iVar4 = std::codecvt<wchar_t,char,_Mbstatet>::in
                      (*(codecvt<wchar_t,char,_Mbstatet> **)(param_1 + 8),
                       (_Mbstatet *)(param_1 + 0x60),(char *)pbVar13,(char *)param_4,
                       (char **)&local_a8,(wchar_t *)ppppppppppppwVar5,
                       (wchar_t *)((longlong)ppppppppppppwVar5 + local_68 * 2),(wchar_t **)&local_a0
                      );
    uVar7 = local_68;
    ppppppwVar3 = local_88;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      if (ppppppppppppwVar5 < local_a0) {
        uVar7 = (longlong)local_a0 - (longlong)ppppppppppppwVar5 >> 1;
        if ((ulonglong)((longlong)ppppppwVar10 - (longlong)local_88) < uVar7) {
          FUN_180004c80(&local_98,uVar7,pbVar13,ppppppppppppwVar5,uVar7);
          ppppppppppppwVar8 = (wchar_t ************)local_98;
          ppppppwVar10 = ppppppwStack_80;
        }
        else {
          ppppppppppppwVar12 = &local_98;
          if ((wchar_t ******)0x7 < ppppppwVar10) {
            ppppppppppppwVar12 = ppppppppppppwVar8;
          }
          lVar6 = (longlong)local_88 * 2;
          local_88 = (wchar_t ******)((longlong)local_88 + uVar7);
          memmove((void *)((longlong)ppppppppppppwVar12 + lVar6),ppppppppppppwVar5,uVar7 * 2);
          *(undefined2 *)((longlong)ppppppppppppwVar12 + ((longlong)ppppppwVar3 + uVar7) * 2) = 0;
          ppppppppppppwVar8 = (wchar_t ************)local_98;
          ppppppwVar10 = ppppppwStack_80;
        }
      }
      else {
        if (0xf < local_68) {
          if (*(char *)(param_1 + 0x6a) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180016ce0();
          }
          FUN_180004160(param_2,(undefined8 *)(param_1 + 0x40));
          if ((wchar_t ******)0x7 < ppppppwVar10) {
            pppppppppppwVar9 = (wchar_t ***********)ppppppppppppwVar8;
            if ((0xfff < (longlong)ppppppwVar10 * 2 + 2U) &&
               (pppppppppppwVar9 = ppppppppppppwVar8[-1],
               0x1f < (ulonglong)((longlong)ppppppppppppwVar8 + (-8 - (longlong)pppppppppppwVar9))))
            goto LAB_180018482;
            free(pppppppppppwVar9);
          }
          if (local_60 < 8) {
            return param_2;
          }
          ppppppppppppwVar8 = (wchar_t ************)local_78;
          if (0xfff < local_60 * 2 + 2) {
            ppppppppppppwVar8 = (wchar_t ************)local_78[-1];
            lVar6 = (longlong)local_78 - (longlong)ppppppppppppwVar8;
            goto joined_r0x0001800184cf;
          }
          goto LAB_18001840f;
        }
        if (local_60 - local_68 < 8) {
          FUN_180018640(&local_78);
        }
        else {
          ppppppppppppwVar5 = &local_78;
          if (7 < local_60) {
            ppppppppppppwVar5 = (wchar_t ************)local_78;
          }
          lVar6 = local_68 * 2;
          local_68 = local_68 + 8;
          *(undefined8 *)((longlong)ppppppppppppwVar5 + lVar6) = 0;
          *(undefined8 *)((longlong)ppppppppppppwVar5 + uVar7 * 2 + 8) = 0;
          *(undefined2 *)((longlong)ppppppppppppwVar5 + uVar7 * 2 + 0x10) = 0;
        }
      }
    }
    else {
      if (iVar4 != 3) {
        if (*(char *)(param_1 + 0x6a) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180016ce0();
        }
        FUN_180004160(param_2,(undefined8 *)(param_1 + 0x40));
        if ((wchar_t ******)0x7 < ppppppwVar10) {
          pppppppppppwVar9 = (wchar_t ***********)ppppppppppppwVar8;
          if ((0xfff < (longlong)ppppppwVar10 * 2 + 2U) &&
             (pppppppppppwVar9 = ppppppppppppwVar8[-1],
             0x1f < (ulonglong)((longlong)ppppppppppppwVar8 + (-8 - (longlong)pppppppppppwVar9)))) {
LAB_180018482:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pppppppppppwVar9);
        }
        if (local_60 < 8) {
          return param_2;
        }
        ppppppppppppwVar8 = (wchar_t ************)local_78;
        if (0xfff < local_60 * 2 + 2) {
          ppppppppppppwVar8 = (wchar_t ************)local_78[-1];
          lVar6 = (longlong)local_78 - (longlong)ppppppppppppwVar8;
joined_r0x0001800184cf:
          if (0x1f < lVar6 - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_18001840f;
      }
      for (; local_88 = ppppppwVar3, local_a8 != param_4; local_a8 = local_a8 + 1) {
        uVar7 = 0;
        bVar2 = *local_a8;
        if (ppppppwVar3 < ppppppwVar10) {
          local_88 = (wchar_t ******)((longlong)ppppppwVar3 + 1);
          ppppppppppppwVar5 = &local_98;
          if ((wchar_t ******)0x7 < ppppppwVar10) {
            ppppppppppppwVar5 = ppppppppppppwVar8;
          }
          *(ushort *)((longlong)ppppppppppppwVar5 + (longlong)ppppppwVar3 * 2) = (ushort)bVar2;
          *(undefined2 *)((longlong)ppppppppppppwVar5 + (longlong)ppppppwVar3 * 2 + 2) = 0;
          ppppppwVar11 = ppppppwStack_80;
        }
        else {
          if (ppppppwVar3 == (wchar_t ******)0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
            FUN_180001370();
          }
          ppppppwVar1 = (wchar_t ******)((longlong)ppppppwVar3 + 1);
          ppppppwVar11 = (wchar_t ******)((ulonglong)ppppppwVar1 | 7);
          if (ppppppwVar11 < (wchar_t ******)0x7fffffffffffffff) {
            uVar7 = (ulonglong)ppppppwVar10 >> 1;
            if ((wchar_t ******)(0x7ffffffffffffffe - uVar7) < ppppppwVar10) {
              ppppppwVar11 = (wchar_t ******)0x7ffffffffffffffe;
            }
            else if (ppppppwVar11 < (wchar_t ******)((longlong)ppppppwVar10 + uVar7)) {
              ppppppwVar11 = (wchar_t ******)((longlong)ppppppwVar10 + uVar7);
            }
          }
          else {
            ppppppwVar11 = (wchar_t ******)0x7ffffffffffffffe;
          }
          ppppppppppppwVar5 = (wchar_t ************)FUN_180004ec0(uVar7,(longlong)ppppppwVar11 + 1);
          _Size = (longlong)ppppppwVar3 * 2;
          local_88 = ppppppwVar1;
          ppppppwStack_80 = ppppppwVar11;
          if (ppppppwVar10 < (wchar_t ******)0x8) {
            memcpy(ppppppppppppwVar5,&local_98,_Size);
            *(ushort *)(_Size + (longlong)ppppppppppppwVar5) = (ushort)bVar2;
            *(undefined2 *)(_Size + 2 + (longlong)ppppppppppppwVar5) = 0;
            local_98 = (wchar_t ***********)ppppppppppppwVar5;
          }
          else {
            memcpy(ppppppppppppwVar5,ppppppppppppwVar8,_Size);
            *(ushort *)(_Size + (longlong)ppppppppppppwVar5) = (ushort)bVar2;
            *(undefined2 *)(_Size + 2 + (longlong)ppppppppppppwVar5) = 0;
            pppppppppppwVar9 = (wchar_t ***********)ppppppppppppwVar8;
            if ((0xfff < (longlong)ppppppwVar10 * 2 + 2U) &&
               (pppppppppppwVar9 = ppppppppppppwVar8[-1],
               0x1f < (ulonglong)((longlong)ppppppppppppwVar8 + (-8 - (longlong)pppppppppppwVar9))))
            {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pppppppppppwVar9);
            local_98 = (wchar_t ***********)ppppppppppppwVar5;
          }
        }
        ppppppppppppwVar8 = (wchar_t ************)local_98;
        ppppppwVar10 = ppppppwVar11;
        ppppppwVar3 = local_88;
      }
    }
    *(longlong *)(param_1 + 0x70) = (longlong)local_a8 - (longlong)param_3;
    pbVar13 = local_a8;
  } while( true );
}



// FUNCTION 1800184f0 FUN_1800184f0
// THUNK false
// CALLS 1800187f0 free
// CALLS 180019703 memcpy
// CALLS 180001370 FUN_180001370
// CALLS 180004ec0 FUN_180004ec0
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_1800184f0(undefined8 *param_1,undefined2 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Src;
  size_t _Size;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar2 < uVar3) {
    param_1[2] = uVar2 + 1;
    if (7 < uVar3) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + uVar2 * 2) = param_2;
    *(undefined2 *)((longlong)param_1 + uVar2 * 2 + 2) = 0;
    return;
  }
  if (uVar2 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  uVar4 = uVar2 + 1 | 7;
  uVar5 = 0x7ffffffffffffffe;
  if (((uVar4 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (uVar1 = (uVar3 >> 1) + uVar3, uVar5 = uVar4, uVar4 < uVar1)) {
    uVar5 = uVar1;
  }
  _Dst = (void *)FUN_180004ec0(uVar4,uVar5 + 1);
  _Size = uVar2 * 2;
  param_1[2] = uVar2 + 1;
  param_1[3] = uVar5;
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,_Size);
    *(undefined2 *)(_Size + (longlong)_Dst) = param_2;
    *(undefined2 *)(_Size + 2 + (longlong)_Dst) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined2 *)(_Size + (longlong)_Dst) = param_2;
    *(undefined2 *)(_Size + 2 + (longlong)_Dst) = 0;
    _Memory = _Src;
    if ((0xfff < uVar3 * 2 + 2) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return;
}



// FUNCTION 180018640 FUN_180018640
// THUNK false
// CALLS 1800187f0 free
// CALLS 180019703 memcpy
// CALLS 180001370 FUN_180001370
// CALLS 180004ec0 FUN_180004ec0
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

undefined8 * FUN_180018640(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Src;
  size_t _Size;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  
  lVar3 = param_1[2];
  if (0x7ffffffffffffffeU - lVar3 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_180001370();
  }
  uVar4 = param_1[3];
  uVar1 = lVar3 + 8;
  uVar5 = uVar1 | 7;
  uVar6 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) &&
     (uVar2 = (uVar4 >> 1) + uVar4, uVar6 = uVar5, uVar5 < uVar2)) {
    uVar6 = uVar2;
  }
  _Dst = (void *)FUN_180004ec0(uVar5,uVar6 + 1);
  _Size = lVar3 * 2;
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  if (uVar4 < 8) {
    memcpy(_Dst,param_1,_Size);
    *(undefined8 *)(_Size + (longlong)_Dst) = 0;
    *(undefined8 *)(_Size + 8 + (longlong)_Dst) = 0;
    *(undefined2 *)((longlong)_Dst + uVar1 * 2) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined8 *)(_Size + (longlong)_Dst) = 0;
    *(undefined8 *)(_Size + 8 + (longlong)_Dst) = 0;
    *(undefined2 *)((longlong)_Dst + uVar1 * 2) = 0;
    _Memory = _Src;
    if ((0xfff < uVar4 * 2 + 2) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 180018768 _Facet_Register
// THUNK false
// CALLS 180018824 FUN_180018824

/* Library Function - Single Match
    void __cdecl std::_Facet_Register(class std::_Facet_base * __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180018824(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_180023650;
    puVar1[1] = param_1;
  }
  DAT_180023650 = puVar1;
  return;
}



// FUNCTION 1800187a6 showmanyc
// THUNK true

// FUNCTION 1800187ac _Decref
// THUNK true

// FUNCTION 1800187b2 _Incref
// THUNK true

// FUNCTION 1800187d0 __security_check_cookie
// THUNK false
// CALLS 18001889c FUN_18001889c

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180023010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18001889c();
  return;
}



// FUNCTION 1800187f0 free
// THUNK true

// FUNCTION 1800187f8 FUN_1800187f8
// THUNK false
// CALLS 1800187f0 free

undefined8 * FUN_1800187f8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 180018824 FUN_180018824
// THUNK false
// CALLS 1800195c0 _callnewh
// CALLS 1800195ba malloc
// CALLS 1800012d0 FUN_1800012d0
// CALLS 1800190f0 FUN_1800190f0

void FUN_180018824(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800012d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800190f0();
}



// FUNCTION 180018860 thunk_FUN_180018824
// THUNK true

// FUNCTION 180018868 __raise_securityfailure
// THUNK false
// CALLS EXTERNAL:0000001c SetUnhandledExceptionFilter
// CALLS EXTERNAL:00000017 UnhandledExceptionFilter
// CALLS EXTERNAL:00000015 GetCurrentProcess

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180018895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// FUNCTION 18001889c FUN_18001889c
// THUNK false
// CALLS EXTERNAL:00000013 IsProcessorFeaturePresent
// CALLS 180018970 capture_previous_context
// CALLS 180018868 __raise_securityfailure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001889c(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800188c7;
  capture_previous_context((PCONTEXT)&DAT_180023700);
  _DAT_180023670 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180023798 = puVar3 + 0x40;
  _DAT_180023780 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180023660 = 0xc0000409;
  _DAT_180023664 = 1;
  _DAT_180023678 = 1;
  DAT_180023680 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180023010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180023008;
  *(undefined8 *)(puVar3 + -8) = 0x180018969;
  DAT_1800237f8 = _DAT_180023670;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18001b5e0);
  return;
}



// FUNCTION 180018970 capture_previous_context
// THUNK false
// CALLS EXTERNAL:00000006 RtlLookupFunctionEntry
// CALLS EXTERNAL:00000016 RtlVirtualUnwind
// CALLS EXTERNAL:0000001d RtlCaptureContext

/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// FUNCTION 1800189e4 __scrt_acquire_startup_lock
// THUNK false
// CALLS 1800192c4 __scrt_is_ucrt_dll_in_use

/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  ulonglong uVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_180018a12:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_180023bd8 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_180023bd8;
        uVar1 = DAT_180023bd8;
      }
      DAT_180023bd8 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_180018a12;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 180018a20 __scrt_dllmain_after_initialize_c
// THUNK false
// CALLS 1800195d2 _initialize_narrow_environment
// CALLS 1800192bc FUN_1800192bc
// CALLS 1800195cc _configure_narrow_argv
// CALLS 1800192c4 __scrt_is_ucrt_dll_in_use
// CALLS 180019110 FUN_180019110

/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_1800192bc();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_180019110();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 180018a54 FUN_180018a54
// THUNK false
// CALLS 180018b9c FUN_180018b9c

bool FUN_180018a54(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180018b9c(0);
  return (char)uVar1 != '\0';
}



// FUNCTION 180018a6c FUN_180018a6c
// THUNK false
// CALLS 180019604 FUN_180019604

undefined1 FUN_180018a6c(void)

{
  char cVar1;
  
  cVar1 = FUN_180019604();
  if (cVar1 != '\0') {
    cVar1 = FUN_180019604();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180019604();
  }
  return 0;
}



// FUNCTION 180018a94 FUN_180018a94
// THUNK false
// CALLS 180019604 FUN_180019604

undefined1 FUN_180018a94(void)

{
  FUN_180019604();
  FUN_180019604();
  return 1;
}



// FUNCTION 180018aac __scrt_dllmain_exception_filter
// THUNK false
// CALLS 1800195c6 _seh_filter_dll
// CALLS 180019720 _guard_dispatch_icall
// CALLS 1800192c4 __scrt_is_ucrt_dll_in_use

/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,
               undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_18001b508)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



// FUNCTION 180018b0c __scrt_dllmain_uninitialize_c
// THUNK false
// CALLS 1800195e4 _execute_onexit_table
// CALLS 180017a20 FUN_180017a20
// CALLS 1800195f0 _cexit
// CALLS 1800192c4 __scrt_is_ucrt_dll_in_use

/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180023be8);
    return;
  }
  uVar2 = FUN_180017a20();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}



// FUNCTION 180018b3c FUN_180018b3c
// THUNK false
// CALLS 180019604 FUN_180019604

void FUN_180018b3c(void)

{
  FUN_180019604();
  FUN_180019604();
  return;
}



// FUNCTION 180018b50 __scrt_initialize_crt
// THUNK false
// CALLS 180019604 FUN_180019604
// CALLS 180019110 FUN_180019110

/* Library Function - Single Match
    __scrt_initialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180023be0 = 1;
  }
  FUN_180019110();
  cVar1 = FUN_180019604();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180019604();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180019604();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 180018b9c FUN_180018b9c
// THUNK false
// CALLS 1800195d8 _initialize_onexit_table
// CALLS 1800192d8 FUN_1800192d8
// CALLS 1800192c4 __scrt_is_ucrt_dll_in_use

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180018b9c(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180023be1 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800192d8(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180023be8 = _DAT_18001c740;
      uRam0000000180023bf0 = _UNK_18001c748;
      _DAT_180023bf8 = 0xffffffffffffffff;
      _DAT_180023c00 = _DAT_18001c740;
      uRam0000000180023c08 = _UNK_18001c748;
      _DAT_180023c10 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180023be8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180023c00), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180023be1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// FUNCTION 180018c28 FUN_180018c28
// THUNK false

ulonglong FUN_180018c28(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar3 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -4) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +
              0x18 + lVar3 + 0x180000000;
      uVar1 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x180000000U < uVar1)) goto LAB_180018c9e;
      }
      lVar4 = 0;
LAB_180018c9e:
      if (lVar4 == 0) {
        return uVar1 & 0xffffffffffffff00;
      }
      uVar2 = (uint7)(uVar1 >> 8);
      if (*(int *)(lVar4 + 0x24) < 0) {
        return (ulonglong)uVar2 << 8;
      }
      return CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 180018cc0 __scrt_release_startup_lock
// THUNK false
// CALLS 1800192c4 __scrt_is_ucrt_dll_in_use

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180023bd8 = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 180018ce4 __scrt_uninitialize_crt
// THUNK false
// CALLS 180019604 FUN_180019604

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180023be0 == '\0') || (param_2 == '\0')) {
    FUN_180019604();
    FUN_180019604();
  }
  return 1;
}



// FUNCTION 180018d10 _onexit
// THUNK false
// CALLS 1800195ea _crt_atexit
// CALLS 1800195de _register_onexit_function

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180023be8 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180023be8);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



// FUNCTION 180018d4c atexit
// THUNK false
// CALLS 180018d10 _onexit

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// FUNCTION 180018d64 FUN_180018d64
// THUNK false
// CALLS 180018db4 FUN_180018db4
// CALLS 180018a6c FUN_180018a6c
// CALLS 180018a94 FUN_180018a94
// CALLS 180018ecc FUN_180018ecc

ulonglong FUN_180018d64(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined7 extraout_var;
  
  if (param_2 == 0) {
    bVar1 = FUN_180018ecc(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != 0));
    return CONCAT71(extraout_var,bVar1);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_180018a6c();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_180018a94();
    }
    return (ulonglong)bVar1;
  }
  uVar2 = FUN_180018db4(param_1,param_3);
  return uVar2;
}



// FUNCTION 180018db4 FUN_180018db4
// THUNK false
// CALLS 1800189e4 __scrt_acquire_startup_lock
// CALLS 180018a20 __scrt_dllmain_after_initialize_c
// CALLS 180019720 _guard_dispatch_icall
// CALLS 180019510 FUN_180019510
// CALLS 1800195f6 _initterm
// CALLS 180018cc0 __scrt_release_startup_lock
// CALLS 180018a54 FUN_180018a54
// CALLS 1800194f4 FUN_1800194f4
// CALLS 180019518 FUN_180019518
// CALLS 1800192d8 FUN_1800192d8
// CALLS 1800194d0 FUN_1800194d0
// CALLS 180018c28 FUN_180018c28
// CALLS 180018b50 __scrt_initialize_crt
// CALLS 1800195fc _initterm_e

undefined8 FUN_180018db4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar4 = __scrt_initialize_crt(0);
  if ((char)uVar4 != '\0') {
    uVar4 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180023bd0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800192d8(7);
    }
    DAT_180023bd0 = 1;
    bVar2 = FUN_180018a54();
    if (bVar2) {
      FUN_180019518();
      FUN_1800194d0();
      FUN_1800194f4();
      iVar3 = _initterm_e(&DAT_18001b598,&DAT_18001b5a0);
      if ((iVar3 == 0) && (uVar5 = __scrt_dllmain_after_initialize_c(), (char)uVar5 != '\0')) {
        _initterm(&DAT_18001b530,&DAT_18001b590);
        DAT_180023bd0 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar4);
    if (!bVar1) {
      plVar6 = (longlong *)FUN_180019510();
      if ((*plVar6 != 0) && (uVar7 = FUN_180018c28((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_18001b508)(param_1,2,param_2);
      }
      DAT_180023c18 = DAT_180023c18 + 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 180018ecc FUN_180018ecc
// THUNK false
// CALLS 180018b3c FUN_180018b3c
// CALLS 180018ce4 __scrt_uninitialize_crt
// CALLS 1800189e4 __scrt_acquire_startup_lock
// CALLS 1800192d8 FUN_1800192d8
// CALLS 1800194e0 FUN_1800194e0
// CALLS 180018b0c __scrt_dllmain_uninitialize_c
// CALLS 180019554 FUN_180019554
// CALLS 180018cc0 __scrt_release_startup_lock

byte FUN_180018ecc(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  uVar1 = (undefined1)param_1;
  if (DAT_180023c18 < 1) {
    bVar5 = 0;
  }
  else {
    DAT_180023c18 = DAT_180023c18 + -1;
    uVar3 = __scrt_acquire_startup_lock();
    if (DAT_180023bd0 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800192d8(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_1800194e0();
    FUN_180019554();
    DAT_180023bd0 = 0;
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar3);
    cVar2 = __scrt_uninitialize_crt(CONCAT71(uVar4,uVar1),'\0');
    bVar5 = -(cVar2 != '\0') & 1;
    FUN_180018b3c();
  }
  return bVar5;
}



// FUNCTION 180018f50 dllmain_dispatch
// THUNK false
// CALLS 180019720 _guard_dispatch_icall
// CALLS 1800067e0 FUN_1800067e0
// CALLS 180018d64 FUN_180018d64
// CALLS 180018ecc FUN_180018ecc

/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  HINSTANCE__ *pHVar3;
  int iVar4;
  
  if ((param_2 == 0) && (DAT_180023c18 < 1)) {
    iVar4 = 0;
  }
  else {
    if (param_2 - 1 < 2) {
      if ((DAT_18001b5f0 != 0) &&
         (iVar4 = (*(code *)PTR__guard_dispatch_icall_18001b508)(), iVar4 == 0)) {
        return 0;
      }
      uVar1 = FUN_180018d64(param_1,param_2,(longlong)param_3);
      if ((int)uVar1 == 0) {
        return 0;
      }
    }
    uVar2 = FUN_1800067e0(param_1,param_2);
    iVar4 = (int)uVar2;
    if ((param_2 == 1) && (iVar4 == 0)) {
      pHVar3 = param_1;
      FUN_1800067e0(param_1,0);
      FUN_180018ecc(CONCAT71((int7)((ulonglong)pHVar3 >> 8),param_3 != (void *)0x0));
      if (DAT_18001b5f0 != 0) {
        (*(code *)PTR__guard_dispatch_icall_18001b508)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = FUN_180018d64(param_1,param_2,(longlong)param_3);
      iVar4 = 0;
      if ((int)uVar1 != 0) {
        if (DAT_18001b5f0 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = (*(code *)PTR__guard_dispatch_icall_18001b508)(param_1,param_2,param_3);
        }
      }
    }
  }
  return iVar4;
}



// FUNCTION 180019084 entry
// THUNK false
// CALLS 180018f50 dllmain_dispatch
// CALLS 180019424 __security_init_cookie

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}



// FUNCTION 1800190c4 _guard_check_icall
// THUNK false

void _guard_check_icall(void)

{
  return;
}



// FUNCTION 1800190c8 free
// THUNK true

// FUNCTION 1800190d0 FUN_1800190d0
// THUNK false

undefined8 * FUN_1800190d0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



// FUNCTION 1800190f0 FUN_1800190f0
// THUNK false
// CALLS 1800195a2 _CxxThrowException
// CALLS 1800190d0 FUN_1800190d0

void FUN_1800190f0(void)

{
  undefined8 local_28 [5];
  
  FUN_1800190d0(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001f140);
}



// FUNCTION 180019110 FUN_180019110
// THUNK false

/* WARNING: Removing unreachable block (ram,0x0001800191da) */
/* WARNING: Removing unreachable block (ram,0x00018001914a) */
/* WARNING: Removing unreachable block (ram,0x000180019123) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180019110(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  uVar8 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_180023028 = 0xffffffffffffffff;
    uVar7 = *puVar2 & 0xfff3ff0;
    _DAT_180023020 = 0x8000;
    if ((((uVar7 == 0x106c0) || (uVar7 == 0x20660)) || (uVar7 == 0x20670)) ||
       ((uVar7 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar7 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180023c1c = DAT_180023c1c | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = *(uint *)(lVar3 + 4);
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_180023c1c = DAT_180023c1c | 2;
    }
  }
  _DAT_180023018 = 1;
  DAT_18002301c = 2;
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180023018 = 2;
    DAT_18002301c = 6;
    if (((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) {
      uVar5 = xinuse(0);
      bVar6 = in_XCR0 & (byte)uVar5;
      if ((bVar6 & 6) == 6) {
        DAT_18002301c = 0xe;
        _DAT_180023018 = 3;
        if ((uVar8 & 0x20) != 0) {
          _DAT_180023018 = 5;
          DAT_18002301c = 0x2e;
          if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
            DAT_18002301c = 0x6e;
            _DAT_180023018 = 6;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1800192bc FUN_1800192bc
// THUNK false

undefined8 FUN_1800192bc(void)

{
  return 1;
}



// FUNCTION 1800192c4 __scrt_is_ucrt_dll_in_use
// THUNK false

/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180023030 != 0;
}



// FUNCTION 1800192d0 FUN_1800192d0
// THUNK false

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800192d0(void)

{
  _DAT_180023c20 = 0;
  return;
}



// FUNCTION 1800192d8 FUN_1800192d8
// THUNK false
// CALLS 1800195a8 memset
// CALLS EXTERNAL:0000001c SetUnhandledExceptionFilter
// CALLS EXTERNAL:00000017 UnhandledExceptionFilter
// CALLS EXTERNAL:00000006 RtlLookupFunctionEntry
// CALLS EXTERNAL:00000013 IsProcessorFeaturePresent
// CALLS EXTERNAL:00000016 RtlVirtualUnwind
// CALLS EXTERNAL:0000001d RtlCaptureContext
// CALLS 1800192d0 FUN_1800192d0
// CALLS EXTERNAL:00000012 IsDebuggerPresent

void FUN_1800192d8(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x18001930c;
  FUN_1800192d0();
  *(undefined8 *)(puVar4 + -8) = 0x18001931d;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180019327;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180019341;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180019382;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800193b4;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800193d6;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800193f7;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180019402;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180019412;
    FUN_1800192d0();
  }
  return;
}



// FUNCTION 180019424 __security_init_cookie
// THUNK false
// CALLS EXTERNAL:0000000a GetCurrentProcessId
// CALLS EXTERNAL:0000000b QueryPerformanceCounter
// CALLS EXTERNAL:0000001a GetCurrentThreadId
// CALLS EXTERNAL:00000008 GetSystemTimeAsFileTime

/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_180023010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180023010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180023010 == 0x2b992ddfa232) {
      DAT_180023010 = 0x2b992ddfa233;
    }
  }
  DAT_180023008 = ~DAT_180023010;
  return;
}



// FUNCTION 1800194d0 FUN_1800194d0
// THUNK false

void FUN_1800194d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800194d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180023c30);
  return;
}



// FUNCTION 1800194e0 FUN_1800194e0
// THUNK false
// CALLS 1800195ae __std_type_info_destroy_list

void FUN_1800194e0(void)

{
  __std_type_info_destroy_list(&DAT_180023c30);
  return;
}



// FUNCTION 1800194ec FUN_1800194ec
// THUNK false

undefined * FUN_1800194ec(void)

{
  return &DAT_180023c40;
}



// FUNCTION 1800194f4 FUN_1800194f4
// THUNK false
// CALLS 1800194ec FUN_1800194ec
// CALLS 180001160 FUN_180001160

void FUN_1800194f4(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001160();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1800194ec();
  *puVar1 = *puVar1 | 2;
  return;
}



// FUNCTION 180019510 FUN_180019510
// THUNK false

undefined * FUN_180019510(void)

{
  return &DAT_18002af80;
}



// FUNCTION 180019518 FUN_180019518
// THUNK false
// CALLS 180019720 _guard_dispatch_icall

void FUN_180019518(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_18001d6f0; plVar1 < &DAT_18001d6f0; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18001b508)();
    }
  }
  return;
}



// FUNCTION 180019554 FUN_180019554
// THUNK false
// CALLS 180019720 _guard_dispatch_icall

void FUN_180019554(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_18001d700; plVar1 < &DAT_18001d700; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18001b508)();
    }
  }
  return;
}



// FUNCTION 180019590 __CxxFrameHandler4
// THUNK true

// FUNCTION 1800195a2 _CxxThrowException
// THUNK true

// FUNCTION 1800195a8 memset
// THUNK true

// FUNCTION 1800195ae __std_type_info_destroy_list
// THUNK true

// FUNCTION 1800195b4 free
// THUNK true

// FUNCTION 1800195ba malloc
// THUNK true

// FUNCTION 1800195c0 _callnewh
// THUNK true

// FUNCTION 1800195c6 _seh_filter_dll
// THUNK true

// FUNCTION 1800195cc _configure_narrow_argv
// THUNK true

// FUNCTION 1800195d2 _initialize_narrow_environment
// THUNK true

// FUNCTION 1800195d8 _initialize_onexit_table
// THUNK true

// FUNCTION 1800195de _register_onexit_function
// THUNK true

// FUNCTION 1800195e4 _execute_onexit_table
// THUNK true

// FUNCTION 1800195ea _crt_atexit
// THUNK true

// FUNCTION 1800195f0 _cexit
// THUNK true

// FUNCTION 1800195f6 _initterm
// THUNK true

// FUNCTION 1800195fc _initterm_e
// THUNK true

// FUNCTION 180019604 FUN_180019604
// THUNK false

undefined1 FUN_180019604(void)

{
  return 1;
}



// FUNCTION 180019608 __GSHandlerCheck
// THUNK false
// CALLS 180019628 __GSHandlerCheckCommon

/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}



// FUNCTION 180019628 __GSHandlerCheckCommon
// THUNK false
// CALLS 1800187d0 __security_check_cookie

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}



// FUNCTION 180019684 FID_conflict:__GSHandlerCheck_EH
// THUNK false
// CALLS 180019590 __CxxFrameHandler4
// CALLS 180019628 __GSHandlerCheckCommon

/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 180019703 memcpy
// THUNK true

// FUNCTION 180019709 memmove
// THUNK true

// FUNCTION 180019720 _guard_dispatch_icall
// THUNK false

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180019720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 180019740 _guard_dispatch_icall
// THUNK true

// FUNCTION 180019820 FUN_180019820
// THUNK false
// CALLS EXTERNAL:0000003d ~basic_ios<wchar_t,std::char_traits<wchar_t>_>

void FUN_180019820(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(param_2 + 0xe8));
  }
  return;
}



// FUNCTION 1800198e0 FUN_1800198e0
// THUNK false
// CALLS EXTERNAL:00000036 setstate

undefined8 FUN_1800198e0(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x60) + 4) +
             (longlong)*(longlong **)(param_2 + 0x60)),4,true);
  return 0;
}



// FUNCTION 180019920 FUN_180019920
// THUNK false
// CALLS 1800195a2 _CxxThrowException
// CALLS 1800045d0 FUN_1800045d0
// CALLS 1800049d0 FUN_1800049d0

void FUN_180019920(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  FUN_1800049d0(plVar1,*(longlong **)(param_2 + 0x88));
  FUN_1800045d0(plVar1,*(void **)(param_2 + 0x20),*(longlong *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 180019960 FUN_180019960
// THUNK false
// CALLS 1800040f0 FUN_1800040f0

void FUN_180019960(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800040f0(*(longlong **)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 180019e10 FUN_180019e10
// THUNK false
// CALLS 1800187f0 free

void FUN_180019e10(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}



// FUNCTION 180019e30 FUN_180019e30
// THUNK false
// CALLS 180004080 FUN_180004080

void FUN_180019e30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180004080(*(longlong **)(param_2 + 0x58));
  }
  return;
}



// FUNCTION 180019e7c FUN_180019e7c
// THUNK false

bool FUN_180019e7c(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



// FUNCTION 180019e94 FUN_180019e94
// THUNK false
// CALLS 180018cc0 __scrt_release_startup_lock

void FUN_180019e94(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}



// FUNCTION 180019eab FUN_180019eab
// THUNK false
// CALLS 180018cc0 __scrt_release_startup_lock

void FUN_180019eab(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}



// FUNCTION 180019ec4 FUN_180019ec4
// THUNK false
// CALLS 180018b3c FUN_180018b3c

void FUN_180019ec4(void)

{
  FUN_180018b3c();
  return;
}



// FUNCTION 180019ed8 FUN_180019ed8
// THUNK false
// CALLS 180018aac __scrt_dllmain_exception_filter

void FUN_180019ed8(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),FUN_180018d64,*(undefined4 *)*param_1,param_1);
  return;
}



// FUNCTION 180019f20 FUN_180019f20
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019f20(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < DAT_180023078) {
    pvVar1 = (void *)CONCAT62(DAT_180023060._2_6_,(undefined2)DAT_180023060);
    _Memory = pvVar1;
    if ((0xfff < DAT_180023078 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  DAT_180023070 = _DAT_18001c720;
  DAT_180023078 = _UNK_18001c728;
  DAT_180023060._0_2_ = 0;
  return;
}



// FUNCTION 180019f90 FUN_180019f90
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019f90(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < DAT_180023098) {
    pvVar1 = (void *)CONCAT62(DAT_180023080._2_6_,(undefined2)DAT_180023080);
    _Memory = pvVar1;
    if ((0xfff < DAT_180023098 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  DAT_180023090 = _DAT_18001c720;
  DAT_180023098 = _UNK_18001c728;
  DAT_180023080._0_2_ = 0;
  return;
}



// FUNCTION 18001a000 FUN_18001a000
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_18001a000(void)

{
  void *_Memory;
  
  if (DAT_18002a5a0 != (void *)0x0) {
    _Memory = DAT_18002a5a0;
    if ((0xfff < (ulonglong)((DAT_18002a5b0 - (longlong)DAT_18002a5a0 >> 2) << 2)) &&
       (_Memory = *(void **)((longlong)DAT_18002a5a0 + -8),
       0x1f < (ulonglong)((longlong)DAT_18002a5a0 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    DAT_18002a5a0 = (void *)0x0;
    DAT_18002a5a8 = 0;
    DAT_18002a5b0 = 0;
  }
  return;
}



// FUNCTION 18001a080 FUN_18001a080
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_18001a080(void)

{
  void *_Memory;
  
  if (DAT_18002a5b8 != (void *)0x0) {
    _Memory = DAT_18002a5b8;
    if ((0xfff < (ulonglong)((DAT_18002a5c8 - (longlong)DAT_18002a5b8 >> 2) << 2)) &&
       (_Memory = *(void **)((longlong)DAT_18002a5b8 + -8),
       0x1f < (ulonglong)((longlong)DAT_18002a5b8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    DAT_18002a5b8 = (void *)0x0;
    DAT_18002a5c0 = 0;
    DAT_18002a5c8 = 0;
  }
  return;
}



// FUNCTION 18001a100 FUN_18001a100
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a100(void)

{
  void *pvVar1;
  void *pvVar2;
  
  if (7 < DAT_180023198) {
    pvVar1 = (void *)CONCAT62(DAT_180023180._2_6_,(undefined2)DAT_180023180);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180023198 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_18001a1c6;
    free(pvVar2);
  }
  _DAT_180023190 = _DAT_18001c720;
  DAT_180023198 = _UNK_18001c728;
  DAT_180023180._0_2_ = 0;
  if (7 < DAT_180023150) {
    pvVar1 = (void *)CONCAT62(DAT_180023138._2_6_,(undefined2)DAT_180023138);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180023150 * 2 + 2) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_18001a1c6:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  _DAT_180023148 = 0;
  DAT_180023150 = 7;
  DAT_180023138._0_2_ = 0;
  return;
}



// FUNCTION 18001a1d0 FUN_18001a1d0
// THUNK false
// CALLS 1800187f0 free
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a1d0(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_1800231b8) {
    pvVar1 = (void *)CONCAT71(DAT_1800231a0._1_7_,(undefined1)DAT_1800231a0);
    _Memory = pvVar1;
    if ((0xfff < DAT_1800231b8 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  _DAT_1800231b0 = _DAT_18001c730;
  DAT_1800231b8 = _UNK_18001c738;
  DAT_1800231a0._0_1_ = 0;
  return;
}



// FUNCTION 18001a260 FUN_18001a260
// THUNK false
// CALLS 1800187f0 free
// CALLS 1800049d0 FUN_1800049d0
// CALLS EXTERNAL:00000079 _invalid_parameter_noinfo_noreturn

void FUN_18001a260(void)

{
  longlong *_Memory;
  
  if (DAT_18002af58 != (longlong *)0x0) {
    FUN_1800049d0(DAT_18002af58,DAT_18002af60);
    _Memory = DAT_18002af58;
    if ((0xfff < (DAT_18002af68 - (longlong)DAT_18002af58 & 0xffffffffffffffe0U)) &&
       (_Memory = (longlong *)DAT_18002af58[-1],
       0x1f < (ulonglong)((longlong)DAT_18002af58 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    DAT_18002af58 = (longlong *)0x0;
    DAT_18002af60 = (longlong *)0x0;
    DAT_18002af68 = 0;
  }
  return;
}



// FUNCTION 18001a2dc ~_Fac_tidy_reg_t
// THUNK false
// CALLS 1800187f0 free
// CALLS 180019720 _guard_dispatch_icall

/* Library Function - Single Match
    public: __cdecl std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  while (_Memory = DAT_180023650, DAT_180023650 != (undefined8 *)0x0) {
    DAT_180023650 = (undefined8 *)*DAT_180023650;
    lVar1 = (*(code *)PTR__guard_dispatch_icall_18001b508)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18001b508)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}


// TOTAL completed=352 failed=0

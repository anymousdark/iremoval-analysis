/* 18051d670  FUN_18051d670  body=140 */

undefined8 FUN_18051d670(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_res20 [2];
  
  local_res20[0] = param_4;
  if (param_2 == 0) {
    if (param_4 < param_3) {
      uVar2 = func_0x0001802fcda0(param_4);
      return uVar2;
    }
  }
  else {
    if (param_1 != 0) {
      lVar3 = func_0x00018000c510(0x18085a0f8);
      *(uint *)(lVar3 + 8) = local_res20[0];
      iVar1 = func_0x0001806ca210(param_1,lVar3,local_res20);
      if (iVar1 == 0) {
        return 0x180759410;
      }
    }
    if (local_res20[0] < *(uint *)(param_2 + 8)) {
      if (*(uint *)(param_2 + 8) <= local_res20[0]) {
        uVar2 = func_0x00018039d020();
        return uVar2;
      }
      return *(undefined8 *)(param_2 + 0x10 + (ulonglong)local_res20[0] * 8);
    }
  }
  return 0x180759410;
}


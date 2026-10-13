/* 1801b2fa0  FUN_1801b2fa0  body=243 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801b2fa0(longlong param_1,undefined1 *param_2,int param_3,longlong param_4,
                       int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_48;
  undefined1 local_47;
  longlong local_40;
  
  local_40 = _DAT_180fe7000;
  local_48 = *(undefined1 *)(param_1 + 0x2c);
  if (0 < param_3) {
    local_47 = *param_2;
  }
  uVar5 = (uint)(0 < param_3);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))();
  uVar2 = FUN_1801b25f0(uVar1,&local_48,uVar5 + 1,param_4,param_5);
  if (0 < (int)(param_3 - uVar5)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))();
    if (param_4 == 0) {
      param_4 = 0;
      param_5 = 0;
    }
    else {
      param_4 = param_4 + (longlong)(int)uVar2 * 2;
      param_5 = param_5 - uVar2;
    }
    iVar3 = FUN_1801b25f0(uVar1,param_2 + (int)uVar5,param_3 - uVar5,param_4,param_5);
    uVar2 = uVar2 + iVar3;
  }
  uVar4 = (ulonglong)uVar2;
  if (local_40 != _DAT_180fe7000) {
    uVar4 = func_0x00018000cd70();
  }
  return uVar4;
}


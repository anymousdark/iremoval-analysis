/* 18050a410  FUN_18050a410  body=144 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18050a410(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_18 [2];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (param_2 < *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50) + 8)) {
      uVar3 = FUN_18050a4a0(param_1,param_2);
      return uVar3;
    }
  }
  else {
    lVar2 = func_0x00018000c510(0x18085a0f8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(lVar2 + 8) = param_2;
    iVar1 = func_0x0001806ca210(uVar3,lVar2,local_18);
    if (iVar1 != 0) {
      uVar3 = FUN_18050a4a0(param_1,local_18[0]);
      return uVar3;
    }
  }
  if (_DAT_180806ac0 != 0) {
    func_0x000180003dbc();
  }
  return *(undefined8 *)(_DAT_180fe0df0 + 8);
}


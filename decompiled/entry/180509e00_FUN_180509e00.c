/* 180509e00  FUN_180509e00  body=140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180509e00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_1 + 1) <= *(uint *)(param_1 + 3)) {
    uVar2 = func_0x000180596370();
    lVar1 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if (lVar1 != 0) {
      if (_DAT_180807be8 != 0) {
        func_0x0001800041dc();
      }
      func_0x000180596700(*(undefined8 *)(_DAT_180fe2470 + 8),lVar1,0);
    }
    return uVar2;
  }
  uVar2 = func_0x000180302930();
  return uVar2;
}


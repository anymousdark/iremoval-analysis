/* 180534150  FUN_180534150  body=82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180534150(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_180533fa0(param_1,4);
  if (*(int *)(lVar2 + 8) != 4) {
    return *(undefined8 *)(_DAT_180fe2458 + 8);
  }
  uVar1 = (**(code **)(**(longlong **)(_DAT_180fe0e90 + 8) + 0x50))
                    (*(longlong **)(_DAT_180fe0e90 + 8),lVar2,0);
  uVar3 = FUN_180533fa0(param_1,uVar1);
  return uVar3;
}


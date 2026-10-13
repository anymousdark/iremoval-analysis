/* 1801b5ba0  FUN_1801b5ba0  body=120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b5ba0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_18 [2];
  
  plVar2 = (longlong *)FUN_1801b6d70(param_1,0x101000,0);
  iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_1801b8f70(plVar2,param_1 + 0xf5,local_18);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xec) = 1;
      *(undefined4 *)(param_1 + 0xd8) = local_18[0];
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xec) = 1;
  }
  (*_DAT_18080eee0)(plVar2);
  return;
}


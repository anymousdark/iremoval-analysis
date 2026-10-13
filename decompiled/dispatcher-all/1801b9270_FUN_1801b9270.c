/* 1801b9270  FUN_1801b9270  body=47 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1801b9270(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = (*_DAT_180818230)(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8));
    return iVar1 != 0;
  }
  return false;
}


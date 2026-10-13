/* 1801b9c70  FUN_1801b9c70  body=105 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b9c70(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_1801b8730(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    uVar1 = func_0x0001800cfee0(0x80000004,*(undefined8 *)(param_1 + 0x10),0);
    func_0x00018000c720(param_1 + 8,uVar1);
    return;
  }
  if (_DAT_180805910 != 0) {
    func_0x000180001c3c();
  }
  func_0x00018000c720(param_1 + 8,*(undefined8 *)(_DAT_180fdfad8 + 0x28));
  return;
}


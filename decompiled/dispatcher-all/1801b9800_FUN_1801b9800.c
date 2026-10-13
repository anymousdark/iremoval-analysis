/* 1801b9800  FUN_1801b9800  body=162 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b9800(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = func_0x000180725000(0x1807f8c40,_DAT_180fdfdb0 + 0x18);
    func_0x00018032f430(uVar1);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = func_0x00018000c510(0x180839970);
      func_0x00018000c720(lVar2 + 0x10,*(undefined8 *)(param_1 + 0x10));
      FUN_1801b9c70(lVar2);
      func_0x00018000c720(param_1 + 8,lVar2);
    }
    func_0x00018032f6a0(uVar1);
  }
  FUN_1801b9ce0(*(undefined8 *)(param_1 + 8),param_2);
  return;
}


/* 1805039c0  FUN_1805039c0  body=76 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1805039c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  func_0x0001800bf5f4(0);
  uVar1 = FUN_180504270(param_1);
  uVar2 = func_0x0001800bf600();
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  if (_DAT_181008818 != 0) {
    func_0x00018000dee0();
  }
  return uVar1;
}


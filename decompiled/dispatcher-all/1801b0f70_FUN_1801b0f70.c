/* 1801b0f70  FUN_1801b0f70  body=84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1801b0f70(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  func_0x0001800bf5f4(0);
  iVar1 = FUN_1801b0fd0(param_1);
  uVar2 = func_0x0001800bf600();
  lVar3 = func_0x000180004bd4();
  *(undefined4 *)(lVar3 + 0xf8) = uVar2;
  if (_DAT_181008818 != 0) {
    func_0x00018000dee0();
  }
  return iVar1 != 0;
}


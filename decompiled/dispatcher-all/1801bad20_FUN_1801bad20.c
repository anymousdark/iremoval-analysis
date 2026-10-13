/* 1801bad20  FUN_1801bad20  body=85 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1801bad20(longlong param_1)

{
  int iVar1;
  undefined4 local_10 [2];
  
  if (param_1 != 0) {
    if (_DAT_180805bf0 != 0) {
      func_0x00018000215c();
    }
    iVar1 = func_0x000180654860(*(undefined8 *)(_DAT_180fdfdc0 + 8),param_1,local_10);
    if (iVar1 != 0) {
      return local_10[0];
    }
  }
  return 0xffffffff;
}


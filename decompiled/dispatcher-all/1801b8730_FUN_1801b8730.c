/* 1801b8730  FUN_1801b8730  body=69 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b8730(longlong param_1)

{
  code *pcVar1;
  
  if (_DAT_180805be8 != 0) {
    func_0x0001800011b3();
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_1801b8c20(param_1);
    return;
  }
  func_0x0001802e1480(param_1,0x1807cc970);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


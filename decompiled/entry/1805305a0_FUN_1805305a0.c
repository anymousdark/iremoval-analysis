/* 1805305a0  FUN_1805305a0  body=123 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805305a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  func_0x00018000c720(param_1 + 0x10,param_2);
  uVar5 = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (0 < iVar1) {
    lVar2 = _DAT_180fe0e88;
    if (_DAT_180806b30 != 0) {
      func_0x000180003efc();
      lVar2 = _DAT_180fe0e88;
    }
    do {
      iVar3 = func_0x0001805972c0(*(undefined8 *)(lVar2 + 0x10),
                                  *(undefined2 *)(param_2 + 0xc + uVar5 * 2));
      if (iVar3 < 0) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        return;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < iVar1);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


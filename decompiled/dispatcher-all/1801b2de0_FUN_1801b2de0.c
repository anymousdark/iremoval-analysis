/* 1801b2de0  FUN_1801b2de0  body=122 */

undefined8 FUN_1801b2de0(longlong param_1,byte param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(uint *)(lVar2 + 8);
  if (uVar1 != 0) {
    if (param_2 < *(byte *)(lVar2 + 0x10)) {
      return 0;
    }
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        if (uVar1 <= uVar3) goto LAB_1801b2e55;
        if (*(byte *)(lVar2 + 0x10 + (ulonglong)uVar3) <= param_2) {
          if (uVar1 <= uVar3 + 1) goto LAB_1801b2e55;
          if (param_2 <= *(byte *)(lVar2 + 0x10 + (ulonglong)(uVar3 + 1))) {
            return 1;
          }
        }
        uVar3 = uVar3 + 2;
      } while ((int)uVar3 < *(int *)(param_1 + 0x28));
    }
    return 0;
  }
LAB_1801b2e55:
  uVar4 = func_0x00018039d020();
  return uVar4;
}


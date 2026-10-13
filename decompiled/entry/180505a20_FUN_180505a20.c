/* 180505a20  FUN_180505a20  body=66 */

ulonglong FUN_180505a20(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)
          ((uint)*(undefined8 *)(param_1 + 0x28) ^
          (uint)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20));
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (0 < *(int *)(lVar1 + 8)) {
    do {
      if (*(uint *)(lVar1 + 8) <= (uint)uVar4) {
        uVar2 = func_0x00018039d020();
        return uVar2;
      }
      uVar2 = (ulonglong)((uint)uVar2 ^ *(uint *)(lVar1 + 0x10 + uVar4 * 4));
      uVar3 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(lVar1 + 8));
  }
  return uVar2;
}


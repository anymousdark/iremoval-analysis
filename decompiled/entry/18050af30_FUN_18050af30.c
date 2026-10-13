/* 18050af30  FUN_18050af30  body=92 */

ulonglong FUN_18050af30(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x48) + 8)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10 + (ulonglong)param_2 * 8);
    if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x50) + 8)) {
      uVar1 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (ulonglong)param_2 * 4) * 2 - 2;
      if (uVar1 < *(uint *)(lVar2 + 8)) {
        uVar1 = *(uint *)(lVar2 + 0x10 + (ulonglong)uVar1 * 4);
        if (-1 < (int)uVar1) {
          return (ulonglong)uVar1;
        }
        if (0xfffffffd - uVar1 < *(uint *)(lVar2 + 8)) {
          return (ulonglong)*(uint *)(lVar2 + 0x10 + (ulonglong)(0xfffffffd - uVar1) * 4);
        }
      }
    }
  }
  uVar3 = func_0x00018039d020();
  return uVar3;
}


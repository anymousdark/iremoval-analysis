/* 18050aed0  FUN_18050aed0  body=85 */

ulonglong FUN_18050aed0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x50) + 8)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (ulonglong)param_2 * 4);
    if (0 < iVar1) {
      if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x48) + 8)) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10 + (ulonglong)param_2 * 8);
        uVar3 = iVar1 * 2 - 1;
        if (uVar3 < *(uint *)(lVar2 + 8)) {
          return (ulonglong)(*(int *)(lVar2 + 0x10 + (ulonglong)uVar3 * 4) != -2);
        }
      }
      uVar4 = func_0x00018039d020();
      return uVar4;
    }
  }
  return 0;
}


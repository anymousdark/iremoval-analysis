/* 180505da0  FUN_180505da0  body=149 */

ulonglong FUN_180505da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    uVar4 = func_0x0001802e15d0(0x1807d1748);
    return uVar4;
  }
  if (*(longlong *)(param_1 + 0x28) < *(longlong *)(param_2 + 0x28)) {
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x28) <= *(longlong *)(param_2 + 0x28)) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(param_2 + 8);
    if (*(int *)(lVar1 + 8) < *(int *)(lVar2 + 8)) {
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 8) <= *(int *)(lVar2 + 8)) {
      uVar4 = 0;
      while( true ) {
        uVar5 = (uint)uVar4;
        if (*(int *)(lVar1 + 8) <= (int)uVar5) {
          return 0;
        }
        if ((*(uint *)(lVar1 + 8) <= uVar5) || (*(uint *)(lVar2 + 8) <= uVar5)) break;
        uVar3 = *(int *)(lVar1 + 0x10 + uVar4 * 4) - *(int *)(lVar2 + 0x10 + uVar4 * 4);
        if (uVar3 != 0) {
          return (ulonglong)uVar3;
        }
        uVar4 = (ulonglong)(uVar5 + 1);
      }
      uVar4 = func_0x00018039d020();
      return uVar4;
    }
  }
  return 1;
}


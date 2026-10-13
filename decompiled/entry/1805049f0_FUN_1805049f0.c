/* 1805049f0  FUN_1805049f0  body=49 */

undefined8 FUN_1805049f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) <= uVar1) {
    uVar3 = func_0x0001803029f0();
    return uVar3;
  }
  lVar2 = *(longlong *)(lVar2 + 8);
  if (uVar1 < *(uint *)(lVar2 + 8)) {
    return *(undefined8 *)(lVar2 + 0x10 + (ulonglong)uVar1 * 8);
  }
  uVar3 = func_0x00018039d020();
  return uVar3;
}


/* 1805270f0  FUN_1805270f0  body=148 */

undefined8 FUN_1805270f0(longlong param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar3 = func_0x0001802e15d0(0x1807c4398);
    return uVar3;
  }
  if (param_2 < 0) {
    func_0x0001806c8650(param_2,0x1807ce448);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 <= param_2) && (iVar2 < param_2)) {
    func_0x0001806c8730(param_2,iVar2,0x1807ce448);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (param_3 < 0) {
    func_0x0001806c8650(param_3,0x1807c5de8);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar2 = iVar2 - param_2;
  if ((iVar2 <= param_3) && (iVar2 < param_3)) {
    func_0x0001806c8730(param_3,iVar2,0x1807c5de8);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 1;
}


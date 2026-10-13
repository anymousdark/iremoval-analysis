/* 1801b51f0  submit  body=87 */

undefined8 submit(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    uVar3 = func_0x00018000c550(0x180839620);
    func_0x0001801b4370(uVar3);
    func_0x0001801b44d0(uVar3,param_1);
    iVar2 = func_0x0001801b4fc0(uVar3);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = uVar3;
    }
    return uVar4;
  }
  func_0x0001802e15d0(0x1807d21d8);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


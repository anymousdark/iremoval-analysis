/* 1801b0430  FUN_1801b0430  body=191 */

void FUN_1801b0430(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_70 [40];
  longlong *local_48;
  
  local_48 = (longlong *)0x0;
  func_0x00018000c9a0(local_70);
  uVar3 = func_0x0001800bf6ae();
  func_0x00018000c9f0(local_70);
  iVar2 = func_0x0001801afac0(uVar3,param_2,uVar3,&local_48,0,0,2);
  if (iVar2 == 0) {
    iVar2 = func_0x0001803767b0();
    plVar1 = local_48;
    (**(code **)(*local_48 + 0x38))(local_48,1);
    func_0x0001802d2050(plVar1);
    if (iVar2 < 0) {
      uVar3 = func_0x000180375320(iVar2);
      func_0x00018000cfe0(uVar3);
      return;
    }
  }
  func_0x000180339590(param_1,local_48);
  return;
}


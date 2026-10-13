/* 1801ba100  resolve  body=113 */

longlong * resolve(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  
  plVar4 = (longlong *)func_0x0001801bad80(param_1,1);
  iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
  if (iVar2 == 0) {
    return (longlong *)0x0;
  }
  uVar3 = func_0x0001801a1ab0(plVar4);
  plVar4 = (longlong *)func_0x00018036c020(uVar3,0,param_3,param_4,unaff_RBX);
  if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0x180839750)) {
    func_0x0001803706a0();
    pcVar1 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar1)();
    return plVar4;
  }
  return plVar4;
}


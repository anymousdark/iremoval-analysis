/* 180503d50  FUN_180503d50  body=204 */

undefined1 FUN_180503d50(undefined4 param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 local_68 [40];
  
  func_0x00018000c9a0(local_68);
  uVar3 = func_0x0001800bf726();
  func_0x00018000c9f0(local_68);
  iVar2 = FUN_180503c10(uVar3,param_1,param_2 != 1,param_3);
  if (iVar2 == 0) {
    if (param_2 == 3) {
      plVar1 = (longlong *)*param_3;
      (**(code **)(*plVar1 + 0x38))(plVar1,1);
      func_0x0001802d2050(plVar1);
      func_0x00018000c9a0(local_68);
      uVar3 = func_0x0001800bf726();
      func_0x00018000c9f0(local_68);
      iVar2 = FUN_180503c10(uVar3,param_1,0,param_3);
      if (iVar2 != 0) goto LAB_180503dae;
    }
    uVar4 = 0;
  }
  else {
LAB_180503dae:
    uVar4 = 1;
  }
  return uVar4;
}


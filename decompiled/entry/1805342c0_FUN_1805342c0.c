/* 1805342c0  FUN_1805342c0  body=94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805342c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_18052f5c0(param_2,param_3);
  plVar1 = *(longlong **)(_DAT_180fe0e90 + 8);
  uVar4 = func_0x0001802e1b10(*(undefined4 *)(lVar3 + 8));
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar4,0);
  uVar4 = func_0x0001802e1b10(uVar2);
  FUN_180534210(param_1,uVar4);
  FUN_180534210(param_1,lVar3);
  return;
}


/* 18052edf0  FUN_18052edf0  body=202 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_18052edf0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = func_0x00018000c510(0x180880378);
  func_0x000180420800(lVar1,0);
  func_0x000180420790(lVar1);
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  plVar2 = (longlong *)func_0x0001804205f0(lVar1,param_1,0,0x180759410,0);
  lVar1 = *plVar2;
  (**(code **)(lVar1 + 0x100))(plVar2);
  (**(code **)(lVar1 + 0x110))(plVar2,0x1807cf4c8);
  (**(code **)(lVar1 + 0x100))(plVar2);
  uVar3 = (**(code **)(lVar1 + 0x48))(plVar2);
  plVar4 = (longlong *)FUN_18052e7a0(uVar3);
  (**(code **)(*plVar4 + 0x50))(plVar4,plVar2);
  (**(code **)(lVar1 + 0x118))(plVar2);
  (*_DAT_18080fb80)(plVar2);
  return plVar4;
}


/* 180543b70  FUN_180543b70  body=100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180543b70(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_180fe0eb0;
  if (*(longlong *)(_DAT_180fe0eb0 + 8) == 0) {
    uVar2 = func_0x00018000c510(0x180861308);
    plVar3 = (longlong *)func_0x00018039c600(0x18089aaf8);
    uVar4 = (**(code **)(*plVar3 + 0x98))(plVar3);
    func_0x000180354860(uVar2,0x1807cbb08,uVar4);
    func_0x00018000c720(lVar1 + 8,uVar2);
  }
  return *(undefined8 *)(lVar1 + 8);
}


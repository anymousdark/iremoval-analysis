/* query=1805413a0 containing=1805413a0 name=FUN_1805413a0 body=389 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1805413a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  uVar2 = func_0x00018000c510(0x180893b38);
  FUN_1804d4b90(uVar2);
  if (lRam00000001808065a8 != 0) {
    func_0x00018000303c();
  }
  lVar1 = _DAT_180fe0628;
  uVar3 = (**(code **)(**(longlong **)(_DAT_180fe0628 + 8) + 0x98))
                    (*(longlong **)(_DAT_180fe0628 + 8),0x1807d1998);
  uVar2 = FUN_1804ce840(uVar2,uVar3);
  uVar3 = FUN_18000c630(0x1809b90e0,0x10);
  plVar4 = (longlong *)func_0x00018000c510(0x180891348);
  FUN_1804c57f0(plVar4);
  (**(code **)(*plVar4 + 0x80))(plVar4,1);
  (**(code **)(*plVar4 + 0x58))(plVar4,uVar2);
  (**(code **)(*plVar4 + 0x48))(plVar4,uVar3);
  plVar5 = (longlong *)func_0x00018000c510(0x180862388);
  FUN_18035ca40(plVar5,0);
  uVar2 = FUN_1804c5950(plVar4);
  plVar6 = (longlong *)func_0x00018000c510();
  uVar8 = 0;
  FUN_1804c7a60(plVar6,plVar5,uVar2,1,0);
  plVar4 = plVar6;
  lVar7 = FUN_1802e47a0(param_1);
  FUN_1804c8590(plVar6,lVar7,0,*(undefined4 *)(lVar7 + 8),uVar8,plVar4);
  FUN_1804c7c90(plVar6);
  lVar7 = FUN_18035da00(plVar5);
  uVar2 = FUN_180344140(*(undefined8 *)(lVar1 + 8),lVar7,0,*(undefined4 *)(lVar7 + 8));
  (**(code **)(*plVar5 + 0x90))();
  (**(code **)(*plVar6 + 0x90))(plVar6);
  return uVar2;
}


/* 18052bd80  FUN_18052bd80  body=320 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18052bd80(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar6 = func_0x00018000c630(0x1809b90e0,0x20);
  lVar11 = *param_2;
  (**(code **)(lVar11 + 0xf8))(param_2,0xffffffffffffffe0,2);
  iVar5 = (**(code **)(lVar11 + 0x108))(param_2,lVar6,0,0x20);
  if (iVar5 == 0x20) {
    plVar4 = *(longlong **)(_DAT_180fe0e90 + 8);
    uVar7 = func_0x00018000c630(0x1809b90e0,5);
    uVar1 = *(undefined1 *)(lVar6 + 0x15);
    uVar2 = *(undefined1 *)(lVar6 + 0x16);
    uVar3 = *(undefined1 *)(lVar6 + 0x17);
    lVar11 = *plVar4;
    uVar8 = (**(code **)(lVar11 + 0x58))(plVar4,lVar6,8);
    uVar9 = (**(code **)(lVar11 + 0x58))(plVar4,lVar6,0x10);
    uVar10 = (**(code **)(lVar11 + 0x58))(plVar4,lVar6,0x18);
    func_0x00018000c790(param_1,uVar7);
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar10;
    *(undefined1 *)(param_1 + 0x20) = uVar1;
    *(undefined1 *)(param_1 + 0x21) = uVar2;
    *(undefined1 *)(param_1 + 0x22) = uVar3;
    return param_1;
  }
  lVar11 = func_0x00018000c510(0x180898ed0);
  func_0x0001802dcfb0(lVar11);
  *(undefined8 *)(lVar11 + 8) = 0x180786b60;
  lVar11 = func_0x00018000cfe0(lVar11);
  return lVar11;
}


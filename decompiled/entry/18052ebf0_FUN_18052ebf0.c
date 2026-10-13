/* 18052ebf0  FUN_18052ebf0  body=236 */

longlong FUN_18052ebf0(longlong *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 0;
  plVar3 = (longlong *)func_0x0001802d3060(param_1);
  lVar7 = *param_1;
  uVar4 = (**(code **)(lVar7 + 0x18))(param_1);
  uVar4 = (**(code **)(*plVar3 + 0x1b0))(plVar3,uVar4,0x1c);
  plVar3 = (longlong *)func_0x000180721390(0x1807fab50,uVar4,&local_28);
  if (plVar3 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,0);
    if (lVar5 == 0) {
      func_0x0001801d4ee0(0x10);
      pcVar1 = (code *)swi(3);
      lVar7 = (*pcVar1)();
      return lVar7;
    }
    lVar6 = func_0x00018000c510(0x180945980);
    *(undefined4 *)(lVar6 + 0x28) = 0xfffffffe;
    uVar2 = func_0x00018032e860();
    *(undefined4 *)(lVar6 + 0x2c) = uVar2;
    func_0x00018000c720(lVar6 + 0x18,lVar5);
    lVar5 = func_0x000180721390(0x1807fcff0,lVar6,&local_30);
  }
  if (lVar5 == 0) {
    lVar7 = (**(code **)(lVar7 + 0x18))(param_1);
    return lVar7;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  if (lVar7 == 0) {
    lVar7 = 0x180759410;
  }
  return lVar7;
}


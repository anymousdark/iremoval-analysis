/* query=1805441eb containing=1805441c0 name=FUN_1805441c0 body=1023 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805441c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  lStack_38 = 0;
  lStack_30 = 0;
  lStack_28 = 0;
  lStack_20 = 0;
  lVar1 = param_1[1];
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    lStack_20 = param_1[6];
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    break;
  case 1:
    lStack_28 = param_1[7];
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    goto LAB_180544317;
  case 2:
    lStack_30 = param_1[8];
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    goto LAB_1805443ce;
  case 3:
    lStack_28 = param_1[7];
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    goto LAB_18054446f;
  case 4:
    lStack_38 = param_1[9];
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    goto LAB_180544518;
  case 5:
    lStack_28 = param_1[7];
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    goto LAB_1805445b2;
  default:
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1);
    *(undefined1 *)((longlong)param_1 + 0x24) = uVar2;
    lStack_20 = (**(code **)(*(longlong *)*param_1 + 0x140))((longlong *)*param_1);
    if ((*(uint *)(lStack_20 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      func_0x00018000c790(param_1 + 6,lStack_20);
      uVar4 = FUN_1806ff160(param_1,param_1 + 5);
      FUN_18070b750(&lStack_20,uVar4);
      return;
    }
  }
  if ((*(uint *)(lStack_20 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_20,0);
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\0') {
    lStack_28 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    if ((*(uint *)(lStack_28 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      func_0x00018000c790(param_1 + 7,lStack_28);
      uVar4 = FUN_1806ff160(param_1,param_1 + 5);
      FUN_180714d80(&lStack_28,uVar4);
      return;
    }
LAB_180544317:
    if ((*(uint *)(lStack_28 + 0x34) & 0x11000000) != 0x1000000) {
      FUN_180373b40(lStack_28,0);
    }
    iVar3 = (**(code **)(*(longlong *)*param_1 + 0x38))();
    while (iVar3 != 0xf) {
      (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,0x1807cbfb8);
      lStack_30 = (**(code **)(*(longlong *)*param_1 + 0x138))();
      if ((*(uint *)(lStack_30 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 4) = 2;
        func_0x00018000c790(param_1 + 8,lStack_30);
        uVar4 = FUN_1806ff160(param_1,param_1 + 5);
        FUN_18071cd10(0x1807ffae0,&lStack_30,uVar4);
        return;
      }
LAB_1805443ce:
      if ((*(uint *)(lStack_30 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_30,0);
      }
      func_0x00018000c790(param_1 + 2,*(undefined8 *)(lStack_30 + 0x38));
      (**(code **)(*(longlong *)*param_1 + 0x118))();
      lStack_28 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if ((*(uint *)(lStack_28 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 4) = 3;
        func_0x00018000c790(param_1 + 7,lStack_28);
        uVar4 = FUN_1806ff160(param_1,param_1 + 5);
        FUN_180714d80(&lStack_28,uVar4);
        return;
      }
LAB_18054446f:
      if ((*(uint *)(lStack_28 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_28,0);
      }
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x48))();
      uVar4 = FUN_18052e7a0(uVar4);
      func_0x00018000c790(param_1 + 3,uVar4);
      lStack_38 = (**(code **)(*(longlong *)param_1[3] + 0x58))((longlong *)param_1[3],*param_1);
      if ((*(uint *)(lStack_38 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 4) = 4;
        func_0x00018000c790(param_1 + 9,lStack_38);
        uVar4 = FUN_1806ff160(param_1,param_1 + 5);
        FUN_1806d8960(&lStack_38,uVar4);
        return;
      }
LAB_180544518:
      if ((*(uint *)(lStack_38 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_38,0);
      }
      (*pcRam0000000180823540)(*(undefined8 *)(lVar1 + 8),param_1[2],param_1[3]);
      lStack_28 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if ((*(uint *)(lStack_28 + 0x34) & 0x1600000) == 0) {
        *(undefined4 *)(param_1 + 4) = 5;
        func_0x00018000c790(param_1 + 7,lStack_28);
        uVar4 = FUN_1806ff160(param_1,param_1 + 5);
        FUN_180714d80(&lStack_28,uVar4);
        return;
      }
LAB_1805445b2:
      if ((*(uint *)(lStack_28 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_28,0);
      }
      param_1[2] = 0;
      param_1[3] = 0;
      iVar3 = (**(code **)(*(longlong *)*param_1 + 0x38))();
    }
    (**(code **)(*(longlong *)*param_1 + 0x118))();
  }
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  plVar5 = param_1 + 5;
  if (*plVar5 == 0) {
    if (lRam0000000180806578 != 0) {
      func_0x000180002fbc();
    }
    func_0x00018000c790(plVar5,*(undefined8 *)(_DAT_180fe05e0 + 0x20));
  }
  else {
    FUN_1805c5600(*plVar5,0);
  }
  return;
}


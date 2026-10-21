/* query=18054526a containing=180545240 name=FUN_180545240 body=606 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180545240(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lStack_30;
  longlong lStack_28;
  
  lStack_28 = 0;
  lStack_30 = 0;
  switch(*(undefined4 *)(param_1 + 1)) {
  case 0:
    lStack_28 = param_1[3];
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    break;
  case 1:
    lStack_30 = param_1[4];
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    goto LAB_180545392;
  case 2:
    lStack_30 = param_1[4];
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    goto LAB_180545433;
  default:
    lStack_28 = FUN_18052ed50(*param_1);
    if ((*(uint *)(lStack_28 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      func_0x00018000c790(param_1 + 3,lStack_28);
      uVar1 = FUN_1806fff40(0x1807fe1c0,param_1,param_1 + 2);
      FUN_18070b770(0x180801548,&lStack_28,uVar1);
      return;
    }
  }
  if ((*(uint *)(lStack_28 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_28,0);
  }
  if (*(char *)(lStack_28 + 0x38) == '\0') {
    lStack_30 = FUN_18052eee0(*param_1);
    if ((*(uint *)(lStack_30 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 1) = 2;
      func_0x00018000c790(param_1 + 4,lStack_30);
      uVar1 = FUN_1806fff40(0x1807fe1c0,param_1,param_1 + 2);
      FUN_18071cd30(0x180803bc8,&lStack_30,uVar1);
      return;
    }
LAB_180545433:
    if ((*(uint *)(lStack_30 + 0x34) & 0x11000000) != 0x1000000) {
      FUN_180373b40(lStack_30,0);
    }
    lVar3 = *(longlong *)(lStack_30 + 0x38);
  }
  else {
    lStack_30 = FUN_18052eda0(*param_1);
    if ((*(uint *)(lStack_30 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 1) = 1;
      func_0x00018000c790(param_1 + 4,lStack_30);
      uVar1 = FUN_1806fff40(0x1807fe1c0,param_1,param_1 + 2);
      FUN_18071cd30(0x180803bc8,&lStack_30,uVar1);
      return;
    }
LAB_180545392:
    if ((*(uint *)(lStack_30 + 0x34) & 0x11000000) != 0x1000000) {
      FUN_180373b40(lStack_30,0);
    }
    lVar3 = *(longlong *)(lStack_30 + 0x38);
  }
  *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    if (lVar3 == 0) {
      if (lRam00000001808088f8 != 0) {
        func_0x00018000451c();
      }
      lVar2 = *(longlong *)(_DAT_180fe40d0 + 8);
    }
    else {
      lVar2 = func_0x00018000c510(0x180953520);
      *(undefined4 *)(lVar2 + 0x34) = 0x1000000;
      func_0x00018000c720(lVar2 + 0x38,lVar3);
    }
    func_0x00018000c790(param_1 + 2,lVar2);
  }
  else {
    FUN_180646380(0x180953aa8,lVar2,lVar3);
  }
  return;
}


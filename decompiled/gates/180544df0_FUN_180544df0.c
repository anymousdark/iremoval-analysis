/* query=180544e9e containing=180544df0 name=FUN_180544df0 body=904 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180544df0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  longlong lStack_38;
  longlong lStack_30;
  uint uStack_24;
  
  lStack_30 = 0;
  lStack_38 = 0;
  uStack_24 = *(uint *)(param_1 + 3);
  if (2 < uStack_24) {
    lVar1 = func_0x00018000c510(0x180880378);
    FUN_180420800(lVar1,0);
    FUN_180420790(lVar1,0x18076d328);
    *(undefined1 *)(lVar1 + 0x58) = 1;
    FUN_180420790(lVar1,0x18077a0a8);
    *(undefined4 *)(lVar1 + 0x4c) = 1;
    uStack_48 = 0;
    uVar2 = FUN_1804205f0(lVar1,*param_1,0,0x180759410);
    func_0x00018000c790(param_1 + 1,uVar2);
  }
  switch(uStack_24) {
  case 0:
    lStack_30 = param_1[5];
    param_1[5] = 0;
    uStack_24 = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    break;
  case 1:
    lStack_30 = param_1[5];
    param_1[5] = 0;
    uStack_24 = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    goto LAB_180545005;
  case 2:
    lStack_38 = param_1[6];
    param_1[6] = 0;
    uStack_24 = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    goto LAB_1805450de;
  default:
    lStack_30 = (**(code **)(*(longlong *)param_1[1] + 0x148))();
    if ((*(uint *)(lStack_30 + 0x34) & 0x1600000) == 0) {
      uStack_24 = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      func_0x00018000c790(param_1 + 5,lStack_30);
      uVar2 = FUN_1806ffce0(0x1807fe1a8,param_1,param_1 + 4);
      FUN_180714da0(0x180802c50,&lStack_30,uVar2);
      FUN_1805451d8(auStack_68);
      return;
    }
  }
  if ((*(uint *)(lStack_30 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_30,0);
  }
  (**(code **)(*(longlong *)param_1[1] + 0x110))((longlong *)param_1[1],0x1807cf4c8);
  lStack_30 = (**(code **)(*(longlong *)param_1[1] + 0x148))();
  if ((*(uint *)(lStack_30 + 0x34) & 0x1600000) == 0) {
    uStack_24 = 1;
    *(undefined4 *)(param_1 + 3) = 1;
    func_0x00018000c790(param_1 + 5,lStack_30);
    uVar2 = FUN_1806ffce0(0x1807fe1a8,param_1,param_1 + 4);
    FUN_180714da0(0x180802c50,&lStack_30,uVar2);
    FUN_1805451d8(auStack_68);
  }
  else {
LAB_180545005:
    if ((*(uint *)(lStack_30 + 0x34) & 0x11000000) != 0x1000000) {
      FUN_180373b40(lStack_30,0);
    }
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x48))();
    uVar2 = FUN_18052e7a0(uVar2);
    func_0x00018000c790(param_1 + 2,uVar2);
    lStack_38 = (**(code **)(*(longlong *)param_1[2] + 0x58))((longlong *)param_1[2],param_1[1]);
    if ((*(uint *)(lStack_38 + 0x34) & 0x1600000) == 0) {
      uStack_24 = 2;
      *(undefined4 *)(param_1 + 3) = 2;
      func_0x00018000c790(param_1 + 6,lStack_38);
      uVar2 = FUN_1806ffce0(0x1807fe1a8,param_1,param_1 + 4);
      FUN_1806d8980(0x1807fa608,&lStack_38,uVar2);
      FUN_1805451d8(auStack_68);
    }
    else {
LAB_1805450de:
      if ((*(uint *)(lStack_38 + 0x34) & 0x11000000) != 0x1000000) {
        FUN_180373b40(lStack_38,0);
      }
      (**(code **)(*(longlong *)param_1[1] + 0x118))();
      lVar1 = param_1[2];
      if (((int)uStack_24 < 0) && (param_1[1] != 0)) {
        (*pcRam000000018080fd60)();
      }
      *(undefined4 *)(param_1 + 3) = 0xfffffffe;
      lVar3 = param_1[4];
      if (lVar3 == 0) {
        if (lVar1 == 0) {
          if (lRam00000001808088f8 != 0) {
            func_0x00018000451c();
          }
          lVar3 = *(longlong *)(_DAT_180fe40d0 + 8);
        }
        else {
          lVar3 = func_0x00018000c510(0x180953520);
          *(undefined4 *)(lVar3 + 0x34) = 0x1000000;
          func_0x00018000c720(lVar3 + 0x38,lVar1);
        }
        func_0x00018000c790(param_1 + 4,lVar3);
      }
      else {
        FUN_180646380(0x180953aa8,lVar3,lVar1);
      }
    }
  }
  return;
}


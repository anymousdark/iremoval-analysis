/* 18052c320  FUN_18052c320  body=648 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18052c320(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4,
                       longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong local_58;
  undefined8 local_50;
  uint local_44;
  
  local_50 = 0;
  local_58 = 0;
  uVar11 = *(uint *)(param_4 + 0x10);
  lVar1 = *param_5;
  iVar4 = (**(code **)(lVar1 + 0x38))(param_5);
  if ((iVar4 != 0) && (lVar7 = func_0x000180370340(0x1809534c8,param_5), lVar7 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar5 = (**(code **)(lVar1 + 0x40))(param_5);
    iVar4 = func_0x000180595600(uVar2,uVar5,&local_50);
    if (iVar4 == 0) {
      uVar8 = func_0x00018000c510(0x180953d58);
      func_0x00018065c9b0(uVar8,0,0);
      uVar2 = *(undefined8 *)(param_1 + 8);
      local_50 = uVar8;
      uVar5 = (**(code **)(lVar1 + 0x40))(param_5);
      func_0x000180595240(uVar2,uVar5,local_50,2);
    }
    iVar4 = func_0x00018065d360(local_50,param_5,&local_58);
    if (iVar4 == 0) {
      func_0x00018065cd20(local_50,param_5,uVar11,1);
    }
    else {
      uVar11 = (uint)local_58;
      if (lVar1 != 0x1808989c8) {
        return local_58 & 0xffffffff;
      }
    }
  }
  lVar7 = *param_2;
  uVar5 = (**(code **)(lVar7 + 0x58))(param_2);
  *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + 1;
  uVar10 = *(uint *)(param_4 + 0x10);
  if (uVar10 < *(uint *)(*(longlong *)(param_4 + 8) + 8)) {
    *(uint *)(param_4 + 0x10) = uVar10 + 1;
    *(undefined4 *)(*(longlong *)(param_4 + 8) + 0x10 + (ulonglong)uVar10 * 4) = uVar5;
  }
  else {
    func_0x0001805a2d50(param_4);
  }
  local_44 = (**(code **)(lVar1 + 0x30))(param_5);
  uVar6 = (**(code **)(lVar1 + 0x40))(param_5);
  uVar10 = local_44;
  if (0xe < (int)local_44) {
    uVar10 = 0xf;
  }
  (**(code **)(lVar7 + 0x130))(param_2,uVar10 & 0xff | uVar6 & 0xf0);
  if (0xe < (int)local_44) {
    if (_DAT_180806b28 != 0) {
      func_0x000180001bc8();
    }
    lVar9 = func_0x00018000c510(0x180898cf8);
    *(longlong *)(lVar9 + 0x10) = (longlong)(int)local_44;
    *(undefined1 *)(lVar9 + 0x18) = 0;
    bVar3 = FUN_18052db20(lVar9);
    (**(code **)(lVar7 + 0x130))(param_2,bVar3 | 0x10);
    FUN_18052dff0(lVar9,param_2);
  }
  if (lVar1 == 0x1808988a0) {
    FUN_18052c5c0(param_1,param_2,param_3,param_4,param_5);
    return (ulonglong)uVar11;
  }
  if (lVar1 == 0x180898be0) {
    FUN_18052c760(param_1,param_2,param_3,param_4,param_5);
    return (ulonglong)uVar11;
  }
  (**(code **)(lVar1 + 0x60))(param_5,param_2);
  return (ulonglong)uVar11;
}


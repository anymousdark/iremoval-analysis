/* 1801b7320  PATH_B  body=1121 */

undefined8 PATH_B(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  local_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  lVar7 = *(longlong *)(param_2 + 0x20);
  if (lVar7 == 0) {
    lVar7 = 0x180759410;
  }
  if ((*(int *)(lVar7 + 8) != 0) || (*(longlong *)(param_2 + 0x68) != 0)) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x1807a5d58);
    uVar4 = func_0x00018000cfe0(uVar4);
    return uVar4;
  }
  if (((*(char *)(param_2 + 0x7d) != '\0') || (*(char *)(param_2 + 0x7e) != '\0')) ||
     (*(char *)(param_2 + 0x7f) != '\0')) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x1807a5c70);
    uVar4 = func_0x00018000cfe0(uVar4);
    return uVar4;
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x18079f768);
    uVar4 = func_0x00018000cfe0(uVar4);
    return uVar4;
  }
  if (*(longlong *)(param_2 + 0x48) == 0) {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      uVar4 = func_0x00018000c510(0x18085a558);
      func_0x0001802f9d10(uVar4,0x18079f8c0);
      uVar4 = func_0x00018000cfe0(uVar4);
      return uVar4;
    }
    if (*(longlong *)(param_2 + 0x38) == 0) {
      local_90 = FUN_1801b9370(param_2);
      lVar7 = *(longlong *)(param_2 + 8);
      if (lVar7 == 0) {
        lVar7 = 0x180759410;
      }
      if (*(int *)(lVar7 + 8) < 1) {
        lStack_98 = 0;
      }
      else {
        lStack_98 = *(longlong *)(param_2 + 8);
        if (lStack_98 == 0) {
          lStack_98 = 0x180759410;
        }
      }
      if (lStack_98 == 0) {
        lStack_98 = 0;
      }
      else {
        lStack_98 = lStack_98 + 0xc;
        local_28 = lStack_98;
      }
      lVar7 = *(longlong *)(param_2 + 0x28);
      if (lVar7 == 0) {
        lVar7 = 0x180759410;
      }
      if (*(int *)(lVar7 + 8) < 1) {
        local_a0 = 0;
      }
      else {
        local_a0 = *(longlong *)(param_2 + 0x28);
        if (local_a0 == 0) {
          local_a0 = 0x180759410;
        }
      }
      if (local_a0 == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_a0 + 0xc;
        lStack_30 = local_a0;
      }
      if (*(int *)(local_90 + 8) < 1) {
        local_90 = 0;
      }
      if (local_90 == 0) {
        local_90 = 0;
      }
      else {
        local_90 = local_90 + 0xc;
        local_38 = local_90;
      }
      lVar7 = *(longlong *)(param_2 + 0x18);
      if (lVar7 == 0) {
        lVar7 = 0x180759410;
      }
      if (*(int *)(lVar7 + 8) < 1) {
        lStack_88 = 0;
      }
      else {
        lStack_88 = *(longlong *)(param_2 + 0x18);
        if (lStack_88 == 0) {
          lStack_88 = 0x180759410;
        }
      }
      if (lStack_88 == 0) {
        lStack_88 = 0;
      }
      else {
        lStack_88 = lStack_88 + 0xc;
        local_40 = lStack_88;
      }
      uStack_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      lStack_48 = 0;
      local_b0 = 0x14000000070;
      if (*(char *)(param_2 + 0x80) == '\0') {
        local_b0 = 0x54000000070;
      }
      else {
        uStack_a8 = *(undefined8 *)(param_2 + 0x70);
      }
      uVar1 = FUN_1801b7790(*(undefined4 *)(param_2 + 0x78));
      local_80 = CONCAT44(local_80._4_4_,uVar1);
      lVar3 = func_0x00018000c510(0x180839678);
      *(undefined8 **)(lVar3 + 8) = &local_b0;
      iVar2 = FUN_1801b85d0(lVar3);
      lVar7 = lStack_48;
      if (iVar2 != 0) {
        if (lStack_48 != 0) {
          lVar3 = func_0x00018000c550();
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 4;
          *(undefined1 *)(lVar3 + 0x14) = 1;
          *(undefined1 *)(lVar3 + 0x15) = 1;
          *(longlong *)(lVar3 + 8) = lVar7;
          func_0x00018000c720(param_1 + 0x18,lVar3);
          *(undefined1 *)(param_1 + 0xe5) = 1;
          if (*(char *)(param_1 + 0xea) != '\0') {
            FUN_1801b58d0(param_1);
          }
          return 1;
        }
        return 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 == 0) {
        iVar2 = FUN_1801b77d0(uStack_78);
      }
      if (iVar2 == 0x78) {
        uVar4 = func_0x00018000c510(0x18085b030);
        func_0x0001803005b0(uVar4,0x1807bd4d8);
        uVar4 = func_0x00018000cfe0(uVar4);
        return uVar4;
      }
      if ((iVar2 == 0xc1) || (iVar2 == 0xd8)) {
        uVar4 = 0x1807b2000;
      }
      else {
        uVar4 = func_0x0001801ae7f0(iVar2,0);
      }
      uVar5 = FUN_1801b92b0(param_2);
      uVar6 = FUN_1801b92e0(param_2);
      uVar4 = FUN_1801b55b0(uVar4,iVar2,uVar5,uVar6);
      uVar4 = func_0x00018000cfe0(uVar4);
      return uVar4;
    }
    uVar4 = func_0x00018000c510(0x18085a558);
    func_0x0001802f9d10(uVar4,0x1807a5e48);
    uVar4 = func_0x00018000cfe0(uVar4);
    return uVar4;
  }
  uVar4 = func_0x00018000c510(0x18085a558);
  func_0x0001802f9d10(uVar4,0x18079f6b8);
  uVar4 = func_0x00018000cfe0(uVar4);
  return uVar4;
}


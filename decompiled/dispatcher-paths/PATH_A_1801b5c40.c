/* 1801b5c40  PATH_A  body=3243 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong PATH_A(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined8 in_stack_fffffffffffffc08;
  ulonglong uVar17;
  undefined8 in_stack_fffffffffffffc10;
  undefined4 uVar19;
  undefined1 *puVar18;
  undefined8 in_stack_fffffffffffffc18;
  undefined4 uVar20;
  undefined1 local_3b8 [512];
  undefined1 local_1b8 [44];
  undefined4 local_18c;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined1 *local_170;
  longlong local_168;
  longlong local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffc18 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffc10 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
  local_170 = (undefined1 *)0x0;
  lVar5 = -0x120;
  do {
    *(undefined8 *)((longlong)&uStack_48 + lVar5) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = 0;
    lVar5 = lVar5 + 0x30;
  } while (lVar5 != 0);
  local_188 = _DAT_180fe7000;
  local_50 = local_3b8;
  uStack_48 = 0x100;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  FUN_1801b6b10(param_2);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_178 = (longlong *)func_0x00018000c550(0x180839a80);
  local_178[1] = 0;
  *(undefined4 *)(local_178 + 2) = 4;
  *(undefined1 *)((longlong)local_178 + 0x14) = 1;
  *(undefined1 *)((longlong)local_178 + 0x15) = 1;
  local_178[1] = 0;
  local_180 = *(undefined8 *)(_DAT_180fdfda0 + 8);
  local_12c = 0;
  func_0x00018032f430(local_180);
  local_12c = 1;
  local_c8 = CONCAT44(local_c8._4_4_,0x68);
  if (*(char *)(param_2 + 0x7d) == '\0') {
    if ((*(char *)(param_2 + 0x7e) != '\0') || (*(char *)(param_2 + 0x7f) != '\0')) {
      lVar5 = func_0x0001800bf63c(0xfffffff6);
      plVar6 = (longlong *)func_0x00018000c550();
      plVar6[6] = -1;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x3c) = 0xffffffff;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 4;
      *(undefined1 *)((longlong)plVar6 + 0x14) = 0;
      func_0x0001802d2050(plVar6);
      *(undefined1 *)((longlong)plVar6 + 0x15) = 1;
      plVar6[1] = lVar5;
      local_108 = plVar6;
      if (_DAT_181008818 != 0) {
        func_0x00018000dee0();
      }
      goto LAB_1801b5e42;
    }
  }
  else {
    FUN_1801b6f40(&local_100,&local_108,1);
LAB_1801b5e42:
    if (*(char *)(param_2 + 0x7e) == '\0') {
      lVar5 = func_0x0001800bf63c(0xfffffff5);
      plVar6 = (longlong *)func_0x00018000c550();
      plVar6[6] = -1;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x3c) = 0xffffffff;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 4;
      *(undefined1 *)((longlong)plVar6 + 0x14) = 0;
      func_0x0001802d2050(plVar6);
      *(undefined1 *)((longlong)plVar6 + 0x15) = 1;
      plVar6[1] = lVar5;
      local_118 = plVar6;
      if (_DAT_181008818 != 0) {
        func_0x00018000dee0();
      }
    }
    else {
      FUN_1801b6f40(&local_110,&local_118,0);
    }
    if (*(char *)(param_2 + 0x7f) == '\0') {
      lVar5 = func_0x0001800bf63c(0xfffffff4);
      plVar6 = (longlong *)func_0x00018000c550();
      plVar6[6] = -1;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x3c) = 0xffffffff;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 4;
      *(undefined1 *)((longlong)plVar6 + 0x14) = 0;
      func_0x0001802d2050(plVar6);
      *(undefined1 *)((longlong)plVar6 + 0x15) = 1;
      plVar6[1] = lVar5;
      local_128 = plVar6;
      if (_DAT_181008818 != 0) {
        func_0x00018000dee0();
      }
    }
    else {
      FUN_1801b6f40(&local_120,&local_128,0);
    }
    local_78 = local_108[1];
    lStack_70 = local_118[1];
    local_68 = local_128[1];
    uStack_8c = 0x100;
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    uVar2 = FUN_1801b7790(*(undefined4 *)(param_2 + 0x78));
    local_88 = CONCAT62(local_88._2_6_,uVar2);
    uStack_8c = uStack_8c | 1;
  }
  uVar14 = 0;
  if (*(char *)(param_2 + 0x7c) != '\0') {
    uVar14 = 0x8000000;
  }
  lVar5 = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    uVar14 = uVar14 | 0x400;
    lVar5 = FUN_1801b7160(*(undefined8 *)(param_2 + 0x38));
  }
  lVar9 = *(longlong *)(param_2 + 0x18);
  if (lVar9 == 0) {
    lVar9 = 0x180759410;
  }
  if (*(int *)(lVar9 + 8) == 0) {
    lVar9 = 0;
  }
  iVar4 = 0;
  lVar10 = *(longlong *)(param_2 + 0x20);
  if (lVar10 == 0) {
    lVar10 = 0x180759410;
  }
  if (*(int *)(lVar10 + 8) == 0) {
    if (lVar5 != 0) {
      local_168 = lVar5 + 0xc;
    }
    if ((uint)uStack_48 < (uint)uStack_58 + 1) {
      FUN_1801b1750(&local_60,((uint)uStack_58 + 1) - (uint)uStack_58);
    }
    puVar12 = (undefined1 *)(uStack_58 & 0xffffffff);
    if ((uint)uStack_58 < (uint)uStack_48) {
      *(undefined2 *)(local_50 + (longlong)puVar12 * 2) = 0;
      puVar12 = local_50;
    }
    else {
      func_0x00018039d020();
    }
    uVar17 = CONCAT44(uVar16,1);
    puVar18 = (undefined1 *)CONCAT44(uVar19,uVar14);
    local_170 = puVar12;
    iVar3 = func_0x0001801af040();
    if (iVar3 == 0) {
      lVar5 = func_0x000180004bd4();
      iVar4 = *(int *)(lVar5 + 0xf8);
    }
    local_170 = (undefined1 *)0x0;
    local_168 = 0;
    goto LAB_1801b635b;
  }
  if ((*(longlong *)(param_2 + 0x68) != 0) && (*(longlong *)(param_2 + 0x60) != 0)) {
    uVar8 = func_0x00018000c510(0x180858908);
    func_0x0001802e1350(uVar8,0x180796138);
    uVar17 = func_0x00018000cfe0(uVar8);
    return uVar17;
  }
  if (*(char *)(param_2 + 0x81) == '\0') {
    uVar16 = 0;
    if (*(char *)(param_2 + 0x82) != '\0') {
      uVar16 = 2;
    }
  }
  else {
    if (*(char *)(param_2 + 0x82) != '\0') {
      uVar8 = func_0x00018000c510(0x180858908);
      func_0x0001802e13c0(uVar8,0x180796020,0x1807d21d8);
      uVar17 = func_0x00018000cfe0(uVar8);
      return uVar17;
    }
    uVar16 = 1;
  }
  local_138 = *(longlong *)(param_2 + 0x60);
  if (local_138 == 0) {
    local_138 = 0x180759410;
  }
  if (local_138 == 0) {
    local_138 = 0;
  }
  else {
    local_138 = local_138 + 0xc;
    local_140 = local_138;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar5 + 0xc;
    local_148 = lVar5;
  }
  if ((uint)uStack_48 < (uint)uStack_58 + 1) {
    FUN_1801b1750(&local_60);
  }
  if ((uint)uStack_58 < (uint)uStack_48) {
    *(undefined2 *)(local_50 + (uStack_58 & 0xffffffff) * 2) = 0;
    local_158 = local_50;
    local_150 = local_50;
    if (*(longlong *)(param_2 + 0x68) != 0) goto LAB_1801b61d3;
    local_160 = 0;
  }
  else {
    func_0x00018039d020();
LAB_1801b61d3:
    local_160 = func_0x0001803764c0();
  }
  lVar10 = *(longlong *)(param_2 + 0x20);
  if (lVar10 == 0) {
    lVar10 = 0x180759410;
  }
  lVar11 = *(longlong *)(param_2 + 0x58);
  if (lVar11 == 0) {
    lVar11 = 0x180759410;
  }
  lVar15 = local_160;
  if (local_160 == 0) {
    lVar15 = local_138;
  }
  uVar17 = 0;
  puVar18 = local_150;
  iVar3 = FUN_1801b0d60(lVar10,lVar11,lVar15,uVar16,0,local_150,CONCAT44(uVar20,uVar14),lVar5,lVar9,
                        &local_c8,&local_e0);
  if (iVar3 == 0) {
    lVar5 = func_0x000180004bd4();
    iVar4 = *(int *)(lVar5 + 0xf8);
  }
  if (local_160 != 0) {
    func_0x000180376880(local_160);
  }
  local_158 = (undefined1 *)0x0;
  local_148 = 0;
  local_140 = 0;
LAB_1801b635b:
  if ((local_e0 != 0) && (local_e0 != -1)) {
    local_178[1] = local_e0;
  }
  if ((lStack_d8 != 0) && (lStack_d8 != -1)) {
    func_0x0001801aeae0(lStack_d8);
  }
  plVar6 = local_108;
  if (iVar3 == 0) {
    if ((iVar4 == 0xc1) || (iVar4 == 0xd8)) {
      uVar8 = 0x1807b2000;
    }
    else {
      uVar8 = func_0x0001801ae7f0(iVar4,0);
    }
    uVar7 = FUN_1801b92b0(param_2);
    uVar8 = FUN_1801b55b0(uVar8,iVar4,uVar7,lVar9);
    uVar17 = func_0x00018000cfe0(uVar8);
    return uVar17;
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x38))(local_108,1);
    func_0x0001802d2050(plVar6);
  }
  plVar6 = local_118;
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x38))(local_118,1);
    func_0x0001802d2050(plVar6);
  }
  plVar6 = local_128;
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x38))(local_128,1);
    func_0x0001802d2050(plVar6);
  }
  func_0x00018032f6a0(local_180);
  uVar16 = (undefined4)(uVar17 >> 0x20);
  if (*(char *)(param_2 + 0x7d) != '\0') {
    lVar5 = *(longlong *)(param_2 + 0x40);
    if (lVar5 == 0) {
      func_0x00018000c9a0(local_1b8);
      local_18c = func_0x0001800bf6b4();
      func_0x00018000c9f0(local_1b8);
      uVar8 = FUN_1801b1a50(local_18c);
      lVar5 = func_0x00018000c510(0x180838f70);
      func_0x000180347900(lVar5,0);
      func_0x00018000c720(lVar5 + 0x28,uVar8);
    }
    lVar9 = func_0x00018000c550(0x1808620b8);
    func_0x00018035b150(local_100,2,0x1000,0);
    uVar8 = func_0x00018000c510(0x1808638d0);
    func_0x000180369c20(uVar8,local_100,2);
    lVar10 = func_0x00018000c510(0x180863110);
    func_0x00018000c720(lVar10 + 0x18,uVar8);
    *(undefined4 *)(lVar10 + 0x28) = 0x1000;
    uVar8 = func_0x000180369580(lVar9,lVar10);
    func_0x00018000c720(lVar9 + 0x10,uVar8);
    uVar8 = func_0x00018000c510();
    uVar17 = uVar17 & 0xffffffff00000000;
    func_0x000180362b10(uVar8,lVar9,lVar5,0x1000,uVar17);
    uVar16 = (undefined4)(uVar17 >> 0x20);
    func_0x00018000c720(param_1 + 0x68,uVar8);
    lVar5 = *(longlong *)(param_1 + 0x68);
    if ((*(uint *)(*(longlong *)(lVar5 + 0x48) + 0x34) & 0x1600000) == 0) {
      func_0x000180362ae0();
      pcVar1 = (code *)swi(3);
      uVar17 = (*pcVar1)();
      return uVar17;
    }
    *(undefined1 *)(lVar5 + 0x58) = 1;
    func_0x000180362eb0(lVar5,1,0);
  }
  if (*(char *)(param_2 + 0x7e) != '\0') {
    lVar5 = *(longlong *)(param_2 + 0x50);
    if (lVar5 == 0) {
      func_0x00018000c9a0(local_1b8);
      local_18c = func_0x0001800bf636();
      func_0x00018000c9f0(local_1b8);
      uVar8 = FUN_1801b1a50(local_18c);
      lVar5 = func_0x00018000c510(0x180838f70);
      func_0x000180347900(lVar5,0);
      func_0x00018000c720(lVar5 + 0x28,uVar8);
    }
    lVar9 = func_0x00018000c550(0x1808620b8);
    func_0x00018035b150(local_110,1,0x1000,0);
    uVar8 = func_0x00018000c510(0x1808638d0);
    func_0x000180369c20(uVar8,local_110,1);
    lVar10 = func_0x00018000c510(0x180863110);
    func_0x00018000c720(lVar10 + 0x18,uVar8);
    *(undefined4 *)(lVar10 + 0x28) = 0x1000;
    uVar8 = func_0x000180369580(lVar9,lVar10);
    func_0x00018000c720(lVar9 + 0x10,uVar8);
    uVar8 = func_0x00018000c510();
    uVar7 = CONCAT44(uVar16,0x1000);
    puVar18 = (undefined1 *)((ulonglong)puVar18 & 0xffffffff00000000);
    func_0x000180361880(uVar8,lVar9,lVar5,1,uVar7,puVar18);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    func_0x00018000c720(param_1 + 0x60,uVar8);
  }
  if (*(char *)(param_2 + 0x7f) != '\0') {
    lVar5 = *(longlong *)(param_2 + 0x48);
    if (lVar5 == 0) {
      func_0x00018000c9a0(local_1b8);
      local_18c = func_0x0001800bf636();
      func_0x00018000c9f0(local_1b8);
      uVar8 = FUN_1801b1a50(local_18c);
      lVar5 = func_0x00018000c510(0x180838f70);
      func_0x000180347900(lVar5,0);
      func_0x00018000c720(lVar5 + 0x28,uVar8);
    }
    lVar9 = func_0x00018000c550(0x1808620b8);
    func_0x00018035b150(local_120,1,0x1000,0);
    uVar8 = func_0x00018000c510(0x1808638d0);
    func_0x000180369c20(uVar8,local_120,1);
    lVar10 = func_0x00018000c510(0x180863110);
    func_0x00018000c720(lVar10 + 0x18,uVar8);
    *(undefined4 *)(lVar10 + 0x28) = 0x1000;
    uVar8 = func_0x000180369580(lVar9,lVar10);
    func_0x00018000c720(lVar9 + 0x10,uVar8);
    uVar8 = func_0x00018000c510();
    func_0x000180361880(uVar8,lVar9,lVar5,1,CONCAT44(uVar16,0x1000),
                        (ulonglong)puVar18 & 0xffffffff00000000);
    func_0x00018000c720(param_1 + 0x70,uVar8);
  }
  lVar5 = local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  if (lVar5 != 0) {
    if (_DAT_180807be8 != 0) {
      func_0x0001800041dc();
    }
    func_0x000180596700(*(undefined8 *)(_DAT_180fe2470 + 8),lVar5,0);
  }
  iVar4 = (**(code **)(*local_178 + 0x30))();
  if (iVar4 == 0) {
    func_0x00018000c720(param_1 + 0x18,local_178);
    *(undefined1 *)(param_1 + 0xe5) = 1;
    if (*(char *)(param_1 + 0xea) != '\0') {
      FUN_1801b58d0(param_1);
    }
    *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_d0;
    *(undefined1 *)(param_1 + 0xe4) = 1;
    bVar13 = 1;
  }
  else {
    (**(code **)(*local_178 + 0x38))(local_178,1);
    func_0x0001802d2050(local_178);
    bVar13 = 0;
  }
  uVar17 = (ulonglong)bVar13;
  if (local_188 != _DAT_180fe7000) {
    uVar17 = func_0x00018000cd70();
  }
  return uVar17;
}


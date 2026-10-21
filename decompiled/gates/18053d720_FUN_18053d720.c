/* query=1805407fb containing=18053d720 name=FUN_18053d720 body=13509 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18053d720(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_138 [32];
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  puStack_80 = (undefined4 *)0x0;
  uStack_78 = 0;
  if (DAT_180806b38 != '\0') {
    if (cRam0000000180806b39 != '\0') {
      return;
    }
    lVar3 = func_0x00018000c510(0x18089c7b0);
    FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
    FUN_1800cf0c0(6,0x1807c7c18,0x18077eac8,_DAT_180806b40);
    FUN_1800cf0c0(5,0x1807c2548,0x180773670,_DAT_180806b40);
    uVar4 = FUN_1805395f0();
    func_0x00018000c720(lVar3 + 8,uVar4);
    lVar5 = FUN_18000c630(0x1809b8ce8,0xe);
    *(undefined8 *)(lVar5 + 0x10) = 0x180765fa8;
    *(undefined8 *)(lVar5 + 0x18) = 0x180765fc8;
    *(undefined8 *)(lVar5 + 0x20) = 0x180765fe8;
    *(undefined8 *)(lVar5 + 0x28) = 0x180766008;
    *(undefined8 *)(lVar5 + 0x30) = 0x180766048;
    *(undefined8 *)(lVar5 + 0x38) = 0x180766068;
    *(undefined8 *)(lVar5 + 0x40) = 0x1807660a8;
    *(undefined8 *)(lVar5 + 0x48) = 0x180766128;
    *(undefined8 *)(lVar5 + 0x50) = 0x1807660e8;
    *(undefined8 *)(lVar5 + 0x58) = 0x180766028;
    *(undefined8 *)(lVar5 + 0x60) = 0x180766088;
    *(undefined8 *)(lVar5 + 0x68) = 0x1807660c8;
    *(undefined8 *)(lVar5 + 0x70) = 0x180766108;
    *(undefined8 *)(lVar5 + 0x78) = 0x180766148;
    uVar4 = func_0x00018000c510(0x1808e7ac8);
    func_0x000180006c7a(uVar4,lVar3);
    iVar2 = FUN_180720e20(0x1807f8e00,lVar5,uVar4);
    if (iVar2 == 0) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,0x1807c12a8,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_18053c680(param_1);
    if (iVar2 != 0) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x180769668,_DAT_180806b40);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,0x1807c0ff0,0x1807be978,0x50030);
      return;
    }
    cRam0000000180806b39 = 1;
    FUN_18053d3a0(param_1);
    lVar5 = *(longlong *)(param_1 + 0xa8);
    while (lVar5 == 0) {
      FUN_180331720(1000);
      lVar5 = *(longlong *)(param_1 + 0xa8);
    }
    uVar4 = *(undefined8 *)(lVar3 + 8);
    FUN_1805395f0();
    iVar2 = FUN_1802d3ee0(uVar4);
    if (iVar2 == 0) {
      FUN_1801b4d10();
      FUN_1801b57d0();
    }
    cRam0000000180806b39 = 0;
    while( true ) {
      uStack_50 = uStack_50 & 0xffffff00;
      uStack_4c = 0;
      uStack_58 = uStack_58 & 0xffffff00;
      uStack_54 = 0;
      uStack_108 = 0x180759410;
      uStack_100 = 0;
      uStack_f8 = 0x180759410;
      uStack_f0 = 0xf27e;
      uStack_e8 = 0x180759410;
      uStack_e0 = 0;
      uStack_110 = (ulonglong)uStack_58;
      uStack_118 = (ulonglong)uStack_50;
      lStack_88 = FUN_1805277a0(*(undefined8 *)(lVar3 + 8),0x180759410,0x1807cbad8,1);
      lVar6 = func_0x00018000c510(0x180899e68);
      func_0x00018000c720(lVar6 + 8,lStack_88);
      uVar4 = (**(code **)(**(longlong **)(lVar6 + 8) + 0x40))
                        (*(longlong **)(lVar6 + 8),0x1807c5488,0,1);
      func_0x00018000c720(lVar6 + 0x10,uVar4);
      lVar5 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar5 + 0x18) == 0) {
        plVar12 = *(longlong **)(lVar5 + 0x10);
      }
      else {
        plVar12 = *(longlong **)(lVar5 + 0x18);
      }
      (**(code **)(*plVar12 + 0x70))(plVar12,300000);
      if (*(longlong *)(lVar5 + 0x18) == 0) {
        plVar12 = *(longlong **)(lVar5 + 0x10);
      }
      else {
        plVar12 = *(longlong **)(lVar5 + 0x18);
      }
      (**(code **)(*plVar12 + 0x78))(plVar12,300000);
      lStack_90 = lVar6;
      FUN_180535fb0(lVar6);
      (*pcRam000000018080fd20)(lStack_90);
      if (lStack_88 != 0) {
        (*pcRam000000018080fd20)(lStack_88);
      }
      iVar2 = FUN_18053d560(param_1);
      if (iVar2 != 0) break;
      FUN_180331720(1000);
    }
    FUN_180331720(1000);
    uStack_108 = 0x180759410;
    uStack_100 = 0;
    uStack_f8 = 0x180759410;
    uStack_f0 = 0xf27e;
    uStack_e8 = 0x180759410;
    uStack_e0 = 0;
    uStack_110 = CONCAT44(uStack_54,uStack_58);
    uStack_118 = CONCAT44(uStack_4c,uStack_50);
    lStack_98 = FUN_1805277a0(*(undefined8 *)(lVar3 + 8),0x180759410,0x1807cbad8,1);
    lVar5 = func_0x00018000c510(0x180899e68);
    func_0x00018000c720(lVar5 + 8,lStack_98);
    uVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x40))
                      (*(longlong **)(lVar5 + 8),0x1807c5488,0,1);
    func_0x00018000c720(lVar5 + 0x10,uVar4);
    FUN_180534400(*(undefined8 *)(lVar5 + 0x10),300000);
    uStack_60 = uStack_60 & 0xffffff00;
    uStack_5c = 0;
    uStack_68 = uStack_68 & 0xffffff00;
    uStack_64 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    uStack_6c = 0;
    lStack_a0 = lVar5;
    lVar5 = FUN_1805360c0(lVar5,uStack_60,uStack_68,uStack_70);
    (*pcRam000000018080fd20)(lStack_a0);
    if (lStack_98 != 0) {
      (*pcRam000000018080fd20)(lStack_98);
    }
    if (lVar5 == 0) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x18079e5a8,0x180759ed0,0x180794a20);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    uVar7 = func_0x00018000c510(0x180835430);
    FUN_180194590(uVar7,0x1807ca740);
    lVar6 = func_0x00018000c510(0x1808355b8);
    FUN_1801961c0(lVar6);
    *(undefined4 *)(lVar6 + 0x80) = 1;
    *(undefined1 *)(lVar6 + 0x94) = 1;
    uStack_108 = 0x180759410;
    uStack_100 = 0;
    uStack_f8 = 0x180759410;
    uStack_f0 = 0xf27e;
    uStack_e8 = 0x180759410;
    uStack_e0 = 0;
    uStack_110 = CONCAT44(uStack_54,uStack_58);
    uStack_118 = CONCAT44(uStack_4c,uStack_50);
    uStack_a8 = FUN_1805277a0(*(undefined8 *)(lVar3 + 8),0x180759410,0x1807cbad8,1);
    FUN_180532210(uStack_a8,0);
    FUN_180533770(uStack_a8,0,0x1807991f0);
    lVar8 = FUN_180530050();
    uVar4 = *(undefined8 *)(lVar8 + 0x10);
    FUN_180533770(uStack_a8,0,0x180779a70);
    lVar8 = FUN_180530050();
    uVar10 = *(undefined8 *)(lVar8 + 0x10);
    (*pcRam000000018080fd20)(uStack_a8);
    lStack_d0 = FUN_18000c630(0x1809b8ce8,0x19);
    func_0x00018000c720(lStack_d0 + 0x10,*(undefined8 *)(lVar3 + 8));
    lVar3 = lStack_d0;
    *(undefined8 *)(lStack_d0 + 0x18) = 0x180766758;
    uVar9 = FUN_1805395a0();
    func_0x00018000c720(lVar3 + 0x20,uVar9);
    *(undefined8 *)(lVar3 + 0x28) = 0x180766758;
    uVar9 = FUN_1805397c0();
    func_0x00018000c720(lVar3 + 0x30,uVar9);
    *(undefined8 *)(lVar3 + 0x38) = 0x180766758;
    uVar9 = FUN_1805398b0();
    func_0x00018000c720(lVar3 + 0x40,uVar9);
    *(undefined8 *)(lVar3 + 0x48) = 0x180766758;
    uVar9 = FUN_180539900();
    func_0x00018000c720(lVar3 + 0x50,uVar9);
    *(undefined8 *)(lVar3 + 0x58) = 0x180766758;
    uVar9 = FUN_180539810();
    func_0x00018000c720(lVar3 + 0x60,uVar9);
    *(undefined8 *)(lVar3 + 0x68) = 0x180766758;
    func_0x00018000c720(lVar3 + 0x70,uVar4);
    *(undefined8 *)(lVar3 + 0x78) = 0x180766758;
    uVar4 = FUN_180539860();
    func_0x00018000c720(lVar3 + 0x80,uVar4);
    *(undefined8 *)(lVar3 + 0x88) = 0x180766758;
    func_0x00018000c720(lVar3 + 0x90,uVar10);
    *(undefined8 *)(lVar3 + 0x98) = 0x180766758;
    uVar4 = FUN_180539640();
    func_0x00018000c720(lVar3 + 0xa0,uVar4);
    *(undefined8 *)(lVar3 + 0xa8) = 0x180766758;
    uVar4 = FUN_180539740();
    func_0x00018000c720(lVar3 + 0xb0,uVar4);
    *(undefined8 *)(lVar3 + 0xb8) = 0x180766758;
    uVar4 = FUN_1805396c0();
    func_0x00018000c720(lVar3 + 0xc0,uVar4);
    *(undefined8 *)(lVar3 + 200) = 0x180766758;
    func_0x00018000c720(lVar3 + 0xd0,*(undefined8 *)(_DAT_180fe0ea8 + 0x10));
    uVar4 = FUN_1802d5e00(lVar3);
    uVar4 = FUN_1805410c0(param_1,uVar4);
    uVar10 = func_0x00018000c510(0x180835508);
    FUN_180195f50(uVar10,0x1807c2570,uVar4,1);
    FUN_180196640(lVar6,uVar10);
    uVar4 = FUN_1805423a0(lVar5,0xb,0x16);
    uVar4 = FUN_180541240(param_1,uVar4);
    uStack_118 = 0x1807c30b8;
    FUN_180196580(lVar6,0x1807c8248,uVar4,0x1807cbad8);
    uVar4 = FUN_1801959e0(uVar7,lVar6);
    uVar4 = (*pcRam000000018081ee20)(uVar4);
    lVar5 = FUN_1805413a0(uVar4);
    lVar3 = lVar5 + 0xc;
    uVar1 = *(undefined4 *)(lVar5 + 8);
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x180798214,5);
    if (-1 < iVar2) {
      uStack_44 = 0x3b;
      puStack_80 = &uStack_44;
      uStack_78 = CONCAT44(uStack_78._4_4_,1);
      lVar3 = FUN_1802d7900(lVar5,&puStack_80,0x7fffffff,0);
      if (1 < *(uint *)(lVar3 + 8)) {
        uVar4 = FUN_1802e47a0(*(undefined8 *)(lVar3 + 0x18));
        func_0x00018000c720(_DAT_180fe0ea0 + 0x60,uVar4);
        if (2 < *(uint *)(lVar3 + 8)) {
          uVar4 = FUN_1802e47a0(*(undefined8 *)(lVar3 + 0x20));
          func_0x00018000c720(_DAT_180fe0ea0 + 0x48,uVar4);
          if (3 < *(uint *)(lVar3 + 8)) {
            if ((*(longlong *)(lVar3 + 0x28) != 0) &&
               (*(int *)(*(longlong *)(lVar3 + 0x28) + 8) != 0)) {
              uVar4 = FUN_1802e47a0();
              func_0x00018000c720(_DAT_180fe0ea0 + 0x50,uVar4);
              uRam0000000180806b3c = 1;
            }
            if (4 < *(uint *)(lVar3 + 8)) {
              if ((*(longlong *)(lVar3 + 0x30) != 0) &&
                 (*(int *)(*(longlong *)(lVar3 + 0x30) + 8) != 0)) {
                uVar4 = FUN_1802e47a0();
                func_0x00018000c720(_DAT_180fe0ea0 + 0x58,uVar4);
                uRam0000000180806b3b = 1;
              }
              uRam0000000180806b3a = 1;
              FUN_1800cf0c0(6,0x1807c2548,0x1807b9748,_DAT_180806b40);
              FUN_1800cf0c0(6,0x1807c7c18,0x1807b9748,_DAT_180806b40);
              FUN_1800cf0c0(5,0x1807d12b8,0x18076f418,_DAT_180806b40);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_18039d020();
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807a0e74,9);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807a0e68,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x1807c10e8,0x180759ed0,0x180774db8);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x180784228,0x50040);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x18079a28c,5);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x18079e5a8,0x180759ed0,0x180794a78);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x18078dc74,9);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x1807c0fa0,0x180759ed0,0x18076f800);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807cad24,7);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x1807b74e8,0x180759ed0,0x180792ac8);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x18079285c,6);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x1807b7300,0x180759ed0,0x1807945d0);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x18079e62c,0x11);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x18079e5a8,0x180759ed0,0x180774d70);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807bb7bc,0xb);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x1807b7290,0x180759ed0,0x18079af90);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807cbb8c,7);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x18079e5a8,0x180759ed0,0x180774d70);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807c7324,7);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x18079e5a8,0x180759ed0,0x180774d70);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807ba5fc,6);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,0x1807c07b8,0x18077a988,0x50010);
      return;
    }
    iVar2 = FUN_1803015a0(lVar3,uVar1,0x1807d043c,4);
    if (-1 < iVar2) {
      FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
      uVar4 = FUN_1802d5700(0x1807c0e98,0x180759ed0,0x180794860);
      FUN_1801b4d10();
      lVar3 = FUN_1801b7990();
      if (lVar3 != 0) {
        FUN_180542ec0(lVar3);
      }
      FUN_180542d60(0,uVar4,0x18076e6d0,0x50010);
      return;
    }
    FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
    FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
    FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
    uVar4 = FUN_1802d5700(0x18079e5a8,0x180759ed0,0x180774d70);
    FUN_1801b4d10();
    lVar3 = FUN_1801b7990();
    if (lVar3 != 0) {
      FUN_180542ec0(lVar3);
    }
    FUN_180542d60(0,uVar4,0x18077a988,0x50010);
    return;
  }
  FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
  FUN_1800cf0c0(5,0x1807c2548,0x180773670,_DAT_180806b40);
  lVar3 = FUN_1801b5640(0x1807cbab0,0x180760738);
  iVar13 = 0;
  iVar2 = *(int *)(lVar3 + 8);
  if (0 < iVar2) {
    do {
      FUN_1801b57d0();
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar2);
  }
  FUN_180331720(500);
  uVar4 = func_0x00018000c550(0x180839620);
  FUN_1801b4370(uVar4);
  lVar3 = FUN_1801b4460(uVar4);
  uVar10 = FUN_1802d1920();
  uVar10 = FUN_1802d5660(uVar10,0x1807619b8);
  func_0x00018000c720(lVar3 + 8,uVar10);
  lVar3 = FUN_1801b4460(uVar4);
  *(undefined8 *)(lVar3 + 0x10) = 0x180765b48;
  lVar3 = FUN_1801b4460(uVar4);
  *(undefined1 *)(lVar3 + 0x83) = 0;
  uVar10 = FUN_1801b4460(uVar4);
  FUN_1801b9300(uVar10,1);
  lVar3 = FUN_1801b4460(uVar4);
  *(undefined1 *)(lVar3 + 0x7c) = 0;
  FUN_1801b4fc0(uVar4);
  FUN_180331720(500);
  lVar3 = func_0x00018000c550(0x1808279a0);
  uVar4 = func_0x00018000c550(0x1808271d0);
  uStack_118 = 0x1807c2988;
  FUN_1800e1d70(uVar4,0x180765020,0x8ae,0x1807d0a58);
  uVar10 = func_0x00018000c510(0x1808275d0);
  FUN_1800d91a0(lVar3,uVar4,1,uVar10);
  lVar5 = func_0x00018000c510(0x1808a3510);
  func_0x00018000c720(lVar5 + 8,*(undefined8 *)(_DAT_180fe1000 + 8));
  func_0x00018000c720(lVar3 + 0x50,lVar5);
  lStack_b0 = lVar3;
  FUN_1800d9270();
  FUN_1800d9490(lStack_b0);
  iVar2 = FUN_1800d9840(lStack_b0);
  if (iVar2 == 0) {
    FUN_1805427d0(0x1807c2548,0);
    FUN_1805427b0(0x1807c2548,0x180769640);
    FUN_1805427b0(0x1807d12b8,0x180780268);
    FUN_1805427b0(0x1807d12b8,0x1807bc5a0);
    uVar4 = FUN_1802d18b0();
    uVar4 = FUN_1802d5700(0x1807b6ba0,uVar4,0x180794628);
    uStack_118 = CONCAT44(uStack_118._4_4_,1);
    FUN_180542f60(uVar4,0x18077a988,0,0x10);
    FUN_180540eb1(auStack_138);
    FUN_180540eef(auStack_138);
    return;
  }
  FUN_1801a5870(0x18079bed0);
  uVar4 = FUN_1805395f0();
  uVar4 = FUN_180538af0(uVar4);
  uVar10 = func_0x00018000c510(0x180835430);
  FUN_1801943e0(uVar10);
  uVar7 = func_0x00018000c510(0x1808355b8);
  FUN_180196320(uVar7,0x1807ca6b0,0,1);
  FUN_1801966f0(uVar7,0x180775058,0x1807c3138);
  lStack_c8 = FUN_18000c630(0x1809b8ce8,5);
  uVar9 = FUN_180539640();
  func_0x00018000c720(lStack_c8 + 0x10,uVar9);
  *(undefined8 *)(lStack_c8 + 0x18) = 0x180766758;
  uVar9 = FUN_1805395a0();
  func_0x00018000c720(lStack_c8 + 0x20,uVar9);
  *(undefined8 *)(lStack_c8 + 0x28) = 0x180766758;
  func_0x00018000c720(lStack_c8 + 0x30,uVar4);
  uVar4 = FUN_1802d5e00(lStack_c8);
  uVar4 = FUN_1805410c0(param_1,uVar4);
  uStack_d8 = func_0x00018000c510(0x180835508);
  FUN_180195f50(uStack_d8,0x1807cb5e0,uVar4,1);
  FUN_180196640(uVar7,uStack_d8);
  uVar4 = FUN_180195990(uVar10,uVar7,1);
  uVar4 = (*pcRam000000018081ee20)(uVar4);
  lVar3 = FUN_1805413a0(uVar4);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) {
    FUN_1801b4d10();
    lVar3 = FUN_1801b7990();
    if (lVar3 != 0) {
      FUN_180542ec0(lVar3);
    }
    FUN_180542d60(0,0x18077bf88,0x18077a988,0x50010);
    FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
    FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
    FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
    FUN_180327160();
    uVar4 = FUN_1802fc640();
    FUN_1800cf0c0(7,0x1807cfd20,uVar4,_DAT_180806b40);
    FUN_180540eb1(auStack_138);
    FUN_180540eef(auStack_138);
    return;
  }
  lVar5 = FUN_18000c630(0x1809b8ce8,1);
  *(undefined8 *)(lVar5 + 0x10) = 0x180766758;
  uStack_118 = uStack_118 & 0xffffffff00000000;
  lVar3 = FUN_1802d7b00(lVar3,0,lVar5,0x7fffffff);
  if (*(int *)(lVar3 + 8) != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (((lVar5 == 0) || (*(int *)(lVar5 + 8) != 5)) ||
       (*(longlong *)(lVar5 + 0xc) != 0x64006100650072 || *(int *)(lVar5 + 0x12) != 0x790064)) {
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 0xb)) {
        auVar14._0_4_ =
             -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2d00 &&
                    *(int *)(lVar5 + 0x12) == _DAT_180cb2d10);
        auVar14._4_4_ =
             -(uint)(*(int *)(lVar5 + 0x10) == _UNK_180cb2d04 &&
                    *(int *)(lVar5 + 0x16) == _UNK_180cb2d14);
        auVar14._8_4_ =
             -(uint)(*(int *)(lVar5 + 0x14) == _UNK_180cb2d08 &&
                    *(int *)(lVar5 + 0x1a) == _UNK_180cb2d18);
        auVar14._12_4_ =
             -(uint)(*(int *)(lVar5 + 0x18) == _UNK_180cb2d0c &&
                    *(int *)(lVar5 + 0x1e) == _UNK_180cb2d1c);
        if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar14._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar14._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar14._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar14._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x1807bccc0,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
          *(undefined1 *)(param_1 + 0xbf) = 1;
          uVar4 = FUN_1802d5700(0x1807c0f20,0x180759ed0,0x1807cf400);
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,uVar4,0x180784228,0x50010);
          goto LAB_180540b87;
        }
      }
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 9)) {
        auVar15._0_4_ =
             -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2d20 &&
                    *(int *)(lVar5 + 0xe) == _DAT_180cb2d10);
        auVar15._4_4_ =
             -(uint)(*(int *)(lVar5 + 0x10) == _UNK_180cb2d24 &&
                    *(int *)(lVar5 + 0x12) == _UNK_180cb2d14);
        auVar15._8_4_ =
             -(uint)(*(int *)(lVar5 + 0x14) == _UNK_180cb2d28 &&
                    *(int *)(lVar5 + 0x16) == _UNK_180cb2d18);
        auVar15._12_4_ =
             -(uint)(*(int *)(lVar5 + 0x18) == _UNK_180cb2d2c &&
                    *(int *)(lVar5 + 0x1a) == _UNK_180cb2d1c);
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar15._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar15._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar15._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar15._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x1807bcb38,_DAT_180806b40);
          *(undefined8 *)(param_1 + 0x90) = 0x1807ca540;
          uVar4 = *(undefined8 *)(param_1 + 0x90);
          lVar3 = func_0x00018000c510();
          uStack_118 = uStack_118 & 0xffffffff00000000;
          uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
          uVar4 = FUN_1800d1470(uVar4,2,0,0);
          func_0x00018000c720(lVar3 + 8,uVar4);
          lVar5 = FUN_18000c630(0x1809b90e0,3);
          *(undefined2 *)(lVar5 + 0x10) = _UNK_180c757d0;
          *(undefined1 *)(lVar5 + 0x12) = UNK_180c757d2;
          uVar4 = FUN_18000c630(0x1809b90e0,3);
          uVar4 = FUN_1800d10e0(lVar3,0x3c,lVar5,uVar4);
          uVar10 = FUN_1802fca40(1);
          FUN_1800cf0c0(4,0x1807d02c8,uVar10,_DAT_180806b40);
          uVar4 = FUN_1802e3e10(uVar4);
          FUN_1800cf0c0(3,0x1807d02c8,uVar4,_DAT_180806b40);
          uVar4 = FUN_1802fca40(0);
          FUN_1800cf0c0(2,0x1807d0cc8,uVar4,_DAT_180806b40);
          uVar4 = FUN_1802fca40(1);
          FUN_1800cf0c0(2,0x1807cc870,uVar4,_DAT_180806b40);
          uVar4 = FUN_1802d5700(0x1807c11c0,0x180759ed0,0x180773ab8);
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,uVar4,0x180784228,0x50040);
          goto LAB_180540b87;
        }
      }
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 0xe)) {
        auVar16._0_4_ =
             -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2d20 &&
                    *(int *)(lVar5 + 0x18) == _DAT_180cb2d30);
        auVar16._4_4_ =
             -(uint)(*(int *)(lVar5 + 0x10) == _UNK_180cb2d24 &&
                    *(int *)(lVar5 + 0x1c) == _UNK_180cb2d34);
        auVar16._8_4_ =
             -(uint)(*(int *)(lVar5 + 0x14) == _UNK_180cb2d28 &&
                    *(int *)(lVar5 + 0x20) == _UNK_180cb2d38);
        auVar16._12_4_ =
             -(uint)(*(int *)(lVar5 + 0x18) == _UNK_180cb2d2c &&
                    *(int *)(lVar5 + 0x24) == _UNK_180cb2d3c);
        if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar16._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar16._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar16._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar16._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x18077daf8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x1807bcb38,_DAT_180806b40);
          *(undefined8 *)(param_1 + 0x90) = 0x1807ca540;
          uVar4 = *(undefined8 *)(param_1 + 0x90);
          lVar3 = func_0x00018000c510();
          uStack_118 = uStack_118 & 0xffffffff00000000;
          uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
          uVar4 = FUN_1800d1470(uVar4,2,0,0);
          func_0x00018000c720(lVar3 + 8,uVar4);
          lVar5 = FUN_18000c630(0x1809b90e0,3);
          *(undefined2 *)(lVar5 + 0x10) = _UNK_180c757d0;
          *(undefined1 *)(lVar5 + 0x12) = UNK_180c757d2;
          uVar4 = FUN_18000c630(0x1809b90e0,3);
          uVar4 = FUN_1800d10e0(lVar3,0x3c,lVar5,uVar4);
          uVar10 = FUN_1802fca40(1);
          FUN_1800cf0c0(4,0x1807d02c8,uVar10,_DAT_180806b40);
          uVar4 = FUN_1802e3e10(uVar4);
          FUN_1800cf0c0(3,0x1807d02c8,uVar4,_DAT_180806b40);
          uVar4 = FUN_1802fca40(0);
          FUN_1800cf0c0(2,0x1807d0cc8,uVar4,_DAT_180806b40);
          uVar4 = FUN_1802fca40(1);
          FUN_1800cf0c0(2,0x1807cc870,uVar4,_DAT_180806b40);
          uVar4 = FUN_1802d5700(0x1807c1158,0x180759ed0,0x180773ab8);
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,uVar4,0x180784228,0x50040);
          goto LAB_180540b87;
        }
      }
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 10)) {
        auVar17._0_4_ =
             -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2d40 &&
                    *(int *)(lVar5 + 0x10) == _DAT_180cb2d50);
        auVar17._4_4_ =
             -(uint)(*(int *)(lVar5 + 0x10) == _UNK_180cb2d44 &&
                    *(int *)(lVar5 + 0x14) == _UNK_180cb2d54);
        auVar17._8_4_ =
             -(uint)(*(int *)(lVar5 + 0x14) == _UNK_180cb2d48 &&
                    *(int *)(lVar5 + 0x18) == _UNK_180cb2d58);
        auVar17._12_4_ =
             -(uint)(*(int *)(lVar5 + 0x18) == _UNK_180cb2d4c &&
                    *(int *)(lVar5 + 0x1c) == _UNK_180cb2d5c);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar17._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar17._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar17._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar17._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x1807bb780,_DAT_180806b40);
          uVar4 = FUN_1802d5700(0x1807c1238,0x180759ed0,0x1807cf218);
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,uVar4,0x180784228,0x50040);
          goto LAB_180540b87;
        }
      }
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 9)) {
        auVar18._0_4_ =
             -(uint)(*(int *)(lVar5 + 0xc) == _DAT_180cb2d60 &&
                    *(int *)(lVar5 + 0xe) == _DAT_180cb2d70);
        auVar18._4_4_ =
             -(uint)(*(int *)(lVar5 + 0x10) == _UNK_180cb2d64 &&
                    *(int *)(lVar5 + 0x12) == _UNK_180cb2d74);
        auVar18._8_4_ =
             -(uint)(*(int *)(lVar5 + 0x14) == _UNK_180cb2d68 &&
                    *(int *)(lVar5 + 0x16) == _UNK_180cb2d78);
        auVar18._12_4_ =
             -(uint)(*(int *)(lVar5 + 0x18) == _UNK_180cb2d6c &&
                    *(int *)(lVar5 + 0x1a) == _UNK_180cb2d7c);
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                     (ushort)((byte)(auVar18._12_4_ >> 7) & 1) << 0xc |
                     (ushort)((byte)(auVar18._12_4_ >> 0xf) & 1) << 0xd |
                     (ushort)((byte)(auVar18._12_4_ >> 0x17) & 1) << 0xe |
                    (ushort)(byte)(auVar18._12_4_ >> 0x1f) << 0xf) == 0xffff) {
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x18077daf8,_DAT_180806b40);
          uVar4 = FUN_1802d5700(0x1807747b0,0x180759ed0,0x180794920);
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,uVar4,0x180784228,0x50020);
          lVar3 = func_0x00018000c510(0x180839830);
          *(undefined8 *)(lVar3 + 8) = 0x1807caa68;
          *(undefined1 *)(lVar3 + 0x83) = 1;
          FUN_1801b51f0(lVar3);
          goto LAB_180540b87;
        }
      }
      if (((lVar5 != 0) && (*(int *)(lVar5 + 8) == 4)) &&
         (*(longlong *)(lVar5 + 0xc) == 0x74007300650067)) {
        FUN_18053bbb0(param_1);
        if (1 < *(uint *)(lVar3 + 8)) {
          uVar4 = *(undefined8 *)(lVar3 + 0x18);
          uVar10 = func_0x00018000c550(0x180827560);
          uVar7 = func_0x00018000c550(0x1808271d0);
          uStack_118 = 0x1807c2988;
          FUN_1800e1d70(uVar7,0x180765020,0x8ae,0x1807d0a58);
          uVar9 = func_0x00018000c510(0x1808275d0);
          FUN_1800e5d10(uVar10,uVar7,1,uVar9);
          FUN_1800d9270(uVar10);
          uVar7 = func_0x00018000c510(0x180862388);
          uVar9 = FUN_1802e47a0(uVar4);
          FUN_18035cac0(uVar7,uVar9,1);
          uStack_b8 = uVar7;
          FUN_1800e5d70(uVar10,uVar7,0x180761778);
          FUN_1801a5870(0x18077f040);
          (*pcRam000000018080fd20)(uVar7);
          FUN_1800d9310(uVar10);
          uVar10 = FUN_1800f3c80(lStack_b0,0x1807c4bc8);
          uVar7 = FUN_1800f46a0(uVar10,0,0);
          FUN_1800f48d0(uVar10,uVar7);
          uVar10 = FUN_1800f3c80(lStack_b0,0x1807617c8);
          uVar7 = FUN_1800f46a0(uVar10,0,0);
          FUN_1800f48d0(uVar10,uVar7);
          lVar3 = FUN_1800f4330();
          if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) {
            FUN_1801b4d10();
            lVar3 = FUN_1801b7990();
            if (lVar3 != 0) {
              FUN_180542ec0(lVar3);
            }
            FUN_180542d60(0,0x18077bea8,0x18077a988,0x50010);
            FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
            FUN_180327160();
            uVar4 = FUN_1802fc640();
            FUN_1800cf0c0(7,0x1807cfd20,uVar4,_DAT_180806b40);
            FUN_180540eb1(auStack_138);
            FUN_180540eef(auStack_138);
            return;
          }
          uVar10 = FUN_1800f3c80(lStack_b0,0x1807d0980);
          uVar7 = FUN_1800f46a0(uVar10,0,0);
          FUN_1800f48d0(uVar10,uVar7);
          FUN_1800d9310(lStack_b0);
          FUN_18053bbb0(param_1);
          uVar10 = func_0x00018000c510(0x180835430);
          FUN_1801943e0(uVar10);
          uVar7 = func_0x00018000c510(0x1808355b8);
          FUN_180196320(uVar7,0x1807ca6b0,0,1);
          FUN_1801966f0(uVar7,0x180775058,0x1807c3138);
          lVar3 = FUN_18000c630(0x1809b8ce8,5);
          uVar9 = FUN_180539640();
          func_0x00018000c720(lVar3 + 0x10,uVar9);
          *(undefined8 *)(lVar3 + 0x18) = 0x180766758;
          uVar9 = FUN_1805395a0();
          func_0x00018000c720(lVar3 + 0x20,uVar9);
          *(undefined8 *)(lVar3 + 0x28) = 0x180766bc8;
          uVar9 = FUN_1800f4330();
          func_0x00018000c720(lVar3 + 0x30,uVar9);
          uVar9 = FUN_1802d5e00(lVar3);
          uVar9 = FUN_1805410c0(param_1,uVar9);
          uVar11 = func_0x00018000c510(0x180835508);
          FUN_180195f50(uVar11,0x1807cb5e0,uVar9,1);
          FUN_180196640(uVar7,uVar11);
          uVar10 = FUN_180195990(uVar10,uVar7,1);
          uVar10 = (*pcRam000000018081ee20)(uVar10);
          uVar10 = FUN_1805413a0(uVar10);
          lVar3 = FUN_18000c630(0x1809b8ce8,1);
          *(undefined8 *)(lVar3 + 0x10) = 0x180766758;
          uStack_118 = uStack_118 & 0xffffffff00000000;
          lVar3 = FUN_1802d7b00(uVar10,0,lVar3,0x7fffffff);
          if (*(int *)(lVar3 + 8) != 0) {
            lVar3 = *(longlong *)(lVar3 + 0x10);
            if (((lVar3 == 0) || (*(int *)(lVar3 + 8) != 5)) ||
               (*(longlong *)(lVar3 + 0xc) != 0x64006100650072 || *(int *)(lVar3 + 0x12) != 0x790064
               )) {
              FUN_1801b4d10();
              lVar3 = FUN_1801b7990();
              if (lVar3 != 0) {
                FUN_180542ec0(lVar3);
              }
              FUN_180542d60(0,0x18077c000,0x18077a988,0x50010);
              FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
              FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
              FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
              FUN_180327160();
              uVar4 = FUN_1802fc640();
              FUN_1800cf0c0(7,0x1807cfd20,uVar4,_DAT_180806b40);
              FUN_180540eb1(auStack_138);
              FUN_180540eef(auStack_138);
              return;
            }
            uVar4 = FUN_1802e47a0(uVar4);
            func_0x00018000c720(_DAT_180fe0ea0 + 0x60,uVar4);
            FUN_1800cf0c0(6,0x1807c2548,0x1807b9748,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
            goto LAB_180540b87;
          }
        }
        goto LAB_18053f082;
      }
      if (((lVar5 == 0) || (*(int *)(lVar5 + 8) != 3)) ||
         (*(int *)(lVar5 + 0xc) != 0x65006e || *(int *)(lVar5 + 0xe) != 0x770065)) {
        uStack_118 = CONCAT44(uStack_118._4_4_,1);
        FUN_180542f60(0x18077c000,0x18077a988,0,0x10);
        FUN_1805427d0(0x1807c2548,0);
        FUN_1805427b0(0x1807c2548,0x180769640);
        FUN_1805427b0(0x1807d12b8,0x180780268);
      }
      else {
        FUN_18053bbb0(param_1);
        if (*(uint *)(lVar3 + 8) < 2) goto LAB_18053f082;
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        uVar10 = func_0x00018000c550(0x180827560);
        uVar7 = func_0x00018000c550(0x1808271d0);
        uStack_118 = 0x1807c2988;
        FUN_1800e1d70(uVar7,0x180765020,0x8ae,0x1807d0a58);
        uVar9 = func_0x00018000c510(0x1808275d0);
        FUN_1800e5d10(uVar10,uVar7,1,uVar9);
        FUN_1800d9270(uVar10);
        uVar7 = func_0x00018000c510(0x180862388);
        uVar4 = FUN_1802e47a0(uVar4);
        FUN_18035cac0(uVar7,uVar4,1);
        uStack_c0 = uVar7;
        FUN_1800e5d70(uVar10,uVar7,0x180761778);
        FUN_1801a5870(0x18077f040);
        (*pcRam000000018080fd20)(uVar7);
        FUN_1800d9310(uVar10);
        uVar4 = FUN_1800f3c80(lStack_b0,0x1807c4bc8);
        uVar10 = FUN_1800f46a0(uVar4,0,0);
        FUN_1800f48d0(uVar4,uVar10);
        uVar4 = FUN_1800f3c80(lStack_b0,0x1807617c8);
        uVar10 = FUN_1800f46a0(uVar4,0,0);
        FUN_1800f48d0(uVar4,uVar10);
        lVar3 = FUN_1800f4330();
        if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) {
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,0x18077bea8,0x18077a988,0x50010);
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
          FUN_180327160();
          uVar4 = FUN_1802fc640();
          FUN_1800cf0c0(7,0x1807cfd20,uVar4,_DAT_180806b40);
          FUN_180540eb1(auStack_138);
          FUN_180540eef(auStack_138);
          return;
        }
        uVar4 = func_0x00018000c510(0x180835430);
        FUN_1801943e0(uVar4);
        uVar10 = func_0x00018000c510(0x1808355b8);
        FUN_180196320(uVar10,0x1807ca6b0,0,1);
        FUN_1801966f0(uVar10,0x180775058,0x1807c3138);
        lVar3 = FUN_18000c630(0x1809b8ce8,5);
        uVar7 = FUN_180539640();
        func_0x00018000c720(lVar3 + 0x10,uVar7);
        *(undefined8 *)(lVar3 + 0x18) = 0x180766758;
        uVar7 = FUN_1805395a0();
        func_0x00018000c720(lVar3 + 0x20,uVar7);
        *(undefined8 *)(lVar3 + 0x28) = 0x180766bc8;
        uVar7 = FUN_1800f4330();
        func_0x00018000c720(lVar3 + 0x30,uVar7);
        uVar7 = FUN_1802d5e00(lVar3);
        uVar7 = FUN_1805410c0(param_1,uVar7);
        uVar9 = func_0x00018000c510(0x180835508);
        FUN_180195f50(uVar9,0x1807cb5e0,uVar7,1);
        FUN_180196640(uVar10,uVar9);
        uVar4 = FUN_180195990(uVar4,uVar10,1);
        uVar4 = (*pcRam000000018081ee20)(uVar4);
        lVar3 = FUN_1805413a0(uVar4);
        if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) {
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,0x18077c000,0x18077a988,0x50010);
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
          FUN_180327160();
          uVar4 = FUN_1802fc640();
          FUN_1800cf0c0(7,0x1807cfd20,uVar4,_DAT_180806b40);
          FUN_180540eb1(auStack_138);
          FUN_180540eef(auStack_138);
          return;
        }
        uVar4 = FUN_1802d5660(0x180761820,lVar3);
        uVar4 = FUN_1800f3c80(lStack_b0,uVar4);
        uVar10 = FUN_1800f46a0(uVar4,0,0);
        FUN_1800f48d0(uVar4,uVar10);
        lVar3 = FUN_1800f4330();
        if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) {
          FUN_1801b4d10();
          lVar3 = FUN_1801b7990();
          if (lVar3 != 0) {
            FUN_180542ec0(lVar3);
          }
          FUN_180542d60(0,0x18077bea8,0x18077a988,0x50010);
          FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807c2548,0x180769640,_DAT_180806b40);
          FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
          FUN_180540eb1(auStack_138);
          FUN_180540eef(auStack_138);
          return;
        }
        uVar4 = func_0x00018000c510(0x180835430);
        FUN_1801943e0(uVar4);
        uVar10 = func_0x00018000c510(0x1808355b8);
        FUN_180196320(uVar10,0x1807ca6b0,0,1);
        FUN_1801966f0(uVar10,0x180775058,0x1807c3138);
        lVar3 = FUN_18000c630(0x1809b8ce8,5);
        uVar7 = FUN_180539640();
        func_0x00018000c720(lVar3 + 0x10,uVar7);
        *(undefined8 *)(lVar3 + 0x18) = 0x180766758;
        uVar7 = FUN_1805395a0();
        func_0x00018000c720(lVar3 + 0x20,uVar7);
        *(undefined8 *)(lVar3 + 0x28) = 0x180766be8;
        uVar7 = FUN_1800f4330();
        func_0x00018000c720(lVar3 + 0x30,uVar7);
        uVar7 = FUN_1802d5e00(lVar3);
        uVar7 = FUN_1805410c0(param_1,uVar7);
        uVar9 = func_0x00018000c510(0x180835508);
        FUN_180195f50(uVar9,0x1807cb5e0,uVar7,1);
        FUN_180196640(uVar10,uVar9);
        uVar4 = FUN_180195990(uVar4,uVar10,1);
        uVar4 = (*pcRam000000018081ee20)(uVar4);
        lVar3 = FUN_1805413a0(uVar4);
        uVar4 = FUN_1800f3c80(lStack_b0,0x1807d0980);
        uVar10 = FUN_1800f46a0(uVar4,0,0);
        FUN_1800f48d0(uVar4,uVar10);
        FUN_1800d9310(lStack_b0);
        FUN_18053bbb0(param_1);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 8) == 9)) {
          auVar19._0_4_ =
               -(uint)(*(int *)(lVar3 + 0xc) == _DAT_180cb2d20 &&
                      *(int *)(lVar3 + 0xe) == _DAT_180cb2d10);
          auVar19._4_4_ =
               -(uint)(*(int *)(lVar3 + 0x10) == _UNK_180cb2d24 &&
                      *(int *)(lVar3 + 0x12) == _UNK_180cb2d14);
          auVar19._8_4_ =
               -(uint)(*(int *)(lVar3 + 0x14) == _UNK_180cb2d28 &&
                      *(int *)(lVar3 + 0x16) == _UNK_180cb2d18);
          auVar19._12_4_ =
               -(uint)(*(int *)(lVar3 + 0x18) == _UNK_180cb2d2c &&
                      *(int *)(lVar3 + 0x1a) == _UNK_180cb2d1c);
          if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                       (ushort)((byte)(auVar19._12_4_ >> 7) & 1) << 0xc |
                       (ushort)((byte)(auVar19._12_4_ >> 0xf) & 1) << 0xd |
                       (ushort)((byte)(auVar19._12_4_ >> 0x17) & 1) << 0xe |
                      (ushort)(byte)(auVar19._12_4_ >> 0x1f) << 0xf) == 0xffff) {
            FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807d12b8,0x1807bcb38,_DAT_180806b40);
            *(undefined8 *)(param_1 + 0x90) = 0x1807ca540;
            uVar4 = *(undefined8 *)(param_1 + 0x90);
            lVar3 = func_0x00018000c510();
            uStack_118 = uStack_118 & 0xffffffff00000000;
            uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
            uVar4 = FUN_1800d1470(uVar4,2,0,0);
            func_0x00018000c720(lVar3 + 8,uVar4);
            lVar5 = FUN_18000c630(0x1809b90e0,3);
            *(undefined2 *)(lVar5 + 0x10) = _UNK_180c757d0;
            *(undefined1 *)(lVar5 + 0x12) = UNK_180c757d2;
            uVar4 = FUN_18000c630(0x1809b90e0,3);
            uVar4 = FUN_1800d10e0(lVar3,0x3c,lVar5,uVar4);
            uVar10 = FUN_1802fca40(1);
            FUN_1800cf0c0(4,0x1807d02c8,uVar10,_DAT_180806b40);
            uVar4 = FUN_1802e3e10(uVar4);
            FUN_1800cf0c0(3,0x1807d02c8,uVar4,_DAT_180806b40);
            uVar4 = FUN_1802fca40(0);
            FUN_1800cf0c0(2,0x1807d0cc8,uVar4,_DAT_180806b40);
            uVar4 = FUN_1802fca40(1);
            FUN_1800cf0c0(2,0x1807cc870,uVar4,_DAT_180806b40);
            uVar4 = FUN_1802d5700(0x1807c11c0,0x180759ed0,0x180773b70);
            FUN_1801b4d10();
            lVar3 = FUN_1801b7990();
            if (lVar3 != 0) {
              FUN_180542ec0(lVar3);
            }
            FUN_180542d60(0,uVar4,0x180784228,0x50040);
            goto LAB_180540b87;
          }
        }
        if ((lVar3 != 0) && (*(int *)(lVar3 + 8) == 0xe)) {
          auVar20._0_4_ =
               -(uint)(*(int *)(lVar3 + 0xc) == _DAT_180cb2d20 &&
                      *(int *)(lVar3 + 0x18) == _DAT_180cb2d30);
          auVar20._4_4_ =
               -(uint)(*(int *)(lVar3 + 0x10) == _UNK_180cb2d24 &&
                      *(int *)(lVar3 + 0x1c) == _UNK_180cb2d34);
          auVar20._8_4_ =
               -(uint)(*(int *)(lVar3 + 0x14) == _UNK_180cb2d28 &&
                      *(int *)(lVar3 + 0x20) == _UNK_180cb2d38);
          auVar20._12_4_ =
               -(uint)(*(int *)(lVar3 + 0x18) == _UNK_180cb2d2c &&
                      *(int *)(lVar3 + 0x24) == _UNK_180cb2d3c);
          if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                       (ushort)((byte)(auVar20._12_4_ >> 7) & 1) << 0xc |
                       (ushort)((byte)(auVar20._12_4_ >> 0xf) & 1) << 0xd |
                       (ushort)((byte)(auVar20._12_4_ >> 0x17) & 1) << 0xe |
                      (ushort)(byte)(auVar20._12_4_ >> 0x1f) << 0xf) == 0xffff) {
            FUN_1800cf0c0(6,0x1807c2548,0x18077eac8,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807d12b8,0x18077daf8,_DAT_180806b40);
            FUN_1800cf0c0(5,0x1807d12b8,0x1807bcb38,_DAT_180806b40);
            *(undefined8 *)(param_1 + 0x90) = 0x1807ca540;
            uVar4 = *(undefined8 *)(param_1 + 0x90);
            uVar10 = func_0x00018000c510();
            uStack_118 = uStack_118 & 0xffffffff00000000;
            uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
            uVar4 = FUN_1800d1470(uVar4,2,0,0);
            FUN_1800d10a0(uVar10,uVar4);
            lVar3 = FUN_18000c630(0x1809b90e0,3);
            *(undefined2 *)(lVar3 + 0x10) = _UNK_180c757d0;
            *(undefined1 *)(lVar3 + 0x12) = UNK_180c757d2;
            uVar4 = FUN_18000c630(0x1809b90e0,3);
            uVar4 = FUN_1800d10e0(uVar10,0x3c,lVar3,uVar4);
            FUN_180542780(0x1807d02c8,1);
            uVar4 = FUN_1802e3e10(uVar4);
            FUN_180542760(0x1807d02c8,uVar4);
            FUN_180542730(0x1807d0cc8,0);
            FUN_180542730(0x1807cc870,1);
            uVar4 = FUN_1802d18b0();
            uVar4 = FUN_1802d5700(0x1807c1158,uVar4,0x180773ab8);
            uStack_118 = CONCAT44(uStack_118._4_4_,1);
            FUN_180542f60(uVar4,0x180784228,0,0x40);
            goto LAB_180540b87;
          }
        }
        FUN_1805427d0(0x1807c2548,0);
        FUN_1805427b0(0x1807d12b8,0x1807bccc0);
        FUN_1805427b0(0x1807d12b8,0x180780268);
        *(undefined1 *)(param_1 + 0xbf) = 1;
        uVar4 = FUN_1802d18b0();
        uVar4 = FUN_1802d5700(0x1807c0f20,uVar4,0x1807cf400);
        uStack_118 = CONCAT44(uStack_118._4_4_,1);
        FUN_180542f60(uVar4,0x180784228,0,0x10);
      }
    }
    else {
      if (*(uint *)(lVar3 + 8) < 2) goto LAB_18053f082;
      uVar4 = FUN_1802e47a0(*(undefined8 *)(lVar3 + 0x18));
      func_0x00018000c720(_DAT_180fe0ea0 + 0x60,uVar4);
      FUN_1800cf0c0(6,0x1807c2548,0x1807b9748,_DAT_180806b40);
      FUN_1800cf0c0(5,0x1807d12b8,0x180780268,_DAT_180806b40);
    }
LAB_180540b87:
    FUN_180540eb1(auStack_138);
    FUN_180540eef(auStack_138);
    return;
  }
LAB_18053f082:
                    /* WARNING: Subroutine does not return */
  FUN_18039d020();
}


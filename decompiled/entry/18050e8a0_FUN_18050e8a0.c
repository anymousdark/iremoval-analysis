/* 18050e8a0  FUN_18050e8a0  body=1592 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050e8a0(longlong param_1)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  short *psVar13;
  longlong lVar14;
  longlong *plVar15;
  short sVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  uint uVar24;
  undefined1 auStack_2b8 [32];
  longlong local_298 [59];
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  
  local_90 = (longlong *)0x0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_98 = _DAT_180fe7000;
  lVar5 = *(longlong *)(param_1 + 8);
  puVar19 = local_b8;
  if (lVar5 == 0) goto LAB_18050eea1;
  if (1 < *(int *)(lVar5 + 0x10)) {
    if (*(longlong *)(_DAT_180fe0e18 + 0x20) == 0) {
      uStack_c0 = 0x18050e914;
      uVar10 = func_0x00018000c510(0x18097db58);
      uStack_c0 = 0x18050e92a;
      func_0x000180006a8e(uVar10,*(undefined8 *)(_DAT_180fe0e18 + 8));
      uStack_c0 = 0x18050e93d;
      func_0x00018000c720(_DAT_180fe0e18 + 0x20,uVar10);
    }
    uStack_c0 = 0x18050e948;
    func_0x00018060c4e0(lVar5);
    bVar8 = false;
    uVar18 = 0;
    uVar12 = 1;
    while( true ) {
      uVar21 = *(uint *)(lVar5 + 0x10);
      uVar17 = (uint)uVar18;
      puVar19 = local_b8;
      if (uVar21 <= uVar17) break;
      lVar6 = *(longlong *)(lVar5 + 8);
      uVar24 = *(uint *)(lVar6 + 8);
      puVar19 = local_b8;
      if (uVar24 <= uVar17) goto LAB_18050eedf;
      puVar1 = (undefined2 *)(lVar6 + 0x10 + uVar18 * 4);
      uVar20 = (uint)(ushort)puVar1[1];
      while ((uVar11 = (uint)uVar12, uVar11 != uVar21 && (uVar20 != 0xffff))) {
        puVar19 = local_b8;
        if (uVar21 <= uVar11) goto LAB_18050eed2;
        puVar19 = local_b8;
        if (uVar24 <= uVar11) goto LAB_18050eedf;
        puVar2 = (ushort *)(lVar6 + 0x10 + uVar12 * 4);
        if (uVar20 + 1 < (uint)*puVar2) goto LAB_18050e9cc;
        uVar22 = (uint)puVar2[1];
        if (uVar20 < uVar22) {
          uVar20 = uVar22;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
      }
      bVar8 = true;
LAB_18050e9cc:
      *puVar1 = *puVar1;
      puVar1[1] = (short)uVar20;
      iVar9 = *(int *)(lVar5 + 0x14);
      *(int *)(lVar5 + 0x14) = iVar9 + 1;
      uVar17 = uVar17 + 1;
      uVar18 = (ulonglong)uVar17;
      if (bVar8) {
        uStack_c0 = 0x18050ea4e;
        func_0x00018060c460(lVar5,uVar18,uVar21 - uVar17);
        goto LAB_18050ea4e;
      }
      if ((int)uVar17 < (int)uVar11) {
        puVar19 = local_b8;
        if (uVar21 <= uVar11) break;
        puVar19 = local_b8;
        if (uVar24 <= uVar11) goto LAB_18050eedf;
        puVar1 = (undefined2 *)(lVar6 + 0x10 + uVar12 * 4);
        uVar4 = puVar1[1];
        puVar19 = local_b8;
        if (uVar21 <= uVar17) break;
        puVar19 = local_b8;
        if (uVar24 <= uVar17) goto LAB_18050eedf;
        puVar3 = (undefined2 *)(lVar6 + 0x10 + (ulonglong)uVar17 * 4);
        *puVar3 = *puVar1;
        puVar3[1] = uVar4;
        *(int *)(lVar5 + 0x14) = iVar9 + 2;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
    }
    goto LAB_18050eed2;
  }
LAB_18050ea4e:
  if (((*(char *)(param_1 + 0x24) == '\0') && (*(longlong *)(param_1 + 0x18) == 0)) &&
     ((lVar6 = *(longlong *)(param_1 + 0x10), lVar6 == 0 ||
      (*(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18) == 0)))) {
    if (*(int *)(lVar5 + 0x10) == 2) {
      lVar6 = *(longlong *)(lVar5 + 8);
      puVar19 = local_b8;
      if (*(int *)(lVar6 + 8) == 0) goto LAB_18050eedf;
      if (*(short *)(lVar6 + 0x10) == 0) {
        puVar19 = local_b8;
        if (*(uint *)(lVar6 + 8) < 2) goto LAB_18050eedf;
        if (*(short *)(lVar6 + 0x16) == -1) {
          iVar9 = *(ushort *)(lVar6 + 0x14) - 1;
          if ((int)(uint)*(ushort *)(lVar6 + 0x12) < iVar9) {
            *(short *)(lVar6 + 0x10) = *(ushort *)(lVar6 + 0x12) + 1;
            *(short *)(lVar6 + 0x12) = (short)iVar9;
            *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
            uStack_c0 = 0x18050eb06;
            func_0x00018060c410(lVar5,1);
            goto LAB_18050eb6e;
          }
        }
      }
    }
    else if (*(int *)(lVar5 + 0x10) == 1) {
      lVar6 = *(longlong *)(lVar5 + 8);
      puVar19 = local_b8;
      if (*(int *)(lVar6 + 8) == 0) goto LAB_18050eedf;
      psVar13 = (short *)(lVar6 + 0x10);
      if (*psVar13 == 0) {
        if (*(short *)(lVar6 + 0x12) == -2) {
          *psVar13 = -1;
          *(undefined2 *)(lVar6 + 0x12) = 0xffff;
LAB_18050eb6b:
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
LAB_18050eb6e:
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
      }
      else if ((*psVar13 == 1) && (*(short *)(lVar6 + 0x12) == -1)) {
        *psVar13 = 0;
        *(undefined2 *)(lVar6 + 0x12) = 0;
        goto LAB_18050eb6b;
      }
    }
  }
  if ((((*(char *)(param_1 + 0x24) == '\0') && (*(longlong *)(param_1 + 0x18) == 0)) &&
      (lVar6 = *(longlong *)(param_1 + 0x10), lVar6 != 0)) &&
     ((0 < *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18) && (*(int *)(lVar5 + 0x10) == 1)))) {
    lVar14 = *(longlong *)(lVar5 + 8);
    puVar19 = local_b8;
    if (*(int *)(lVar14 + 8) == 0) goto LAB_18050eedf;
    if ((*(short *)(lVar14 + 0x10) == 0) && (*(short *)(lVar14 + 0x12) == -1)) {
      uStack_c0 = 0x18050ebd3;
      func_0x000180340dc0(lVar6,0);
    }
  }
  puVar19 = local_b8;
  if ((((*(char *)(param_1 + 0x24) == '\0') &&
       (puVar19 = local_b8, *(longlong *)(param_1 + 0x18) == 0)) &&
      (lVar6 = *(longlong *)(param_1 + 0x10), puVar19 = local_b8, lVar6 != 0)) &&
     ((puVar19 = local_b8, 0 < *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18) &&
      (puVar19 = local_b8, *(int *)(lVar5 + 0x10) == 2)))) {
    lVar14 = *(longlong *)(lVar5 + 8);
    puVar19 = local_b8;
    if (*(int *)(lVar14 + 8) == 0) {
LAB_18050eedf:
      *(undefined8 *)(puVar19 + -8) = 0x18050eee4;
      func_0x00018039d020();
      return;
    }
    puVar19 = local_b8;
    if (*(short *)(lVar14 + 0x10) == 0) {
      puVar19 = local_b8;
      if (*(uint *)(lVar14 + 8) < 2) goto LAB_18050eedf;
      puVar19 = local_b8;
      if ((*(ushort *)(lVar14 + 0x12) + 2 == (uint)*(ushort *)(lVar14 + 0x14)) &&
         (puVar19 = local_b8, *(short *)(lVar14 + 0x16) == -1)) {
        local_48 = local_298;
        uVar10 = 0;
        local_58 = 0;
        uStack_40 = CONCAT44(uStack_40._4_4_,0x100);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        iVar9 = 0;
        lVar14 = lVar6;
        do {
          iVar9 = iVar9 + 1;
          lVar14 = *(longlong *)(lVar14 + 0x10);
        } while (lVar14 != 0);
        if (8 < iVar9) {
          uVar10 = func_0x00018000c510(0x180873838);
          func_0x0001803bb680(uVar10,lVar6,iVar9);
        }
        local_68 = 0;
        lStack_70 = lVar6;
        uStack_60 = uVar10;
        iVar9 = func_0x0001803ac300(&lStack_70);
        while (iVar9 != 0) {
          if (local_68 == 0) {
            func_0x000180303350();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar15 = *(longlong **)(local_68 + 8);
          uVar21 = *(uint *)(local_68 + 0x18);
          if (plVar15 == (longlong *)0x0) {
            if (uVar21 != 0) goto LAB_18050eec6;
            plVar15 = (longlong *)0x0;
            uVar21 = 0;
          }
          else if (*(uint *)(plVar15 + 1) < uVar21) goto LAB_18050eec6;
          plVar23 = (longlong *)0x0;
          uVar17 = 0;
          if (plVar15 != (longlong *)0x0) {
            if (*plVar15 == 0x180858040) {
              plVar23 = (longlong *)((longlong)plVar15 + 0xc);
LAB_18050ed44:
              uVar24 = *(uint *)(plVar15 + 1);
            }
            else {
              if (*(int *)*plVar15 < 0) {
                plVar23 = plVar15 + 2;
                goto LAB_18050ed44;
              }
              (**(code **)(*plVar15 + 0x30))(plVar15,&plStack_80);
              plVar23 = plStack_80;
              uVar24 = (uint)local_78;
            }
            uVar17 = uVar21;
            if (uVar24 < uVar21) goto LAB_18050eec6;
          }
          local_88 = CONCAT44(local_88._4_4_,uVar17);
          local_90 = plVar23;
          FUN_180509f90(&local_58,&local_90);
          iVar9 = func_0x0001803ac300(&lStack_70);
        }
        puVar19 = auStack_2b8;
        if (*(int *)(lVar5 + 0x10) == 0) goto LAB_18050eed2;
        puVar19 = auStack_2b8;
        if (*(int *)(*(longlong *)(lVar5 + 8) + 8) == 0) goto LAB_18050eedf;
        if ((uint)uStack_40 < (uint)uStack_50) {
LAB_18050eec6:
          func_0x000180302930();
          return;
        }
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        local_88 = CONCAT44(local_88._4_4_,(uint)uStack_50);
        local_90 = local_48;
        iVar9 = FUN_18050dd40(*(short *)(*(longlong *)(lVar5 + 8) + 0x12) + 1,&local_90);
        if (iVar9 == 0) {
          *(undefined1 *)(param_1 + 0x24) = 1;
          func_0x00018060c410(lVar5,1);
          puVar19 = auStack_2b8;
          if (*(int *)(lVar5 + 0x10) == 0) goto LAB_18050eed2;
          lVar6 = *(longlong *)(lVar5 + 8);
          puVar19 = auStack_2b8;
          if (*(int *)(lVar6 + 8) == 0) goto LAB_18050eedf;
          sVar16 = *(short *)(lVar6 + 0x12) + 1;
          *(short *)(lVar6 + 0x10) = sVar16;
          *(short *)(lVar6 + 0x12) = sVar16;
        }
        else {
          func_0x00018060c410(lVar5,1);
          puVar19 = auStack_2b8;
          if (*(int *)(lVar5 + 0x10) == 0) {
LAB_18050eed2:
            *(undefined8 *)(puVar19 + -8) = 0x18050eed7;
            func_0x0001803029f0();
            return;
          }
          lVar6 = *(longlong *)(lVar5 + 8);
          puVar19 = auStack_2b8;
          if (*(int *)(lVar6 + 8) == 0) goto LAB_18050eedf;
          *(undefined2 *)(lVar6 + 0x10) = 0;
          *(undefined2 *)(lVar6 + 0x12) = 0xffff;
        }
        *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
        func_0x000180340dc0(*(undefined8 *)(param_1 + 0x10),0);
        lVar5 = local_58;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = (longlong *)0x0;
        uStack_40 = 0;
        puVar19 = auStack_2b8;
        if (lVar5 != 0) {
          if (_DAT_180807be8 != 0) {
            func_0x0001800041dc();
          }
          func_0x000180596700(*(undefined8 *)(_DAT_180fe2470 + 8),lVar5,0);
          puVar19 = auStack_2b8;
        }
      }
    }
  }
LAB_18050eea1:
  if (local_98 != _DAT_180fe7000) {
    *(undefined8 *)(puVar19 + -8) = 0x18050eeb6;
    func_0x00018000cd70();
  }
  return;
}


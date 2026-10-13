/* 1801bb980  FUN_1801bb980  body=1230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801bb980(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong unaff_R12;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  char local_res10;
  int iStackX_14;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  int iStack_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  
  local_90 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  iStack_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  lVar10 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = func_0x00018000c510(0x180901ab0);
  func_0x0001805aeca0(uVar6,0x3c,0);
  uVar13 = 0;
  do {
    piVar14 = (int *)((ulonglong)uVar13 + lVar10);
    if (uVar1 - uVar13 < 0x100) {
LAB_1801bbe40:
      uVar6 = func_0x000180302e10(0x28);
      return uVar6;
    }
    uVar3 = *(ulonglong *)(piVar14 + 0x14);
    iVar4 = (int)uVar3;
    if (uVar3 == (longlong)iVar4) {
      unaff_R12 = uVar3 & 0xffffffff;
      local_res10 = (char)param_2;
      if ((local_res10 == '\0') ||
         (iStackX_14 = (int)((ulonglong)param_2 >> 0x20), iStackX_14 == iVar4)) {
        if (*(longlong *)(piVar14 + 0x10) == 0) {
          if (iVar4 == 4) {
            local_98 = 0x1807a1568;
          }
          else {
            if (iVar4 != 0) {
              if (_DAT_180806380 != 0) goto LAB_1801bbe26;
              goto LAB_1801bba6e;
            }
            local_98 = 0x180782e20;
          }
          goto LAB_1801bbb03;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)(*(ushort *)(piVar14 + 0xe) >> 1));
        lStack_80 = *(longlong *)(piVar14 + 0x10);
        FUN_1801bbe60(&local_68,&lStack_80);
        local_98 = 0;
        uVar11 = unaff_R12;
        goto LAB_1801bbb59;
      }
    }
    else {
      func_0x00018039cff0();
LAB_1801bbe26:
      func_0x000180002dbc();
LAB_1801bba6e:
      uVar12 = (uint)unaff_R12;
      if ((int)uVar12 < 0) {
        if (*(longlong *)(_DAT_180fe04e8 + 0x18) == 0) {
          lVar7 = func_0x000180327160();
        }
        else {
          lVar7 = func_0x0001803272a0();
        }
        local_98 = func_0x0001802fca80(unaff_R12 & 0xffffffff,0xffffffff,
                                       *(undefined8 *)(lVar7 + 0x28));
      }
      else if (uVar12 < 300) {
        if (_DAT_1808062e8 != 0) {
          func_0x000180002cdc();
        }
        if (*(uint *)(*(longlong *)(_DAT_180fe0490 + 8) + 8) <= uVar12) {
          uVar6 = func_0x00018039d020();
          return uVar6;
        }
        local_98 = *(longlong *)
                    (*(longlong *)(_DAT_180fe0490 + 8) + 0x10 + (unaff_R12 & 0xffffffff) * 8);
        if (local_98 == 0) {
          local_98 = func_0x0001802ff2b0();
        }
      }
      else {
        local_98 = func_0x0001802fce20();
      }
LAB_1801bbb03:
      uVar11 = unaff_R12;
      if (local_98 == 0) {
        local_68 = 0;
        uStack_60 = 0;
      }
      else {
        local_68 = local_98 + 0xc;
        uStack_60 = *(undefined4 *)(local_98 + 8);
      }
LAB_1801bbb59:
      lStack_50 = local_68;
      local_48 = CONCAT44(uStack_5c,uStack_60);
      if ((param_3 != 0) && (*(int *)(param_3 + 8) != 0)) {
        local_90 = param_3 + 0xc;
        local_78 = CONCAT44(local_78._4_4_,uStack_60);
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_3 + 8));
        lStack_80 = lStack_50;
        iVar4 = func_0x0001802fab70(&lStack_80,&local_90,5);
        unaff_R12 = uVar11;
        if (iVar4 == 0) goto LAB_1801bbdbb;
      }
      if (local_98 == 0) {
        local_98 = func_0x0001805962e0(&lStack_50);
      }
      unaff_R12 = func_0x00018000c510(0x180839700);
      iStack_6c = piVar14[1];
      *(undefined8 *)(unaff_R12 + 0x10) = 0x180759410;
      uVar8 = func_0x00018000c510(0x1808ba170);
      func_0x000180644f80(uVar8,iStack_6c);
      func_0x00018000c720(unaff_R12 + 8,uVar8);
      func_0x00018000c720(unaff_R12 + 0x10,local_98);
      *(int *)(unaff_R12 + 100) = (int)uVar11;
      *(int *)(unaff_R12 + 0x68) = piVar14[0x19];
      *(undefined8 *)(unaff_R12 + 0x18) = *(undefined8 *)(piVar14 + 0x28);
      *(undefined8 *)(unaff_R12 + 0x20) = *(undefined8 *)(piVar14 + 0x2c);
      *(undefined8 *)(unaff_R12 + 0x28) = *(undefined8 *)(piVar14 + 0x1e);
      *(undefined8 *)(unaff_R12 + 0x30) = *(undefined8 *)(piVar14 + 0x1c);
      *(undefined8 *)(unaff_R12 + 0x38) = *(undefined8 *)(piVar14 + 0x22);
      *(undefined8 *)(unaff_R12 + 0x40) = *(undefined8 *)(piVar14 + 0x24);
      *(undefined8 *)(unaff_R12 + 0x48) = *(undefined8 *)(piVar14 + 0x30);
      *(undefined8 *)(unaff_R12 + 0x50) = *(undefined8 *)(piVar14 + 0x2e);
      *(undefined8 *)(unaff_R12 + 0x58) = *(undefined8 *)(piVar14 + 0x32);
      *(int *)(unaff_R12 + 0x60) = piVar14[0x12];
      *(int *)(unaff_R12 + 0x6c) = piVar14[0x18];
      func_0x0001805af0c0(uVar6,uVar3 & 0xffffffff,unaff_R12,1);
      uVar12 = uVar13 + 0x100;
      local_58 = local_58 & 0xffffffff;
      if (piVar14[1] != 0) {
        do {
          if (uVar1 < uVar12) goto LAB_1801bbe3a;
          lVar7 = (ulonglong)uVar12 + lVar10;
          if (uVar1 - uVar12 < 0x50) goto LAB_1801bbe40;
          lVar9 = func_0x00018000c510(0x1808398d0);
          *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar7 + 0x28);
          *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar7 + 0x30);
          *(undefined4 *)(lVar9 + 0x1c) = *(undefined4 *)(lVar7 + 0x3c);
          *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar7 + 0x38);
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar7 + 0x20);
          *(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(lVar7 + 0x44);
          uVar5 = FUN_1801bab80(*(undefined4 *)(lVar7 + 0x48));
          *(undefined4 *)(lVar9 + 0x28) = uVar5;
          lVar7 = *(longlong *)(unaff_R12 + 8);
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          uVar2 = *(uint *)(lVar7 + 0x10);
          if (uVar2 < *(uint *)(*(longlong *)(lVar7 + 8) + 8)) {
            *(uint *)(lVar7 + 0x10) = uVar2 + 1;
            func_0x00018000c720(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)uVar2 * 8);
          }
          else {
            func_0x000180645350();
          }
          uVar12 = uVar12 + 0x50;
          iVar4 = local_58._4_4_ + 1;
          local_58 = CONCAT44(iVar4,(undefined4)local_58);
        } while ((longlong)iVar4 < (longlong)(ulonglong)(uint)piVar14[1]);
      }
    }
LAB_1801bbdbb:
    if (*piVar14 == 0) {
      lVar10 = func_0x0001805aed00(uVar6);
      uVar8 = func_0x00018000c630(0x1809b64e8,
                                  (longlong)
                                  (*(int *)(*(longlong *)(lVar10 + 8) + 0x38) -
                                  *(int *)(*(longlong *)(lVar10 + 8) + 0x40)));
      uVar6 = func_0x0001805aed00(uVar6);
      func_0x0001805b01e0(uVar6,uVar8,0);
      return uVar8;
    }
    uVar13 = uVar13 + *piVar14;
    if (uVar1 < uVar13) {
LAB_1801bbe3a:
      uVar6 = func_0x000180302930();
      return uVar6;
    }
  } while( true );
}


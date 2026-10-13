/* 1801ba2c0  FUN_1801ba2c0  body=1960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801ba2c0(undefined8 param_1,int param_2,int param_3,longlong *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong *local_b8;
  uint local_b0;
  longlong local_a8;
  int local_a0;
  uint local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 local_70;
  ulonglong *local_68;
  uint local_60;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  lVar4 = -0x60;
  do {
    *(undefined8 *)((longlong)&local_58 + lVar4) = 0;
    *(undefined8 *)((longlong)&local_50 + lVar4) = 0;
    *(undefined8 *)((longlong)&local_48 + lVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0);
  lVar4 = *param_4;
  uVar13 = *(uint *)(param_4 + 1);
  uVar5 = func_0x00018000c510(0x180901ab0);
  func_0x0001805aeca0(uVar5,0);
  lVar6 = func_0x00018000c510(0x1808ba170);
  func_0x00018000c720(lVar6 + 8,*(undefined8 *)(_DAT_180fe15c0 + 8));
  if (0x57 < uVar13) {
    uVar14 = *(uint *)(lVar4 + 0x18);
    local_48 = 0;
    if (0 < *(int *)(lVar4 + 0x1c)) {
      do {
        if (uVar13 < uVar14) {
LAB_1801baa59:
          uVar5 = func_0x000180302930();
          return uVar5;
        }
        piVar15 = (int *)((ulonglong)uVar14 + lVar4);
        local_44 = uVar14;
        if (uVar13 - uVar14 < 0x40) goto LAB_1801baa5f;
        lVar7 = func_0x00018000c630(0x1809b6388,(longlong)piVar15[8]);
        uVar14 = local_44 + piVar15[2];
        local_54 = 0;
        if (0 < piVar15[8]) {
          do {
            if (uVar13 < uVar14) goto LAB_1801baa59;
            piVar16 = (int *)((ulonglong)uVar14 + lVar4);
            local_4c = uVar14;
            if (uVar13 - uVar14 < 0x28) goto LAB_1801baa5f;
            local_94 = piVar16[1];
            uVar8 = FUN_1801b9620(param_1);
            puVar9 = (undefined8 *)func_0x0001805aef00(uVar8,local_94);
            if (puVar9 == (undefined8 *)0x0) {
              uVar8 = 0x180759410;
            }
            else {
              uVar8 = *puVar9;
            }
            local_90 = *(undefined8 *)piVar16;
            uStack_88 = *(undefined8 *)(piVar16 + 2);
            local_80 = piVar16[4];
            iStack_7c = piVar16[5];
            iStack_78 = piVar16[6];
            iStack_74 = piVar16[7];
            local_70 = *(undefined8 *)(piVar16 + 8);
            if (*(uint *)(lVar7 + 8) <= local_54) goto LAB_1801baa6a;
            puVar9 = (undefined8 *)(lVar7 + 0x10 + (ulonglong)local_54 * 0x28);
            *puVar9 = local_90;
            puVar9[1] = uStack_88;
            *(int *)(puVar9 + 2) = local_80;
            *(int *)((longlong)puVar9 + 0x14) = iStack_7c;
            *(int *)(puVar9 + 3) = iStack_78;
            *(int *)((longlong)puVar9 + 0x1c) = iStack_74;
            puVar9[4] = local_70;
            if ((piVar15[3] == param_2) || (piVar15[3] == param_3)) {
              uVar2 = FUN_1801bad20(uVar8);
              *(undefined4 *)(puVar9 + 1) = uVar2;
            }
            uVar14 = local_4c + *piVar16;
            local_54 = local_54 + 1;
          } while ((int)local_54 < piVar15[8]);
        }
        uVar14 = local_44 + piVar15[1];
        local_58 = 0;
        if (0 < piVar15[10]) {
          do {
            if (uVar13 < uVar14) goto LAB_1801baa59;
            piVar16 = (int *)((ulonglong)uVar14 + lVar4);
            uVar12 = uVar13 - uVar14;
            if (uVar12 < 0x18) goto LAB_1801baa5f;
            local_98 = uVar12;
            if (piVar16[5] == 0) {
              local_68 = (ulonglong *)0x0;
              local_60 = 0;
            }
            else {
              if ((ulonglong)uVar12 < (ulonglong)(piVar16[5] - 2U) + (ulonglong)(uint)piVar16[4])
              goto LAB_1801baa59;
              local_68 = (ulonglong *)((ulonglong)(uint)piVar16[4] + (longlong)piVar16);
              local_60 = piVar16[5] - 2U >> 1;
            }
            local_50 = uVar14;
            if ((local_60 != 6) || ((int)local_68[1] != 0x6c0061 || *local_68 != 0x74006f0054005f))
            {
              if (piVar15[3] == param_2) {
                uVar14 = uVar14 + *piVar16;
                if (uVar13 < uVar14) goto LAB_1801baa59;
                local_a8 = (ulonglong)uVar14 + lVar4;
                local_a0 = uVar13 - uVar14;
                lVar10 = FUN_1801bac00(&local_a8,lVar7);
                if (((*(int *)(lVar10 + 100) != 0) ||
                    ((local_60 == 4 && ((*local_68 | 0x20002000200020) == 0x65006c00640069)))) &&
                   (iVar3 = func_0x0001805af0c0(uVar5,*(int *)(lVar10 + 100),lVar10), iVar3 != 0)) {
                  if (local_60 == 0xf) {
                    if (*(short *)((longlong)local_68 + 0x1c) == _DAT_180760744) {
                      local_60 = 0xe;
                    }
                    else {
                      local_b8 = local_68;
                      local_b0 = local_60;
                      local_c8 = 0x1807608bc;
                      uStack_c0 = 2;
                      iVar3 = func_0x0001802fafe0(&local_b8,&local_c8,4);
                      if (iVar3 == 0) {
                        local_b8 = local_68;
                        local_b0 = local_60;
                        local_c8 = 0x1807608dc;
                        uStack_c0 = 3;
                        iVar3 = func_0x0001802fafe0(&local_b8,&local_c8,4);
                        if (iVar3 != 0) {
                          if (local_60 < 0xc) goto LAB_1801baa59;
                          local_60 = 0xc;
                        }
                      }
                      else {
                        if (local_60 < 0xd) goto LAB_1801baa59;
                        local_60 = 0xd;
                      }
                    }
                  }
                  uVar8 = func_0x0001805962e0(&local_68);
                  func_0x00018000c720(lVar10 + 0x10,uVar8);
                }
              }
              else if (piVar15[3] == param_3) {
                uVar14 = uVar14 + *piVar16;
                if (uVar13 < uVar14) goto LAB_1801baa59;
                local_a8 = (ulonglong)uVar14 + lVar4;
                local_a0 = uVar13 - uVar14;
                lVar10 = FUN_1801baa80(&local_a8,lVar7);
                if (*(longlong *)(lVar10 + 8) != 0) {
                  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
                  uVar14 = *(uint *)(lVar6 + 0x10);
                  if (uVar14 < *(uint *)(*(longlong *)(lVar6 + 8) + 8)) {
                    *(uint *)(lVar6 + 0x10) = uVar14 + 1;
                    func_0x00018000c720(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)uVar14 * 8,
                                        lVar10);
                  }
                  else {
                    func_0x000180645350(lVar6,lVar10);
                  }
                }
              }
            }
            uVar14 = local_50 + *piVar16;
            if (uVar13 < uVar14) goto LAB_1801baa59;
            if (uVar13 - uVar14 < 4) goto LAB_1801baa5f;
            uVar14 = uVar14 + *(int *)((ulonglong)uVar14 + lVar4);
            local_58 = local_58 + 1;
          } while (local_58 < piVar15[10]);
        }
        uVar14 = local_44 + *piVar15;
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(lVar4 + 0x1c));
    }
    uVar13 = 0;
    if (0 < *(int *)(lVar6 + 0x10)) {
      do {
        if (*(uint *)(lVar6 + 0x10) <= uVar13) {
          func_0x0001803029f0();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        if (*(uint *)(*(longlong *)(lVar6 + 8) + 8) <= uVar13) {
LAB_1801baa6a:
          uVar5 = func_0x00018039d020();
          return uVar5;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)uVar13 * 8);
        plVar11 = (longlong *)func_0x0001805aef00(uVar5,*(undefined4 *)(lVar4 + 0x18));
        if (plVar11 != (longlong *)0x0) {
          lVar7 = *(longlong *)(*plVar11 + 8);
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          uVar14 = *(uint *)(lVar7 + 0x10);
          if (uVar14 < *(uint *)(*(longlong *)(lVar7 + 8) + 8)) {
            *(uint *)(lVar7 + 0x10) = uVar14 + 1;
            func_0x00018000c720(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)uVar14 * 8,lVar4);
          }
          else {
            func_0x000180645350(lVar7,lVar4);
          }
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < *(int *)(lVar6 + 0x10));
    }
    lVar4 = func_0x0001805aed00(uVar5);
    uVar8 = func_0x00018000c630(0x1809b64e8,
                                (longlong)
                                (*(int *)(*(longlong *)(lVar4 + 8) + 0x38) -
                                *(int *)(*(longlong *)(lVar4 + 8) + 0x40)));
    uVar5 = func_0x0001805aed00(uVar5);
    func_0x0001805b01e0(uVar5,uVar8,0);
    return uVar8;
  }
LAB_1801baa5f:
  uVar5 = func_0x000180302e10(0x28);
  return uVar5;
}


/* query=18054604e containing=180545f40 name=FUN_180545f40 body=1493 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180545f40(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  uint7 uStack_48;
  undefined1 uStack_41;
  
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  _uStack_48 = 0;
  lVar7 = 0;
  uVar9 = 0;
  iVar10 = (int)param_1[3];
  lVar6 = *param_1;
  if (iVar10 == 0) goto LAB_1805460a9;
  if (iVar10 == 1) {
    lStack_50 = param_1[7];
    _uStack_48 = param_1[8];
    param_1[7] = 0;
    param_1[8] = 0;
    iVar10 = -1;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    goto LAB_1805463cb;
  }
  if (*(int *)((longlong)param_1 + 0x1c) < 1) {
    lVar6 = *(longlong *)(_DAT_180fe2458 + 8);
  }
  else {
    FUN_18000c630(0x1809b90e0,(longlong)*(int *)((longlong)param_1 + 0x1c));
    func_0x00018000c790();
    *(undefined4 *)(param_1 + 4) = 0;
    if ((int)param_1[4] < *(int *)((longlong)param_1 + 0x1c)) {
      do {
        uVar9 = *(int *)((longlong)param_1 + 0x1c) - (int)param_1[4];
        if (0x8000 < (int)uVar9) {
          uVar9 = 0x8000;
        }
        plVar8 = *(longlong **)(lVar6 + 0x18);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = *(longlong **)(lVar6 + 0x10);
        }
        iVar1 = (**(code **)(*plVar8 + 0x68))();
        if (iVar1 == -1) {
          plVar8 = *(longlong **)(lVar6 + 0x18);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = *(longlong **)(lVar6 + 0x10);
          }
          lVar7 = param_1[1];
          uVar2 = *(uint *)(param_1 + 4);
          if (lVar7 == 0) {
            if (uVar2 != 0 || uVar9 != 0) {
LAB_180546290:
                    /* WARNING: Subroutine does not return */
              FUN_180302930();
            }
            lVar7 = 0;
            uVar2 = 0;
            uVar9 = 0;
          }
          else if ((ulonglong)*(uint *)(lVar7 + 8) < (ulonglong)uVar2 + (ulonglong)uVar9)
          goto LAB_180546290;
          uStack_68 = CONCAT44(uVar9,uVar2);
          lStack_70 = lVar7;
          (**(code **)(*plVar8 + 0xd0))(plVar8,&lStack_60,&lStack_70,param_1[6]);
          lVar5 = _uStack_48;
          lVar7 = lStack_60;
          lStack_50 = lStack_60;
          uStack_48._0_6_ = (uint6)uStack_58;
          uStack_41 = SUB81(lVar5,7);
          uStack_48 = (uint7)(uint6)uStack_48;
          if (lStack_60 != 0) {
            lVar5 = FUN_180370420(0x180900730);
            if (lVar5 == 0) {
              uVar9 = (*pcRam0000000180819e40)(lVar7);
            }
            else {
              uVar9 = *(uint *)(lVar5 + 0x34) & 0x1600000;
            }
            if (uVar9 == 0) {
              *(undefined4 *)(param_1 + 3) = 1;
              func_0x00018000c910();
              param_1[7] = lStack_50;
              uVar3 = FUN_180700aa0(0x1807fe238,param_1,param_1 + 5);
              FUN_18070d820(0x180801888,&lStack_50,uVar3);
              return;
            }
          }
LAB_1805463cb:
          lVar7 = lStack_50;
          if (lStack_50 == 0) {
            iVar1 = (int)uStack_48;
          }
          else {
            lVar5 = FUN_180370420(0x180900730);
            if (lVar5 == 0) {
              iVar1 = (*pcRam0000000180821710)(lVar7);
            }
            else {
              if ((*(uint *)(lVar5 + 0x34) & 0x11000000) != 0x1000000) {
                FUN_180373b40(lVar5);
              }
              iVar1 = *(int *)(lVar5 + 0x38);
            }
          }
        }
        else {
          plVar8 = *(longlong **)(lVar6 + 0x18);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = *(longlong **)(lVar6 + 0x10);
          }
          uVar3 = func_0x00018000c510(0x18085df18);
          iVar1 = (**(code **)(*plVar8 + 0x68))(plVar8);
          if (iVar1 < -1) {
                    /* WARNING: Subroutine does not return */
            FUN_180302e10(0x3b);
          }
          if (NAN((double)iVar1)) {
                    /* WARNING: Subroutine does not return */
            FUN_180302c40();
          }
          uVar4 = FUN_1803046c0(SUB84((double)iVar1 * _DAT_180cb2e28,0));
          if (lRam0000000180806340 != 0) {
            func_0x000180002d3c();
          }
          FUN_180332010(uVar3,uVar4,*(undefined8 *)(_DAT_180fe04c0 + 8));
          func_0x00018000c790(param_1 + 2,uVar3);
          if (*(char *)(param_1[2] + 0x24) != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180303190(0x46);
          }
          lVar7 = FUN_180332ba0();
LAB_1805460a9:
          if (iVar10 == 0) {
            lStack_50 = param_1[7];
            _uStack_48 = param_1[8];
            param_1[7] = 0;
            param_1[8] = 0;
            iVar10 = -1;
            *(undefined4 *)(param_1 + 3) = 0xffffffff;
          }
          else {
            plVar8 = *(longlong **)(lVar6 + 0x18);
            if (plVar8 == (longlong *)0x0) {
              plVar8 = *(longlong **)(lVar6 + 0x10);
            }
            lVar5 = param_1[1];
            uVar2 = *(uint *)(param_1 + 4);
            if (lVar5 == 0) {
              if (uVar2 != 0 || uVar9 != 0) {
LAB_180546175:
                    /* WARNING: Subroutine does not return */
                FUN_180302930();
              }
              lVar5 = 0;
              uVar2 = 0;
              uVar9 = 0;
            }
            else if ((ulonglong)*(uint *)(lVar5 + 8) < (ulonglong)uVar2 + (ulonglong)uVar9)
            goto LAB_180546175;
            if (*(char *)(lVar7 + 0x24) != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_180303190(0x46);
            }
            uStack_68 = CONCAT44(uVar9,uVar2);
            lStack_70 = lVar5;
            (**(code **)(*plVar8 + 0xd0))(plVar8,&lStack_60,&lStack_70);
            lVar7 = _uStack_48;
            lStack_50 = lStack_60;
            uStack_48._0_6_ = (uint6)uStack_58;
            uStack_41 = SUB81(lVar7,7);
            uStack_48 = (uint7)(uint6)uStack_48;
            if (lStack_60 != 0) {
              lVar7 = FUN_180370420();
              if (lVar7 == 0) {
                uVar9 = (*pcRam0000000180819e40)();
              }
              else {
                uVar9 = *(uint *)(lVar7 + 0x34) & 0x1600000;
              }
              if (uVar9 == 0) {
                *(undefined4 *)(param_1 + 3) = 0;
                func_0x00018000c910();
                param_1[7] = lStack_50;
                uVar3 = FUN_180700aa0(0x1807fe238,param_1,param_1 + 5);
                FUN_18070d820(0x180801888,&lStack_50,uVar3);
                return;
              }
            }
          }
          if (lStack_50 == 0) {
            iVar1 = (int)uStack_48;
          }
          else {
            lVar7 = FUN_180370420(0x180900730);
            if (lVar7 == 0) {
              iVar1 = (*pcRam0000000180821710)();
            }
            else {
              if ((*(uint *)(lVar7 + 0x34) & 0x11000000) != 0x1000000) {
                FUN_180373b40();
              }
              iVar1 = *(int *)(lVar7 + 0x38);
            }
          }
          if (iVar1 == 0) break;
          param_1[2] = 0;
        }
        *(int *)(param_1 + 4) = (int)param_1[4] + iVar1;
      } while ((int)param_1[4] < *(int *)((longlong)param_1 + 0x1c));
    }
    lVar6 = param_1[1];
    if ((int)param_1[4] < *(int *)(lVar6 + 8)) {
      lVar6 = func_0x00018000c510(0x1808f86d8);
      func_0x00018000c720(lVar6 + 8,*(undefined8 *)(_DAT_180fe2440 + 8));
      uVar3 = FUN_1806a6bf0(param_1[1],(int)param_1[4]);
      FUN_180591b40(lVar6,uVar3);
      lVar6 = FUN_180592200();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  param_1[1] = 0;
  param_1 = param_1 + 5;
  if (*param_1 == 0) {
    if (lVar6 == 0) {
      if (lRam0000000180809df8 != 0) {
        func_0x00018000471c();
      }
      lVar7 = *(longlong *)(_DAT_180fe5ae8 + 8);
    }
    else {
      lVar7 = func_0x00018000c510(0x1809ace88);
      *(undefined4 *)(lVar7 + 0x34) = 0x1000000;
      func_0x00018000c720(lVar7 + 0x38,lVar6);
    }
    func_0x00018000c790(param_1,lVar7);
  }
  else {
    FUN_180646380(0x1809ad510,*param_1,lVar6);
  }
  return;
}


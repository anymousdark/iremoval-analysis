/* query=18054983e containing=180549700 name=FUN_180549700 body=1774 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180549700(undefined8 *param_1)

{
  undefined4 uVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined1 auStack_60 [8];
  ulonglong uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar4 = 0xffffffffffffffa0;
  do {
    *(undefined8 *)((longlong)&uStack_48 + uVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc0 + uVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc8 + uVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd0 + uVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd8 + uVar4) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe0 + uVar4) = 0;
    uVar4 = uVar4 + 0x30;
  } while (uVar4 != 0);
  uVar6 = param_1[1];
  if (*(int *)(param_1 + 2) == 0) {
    lStack_50 = param_1[5];
    uStack_48 = param_1[6];
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
  }
  else {
    uStack_48 = uVar4;
    uVar5 = func_0x00018000c510(0x18089a400);
    FUN_180537850(uVar5,*param_1);
    lStack_50 = FUN_180536f10(uVar6,10,uVar5,param_1[4]);
    uStack_48 = uStack_48 & 0xffffffff00000000;
    if ((*(uint *)(lStack_50 + 0x34) & 0x1600000) == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      func_0x00018000c790(param_1 + 5,lStack_50);
      *(undefined4 *)(param_1 + 6) = (undefined4)uStack_48;
      uVar6 = FUN_180703120(0x1807fe2f8,param_1,param_1 + 3);
      FUN_18071d0a0(0x180804518,&lStack_50,uVar6);
      return;
    }
  }
  if ((*(uint *)(lStack_50 + 0x34) & 0x11000000) != 0x1000000) {
    FUN_180373b40(lStack_50,0);
  }
  uVar6 = FUN_180536dc0(*(undefined8 *)(lStack_50 + 0x38));
  dVar2 = (double)FUN_1802d21c0((int)_DAT_180cb2e78,_DAT_180cb2e80);
  plVar7 = (longlong *)FUN_18067b280(uVar6,0x1807d1fc8);
  if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180724f60(0x1807f91a8,0x1807d1fc8);
  }
  lVar9 = *plVar7;
  if (lVar9 != 0) {
    uVar1 = *(undefined4 *)(lVar9 + 8);
    lStack_a8 = lVar9 + 0xc;
    uStack_a0 = uVar1;
    uVar5 = FUN_180327160();
    iVar3 = FUN_1806bebc0(&lStack_a8,7,uVar5,&lStack_68);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        lStack_a8 = lVar9 + 0xc;
        uStack_a0 = uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_1806baa90(&lStack_a8);
      }
LAB_180549d34:
                    /* WARNING: Subroutine does not return */
      FUN_1806cdc50();
    }
    plVar7 = (longlong *)FUN_18067b280(uVar6,0x1807d1f48);
    if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180724f60(0x1807f91a8,0x1807d1f48);
    }
    lVar9 = *plVar7;
    if (lVar9 != 0) {
      uVar1 = *(undefined4 *)(lVar9 + 8);
      lStack_a8 = lVar9 + 0xc;
      uStack_a0 = uVar1;
      uVar5 = FUN_180327160();
      iVar3 = FUN_1806bebc0(&lStack_a8,7,uVar5,&lStack_70);
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          lStack_a8 = lVar9 + 0xc;
          uStack_a0 = uVar1;
                    /* WARNING: Subroutine does not return */
          FUN_1806baa90(&lStack_a8);
        }
        goto LAB_180549d34;
      }
      FUN_1802e7960(auStack_60,lStack_68 / (longlong)dVar2);
      uStack_78 = uStack_58 & 0x3fffffffffffffff | 0x4000000000000000;
      uVar5 = FUN_1802e6340(&uStack_78);
      FUN_1802e7960(auStack_60,lStack_70 / (longlong)dVar2);
      uStack_80 = uStack_58 & 0x3fffffffffffffff | 0x4000000000000000;
      uVar8 = FUN_1802e6340(&uStack_80);
      lVar9 = func_0x00018000c510(0x180898be0);
      uVar10 = func_0x00018000c510(0x1808ec788);
      FUN_18067a9c0(uVar10,0,0);
      func_0x00018000c720(lVar9 + 8,uVar10);
      puVar11 = (undefined8 *)FUN_18067b280(uVar6,0x1807d1fa0);
      if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180724f60(0x1807f91a8,0x1807d1fa0);
      }
      uVar10 = *puVar11;
      lVar12 = func_0x00018000c510(0x1808990c0);
      *(undefined8 *)(lVar12 + 0x10) = 0x180759410;
      FUN_1805305a0(lVar12,uVar10);
      (*pcRam0000000180823590)(*(undefined8 *)(lVar9 + 8),0x1807d1fa0,lVar12);
      plVar7 = (longlong *)FUN_18067b280(uVar6,0x1807d2018);
      if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180724f60(0x1807f91a8,0x1807d2018);
      }
      lVar12 = *plVar7;
      if (lVar12 != 0) {
        uVar1 = *(undefined4 *)(lVar12 + 8);
        lStack_a8 = lVar12 + 0xc;
        uStack_a0 = uVar1;
        uVar10 = FUN_180327160();
        iVar3 = FUN_1806c0260(&lStack_a8,7,uVar10,&uStack_88);
        if (iVar3 == 0) {
          lVar12 = func_0x00018000c510(0x180898cf8);
          *(undefined8 *)(lVar12 + 0x10) = uStack_88;
          *(undefined1 *)(lVar12 + 0x18) = 1;
          (*pcRam0000000180823590)(*(undefined8 *)(lVar9 + 8),0x1807d2018,lVar12);
          plVar7 = (longlong *)FUN_18067b280(uVar6,0x1807d1f78);
          if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_180724f60(0x1807f91a8,0x1807d1f78);
          }
          lVar12 = *plVar7;
          if (lVar12 == 0) goto LAB_180549c79;
          uVar1 = *(undefined4 *)(lVar12 + 8);
          lStack_a8 = lVar12 + 0xc;
          uStack_a0 = uVar1;
          uVar10 = FUN_180327160();
          iVar3 = FUN_1806c0260(&lStack_a8,7,uVar10,&uStack_90);
          if (iVar3 == 0) {
            lVar12 = func_0x00018000c510(0x180898cf8);
            *(undefined8 *)(lVar12 + 0x10) = uStack_90;
            *(undefined1 *)(lVar12 + 0x18) = 1;
            (*pcRam0000000180823590)(*(undefined8 *)(lVar9 + 8),0x1807d1f78,lVar12);
            plVar7 = (longlong *)FUN_18067b280(uVar6,0x1807d1ff0);
            if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_180724f60(0x1807f91a8,0x1807d1ff0);
            }
            lVar12 = *plVar7;
            if (lVar12 == 0) goto LAB_180549c79;
            uVar1 = *(undefined4 *)(lVar12 + 8);
            lStack_a8 = lVar12 + 0xc;
            uStack_a0 = uVar1;
            uVar6 = FUN_180327160();
            iVar3 = FUN_1806c0260(&lStack_a8,7,uVar6,&uStack_98);
            if (iVar3 == 0) {
              lVar12 = func_0x00018000c510(0x180898cf8);
              *(undefined8 *)(lVar12 + 0x10) = uStack_98;
              *(undefined1 *)(lVar12 + 0x18) = 1;
              (*pcRam0000000180823590)(*(undefined8 *)(lVar9 + 8),0x1807d1ff0,lVar12);
              plVar7 = (longlong *)func_0x00018000c510(0x180898b28);
              (**(code **)(*plVar7 + 0x78))(plVar7,uVar5);
              (*pcRam0000000180823590)(*(undefined8 *)(lVar9 + 8),0x1807d1fc8,plVar7);
              plVar7 = (longlong *)func_0x00018000c510(0x180898b28);
              (**(code **)(*plVar7 + 0x78))(plVar7,uVar8);
              (*pcRam0000000180823590)(*(undefined8 *)(lVar9 + 8),0x1807d1f48,plVar7);
              *(undefined4 *)(param_1 + 2) = 0xfffffffe;
              plVar7 = param_1 + 3;
              if (*plVar7 == 0) {
                lVar12 = func_0x00018000c510(0x180952d58);
                *(undefined4 *)(lVar12 + 0x34) = 0x1000000;
                func_0x00018000c720(lVar12 + 0x38,lVar9);
                func_0x00018000c790(plVar7,lVar12);
              }
              else {
                FUN_180646380(0x180952ef0,*plVar7,lVar9);
              }
              return;
            }
            if (iVar3 == 1) {
              lStack_a8 = lVar12 + 0xc;
              uStack_a0 = uVar1;
                    /* WARNING: Subroutine does not return */
              FUN_1806baa90(&lStack_a8);
            }
          }
          else if (iVar3 == 1) {
            lStack_a8 = lVar12 + 0xc;
            uStack_a0 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_1806baa90(&lStack_a8);
          }
        }
        else if (iVar3 == 1) {
          lStack_a8 = lVar12 + 0xc;
          uStack_a0 = uVar1;
                    /* WARNING: Subroutine does not return */
          FUN_1806baa90(&lStack_a8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1806d7450();
      }
    }
  }
LAB_180549c79:
                    /* WARNING: Subroutine does not return */
  FUN_180302d90(0x11);
}


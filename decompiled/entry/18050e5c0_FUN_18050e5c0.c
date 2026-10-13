/* 18050e5c0  FUN_18050e5c0  body=722 */

void FUN_18050e5c0(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined2 *puVar2;
  short sVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 uStack_40;
  
  local_70 = (longlong *)0x0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_18050e8a0(param_1);
  uVar11 = *(uint *)(param_2 + 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
  }
  if (*(int *)(param_2 + 0x18) + -3 < (int)uVar11) {
    FUN_18050a050(param_2,3);
  }
  *(uint *)(param_2 + 8) = uVar11 + 3;
  if ((ulonglong)uVar11 + 3 <= (ulonglong)*(uint *)(param_2 + 0x18)) {
    puVar1 = (ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar11 * 2);
    *puVar1 = (ushort)(*(char *)(param_1 + 0x24) != '\0');
    puVar1[1] = 0;
    puVar1[2] = (ushort)iVar6;
    lVar4 = *(longlong *)(param_1 + 8);
    if ((lVar4 != 0) && (uVar13 = 0, 0 < *(int *)(lVar4 + 0x10))) {
      do {
        if (*(uint *)(lVar4 + 0x10) <= uVar13) {
          func_0x0001803029f0();
          return;
        }
        if (*(uint *)(*(longlong *)(lVar4 + 8) + 8) <= uVar13) goto LAB_18050e88f;
        puVar2 = (undefined2 *)(*(longlong *)(lVar4 + 8) + 0x10 + (ulonglong)uVar13 * 4);
        sVar3 = puVar2[1];
        uVar12 = *(uint *)(param_2 + 8);
        if (uVar12 < *(uint *)(param_2 + 0x18)) {
          *(undefined2 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar12 * 2) = *puVar2;
          *(uint *)(param_2 + 8) = uVar12 + 1;
        }
        else {
          FUN_18050a000(param_2);
        }
        if (sVar3 != -1) {
          uVar12 = *(uint *)(param_2 + 8);
          if (uVar12 < *(uint *)(param_2 + 0x18)) {
            *(short *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar12 * 2) = sVar3 + 1;
            *(uint *)(param_2 + 8) = uVar12 + 1;
          }
          else {
            FUN_18050a000(param_2);
          }
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < *(int *)(lVar4 + 0x10));
    }
    if (*(uint *)(param_2 + 0x18) <= uVar11 + 1) {
LAB_18050e88f:
      func_0x00018039d020();
      return;
    }
    *(short *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar11 + 1) * 2) =
         ((short)*(undefined4 *)(param_2 + 8) - (short)uVar11) + -3;
    if (iVar6 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      uVar7 = 0;
      iVar6 = 0;
      lVar8 = lVar4;
      do {
        iVar6 = iVar6 + 1;
        lVar8 = *(longlong *)(lVar8 + 0x10);
      } while (lVar8 != 0);
      if (8 < iVar6) {
        uVar7 = func_0x00018000c510(0x180873838);
        func_0x0001803bb680(uVar7,lVar4,iVar6);
      }
      local_48 = 0;
      lStack_50 = lVar4;
      uStack_40 = uVar7;
      iVar6 = func_0x0001803ac300(&lStack_50);
      while (iVar6 != 0) {
        if (local_48 == 0) {
          func_0x000180303350();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar9 = *(longlong **)(local_48 + 8);
        uVar11 = *(uint *)(local_48 + 0x18);
        if (plVar9 == (longlong *)0x0) {
          if (uVar11 != 0) goto LAB_18050e889;
          plVar9 = (longlong *)0x0;
          uVar11 = 0;
        }
        else if (*(uint *)(plVar9 + 1) < uVar11) goto LAB_18050e889;
        plVar10 = (longlong *)0x0;
        uVar13 = 0;
        if (plVar9 != (longlong *)0x0) {
          if (*plVar9 == 0x180858040) {
            plVar10 = (longlong *)((longlong)plVar9 + 0xc);
LAB_18050e7f3:
            uVar12 = *(uint *)(plVar9 + 1);
          }
          else {
            if (*(int *)*plVar9 < 0) {
              plVar10 = plVar9 + 2;
              goto LAB_18050e7f3;
            }
            (**(code **)(*plVar9 + 0x30))(plVar9,&plStack_60);
            plVar10 = plStack_60;
            uVar12 = (uint)local_58;
          }
          uVar13 = uVar11;
          if (uVar12 < uVar11) goto LAB_18050e889;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar13);
        local_70 = plVar10;
        FUN_180509f90(param_2,&local_70);
        iVar6 = func_0x0001803ac300(&lStack_50);
      }
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return;
    }
    FUN_18050e5c0(*(longlong *)(param_1 + 0x18),param_2);
    return;
  }
LAB_18050e889:
  func_0x000180302930();
  return;
}


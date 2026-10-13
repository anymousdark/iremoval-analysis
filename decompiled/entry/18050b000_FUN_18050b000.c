/* 18050b000  FUN_18050b000  body=297 */

void FUN_18050b000(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (*(int *)(lVar3 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x10);
    *(int *)(param_1 + 0x34) = param_3;
    *(int *)(param_1 + 0x58) = param_2 + param_3;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
    lVar4 = *(longlong *)(param_1 + 0x48);
    iVar2 = *(int *)(lVar4 + 8);
    if ((iVar2 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), 1 < *(uint *)(lVar5 + 8))) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar5 + 0x14);
      *(int *)(param_1 + 0x10) = param_3 + *(int *)(lVar5 + 0x10);
      if (param_4 == 2) {
        if (*(char *)(param_1 + 0x60) != '\0') {
          FUN_18050b140();
        }
        if ((param_3 != 0) && (uVar7 = 0, 0 < iVar2)) {
          if (*(int *)(lVar3 + 8) < iVar2) {
            do {
              lVar5 = *(longlong *)(lVar4 + 0x10 + (ulonglong)uVar7 * 8);
              if (lVar5 != 0) {
                if (*(uint *)(lVar3 + 8) <= uVar7) goto LAB_18050b124;
                iVar6 = *(int *)(lVar3 + 0x10 + (ulonglong)uVar7 * 4) * 2;
                uVar9 = 0;
                if (0 < iVar6) {
                  do {
                    if (*(uint *)(lVar5 + 8) <= (uint)uVar9) goto LAB_18050b124;
                    piVar1 = (int *)(lVar5 + 0x10 + uVar9 * 4);
                    *piVar1 = *piVar1 + param_3;
                    uVar8 = (uint)uVar9 + 2;
                    uVar9 = (ulonglong)uVar8;
                  } while ((int)uVar8 < iVar6);
                }
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar2);
          }
          else {
            do {
              lVar5 = *(longlong *)(lVar4 + 0x10 + (ulonglong)uVar7 * 8);
              if (lVar5 != 0) {
                iVar6 = *(int *)(lVar3 + 0x10 + (ulonglong)uVar7 * 4) * 2;
                uVar9 = 0;
                if (0 < iVar6) {
                  if (*(int *)(lVar5 + 8) < iVar6) {
                    do {
                      if (*(uint *)(lVar5 + 8) <= (uint)uVar9) goto LAB_18050b124;
                      piVar1 = (int *)(lVar5 + 0x10 + uVar9 * 4);
                      *piVar1 = *piVar1 + param_3;
                      uVar8 = (uint)uVar9 + 2;
                      uVar9 = (ulonglong)uVar8;
                    } while ((int)uVar8 < iVar6);
                  }
                  else {
                    do {
                      piVar1 = (int *)(lVar5 + 0x10 + uVar9 * 4);
                      *piVar1 = *piVar1 + param_3;
                      uVar8 = (int)uVar9 + 2;
                      uVar9 = (ulonglong)uVar8;
                    } while ((int)uVar8 < iVar6);
                  }
                }
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar2);
          }
        }
      }
      return;
    }
  }
LAB_18050b124:
  func_0x00018039d020();
  return;
}


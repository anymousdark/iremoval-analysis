/* 18050b140  FUN_18050b140  body=480 */

void FUN_18050b140(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar5 = *(longlong *)(param_1 + 0x48);
  uVar13 = 0;
  iVar1 = *(int *)(lVar4 + 8);
  if (0 < iVar1) {
    if ((lVar5 == 0) || (*(int *)(lVar5 + 8) < iVar1)) {
      do {
        iVar2 = *(int *)(lVar4 + 0x10 + uVar13 * 4) * 2;
        if (*(uint *)(lVar5 + 8) <= (uint)uVar13) {
LAB_18050b31b:
          func_0x00018039d020();
          return;
        }
        lVar6 = *(longlong *)(lVar5 + 0x10 + uVar13 * 8);
        uVar10 = 0;
        if (0 < iVar2) {
          do {
            if (*(uint *)(lVar6 + 8) <= (uint)uVar10) goto LAB_18050b31b;
          } while ((-1 < *(int *)(lVar6 + 0x10 + uVar10 * 4)) &&
                  (uVar12 = (uint)uVar10 + 1, uVar10 = (ulonglong)uVar12, (int)uVar12 < iVar2));
        }
        uVar12 = (uint)uVar10;
        uVar11 = uVar10;
        uVar7 = uVar12;
        while ((int)uVar7 < iVar2) {
          uVar7 = (uint)uVar10;
          if (*(uint *)(lVar6 + 8) <= uVar7) goto LAB_18050b31b;
          iVar3 = *(int *)(lVar6 + 0x10 + uVar10 * 4);
          uVar12 = (uint)uVar11;
          if (iVar3 < 0) {
            uVar12 = uVar12 - 1;
          }
          else {
            if (uVar7 != uVar12) {
              if (*(uint *)(lVar6 + 8) <= uVar12) goto LAB_18050b31b;
              *(int *)(lVar6 + 0x10 + uVar11 * 4) = iVar3;
            }
            uVar12 = uVar12 + 1;
          }
          uVar11 = (ulonglong)uVar12;
          uVar7 = uVar7 + 1;
          uVar10 = (ulonglong)uVar7;
        }
        *(int *)(lVar4 + 0x10 + uVar13 * 4) = (int)uVar12 / 2;
        uVar12 = (uint)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < iVar1);
    }
    else {
      do {
        uVar12 = *(int *)(lVar4 + 0x10 + uVar13 * 4) * 2;
        lVar6 = *(longlong *)(lVar5 + 0x10 + uVar13 * 8);
        uVar10 = 0;
        if (0 < (int)uVar12) {
          if ((lVar6 == 0) || (*(int *)(lVar6 + 8) < (int)uVar12)) {
            do {
              if (*(uint *)(lVar6 + 8) <= (uint)uVar10) goto LAB_18050b31b;
            } while ((-1 < *(int *)(lVar6 + 0x10 + uVar10 * 4)) &&
                    (uVar7 = (uint)uVar10 + 1, uVar10 = (ulonglong)uVar7, (int)uVar7 < (int)uVar12))
            ;
          }
          else {
            do {
              if (*(int *)(lVar6 + 0x10 + uVar10 * 4) < 0) break;
              uVar7 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar7;
            } while ((int)uVar7 < (int)uVar12);
          }
        }
        uVar7 = (uint)uVar10;
        if ((int)uVar7 < (int)uVar12) {
          uVar11 = uVar10;
          if (((lVar6 == 0) || ((int)(uVar7 | uVar12) < 0)) ||
             (uVar9 = *(uint *)(lVar6 + 8), (int)uVar9 < (int)uVar12)) {
            do {
              uVar9 = (uint)uVar10;
              if (*(uint *)(lVar6 + 8) <= uVar9) goto LAB_18050b31b;
              iVar2 = *(int *)(lVar6 + 0x10 + uVar10 * 4);
              uVar7 = (uint)uVar11;
              if (iVar2 < 0) {
                uVar7 = uVar7 - 1;
              }
              else {
                if (uVar9 != uVar7) {
                  if (*(uint *)(lVar6 + 8) <= uVar7) goto LAB_18050b31b;
                  *(int *)(lVar6 + 0x10 + uVar11 * 4) = iVar2;
                }
                uVar7 = uVar7 + 1;
              }
              uVar11 = (ulonglong)uVar7;
              uVar10 = (ulonglong)(uVar9 + 1);
            } while ((int)(uVar9 + 1) < (int)uVar12);
          }
          else {
            do {
              iVar2 = *(int *)(lVar6 + 0x10 + uVar10 * 4);
              uVar7 = (uint)uVar11;
              if (iVar2 < 0) {
                uVar7 = uVar7 - 1;
              }
              else {
                if ((uint)uVar10 != uVar7) {
                  if (uVar9 <= uVar7) goto LAB_18050b31b;
                  *(int *)(lVar6 + 0x10 + uVar11 * 4) = iVar2;
                }
                uVar7 = uVar7 + 1;
              }
              uVar11 = (ulonglong)uVar7;
              uVar8 = (uint)uVar10 + 1;
              uVar10 = (ulonglong)uVar8;
            } while ((int)uVar8 < (int)uVar12);
          }
        }
        *(int *)(lVar4 + 0x10 + uVar13 * 4) = (int)uVar7 / 2;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < iVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}


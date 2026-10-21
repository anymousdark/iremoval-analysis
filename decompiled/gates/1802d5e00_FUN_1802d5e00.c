/* query=1802d5e00 containing=1802d5e00 name=FUN_1802d5e00 body=298 */

longlong FUN_1802d5e00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802e15d0(0x1807d4080);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      return 0x180759410;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18039d020();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      return *(longlong *)(param_1 + 0x10);
    }
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    if (0 < iVar1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10 + uVar7 * 8);
        if (lVar3 != 0) {
          uVar5 = uVar5 + *(uint *)(lVar3 + 8);
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < iVar1);
    }
    if (0x7fffffff < (longlong)uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_180303230();
    }
    iVar8 = (int)uVar5;
    if (iVar8 != 0) {
      lVar3 = func_0x00018000c5d0(0x180858040,uVar5 & 0xffffffff);
      iVar9 = 0;
      uVar5 = 0;
      if (0 < iVar1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x10 + uVar5 * 8);
          if (lVar2 != 0) {
            uVar6 = *(uint *)(lVar2 + 8);
            if (uVar6 != 0) {
              if (iVar8 - iVar9 < (int)uVar6) {
                iVar9 = -1;
                break;
              }
              FUN_1802ce8c0(lVar3 + 0xc + (longlong)iVar9 * 2,lVar2 + 0xc,(ulonglong)uVar6 * 2);
              iVar9 = iVar9 + uVar6;
            }
          }
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar1);
      }
      if (iVar9 == iVar8) {
        return lVar3;
      }
      uVar4 = FUN_1802d30a0(param_1);
      lVar3 = FUN_1802d5e00(uVar4);
      return lVar3;
    }
  }
  return 0x180759410;
}


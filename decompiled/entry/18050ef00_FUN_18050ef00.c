/* 18050ef00  FUN_18050ef00  body=524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_18050ef00(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,
             undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (_DAT_180806af8 == 0) {
    uVar10 = *(uint *)(*(longlong *)(_DAT_180fe0e10 + 0x10) + 8);
    lVar4 = _DAT_180fe0e10;
  }
  else {
    func_0x000180003e1c();
    uVar10 = *(uint *)(*(longlong *)(_DAT_180fe0e10 + 0x10) + 8);
    lVar4 = _DAT_180fe0e10;
  }
  uVar11 = 0;
  _DAT_180fe0e10 = lVar4;
  if (uVar10 != 0) {
    do {
      uVar9 = (int)(uVar11 + uVar10) / 2;
      if ((*(uint *)(*(longlong *)(lVar4 + 0x10) + 8) <= uVar9) ||
         (lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x10 + (ulonglong)uVar9 * 8),
         *(int *)(lVar3 + 8) == 0)) {
LAB_18050f107:
        plVar7 = (longlong *)func_0x00018039d020();
        return plVar7;
      }
      iVar2 = func_0x0001802d3510(param_2,*(undefined8 *)(lVar3 + 0x10),4);
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          if ((uVar9 < *(uint *)(*(longlong *)(lVar4 + 0x10) + 8)) &&
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x10 + (ulonglong)uVar9 * 8),
             1 < *(uint *)(lVar4 + 8))) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
            if (param_3 == '\0') {
              if (lVar4 == 0) {
                lVar3 = 0;
                uVar8 = 0;
              }
              else {
                lVar3 = lVar4 + 0xc;
                uVar8 = *(undefined4 *)(lVar4 + 8);
              }
              *param_1 = lVar3;
              *(undefined4 *)(param_1 + 1) = uVar8;
              return param_1;
            }
            iVar2 = *(int *)(lVar4 + 8);
            if (iVar2 != 0) {
              if (*(short *)(lVar4 + 0xc) != 0) {
                lVar4 = func_0x0001802d5660();
                if (lVar4 == 0) {
                  lVar3 = 0;
                  uVar8 = 0;
                }
                else {
                  lVar3 = lVar4 + 0xc;
                  uVar8 = *(undefined4 *)(lVar4 + 8);
                }
                *param_1 = lVar3;
                *(undefined4 *)(param_1 + 1) = uVar8;
                return param_1;
              }
              if (iVar2 != 0) {
                *param_1 = lVar4 + 0xe;
                *(int *)(param_1 + 1) = iVar2 + -1;
                return param_1;
              }
              func_0x000180302e10(0x21);
              pcVar1 = (code *)swi(3);
              plVar7 = (longlong *)(*pcVar1)();
              return plVar7;
            }
          }
          goto LAB_18050f107;
        }
        uVar11 = uVar9 + 1;
        uVar9 = uVar10;
      }
      uVar10 = uVar9;
    } while (uVar11 != uVar10);
  }
  lVar4 = func_0x00018000c510(0x18085a0f8);
  *(undefined4 *)(lVar4 + 8) = param_5;
  uVar5 = func_0x00018000c510(0x180897ac0);
  uVar6 = FUN_180509ad0(0x1807bc848,param_2);
  uVar6 = FUN_180509c60(0x1807869f8,param_4,lVar4,uVar6);
  FUN_180519210(uVar5,0x1f,param_5,uVar6);
  plVar7 = (longlong *)func_0x00018000cfe0(uVar5);
  return plVar7;
}


/* 180539e00  FUN_180539e00  body=566 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180539e00(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = func_0x00018000c510(0x180955a40);
  func_0x00018000c720(lVar2 + 8,*(undefined8 *)(_DAT_180fe41c0 + 8));
  lVar3 = func_0x0001807217d0(0x1807f8f50,param_1);
  lVar7 = _DAT_180fe2178;
  uVar9 = 2;
  uVar1 = *(uint *)(lVar3 + 8);
  if (2 < (int)(uVar1 - 1)) {
    do {
      lVar4 = func_0x00018000c510(0x1808e28b0);
      func_0x00018000c720(lVar4 + 8,*(undefined8 *)(lVar7 + 8));
      do {
        uVar8 = uVar9;
        if (uVar1 <= uVar8) goto LAB_18053a032;
        uVar6 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar8 * 8);
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        uVar9 = *(uint *)(lVar4 + 0x10);
        if (uVar9 < *(uint *)(*(longlong *)(lVar4 + 8) + 8)) {
          *(uint *)(lVar4 + 0x10) = uVar9 + 1;
          func_0x00018000c720(*(longlong *)(lVar4 + 8) + 0x10 + (ulonglong)uVar9 * 8);
        }
        else {
          func_0x000180645350(lVar4,uVar6);
        }
        uVar9 = uVar8 + 1;
        if (uVar1 <= uVar9) goto LAB_18053a032;
        lVar5 = *(longlong *)(lVar3 + 0x10 + (ulonglong)uVar9 * 8);
      } while ((lVar5 != 0) && (*(int *)(lVar5 + 8) != 0));
      lVar5 = func_0x00018000c510(0x18089c6b8);
      *(undefined8 *)(lVar5 + 0x10) = 0x180759410;
      if (*(int *)(lVar4 + 0x10) == 0) {
LAB_18053a02c:
        lVar7 = func_0x0001803029f0();
        return lVar7;
      }
      if (*(int *)(*(longlong *)(lVar4 + 8) + 8) == 0) {
LAB_18053a032:
        lVar7 = func_0x00018039d020();
        return lVar7;
      }
      uVar6 = FUN_18053a040(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10));
      func_0x00018000c720(lVar5 + 8,uVar6);
      if (*(uint *)(lVar4 + 0x10) < 2) goto LAB_18053a02c;
      if (*(uint *)(*(longlong *)(lVar4 + 8) + 8) < 2) goto LAB_18053a032;
      uVar6 = FUN_18053a040(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x18));
      func_0x00018000c720(lVar5 + 0x18,uVar6);
      if (*(uint *)(lVar4 + 0x10) < 3) goto LAB_18053a02c;
      if (*(uint *)(*(longlong *)(lVar4 + 8) + 8) < 3) goto LAB_18053a032;
      uVar6 = FUN_18053a040(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x20));
      func_0x00018000c720(lVar5 + 0x20,uVar6);
      if (*(uint *)(lVar4 + 0x10) < 4) goto LAB_18053a02c;
      if (*(uint *)(*(longlong *)(lVar4 + 8) + 8) < 4) goto LAB_18053a032;
      uVar6 = FUN_18053a040(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x28));
      func_0x00018000c720(lVar5 + 0x28,uVar6);
      if (*(uint *)(lVar4 + 0x10) < 5) goto LAB_18053a02c;
      if (*(uint *)(*(longlong *)(lVar4 + 8) + 8) < 5) goto LAB_18053a032;
      uVar6 = FUN_18053a040(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x30));
      func_0x00018000c720(lVar5 + 0x30,uVar6);
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
      uVar9 = *(uint *)(lVar2 + 0x10);
      if (uVar9 < *(uint *)(*(longlong *)(lVar2 + 8) + 8)) {
        *(uint *)(lVar2 + 0x10) = uVar9 + 1;
        func_0x00018000c720(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)uVar9 * 8);
      }
      else {
        func_0x000180645350(lVar2,lVar5);
      }
      uVar9 = uVar8 + 2;
    } while ((int)uVar9 < (int)(uVar1 - 1));
  }
  return lVar2;
}


/* 18050a050  FUN_18050a050  body=237 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050a050(longlong *param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar6 = param_2 + (int)param_1[1];
  uVar4 = (int)param_1[3] * 2;
  if (0x7fffffc7 < uVar4) {
    uVar4 = 0x7fffffc7;
  }
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  if (_DAT_180807be8 != 0) {
    func_0x0001800041dc();
  }
  lVar2 = _DAT_180fe2470;
  lVar3 = func_0x0001805964a0(*(undefined8 *)(_DAT_180fe2470 + 8),uVar4);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 <= *(uint *)(param_1 + 3)) {
    if (lVar3 == 0) {
      lVar8 = 0;
      uVar6 = 0;
    }
    else {
      lVar8 = lVar3 + 0x10;
      uVar6 = *(uint *)(lVar3 + 8);
    }
    if (uVar4 <= uVar6) {
      func_0x0001802ce8c0(lVar8,param_1[2],(ulonglong)uVar4 * 2);
      lVar8 = *param_1;
      func_0x00018000c790();
      if (lVar3 == 0) {
        lVar5 = 0;
        uVar7 = 0;
      }
      else {
        lVar5 = lVar3 + 0x10;
        uVar7 = *(undefined4 *)(lVar3 + 8);
      }
      param_1[2] = lVar5;
      *(undefined4 *)(param_1 + 3) = uVar7;
      if (lVar8 != 0) {
        func_0x000180596700(*(undefined8 *)(lVar2 + 8),lVar8,0);
      }
      return;
    }
    func_0x000180302960(uVar4,param_1[2]);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  func_0x000180302930();
  return;
}


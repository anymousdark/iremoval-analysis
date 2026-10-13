/* 180522e30  FUN_180522e30  body=100 */

undefined8 FUN_180522e30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((int)param_2[1] == *(int *)(param_1 + 0x40)) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar4 = 0;
      uVar5 = 0;
    }
    else {
      lVar4 = lVar2 + 0x10;
      uVar5 = *(uint *)(lVar2 + 8);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
      uVar6 = 0;
    }
    else {
      lVar2 = lVar1 + 0x10;
      uVar6 = *(uint *)(lVar1 + 8);
    }
    if (uVar5 == uVar6) {
      uVar3 = func_0x000180301140(lVar4,lVar2,(ulonglong)uVar6 << 3);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


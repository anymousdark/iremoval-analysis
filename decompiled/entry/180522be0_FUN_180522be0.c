/* 180522be0  FUN_180522be0  body=92 */

undefined8 FUN_180522be0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((int)param_1[1] == (int)param_2[1]) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      lVar4 = 0;
      uVar2 = 0;
    }
    else {
      lVar4 = lVar1 + 0x10;
      uVar2 = *(uint *)(lVar1 + 8);
    }
    lVar1 = *param_2;
    if (lVar1 == 0) {
      lVar5 = 0;
      uVar6 = 0;
    }
    else {
      lVar5 = lVar1 + 0x10;
      uVar6 = *(uint *)(lVar1 + 8);
    }
    if (uVar2 == uVar6) {
      uVar3 = func_0x000180301140(lVar4,lVar5,(ulonglong)uVar6 << 3);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}


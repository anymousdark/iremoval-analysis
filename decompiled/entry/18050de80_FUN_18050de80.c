/* 18050de80  FUN_18050de80  body=160 */

ulonglong FUN_18050de80(int param_1,longlong *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar6 = *param_3 + 1;
  if (uVar2 <= uVar6) {
LAB_18050df1b:
    uVar4 = func_0x00018039d020();
    return uVar4;
  }
  sVar1 = *(short *)(lVar3 + (ulonglong)uVar6 * 2);
  iVar5 = (int)sVar1;
  if (sVar1 < 1) {
    uVar7 = 1;
    do {
      uVar7 = uVar7 & -1 - iVar5 != param_1;
      uVar6 = uVar6 + 1;
      if (uVar2 <= uVar6) goto LAB_18050df1b;
      sVar1 = *(short *)(lVar3 + (ulonglong)uVar6 * 2);
      iVar5 = (int)sVar1;
    } while (sVar1 != 0);
  }
  else {
    uVar7 = 0;
    do {
      uVar7 = uVar7 | param_1 == iVar5 + -1;
      uVar6 = uVar6 + 1;
      if (uVar2 <= uVar6) goto LAB_18050df1b;
      sVar1 = *(short *)(lVar3 + (ulonglong)uVar6 * 2);
      iVar5 = (int)sVar1;
    } while (sVar1 != 0);
  }
  *param_3 = uVar6;
  return (ulonglong)uVar7;
}


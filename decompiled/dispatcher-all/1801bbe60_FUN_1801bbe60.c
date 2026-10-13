/* 1801bbe60  FUN_1801bbe60  body=148 */

longlong * FUN_1801bbe60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  lVar1 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  iVar2 = func_0x0001806c59c0(lVar1,0x5c,uVar5);
  uVar3 = iVar2 + 1;
  if (uVar3 <= uVar5) {
    lVar1 = lVar1 + (ulonglong)uVar3 * 2;
    uVar5 = uVar5 - uVar3;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar5);
    local_38 = 0x1807608fc;
    uStack_30 = CONCAT44(uStack_30._4_4_,4);
    local_28 = lVar1;
    iVar2 = func_0x0001802fafe0(&local_28,&local_38,5);
    uVar3 = uVar5;
    if ((iVar2 == 0) || (uVar3 = uVar5 - 4, uVar3 <= uVar5)) {
      *param_1 = lVar1;
      *(uint *)(param_1 + 1) = uVar3;
      return param_1;
    }
  }
  plVar4 = (longlong *)func_0x000180302930();
  return plVar4;
}


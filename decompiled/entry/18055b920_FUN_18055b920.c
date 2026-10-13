/* 18055b920  FUN_18055b920  body=119 */

undefined8 FUN_18055b920(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if ((int)param_1[1] != *(int *)(*param_1 + 0x44)) {
    func_0x000180303320();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  while( true ) {
    if (*(uint *)(*param_1 + 0x38) <= *(uint *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = *(int *)(*param_1 + 0x38) + 1;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      return 0;
    }
    lVar3 = *(longlong *)(*param_1 + 0x10);
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)((longlong)param_1 + 0xc) = uVar1 + 1;
    if (*(uint *)(lVar3 + 8) <= uVar1) break;
    lVar3 = lVar3 + 0x10 + (ulonglong)uVar1 * 0x10;
    if (-2 < *(int *)(lVar3 + 4)) {
      uVar2 = *(undefined4 *)(lVar3 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar3 + 8);
      *(undefined4 *)(param_1 + 3) = uVar2;
      return 1;
    }
  }
  uVar5 = func_0x00018039d020();
  return uVar5;
}


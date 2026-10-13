/* 18052b760  FUN_18052b760  body=239 */

longlong * FUN_18052b760(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((longlong)param_3 < 0) {
    func_0x00018039cff0();
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  if (*(uint *)(*(longlong *)(param_2 + 0x10) + 8) <= param_3) {
    plVar4 = (longlong *)func_0x00018039d020();
    return plVar4;
  }
  (**(code **)(**(longlong **)(param_2 + 8) + 0xf8))
            (*(longlong **)(param_2 + 8),
             (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x10 + param_3 * 4),0);
  lVar3 = FUN_18052b350(*(undefined8 *)(param_2 + 8));
  uVar1 = *(undefined4 *)(lVar3 + 8);
  plVar4 = (longlong *)FUN_18052e890(*(undefined1 *)(lVar3 + 0xc),uVar1);
  if ((plVar4 != (longlong *)0x0) && (*plVar4 == 0x1808988a0)) {
    FUN_18052b520(param_1,plVar4,uVar1,param_2);
    return plVar4;
  }
  if ((plVar4 != (longlong *)0x0) && (*plVar4 == 0x180898be0)) {
    FUN_18052b5e0(param_1,plVar4,uVar1,param_2);
    return plVar4;
  }
  (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined8 *)(param_2 + 8),uVar1);
  return plVar4;
}


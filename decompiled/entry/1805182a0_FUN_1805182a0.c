/* 1805182a0  FUN_1805182a0  body=99 */

longlong * FUN_1805182a0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 == 0x1808979f8)) {
    return plVar1;
  }
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0x18094e830)) {
    plVar1 = (longlong *)func_0x0001803706a0();
  }
  if (param_2 < *(uint *)(plVar1 + 2)) {
    if (param_2 < *(uint *)(plVar1[1] + 8)) {
      return *(longlong **)(plVar1[1] + 0x10 + (ulonglong)param_2 * 8);
    }
    plVar1 = (longlong *)func_0x00018039d020();
    return plVar1;
  }
  plVar1 = (longlong *)func_0x0001803029f0();
  return plVar1;
}


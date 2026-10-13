/* 180537c20  FUN_180537c20  body=46 */

void FUN_180537c20(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = func_0x0001802d5660(*(undefined8 *)(param_1 + 0x10),0x180759428);
                    /* WARNING: Could not recover jumptable at 0x000180537c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,uVar2);
  return;
}


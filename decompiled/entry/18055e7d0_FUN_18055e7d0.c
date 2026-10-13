/* 18055e7d0  FUN_18055e7d0  body=44 */

void FUN_18055e7d0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
                    /* WARNING: Could not recover jumptable at 0x00018055e7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 8),uVar2);
  return;
}


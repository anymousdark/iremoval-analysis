/* 18055adf0  FUN_18055adf0  body=55 */

undefined8 FUN_18055adf0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (*param_2 == 0x180826158) {
                    /* WARNING: Could not recover jumptable at 0x00018055ae19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,(int)param_2[1]);
    return uVar1;
  }
  uVar1 = func_0x000180302cd0(0x37);
  return uVar1;
}


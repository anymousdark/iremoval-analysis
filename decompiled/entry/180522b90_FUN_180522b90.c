/* 180522b90  FUN_180522b90  body=80 */

undefined8 FUN_180522b90(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong local_18;
  longlong lStack_10;
  longlong local_8;
  
  if ((param_2 != (longlong *)0x0) && (*param_2 == 0x180897d80)) {
    local_18 = param_2[1];
    lStack_10 = param_2[2];
    local_8 = param_2[3];
    uVar1 = FUN_180522be0((int)param_2[1],&local_18);
    return uVar1;
  }
  return 0;
}


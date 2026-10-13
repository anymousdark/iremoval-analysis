/* 180534210  FUN_180534210  body=79 */

void FUN_180534210(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_10;
  undefined4 local_8;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
  }
  if (param_2 == 0) {
    local_10 = 0;
    local_8 = 0;
  }
  else {
    local_10 = param_2 + 0x10;
    local_8 = *(undefined4 *)(param_2 + 8);
  }
  (**(code **)(*plVar1 + 0x128))(plVar1,&local_10);
  return;
}


/* 18050d550  FUN_18050d550  body=106 */

void FUN_18050d550(undefined8 param_1,char param_2,char param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong local_10;
  undefined4 local_8;
  
  local_10 = 0;
  if (param_2 != '\0') {
    if (param_3 == '\0') {
      lVar1 = 0x180762a88;
    }
    else {
      lVar1 = 0x1807598f0;
    }
    local_10 = lVar1 + 0xc;
    local_8 = *(undefined4 *)(lVar1 + 8);
    FUN_18050cf20(param_1,&local_10);
    return;
  }
  FUN_18050d080(param_1,0x18078ec50,param_3,0,param_4,param_5);
  return;
}


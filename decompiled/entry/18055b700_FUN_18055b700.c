/* 18055b700  FUN_18055b700  body=49 */

ulonglong FUN_18055b700(longlong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0x180826158) {
      param_1 = (longlong *)0x0;
    }
    return (ulonglong)(param_1 != (longlong *)0x0);
  }
  func_0x000180302d90(4);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


/* 180532290  FUN_180532290  body=58 */

longlong FUN_180532290(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180533770(param_1,0,0x1807bed90);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_180530050();
    lVar1 = *(longlong *)(lVar1 + 0x10);
  }
  if (lVar1 == 0) {
    lVar1 = 0x180759410;
  }
  return lVar1;
}


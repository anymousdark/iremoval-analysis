/* 18050cda0  FUN_18050cda0  body=97 */

ulonglong FUN_18050cda0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (1 < (int)uVar1) {
    if (*(short *)(param_1 + 0xc) == 0x61) {
      if (*(short *)(param_1 + 0xe) == 0x7a) goto joined_r0x00018050cdd2;
    }
    else if ((*(short *)(param_1 + 0xc) == 0x74) && (*(short *)(param_1 + 0xe) == 0x72)) {
joined_r0x00018050cdd2:
      if (uVar1 == 2) {
        return 1;
      }
      if (uVar1 < 3) {
        uVar2 = func_0x00018039d020();
        return uVar2;
      }
      return (ulonglong)(*(short *)(param_1 + 0x10) == 0x2d);
    }
  }
  return 0;
}


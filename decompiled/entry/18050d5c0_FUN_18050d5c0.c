/* 18050d5c0  FUN_18050d5c0  body=63 */

ulonglong FUN_18050d5c0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 8) < 3) {
    uVar2 = func_0x00018039d020();
    return uVar2;
  }
  if (((*(short *)(param_1 + 0x10) == 0) && (*(short *)(param_1 + 0xe) == 0)) &&
     (*(short *)(param_1 + 0xc) != 1)) {
    iVar1 = FUN_18050dae0();
    return (ulonglong)(iVar1 == 0);
  }
  return 0;
}


/* 18050dae0  FUN_18050dae0  body=42 */

ulonglong FUN_18050dae0(longlong param_1)

{
  ulonglong uVar1;
  
  if (2 < *(uint *)(param_1 + 8)) {
    return (ulonglong)
           ((int)(*(ushort *)(param_1 + 0x10) + 3 + (uint)*(ushort *)(param_1 + 0xe)) <
           (int)*(uint *)(param_1 + 8));
  }
  uVar1 = func_0x00018039d020();
  return uVar1;
}


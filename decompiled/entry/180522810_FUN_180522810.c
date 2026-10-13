/* 180522810  FUN_180522810  body=64 */

void FUN_180522810(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  
  uVar2 = (int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6;
  if (uVar2 < *(uint *)(*param_1 + 8)) {
    puVar1 = (ulonglong *)(*param_1 + 0x10 + (ulonglong)uVar2 * 8);
    *puVar1 = *puVar1 | 1L << ((byte)param_2 & 0x3f);
    return;
  }
  func_0x00018039d020();
  return;
}


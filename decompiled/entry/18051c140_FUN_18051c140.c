/* 18051c140  FUN_18051c140  body=152 */

ulonglong FUN_18051c140(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar4 = 0;
  if (param_2 + *(int *)(param_1 + 0x58) <= *(int *)(*(longlong *)(param_1 + 0x28) + 8)) {
    for (; uVar1 = uVar4, 0 < param_2; param_2 = param_2 + -1) {
      uVar4 = *(uint *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = uVar4 + 1;
      if (*(uint *)(*(longlong *)(param_1 + 0x28) + 8) <= uVar4) {
        uVar3 = func_0x00018039d020();
        return uVar3;
      }
      uVar4 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x28) + 0xc + (ulonglong)uVar4 * 2);
      if (uVar4 < 0x100) {
        uVar4 = (uint)*(byte *)((ulonglong)uVar4 + 0x180c75d28);
      }
      else {
        uVar4 = 0xff;
      }
      if (uVar4 == 0xff) break;
      uVar4 = uVar1 * 0x10 + uVar4;
    }
  }
  if (param_2 < 1) {
    return (ulonglong)(uVar1 & 0xffff);
  }
  uVar2 = FUN_18051d5e0(param_1,8,0x180784c20);
  uVar3 = func_0x00018000cfe0(uVar2);
  return uVar3;
}


/* 18051c1e0  FUN_18051c1e0  body=123 */

void FUN_18051c1e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (uVar1 == *(uint *)(lVar2 + 8)) {
    uVar4 = FUN_18051d5e0(param_1,7,0x18078d9f8);
    func_0x00018000cfe0(uVar4);
    return;
  }
  *(uint *)(param_1 + 0x58) = uVar1 + 1;
  if (uVar1 < *(uint *)(lVar2 + 8)) {
    uVar3 = *(ushort *)(lVar2 + 0xc + (ulonglong)uVar1 * 2);
    if (uVar3 - 0x61 < 0x1a) {
      uVar3 = uVar3 - 0x20;
    }
    if ((ushort)(uVar3 - 0x40) < 0x20) {
      return;
    }
    uVar4 = FUN_18051d5e0(param_1,6,0x1807bca28);
    func_0x00018000cfe0(uVar4);
    return;
  }
  func_0x00018039d020();
  return;
}


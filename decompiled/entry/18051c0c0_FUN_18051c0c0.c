/* 18051c0c0  FUN_18051c0c0  body=117 */

void FUN_18051c0c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar3 = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x58);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar2 + 8) <= (int)uVar1) {
      return;
    }
    if (*(uint *)(lVar2 + 8) <= uVar1) {
      func_0x00018039d020();
      return;
    }
    uVar5 = (uint)(ushort)(*(short *)(lVar2 + 0xc + (ulonglong)uVar1 * 2) - 0x30);
    if (9 < uVar5) {
      return;
    }
    *(uint *)(param_1 + 0x58) = uVar1 + 1;
    if ((0xccccccc < iVar3) || ((iVar3 == 0xccccccc && (7 < uVar5)))) break;
    iVar3 = uVar5 + iVar3 * 10;
  }
  uVar4 = FUN_18051d5e0(param_1,9,0x180797868);
  func_0x00018000cfe0(uVar4);
  return;
}


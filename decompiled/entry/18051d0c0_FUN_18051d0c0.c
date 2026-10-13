/* 18051d0c0  FUN_18051d0c0  body=234 */

ulonglong FUN_18051d0c0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(uint *)(lVar3 + 8);
  if (uVar2 <= uVar1) {
LAB_18051d1ac:
    uVar4 = func_0x00018039d020();
    return uVar4;
  }
  uVar5 = *(ushort *)(lVar3 + 0xc + (ulonglong)uVar1 * 2);
  if (uVar5 == 0x7b) {
    iVar7 = *(int *)(lVar3 + 8) - *(int *)(param_1 + 0x58);
    uVar5 = 0x7b;
    uVar6 = uVar1;
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 1) break;
      uVar6 = uVar6 + 1;
      if (uVar2 <= uVar6) goto LAB_18051d1ac;
      uVar5 = *(ushort *)(lVar3 + 0xc + (ulonglong)uVar6 * 2);
    } while (uVar5 - 0x30 < 10);
    if ((iVar7 != 0) && (uVar6 - uVar1 != 1)) {
      if (uVar5 == 0x7d) {
        return 1;
      }
      if (uVar5 == 0x2c) {
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 < 1) break;
          uVar6 = uVar6 + 1;
          if (uVar2 <= uVar6) goto LAB_18051d1ac;
          uVar5 = *(ushort *)(lVar3 + 0xc + (ulonglong)uVar6 * 2);
        } while (uVar5 - 0x30 < 10);
        if (0 < iVar7) {
          bVar8 = uVar5 == 0x7d;
          goto LAB_18051d19d;
        }
      }
    }
  }
  else if (uVar5 < 0x7c) {
    bVar8 = 3 < *(byte *)((ulonglong)uVar5 + 0x180c76cc8);
LAB_18051d19d:
    return (ulonglong)bVar8;
  }
  return 0;
}


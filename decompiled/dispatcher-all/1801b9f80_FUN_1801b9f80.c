/* 1801b9f80  FUN_1801b9f80  body=114 */

void FUN_1801b9f80(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_1801ba140(param_1,param_2);
  iVar1 = *(int *)(lVar2 + 8);
  lVar3 = func_0x00018000c630(0x1809b9598,iVar1);
  uVar5 = 0;
  if (0 < iVar1) {
    if (*(int *)(lVar3 + 8) < iVar1) {
      do {
        if (*(uint *)(lVar3 + 8) <= (uint)uVar5) {
          func_0x00018039d020();
          return;
        }
        *(undefined4 *)(lVar3 + 0x10 + uVar5 * 4) =
             *(undefined4 *)(*(longlong *)(lVar2 + 0x10 + uVar5 * 8) + 100);
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < iVar1);
    }
    else {
      do {
        *(undefined4 *)(lVar3 + 0x10 + uVar5 * 4) =
             *(undefined4 *)(*(longlong *)(lVar2 + 0x10 + uVar5 * 8) + 100);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}


/* 18050cf20  FUN_18050cf20  body=226 */

void FUN_18050cf20(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_30;
  
  lVar4 = *param_2;
  uVar3 = *(uint *)(param_2 + 1);
  lVar5 = FUN_18050ced0();
  uVar8 = 0;
  uVar7 = 0;
  if (0 < (int)(uVar3 - 1)) {
    do {
      uVar2 = *(undefined2 *)(lVar4 + uVar8 * 2);
      sVar6 = *(short *)(lVar4 + (ulonglong)((int)uVar8 + 1) * 2) + -1;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      uVar7 = *(uint *)(lVar5 + 0x10);
      if (uVar7 < *(uint *)(*(longlong *)(lVar5 + 8) + 8)) {
        *(uint *)(lVar5 + 0x10) = uVar7 + 1;
        puVar1 = (undefined2 *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)uVar7 * 4);
        *puVar1 = uVar2;
        puVar1[1] = sVar6;
      }
      else {
        local_30 = CONCAT22(sVar6,uVar2);
        func_0x00018060bf90(lVar5,local_30);
      }
      uVar7 = (int)uVar8 + 2;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)(uVar3 - 1));
  }
  if ((int)uVar7 < (int)uVar3) {
    if (uVar3 <= uVar7) {
      func_0x00018039d020();
      return;
    }
    uVar2 = *(undefined2 *)(lVar4 + (ulonglong)uVar7 * 2);
    *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (uVar3 < *(uint *)(*(longlong *)(lVar5 + 8) + 8)) {
      *(uint *)(lVar5 + 0x10) = uVar3 + 1;
      puVar1 = (undefined2 *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)uVar3 * 4);
      *puVar1 = uVar2;
      puVar1[1] = 0xffff;
    }
    else {
      local_30 = CONCAT22(0xffff,uVar2);
      func_0x00018060bf90(lVar5,local_30);
    }
  }
  return;
}


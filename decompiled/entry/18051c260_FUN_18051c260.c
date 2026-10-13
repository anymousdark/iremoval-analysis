/* 18051c260  FUN_18051c260  body=204 */

void FUN_18051c260(longlong param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x58) < *(int *)(*(longlong *)(param_1 + 0x28) + 8)) {
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0x28) + 8) <= *(uint *)(param_1 + 0x58)) {
        func_0x00018039d020();
        return;
      }
      uVar2 = *(ushort *)
               (*(longlong *)(param_1 + 0x28) + 0xc + (ulonglong)*(uint *)(param_1 + 0x58) * 2);
      if (uVar2 == 0x2d) {
        bVar1 = true;
      }
      else if (uVar2 == 0x2b) {
        bVar1 = false;
      }
      else {
        uVar2 = uVar2 | 0x20;
        if (uVar2 < 0x6e) {
          if (uVar2 == 0x69) {
            uVar3 = 1;
          }
          else if (uVar2 == 0x6d) {
            uVar3 = 2;
          }
          else {
LAB_18051c2f0:
            uVar3 = 0;
          }
        }
        else if (uVar2 == 0x6e) {
          uVar3 = 4;
        }
        else if (uVar2 == 0x73) {
          uVar3 = 0x10;
        }
        else {
          if (uVar2 != 0x78) goto LAB_18051c2f0;
          uVar3 = 0x20;
        }
        if (uVar3 == 0) {
          return;
        }
        if (bVar1) {
          *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & ~uVar3;
        }
        else {
          *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | uVar3;
        }
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    } while (*(int *)(param_1 + 0x58) < *(int *)(*(longlong *)(param_1 + 0x28) + 8));
  }
  return;
}


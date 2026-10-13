/* 18050d700  FUN_18050d700  body=135 */

undefined8 FUN_18050d700(longlong param_1,undefined2 *param_2,short *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 < 3) goto LAB_18050d782;
  if (*(short *)(param_1 + 0x10) == 0) {
    uVar1 = *(ushort *)(param_1 + 0xe);
    if (uVar2 == uVar1 + 3) {
      if (uVar1 == 1) {
        if (3 < uVar2) {
          *param_2 = *(undefined2 *)(param_1 + 0x12);
          *param_3 = -1;
          return 1;
        }
      }
      else {
        if (uVar1 != 2) goto LAB_18050d770;
        if ((3 < uVar2) && (*param_2 = *(undefined2 *)(param_1 + 0x12), 4 < uVar2)) {
          *param_3 = *(short *)(param_1 + 0x14) + -1;
          return 1;
        }
      }
LAB_18050d782:
      uVar3 = func_0x00018039d020();
      return uVar3;
    }
  }
LAB_18050d770:
  *param_3 = 0;
  *param_2 = 0;
  return 0;
}


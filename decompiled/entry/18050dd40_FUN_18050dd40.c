/* 18050dd40  FUN_18050dd40  body=314 */

undefined8 FUN_18050dd40(ushort param_1,longlong *param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong local_40;
  uint local_38;
  uint local_30 [2];
  
  local_40 = 0;
  lVar3 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar7 = (uint)param_1;
  if (param_1 < 0x100) {
    uVar6 = *(byte *)((ulonglong)uVar7 + 0x180c88e10) & 0x1f;
  }
  else {
    uVar6 = func_0x0001803115a0();
  }
  local_30[0] = 0;
  if (0 < (int)uVar2) {
    do {
      if (uVar2 <= local_30[0]) {
        uVar5 = func_0x00018039d020();
        return uVar5;
      }
      sVar1 = *(short *)(lVar3 + (ulonglong)local_30[0] * 2);
      if (sVar1 == 0) {
        local_40 = lVar3;
        local_38 = uVar2;
        iVar4 = FUN_18050de80(uVar6,&local_40,local_30);
joined_r0x00018050ddfd:
        if (iVar4 != 0) {
          return 1;
        }
      }
      else {
        iVar4 = (int)sVar1;
        if (iVar4 < 1) {
          if (iVar4 == -100) {
            if (uVar7 < 0x100) {
              if ((*(byte *)((ulonglong)uVar7 + 0x180c88e10) & 0x80) == 0) {
                return 1;
              }
            }
            else {
              iVar4 = func_0x000180311570(uVar7);
              if (iVar4 == 0) {
                return 1;
              }
            }
          }
          else if (0xffffffffU - iVar4 != uVar6) {
            return 1;
          }
        }
        else if (sVar1 == 100) {
          uVar8 = (uint)param_1;
          if (0xff < uVar8) {
            iVar4 = func_0x000180311570(uVar8);
            goto joined_r0x00018050ddfd;
          }
          if ((*(byte *)((ulonglong)uVar8 + 0x180c88e10) & 0x80) != 0) {
            return 1;
          }
        }
        else if (uVar6 == (int)sVar1 - 1U) {
          return 1;
        }
      }
      local_30[0] = local_30[0] + 1;
    } while ((int)local_30[0] < (int)uVar2);
  }
  return 0;
}


/* 18052c5c0  FUN_18052c5c0  body=394 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052c5c0(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int local_44;
  
  iVar2 = (*_DAT_18081be70)(*(undefined8 *)(param_5 + 8));
  param_3 = param_3 & 0xff;
  puVar4 = (undefined8 *)func_0x00018000c630(0x1809b90e0,(longlong)(int)(iVar2 * param_3));
  lVar1 = *param_2;
  uVar5 = (**(code **)(lVar1 + 0x58))(param_2);
  (**(code **)(lVar1 + 0x120))(param_2,puVar4,0,*(undefined4 *)(puVar4 + 1));
  local_44 = 0;
  iVar2 = (*_DAT_18081be70)(*(undefined8 *)(param_5 + 8));
  if (0 < iVar2) {
    do {
      uVar6 = (*_DAT_18081bfb0)(*(undefined8 *)(param_5 + 8),local_44);
      uVar3 = FUN_18052c320(param_1,param_2,param_3,param_4,uVar6);
      uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
      lVar7 = FUN_18052c0b0(uVar3,param_3);
      iVar2 = func_0x000180399af0(*puVar4);
      if (iVar2 != 1) {
LAB_18052c740:
        func_0x000180302cd0(9);
        return;
      }
      uVar3 = func_0x0001802dafc0(lVar7,0);
      if (*(int *)(lVar7 + 8) < 0) {
        func_0x00018039cff0(lVar7,uVar3);
        goto LAB_18052c740;
      }
      func_0x0001802db5d0(lVar7,uVar3,puVar4,param_3 * local_44,CONCAT44(uVar8,*(int *)(lVar7 + 8)))
      ;
      local_44 = local_44 + 1;
      iVar2 = (*_DAT_18081be70)(*(undefined8 *)(param_5 + 8));
    } while (local_44 < iVar2);
  }
  (**(code **)(lVar1 + 0xf8))(param_2,uVar5,0);
  (**(code **)(lVar1 + 0x120))(param_2,puVar4,0,*(undefined4 *)(puVar4 + 1));
  (**(code **)(lVar1 + 0xf8))(param_2,0,2);
  return;
}


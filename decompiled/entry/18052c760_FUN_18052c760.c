/* 18052c760  FUN_18052c760  body=816 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052c760(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_60;
  uint local_50;
  uint local_4c;
  
  iVar2 = (*_DAT_18081d460)(*(undefined8 *)(param_5 + 8));
  param_3 = param_3 & 0xff;
  puVar4 = (undefined8 *)func_0x00018000c630(0x1809b90e0,(longlong)(int)(iVar2 * param_3));
  iVar2 = (*_DAT_18081d460)(*(undefined8 *)(param_5 + 8));
  puVar5 = (undefined8 *)func_0x00018000c630(0x1809b90e0,(longlong)(int)(iVar2 * param_3));
  lVar1 = *param_2;
  uVar6 = (**(code **)(lVar1 + 0x58))(param_2);
  (**(code **)(lVar1 + 0x120))(param_2,puVar4,0,*(undefined4 *)(puVar4 + 1));
  (**(code **)(lVar1 + 0x120))(param_2,puVar5,0,*(undefined4 *)(puVar5 + 1));
  lVar7 = func_0x00018071f8e0(0x180800cf0);
  local_4c = 0;
  iVar2 = (*_DAT_18081d460)(*(undefined8 *)(param_5 + 8));
  if (iVar2 < 1) goto LAB_18052c938;
LAB_18052c83a:
  if (*(uint *)(lVar7 + 8) <= local_4c) {
LAB_18052ca8c:
    func_0x00018039d020();
    return;
  }
  local_60 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)local_4c * 0x10);
  if (_DAT_180806b28 != 0) goto LAB_18052ca77;
  do {
    lVar8 = func_0x00018000c510(0x1808990c0);
    *(undefined8 *)(lVar8 + 0x10) = 0x180759410;
    FUN_1805305a0(lVar8,local_60);
    uVar3 = FUN_18052c320(param_1,param_2,param_3,param_4,lVar8);
    uVar10 = (undefined4)((ulonglong)lVar8 >> 0x20);
    lVar8 = FUN_18052c0b0(uVar3,param_3);
    iVar2 = func_0x000180399af0(*puVar4);
    if (iVar2 != 1) {
LAB_18052ca81:
      func_0x000180302cd0(9);
      return;
    }
    uVar3 = func_0x0001802dafc0(lVar8,0);
    if (-1 < *(int *)(lVar8 + 8)) {
      func_0x0001802db5d0(lVar8,uVar3,puVar4,param_3 * local_4c,CONCAT44(uVar10,*(int *)(lVar8 + 8))
                         );
      local_4c = local_4c + 1;
      iVar2 = (*_DAT_18081d460)(*(undefined8 *)(param_5 + 8));
      if ((int)local_4c < iVar2) goto LAB_18052c83a;
LAB_18052c938:
      local_50 = 0;
      iVar2 = (*_DAT_18081d460)(*(undefined8 *)(param_5 + 8));
      if (iVar2 < 1) {
LAB_18052ca10:
        (**(code **)(lVar1 + 0xf8))(param_2,uVar6,0);
        (**(code **)(lVar1 + 0x120))(param_2,puVar4,0,*(undefined4 *)(puVar4 + 1));
        (**(code **)(lVar1 + 0x120))(param_2,puVar5,0,*(undefined4 *)(puVar5 + 1));
        (**(code **)(lVar1 + 0xf8))(param_2,0,2);
        return;
      }
      while( true ) {
        if (*(uint *)(lVar7 + 8) <= local_50) goto LAB_18052ca8c;
        uVar9 = *(undefined8 *)(lVar7 + 0x18 + (ulonglong)local_50 * 0x10);
        uVar3 = FUN_18052c320(param_1,param_2,param_3,param_4,uVar9);
        uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
        lVar8 = FUN_18052c0b0(uVar3,param_3);
        iVar2 = func_0x000180399af0(*puVar5);
        if (iVar2 != 1) goto LAB_18052ca81;
        uVar3 = func_0x0001802dafc0(lVar8,0);
        if (*(int *)(lVar8 + 8) < 0) break;
        func_0x0001802db5d0(lVar8,uVar3,puVar5,param_3 * local_50,
                            CONCAT44(uVar10,*(int *)(lVar8 + 8)));
        local_50 = local_50 + 1;
        iVar2 = (*_DAT_18081d460)(*(undefined8 *)(param_5 + 8));
        if (iVar2 <= (int)local_50) goto LAB_18052ca10;
      }
    }
    func_0x00018039cff0(lVar8,uVar3);
LAB_18052ca77:
    func_0x000180001bc8();
  } while( true );
}


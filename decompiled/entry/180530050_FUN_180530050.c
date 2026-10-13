/* 180530050  FUN_180530050  body=487 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180530050(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  lVar11 = *param_1;
  iVar9 = (**(code **)(lVar11 + 0x40))(param_1);
  if (iVar9 != 0x50) {
    iVar9 = (**(code **)(lVar11 + 0x40))(param_1);
    if (iVar9 != 0x60) {
      func_0x000180373230(&local_38,0x21,3);
      uVar8 = uRam0000000180787380;
      uVar12 = _DAT_18078736c;
      uVar7 = uRam0000000180787368;
      uVar6 = uRam0000000180787364;
      uVar10 = uRam0000000180787360;
      if ((uint)local_28 <= (uint)local_18) {
        puVar1 = (undefined4 *)(lStack_20 + (local_28 & 0xffffffff) * 2);
        if ((uint)local_18 - (uint)local_28 < 0x16) {
          func_0x0001803735a0(&local_38,0x180787350);
        }
        else {
          uVar4 = CONCAT44(_DAT_180787378,uRam0000000180787374);
          uVar5 = CONCAT44(uRam000000018078737c,_DAT_180787378);
          *puVar1 = _DAT_18078735c;
          puVar1[1] = uVar10;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          *(undefined8 *)(puVar1 + 4) = uVar12;
          *(undefined8 *)(puVar1 + 6) = uVar4;
          *(undefined8 *)(puVar1 + 7) = uVar5;
          *(undefined8 *)(puVar1 + 9) = uVar8;
          local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 0x16);
        }
        func_0x0001806fe380(&local_38,0x50);
        if ((uint)local_28 <= (uint)local_18) {
          if ((uint)local_18 - (uint)local_28 < 4) {
            func_0x0001803735a0(&local_38,0x18075aed0);
          }
          else {
            *(undefined8 *)(lStack_20 + (local_28 & 0xffffffff) * 2) = _DAT_18075aedc;
            local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 4);
          }
          func_0x0001806fe380(&local_38,0x60);
          if ((uint)local_28 <= (uint)local_18) {
            puVar2 = (undefined8 *)(lStack_20 + (local_28 & 0xffffffff) * 2);
            if ((uint)local_18 - (uint)local_28 < 7) {
              func_0x0001803735a0(&local_38,0x18075ac60);
            }
            else {
              uVar12 = CONCAT62(uRam000000018075ac74,_DAT_18075ac72);
              *puVar2 = CONCAT26(_DAT_18075ac72,_DAT_18075ac6c);
              *(undefined8 *)((longlong)puVar2 + 6) = uVar12;
              local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 7);
            }
            uVar10 = (**(code **)(*param_1 + 0x40))(param_1);
            func_0x0001806fe380(&local_38,uVar10);
            lVar11 = func_0x00018000c510(0x180898e60);
            uVar12 = func_0x0001803733f0(&local_38);
            func_0x0001802dcfb0(lVar11);
            func_0x00018000c720(lVar11 + 8,uVar12);
            plVar13 = (longlong *)func_0x00018000cfe0(lVar11);
            return plVar13;
          }
        }
      }
      plVar13 = (longlong *)func_0x000180302930();
      return plVar13;
    }
  }
  if (lVar11 == 0x1808990c0) {
    return param_1;
  }
  func_0x0001803706a0(0x1808990c0,param_1);
  pcVar3 = (code *)swi(3);
  plVar13 = (longlong *)(*pcVar3)();
  return plVar13;
}


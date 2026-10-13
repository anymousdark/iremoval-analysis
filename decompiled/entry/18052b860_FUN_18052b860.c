/* 18052b860  FUN_18052b860  body=857 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18052b860(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  longlong lStack_50;
  undefined8 local_48;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uVar3 = *(ulonglong *)(param_2 + 8);
  lVar13 = *(longlong *)(param_2 + 0x18);
  if (uVar3 < 0x80000000) {
    uVar14 = *(undefined8 *)(_DAT_180fe0e90 + 8);
    lVar4 = *param_1;
    lVar12 = (**(code **)(lVar4 + 0xf8))(param_1,lVar13,0);
    if (lVar12 != lVar13) {
      lVar13 = func_0x00018000c510(0x180898ed0);
      func_0x0001802dcfb0(lVar13);
      *(undefined8 *)(lVar13 + 8) = 0x180786c38;
      lVar13 = func_0x00018000cfe0(lVar13);
      return lVar13;
    }
    lVar13 = func_0x00018000c630(0x1809b90e0,*(undefined1 *)(param_2 + 0x21));
    if (-1 < (longlong)uVar3) {
      lVar12 = func_0x00018000c630(0x1809b9598,uVar3);
      uVar15 = 0;
      if (uVar3 != 0) {
        iVar2 = *(int *)(lVar13 + 8);
        do {
          iVar10 = (**(code **)(lVar4 + 0x108))(param_1,lVar13,0,iVar2);
          if (iVar10 != iVar2) {
            func_0x000180373230(&local_68,0x3e,1);
            if ((uint)local_58 <= (uint)local_48) {
              if ((uint)local_48 - (uint)local_58 < 0x29) {
                func_0x0001803735a0(&local_68,0x180786bd0);
              }
              else {
                func_0x0001802ce8c0(lStack_50 + (local_58 & 0xffffffff) * 2,0x180786bdc,0x52);
                local_58 = CONCAT44(local_58._4_4_,(uint)local_58 + 0x29);
              }
              func_0x0001806d7640(&local_68,uVar15);
              uVar9 = uRam000000018075ad36;
              uVar14 = _DAT_18075ad24;
              uVar8 = uRam000000018075ad20;
              uVar7 = uRam000000018075ad1c;
              uVar11 = uRam000000018075ad18;
              if ((uint)local_58 <= (uint)local_48) {
                puVar1 = (undefined4 *)(lStack_50 + (local_58 & 0xffffffff) * 2);
                if ((uint)local_48 - (uint)local_58 < 0x15) {
                  func_0x0001803735a0(&local_68,0x18075ad08);
                }
                else {
                  uVar5 = CONCAT62(_DAT_18075ad2e,uRam000000018075ad2c);
                  uVar6 = CONCAT26(uRam000000018075ad34,_DAT_18075ad2e);
                  *puVar1 = _DAT_18075ad14;
                  puVar1[1] = uVar11;
                  puVar1[2] = uVar7;
                  puVar1[3] = uVar8;
                  *(undefined8 *)(puVar1 + 4) = uVar14;
                  *(undefined8 *)(puVar1 + 6) = uVar5;
                  *(undefined8 *)((longlong)puVar1 + 0x1a) = uVar6;
                  *(undefined8 *)((longlong)puVar1 + 0x22) = uVar9;
                  local_58 = CONCAT44(local_58._4_4_,(uint)local_58 + 0x15);
                }
                lVar13 = func_0x00018000c510(0x180898ed0);
                uVar14 = func_0x0001803733f0(&local_68);
                *(undefined4 *)(lVar13 + 0x48) = 0x80131500;
                func_0x00018000c720(lVar13 + 8,uVar14);
                lVar13 = func_0x00018000cfe0(lVar13);
                return lVar13;
              }
            }
            goto LAB_18052bb26;
          }
          if ((longlong)uVar15 < 0) goto LAB_18052b965;
          uVar11 = FUN_18052bbc0(lVar13,uVar14);
          if (*(uint *)(lVar12 + 8) <= uVar15) {
            lVar13 = func_0x00018039d020();
            return lVar13;
          }
          *(undefined4 *)(lVar12 + 0x10 + uVar15 * 4) = uVar11;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar3);
      }
      return lVar12;
    }
LAB_18052b965:
    func_0x00018039cff0();
  }
  func_0x000180373230(&local_68,0x29,1);
  if ((uint)local_58 <= (uint)local_48) {
    if ((uint)local_48 - (uint)local_58 < 0x28) {
      func_0x0001803735a0(&local_68,0x180792018);
    }
    else {
      func_0x0001802ce8c0(lStack_50 + (local_58 & 0xffffffff) * 2,0x180792024,0x50);
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 + 0x28);
    }
    func_0x0001806d7640(&local_68,uVar3);
    if ((uint)local_58 <= (uint)local_48) {
      if ((uint)local_48 == (uint)local_58) {
        func_0x0001803735a0(&local_68,0x180760738);
      }
      else {
        *(undefined2 *)(lStack_50 + (local_58 & 0xffffffff) * 2) = _DAT_180760744;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 + 1);
      }
      lVar13 = func_0x00018000c510(0x180898ed0);
      uVar14 = func_0x0001803733f0(&local_68);
      func_0x0001802dcfb0(lVar13);
      func_0x00018000c720(lVar13 + 8,uVar14);
      lVar13 = func_0x00018000cfe0(lVar13);
      return lVar13;
    }
  }
LAB_18052bb26:
  lVar13 = func_0x000180302930();
  return lVar13;
}


/* 18052bbc0  FUN_18052bbc0  body=375 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052bbc0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE;
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
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 4) {
    UNRECOVERED_JUMPTABLE =
         (code *)((ulonglong)*(uint *)((ulonglong)(iVar2 - 1U) * 4 + 0x180cb2b38) + 0x18052bbe0);
                    /* WARNING: Could not emulate address calculation at 0x00018052bbf8 */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,iVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  if (iVar2 == 8) {
    (**(code **)(*param_2 + 0x58))(param_2,param_1,0);
    return;
  }
  func_0x000180373230(&local_38,0x1d,1);
  uVar9 = uRam00000001807bbf34;
  uVar8 = _DAT_1807bbf2c;
  uVar7 = _DAT_1807bbf24;
  uVar6 = uRam00000001807bbf1c;
  uVar11 = _DAT_1807bbf14;
  uVar5 = uRam00000001807bbf10;
  uVar4 = uRam00000001807bbf0c;
  uVar3 = uRam00000001807bbf08;
  if ((uint)local_28 <= (uint)local_18) {
    puVar1 = (undefined4 *)(lStack_20 + (local_28 & 0xffffffff) * 2);
    if ((uint)local_18 - (uint)local_28 < 0x1c) {
      func_0x0001803735a0(&local_38,0x1807bbef8);
    }
    else {
      *puVar1 = _DAT_1807bbf04;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(puVar1 + 4) = uVar11;
      *(undefined8 *)(puVar1 + 6) = uVar6;
      *(undefined8 *)(puVar1 + 8) = uVar7;
      *(undefined8 *)(puVar1 + 10) = uVar8;
      *(undefined8 *)(puVar1 + 10) = uVar8;
      *(undefined8 *)(puVar1 + 0xc) = uVar9;
      local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 0x1c);
    }
    func_0x0001806c9200(&local_38,*(undefined4 *)(param_1 + 8));
    if ((uint)local_28 <= (uint)local_18) {
      if ((uint)local_18 == (uint)local_28) {
        func_0x0001803735a0(&local_38,0x180760738);
      }
      else {
        *(undefined2 *)(lStack_20 + (local_28 & 0xffffffff) * 2) = _DAT_180760744;
        local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 1);
      }
      lVar10 = func_0x00018000c510(0x180898ed0);
      uVar11 = func_0x0001803733f0(&local_38);
      func_0x0001802dcfb0(lVar10);
      func_0x00018000c720(lVar10 + 8,uVar11);
      func_0x00018000cfe0(lVar10);
      return;
    }
  }
  func_0x000180302930();
  return;
}


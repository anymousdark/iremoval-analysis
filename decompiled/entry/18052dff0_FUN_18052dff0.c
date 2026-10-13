/* 18052dff0  FUN_18052dff0  body=338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052dff0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  uVar6 = FUN_18052db20();
  if (uVar6 < 4) {
    UNRECOVERED_JUMPTABLE =
         (code *)((ulonglong)*(uint *)((ulonglong)uVar6 * 4 + 0x180cb2bc0) + 0x18052e010);
                    /* WARNING: Could not emulate address calculation at 0x00018052e02c */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((ulonglong)uVar6,UNRECOVERED_JUMPTABLE);
    return;
  }
  func_0x000180373230(&local_38,0x14,1);
  uVar5 = uRam00000001807bbe18;
  uVar4 = uRam00000001807bbe14;
  uVar7 = uRam00000001807bbe10;
  if ((uint)local_28 <= (uint)local_18) {
    puVar1 = (undefined4 *)(lStack_20 + (local_28 & 0xffffffff) * 2);
    if ((uint)local_18 - (uint)local_28 < 0x13) {
      func_0x0001803735a0(&local_38,0x1807bbe00);
    }
    else {
      uVar8 = CONCAT26(_DAT_1807bbe22,_DAT_1807bbe1c);
      uVar2 = CONCAT26(uRam00000001807bbe2a,uRam00000001807bbe24);
      uVar9 = CONCAT62(uRam00000001807bbe24,_DAT_1807bbe22);
      uVar3 = CONCAT62(uRam00000001807bbe2c,uRam00000001807bbe2a);
      *puVar1 = _DAT_1807bbe0c;
      puVar1[1] = uVar7;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(puVar1 + 4) = uVar8;
      *(undefined8 *)(puVar1 + 6) = uVar2;
      *(undefined8 *)((longlong)puVar1 + 0x16) = uVar9;
      *(undefined8 *)((longlong)puVar1 + 0x1e) = uVar3;
      local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 0x13);
    }
    uVar7 = FUN_18052db20(param_1);
    func_0x0001806c9200(&local_38,uVar7);
    if ((uint)local_28 <= (uint)local_18) {
      if ((uint)local_18 == (uint)local_28) {
        func_0x0001803735a0(&local_38,0x180760738);
      }
      else {
        *(undefined2 *)(lStack_20 + (local_28 & 0xffffffff) * 2) = _DAT_180760744;
        local_28 = CONCAT44(local_28._4_4_,(uint)local_28 + 1);
      }
      uVar8 = func_0x00018000c510(0x180858230);
      uVar9 = func_0x0001803733f0(&local_38);
      func_0x0001802dcfc0(uVar8,uVar9);
      func_0x00018000cfe0(uVar8);
      return;
    }
  }
  func_0x000180302930();
  return;
}


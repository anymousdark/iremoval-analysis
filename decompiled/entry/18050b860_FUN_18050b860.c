/* 18050b860  FUN_18050b860  body=448 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18050b860(longlong param_1,int param_2,int param_3,longlong param_4,uint param_5,uint param_6,
             uint param_7)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar7;
  longlong local_50;
  uint local_48;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_50 = 0;
  uVar5 = *(uint *)(param_4 + 8);
  if (uVar5 < param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_180521e10(0xe,0);
  }
  if (uVar5 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_180521e10(8,2);
  }
  LOCK();
  lVar3 = *(longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x38) = 0;
  UNLOCK();
  if (lVar3 == 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))(*(longlong **)(param_1 + 0x10));
  }
  FUN_180520010(lVar3,*(undefined8 *)(param_1 + 0x48));
  func_0x00018000c720(lVar3 + 8,param_4);
  if ((ulonglong)uVar5 < (ulonglong)param_5 + (ulonglong)param_6) {
    func_0x000180302e10(0x21);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  lVar1 = param_4 + 0xc + (ulonglong)param_5 * 2;
  local_48 = param_6;
  local_50 = lVar1;
  FUN_18051fe70(lVar3,param_1,&local_50,param_7 - param_5,CONCAT44(uVar7,param_2));
  if (param_3 == 0) {
    iVar6 = 1;
    uVar5 = param_6;
    if ((*(byte *)(param_1 + 0x40) & 0x40) != 0) {
      uVar5 = 0;
      iVar6 = -1;
    }
    if (*(uint *)(lVar3 + 0x48) == uVar5) {
      if (_DAT_180806ac8 != 0) {
        func_0x000180003ddc();
      }
      uVar4 = *(undefined8 *)(_DAT_180fe0df8 + 8);
      goto LAB_18050b9db;
    }
    *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + iVar6;
  }
  local_48 = param_6;
  local_50 = lVar1;
  uVar4 = FUN_18050ba60(param_2,param_2 == 0,param_4,param_5,lVar3,&local_50,1);
LAB_18050b9db:
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x00018000c720(param_1 + 0x38,lVar3);
  return uVar4;
}


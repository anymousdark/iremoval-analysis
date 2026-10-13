/* 18052bfe0  FUN_18052bfe0  body=197 */

void FUN_18052bfe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_18052bed0(param_2);
  FUN_18052bd80(&local_48,param_2);
  local_70 = local_48;
  uStack_68 = uStack_40;
  uStack_60 = local_38;
  uStack_58 = uStack_30;
  uStack_50 = local_28;
  uVar1 = FUN_18052b860(param_2,&local_70);
  lVar2 = func_0x00018000c510(0x18089ac68);
  func_0x00018000c720(lVar2 + 8,param_2);
  func_0x00018000c720(lVar2 + 0x10,uVar1);
  *(uint *)(lVar2 + 0x18) = (uint)local_28._1_1_;
  *(uint *)(lVar2 + 0x1c) = (uint)local_28._2_1_;
  FUN_18052b760(param_1,lVar2,local_38);
  return;
}


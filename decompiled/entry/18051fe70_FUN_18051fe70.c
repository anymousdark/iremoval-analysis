/* 18051fe70  FUN_18051fe70  body=411 */

void FUN_18051fe70(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0xc) = param_5;
  func_0x00018000c720();
  *(undefined4 *)(param_1 + 9) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  if (param_1[5] == 0) {
    lVar1 = param_1[6];
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      lVar4 = func_0x00018000c510(0x180897480);
      FUN_18050aa30(lVar4,lVar1,*(undefined4 *)(lVar1 + 0x44),param_1[1],
                    *(undefined4 *)(param_3 + 8));
    }
    else {
      lVar4 = func_0x00018000c510(0x180897518);
      FUN_18050aa30(lVar4,lVar1,*(undefined4 *)(lVar1 + 0x44),param_1[1],
                    *(undefined4 *)(param_3 + 8));
      func_0x00018000c720(lVar4 + 0x68,lVar2);
    }
    func_0x00018000c720(param_1 + 5,lVar4);
  }
  else {
    FUN_18050aae0(param_1[5],param_1[1],*(undefined4 *)(param_3 + 8));
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1[2] + 8);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_1[3] + 8);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1[4] + 8);
    return;
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  iVar6 = *(int *)((longlong)param_1 + 0x5c) * 8;
  iVar3 = iVar6;
  if (iVar6 < 0x20) {
    iVar3 = 0x20;
  }
  if (iVar6 < 0x10) {
    iVar6 = 0x10;
  }
  uVar5 = func_0x00018000c630(0x1809b9598,(longlong)iVar3);
  func_0x00018000c720(param_1 + 2,uVar5);
  *(int *)(param_1 + 10) = iVar3;
  uVar5 = func_0x00018000c630(0x1809b9598,(longlong)iVar6);
  func_0x00018000c720(param_1 + 3,uVar5);
  *(int *)((longlong)param_1 + 0x54) = iVar6;
  uVar5 = func_0x00018000c630(0x1809b9598,0x20);
  func_0x00018000c720(param_1 + 4,uVar5);
  *(undefined4 *)(param_1 + 0xb) = 0x20;
  return;
}


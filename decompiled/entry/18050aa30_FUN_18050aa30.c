/* 18050aa30  FUN_18050aa30  body=167 */

void FUN_18050aa30(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = func_0x00018000c630(0x1809b9598,2);
  FUN_18050a200(param_1,param_4,uVar1,0,0x180761a00);
  func_0x00018000c720(param_1 + 0x40,param_2);
  uVar1 = func_0x00018000c630(0x1809b9598,(longlong)param_3);
  func_0x00018000c720(param_1 + 0x50,uVar1);
  uVar1 = func_0x00018000c630(0x1809cdda0,(longlong)param_3);
  func_0x00018000c720(param_1 + 0x48,uVar1);
  func_0x000180370d30(*(undefined8 *)(param_1 + 0x48),0,*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x5c) = param_5;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}


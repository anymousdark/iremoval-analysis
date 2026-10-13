/* 18050ce70  FUN_18050ce70  body=91 */

longlong FUN_18050ce70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = func_0x00018000c510(0x18085fba8);
    *(undefined4 *)(lVar1 + 0x20) = 0x7fffffff;
    uVar2 = func_0x00018000c630(0x1809b9178,0x10);
    func_0x00018000c720(lVar1 + 8,uVar2);
    func_0x00018000c720(param_1 + 0x10,lVar1);
  }
  return lVar1;
}


/* 18050ced0  FUN_18050ced0  body=68 */

longlong FUN_18050ced0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = func_0x00018000c510(0x18097dea0);
    func_0x00018060be20(lVar1,6);
    func_0x00018000c720(param_1 + 8,lVar1);
  }
  return lVar1;
}


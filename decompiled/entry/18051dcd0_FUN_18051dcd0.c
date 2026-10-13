/* 18051dcd0  FUN_18051dcd0  body=70 */

undefined8 FUN_18051dcd0(undefined8 param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  byte local_10;
  char cStack_f;
  undefined8 local_8;
  
  local_8 = 0;
  uVar1 = FUN_18051ee20(param_1,&local_8);
  cStack_f = (char)((ushort)uVar1 >> 8);
  local_10 = (byte)uVar1;
  if ((local_10 & cStack_f == '\x01') == 0) {
    return 0;
  }
  uVar2 = FUN_18050e540();
  return uVar2;
}


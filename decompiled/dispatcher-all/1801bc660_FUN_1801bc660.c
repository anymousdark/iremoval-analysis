/* 1801bc660  FUN_1801bc660  body=178 */

undefined4 FUN_1801bc660(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
    local_18 = FUN_1801bc120();
    local_c = 0;
    func_0x00018032f430(local_18);
    local_c = 1;
    if ((*(char *)((longlong)param_1 + 0x3c) != '\0') ||
       (*(char *)((longlong)param_1 + 0x3d) != '\0')) {
      local_10 = 0;
      FUN_1801bc729(auStack_38);
      return local_10;
    }
    *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
    param_1[3] = 0;
    FUN_1801bc5e0();
    if (param_1[3] == 0) {
      func_0x00018000c720(param_1 + 3,param_1[4]);
      (**(code **)(*param_1 + 0x40))();
    }
    *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
    *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
    func_0x00018032f6a0(local_18);
  }
  return 1;
}


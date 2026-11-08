extern volatile char func_8021AF20;
void func_8019DCE4(void)
{
  s32 temp_v0;
  s32 var_v1;
  var_v1 = 0;
  __repair_rows:
  {
    temp_v0 = var_v1 * 9;
    *(((&func_8021AF20) + 0x32EE) + temp_v0) = 0;
    *(((&func_8021AF20) + 0x32EF) + temp_v0) = 0;
    *(((&func_8021AF20) + 0x32F0) + temp_v0) = 0;
    *(((&func_8021AF20) + 0x32F1) + temp_v0) = 0;
    *(((&func_8021AF20) + 0x32F2) + temp_v0) = 0;
    *(((&func_8021AF20) + 0x32F3) + temp_v0) = 0;
    *(((&func_8021AF20) + 0x3265) + var_v1) = 0;
    var_v1 += 1;
  }

  if (var_v1 < 4)
  {
    goto __repair_rows;
  }
}


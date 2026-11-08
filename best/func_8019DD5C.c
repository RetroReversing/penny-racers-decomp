extern unsigned char func_8021AF20;
void func_8019DD5C(void)
{
  s32 var_v1;
  var_v1 = 0;
  __repair_rows:
  {
    *((var_v1 * 2) + ((&func_8021AF20) + 0x3750)) = 0;
    var_v1 += 1;
  }

  if (var_v1 < 4)
  {
    goto __repair_rows;
  }
}


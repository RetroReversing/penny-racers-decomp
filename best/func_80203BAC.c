extern char D_8021E670;
void func_80203BAC(void)
{
  s32 var_v1;
  var_v1 = 0;
  __repair_rows:
  {
    *((var_v1 * 2) + (&D_8021E670)) = 0;
    var_v1 += 1;
  }

  if (var_v1 < 4)
  {
    goto __repair_rows;
  }
}


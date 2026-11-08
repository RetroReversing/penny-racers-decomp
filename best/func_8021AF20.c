extern char D_8011F2FD[];
extern char D_8011F300[];
extern u16 D_8018BC3C;
extern u16 func_800E1850;
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFFFF) * 0x64;
}

void func_8021AF20(s32 arg0)
{
  s32 temp_v1;
  s32 var_v0;
  s32 var_v1;
  var_v0 = func_800E1850 & 0xFFFF;
  if ((func_800E1850 & 0xFFFF) != 0xFFFF)
  {
    var_v1 = var_v0 * 2;
    __repair_rows:
    {
      temp_v1 = (((var_v1 + var_v0) * 8) + var_v0) * 4;
      if (1)
      {
        do
        {
          *(D_8011F2FD + temp_v1) = 4;
        }
        while (0);
        var_v0 = (*(D_8011F300 + temp_v1)) & 0xFFFF;
      }
      var_v1 = var_v0 * 2;
    }

    if (var_v0 != 0xFFFF)
    {
      goto __repair_rows;
    }
  }
  *(D_8011F2FD + (D_8018BC3C * 0x64)) = 0;
  *(D_8011F2FD + inline_fn(arg0)) = 0;
}


extern f64 D_8004A438;
extern f64 D_8004A440;
extern f64 D_8004A448;
extern f64 D_8004A450;
s16 func_8002E9A4(f64 arg0, f64 arg1, s32 arg4, s16 *arg5)
{
  f64 temp_fv0;
  f64 temp_fv0_2;
  f64 temp_fv1_3;
  f64 var_fa0;
  f64 var_fa1;
  unsigned short temp_fv1;
  s32 temp_fv1_2;
  var_fa0 = arg0;
  var_fa1 = arg1;
  if (arg4 == 0)
  {
    if (var_fa0 <= var_fa1)
    {
      do
      {
        *arg5 = 0xFFFF;
      }
      while (0);
      return 0x7FFF;
    }
    do
    {
      *arg5 = 0;
    }
    while (0);
    return 0;
  }
  if (var_fa1 < D_8004A438)
  {
    var_fa1 = D_8004A438;
  }
  if (var_fa0 <= 0.0)
  {
    var_fa0 = D_8004A438;
  }
  temp_fv0 = D_8004A440 * ((var_fa1 - var_fa0) * (D_8004A438 / ((f64) arg4)));
  temp_fv1 = (s32) temp_fv0;
  temp_fv0_2 = (temp_fv0 - ((f64) ((s16) temp_fv1))) + D_8004A438;
  temp_fv1_2 = (s32) temp_fv0_2;
  temp_fv1_3 = (temp_fv0_2 - ((f64) ((s16) temp_fv1_2))) * D_8004A448;
  if (!(D_8004A450 <= temp_fv1_3))
  {
    *arg5 = (s16) ((s32) temp_fv1_3);
  }
  else
  {
    *arg5 = ((s32) (temp_fv1_3 - D_8004A450)) | 0x80000000;
  }
  return (s16) ((temp_fv1 - 1) + temp_fv1_2);
}


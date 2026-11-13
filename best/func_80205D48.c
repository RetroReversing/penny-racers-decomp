f32 __cosf(f32, s32);
extern s32 D_8021B098;
extern f64 D_8021DBA0;
extern f64 D_8021DBA8;
s32 func_80205D48(f32 arg0, f32 arg1, volatile unsigned short arg2)
{
  f32 temp_fs0;
  f32 temp_fs0_2;
  f64 var_ft0;
  s32 temp_a2;
  temp_a2 = arg2 & 0xFF;
  if (temp_a2 == 0)
  {
    D_8021B098 = 0;
  }
  temp_fs0_2 = arg0 / 2.0f;
  var_ft0 = (f64) D_8021B098;
  if (D_8021B098 < 0)
  {
    var_ft0 += D_8021DBA8;
  }
  temp_fs0 = ((-__cosf((f32) ((D_8021DBA0 / ((f64) (arg1 * 30.0f))) * var_ft0), temp_a2)) * temp_fs0_2) + temp_fs0_2;
  D_8021B098 += 1;
  return (s32) temp_fs0;
}


f32 __cosf(f32);
s32 func_80032CC0();
f32 __sinf(f32);
extern f64 D_8004A5B0;
extern f64 D_8004A5B8;
extern f64 D_8004A5C0;
extern f64 D_8004A5C8;

void guPerspectiveF(f32 *arg0, s16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs1;
  f64 temp_fv1_2;
  f64 temp_fv1_3;
  unsigned int var_v0;
  s32 var_v0_2;
  s32 i;
  s32 j;
  f32 *p;

  func_80032CC0(arg0);
  temp_fs0 = ((f32) (D_8004A5B0 * ((f64) arg2))) / 2.0f;
  temp_fs0_2 = __cosf(temp_fs0);
  temp_fs0_3 = temp_fs0_2 / __sinf(temp_fs0);
  temp_fs1 = temp_fs0_3 / arg3;
  *((s32 *) (((char *) arg0) + 0x3C)) = 0;
  *((f32 *) (((char *) arg0) + 0x2C)) = -1.0f;
  *((f32 *) (((char *) arg0) + 0x14)) = temp_fs0_3;
  *((f32 *) (((char *) arg0) + 0x28)) = (f32) ((arg4 + arg5) / (arg4 - arg5));
  *((f32 *) (((char *) arg0) + 0x38)) = (f32) (((2.0f * arg4) * arg5) / (arg4 - arg5));
  *((f32 *) (((char *) arg0) + 0)) = temp_fs1;
  for (i = 0; i < 4; i++)
  {
    p = &arg0[i * 4];
    for (j = 0; j < 4; j++)
    {
      p[j] *= arg6;
    }
  }
  if (arg1 != NULL)
  {
    temp_fv1_2 = (f64) (arg4 + arg5);
    var_v0 = 0xFFFF;
    if (!(temp_fv1_2 <= D_8004A5B8))
    {
      temp_fv1_3 = D_8004A5C0 / temp_fv1_2;
      if (!(D_8004A5C8 <= temp_fv1_3))
      {
        var_v0_2 = (s32) temp_fv1_3;
      }
      else
      {
        var_v0_2 = ((s32) (temp_fv1_3 - D_8004A5C8)) | 0x80000000;
      }
      *arg1 = (s16) var_v0_2;
      var_v0 = 1;
      if (!(var_v0_2 & 0xFFFF))
      {
        *arg1 = var_v0;
      }
    }
    else
    {
      *arg1 = var_v0;
    }
  }
}

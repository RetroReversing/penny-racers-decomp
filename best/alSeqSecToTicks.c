extern f64 D_8004A8C8;
extern f64 D_8004A8D0;
extern f64 D_8004A8D8;
s32 alSeqSecToTicks(void *arg0, f32 arg1, unsigned char arg2)
{
  f64 temp_fv1;
  f64 var_ft0;
  s32 var_a2;
  var_ft0 = (f64) arg2;
  if (arg2 < 0)
  {
    var_ft0 += D_8004A8D0;
  }
  temp_fv1 = ((((f64) arg1) * D_8004A8C8) * ((f64) (*((s16 *) (((char *) arg0) - (-0x18)))))) / var_ft0;
  if (D_8004A8D8 >= (temp_fv1 + 1))
  {
    var_a2 = (s32) temp_fv1;
  }
  else
  {
    var_a2 = (s32) (temp_fv1 - D_8004A8D8); var_a2 = var_a2 | 0x80000000;
  }
  return var_a2;
}


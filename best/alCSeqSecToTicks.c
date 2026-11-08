extern f64 D_8004A908;
extern f64 D_8004A910;
extern f64 D_8004A918;
extern f64 D_8004A920;
s32 alCSeqSecToTicks(void **arg0, f32 arg1, s32 arg2)
{
  f64 temp_fv1;
  f64 var_ft0;
  f64 var_fv1;
  s32 temp_v0;
  s32 var_v1;
  temp_v0 = *((s32 *) (((char *) (*arg0)) + 0x40));
  var_ft0 = (f64) temp_v0;
  if (temp_v0 < 0)
  {
    var_ft0 += D_8004A910;
  }
  var_fv1 = (f64) arg2;
  if (arg2 < 0)
  {
    var_fv1 += D_8004A918;
  }
  temp_fv1 = ((((f64) arg1) * D_8004A908) * var_ft0) / var_fv1;
  if (!((D_8004A920 <= temp_fv1) & 0xFFFFFFFFFFFFFFFF))
  {
    var_v1 = (s32) temp_fv1;
  }
  else
  {
    var_v1 = ((s32) (temp_fv1 - D_8004A920)) | 0x80000000;
  }
  return var_v1;
}


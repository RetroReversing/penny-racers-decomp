extern f64 D_8004A8F0;
extern f64 D_8004A8F8;
extern f64 D_8004A900;
inline static f32 inline_fn(f64 arg0)
{
  return (f32) arg0;
}

f32 alCSeqTicksToSec(void **arg0, s32 arg1, s32 arg2)
{
  f64 var_ft0;
  f64 var_fv1;
  s32 temp_v0;
  var_fv1 = (f64) arg2;
  if (arg2 < 0)
  {
    var_fv1 += D_8004A8F0;
  }
  temp_v0 = *((s32 *) (((char *) (*arg0)) + 0x40));
  var_ft0 = (f64) temp_v0;
  if (temp_v0 < 0)
  {
    var_ft0 += D_8004A8F8;
  }
  return (f32) (((f64) (((f32) arg1) * inline_fn(var_fv1))) / (((f64) ((f32) var_ft0)) * D_8004A900));
}


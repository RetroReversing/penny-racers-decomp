extern f64 D_8004A8B8;
extern f64 D_8004A8C0;
inline static f64 inline_fn(s32 arg0, f32 arg1)
{
  return (f64) (((f32) arg0) * arg1);
}

f32 func_80037F18(void *arg0, s32 arg1, s32 arg2)
{
  f64 var_fv1;
  var_fv1 = (f64) arg2;
  if (arg2 < 0)
  {
    var_fv1 += D_8004A8B8;
  }
  return (f32) (inline_fn(arg1, (f32) var_fv1) / (((f64) ((f32) (*((s16 *) (((char *) arg0) + 0x18))))) * D_8004A8C0));
}


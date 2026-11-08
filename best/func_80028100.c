s16 func_8002C1D0(void *);
extern s32 D_8006FB38;
extern s32 D_8006FCB4;
extern s32 D_8006FCB8;
extern s32 D_8006FCBA;
inline static s32 *inline_fn(s32 *arg0)
{
  return arg0;
}

void func_80028100(s32 arg0, u16 arg1)
{
  s16 temp_v0;
  s32 temp_s0;
  s32 temp_v0_2;
  s32 var_v0;
  temp_s0 = arg0 * 0x184;
  temp_v0 = func_8002C1D0(temp_s0 + (&D_8006FB38));
  if (arg1 != 0)
  {
    *((&D_8006FCB8) + temp_s0) = arg1;
    *((&D_8006FCBA) + temp_s0) = (s16) (((u32) temp_v0) / arg1);
    var_v0 = arg0 * 2;
  }
  else
  {
    *((&D_8006FCBA) + temp_s0) = temp_v0;
    *((&D_8006FCB8) + temp_s0) = 0;
    var_v0 = arg0 * 2;
  }
  temp_v0_2 = (((var_v0 + arg0) << 5) + arg0) * 4;
  *((&D_8006FCB4) + temp_v0_2) = (*inline_fn((&D_8006FCB4) + temp_v0_2)) | 1;
}


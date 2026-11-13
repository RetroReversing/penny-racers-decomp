s32 func_801F9D8C(s32, s32);
inline static s32 inline_fn(f32 arg0, f32 arg1)
{
  return (s32) (arg0 - arg1);
}

void func_800DF2AC(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8)
{
  f32 temp_fv1;
  f32 var_fv0;
  s32 temp_fv1_2;
  temp_fv1 = (f32) (func_801F9D8C(inline_fn(arg3, arg6), inline_fn(arg1, arg4)) & 0xFFFF);
  *arg8 = temp_fv1;
  if (arg0 & 0xFF)
  {
    s32 var_a0;
    if (arg3)
    {
      temp_fv1_2 = (s32) (temp_fv1 + 45.0f);
      var_a0 = temp_fv1_2;
    }
    else
    {
      temp_fv1_2 = (s32) (temp_fv1 + 45.0f);
      var_a0 = temp_fv1_2;
    }
    if (((s16) temp_fv1_2) >= 0x168)
    {
      var_a0 = temp_fv1_2 - 0x168;
    }
    if (((u32) (var_a0 & 0xFFFF)) < 0x5AU)
    {
      if (temp_fv1_2)
      {
        var_fv0 = arg3 - arg6;
        goto block_11;
      }
      else
      {
        var_fv0 = arg3 - arg6;
        goto block_11;
      }
    }
    if (((u32) ((var_a0 - 0x5A) & 0xFFFF)) < 0x5AU)
    {
      if (temp_fv1_2)
      {
        var_fv0 = arg1 - arg4;
        goto block_11;
      }
      else
      {
        var_fv0 = arg1 - arg4;
        goto block_11;
      }
    }
    if (((u32) ((var_a0 - 0xB4) & 0xFFFF)) < 0x5AU)
    {
      var_fv0 = arg6 - arg3;
      goto block_11;
    }
    if (((u32) ((var_a0 - 0x10E) & 0xFFFF)) < 0x5AU)
    {
      if (temp_fv1_2)
      {
        var_fv0 = arg4 - arg1;
      }
      else
      {
        var_fv0 = arg4 - arg1;
      }
      block_11:
      *arg7 = (f32) (func_801F9D8C((s32) var_fv0, inline_fn(arg5, arg2)) & 0xFFFF);

    }
  }
}


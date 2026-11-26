s32 func_801F9D8C(s32, s32);

void func_800DF2AC(u8 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8)
{
  s32 t;
  s16 angle;

  *arg8 = func_801F9D8C((s32) (arg3 - arg6), (s32) (arg1 - arg4)) & 0xFFFF;
  if (arg0)
  {
    angle = *arg8 + 45.0f;
    if ((s16) angle >= 0x168)
      angle -= 0x168;
    if ((u16) angle < 0x5A)
    {
      *arg7 = func_801F9D8C((s32) (arg3 - arg6), (s32) (arg5 - arg2)) & 0xFFFF;
    }
    else if ((u16) (angle - 0x5A) < 0x5A)
    {
      *arg7 = func_801F9D8C((s32) (arg1 - arg4), (s32) (arg5 - arg2)) & 0xFFFF;
    }
    else if ((u16) (angle - 0xB4) < 0x5A)
    {
      *arg7 = func_801F9D8C((s32) (arg6 - arg3), (s32) (arg5 - arg2)) & 0xFFFF;
    }
    else if ((u16) (angle - 0x10E) < 0x5A)
    {
      *arg7 = func_801F9D8C((s32) (arg4 - arg1), (s32) (arg5 - arg2)) & 0xFFFF;
    }
  }
}

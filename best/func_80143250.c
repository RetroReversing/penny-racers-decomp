f32 __cosf(f32);
f32 __sinf(f32);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern u8 D_8011F2F0[];
extern s32 D_8016891C;
extern s32 D_802390C8;
extern s32 func_801434CC;
extern s32 func_801435A8;
inline static int inline_fn(u8 arg0)
{
  return arg0 & 0xFF;
}

void func_80143250(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9)
{
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_fv0;
  f32 var_fs3;
  s32 temp_v0;
  s32 var_s0;
  void *temp_s2;
  void *temp_v0_2;
  if (temp_fv0)
  {
    temp_s2 = (4 * (25 * (arg0 & 0xFFFF))) + D_8011F2F0;
  }
  else
  {
    temp_s2 = (4 * (25 * (arg0 & 0xFFFF))) + D_8011F2F0;
  }
  if (!arg9)
  {
    var_fs3 = *((f32 *) (((char *) temp_s2) + 0x1C));
  }
  else
  {
    var_fs3 = *((&D_8016891C) + ((*((u16 *) (((char *) temp_s2) + 0x40))) * 0x5C));
  }
  var_s0 = 0;
  if (arg6 != 0)
  {
    do
    {
      temp_fs0 = ((((f32) var_s0) * (360.0f / ((f32) (arg6 & 0xFFFF)))) + arg5) * 0.0174f;
      temp_fs1 = __sinf(temp_fs0);
      temp_fv0 = __cosf(temp_fs0);
      temp_v0 = func_800DE41C(0, 0, 1, 0, 0x5B, inline_fn(arg8), &D_802390C8, &func_801434CC, &func_801435A8, (temp_fs1 * arg4) + (*((f32 *) (((char *) temp_s2) + 0x18))), var_fs3, (temp_fv0 * arg4) + (*((f32 *) (((char *) temp_s2) + 0x20))), 0, 0, 0, arg3, arg3, arg3);
      var_s0 += 1;
      if (((u32) ((temp_v0 + 2) & 0xFFFF)) >= 2U)
      {
        temp_v0_2 = ((temp_v0 & 0xFFFF) * 0x64) + D_8011F2F0;
        *((s16 *) (((char *) temp_v0_2) + 8)) = 0x40;
        *((s16 *) (((char *) temp_v0_2) + 6)) = 0x40;
        *((s16 *) (((char *) temp_v0_2) + 4)) = 0x40;
        *((s16 *) (((char *) temp_v0_2) + 2)) = 0x40;
        *((f32 *) (((char *) temp_v0_2) + 0x44)) = (f32) (temp_fs1 * arg2);
        *((f32 *) (((char *) temp_v0_2) + 0x4C)) = (f32) (temp_fv0 * arg2);
        *((s32 *) (((char *) temp_v0_2) + 0x48)) = arg1;
        *((u16 *) (((char *) temp_v0_2) + 0x40)) = arg7;
      }
    }
    while (var_s0 < (arg6 & 0xFFFF));
  }
}


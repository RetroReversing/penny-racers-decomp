s32 func_80129918(s32, f32, f32, f32, s32, f32, s32);
s32 func_8013F44C();
s32 func_801D7028();
extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern char D_8011F340[];
extern char D_8011F350[];
inline static int inline_fn(int arg0)
{
  return arg0;
}

void func_8014081C(s32 arg0_in)
{
  s32 arg0;
  f32 temp_fv1;
  s32 temp_s2;
  s32 temp_v1;
  s32 __repair_phase_temp_v1;
  s32 var_a0;
  void *temp_s0;
  void *temp_s1;
  if (temp_s1 || temp_s0)
  {
    temp_s2 = arg0 & 0xFFFF;
  }
  else
  {
    temp_s2 = arg0 & 0xFFFF;
  }
  do
  {
    arg0 = arg0_in; temp_v1 = inline_fn(temp_s2 * 0x64);
    if ((*((s32 *) (*((s32 *) (D_8011F340 + temp_v1))))) == 0)
    {
      temp_s1 = *((s32 *) (D_8011F350 + temp_v1));
      do
      {
        if (arg0)
        {
          temp_s0 = temp_v1 + D_8011F2F0;
          *((f32 *) (((char *) temp_s1) + 0xC)) -= 0.2f;
          *((f32 *) (((char *) temp_s0) + 0x18)) += *((f32 *) (((char *) temp_s1) + 8));
          *((f32 *) (((char *) temp_s0) + 0x20)) += *((f32 *) (((char *) temp_s1) + 0x10));
          func_80129918(temp_s1 + 0x1C, *((f32 *) (((char *) temp_s0) + 0x18)), *((f32 *) (((char *) temp_s0) + 0x1C)), *((f32 *) (((char *) temp_s0) + 0x20)), 0, *((f32 *) (((char *) temp_s1) + 0xC)), 0);
          *((f32 *) (((char *) temp_s0) + 0x1C)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x28)));
        }
        else
        {
          temp_s0 = temp_v1 + D_8011F2F0;
          *((f32 *) (((char *) temp_s1) + 0xC)) -= 0.2f;
          *((f32 *) (((char *) temp_s0) + 0x18)) += *((f32 *) (((char *) temp_s1) + 8));
          *((f32 *) (((char *) temp_s0) + 0x20)) += *((f32 *) (((char *) temp_s1) + 0x10));
          func_80129918(temp_s1 + 0x1C, *((f32 *) (((char *) temp_s0) + 0x18)), *((f32 *) (((char *) temp_s0) + 0x1C)), *((f32 *) (((char *) temp_s0) + 0x20)), 0, *((f32 *) (((char *) temp_s1) + 0xC)), 0);
          *((f32 *) (((char *) temp_s0) + 0x1C)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x28)));
        }
        if ((*((u8 *) (((char *) temp_s1) + 0x1E))) != 0)
        {
          func_801D7028(temp_s2, 0x19);
          *((f32 *) (((char *) temp_s1) + 0xC)) = (f32) ((*((f32 *) (((char *) temp_s1) + 0xC))) * (-0.7f));
        }
        if ((*((f32 *) (((char *) temp_s0) + 0x1C))) < (-200.0f))
        {
          func_8013E49C(*((u16 *) (((char *) temp_s1) + 0x76)));
          *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
          if (1)
          {
            temp_fv1 = *((f32 *) (((char *) temp_s0) + 0x44));
          }
          ;
          *(D_8011F2FD + ((((u32) temp_fv1) & 0xFFFF) * 0x64)) = 2;
        }
      }
      while (0);
      var_a0 = arg0 & 0xFFFF;
      func_8013F44C(var_a0, temp_s1);
    }
  }
  while (0);
}


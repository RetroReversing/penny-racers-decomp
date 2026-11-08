s32 func_80129918(void *, s32, f32, s32, f32, f32, f32);
s32 func_8013E49C(u16);
s32 func_8013F050(s32, void *);
s32 func_8015CB40(s32);
s32 func_801D7028(s32, s32);
extern s32 D_8006FAF0;
extern s32 D_8011F2F0;
extern s32 D_8011F2FD;
extern s32 D_80168574;
void func_801619B4(s16 arg0)
{
  f32 temp_fv1;
  s16 temp_v0;
  s16 temp_v0_2;
  s32 temp_s1_2;
  short var_v0_2;
  s32 var_v1;
  u16 temp_v0_3;
  u16 temp_v0_4;
  void *temp_a0;
  void *temp_a0_2;
  void *temp_a0_3;
  void *temp_a0_4;
  void *temp_s0;
  void *temp_s1;
  void *var_v0;
  temp_s1 = ((arg0 & 0xFFFF) * 0x64) + (&D_8011F2F0);
  temp_s0 = *((void **) (((char *) temp_s1) + 0x60));
  temp_v0 = *((s16 *) (((char *) temp_s0) + 0x14));
  if (temp_v0 > 0)
  {
    temp_v0_2 = temp_v0 - 1;
    *((s16 *) (((char *) temp_s0) + 0x14)) = temp_v0_2;
    if ((temp_v0_2 << 0x10) <= 0)
    {
      var_v1 = 0;
      var_v0 = temp_s0;
      do
      {
        *((s8 *) (((char *) var_v0) + 0x67)) = 0;
        var_v1 += 1;
        var_v0 = temp_s0 + var_v1;
      }
      while (var_v1 < 7);
    }
  }
  temp_fv1 = *((f32 *) (((char *) temp_s0) + 0xC));
  if (temp_fv1 != 0.0f)
  {
    *((f32 *) (((char *) temp_s0) + 0xC)) = (f32) (temp_fv1 - 0.1f);
    do { func_80129918(temp_s0 + 0x1C, *((s32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((s32 *) (((char *) temp_s1) + 0x20)), *((f32 *) (((char *) temp_s0) + 8)), *((f32 *) (((char *) temp_s0) + 0xC)), *((f32 *) (((char *) temp_s0) + 0x10))); } while (0);
    *((s32 *) (((char *) temp_s1) + 0x18)) = (s32) (*((s32 *) (((char *) temp_s0) + 0x24)));
    *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) (*((f32 *) (((char *) temp_s0) + 0x28)));
    *((s32 *) (((char *) temp_s1) + 0x20)) = (s32) (*((s32 *) (((char *) temp_s0) + 0x2C)));
    if ((*((s32 *) (((char *) temp_s0) + 0x1C))) & 0xFFFF00)
    {
      *((f32 *) (((char *) temp_s0) + 0xC)) = 0.0f;
      return;
    }
    if ((*((f32 *) (((char *) temp_s1) + 0x1C))) < (*((&D_80168574) + ((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) * 4))))
    {
      temp_a0_3 = *((void **) (((char *) temp_s0) + 4));
      temp_v0_4 = *((u16 *) (((char *) temp_a0_3) + 0x560));
      *((u16 *) (((char *) temp_a0_3) + 0x560)) = (u16) (temp_v0_4 & 0xF8);
      temp_a0_4 = *((void **) (((char *) temp_s0) + 4));
      *((u16 *) (((char *) temp_a0_4) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_a0_4) + 0x560))) | ((temp_v0_4 & 7) - 1));
      func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
      var_v0_2 = (arg0 & 0xFFFF) * 0x19;
      block_13:
      *((&D_8011F2FD) + (var_v0_2 * 4)) = 2;

    }
  }
  else
  {
    temp_s1_2 = arg0 & 0xFFFF;
    if (func_8013F050(temp_s1_2, temp_s0) & 0xFF)
    {
      temp_a0 = *((void **) (((char *) temp_s0) + 4));
      temp_v0_3 = *((u16 *) (((char *) temp_a0) + 0x560));
      *((u16 *) (((char *) temp_a0) + 0x560)) = (u16) (temp_v0_3 & 0xF8);
      temp_a0_2 = *((void **) (((char *) temp_s0) + 4));
      *((u16 *) (((char *) temp_a0_2) + 0x560)) = (u16) ((*((u16 *) (((char *) temp_a0_2) + 0x560))) | ((temp_v0_3 & 7) - 1));
      func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
      func_8015CB40(temp_s1_2);
      func_801D7028(temp_s1_2, 0x33);
      var_v0_2 = temp_s1_2 * 0x19;
      goto block_13;
    }
  }
}


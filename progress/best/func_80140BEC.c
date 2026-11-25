s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364();
s32 func_8013E818(s32, s32, s32, s32, f32, f32, s32);
extern s32 D_8011F2F0;
extern s32 D_8011F2FD;
extern s32 D_80168814;
extern s32 D_80168818;
extern s32 D_8016881C;
extern s32 D_8018D6C4;
extern s32 D_8018D730;
extern s32 D_8022A770;
extern s32 D_802397E4;
extern s32 func_80140E0C;
void func_80140BEC(short arg0)
{
  unsigned short temp_a1;
  s32 temp_s1;
  volatile unsigned long long pad;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v1_2;
  volatile long var_s0;
  void *temp_v1;
  if (var_s0 || temp_v1)
  {
    var_s0 = 0;
  }
  else
  {
    var_s0 = 0;
  }
  do
  {
    temp_v0 = func_8013E364();
    temp_s1 = temp_v0 & 0xFFFF;
    if (temp_s1 != 0xFFFF)
    {
      temp_a1 = var_s0 * 0xC;
      temp_v0_3 = func_800DE41C(0, 0xF, (double) 1, 0, 0x51, 0xFF, &D_802397E4, &func_80140E0C, 0, *((f32 *) (((s8 *) (&D_80168814)) + temp_a1)), (*((f32 *) (((s8 *) (&D_80168818)) + temp_a1))) - 20.0f, *((f32 *) (((s8 *) (&D_8016881C)) + temp_a1)), 0, 0, 0, 1.0f, 1.0f, 1.0f);
      temp_a1 = temp_v0_3 & 0xFFFF;
      if (((u32) ((temp_v0_3 + 2) & 0xFFFF)) >= 2U)
      {
        temp_v1 = (void *) (temp_a1 * 0x64); temp_v1 = (void *) (((char *) temp_v1) + ((s32) (&D_8011F2F0)));
        *((s16 *) (((char *) temp_v1) + 8)) = 0x80;
        *((s16 *) (((char *) temp_v1) + 6)) = 0x80;
        *((s16 *) (((char *) temp_v1) + 4)) = 0x80;
        *((s16 *) (((char *) temp_v1) + 2)) = 0x80;
        *((s16 *) (((char *) temp_v1) + 0x3E)) = 0;
        do
        {
 do { *((s16 *) (((char *) temp_v1) + 0x40)) = (s16) (0x64 - (var_s0 * 0xA)); } while (0);
        }
        while (0);
        func_8013E818(temp_s1, temp_a1, 0x40, 0, 0.0f, 0.0f, 0);
        temp_v1_2 = temp_s1 * 0x7C;
        *((f32 *) (((s8 *) (&D_8018D730)) + temp_v1_2)) = 35.0f;
        *((s32 *) (((s8 *) (&D_8018D6C4)) + temp_v1_2)) = &D_8022A770;
        do
        {
          var_s0 += 1;
        }
        while (0);
      }
      else
        if (temp_v1)
      {
        func_8013E49C(temp_v0 & 0xFFFF);
        goto block_5;
      }
      else
      {
        func_8013E49C(temp_v0 & 0xFFFF);
        goto block_5;
      }
    }
    else
    {
      block_5:
      var_s0 += 1;

    }
  }
  while (var_s0 < 4);
  *((s8 *) (((s8 *) (&D_8011F2FD)) + ((arg0 & 0xFFFF) * 0x64))) = 2;
}

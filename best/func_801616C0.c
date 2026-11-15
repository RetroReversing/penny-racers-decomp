s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, f32, f32, f32, s32, f32, s32, f32, f32, f32);
s32 func_8013E364();
s32 func_8013E49C(s32);
s32 func_8013E640(s32, s32, void *, s32, s32, f32, s32, s32, f32, s32, s32);
s32 func_801D7028(s32, s32);
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F318;
extern s32 D_8011F320;
extern s32 D_8011F324;
extern s32 D_8011F328;
extern s32 D_8018D6C4;
extern s32 D_8018D727;
extern s32 D_8018D730;
extern s32 D_80239408;
extern s32 func_801619B4;
int func_801616C0(void *arg0)
{
  u16 temp_v0_4;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s1;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1_2;
  u16 temp_v0_3;
  if (((((*((s32 *) (((char *) arg0) + 0x898))) == 1) && ((temp_v0_4 = *((u16 *) (((char *) arg0) + 0x560)), (temp_v0_4 & 8) == 0))) && ((temp_v0_4 & 7) < 7)) && ((temp_v0 = func_8013E364(), temp_s0 = temp_v0 & 0xFFFF, temp_s0 != 0xFFFF)))
  {
    temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_80239408, &func_801619B4, 0, *((&D_8011F308) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64)), (*((&D_8011F30C) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))) + 15.0f, *((&D_8011F310) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64)), 0, *((&D_8011F318) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64)), 0, 2.0f * (*((&D_8011F320) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))), 2.0f * (*((&D_8011F324) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))), 2.0f * (*((&D_8011F328) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))));
    if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
    {
      func_8013E49C(temp_s0);
    }
    else
    {
      temp_s0_2 = temp_v0 & 0xFFFF;
      temp_v0_3 = *((u16 *) (((char *) arg0) + 0x560));
      *((u16 *) (((char *) arg0) + 0x560)) = (u16) ((temp_v0_3 & 0xF8) | ((temp_v0_3 & 7) + 1));
      temp_s1 = temp_v0_2 & 0xFFFF;
      do
      {
        func_8013E640(temp_s0_2, temp_s1, arg0, 0, 0, 15.0f, 0, 0, -0.1f, 0, 0x3C);
      }
      while (0);
      temp_v1_2 = temp_s0_2 * 0x7C;
      *((temp_v1_2 + (&D_8018D727)) + (*((u16 *) (((char *) arg0) + 4)))) = 1;
      *((&D_8018D730) + temp_v1_2) = 20.0f;
      *((&D_8018D6C4) + temp_v1_2) = arg0;
      do
      {
        func_801D7028(temp_s1, 0x2B);
      }
      while (0);
      temp_v0_4 = *((s16 *) (((char *) arg0) + 0x55E));
      if (temp_v0_4 > 0)
      {
        *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_4 - 1);
      }
    }
  }
}


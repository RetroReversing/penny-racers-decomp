s32 func_800DE41C(s32, u8, s32, s32, s32, s32, void *, void *, void *, u32, f32, u32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
s32 func_8013E49C(s32, s32);
void func_8013E818(s32, s32, s32, s32, s32, s32, s32);
void func_801D7028(u16, s32);
extern f32 D_8011F308;
extern f32 D_8011F30C;
extern f32 D_8011F310;
extern f32 D_8011F320;
extern f32 D_8011F324;
extern f32 D_8011F328;
extern f32 D_8011F334;
extern f32 D_8011F338;
extern u8 D_8011F350;
extern u8 D_8018D6C0;
extern u8 D_8018D6C4;
extern u8 D_8018D6C8;
extern u8 D_8018D6D4;
extern u8 D_80239610;
extern u8 func_8015EC58;
extern u8 func_8015F7F8;
extern u8 func_8015FD64;
void func_8015E530(u8 *arg0)
{
  s32 temp_s0;
  s32 temp_s2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 __repair_phase_temp_v0_2;
  s32 temp_a0;
  s16 temp_v0_3;
  s32 temp_v0_5;
  s32 temp_s0_3;
  temp_s0 = *((s32 *) (arg0 + 0x898));
  if ((temp_s0 == 1) && (!((*((u16 *) (arg0 + 0x560))) & 0x18)))
  {
    temp_v0 = func_8013E364();
    temp_s2 = temp_v0 & 0xFFFF;
    if (temp_s2 != 0xFFFF)
    {
      temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s0, NULL, &func_8015EC58, NULL, 0, 0.0f, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f);
      if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
      {
        func_8013E49C(temp_s2, 0);
        return;
      }
      temp_a0 = (temp_v0 & 0xFFFF) * 0x7C;
      *((f32 *) ((&D_8018D6D4) + temp_a0)) = 45.0f;
      *((f32 *) ((&(*((u8 *) 0x8018d6c0))) + temp_a0)) = 1.0f;
      *((void **) ((&(*((u8 *) 0x8018d6c0))) + temp_a0)) = arg0;
      *((u8 *) (arg0 + 0x8D0)) = 0xF0;
      *((u16 *) (arg0 + 0x560)) = (*((u16 *) (arg0 + 0x560))) | 0x10;
      *((void **) ((&D_8011F350) + ((temp_v0_2 & 0xFFFF) * 0x64))) = (&D_8018D6C0) + temp_a0;
      do
      {
        func_801D7028(*((u16 *) (arg0 + 2)), 0x2C);
      }
      while (0);
      temp_v0_3 = *((s16 *) (arg0 + 0x55E));
      if (temp_v0_3 > 0)
      {
        *((s16 *) (arg0 + 0x55E)) = temp_v0_3 - 1;
      }
      if (((*((u8 *) (arg0 + 0x74C))) < 5) && ((temp_s0 = func_8013E364() & 0xFFFF, temp_s0 != 0xFFFF)))
      {
        temp_v0_2 = func_800DE41C(0, *((u8 *) (arg0 + 5)), 1, 0, 0x5B, 0, &D_80239610, &func_8015F7F8, &func_8015FD64, 0, 0.0f, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f);
        temp_v0 = temp_v0_2 & 0xFFFF;
        if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
        {
          func_8013E49C(temp_s0, temp_v0);
          return;
        }
        if (arg0)
        {
          *((f32 *) ((&D_8011F334) + (temp_v0 * 0x64))) = 16.0f;
          *((f32 *) ((&D_8011F338) + (temp_v0 * 0x64))) = 1.0f;
          temp_s0_3 = temp_s0;
        }
        else
        {
          *((f32 *) ((&D_8011F334) + (temp_v0 * 0x64))) = 16.0f;
          *((f32 *) ((&D_8011F338) + (temp_v0 * 0x64))) = 1.0f;
          temp_s0_3 = temp_s0;
        }
        do
        {
          func_8013E818(temp_s0_3, temp_v0, 0x40, 0, 0, 0, 0x3C);
        }
        while (0);
        *((void **) ((&(*((u8 *) 0x8018d6c0))) + (temp_s0_3 * 0x7C))) = arg0;
      }
    }
  }
}


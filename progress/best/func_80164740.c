s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80129918(void *, s32, f32, s32, f32, f32, f32);
s32 func_8013F1D4(s32, void *);
s32 func_801D7028(s32, s32);
s32 func_8013E49C(u16);
extern u8 D_8011F2F0[];
extern u8 D_8011F340[];
extern u8 D_8011F32E[];
extern u8 D_8011F2FD[];
extern u8 D_8011F2F2[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern u8 D_8011F33C[];
extern s32 D_802390C8;
extern s32 func_8016410C;
extern s32 func_80164324;
extern u16 D_8018D672;
extern f32 D_8022AF30[];
extern f32 D_8022AF38[];

void func_80164740(s32 arg0)
{
  f32 temp_fv1;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_5;
  s32 temp_v0_6;
  s32 temp_v0_9;
  s32 var_v1;
  u16 temp_v0;
  u16 temp_v0_4;
  u16 temp_v0_7;
  u16 temp_v0_8;
  u16 temp_v1_2;
  void *temp_s0;
  void *temp_s1;
  s32 idx;

  idx = (arg0 & 0xFFFF) * 0x64;
  if (*(D_8011F340 + idx) == 0)
  {
    temp_s1 = D_8011F2F0 + idx;
    temp_s0 = *((void **) (((char *) temp_s1) + 0x60));
    temp_v1_2 = *((u16 *) (D_8011F32E + idx));
    switch (temp_v1_2)
    {
      case 0:
        *((f32 *) (((char *) temp_s0) + 8)) = (f32) (*((f32 *) (((char *) temp_s0) + 8)) * 0.8f);
        *((f32 *) (((char *) temp_s0) + 0xC)) = (f32) (*((f32 *) (((char *) temp_s0) + 0xC)) - 0.11f);
        *((f32 *) (((char *) temp_s0) + 0x10)) = (f32) (*((f32 *) (((char *) temp_s0) + 0x10)) * 0.8f);
        temp_fv1 = *((f32 *) (((char *) temp_s1) + 0x28)) + 10.0f;
        *((f32 *) (((char *) temp_s1) + 0x28)) = temp_fv1;
        if (temp_fv1 > 359.0f)
        {
          *((f32 *) (((char *) temp_s1) + 0x28)) = (f32) (temp_fv1 - 360.0f);
        }
        func_80129918(((char *) temp_s0) + 0x1C, *((s32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((s32 *) (((char *) temp_s1) + 0x20)), *((f32 *) (((char *) temp_s0) + 8)), *((f32 *) (((char *) temp_s0) + 0xC)), *((f32 *) (((char *) temp_s0) + 0x10)));
        *((s32 *) (((char *) temp_s1) + 0x18)) = *((s32 *) (((char *) temp_s0) + 0x24));
        *((f32 *) (((char *) temp_s1) + 0x1C)) = *((f32 *) (((char *) temp_s0) + 0x28));
        *((s32 *) (((char *) temp_s1) + 0x20)) = *((s32 *) (((char *) temp_s0) + 0x2C));
        if (*((s32 *) (((char *) temp_s0) + 0x1C)) & 0xFFFF00)
        {
          var_v1 = 0;
          if (*((u8 *) (((char *) temp_s0) + 0x1D)) != 0)
          {
            *((f32 *) (((char *) temp_s0) + 0xC)) = 0.0f;
            *(D_8011F32E + idx) = 1;
          }
          else
          {
            temp_v0 = *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560));
            *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) = (u16) (temp_v0 & 0xF8);
            *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) = (u16) (*((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) | ((temp_v0 & 7) - 1));
            func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
            *(D_8011F2FD + idx) = 2;
          }
        }
        if (*((f32 *) (((char *) temp_s1) + 0x1C)) < -5000.0f)
        {
          temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, &D_802390C8, &func_8016410C, &func_80164324, *((s32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((s32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
          if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) >= 2U)
          {
            temp_v0_3 = (temp_v0_2 & 0xFFFF) * 0x64;
            *((s16 *) (D_8011F2F0 + temp_v0_3 + 8)) = 0x40;
            *((s16 *) (D_8011F2F0 + temp_v0_3 + 6)) = 0x40;
            *((s16 *) (D_8011F2F0 + temp_v0_3 + 4)) = 0x40;
            *(D_8011F2F2 + temp_v0_3) = 0x40;
            *(D_8011F334 + temp_v0_3) = 0;
            *(D_8011F338 + temp_v0_3) = 0;
            *(D_8011F33C + temp_v0_3) = 0;
          }
          temp_v0_4 = *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560));
          *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) = (u16) (temp_v0_4 & 0xF8);
          *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) = (u16) (*((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) | ((temp_v0_4 & 7) - 1));
          func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
          *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
          return;
        }
        break;
      case 1:
        if (func_8013F1D4(arg0 & 0xFFFF, temp_s0) & 0xFF)
        {
          temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, &D_802390C8, &func_8016410C, &func_80164324, *((s32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((s32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
          if (((u32) ((temp_v0_5 + 2) & 0xFFFF)) >= 2U)
          {
            temp_v0_6 = (temp_v0_5 & 0xFFFF) * 0x64;
            *((s16 *) (D_8011F2F0 + temp_v0_6 + 8)) = 0x40;
            *((s16 *) (D_8011F2F0 + temp_v0_6 + 6)) = 0x40;
            *((s16 *) (D_8011F2F0 + temp_v0_6 + 4)) = 0x40;
            *(D_8011F2F2 + temp_v0_6) = 0x40;
            *(D_8011F334 + temp_v0_6) = 0;
            *(D_8011F338 + temp_v0_6) = 0;
            *(D_8011F33C + temp_v0_6) = 0;
          }
          temp_v0_7 = *((u16 *) (((char *) temp_s0) + 0x14)) - 1;
          *((u16 *) (((char *) temp_s0) + 0x14)) = temp_v0_7;
          if ((temp_v0_7 << 0x10) <= 0)
          {
            temp_v0_8 = *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560));
            *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) = (u16) (temp_v0_8 & 0xF8);
            *((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) = (u16) (*((u16 *) (((char *) *((void **) (((char *) temp_s0) + 4))) + 0x560)) | ((temp_v0_8 & 7) - 1));
            func_8013E49C(*((u16 *) (((char *) temp_s0) + 0x76)));
            *(D_8011F2FD + idx) = 2;
            func_801D7028(arg0 & 0xFFFF, 0x27);
          }
          else
          {
            temp_v0_9 = D_8018D672 * 0x8F0;
            *((f32 *) (((char *) temp_s0) + 8)) = (f32) -*((f32 *) (((char *) D_8022AF30) + temp_v0_9));
            *((f32 *) (((char *) temp_s0) + 0xC)) = 2.0f;
            *((f32 *) (((char *) temp_s0) + 0x10)) = (f32) -*((f32 *) (((char *) D_8022AF38) + temp_v0_9));
            *(D_8011F32E + idx) = 0;
            func_801D7028(arg0 & 0xFFFF, 0x27);
          }
        }
        break;
    }
  }
}

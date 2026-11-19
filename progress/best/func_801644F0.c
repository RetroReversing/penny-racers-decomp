s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(u16);
s32 func_8013E49C(s32);
s32 func_8013E640(s32, s32, void *, s32, s32, f32, s32, f32, f32, f32, s32);
s32 func_801D7028(s32, s32);
extern s32 D_8011F2F0;
extern s32 D_8016850C;
extern s32 D_8018D6C4;
extern volatile short D_8018D727;
extern s32 D_8018D730;
extern s32 func_80164740;
void func_801644F0(void *arg0)
{
  s16 temp_v0_4;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s1_2;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v1;
  u16 temp_a0;
  u32 temp_s4;
  void *temp_s1;
  void *temp_s5;
  temp_s0_2 = (*((u16 *) (((char *) arg0) + 2))) * 0x64;
  temp_s1 = temp_s0_2 + (&D_8011F2F0);
  temp_a0 = *((u16 *) (((char *) arg0) + 0x560));
  temp_s5 = *((void **) (((char *) ((&D_8011F2F0) + temp_s0_2)) + 0x244));
  temp_s4 = temp_a0 & 7;
  if ((((*((s32 *) (((char *) arg0) + 0x898))) == 1) && ((((((u16) (*((u16 *) (((char *) arg0) + 0x560)))) >> 3) & 1) | (temp_s4 >= 7U)) == 0)) && ((temp_v0_2 = func_8013E364(temp_a0), temp_s0 = temp_v0_2 & 0xFFFF, temp_s0 != 0xFFFF)))
  {
    temp_v0_3 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_8016850C, &func_80164740, 0, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((f32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, *((f32 *) (((char *) temp_s1) + 0x30)), *((f32 *) (((char *) temp_s1) + 0x34)), *((f32 *) (((char *) temp_s1) + 0x38)));
    if (((u32) ((temp_v0_3 + 2) & 0xFFFF)) < 2U)
    {
      func_8013E49C(temp_s0);
      return;
    }
    *((u16 *) (((char *) arg0) + 0x560)) = (u16) (((*((u16 *) (((char *) arg0) + 0x560))) & 0xF8) | (temp_s4 + 1));
    temp_s0_2 = temp_v0_2 & 0xFFFF;
    temp_s1_2 = temp_v0_3 & 0xFFFF;
    func_8013E640(temp_s0_2, temp_s1_2, arg0, 0, 0, 10.0f, 0, (*((f32 *) (((char *) arg0) + 0x7C0))) * 0.5f, *((f32 *) (((char *) arg0) + 0x7C4)), (*((f32 *) (((char *) arg0) + 0x7C8))) * 0.5f, 3);
    temp_v1 = temp_s0_2 * 0x7C;
    *((temp_v1 + (&D_8018D727)) + (*((u16 *) (((char *) arg0) + 4)))) = 1;
    *((&D_8018D730) + temp_v1) = 13.0f;
    *((&D_8018D6C4) + temp_v1) = arg0;
    func_801D7028(temp_s1_2, 0x2B);
    temp_v0_4 = *((s16 *) (((char *) arg0) + 0x55E));
    if (temp_v0_4 > 0)
    {
      *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_4 - 1);
    }
    if ((*((s16 *) (((char *) arg0) + 0x55E))) == 0)
    {
      *((s32 *) (((char *) temp_s5) + 4)) = 0;
    }
  }
}


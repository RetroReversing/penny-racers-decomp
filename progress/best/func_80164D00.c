f32 __cosf(f32);
f32 __sinf(void);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32 *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
s32 func_8013E364();
s32 func_8013E818(s32, s32, s32, f32, f32, f32, s32);
s32 func_801D7028(s32, s32);
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F318;
typedef struct 
{
  u32 f0;
  u8 pad[120];
} Slot_8018D6C4;
extern Slot_8018D6C4 D_8018D6C4[];
extern s32 func_80164FC0;
inline static int inline_fn(u16 arg0)
{
  return arg0 & 7;
}

void func_80164D00(void *arg0)
{
  f32 temp_fs1;
  f32 temp_fs3;
  s16 temp_v0_4;
  s32 temp_s0_2;
  s32 __repair_phase_temp_s0_2;
  s32 temp_s1;
  s32 __repair_phase_temp_s1;
  s32 temp_v0;
  volatile unsigned char pad;
  s32 temp_v0_2;
  u16 temp_s0;
  u16 temp_v0_3;
  s32 temp_v1;
  temp_s1 = *((s32 *) (((char *) arg0) + 0x898));
  if ((((temp_s1 == 1) && ((temp_v1 = *((u16 *) (((char *) arg0) + 0x560)), (temp_v1 & 8) == 0))) && ((temp_v1 & 7) < 5)) && ((temp_v0 = func_8013E364(), temp_s0 = temp_v0 & 0xFFFF, temp_s0 != 0xFFFF)))
  {
    temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s1, 0, &func_80164FC0, 0, *((f32 *) (((s8 *) (&D_8011F308)) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))), *((f32 *) (((s8 *) (&D_8011F30C)) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))), *((f32 *) (((s8 *) (&D_8011F310)) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64))), 0, 0, 0, 0, 0, 0);
    if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) < 2U)
    {
      func_8013E49C(temp_s0);
      return;
    }
    temp_v0_3 = *((u16 *) (((char *) arg0) + 0x560));
    *((u16 *) (((char *) arg0) + 0x560)) = (u16) ((temp_v0_3 & 0xF8) | (inline_fn(temp_v0_3) + 1));
    temp_fs3 = __sinf() * 8.0f;
    temp_fs1 = __cosf(((*((s32 *) (((s8 *) (&D_8011F318)) + ((*((u16 *) (((char *) arg0) + 2))) * 0x64)))) * 3.14f) / 180.0f) * 8.0f;
    temp_s0_2 = temp_v0_2 & 0xFFFF;
    temp_s1 = temp_s0_2;
    do
    {
      func_801D7028(temp_s1, 0x35);
    }
    while (0);
    __repair_phase_temp_s0_2 = temp_v0 & 0xFFFF;
    do
    {
      func_8013E818(__repair_phase_temp_s0_2, temp_s1, 0, ((-(*((f32 *) (((char *) arg0) + 0x7C0)))) * 8.0f) + temp_fs3, *((f32 *) (((char *) arg0) + 0x7C4)), ((-(*((f32 *) (((char *) arg0) + 0x7C8)))) * 8.0f) + temp_fs1, 5);
    }
    while (0);
    D_8018D6C4[__repair_phase_temp_s0_2].f0 = arg0;
    temp_v0_4 = *((s16 *) (((char *) arg0) + 0x55E));
    if (temp_v0_4 > 0)
    {
      *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_4 - 1);
    }
  }
}


extern u8 D_8011F308[];
extern u8 playerSlots[];
extern u8 racerTimers[];
extern f32 D_8016D8D0;
extern f64 D_80183868;
extern f64 D_80183870;
extern f64 D_80183878;
f32 __sinf(f32);
void liftCopyFlags(s32);
void func_80157E30(s32 arg0)
{
  f32 temp_fv0;
  s32 temp_s0;
  s32 temp_v1;
  s32 temp_s0_2;

  temp_s0 = arg0 & 0xFFFF;
  liftCopyFlags(temp_s0);
  temp_v1 = temp_s0 * 0x64;
  if (*(u16 *)(playerSlots + temp_v1) == 0)
  {
    *(f32 *)(racerTimers + temp_v1) = *(f32 *)(D_8011F308 + temp_v1);
    *(u16 *)(playerSlots + temp_v1) = 1;
  }
  temp_fv0 = (f32) ((f64) D_8016D8D0 + D_80183868);
  D_8016D8D0 = temp_fv0;
  if (temp_fv0 > 360.0f)
  {
    D_8016D8D0 = temp_fv0 - 360.0f;
  }
  temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
  *(f32 *)(D_8011F308 + temp_s0_2) = (__sinf((f32) (((f64) D_8016D8D0 * D_80183870) / D_80183878)) * 100.0f) + *(f32 *)(racerTimers + temp_s0_2);
}

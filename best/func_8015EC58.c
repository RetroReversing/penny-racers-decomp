#define AT(T, base, off) (*(T *)((char *)&(base) + (off)))
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern s32 D_8011F2F0;
extern s32 D_8011F2F2;
extern s32 D_8011F2FD;
extern s32 D_8011F2FE;
extern s32 D_8011F32E;
extern s32 D_8011F334;
extern s32 D_8011F338;
extern s32 D_8011F33C;
extern s32 D_8011F350;
extern s32 D_8011F4E4;
extern s32 D_802390C8;
extern s32 func_8013AF08;
extern s32 func_8015FD04;
unsigned int func_8015EC58(s32 arg0)
{
  f32 temp_ft0_3;
  f32 temp_ft0_2;
  f32 temp_ft0;
  f32 temp_fv0;
  register f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  s32 temp_v0_8;
  
  u16 n;
  register void *s0;
  void *a1;
  void *s2;
  void *v1;
  void *a0;
  s32 off;
s32 __repair_phase_off;

  n = arg0 & 0xFFFF;
  off = n * 0x64;
  s0 = AT(void *, D_8011F350, off);
  a0 = *((void **) ((char *) s0 + 4));
  a1 = (char *) &D_8011F4E4 + (*((u16 *) ((char *) a0 + 2))) * 0x64;
  s2 = *((void **) ((char *) a1 + 0x50));
  *((s8 *) ((char *) a0 + 0x8D1)) = 0x78;
  temp_ft0 = *((f32 *) ((char *) s0 + 8));
  *((f32 *) ((char *) s0 + 8)) = ((2.0f - temp_ft0) * 0.2f) + temp_ft0;
  v1 = *((void **) ((char *) s0 + 4));
  if (*((s32 *) ((char *) v1 + 0x890)) != 0)
  {
    if (*((f32 *) ((char *) v1 + 0x748)) < 3000.0f)
    {
      *((f32 *) ((char *) v1 + 0x748)) = 3000.0f;
    }
    v1 = *((void **) ((char *) s0 + 4));
    *((f32 *) ((char *) v1 + 0x748)) = *((f32 *) ((char *) v1 + 0x748)) + 100.0f;
    v1 = *((void **) ((char *) s0 + 4));
    if (*((f32 *) ((char *) v1 + 0x748)) > 7000.0f)
    {
      *((f32 *) ((char *) v1 + 0x748)) = 7000.0f;
    }
  }
  {
    u16 t = *((u16 *) ((char *) s0 + 0x14)) - 1;
    *((u16 *) ((char *) s0 + 0x14)) = t;
    if ((u16) t == 0)
    {
      if (*((s16 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x55E)) == 0)
      {
        AT(s16, D_8011F32E, off) = 1;
      }
      else
      {
        AT(s16, D_8011F32E, off) = 3;
      }
    }
  }
  switch (AT(u16, D_8011F32E, n * 0x64))
  {
    case 1:
      temp_ft0_2 = *((f32 *) ((char *) a1 + 0x34));
      temp_fv0 = ((0.7f - temp_ft0_2) * 0.5f) + temp_ft0_2;
      *((f32 *) ((char *) a1 + 0x34)) = temp_fv0;
      *((f32 *) ((char *) a1 + 0x30)) = temp_fv0;
      if (*((f32 *) ((char *) a1 + 0x34)) < 0.73f)
      {
        AT(s16, D_8011F32E, off) = 2;
      }
      break;

    case 2:
      temp_ft0_3 = *((f32 *) ((char *) a1 + 0x34));
      temp_fv0_2 = ((3.0f - temp_ft0_3) * 0.4f) + temp_ft0_3;
      *((f32 *) ((char *) a1 + 0x34)) = temp_fv0_2;
      *((f32 *) ((char *) a1 + 0x30)) = temp_fv0_2;
      if (temp_fv0_2 > 2.8f)
      {
        AT(s16, D_8011F32E, off) = 3;
      }
      break;

    case 3:
      *((f32 *) ((char *) a1 + 0x34)) = 1.0f;
      *((f32 *) ((char *) a1 + 0x30)) = 1.0f;
      v1 = *((void **) ((char *) s0 + 4));
      *((u16 *) ((char *) v1 + 0x560)) = (u16) (*((u16 *) ((char *) v1 + 0x560)) & 0xEF);
      func_8013E49C(*((u16 *) ((char *) s0 + 0x76)));
      AT(s16, D_8011F2FD, off) = 2;
      if (*((s16 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x55E)) == 0)
      {
        *((s32 *) ((char *) s2 + 4)) = 0;
      }
      break;
  }

  v1 = *((void **) ((char *) s0 + 4));
  if ((*((u8 *) ((char *) v1 + 0x860)) != 0) && (*((s32 *) ((char *) v1 + 0x890)) != 0))
  {
    temp_fv1 = *((f32 *) ((char *) v1 + 0x7B4));
    *((f32 *) ((char *) v1 + 0x7B4)) = ((*((f32 *) ((char *) v1 + 0x784)) * *((f32 *) ((char *) s0 + 8))) - temp_fv1) * 0.2f + temp_fv1;
    v1 = *((void **) ((char *) s0 + 4));
    temp_fv1_2 = *((f32 *) ((char *) v1 + 0x7BC));
    *((f32 *) ((char *) v1 + 0x7BC)) = ((*((f32 *) ((char *) v1 + 0x78C)) * *((f32 *) ((char *) s0 + 8))) - temp_fv1_2) * 0.2f + temp_fv1_2;
    v1 = *((void **) ((char *) s0 + 4));
    *((f32 *) ((char *) v1 + 0x7C0)) = *((f32 *) ((char *) v1 + 0x7B4));
    v1 = *((void **) ((char *) s0 + 4));
    *((f32 *) ((char *) (short)v1 + 0x7C8)) = *((f32 *) ((char *) v1 + 0x7BC));
  }
  if (!(*((u16 *) ((char *) s0 + 0x14)) & 7) && ((u8) *((u8 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x8A1))) < 2U)
  {
    temp_v0_8 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x714)), *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x718)), *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x71C)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((temp_v0_8 + 2) & 0xFFFF)) >= 2U)
    {
      __repair_phase_off = (temp_v0_8 & 0xFFFF) * 0x64;
      *((s16 *) ((char *) &D_8011F2F0 + __repair_phase_off + 8)) = 0x40;
      *((s16 *) ((char *) &D_8011F2F0 + __repair_phase_off + 6)) = 0x40;
      *((s16 *) ((char *) &D_8011F2F0 + __repair_phase_off + 4)) = 0x40;
      AT(s16, D_8011F2F2, __repair_phase_off) = 0x40;
      AT(f32, D_8011F334, __repair_phase_off) = *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7C0));
      AT(f32, D_8011F338, __repair_phase_off) = (*((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7C4)) * 0.8f) + 1.0f;
      AT(f32, D_8011F33C, __repair_phase_off) = *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7C8));
      AT(s16, D_8011F32E, __repair_phase_off) = (s16) *((u8 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7CC));
      AT(s16, D_8011F2FE, __repair_phase_off) = *((u16 *) ((char *) *((void **) ((char *) s0 + 4)) + 2));
    }
    __repair_phase_off = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &func_8013AF08, &func_8015FD04, *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x720)), *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x724)), *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x728)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if (((u32) ((__repair_phase_off + 2) & 0xFFFF)) >= 2U)
    {
      temp_v0_8 = (__repair_phase_off & 0xFFFF) * 0x64;
      *((s16 *) ((char *) &D_8011F2F0 + temp_v0_8 + 8)) = 0x40;
      *((s16 *) ((char *) &D_8011F2F0 + temp_v0_8 + 6)) = 0x40;
      *((s16 *) ((char *) &D_8011F2F0 + temp_v0_8 + 4)) = 0x40;
      AT(s16, D_8011F2F2, temp_v0_8) = 0x40;
      AT(f32, D_8011F334, temp_v0_8) = *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7C0));
      AT(f32, D_8011F338, temp_v0_8) = (*((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7C4)) * 0.8f) + 1.0f;
      AT(f32, D_8011F33C, temp_v0_8) = *((f32 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7C8));
      AT(s16, D_8011F32E, temp_v0_8) = (s16) *((u8 *) ((char *) *((void **) ((char *) s0 + 4)) + 0x7CC));
      AT(s16, D_8011F2FE, temp_v0_8) = *((u16 *) ((char *) *((void **) ((char *) s0 + 4)) + 2));
    }
  }
  return 0;
}

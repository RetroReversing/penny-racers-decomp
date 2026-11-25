s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, s32, f32, f32, f32, f32);
extern u8 D_800DB1B8[];
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern s32 D_80221080;
extern s32 D_80221084;
extern s32 D_80221088;
extern s32 D_8022108C;
extern s32 D_80221090;
extern s32 D_80221094;
extern s32 D_80221098;
extern s32 D_8022109C;
extern s32 D_802210A0;
typedef struct 
{
  int value;
} __repair_field_0;
void func_8022063C(void **arg0)
{
  u16 sp28;
  s32 temp_s2;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_2;
  void *temp_v1;
  void *temp_v1_2;
  union 
  {
    s32 *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v1_3;
  temp_v0 = D_80126FF6 * 0x28;
  __repair_phase_storage.pointer = D_800DB1B8;
  temp_s2 = *((D_800DB1B8 + 0x210E) + temp_v0);
  temp_s0 = temp_s2 << 6;
  do
  {
    guPerspective(temp_s0 + D_8011F060, &sp28, 0x41F00000, ((f32) (*((D_800DB1B8 + 0x2114) + temp_v0))) / ((f32) (*((D_800DB1B8 + 0x2116) + temp_v0))), 10.0f, 5000.0f, 1.0f);
  }
  while (0);
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  do
  {
    if (temp_v1)
    {
      ((__repair_field_0 *) temp_v1)->value = 0xBC00000E;
    }
    else
    {
      ((__repair_field_0 *) temp_v1)->value = 0xBC00000E;
    }
  }
  while (0);
  *((s32 *) (((char *) temp_v1) + 4)) = (s32) sp28;
  temp_v1_2 = *arg0;
  do
  {
    *arg0 = temp_v1_2 + 8;
  }
  while (0);
  ((__repair_field_0 *) temp_v1_2)->value = 0x01030040;
  *((s32 *) (((char *) temp_v1_2) + 4)) = (s32) (temp_s0 + D_8011F060);
  do
  {
    __repair_phase_storage.value = temp_s0 + 0x300; temp_v0_2 = temp_s2 * 0x24;
    if (((unsigned long) D_800DB1B8) & 0x100)
    {
      guLookAt(__repair_phase_storage.value + D_8011F060, *((&D_80221080) + temp_v0_2), *((&D_80221084) + temp_v0_2), *((&D_80221088) + temp_v0_2), *((&D_8022108C) + temp_v0_2), *((&D_80221090) + temp_v0_2), *((&D_80221094) + temp_v0_2), *(temp_v0_2 + (&D_80221098)), *((&D_8022109C) + temp_v0_2), *((&D_802210A0) + temp_v0_2));
    }
    else
    {
      guLookAt(__repair_phase_storage.value + D_8011F060, *((&D_80221080) + temp_v0_2), *((&D_80221084) + temp_v0_2), *((&D_80221088) + temp_v0_2), *((&D_8022108C) + temp_v0_2), *((&D_80221090) + temp_v0_2), *((&D_80221094) + temp_v0_2), *((&D_80221098) + temp_v0_2), *((&D_8022109C) + temp_v0_2), *((&D_802210A0) + temp_v0_2));
    }
    temp_v1_3 = *arg0;
  }
  while (0);
  ((__repair_field_0 *) temp_v1_3)->value = 0x01010040;
  *arg0 = temp_v1_3 + 8;
  *((s32 *) (((char *) temp_v1_3) + 4)) = (s32) (__repair_phase_storage.value + D_8011F060);
}


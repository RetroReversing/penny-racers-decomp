inline static s16 __repair_inline(s16 a)
{
  return a;
}

s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, s32, f32, f32, f32, f32);
extern u8 D_800DB1B8[];
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern s32 D_80220E40;
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
void func_8022026C(void **arg0)
{
  u16 sp28;
  s16 temp_s2;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  temp_v0 = D_80126FF6 * 0x28;
  temp_s2 = __repair_inline(*((u16 *) ((D_800DB1B8 + 0x210C) + temp_v0)));
 do { do { temp_s0 = temp_s2 << 6; } while (0); guPerspective(temp_s0 + D_8011F060, &sp28, D_80220E40, ((f32) (*((D_800DB1B8 + 0x2114) + temp_v0))) / ((f32) (*((D_800DB1B8 + 0x2116) + temp_v0))), 10.0f, 4000.0f, 1.0f); temp_v1 = *arg0; *arg0 = temp_v1 + 8; do { ((__repair_field_0 *) temp_v1)->value = 0xBC00000E; } while (0); *((s32 *) (((char *) temp_v1) + 4)) = (s32) sp28; do { temp_v1_2 = *arg0; *arg0 = temp_v1_2 + 8; } while (0); ((__repair_field_0 *) temp_v1_2)->value = 0x01030040; } while (0);
  *((s32 *) (((char *) temp_v1_2) + 4)) = (s32) (temp_s0 + D_8011F060);
  {
    s32 __repair_value;
    do
    {
      __repair_value = temp_s0 + 0x300;
    }
    while (0);
    temp_s0_2 = __repair_value;
  }
  temp_v0_2 = temp_s2 * 9;
  guLookAt(temp_s0_2 + D_8011F060, *((&D_80221080) + temp_v0_2), *((&D_80221084) + temp_v0_2), *((&D_80221088) + temp_v0_2), *((&D_8022108C) + temp_v0_2), *((&D_80221090) + temp_v0_2), *((&D_80221094) + temp_v0_2), *((&D_80221098) + temp_v0_2), *((&D_8022109C) + temp_v0_2), *((&D_802210A0) + temp_v0_2));
  do
  {
    *arg0 = (*arg0) + 8;
    do
    {
      ((__repair_field_0 *) (*arg0))->value = 0x01010040;
    }
    while (0);
    *((s32 *) (((char *) (*arg0)) + 4)) = (s32) (temp_s0_2 + D_8011F060);
  }
  while (0);
}

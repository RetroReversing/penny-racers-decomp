s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, s32, s32);
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
  int field_0;
  int field_4;
} __repair_record_temp_v1;
typedef struct 
{
  int value;
} __repair_field_0;
void func_80220824(void **arg0)
{
  u16 sp28;
  s32 temp_s0;
  register void *temp_v1;
  s16 temp_s1;
  s32 temp_s0_2;
  register s32 temp_v0;
  register void *temp_v1_3;
  register s32 var_a0;
  register s32 var_a3;
  void *temp_v1_2;
  register s32 temp_v0_2;
  if (temp_v1_3)
  {
    temp_v0 = D_80126FF6 * 0x28;
    temp_s1 = *((D_800DB1B8 + 0x210C) + temp_v0);
  }
  else
  {
    temp_v0 = D_80126FF6 * 0x28;
    temp_s1 = *((D_800DB1B8 + 0x210C) + temp_v0);
  }
 do { if ((*((D_800DB1B8 + 0x2108) + temp_v0)) == 2) { do { var_a0 = temp_s1 << 6; } while (0); var_a0 += (u32) D_8011F060; var_a3 = 0x402AAAAB; } else { var_a0 = (temp_s1 << 6) + D_8011F060; var_a3 = 0x3FAAAAAB; } temp_s0 = (*((D_800DB1B8 + 0x210C) + temp_v0)) << 6; guPerspective(var_a0, &sp28, D_80220E40, var_a3); temp_v1 = *arg0; *arg0 = temp_v1 + 8; ((__repair_record_temp_v1 *) temp_v1)->field_0 = 0xBC00000E; ((__repair_record_temp_v1 *) temp_v1)->field_4 = (s32) sp28; temp_v1_2 = *arg0; *arg0 = temp_v1_2 + 8; } while (0);
  ((__repair_field_0 *) temp_v1_2)->value = 0x01030040;
  *((s32 *) (((char *) temp_v1_2) + 4)) = (s32) (temp_s0 + D_8011F060);
  temp_s0_2 = temp_s0 + 0x300;
  temp_v0_2 = temp_s1 * 0x24;
  guLookAt(temp_s0_2 + D_8011F060, *((&D_80221080) + temp_v0_2), *((&D_80221084) + temp_v0_2), *((&D_80221088) + temp_v0_2), *((&D_8022108C) + temp_v0_2), *((&D_80221090) + temp_v0_2), *((&D_80221094) + temp_v0_2), *((&D_80221098) + temp_v0_2), *((&D_8022109C) + temp_v0_2), *((&D_802210A0) + temp_v0_2));
  temp_v1_3 = *arg0;
  ((__repair_field_0 *) temp_v1_3)->value = 0x01010040;
  *arg0 = temp_v1_3 + 8;
  *((s32 *) (((char *) temp_v1_3) + 4)) = (s32) (temp_s0_2 + D_8011F060);
}

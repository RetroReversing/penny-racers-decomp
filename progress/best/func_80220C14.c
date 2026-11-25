s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32);
s32 guPerspective(s32, u16 *, s32, s32);
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
  int field_0;
  int field_4;
} __repair_record_temp_v1_2;
typedef struct 
{
  int field_0;
  int field_4;
} __repair_record_temp_v1_3;
void func_80220C14(void **arg0)
{
  u16 sp28;
  s32 var_a3;
  s32 temp_s1;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_a0;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  if (arg0 || temp_s0)
  {
    temp_v0 = D_80126FF6 * 0x28;
    temp_s1 = *((s16 *) ((D_800DB1B8 + 0x210A) + temp_v0));
  }
  else
  {
    temp_v0 = D_80126FF6 * 0x28;
    temp_s1 = *((s16 *) ((D_800DB1B8 + 0x210A) + temp_v0));
  }
  if ((*((s16 *) ((D_800DB1B8 + 0x2108) + temp_v0))) == 2)
  {
    var_a0 = temp_s1 << 6;
    do
    {
      var_a0 += D_8011F060;
    }
    while (0);
    var_a3 = 0x402AAAAB;
  }
  else
  {
    temp_s0 = temp_s1 << 6; var_a0 = temp_s0 + D_8011F060;
    var_a3 = 0x3FAAAAAB;
  }
 do { temp_s0 = ((s32) temp_s1) << 6; temp_v1 = *arg0; guPerspective(var_a0, &sp28, 0x42480000, var_a3); *arg0 = temp_v1 + 8; *((s32 *) (((char *) temp_v1) + 0)) = 0xBC00000E; *((s32 *) (((char *) temp_v1) + 4)) = (s32) sp28; temp_v1_2 = *arg0; *arg0 = temp_v1_2 + 8; } while (0);
  *((int *)((char *)temp_v1_2 + 0)) = 0x01030040;
  ((__repair_record_temp_v1_2 *) temp_v1_2)->field_4 = (s32) (((int) temp_s0) + D_8011F060);
  temp_s0_2 = temp_s0 + 0x300;
  temp_v0_2 = temp_s1 * 0x24;
  guLookAt(temp_s0_2 + D_8011F060, *((&D_80221080) + (temp_s1 * 0x24)), *((&D_80221084) + (temp_s1 * 0x24)), *((&D_80221088) + (temp_s1 * 0x24)), *((&D_8022108C) + (temp_s1 * 0x24)), *((&D_80221090) + (temp_s1 * 0x24)), *((&D_80221094) + (temp_s1 * 0x24)), *((&D_80221098) + (temp_s1 * 0x24)), *((&D_8022109C) + temp_v0_2), *((&D_802210A0) + (temp_s1 * 0x24)));
  temp_v1_3 = *arg0;
  ((__repair_record_temp_v1_3 *) temp_v1_3)->field_0 = 0x01010040;
  *arg0 = temp_v1_3 + 8;
  ((__repair_record_temp_v1_3 *) temp_v1_3)->field_4 = (s32) (temp_s0_2 + D_8011F060);
}

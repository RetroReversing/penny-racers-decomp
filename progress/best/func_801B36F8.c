s16 func_800DE41C(s32, s32, s32, s32, s32, s32, s8 *, s32, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F334;
extern s32 D_8011F338;
extern s32 D_8011F33C;
extern void *D_801C7AB0;
extern s8 D_802330B0;
extern s8 D_802330B1;
extern void *D_802330B4;
extern s16 D_802330B8;
extern s16 D_802330BA;
extern s16 D_802330BC;
extern s16 D_802330BE;
extern s16 D_80233EC0;
extern u8 D_8031445C[];
void func_801B36F8(void *arg0)
{
  int __repair_literal;
  s32 *__base_D_8011F308;
  u16 temp_v0;
  s16 temp_v0_3;
  s16 temp_v0_4;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 __repair_phase_temp_s0_2;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 temp_v1_3;
  s32 var_s1;
  s32 var_v1;
  void *temp_a0;
  void *temp_a0_2;
  D_802330B0 = 0;
  D_802330B4 = ((*((s8 *) (((char *) arg0) + 4))) * 8) + D_8031445C;
  D_802330B1 = 1;
  temp_v0 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_802330B0, 0, 0, (((f32) (*((s8 *) (((char *) arg0) + 2)))) * 400.0f) + 400.0f, (f32) (*((u8 *) (((char *) arg0) + 1))), (((f32) (*((s8 *) (((char *) arg0) + 3)))) * 400.0f) + 400.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  D_80233EC0 = temp_v0;
  D_802330B8 = (*((u8 *) (((char *) D_801C7AB0) + 2))) + (temp_v0 + 0xFFFF);
  D_802330BA = temp_v0 + 1;
  D_802330BC = 0xFFFF;
  D_802330BE = 0xFFFF;
  temp_v0_2 = (temp_v0 & 0xFFFF) * 0x64;
  __base_D_8011F308 = &D_8011F308;
  *((f32 *) (((s8 *) (&D_8011F334)) + temp_v0_2)) = *(__base_D_8011F308 + temp_v0_2);
  *((f32 *) (((s8 *) (&D_8011F338)) + temp_v0_2)) = *((f32 *) (((s8 *) (&D_8011F30C)) + temp_v0_2));
  *((f32 *) (((s8 *) (&D_8011F33C)) + temp_v0_2)) = *((f32 *) (((s8 *) (&D_8011F310)) + temp_v0_2));
  var_s1 = 1;
  __repair_literal = 1;
  if (((*((u8 *) (((char *) D_801C7AB0) + 2))) - 1) > __repair_literal)
  {
    var_v1 = 1 & 0xFFFF;
    __repair_rows:
    {
      temp_s0 = var_v1 * 0x10;
      do
      {
        *((&D_802330B0) + temp_s0) = 0;
        *((&D_802330B1) + temp_s0) = 1;
      }
      while (0);
      temp_a0 = (void *) ((var_v1 * 5) + ((s32) arg0));
      *((&D_802330B4) + temp_s0) = ((*((s8 *) (((char *) temp_a0) + 4))) * 8) + D_8031445C;
 do { temp_s0_2 = (s16) func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, temp_s0 + (&D_802330B0), 0, 0, (((f32) (*((s8 *) (((char *) temp_a0) + 2)))) * 400.0f) + 400.0f, (f32) (*((u8 *) (((char *) temp_a0) + 1))), (((f32) (*((s8 *) (((char *) temp_a0) + 3)))) * 400.0f) + 400.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f); *((&D_802330B8) + temp_s0) = var_s1 + (temp_v0 + 0xFFFF); *((&D_802330BA) + temp_s0) = var_s1 + (temp_v0 + 1); *((&D_802330BC) + temp_s0) = 0xFFFF; *((&D_802330BE) + temp_s0) = 0xFFFF; temp_v1 = (temp_s0_2 & 0xFFFF) * 0x64; *((f32 *) (((s8 *) (&D_8011F334)) + temp_v1)) = *(__base_D_8011F308 + temp_v1); *((f32 *) (((s8 *) (&D_8011F338)) + temp_v1)) = *((f32 *) (((s8 *) (&D_8011F30C)) + temp_v1)); } while (0);
      *((f32 *) (((s8 *) (&D_8011F33C)) + temp_v1)) = *((f32 *) (((s8 *) (&D_8011F310)) + temp_v1));
      do
      {
        var_s1 = var_s1 + 1;
      }
      while (0);
      var_v1 = var_s1 & 0xFFFF;
    }

    if ((var_s1 & 0xFFFF) < ((*((u8 *) (((char *) D_801C7AB0) + 2))) - 1))
    {
      goto __repair_rows;
    }
  }
  temp_s0 = var_s1 & 0xFFFF;
  __repair_phase_temp_s0_2 = temp_s0 * 0x10;
  *((&D_802330B0) + __repair_phase_temp_s0_2) = 0;
  *((&D_802330B1) + __repair_phase_temp_s0_2) = 1;
  temp_a0_2 = (void *) ((temp_s0 * 5) + ((s32) arg0));
  *((&D_802330B4) + __repair_phase_temp_s0_2) = ((*((s8 *) (((char *) temp_a0_2) + 4))) * 8) + D_8031445C;
  temp_s0 = (s16) func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, __repair_phase_temp_s0_2 + (&D_802330B0), 0, 0, (((f32) (*((s8 *) (((char *) temp_a0_2) + 2)))) * 400.0f) + 400.0f, (f32) (*((u8 *) (((char *) temp_a0_2) + 1))), (((f32) (*((s8 *) (((char *) temp_a0_2) + 3)))) * 400.0f) + 400.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  *((&D_802330B8) + __repair_phase_temp_s0_2) = (*((u8 *) (((char *) D_801C7AB0) + 2))) + (temp_v0 + 0xFFFE);
  do
  {
    *((&D_802330BA) + __repair_phase_temp_s0_2) = temp_v0;
    *((&D_802330BC) + __repair_phase_temp_s0_2) = 0xFFFF;
    *((&D_802330BE) + __repair_phase_temp_s0_2) = 0xFFFF;
    temp_v1_3 = (temp_s0 & 0xFFFF) * 0x64;
    *((f32 *) (((s8 *) (&D_8011F334)) + temp_v1_3)) = *(__base_D_8011F308 + temp_v1_3);
    *((f32 *) (((s8 *) (&D_8011F338)) + temp_v1_3)) = *((f32 *) (((s8 *) (&D_8011F30C)) + temp_v1_3));
    *((f32 *) (((s8 *) (&D_8011F33C)) + temp_v1_3)) = *((f32 *) (((s8 *) (&D_8011F310)) + temp_v1_3));
  }
  while (0);
}

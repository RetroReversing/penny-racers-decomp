typedef struct 
{
  u8 f0;
  u8 pad[24];
} Slot_8011F2FC;
extern Slot_8011F2FC D_8011F2FC[];
extern u8 D_8011F334[];
extern char D_8011F338[];
extern char D_8011F33C[];
extern char D_80182E20[];
extern char D_8018B530[];
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFF) << 8;
}

void func_8015C8A4(void **arg0, s32 arg1)
{
  f32 temp_fv1;
  f32 temp_fv1_2;
  s32 temp_v0;
  s32 var_a0;
  s32 var_a2;
  s32 var_v0;
  s32 var_v1_2;
  s32 var_v1;
  void *temp_a0;
  void *__repair_phase_temp_a0;
  void *temp_a1;
  void *temp_v1;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  if (__repair_phase_temp_a0)
  {
    var_v1 = arg1 & 0xFFFF;
    temp_fv1 = *((f32 *) (D_8011F334 + (var_v1 * 0x64)));
  }
  else
  {
    var_v1 = arg1 & 0xFFFF;
    temp_fv1 = *((f32 *) (D_8011F334 + (var_v1 * 0x64)));
  }
  if (!(temp_fv1 >= 2.1474836e9f))
  {
    var_a0 = (s32) temp_fv1;
  }
  else
  {
 do { var_a0 = (s32) (temp_fv1 - 2.1474836e9f); var_a0 = var_a0 | 0x80000000; } while (0);
    var_v1 = arg1 & 0xFFFF;
  }
  var_v0 = var_v1 * 2;
  temp_fv1_2 = *((f32 *) (D_8011F338 + ((((var_v0 + var_v1) * 8) + var_v1) * 4)));
  if (!(temp_fv1_2 >= 2.1474836e9f))
  {
    var_v1_2 = arg1 & 0xFFFF;
    var_a2 = (s32) temp_fv1_2;
  }
  else
  {
    var_a2 = (s32) (temp_fv1_2 - 2.1474836e9f);
    do
    {
      var_a2 = var_a2 | 0x80000000;
    }
    while (0);
    var_v1_2 = arg1 & 0xFFFF;
  }
  do
  {
    temp_v0 = var_v1_2 * 25;
  }
  while (0);
  temp_a0 = *arg0;
  *arg0 = temp_a0 + 8;
  *((s32 *) (((char *) temp_a0) + 0)) = 0xFA000000;
  *((s32 **) (((char *) temp_a0) + 4)) = (s32 *) D_8011F2FC[var_v1_2].f0;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xFD900000;
  *((s32 **) (((char *) temp_v1) + 4)) = D_80182E20;
  __repair_phase_temp_a0 = *arg0;
  *arg0 = __repair_phase_temp_a0 + 8;
  *((s32 *) (((char *) __repair_phase_temp_a0) + 0)) = 0xF5900000;
  *((s32 **) (((char *) __repair_phase_temp_a0) + 4)) = (s32 *) 0x07080200;
  temp_v1_3 = *arg0;
  *arg0 = temp_v1_3 + 8;
  *((s32 *) (((char *) temp_v1_3) + 0)) = 0xE6000000;
  *((s32 **) (((char *) temp_v1_3) + 4)) = NULL;
  do { temp_v1_4 = *arg0;
  *arg0 = temp_v1_4 + 8;
  *((s32 *) (((char *) temp_v1_4) + 0)) = 0xF3000000;
  *((s32 **) (((char *) temp_v1_4) + 4)) = (s32 *) 0x07007400;
  temp_v1_5 = *arg0;
  *arg0 = temp_v1_5 + 8;
  *((s32 *) (((char *) temp_v1_5) + 0)) = 0xE7000000;
  *((s32 **) (((char *) temp_v1_5) + 4)) = NULL;
  temp_v1_6 = *arg0;
  *arg0 = temp_v1_6 + 8; } while (0);
  *((s32 *) (((char *) temp_v1_6) + 0)) = 0xF5800400;
  *((s32 **) (((char *) temp_v1_6) + 4)) = (s32 *) 0x80200;
  temp_v1_7 = *arg0;
  *arg0 = temp_v1_7 + 8;
  *((s32 *) (((char *) temp_v1_7) + 0)) = 0xF2000000;
  *((s32 **) (((char *) temp_v1_7) + 4)) = (s32 *) 0x7C000;
  temp_a1 = *arg0;
  *arg0 = temp_a1 + 8;
  *((s32 *) (((char *) temp_a1) + 0)) = 0x0400103F;
  *((s32 **) (((char *) temp_a1) + 4)) = (s32 *) (inline_fn(var_a0) + (((var_a2 & 0xFF) << 6) + D_8018B530));
  if ((*((f32 *) (D_8011F33C + temp_v0))) >= 0.0f)
  {
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    *((s32 *) (((char *) temp_v1_8) + 0)) = 0xB1000204;
    *((s32 *) (((char *) (*arg0)) + 4)) = 0x20604;
  }
  else
  {
    temp_v1_9 = *arg0;
    *arg0 = temp_v1_9 + 8;
    if (0)
    {
    }
    do
    {
      *((s32 *) (((char *) temp_v1_9) + 0)) = 0xB1000402;
    }
    while (0);
    *((s32 *) (((char *) (*arg0)) + 4)) = 0x20406;
  }
}

extern unsigned short D_8006FB10;
f32 sqrtf();
extern char D_8006FAF0[];
extern volatile unsigned short D_8011F308[];
extern short D_8011F310[];
extern void *D_801C7AB0;
extern u8 D_802352CC[];
extern char D_80235300[];
extern char D_80235620[];
extern char D_80235940[];
inline static char inline_fn(char *arg0)
{
  return *arg0;
}

void func_80223DB0(void *arg0)
{
  char *__base_D_80235300;
  int pad;
  f32 temp_fa0;
  f32 temp_ft0;
  f32 temp_fv0;
  f32 var_fv0;
  s32 temp_a0_2;
  s32 __repair_phase_temp_a0_2;
  s32 temp_v0_2;
  s32 var_v0;
  u16 temp_a0;
  u8 temp_v1_2;
  void *temp_v1;
  temp_a0_2 = *((s32 *) (((char *) arg0) + 0x8DC)); do { do { do { temp_v1 = ((*((s32 *) (((*((u8 *) (((char *) arg0) + 0x597))) * 2) + (*(D_802352CC + (D_8006FB10 * 4)))))) * 0x6C) + temp_a0_2; } while (0); } while (0); } while (0);
  __repair_phase_temp_a0_2 = (u16) (*((u16 *) (((char *) arg0) + 2)));
  do { temp_a0_2 = __repair_phase_temp_a0_2 * 0x64; } while (0);
  temp_ft0 = (*((f32 *) (D_8011F308 + temp_a0_2))) - (((*((f32 *) (((char *) temp_v1) + 0x28))) * 50.0f) + (*((f32 *) (((char *) temp_v1) + 0))));
  do { temp_fv0 = (*((f32 *) (D_8011F310 + temp_a0_2))) - (((*((f32 *) (((char *) temp_v1) + 0x2C))) * 50.0f) + (*((f32 *) (((char *) temp_v1) + 4)))); } while (0);
  temp_fa0 = (temp_fv0 * temp_fv0) + (temp_ft0 * temp_ft0);
  var_fv0 = sqrtf(temp_fa0);
  if (var_fv0 != var_fv0)
  {
    var_fv0 = sqrtf(temp_fa0);
  }
  if (D_801C7AB0)
  {
    *((f32 *) (((char *) arg0) + 0x598)) = var_fv0;
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x598)) = var_fv0;
  }
  if ((D_8006FB10 == 0) && ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 6))
  {
    s32 temp_a0_2_arm;
    temp_v1_2 = *((u8 *) (((char *) arg0) + 0x879));
    if (temp_v1_2 != 0)
    {
      var_v0 = 0x12C;
      do
      {
        if (temp_v1_2 != 4)
        {
          if (arg0)
          {
            return;
          }
          else
          {
            return;
          }
        }
        goto block_9;
      }
      while (0);
    }
    do
    {
      temp_a0_2_arm = (*((u8 *) (((char *) arg0) + 0x597))) * 4;
    }
    while (0);
    __base_D_80235300 = D_80235300;
    *((s32 *) (((char *) arg0) + 0x59C)) = (s32) (((s32) (*((f32 *) (D_80235620 + temp_a0_2_arm)))) + ((s32) (((*((f32 *) (D_80235940 + temp_a0_2_arm))) - (*((f32 *) (((char *) arg0) + 0x598)))) * inline_fn(__base_D_80235300 + temp_a0_2_arm))));
    return;
  }
  temp_a0_2 = (*((u8 *) (((char *) arg0) + 0x597))) * 4;
  var_v0 = (((*((s16 *) (((char *) arg0) + 0x594))) * 0x64) + ((s32) (*((f32 *) (D_80235620 + temp_a0_2))))) + ((s32) (((*((f32 *) (D_80235940 + temp_a0_2))) - (*((f32 *) (((char *) arg0) + 0x598)))) * (*(__base_D_80235300 + temp_a0_2))));
  block_9:
  *((s32 *) (((char *) arg0) + 0x59C)) = var_v0;

}


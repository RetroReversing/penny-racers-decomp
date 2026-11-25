/* Draft from identical target func_801C1680, retargeted and judged independently. */
extern s32 D_800E1C00;
extern s32 D_8011F330;
extern s32 D_80167FB8;
extern s32 D_8031B5F8;
extern s32 D_8031C400;
void func_801C10FC(void **arg0, s32 arg1)
{
  char temp_v0;
  unsigned char var_t1;
  unsigned short temp_a1_2;
  s32 temp_v0_2;
  unsigned int temp_v1;
  void *temp_a1;
  void *temp_a3;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v1_11;
  void *temp_v1_12;
  void *temp_v1_13;
  void *temp_v1_14;
  void *temp_v1_15;
  void *temp_v1_16;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *__repair_phase_temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *__repair_phase_temp_v1_8;
  void *temp_v1_9;
  if (arg0)
  {
    temp_v1 = *((u16 *) (((s8 *) (&D_8011F330)) + ((arg1 & 0xFFFF) * 0x64)));
  }
  else
  {
    temp_v1 = *((u16 *) (((s8 *) (&D_8011F330)) + ((arg1 & 0xFFFF) * 0x64)));
  }
  if (temp_v1 != 0)
  {
    var_t1 = 0;
    if (temp_v1 != 1)
    {
      return;
    }
    if (!(temp_v1_16 || arg0))
    {
      void *temp_v1_3;
      void *temp_v1_2;
      temp_v1_2 = *arg0;
      *arg0 = temp_v1_2 + 8;
      *((s32 *) (((char *) temp_v1_2) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1_2) + 4)) = &D_800E1C00;
      temp_v1_3 = *arg0;
      *arg0 = temp_v1_3 + 8;
      *((s32 *) (((char *) temp_v1_3) + 0)) = 0xB6000000;
      *((s32 **) (((char *) temp_v1_3) + 4)) = (s32 *) 0x2000;
      temp_v1_4 = *arg0;
      *arg0 = temp_v1_4 + 8;
      *((s32 *) (((char *) temp_v1_4) + 0)) = 0xFD100000;
      *((s32 **) (((char *) temp_v1_4) + 4)) = &D_8031C400;
      temp_v1_5 = *arg0;
      *arg0 = temp_v1_5 + 8;
      *((s32 *) (((char *) temp_v1_5) + 0)) = 0xE8000000;
      *((s32 **) (((char *) temp_v1_5) + 4)) = NULL;
      __repair_phase_temp_v1_6 = *arg0;
      *arg0 = __repair_phase_temp_v1_6 + 8;
      *((s32 *) (((char *) __repair_phase_temp_v1_6) + 0)) = 0xF5000100;
      *((s32 **) (((char *) __repair_phase_temp_v1_6) + 4)) = (s32 *) 0x07000000;
      temp_v1_7 = *arg0;
      *arg0 = temp_v1_7 + 8;
      *((s32 *) (((char *) temp_v1_7) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_7) + 4)) = NULL;
      __repair_phase_temp_v1_8 = *arg0;
      *arg0 = __repair_phase_temp_v1_8 + 8;
      *((s32 *) (((char *) __repair_phase_temp_v1_8) + 0)) = 0xF0000000;
      *((s32 **) (((char *) __repair_phase_temp_v1_8) + 4)) = (s32 *) 0x0703C000;
      temp_v1_9 = *arg0;
      *arg0 = temp_v1_9 + 8;
      *((s32 *) (((char *) temp_v1_9) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_9) + 4)) = NULL;
      __repair_phase_storage.pointer = *arg0;
      *arg0 = __repair_phase_storage.pointer + 8;
      *((s32 *) (((char *) __repair_phase_storage.pointer) + 0)) = 0x040040FF;
      *((s32 **) (((char *) __repair_phase_storage.pointer) + 4)) = &D_80167FB8;
    }
    else
    {
      void *temp_v1_3;
      void *temp_v1_2;
      temp_v1_2 = *arg0;
      *arg0 = temp_v1_2 + 8;
      *((s32 *) (((char *) temp_v1_2) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1_2) + 4)) = &D_800E1C00;
      temp_v1_3 = *arg0;
      *arg0 = temp_v1_3 + 8;
      *((s32 *) (((char *) temp_v1_3) + 0)) = 0xB6000000;
      *((s32 **) (((char *) temp_v1_3) + 4)) = (s32 *) 0x2000;
      temp_v1_4 = *arg0;
      *arg0 = temp_v1_4 + 8;
      *((s32 *) (((char *) temp_v1_4) + 0)) = 0xFD100000;
      *((s32 **) (((char *) temp_v1_4) + 4)) = &D_8031C400;
      temp_v1_5 = *arg0;
      *arg0 = temp_v1_5 + 8;
      *((s32 *) (((char *) temp_v1_5) + 0)) = 0xE8000000;
      *((s32 **) (((char *) temp_v1_5) + 4)) = NULL;
      temp_v1_6 = *arg0;
      *arg0 = temp_v1_6 + 8;
      *((s32 *) (((char *) temp_v1_6) + 0)) = 0xF5000100;
      *((s32 **) (((char *) temp_v1_6) + 4)) = (s32 *) 0x07000000;
      temp_v1_7 = *arg0;
      *arg0 = temp_v1_7 + 8;
      *((s32 *) (((char *) temp_v1_7) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_7) + 4)) = NULL;
      temp_v1_8 = *arg0;
      *arg0 = temp_v1_8 + 8;
      *((s32 *) (((char *) temp_v1_8) + 0)) = 0xF0000000;
      *((s32 **) (((char *) temp_v1_8) + 4)) = (s32 *) 0x0703C000;
      temp_v1_9 = *arg0;
      *arg0 = temp_v1_9 + 8;
      *((s32 *) (((char *) temp_v1_9) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_9) + 4)) = NULL;
      __repair_phase_storage.pointer = *arg0;
      *arg0 = __repair_phase_storage.pointer + 8;
      *((s32 *) (((char *) __repair_phase_storage.pointer) + 0)) = 0x040040FF;
      *((s32 **) (((char *) __repair_phase_storage.pointer) + 4)) = &D_80167FB8;
    }
    do
    {
      temp_v1_11 = *arg0;
      *arg0 = temp_v1_11 + 8;
      *((s32 *) (((char *) temp_v1_11) + 0)) = 0xFD48006F;
      do
      {
        *((s32 **) (((char *) temp_v1_11) + 4)) = &D_8031B5F8; temp_v1_12 = *arg0;
      }
      while (0);
      *arg0 = temp_v1_12 + 8;
      *((s32 *) (((char *) temp_v1_12) + 0)) = 0xF5480400;
      *((s32 **) (((char *) temp_v1_12) + 4)) = (s32 *) 0x07080200;
      temp_v1_13 = *arg0;
      *arg0 = temp_v1_13 + 8;
      *((s32 *) (((char *) temp_v1_13) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_13) + 4)) = NULL;
      temp_v1_14 = *arg0;
      *arg0 = temp_v1_14 + 8;
      *((s32 *) (((char *) temp_v1_14) + 0)) = (s32) ((((var_t1 << 6) & 0xFFF) << 0xC) | 0xF4000000);
      __repair_phase_storage.value = (var_t1 << 5) + 0x1F;
      *((s32 **) (((char *) temp_v1_14) + 4)) = (s32 *) ((((__repair_phase_storage.value * 2) & 0xFFF) << 0xC) | 0x0700007C);
      temp_v1_15 = *arg0;
      *arg0 = temp_v1_15 + 8;
      *((s32 *) (((char *) temp_v1_15) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_15) + 4)) = NULL;
      temp_v1_16 = *arg0;
      *arg0 = temp_v1_16 + 8;
      *((s32 *) (((char *) temp_v1_16) + 0)) = 0xF5400400;
      *((s32 **) (((char *) temp_v1_16) + 4)) = (s32 *) 0x80200;
      temp_a1 = *arg0;
      *arg0 = temp_a1 + 8;
 do { *((s32 *) (((char *) temp_a1) + 0)) = (s32) ((((var_t1 << 7) & 0xFFF) << 0xC) | 0xF2000000); temp_a3 = *arg0; do { *((s32 **) (((char *) temp_a1) + 4)) = (s32 *) ((((__repair_phase_storage.value * 4) & 0xFFF) << 0xC) | 0x7C); *arg0 = temp_a3 + 8; do { temp_a1_2 = ((var_t1 + 8) << 9) & 0xFE00; } while (0); ; *((s32 *) (((char *) temp_a3) + 0)) = (s32) ((((((var_t1 * 2) & 0xFF) << 0x10) | (((var_t1 + 8) << 9) & 0xFE00)) | (((var_t1 + 1) * 2) & 0xFF)) | 0xB1000000); do { *((s32 **) (((char *) temp_a3) + 4)) = (s32 *) ((((((var_t1 + 1) * 2) & 0xFF) << 0x10) | (((var_t1 + 8) << 9) & 0xFE00)) | (((var_t1 + 9) * 2) & 0xFF)); do { temp_v0 = var_t1 + 1; } while (0); } while (0); } while (0); var_t1 = temp_v0; } while (0);
    }
    while (temp_v0 < 7);
    return;
  }
  *((s16 *) (((s8 *) (&D_8011F330)) + ((arg1 & 0xFFFF) * 0x64))) = 1;
}

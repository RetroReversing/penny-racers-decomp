extern s32 D_8006FAF0;
extern s32 D_800E1AE0;
extern s32 D_800E1C00;
extern s32 D_8011F330;
extern s32 D_80167FB8;
extern s32 D_801680C8;
extern s32 D_801680F0;
void func_8013CBBC(void **arg0, s32 arg1)
{
  s16 temp_v0;
  s16 var_t1;
  s32 temp_a0;
  s32 temp_a1_3;
  s32 temp_v0_2;
  u16 temp_v1;
  void *temp_a1;
  void *temp_a1_2;
  void *temp_a3;
  void *temp_v1_10;
  void *temp_v1_11;
  void *temp_v1_12;
  void *temp_v1_13;
  void *temp_v1_14;
  void *temp_v1_15;
  void *temp_v1_16;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  temp_v1 = *((&D_8011F330) + ((arg1 & 0xFFFF) * 0x64));
  switch (temp_v1)
  {
    case 0:
      *((&D_8011F330) + ((arg1 & 0xFFFF) * 0x64)) = 1;
      return;

    case 1:
      if ((((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) == 2) | ((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) == 7)) != 0)
    {
      temp_v1_2 = *arg0;
      *arg0 = temp_v1_2 + 8;
      *((s32 *) (((char *) temp_v1_2) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1_2) + 4)) = &D_800E1AE0;
    }
    else
    {
      temp_v1_3 = *arg0;
      *arg0 = temp_v1_3 + 8;
      *((s32 *) (((char *) temp_v1_3) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1_3) + 4)) = &D_800E1C00;
    }
      temp_v1_4 = *arg0;
      *arg0 = temp_v1_4 + 8;
      *((s32 *) (((char *) temp_v1_4) + 0)) = 0xB6000000;
      *((s32 **) (((char *) temp_v1_4) + 4)) = (s32 *) 0x2000;
      temp_v1_5 = *arg0;
      *arg0 = temp_v1_5 + 8;
      *((s32 *) (((char *) temp_v1_5) + 0)) = 0xFD100000;
      *((s32 **) (((char *) temp_v1_5) + 4)) = (s32 *) (*((&D_801680C8) + ((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) * 4)));
      temp_v1_6 = *arg0;
      *arg0 = temp_v1_6 + 8;
      *((s32 *) (((char *) temp_v1_6) + 0)) = 0xE8000000;
      *((s32 **) (((char *) temp_v1_6) + 4)) = NULL;
      temp_v1_7 = *arg0;
      *arg0 = temp_v1_7 + 8;
      *((s32 *) (((char *) temp_v1_7) + 0)) = 0xF5000100;
      *((s32 **) (((char *) temp_v1_7) + 4)) = (s32 *) 0x07000000;
      temp_v1_8 = *arg0;
      *arg0 = temp_v1_8 + 8;
      *((s32 *) (((char *) temp_v1_8) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_8) + 4)) = NULL;
      temp_v1_9 = *arg0;
      *arg0 = temp_v1_9 + 8;
      *((s32 *) (((char *) temp_v1_9) + 0)) = 0xF0000000;
      *((s32 **) (((char *) temp_v1_9) + 4)) = (s32 *) 0x0703C000;
      temp_v1_10 = *arg0;
      *arg0 = temp_v1_10 + 8;
      *((s32 *) (((char *) temp_v1_10) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_10) + 4)) = NULL;
      temp_v1_11 = *arg0;
      *arg0 = temp_v1_11 + 8;
      *((s32 *) (((char *) temp_v1_11) + 0)) = 0x040040FF;
      *((s32 **) (((char *) temp_v1_11) + 4)) = &D_80167FB8;
      var_t1 = 0;
      do
    {
      temp_v1_12 = *arg0;
      *arg0 = temp_v1_12 + 8;
      *((s32 *) (((char *) temp_v1_12) + 0)) = 0xFD48006F;
      *((s32 **) (((char *) temp_v1_12) + 4)) = (s32 *) (*(((*((u16 *) (((char *) (&D_8006FAF0)) + 0x20))) * 4) + (&D_801680F0)));
      temp_v1_13 = *arg0;
      *arg0 = temp_v1_13 + 8;
      *((s32 *) (((char *) temp_v1_13) + 0)) = 0xF5480400;
      *((s32 **) (((char *) temp_v1_13) + 4)) = (s32 *) 0x07080200;
      temp_v1_14 = *arg0;
      *arg0 = temp_v1_14 + 8;
      *((s32 *) (((char *) temp_v1_14) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_14) + 4)) = NULL;
      temp_a1 = *arg0;
      *arg0 = temp_a1 + 8;
      *((s32 *) (((char *) temp_a1) + 0)) = (s32) ((((var_t1 << 6) & 0xFFF) << 0xC) | 0xF4000000);
      temp_a0 = (var_t1 << 5) + 0x1F;
      *((s32 **) (((char *) temp_a1) + 4)) = (s32 *) ((((temp_a0 * 2) & 0xFFF) << 0xC) | 0x0700007C);
      temp_v1_15 = *arg0;
      *arg0 = temp_v1_15 + 8;
      *((s32 *) (((char *) temp_v1_15) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_15) + 4)) = NULL;
      temp_v1_16 = *arg0;
      *arg0 = temp_v1_16 + 8;
      *((s32 *) (((char *) temp_v1_16) + 0)) = 0xF5400400;
      *((s32 **) (((char *) temp_v1_16) + 4)) = (s32 *) 0x80200;
      temp_a1_2 = *arg0;
      *arg0 = temp_a1_2 + 8;
      *((s32 *) (((char *) temp_a1_2) + 0)) = (s32) ((((var_t1 << 7) & 0xFFF) << 0xC) | 0xF2000000);
      *((s32 **) (((char *) temp_a1_2) + 4)) = (s32 *) ((((temp_a0 * 4) & 0xFFF) << 0xC) | 0x7C);
      temp_a3 = *arg0;
      *arg0 = temp_a3 + 8;
      temp_a1_3 = ((var_t1 + 8) << 9) & 0xFE00;
      temp_v0_2 = ((var_t1 + 1) * 2) & 0xFF;
      *((s32 *) (((char *) temp_a3) + 0)) = (s32) ((((((var_t1 * 2) & 0xFF) << 0x10) | temp_a1_3) | (((var_t1 + 1) * 2) & 0xFF)) | 0xB1000000);
      *((s32 **) (((char *) temp_a3) + 4)) = (s32 *) ((((((var_t1 + 1) * 2) & 0xFF) << 0x10) | temp_a1_3) | (((var_t1 + 9) * 2) & 0xFF));
      temp_v0 = var_t1 + 1;
      var_t1 = temp_v0;
    }
    while (temp_v0 < 7);
      return;

  }

}


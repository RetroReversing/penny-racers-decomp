s32 func_801CE7D0(void **, u16);
extern s32 D_800DB1B8;
extern s32 D_8011F330;
extern s32 D_8011F350;
extern u8 D_80126FF6;
extern s32 D_801D5590;
extern s32 D_80220ED8;
inline static void **inline_fn(void **arg0)
{
  return arg0;
}

void func_801CEC2C(void **arg0, u16 arg1)
{
  int temp_fp;
  s16 temp_s3;
  s16 temp_s4;
  s16 temp_s5;
  s16 temp_v0;
  s16 temp_v1_12;
  s16 var_a3;
  s16 var_a3_2;
  s16 var_t5;
  s32 temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a1_3;
  s32 temp_a1_5;
  s32 temp_a2_2;
  s32 temp_a2_5;
  s32 temp_a3;
  s32 temp_a3_2;
  char temp_s1;
  s32 temp_t0;
  s32 temp_t0_3;
  s32 temp_t1;
  s32 temp_t1_2;
  s32 temp_t2;
  s32 var_v1;
  u16 temp_v1_2;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_a0_2;
  void *__repair_phase_temp_a0_2;
  void *temp_a1;
  void *temp_a1_2;
  void *temp_a1_4;
  void *temp_a2_3;
  void *temp_t0_2;
  void *temp_t0_4;
  void *temp_v0_2;
  void *temp_v0_3;
  void *temp_v0_5;
  void *temp_v0_6;
  void *temp_v0_7;
  void *temp_v1;
  void *temp_v1_10;
  void *temp_v1_11;
  void *temp_v1_13;
  void *temp_v1_14;
  void *temp_v1_15;
  void *temp_v1_16;
  void *temp_v1_17;
  void *temp_v1_18;
  void *temp_v1_19;
  void *temp_v1_20;
  void *temp_v1_21;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  if (D_80126FF6 == ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) - 1))
  {
    if (arg0 || temp_v1_14)
    {
      temp_v1 = *arg0;
      *arg0 = temp_v1 + 8;
      *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1) + 4)) = &D_80220ED8;
      temp_v1_2 = *((u16 *) (((s8 *) (&D_8011F330)) + (arg1 * 0x64)));
    }
    else
    {
      temp_v1 = *arg0;
      *arg0 = temp_v1 + 8;
      *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1) + 4)) = &D_80220ED8;
      temp_v1_2 = *((u16 *) (((s8 *) (&D_8011F330)) + (arg1 * 0x64)));
    }
    if (temp_v1_2 != 0)
    {
      var_v1 = arg1;
      if (temp_v1_2 != 1)
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
      goto block_5;
    }
    *((s16 *) (((s8 *) (&D_8011F330)) + (arg1 * 0x64))) = 1;
    var_v1 = arg1;
    block_5:
    temp_s1 = var_v1 * 0x64;

    __repair_phase_storage.pointer = *((s32 *) (((s8 *) (&D_8011F350)) + temp_s1));
    temp_fp = (*((u16 *) (((char *) __repair_phase_storage.pointer) + 0xE))) / 80;
    temp_s4 = (*((u16 *) (((char *) __repair_phase_storage.pointer) + 0xE))) % 80;
    temp_s5 = (*((u16 *) (((char *) __repair_phase_storage.pointer) + 0x10))) % 24;
    temp_s3 = (*((u16 *) (((char *) __repair_phase_storage.pointer) + 0x10))) / 24;
    if ((*((u8 *) (((char *) __repair_phase_storage.pointer) + 9))) != 0)
    {
      func_801CE7D0(arg0, *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x10)));
      if ((*((u8 *) (((char *) (*((s32 *) (((s8 *) (&D_8011F350)) + temp_s1)))) + 9))) == 0xFF)
      {
        temp_v1_3 = *arg0;
        *arg0 = temp_v1_3 + 8;
        *((s32 *) (((char *) temp_v1_3) + 0)) = 0xB900031D;
        *((s32 *) (((char *) (*arg0)) + 4)) = 0x0F0A4000;
      }
      else
      {
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        *((s32 *) (((char *) temp_v1_4) + 0)) = 0xB900031D;
        *((s32 *) (((char *) (*arg0)) + 4)) = 0x504340;
      }
      temp_a1 = *arg0;
      *arg0 = temp_a1 + 8;
      *((s32 *) (((char *) temp_a1) + 0)) = 0xFA000000;
      temp_a0_2 = *((s32 *) (((s8 *) (&D_8011F350)) + (arg1 * 0x64)));
      *((s32 **) (((char *) temp_a1) + 4)) = (s32 *) (((((*((u8 *) (((char *) temp_a0_2) + 6))) << 0x18) | ((*((u8 *) (((char *) temp_a0_2) + 7))) << 0x10)) | ((*((u8 *) (((char *) temp_a0_2) + 8))) << 8)) | (*((u8 *) (((char *) temp_a0_2) + 9))));
      temp_v1_5 = *arg0;
      *arg0 = temp_v1_5 + 8;
      *((s32 *) (((char *) temp_v1_5) + 0)) = 0xFD900000;
      *((s32 **) (((char *) temp_v1_5) + 4)) = &D_801D5590;
      temp_v1_6 = *arg0;
      *arg0 = temp_v1_6 + 8;
      *((s32 *) (((char *) temp_v1_6) + 0)) = 0xF5900000;
      *((s32 **) (((char *) temp_v1_6) + 4)) = (s32 *) 0x07080200;
      temp_v1_7 = *arg0;
      *arg0 = temp_v1_7 + 8;
      *((s32 *) (((char *) temp_v1_7) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_7) + 4)) = NULL;
      temp_v1_8 = *arg0;
      *arg0 = temp_v1_8 + 8;
 do { *((s32 *) (((char *) temp_v1_8) + 0)) = 0xF3000000; *((s32 **) (((char *) temp_v1_8) + 4)) = (s32 *) 0x071DF19A; temp_v1_9 = *arg0; } while (0);
      *arg0 = temp_v1_9 + 8;
      *((s32 *) (((char *) temp_v1_9) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_9) + 4)) = NULL;
      temp_v1_10 = *arg0;
      *arg0 = temp_v1_10 + 8;
      *((s32 *) (((char *) temp_v1_10) + 0)) = 0xF5800A00;
      *((s32 **) (((char *) temp_v1_10) + 4)) = (s32 *) 0x80200;
      temp_v1_11 = *arg0;
      *arg0 = temp_v1_11 + 8;
      *((s32 *) (((char *) temp_v1_11) + 0)) = 0xF2000000;
      *((s32 **) (((char *) temp_v1_11) + 4)) = (s32 *) 0x13C05C;
    }
    if ((*((u8 *) (((char *) (*((s32 *) (((s8 *) (&D_8011F350)) + (arg1 * 0x64))))) + 9))) != 0)
    {
      var_t5 = 0;
      if ((temp_s3 << 0x10) > 0)
      {
        ;
        __repair_phase_storage.value = arg1 * 0x19;
        __repair_rows:
        {
          var_a3 = 0;
          if (0 < (temp_fp << 0x10))
          {
            temp_t0 = __repair_phase_storage.value * 4;
            temp_t1 = var_t5 * 0x18;
            do
            {
              __repair_phase_temp_a0_2 = *arg0;
              *arg0 = __repair_phase_temp_a0_2 + 8;
              temp_a1_2 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_t0));
              temp_a0_3 = var_a3 * 0x50;
              *((s32 *) (((char *) __repair_phase_temp_a0_2) + 0)) = (s32) ((((((*((u16 *) (((char *) temp_a1_2) + 0xA))) + (temp_a0_3 + 0x50)) * 4) & 0xFFF) << 0xC) | (((((*((u16 *) (((char *) temp_a1_2) + 0xC))) + (temp_t1 + 0x18)) * 4) & 0xFFF) | 0xE4000000));
              temp_v0_2 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_t0));
              *((s32 **) (((char *) __repair_phase_temp_a0_2) + 4)) = (s32 *) ((((((*((u16 *) (((char *) temp_v0_2) + 0xA))) + temp_a0_3) * 4) & 0xFFF) << 0xC) | ((((*((u16 *) (((char *) temp_v0_2) + 0xC))) + temp_t1) * 4) & 0xFFF));
              temp_v1_13 = *arg0;
              *arg0 = temp_v1_13 + 8;
              *((s32 *) (((char *) temp_v1_13) + 0)) = 0xB4000000;
              *((s32 **) (((char *) temp_v1_13) + 4)) = NULL;
              temp_v1_14 = *arg0;
              *arg0 = temp_v1_14 + 8;
              *((s32 *) (((char *) temp_v1_14) + 0)) = 0xB3000000;
              do
              {
                temp_v0 = var_a3 + 1;
              }
              while (0);
              var_a3 = temp_v0;
              *((s32 **) (((char *) temp_v1_14) + 4)) = (s32 *) 0x04000400;
            }
            while (temp_v0 < temp_fp);
          }
          if (temp_s4 != 0)
          {
            temp_t0_2 = *arg0;
            *arg0 = temp_t0_2 + 8;
            temp_a1_3 = temp_t2 * 0x64;
            ;
            temp_a2_2 = var_t5 * 0x18;
            temp_v1_15 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_a1_3));
            *((s32 *) (((char *) temp_t0_2) + 0)) = (s32) ((((((temp_s4 + (*((u16 *) (((char *) temp_v1_15) + 0xA)))) + (var_a3 * 0x50)) * 4) & 0xFFF) << 0xC) | (((((*((u16 *) (((char *) temp_v1_15) + 0xC))) + (temp_a2_2 + 0x18)) * 4) & 0xFFF) | 0xE4000000));
            temp_v0_3 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_a1_3));
            *((s32 **) (((char *) temp_t0_2) + 4)) = (s32 *) ((((((*((u16 *) (((char *) temp_v0_3) + 0xA))) + (var_a3 * 0x50)) * 4) & 0xFFF) << 0xC) | ((((*((u16 *) (((char *) temp_v0_3) + 0xC))) + temp_a2_2) * 4) & 0xFFF));
            temp_v1_16 = *arg0;
            *arg0 = temp_v1_16 + 8;
            *((s32 *) (((char *) temp_v1_16) + 0)) = 0xB4000000;
            *((s32 **) (((char *) temp_v1_16) + 4)) = NULL;
            temp_v1_17 = *arg0;
            *arg0 = temp_v1_17 + 8;
            *((s32 *) (((char *) temp_v1_17) + 0)) = 0xB3000000;
            *((s32 **) (((char *) temp_v1_17) + 4)) = (s32 *) 0x04000400;
          }
          temp_v1_12 = var_t5 + 1;
          var_t5 = temp_v1_12;
        }

        if (temp_v1_12 < temp_s3)
        {
          goto __repair_rows;
        }
      }
      if ((temp_s5 << 0x10) != 0)
      {
        var_a3_2 = 0;
        if ((temp_fp << 0x10) > 0)
        {
          {
            if (1)
            {
            }
            temp_t1_2 = arg1 * 0x64;
          }
          temp_t0_3 = var_t5 * 0x18;
          do
          {
            temp_a2_3 = *arg0;
            *arg0 = temp_a2_3 + 8;
            temp_a1_4 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_t1_2));
            temp_a0_4 = var_a3_2 * 0x50;
            *((s32 *) (((char *) temp_a2_3) + 0)) = (s32) (((((((*((u16 *) (((char *) temp_a1_4) + 0xA))) + (temp_a0_4 + 0x50)) * 4) & 0xFFF) << 3) << 9) | (((((temp_s5 + (*((u16 *) (((char *) temp_a1_4) + 0xC)))) + temp_t0_3) * 4) & 0xFFF) | 0xE4000000));
            temp_v0_5 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_t1_2));
            *((s32 **) (((char *) temp_a2_3) + 4)) = (s32 *) ((((((*((u16 *) (((char *) temp_v0_5) + 0xA))) + temp_a0_4) * 4) & 0xFFF) << 0xC) | ((((*((u16 *) (((char *) temp_v0_5) + 0xC))) + temp_t0_3) * 4) & 0xFFF));
            temp_v1_18 = *arg0;
            *arg0 = temp_v1_18 + 8;
            *((s32 *) (((char *) temp_v1_18) + 0)) = 0xB4000000;
            *((s32 **) (((char *) temp_v1_18) + 4)) = NULL;
            temp_v1_19 = *arg0;
            *arg0 = temp_v1_19 + 8;
            *((s32 *) (((char *) temp_v1_19) + 0)) = 0xB3000000;
            do
            {
              temp_s3 = var_a3_2 + 1;
            }
            while (0);
            var_a3_2 = temp_s3;
            *((s32 **) (((char *) temp_v1_19) + 4)) = (s32 *) 0x04000400;
          }
          while (temp_s3 < temp_fp);
        }
        if (temp_s4 != 0)
        {
          if (temp_a1_3)
          {
            temp_t0_4 = *inline_fn(arg0);
            *arg0 = temp_t0_4 + 8;
            temp_a1_5 = arg1 * 0x64;
          }
          else
          {
            temp_t0_4 = *inline_fn(arg0);
            *arg0 = temp_t0_4 + 8;
            temp_a1_5 = arg1 * 0x64;
          }
          {
            temp_a2_5 = var_t5 * 0x18; temp_a0_2 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_a1_5));
          }
          ;
          *((s32 *) (((char *) temp_t0_4) + 0)) = (s32) ((((((temp_s4 + (*((u16 *) (((char *) temp_a0_2) + 0xA)))) + (var_a3_2 * 0x50)) * 4) & 0xFFF) << 0xC) | (((((temp_s5 + (*((u16 *) (((char *) temp_a0_2) + 0xC)))) + temp_a2_5) * 4) & 0xFFF) | 0xE4000000));
          temp_v0_6 = *((s32 *) (((s8 *) (&D_8011F350)) + temp_a1_5));
          *((s32 **) (((char *) temp_t0_4) + 4)) = (s32 *) ((((((*((u16 *) (((char *) temp_v0_6) + 0xA))) + (var_a3_2 * 0x50)) * 4) & 0xFFF) << 0xC) | ((((*((u16 *) (((char *) temp_v0_6) + 0xC))) + temp_a2_5) * 4) & 0xFFF));
          temp_v1_20 = *arg0;
          *arg0 = temp_v1_20 + 8;
          *((s32 *) (((char *) temp_v1_20) + 0)) = 0xB4000000;
          *((s32 **) (((char *) temp_v1_20) + 4)) = NULL;
          temp_v1_21 = *arg0;
          *arg0 = temp_v1_21 + 8;
          *((s32 *) (((char *) temp_v1_21) + 0)) = 0xB3000000;
          *((s32 **) (((char *) temp_v1_21) + 4)) = (s32 *) 0x04000400;
        }
      }
      temp_v0_7 = *arg0;
      *arg0 = temp_v0_7 + 8;
      *((s32 *) (((char *) temp_v0_7) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v0_7) + 4)) = NULL;
    }
  }
}

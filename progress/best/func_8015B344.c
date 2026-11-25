extern s32 D_80046834;
extern char D_800DE080[];
extern char D_800E18A0[];
extern char D_8011F32E[];
extern char D_8011F330[];
extern char D_80187D00[];
extern char D_80189930[];
extern unsigned int D_802F94E8[];
extern char D_80301BE0[];
typedef struct 
{
  unsigned char pad[100];
  void *value;
} __repair_field_64;
inline static void *inline_fn(void *arg0)
{
  return arg0 + 8;
}

void func_8015B344(void **arg0, volatile long arg1)
{
  char *__base_D_80187D00;
  s16 temp_a1_2;
  s16 temp_a2;
  s32 temp_a1_3;
  s32 temp_a2_2;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  s32 temp_v0;
  s32 temp_v0_2;
  short temp_v1;
  volatile unsigned int temp_v1_12;
  s32 temp_v1_27;
  s32 temp_v1_28;
  s32 var_t0;
  s32 var_t1;
  void *temp_a1;
  void *temp_a1_4;
  void *temp_v1_10;
  void *temp_v1_11;
  void *temp_v1_13;
  void *temp_v1_14;
  void *temp_v1_15;
  void *temp_v1_16;
  void *temp_v1_17;
  register void *temp_v1_18;
  void *temp_v1_19;
  void *temp_v1_20;
  void *temp_v1_21;
  void *temp_v1_22;
  void *temp_v1_23;
  void *temp_v1_24;
  void *temp_v1_25;
  void *temp_v1_26;
  void *temp_v1_2;
  s32 temp_t2;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  temp_a1_3 = arg1 & 0xFFFF; temp_v1 = temp_a1_3 * 0x64;
  if ((*((u16 *) (D_8011F32E + ((u32) temp_v1)))) != 0)
  {
    var_t1 = 0;
    if ((*((u16 *) (D_8011F330 + temp_v1))) == 0)
    {
      temp_v1_2 = *arg0;
      *arg0 = inline_fn(temp_v1_2);
      *((s32 *) (((char *) temp_v1_2) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1_2) + 4)) = D_800E18A0;
      __repair_phase_storage.pointer = *arg0;
      *arg0 = inline_fn(__repair_phase_storage.pointer);
      *((s32 *) (((char *) __repair_phase_storage.pointer) + 0)) = 0xB900031D;
      *((s32 **) (((char *) __repair_phase_storage.pointer) + 4)) = (s32 *) 0x552048;
      temp_v1_4 = *arg0;
      *arg0 = temp_v1_4 + 8;
      *((s32 *) (((char *) temp_v1_4) + 0)) = 0xB6000000;
      *((s32 **) (((char *) temp_v1_4) + 4)) = (s32 *) 0x2001;
      temp_v1_5 = ((__repair_field_64 *) D_800DE080)->value;
      ((__repair_field_64 *) D_800DE080)->value = (void *) (temp_v1_5 + 8);
      *((s32 *) (((char *) temp_v1_5) + 0)) = 0xBC000002;
      *((s32 *) (((char *) temp_v1_5) + 4)) = 0x80000040;
      ((__repair_field_64 *) D_800DE080)->value = (void *) (temp_v1_5 + 0x10);
      *((s32 *) (((char *) temp_v1_5) + 8)) = 0x03860010;
      *((s32 **) (((char *) temp_v1_5) + 0xC)) = D_80189930;
      ((__repair_field_64 *) D_800DE080)->value = (void *) (temp_v1_5 + 0x18);
      *((s32 *) (((char *) temp_v1_5) + 0x10)) = 0x03880010;
      *((void **) (((char *) temp_v1_5) + 0x14)) = (void *) (D_80189930 - 8);
      temp_v1_6 = *arg0;
      *arg0 = temp_v1_6 + 8;
      *((s32 *) (((char *) temp_v1_6) + 0)) = 0xFD100000;
      *((s32 **) (((char *) temp_v1_6) + 4)) = D_80301BE0;
      do
      {
        if (temp_v1_21 || temp_v1_6)
        {
          temp_v1_7 = *arg0;
          *arg0 = temp_v1_7 + 8;
          *((s32 *) (((char *) temp_v1_7) + 0)) = 0xE8000000;
          *((s32 **) (((char *) temp_v1_7) + 4)) = NULL;
          temp_v1_8 = *arg0;
          *arg0 = temp_v1_8 + 8;
        }
        else
        {
          temp_v1_7 = *arg0;
          *arg0 = temp_v1_7 + 8;
          *((s32 *) (((char *) temp_v1_7) + 0)) = 0xE8000000;
          *((s32 **) (((char *) temp_v1_7) + 4)) = NULL;
          temp_v1_8 = *arg0;
          *arg0 = temp_v1_8 + 8;
        }
      }
      while (0);
      *((s32 *) (((char *) temp_v1_8) + 0)) = 0xF5000100;
      *((s32 **) (((char *) temp_v1_8) + 4)) = (s32 *) 0x07000000;
      temp_v1_9 = *arg0;
      *arg0 = inline_fn(temp_v1_9);
      *((s32 *) (((char *) temp_v1_9) + 0)) = 0xE6000000;
      *((s32 **) (((char *) temp_v1_9) + 4)) = NULL;
      temp_v1_10 = *arg0;
      *arg0 = temp_v1_10 + 8;
      *((s32 *) (((char *) temp_v1_10) + 0)) = 0xF0000000;
      *((s32 **) (((char *) temp_v1_10) + 4)) = (s32 *) 0x073FC000;
      temp_v1_11 = *arg0;
      *arg0 = inline_fn(temp_v1_11);
      *((s32 *) (((char *) temp_v1_11) + 0)) = 0xE7000000;
      *((s32 **) (((char *) temp_v1_11) + 4)) = NULL;
      __repair_rows:
      {
        temp_a1 = *arg0;
        *arg0 = temp_a1 + 8;
        *((s32 *) (((char *) temp_a1) + 0)) = 0x040081FF;
        __base_D_80187D00 = D_80187D00;
        *((s32 **) (((char *) temp_a1) + 4)) = (s32 *) ((D_80046834 * 0xE00) + ((var_t1 << 8) + __base_D_80187D00));
        temp_v1_12 = var_t1 - 1;
        temp_v0 = (temp_v1_12 * 0x2C) & 0xFFC;
        temp_v1_12 = (((temp_v1_12 * 0xB) + 0xA) * 4) & 0xFFC;
        var_t0 = 0;
        do
        {
          if ((((var_t0 == 0) | (var_t0 == 0xE)) != 0) || ((temp_v0_2 = var_t0 - 1, ((!var_t1) | (var_t1 == 0xC)) != 0)))
          {
            temp_v1_13 = *arg0;
            *arg0 = inline_fn(temp_v1_13);
            *((s32 *) (((char *) temp_v1_13) + 0)) = 0xFD48010F;
            *((s32 **) (((char *) temp_v1_13) + 4)) = D_802F94E8;
            temp_v1_14 = *arg0;
            *arg0 = inline_fn(temp_v1_14);
            *((s32 *) (((char *) temp_v1_14) + 0)) = 0xF5480600;
            *((s32 **) (((char *) temp_v1_14) + 4)) = (s32 *) 0x07080200;
            temp_v1_15 = *arg0;
            *arg0 = temp_v1_15 + 8;
            *((s32 *) (((char *) temp_v1_15) + 0)) = 0xE6000000;
            *((s32 **) (((char *) temp_v1_15) + 4)) = NULL;
            temp_v1_16 = *arg0;
            *arg0 = inline_fn(temp_v1_16);
            *((s32 *) (((char *) temp_v1_16) + 0)) = 0xF4000000;
            temp_v1_17 = *arg0;
            *((s32 **) (((char *) temp_v1_16) + 4)) = (s32 *) 0x0704C028;
            *arg0 = temp_v1_17 + 8;
            *((s32 *) (((char *) temp_v1_17) + 0)) = 0xE7000000;
            *((s32 **) (((char *) temp_v1_17) + 4)) = NULL;
            temp_v1_18 = *arg0;
            *arg0 = temp_v1_18 + 8;
            do
            {
              *((s32 *) (((char *) temp_v1_18) + 0)) = 0xF5480600;
              *((s32 **) (((char *) temp_v1_18) + 4)) = (s32 *) 0x80200; temp_v1_19 = *arg0;
              *arg0 = temp_v1_19 + 8;
              *((s32 *) (((char *) temp_v1_19) + 0)) = 0xF2000000;
            }
            while (0);
            *((s32 **) (((char *) temp_v1_19) + 4)) = (s32 *) 0x4C028;
          }
          else
          {
            temp_v1 = (s16) ((temp_v0_2 * 0x14) + 0x13);
            temp_v1_20 = *arg0;
            *arg0 = inline_fn(temp_v1_20);
            do
            {
              *((s32 *) (((char *) temp_v1_20) + 0)) = 0xFD48010F;
              *((s32 **) (((char *) temp_v1_20) + 4)) = D_802F94E8; temp_v1_21 = *arg0;
              *arg0 = temp_v1_21 + 8; temp_v1_28 = (s16) (temp_v0_2 * 0x14); __repair_phase_storage.value = (((((s32) ((temp_v1 - temp_v1_28) + 8)) >> 3) & 0x1FF) << 9) | 0xF5480000;
              *((s32 *) (((char *) temp_v1_21) + 0)) = __repair_phase_storage.value;
              do
              {
                *((s32 **) (((char *) temp_v1_21) + 4)) = (s32 *) 0x07080200; temp_v1_22 = *arg0;
                *arg0 = temp_v1_22 + 8;
                *((s32 *) (((char *) temp_v1_22) + 0)) = 0xE6000000;
                *((s32 **) (((char *) temp_v1_22) + 4)) = NULL; temp_v1_23 = *arg0;
                *arg0 = inline_fn(temp_v1_23); temp_a1_3 = ((temp_v1_28 * 4) & 0xFFF) << 0xC;
                *((s32 *) (((char *) temp_v1_23) + 0)) = (s32) (temp_a1_3 | (temp_v0 | 0xF4000000));
              }
              while (0);
              temp_a2_2 = ((temp_v1 * 4) & 0xFFF) << 0xC;
              *((s32 **) (((char *) temp_v1_23) + 4)) = (s32 *) (temp_a2_2 | (temp_v1_12 | 0x07000000)); temp_v1_24 = *arg0;
            }
            while (0);
            *arg0 = temp_v1_24 + 8;
            *((s32 *) (((char *) temp_v1_24) + 0)) = 0xE7000000;
            *((s32 **) (((char *) temp_v1_24) + 4)) = NULL;
            temp_v1_25 = *arg0;
            *arg0 = temp_v1_25 + 8;
            *((s32 *) (((char *) temp_v1_25) + 0)) = __repair_phase_storage.value;
            *((s32 **) (((char *) temp_v1_25) + 4)) = (s32 *) 0x80200;
            temp_v1_26 = *arg0;
            *arg0 = inline_fn(temp_v1_26);
            *((s32 *) (((char *) temp_v1_26) + 0)) = (s32) (temp_a1_3 | (temp_v0 | 0xF2000000));
            *((s32 **) (((char *) temp_v1_26) + 4)) = (s32 *) (temp_a2_2 | temp_v1_12);
          }
          temp_a1_4 = *arg0;
          *arg0 = temp_a1_4 + 8;
          temp_v1_27 = ((var_t0 + 1) * 2) & 0xFF;
          __repair_phase_storage.value = ((var_t0 + 0x10) << 9) & 0xFE00;
          *((s32 *) (((char *) temp_a1_4) + 0)) = (s32) (0xB1000000 | (((((var_t0 * 2) & 0xFF) << 0x10) | __repair_phase_storage.value) | temp_v1_27));
          temp_v1_28 = ((temp_v1_27 << 0x10) | __repair_phase_storage.value) | (((var_t0 + 0x11) * 2) & 0xFF);
          do
          {
            var_t0 += 1;
          }
          while (0);
          *((s32 **) (((char *) temp_a1_4) + 4)) = (s32 *) temp_v1_28;
        }
        while (0xF > var_t0);
        ++var_t1;
      }

      if (var_t1 < 0xD)
      {
        goto __repair_rows;
      }
    }
  }
}


s32 func_8014A4C8(s32, s32, s32, s32, s32);
s32 func_801CA140(void);
s32 func_801CA468(s32, u16);
s32 func_801CA494(s32, s32, s32, s32, s32);
extern u8 D_8011F2F0[];
extern u16 D_80190CA0;
extern u8 D_80190CA2;
extern u8 D_80190CA4;
extern s32 D_80190CB4;
void func_8021662C(s32 arg0, s32 arg1)
{
  s32 *__base_D_80190CB4;
  u16 *__base_D_80190CA0;
  s32 temp_a1;
  s32 temp_a3;
  s32 temp_a3_3;
  s32 temp_a3_4;
  s32 temp_a3_5;
  s32 temp_a3_6;
  s32 var_a3_2;
  s32 var_a3_3;
  s32 var_s1;
  s32 var_s1_2;
  u16 temp_v1;
  u8 var_a3;
  u8 var_s3;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  if (arg0)
  {
    temp_a3_5 = arg1 & 0xFFFF;
    __repair_phase_storage.pointer = (temp_a3_5 * 0x64) + D_8011F2F0;
    func_801CA140();
    temp_v1 = *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x40));
  }
  else
  {
    temp_a3_5 = arg1 & 0xFFFF;
    __repair_phase_storage.pointer = (temp_a3_5 * 0x64) + D_8011F2F0;
    func_801CA140();
    temp_v1 = *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x40));
  }
  switch (temp_v1)
  {
    case 0:
      *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x40)) = 0x10U;
      return;
      __base_D_80190CB4 = &D_80190CB4;

    case 16:
      var_a3 = *((u8 *) (((char *) (&D_80190CB4)) + 0));
      var_s3 = 0x7F;
      if ((*((u8 *) (((char *) (&D_80190CB4)) + (-0xE)))) != 0)
    {
      var_a3 = 0x7F;
      var_s3 = *((u8 *) (((char *) (&D_80190CB4)) + 0));
    }
      temp_a3 = var_a3 & 0xFF;
      __base_D_80190CA0 = &D_80190CA0;
      func_801CA494(arg0, temp_a3, temp_a3, temp_a3, (s32) (*__base_D_80190CA0));
      func_8014A4C8(arg0, 0x40, 0x48, 0xA, 0xD);
      func_8014A4C8(arg0, 0x40, 0x80, 0xA, 0xE);
      func_8014A4C8(arg0, 0xF8, 0x48, 0xA, 0xF);
      if (((unsigned long) __base_D_80190CA0) & 0x100)
    {
      func_8014A4C8(arg0, 0xF8, 0x80, 0xA, 0x10);
    }
    else
    {
      func_8014A4C8(arg0, 0xF8, 0x80, 0xA, 0x10);
    }
      do
    {
      func_801CA468(arg0, *__base_D_80190CA0);
    }
    while (0);
      func_8014A4C8(arg0, 0x76, 0x3A, 0xA, 4);
      var_a3_2 = 0xFF;
      var_s1 = 0x7F;
      if (D_80190CA2 != 0)
    {
      var_a3_2 = 0x7F;
      var_s1 = 0xFF;
    }
      func_801CA494(arg0, __repair_phase_storage.value, __repair_phase_storage.value, __repair_phase_storage.value, (s32) (*__base_D_80190CA0));
      __repair_phase_storage.value = var_a3_2 & 0xFF;
      do
    {
      func_8014A4C8(arg0, 0x49, 0x51, 0xA, 0);
    }
    while (0);
      temp_a3_3 = var_s1 & 0xFF;
      func_801CA494(arg0, temp_a3_3, temp_a3_3, temp_a3_3, (s32) (*__base_D_80190CA0));
      func_8014A4C8(arg0, 0xA2, 0x51, 0xA, 1);
      temp_a3_4 = var_s3 & 0xFF;
      func_801CA494(arg0, temp_a3_4, temp_a3_4, temp_a3_4, (s32) (*__base_D_80190CA0));
      func_8014A4C8(arg0, 0x40, 0x98, 0xA, 0xD);
      func_8014A4C8(arg0, 0x40, 0xD0, 0xA, 0xE);
      func_8014A4C8(arg0, 0xF8, 0x98, 0xA, 0xF);
      func_8014A4C8(arg0, 0xF8, 0xD0, 0xA, 0x10);
      func_801CA468(arg0, *__base_D_80190CA0);
      func_8014A4C8(arg0, 0x76, 0x89, 0xA, 5);
      var_a3_3 = 0xFF;
      var_s1_2 = 0x7F;
      if (D_80190CA4 != 0)
    {
      var_a3_3 = 0x7F;
      var_s1_2 = 0xFF;
    }
      temp_a3_5 = var_a3_3 & 0xFF;
      func_801CA494(arg0, temp_a3_5, temp_a3_5, temp_a3_5, (s32) (*__base_D_80190CA0));
      func_8014A4C8(arg0, 0x49, 0xA1, 0xA, 2);
      temp_a3_6 = var_s1_2 & 0xFF;
      func_801CA494(arg0, temp_a3_6, temp_a3_6, temp_a3_6, (s32) (*__base_D_80190CA0));
      func_8014A4C8(arg0, 0xA2, 0xA1, 0xA, 3);
      return;

  }

}


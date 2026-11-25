u8 func_80198250();
u8 func_80198774();
u8 func_80198858();
u8 func_80198CC4();
extern char D_8011F2FC[];
extern volatile unsigned int D_8011F308[];
typedef struct 
{
  s32 f0;
  u8 pad[96];
} Slot_8011F30C;
extern Slot_8011F30C D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern u8 D_801C6B30;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern volatile unsigned int D_801C7074;
extern u8 D_801C7ABD;
void func_801976F8(s32 arg0)
{
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  do
  {
    temp_v1 = (arg0 & 0xFFFF) * 0x64;
  }
  while (0);
  do
  {
    *((f32 *) (D_8011F308 + ((short) temp_v1))) = (((f32) D_801C7068) * 400.0f) * 0.5f;
    do
    {
      (*(&(*(D_8011F30C + (arg0 & 0xFFFF))))).f0 = 0; temp_v1_2 = D_801C7074 * 0x64;
      *((f32 *) (D_8011F310 + temp_v1)) = (((f32) (D_801C6BB9 - 1)) * 400.0f) * 0.5f;
    }
    while (D_801C7074 * 0);
    if ((((u32) ((*((u16 *) (D_8011F32E - (-temp_v1_2)))) - 7)) < 2U) || ((*((u16 *) (D_8011F32E + temp_v1_2))) == 6))
    {
      D_801C6B30 = func_80198774();
    }
    else
    {
      if (temp_v1_3)
      {
        temp_v1_3 = D_801C7074 * 0x64;
      }
      else
      {
        temp_v1_3 = D_801C7074 * 0x64;
      }
      if ((((u32) ((*((u16 *) (D_8011F32E + temp_v1_3))) - 9)) < 2U) || ((*((u16 *) (D_8011F32E - (-temp_v1_3)))) == 0xD))
      {
        D_801C6B30 = func_80198858();
      }
      else
        if (((0, (u32) ((*((u16 *) (D_8011F32E + (D_801C7074 * 0x64)))) - 0xB))) < 2U)
      {
        D_801C6B30 = func_80198250();
      }
      else
        if (((u32) ((*((u16 *) (D_8011F32E + ((unsigned short) (D_801C7074 * 0x64))))) - 0xF)) < 2U)
      {
        D_801C6B30 = func_80198CC4(arg0 & 0xFFFF);
      }
      else
      {
        temp_v1_3 = *((u16 *) (D_8011F32E + (D_801C7074 * 0x64)));
        if (((((u32) (temp_v1_3 - 0x11)) >= 2U) && (((u32) (temp_v1_3 - 0x13)) >= 2U)) && (D_801C6BB9 != 0))
        {
          D_801C6B30 = 1;
        }
        else
        {
          D_801C6B30 = 0;
        }
      }
    }
    if (D_801C6B30 != 0)
    {
      if (1)
      {
        *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = D_801C7ABD;
      }
      return;
    }
  }
  while (0);
  *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = 0;
}


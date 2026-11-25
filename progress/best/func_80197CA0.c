u8 func_801984DC();
u8 func_801987E0();
u8 func_80198A90();
u8 func_80198F1C();
extern char D_8011F2FC[];
extern unsigned long D_8011F308[];
typedef struct 
{
  s32 f0;
  u8 pad[96];
} Slot_8011F30C;
extern Slot_8011F30C D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32E[];
extern u8 D_801C6B32;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u8 D_801C7ABD;
inline static u16 inline_fn(s32 arg0)
{
  return *((u16 *) (D_8011F32E + arg0));
}

void func_80197CA0(s16 arg0_in)
{
  s16 arg0;
  char *__repair_addr;
  unsigned long temp_v1;
  s32 temp_v1_2;
  s32 __repair_phase_temp_v1_2;
  u16 temp_v1_4;
  do { temp_v1 = (arg0 & 0xFFFF) * 0x64; } while (0);
  *((f32 *) (D_8011F308 - (-temp_v1))) = (((f32) D_801C7068) * 400.0f) * 0.5f;
  do { D_8011F30C[arg0 & 0xFFFF].f0 = 0; } while (0);
  arg0 = arg0_in;
  temp_v1_2 = D_801C7074 * 0x64;
  *(D_8011F310 + temp_v1) = (((f32) (D_801C6BB9 + 1)) * 400.0f) * 0.5f;
  do
  {
    __repair_addr = (char *) (D_8011F32E + temp_v1_2);
    if ((((u32) ((*((u16 *) (D_8011F32E + temp_v1_2))) - 7)) < 2U) || ((*((u16 *) __repair_addr)) == 6))
    {
      D_801C6B32 = func_801987E0();
    }
    else
    {
      if (D_801C6B32)
      {
        do
        {
          __repair_phase_temp_v1_2 = D_801C7074 * 0x64;
        }
        while (0);
      }
      else
      {
        __repair_phase_temp_v1_2 = D_801C7074 * 0x64;
      }
      if ((((u32) (inline_fn((unsigned char) __repair_phase_temp_v1_2) - 9)) < 2U) || (inline_fn(__repair_phase_temp_v1_2) == 0xD))
      {
        D_801C6B32 = func_80198A90();
      }
      else
        if (((u32) ((unsigned short) (inline_fn(D_801C7074 * 0x64) - 0xB))) < 2U)
      {
        D_801C6B32 = func_801984DC();
      }
      else
        if (((u32) (inline_fn(D_801C7074 * 0x64) - 0xF)) < 2U)
      {
        do { D_801C6B32 = func_80198F1C(arg0 & 0xFFFF); } while (0);
      }
      else
      {
        temp_v1_4 = *((u16 *) (D_8011F32E + (D_801C7074 * 0x64)));
        do
        {
          if (((((u32) (temp_v1_4 - 0x11)) >= 2U) && (((u32) (temp_v1_4 - 0x13)) >= 2U)) && (D_801C6BB9 < 0x17))
          {
            if (temp_v1_2 || temp_v1_4)
            {
              D_801C6B32 = 1;
            }
            else
            {
              D_801C6B32 = 1;
            }
          }
          else
          {
            D_801C6B32 = 0;
          }
        }
        while (0);
      }
    }
    if (D_801C6B32 != 0)
    {
      *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = D_801C7ABD;
      return;
    }
  }
  while (0);
  *(D_8011F2FC + ((arg0 & 0xFFFF) * 0x64)) = 0;
}


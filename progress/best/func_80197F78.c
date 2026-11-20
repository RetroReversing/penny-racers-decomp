u8 func_8019862C();
u8 func_8019881C();
u8 func_80198B9C();
u8 func_8019904C(s32);
typedef struct 
{
  u8 st;
  u8 pad[49];
  u16 ty;
  u8 pad2[48];
} Slot;
extern Slot D_8011F2FC[];
extern f32 D_8011F308;
extern s32 D_8011F30C;
extern f32 D_8011F310;
extern u8 D_801C6B33;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern u8 D_801C7ABD;
void func_80197F78(s32 arg0)
{
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  u16 temp_v1_4;
  temp_v1 = (arg0 & 0xFFFF) * 0x64;
  *((&D_8011F308) + ((arg0 & 0xFFFF) * 0x64)) = (((f32) (D_801C7068 + 1)) * 400.0f) * 0.5f;
  *((&D_8011F30C) + ((arg0 & 0xFFFF) * 0x64)) = 0;
  *((&D_8011F310) + ((arg0 & 0xFFFF) * 0x64)) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
  temp_v1_2 = D_801C7074 * 0x64;
  if ((((u32) (D_8011F2FC[D_801C7074].ty - 7)) < 2U) || ((&D_8011F2FC[D_801C7074])->ty == 6))
  {
    D_801C6B33 = func_8019881C();
  }
  else
  {
    temp_v1_3 = D_801C7074 * 0x64;
    if ((((u32) (D_8011F2FC[D_801C7074].ty - 9)) < 2U) || ((*(D_8011F2FC + D_801C7074)).ty == 0xD))
    {
      D_801C6B33 = func_80198B9C();
    }
    else
      if (((u32) (D_8011F2FC[D_801C7074].ty - 0xB)) < 2U)
    {
      D_801C6B33 = func_8019862C();
    }
    else
      if (((u32) (D_8011F2FC[D_801C7074].ty - 0xF)) < 2U)
    {
      D_801C6B33 = func_8019904C(arg0 & 0xFFFF);
    }
    else
    {
      temp_v1_4 = D_8011F2FC[D_801C7074].ty;
      if (((((u32) (temp_v1_4 - 0x11)) >= 2U) && (((u32) (temp_v1_4 - 0x13)) >= 2U)) && (D_801C7068 < 0x17))
      {
        D_801C6B33 = 1;
      }
      else
      {
        D_801C6B33 = 0;
      }
    }
  }
  if (D_801C6B33 != 0)
  {
    D_8011F2FC[arg0 & 0xFFFF].st = D_801C7ABD;
    return;
  }
  D_8011F2FC[arg0 & 0xFFFF].st = 0;
}


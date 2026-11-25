u8 func_8019862C();
u8 func_8019881C();
u8 func_80198B9C();
u8 func_8019904C(unsigned short);
typedef struct 
{
  u8 st;
  u8 pad[49];
  u16 ty;
  u8 pad2[48];
} Slot;
extern Slot D_8011F2FC[];
extern f32 D_8011F308;
typedef struct 
{
  u32 f0;
  u8 pad[96];
} Slot_8011F30C;
extern Slot_8011F30C D_8011F30C[];
extern f32 D_8011F310;
extern u8 D_801C6B33;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7074;
extern u8 D_801C7ABD;
inline static unsigned char inline_fn()
{
  return (unsigned char) D_801C7074;
}

inline static f32 *inline_fn2(s32 arg0)
{
  return (&D_8011F310) + ((arg0 & 0xFFFF) * 0x64);
}

inline static u32 inline_fn23(unsigned char arg0)
{
  return (u32) ((D_8011F2FC + arg0)->ty - 9);
}

inline static int inline_fn234(u8 *arg0, unsigned int arg1, u16 arg2)
{
  return (inline_fn23((unsigned char) (*((u16 *) arg0))) < arg1) || (arg2 == 0xD);
}

void func_80197F78(s32 arg0)
{
  volatile char temp_v1;
  s32 temp_v1_2;
  int temp_v1_3;
  unsigned short temp_v1_4;
  temp_v1 = (arg0 & 0xFFFF) * 0x64;
  *((&D_8011F308) + ((arg0 & 0xFFFF) * 0x64)) = (((f32) (D_801C7068 + 1)) * 400.0f) * 0.5f;
  do
  {
    D_8011F30C[arg0 & 0xFFFF].f0 = 0;
    *inline_fn2(arg0) = (((f32) D_801C6BB9) * 400.0f) * 0.5f; temp_v1_2 = (*((u16 *) (&D_801C7074))) * 0x64;
    if ((((u32) ((*(D_8011F2FC + (*((u16 *) (&D_801C7074))))).ty - 7)) < 2U) || ((&D_8011F2FC[inline_fn()])->ty == 6))
    {
      D_801C6B33 = func_8019881C();
    }
    else
    {
      temp_v1_3 = (*((u16 *) (&D_801C7074))) * 0x64;
      if (inline_fn234(&D_801C7074, 2U, (*(D_8011F2FC + (*((u16 *) (&D_801C7074))))).ty))
      {
        D_801C6B33 = func_80198B9C();
      }
      else
        if (((u32) (D_8011F2FC[inline_fn()].ty - 0xB)) < 2U)
      {
        D_801C6B33 = func_8019862C();
      }
      else
        if (((u32) (D_8011F2FC[(unsigned char) (*((u16 *) (&D_801C7074)))].ty - 0xF)) < 2U)
      {
        D_801C6B33 = func_8019904C(arg0 & 0xFFFF);
      }
      else
      {
        temp_v1_4 = D_8011F2FC[inline_fn()].ty;
        if (((((u32) (temp_v1_4 - 0x11)) >= 2U) && (((u32) (temp_v1_4 - 0x13)) >= 2U)) && (((D_801C7068 + 1) - 1) < 0x17))
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
  }
  while (0);
  D_8011F2FC[arg0 & 0xFFFF].st = 0;
}


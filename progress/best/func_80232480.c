inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

extern s32 D_802038D0;
extern s32 D_802038D4;
extern s32 D_80203AB0;
extern s32 D_8006FB14;
extern s32 D_802282F0;
extern s32 D_8022A778;
extern s8 D_8022AFE9;
extern s32 D_80238EC0;
extern s32 func_8012AD9C;
extern s32 func_8015A728;
void func_801FA338(s32);
void func_80231A0C(void);
void func_80231C5C(void);
void func_80231E30(void);
void func_80232360(u16, u16);
void func_800E067C(void);
void func_8013ADA8(void);
void func_8022FE50(s32, s32, s32, s32);
void func_8022F780(u16);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
inline static s32 *inline_fn()
{
  return &func_8015A728;
}

void func_80232480(void)
{
  s32 *__base_D_8022A778;
  u16 i;
  u16 j;
  s32 k;
  s32 *dst;
  s32 *src;
  s32 *__base_D_802282F0;
  __base_D_802282F0 = &D_802282F0;
  do
  {
    func_801FA338(0);
  }
  while (0);
  D_80203AB0 = 0;
  D_802038D0 = 0;
  D_802038D4 = 0;
  *((s8 *) (((u8 *) (&D_8006FB14)) + 4)) = 0;
  do
  {
    func_80231A0C();
  }
  while (0);
  do
  {
    func_80231C5C();
  }
  while (0);
  func_80231E30();
  func_8022F780(*((u16 *) ((((u8 *) (&D_8006FB14)) + 4) - 8)));
  func_800E067C();
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 8; j++)
    {
      __base_D_8022A778 = &D_8022A778;
      dst = (s32 *) ((((u8 *) __base_D_8022A778) + (i * 0x8F0)) + (j * 0x34));
      do
      {
        src = (s32 *) (((u8 *) (&D_80238EC0)) + (j * 0x34));
      }
      while (0);
      for (k = 0; __repair_inline(k, 13); k++)
      {
        if (!j)
        {
          dst[k] = src[k];
        }
        else
        {
          dst[k] = src[k];
        }
      }

    }

  }

  for (i = 0; i < 6; i++)
  {
    func_8022FE50(i, i, i, 1);
  }

  D_8022AFE9 = 0;
  if (((unsigned long) (&D_802282F0)) & 0x100)
  {
    func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  else
  {
    func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  func_800DE41C(0, 0, 3, 0, 0x20, 4, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  do
  {
    func_800DE41C(0, 0, 3, 0, 0x20, 7, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  func_800DE41C(0, 0, 3, 0, 0x20, 0xA, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  do
  {
    if (i)
    {
      func_8013ADA8();
    }
    else
    {
      func_8013ADA8();
    }
  }
  while (0);
  func_800DE41C(0, 0, 3, 0, 0x20, 0, 0, &D_802282F0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  {
    func_800DE41C(0, 0, 3, 0, 0xC0, 0xFF, 0, inline_fn(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  func_80232360(1, 0);
  func_80232360(2, 0);
  func_80232360(3, 0);
  func_80232360(4, 0);
  func_80232360(5, 0);
}


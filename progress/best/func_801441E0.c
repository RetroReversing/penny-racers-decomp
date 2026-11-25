extern void func_801DDA5C(void);
extern s16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, f32, f32, s32, s32, s32);
extern void func_800294A0(void *, void *, s32);
extern void func_8003DE60();
extern s8 func_80148230(void *);
extern void func_8014998C(void);
extern u16 func_8014B108(void);
extern u16 func_8014BB30(s32);
extern void func_8021FCA4(void);
extern u8 D_3B7C00[];
extern u8 D_3E4880[];
extern u8 D_40A890[];
extern u8 D_412160[];
extern u8 D_802D6890[];
extern u8 D_8030BD90[];
extern u8 D_8011F2F4[];
extern u8 D_8011F2F8[];
extern u8 D_80145A6C[];
extern u8 D_80183630[];
extern u8 D_80183644[];
extern u8 D_80189B36[];
extern u8 D_80189C9E[];
extern u8 D_80189CAA[];
extern u8 D_80189CB7[];
extern unsigned int D_8018A3B8[];
extern u8 D_8018D3A0[];
extern u8 D_8018F5D0[];
extern u8 D_80238EC0[];
extern u8 D_8018A44A[];
extern u8 D_801D5A90[];
extern u8 D_8021F260[];
extern u8 D_8021FE04[];
extern u8 D_8022026C[];
extern s8 D_80189B35;
extern s8 D_80190CAA;
extern s16 D_80190CB4;
extern u16 D_80189CC6;
extern u16 D_8018A27C;
extern u16 D_8018A43A;
extern u8 D_8018D678;
extern s32 D_8021B664;
extern s32 D_8021B668;
extern s16 D_8021E1A6;
extern f32 D_80220E40;
extern void func_80138B1C(void);
extern void func_8013DD2C(void);
extern void func_80144808(void);
extern void func_80149A80(void);
inline static u8 *inline_fn(u8 *arg0, s32 arg1)
{
  return arg0 + arg1;
}

inline static u8 *inline_fn2()
{
  return D_80238EC0;
}

inline static u8 *inline_fn23(u8 *arg0, int arg1)
{
  return arg0 + arg1;
}

inline static u8 *inline_fn234(s32 arg0)
{
  return D_80238EC0 - (-arg0);
}

void func_801441E0(void)
{
  unsigned char *__repair_loop_constant;
  char *__repair_addr;
  int __repair_constant = 0x2FFF;
  s8 *__base_D_80189B35;
  u16 *__base_D_80189CC6;
  u32 i;
  s32 j;
  s32 k;
  s32 temp_v1;
  s32 off;
  u8 b;
  func_801DDA5C();
  func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, D_801D5A90, NULL, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
  func_800294A0(D_3B7C00, D_802D6890, D_3E4880 - D_3B7C00);
  func_800294A0(D_40A890, D_8030BD90, D_412160 - D_40A890);
  temp_v1 = (func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, func_80138B1C, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0) & 0xFFFF) * 0x64;
  __repair_addr = (char *) (D_8011F2F4 + temp_v1);
  *((u16 *) __repair_addr) |= 0x20;
  *((u16 *) ((D_8011F2F4 + 2) + temp_v1)) |= 0x20;
  *((u16 *) inline_fn(D_8011F2F8, temp_v1)) |= 0x20;
  func_8021FCA4();
  func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, 0, NULL, D_8021FE04, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
  __repair_loop_constant = D_80189CB7;
  D_80220E40 = 10.0f;
  func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, 0, NULL, D_8022026C, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0x40, 1, 0, func_80149A80, NULL, 0, 0, 0, 0, 30.0f, 50.0f, 0, 0, 0);
  D_8021F260[0] = 0;
  D_8021F260[1] = 0;
  D_8021F260[2] = 0;
  D_8021F260[4] = 0;
  __base_D_80189B35 = &D_80189B35;
  *__base_D_80189B35 = 0;
  if (D_8021B668 == 0)
  {
    *__base_D_80189B35 = 1;
  }
  b = D_80189B36[0] & 0x7F;
  D_80189B36[0] = b;
  if (D_8021B664 == 0)
  {
    D_80189B36[0] = b | 0x80;
  }
  __base_D_80189CC6 = &D_80189CC6;
  *__base_D_80189CC6 = ((*(&D_80189CC6)) | 0x3000) & 0xBCFF;
  D_80189B36[0] &= 0xBF;
  *((s8 *) (D_80189B36 - 2)) = func_80148230(D_80189B36);
  D_80190CAA = 0;
  D_8018D678 += 1;
  if (D_8018D678 >= 0x1F)
  {
    D_8018D678 = 0;
  }
  do
  {
    func_8014998C();
    D_8018A27C = func_8014B108(); D_8018A43A = func_8014BB30(0); D_8018A27C &= ~D_8018A43A;
    if (((unsigned long) __base_D_80189CC6) & 0x10000)
    {
      if (((unsigned long) __base_D_80189CC6) & 0x100)
      {
        func_8003DE60(D_80183630, *((u16 *) (D_8018A44A + (D_8021E1A6 * 2))));
      }
      else
      {
        func_8003DE60(D_80183630, *((u16 *) (D_8018A44A + (D_8021E1A6 * 2))));
      }
    }
    else
      if (((unsigned long) __base_D_80189CC6) & 0x100)
    {
      func_8003DE60(D_80183630, *((u16 *) (D_8018A44A + (D_8021E1A6 * 2))));
    }
    else
    {
      func_8003DE60(D_80183630, *((u16 *) (D_8018A44A + (D_8021E1A6 * 2))));
    }
    do
    {
      func_8003DE60(D_80183644, D_8018A27C, D_8018A43A);
    }
    while (0);
    __repair_loop_constant[0] = 0; __repair_loop_constant[8] = 0; __repair_loop_constant[-0x1C] = 0; __repair_loop_constant[-0x1D] = 0;
  }
  while (0);
  for (i = 0; i < 6; i++)
  {
    *((u16 *) (D_80189C9E + (i * 2))) = __repair_constant;
    *((u16 *) (D_80189CAA + (i * 2))) = __repair_constant;
  }

  for (j = 0; j < 4; j++)
  {
    for (k = 0; (k - 1) < (8 - 1); k++)
    {
      *((s32 *) ((D_8018A3B8 + (j << 5)) + (k * 4))) = *((s32 *) ((D_8018D3A0 + (j << 5)) + (k * 4)));
    }

  }

  for (i = 0; i < 0xE; i++)
  {
    for (j = 0; (j + 1) <= 8; j++)
    {
      do
      {
        j = j * 0x14;
        do
        {
          *((s32 *) (((D_8018F5D0 + (i * 0x1A0)) + j) + 0x00)) = *((s32 *) ((D_80238EC0 + (j * 0x14)) + 0x00));
        }
        while (0);
      }
      while (0);
      *((s32 *) (((D_8018F5D0 + (i * 0x1A0)) + j) + 0x04)) = *((s32 *) ((inline_fn2() + j) + 0x04));
      *((s32 *) inline_fn23((D_8018F5D0 + (i * 0x1A0)) + j, 0x08)) = *((s32 *) (inline_fn234(j) + 0x08));
      *((s32 *) (((D_8018F5D0 + (i * 0x1A0)) - (-j)) + 0x0C)) = *((s32 *) ((D_80238EC0 + j) + 0x0C));
    }

  }

  D_80190CB4 = func_800DE41C(0, 0, 3, 0, 0x4F, 0xFF, 0, func_80144808, D_80145A6C, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, NULL, func_8013DD2C, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
}


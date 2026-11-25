extern u8 D_8011F2F0[];
extern u8 *D_8011F350[];
extern u8 D_8021EEA4[];
extern u8 D_8021EEA8[];
extern u8 D_8021EEB0;
extern u8 D_8021EEB1;
extern u8 D_8021E200;
extern u8 D_8021E22F[];
extern u8 D_8021E15C;
extern u8 D_8021E230[];
extern u16 D_8018BC3C;
extern u16 D_80190C9A;
extern u32 D_8021AFDC;
extern volatile unsigned int D_80168BB0;
s32 func_8014A870(u32, s32, s32);
void func_80211C7C(s32);
s32 func_8020FFD0(s32, s32, s32);
void func_8014B854(s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);
inline static u8 inline_fn(u8 *arg0)
{
  return arg0[0];
}

inline static int inline_fn2(u8 arg0, u8 *arg1)
{
  return ((short) (arg0 * 0x22)) + (arg1[3] * 0x110);
}

void func_8020EE18(s32 arg0)
{
  u16 *s4;
  u8 *s3;
  u8 *__base_D_8021EEB1;
  s32 s2;
  volatile unsigned int s0;
  s32 i;
  u8 s1;
  u8 *p;
  u8 *p_arm;
  s4 = &D_80190C9A;
  s0 = 0;
  func_80211C7C(0xA);
  s2 = func_8014A870(0x14, 7, D_8021EEA4[3]);
  p = D_8021EEA4;
  i = (((s32) arg0) & 0xFFFF) * 0x64; s3 = D_8011F2F0 + i;
  switch (*((u16 *) (s3 + 0x3E)))
  {
    case 0:
      break;

    case 0x10:
    {
      long long phantom_wide = arg0;
    }
      p_arm = D_8011F350[D_8018BC3C * 0x19];
      if ((*p_arm) != 0)
    {
      break;
    }
      *((u16 *) (s3 + 0x3E)) = 0x10;
      if (((unsigned) D_8021AFDC) != 0x12)
    {
      break;
    }
      D_8021EEB0 = 1;
      *((u16 *) (s3 + 0x3E)) = 0x20;
      break;

    case 0x20:
      if (s2 & 1)
    {
      p_arm[0]--;
      s0 = 1;
    }
      if (s2 & 2)
    {
      p_arm[0]++;
      s0 = 1;
    }
      p_arm[0] &= 7;
      s1 = D_8021E230[inline_fn2(inline_fn(p_arm), p_arm)];
      if ((s2 & 4) && (D_8021EEA8[inline_fn(p_arm)] != 0))
    {
      D_8021EEA8[inline_fn(p_arm)]--;
      s0 = 1;
    }
      if ((s2 & 8) && ((D_8021EEA8[inline_fn(p_arm)] + 1) < (((u8) (s1 - 1)) + 1)))
    {
      D_8021EEA8[inline_fn(p_arm)]++;
      s0 = 1;
    }
      if (s0 & 0xFF)
    {
      func_8014B854(0x3B);
    }
      __base_D_8021EEB1 = &D_8021EEB1;
      *__base_D_8021EEB1 &= 0x3F;
      if (((u8) s1) != 1)
    {
      *__base_D_8021EEB1 |= 0xC0;
      if (D_8021EEA8[inline_fn(p_arm)] == 0)
      {
        *__base_D_8021EEB1 = ((*__base_D_8021EEB1) & 0x3F) | 0x40;
      }
      if (D_8021EEA8[inline_fn(p_arm)] == ((u8) (((u32) s1) - 1)))
      {
        *__base_D_8021EEB1 = ((*__base_D_8021EEB1) & 0x3F) | 0x80;
      }
    }
      p_arm[1] = func_8020FFD0(p_arm[3], inline_fn(p_arm), D_8021EEA8[inline_fn(p_arm)]);
      p_arm[2] = 0;
      for (i = 0; i < 8; i++)
    {
      do
      {
        p_arm[2] += func_8020FFD0(p_arm[3], i, D_8021EEA8[i]);
      }
      while (0);
    }

      if (s2 & 0x10)
    {
      s2 = 0;
      func_8014B854(0x3D);
      *((u16 *) (s3 + 0x3E)) = 0x20;
    }
      if (s2 & 0x20)
    {
      do
      {
        *s4 = 0x1C;
      }
      while (0);
      func_8014B854(0x3A);
      do
      {
        D_8021E15C = 0;
        *((u16 *) (s3 + 0x3E)) = 0x30;
      }
      while (0);
    }
      break;

    case 0x30:
      if ((((unsigned) s2) & 4) && (D_8021EEB0 == 1))
    {
      D_8021EEB0 = 0;
      func_8014B854(0x3B);
    }
      if ((s2 & 8) && (!D_8021EEB0))
    {
      D_8021EEB0 = 1;
      func_8014B854(0x3B);
    }
      if (s2 & 0x10)
    {
      if (D_8021EEB0 == 0)
      {
        D_8021E200 = 1;
        *s4 = 0x12;
      }
      else
      {
        *s4 = 0x1C;
        for (i = 0; i < 8; i++)
        {
          D_8021E22F[(i * 0x22) + (p_arm[3] * 0x110)] = D_8021EEA8[(unsigned short) i];
        }

        D_8021E15C = 0;
      }
      func_8014B854(0x3D);
      *((u16 *) (s3 + 0x3E)) = 0x30;
    }
      if (s2 & 0x20)
    {
      func_8014B854(0x3A);
      *((u16 *) (s3 + 0x3E)) = 0x10;
    }
      break;

    case 0x31:
      func_80203DF8(2, 6, 0, 0, 0);
      *((u16 *) (s3 + 0x3E)) = 0x31;
      break;

    case 0x12:
    {
      long long phantom_wide2 = arg0;
    }
      p_arm = D_8011F350[D_8018BC3C * 0x19];
      if ((*p_arm) != 0)
    {
      break;
    }
      func_800DE38C();
      func_800DE2E0();
      func_80231C5C();
      D_8021AFDC = 0x10;
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_80168BB0 = *s4;
      break;

    default:
      break;

  }

}


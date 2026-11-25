void func_800294A0(s32, s32, s32);
void func_80143DCC(void);
s32 func_801FD530(s32, s32);
s32 func_80149F40(u16, s32, s8);
s16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32);
void func_8020A160(s32);
volatile unsigned int func_8021F6A0(s32);
void func_80208444(void);
void func_80208DEC(void);
void func_80209310(void);
extern s8 D_400E00;
extern s8 D_404F10;
extern u16 D_800DA260;
extern u8 D_800DB1B8[];
extern u8 D_80168C60[];
extern s32 D_8021AFE4;
extern s32 D_8021AFEC[];
extern volatile unsigned char D_8021B00C;
extern u8 D_8021B010;
extern s8 D_8021B014;
extern s32 D_8021B01C;
extern s32 D_8021B020;
extern s8 D_8021B084;
extern u8 D_8021B128[];
extern u8 D_8021B190[];
extern u8 D_8021B192[];
extern s8 D_8021B1B4;
extern s16 D_8021E16C[];
extern s16 D_8021E1A2;
extern s16 D_8021E1A6;
extern u8 D_8021E20B[];
extern u8 D_8021E20C[];
extern s8 D_8021E22F[];
extern s16 D_8021EFA4;
extern u8 D_8021F260[];
extern u8 D_8030BD90[];
inline static int inline_fn(s16 arg0, unsigned long long arg1)
{
  return arg0 >= arg1;
}

inline static int inline_fn2(s32 arg0)
{
  return arg0 * 9;
}

void func_80207EC0(void)
{
  char *__repair_addr;
  s32 i;
  s32 a0;
  s32 off;
  unsigned char __repair_phase_off;
  s32 t;
  do
  {
    func_800294A0((s32) (&D_400E00), (s32) (&D_8030BD90), ((s32) (&D_404F10)) - ((s32) (&D_400E00)));
  }
  while (0);
  D_8021B01C = 0;
  D_8021B020 = 0;
  func_80143DCC();
  *((s16 *) (D_8021B128 + 0)) = 0;
  *((s16 *) (D_8021B128 + 4)) = 0;
  for (i = 0; i < 4; i++)
  {
    D_8021E20C[i * 9] = 0;
    D_8021E20B[inline_fn2(i)] = 0;
    D_8021AFEC[i] = 0;
  }

  D_8021B1B4 = 0;
  a0 = 4;
  if (D_8021E1A2 == 0)
  {
    a0 = 1;
  }
  func_8021F6A0(a0);
  for (i = 0; i < 4; i++)
  {
    t = i * 0x28;
    off = i * 4;
    if (D_8021E1A2 == 0)
    {
      __repair_addr = (char *) ((D_800DB1B8 + 0x2110) + t);
      *((s16 *) __repair_addr) = *((s16 *) (D_8021B190 + off));
      *((s16 *) ((D_800DB1B8 + 0x2112) + t)) = *((s16 *) (D_8021B192 + off));
      do
      {
        *((s16 *) ((D_800DB1B8 + 0x2114) + t)) = 0x120;
        *((s16 *) ((D_800DB1B8 + 0x2116) + t)) = 0xD8;
      }
      while (0);
    }
    else
      if (D_8021E1A2 == 1)
    {
      *((s16 *) ((D_800DB1B8 + 0x2112) + t)) = 0x3E;
      *((s16 *) ((D_800DB1B8 + 0x2114) + t)) = 0x90;
      *((s16 *) ((D_800DB1B8 + 0x2116) + t)) = 0x6C;
    }
    else
    {
      *((s16 *) ((D_800DB1B8 + 0x2110) + t)) = *((s16 *) (D_8021B190 + off));
      *((s16 *) ((D_800DB1B8 + 0x2112) + t)) = *((s16 *) (D_8021B192 + off));
      *((s16 *) ((D_800DB1B8 + 0x2114) + t)) = 0x90;
      *((s16 *) ((D_800DB1B8 + 0x2116) + t)) = 0x6C;
    }
    if (D_8021E1A2)
    {
      t = ((i * 4) + i) * 8;
      *((s16 *) ((D_800DB1B8 + 0x2128) + t)) = 0;
      *((s16 *) ((D_800DB1B8 + 0x212A) + t)) = 0;
      *((s16 *) ((D_800DB1B8 + 0x212C) + t)) = 0x140;
      *((s16 *) ((D_800DB1B8 + 0x212E) + t)) = 0xF0;
    }
    else
    {
      t = ((i * 4) + i) * 8;
      *((s16 *) ((D_800DB1B8 + 0x2128) + t)) = 0;
      *((s16 *) ((D_800DB1B8 + 0x212A) + t)) = 0;
      *((s16 *) ((D_800DB1B8 + 0x212C) + t)) = 0x140;
      *((s16 *) ((D_800DB1B8 + 0x212E) + t)) = 0xF0;
    }
  }

  for (i = 0; inline_fn(D_8021E1A2, 0) && (i <= D_8021E1A2); i++)
  {
    D_8021E16C[(unsigned short) i] = func_800DE41C(0, i & 0xFF, 3, 0, 0x78, 0, 0, NULL, func_80209310, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (a0 != 0.0f)
    {
      func_8020A160(i);
    }
    else
    {
      func_8020A160(i);
    }
    if (func_80208DEC)
    {
      D_8021E20C[i * 9] = 0;
    }
    else
    {
      D_8021E20C[i * 9] = 0;
    }
  }

  if (D_8021E1A6)
  {
    D_8021EFA4 = func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_80208444, func_80208DEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  else
  {
    D_8021EFA4 = func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_80208444, func_80208DEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if (D_8021E1A2 == 1)
  {
    D_8021AFE4 = 0x28;
  }
  else
  {
    D_8021AFE4 = 0;
  }
  func_80203DF8(1, 6, 0, 0);
  if ((D_8021E1A2 == 0) && (D_8021B00C == 1))
  {
    if (1)
    {
      *((s16 *) (D_8021B128 + 0)) = D_8021B00C;
      do
      {
        D_8021E22F[0x69] = 1; D_8021AFEC[0] = 0; D_8021B010 = 0;
      }
      while (0);
      for (i = 0; ((i + 1) - 1) < 8; i++)
      {
        if (func_80208DEC)
        {
          __repair_phase_off = i * 0x22;
          D_8021B010 += func_801FD530(i, func_80149F40(D_800DA260, i, D_8021E22F[(__repair_phase_off + D_8021E22F[__repair_phase_off]) + 2]) & 0xFF);
        }
        else
        {
          __repair_phase_off = i * 0x22;
          D_8021B010 += func_801FD530(i, func_80149F40(D_800DA260, i, D_8021E22F[(__repair_phase_off + D_8021E22F[__repair_phase_off]) + 2]) & 0xFF);
        }
      }

    }
    if (D_80168C60[D_8021E1A6] < D_8021B010)
    {
      D_8021B014 = 1;
    }
    else
    {
      D_8021B014 = 0;
    }
  }
  D_8021F260[0] = 0;
  D_8021F260[1] = 0;
  D_8021F260[2] = 0;
  D_8021F260[4] = 0;
  D_8021B084 = 0;
}


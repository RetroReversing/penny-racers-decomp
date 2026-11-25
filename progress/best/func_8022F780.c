extern u16 D_80232840[];
extern u32 D_802CBF30[];
extern u8 D_8021E144[];
extern u8 D_8006FAF0[];
extern u8 D_8006FB38[];
extern u8 D_80232C10[];
extern u8 D_1F9030[];
extern u8 D_2243D0[];
extern u8 D_2632D0[];
extern u8 D_2AFC80[];
extern u8 D_2D58C0[];
extern u8 D_2FDC40[];
extern u8 D_32F100[];
extern u8 D_355850[];
extern u8 D_3836A0[];
extern u8 D_3B7C00[];
extern u8 D_802D6890[];
extern u8 D_802330B0[];
extern u8 D_802330B1[];
extern u8 D_802330B4[];
extern u8 D_802330B8[];
extern u8 D_802330BA[];
extern u8 D_802330BC[];
extern u8 D_802330BE[];
extern u8 D_80233141[];
extern u8 D_80233D30[];
extern u8 D_80233EC0[];
extern void alSeqpStop(void *);
extern void func_8003DE60(void *);
extern void func_8013D1A4(s32);
extern s32 func_800294A0(void *, void *, s32);
extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32);
inline static int inline_fn(s32 arg0, u16 arg1)
{
  return (arg0 - 1) + D_80232840[arg1];
}

void func_8022F780(volatile unsigned int a0)
{
  int __repair_constant = 2;
  u16 s2 = a0;
  u16 s0;
  s32 s1;
  s32 s3;
  s32 t;
  u32 tmp;
  u32 v;
  unsigned char off;
  u32 __repair_phase_off;
  u8 *pb;
  u8 *pe;
  {
    long long phantom_wide = a0;
  }
  if ((s2 == 0) || (s2 >= 0x14))
  {
    if (D_8006FAF0)
    {
      s2 = 1;
    }
    else
    {
      s2 = 1;
    }
  }
  while (D_80232840[s2] == 0)
  {
    s2++;
  }

  if (s1)
  {
    *((u16 *) (D_8006FAF0 + 0x20)) = s2;
    tmp = D_802CBF30[(unsigned char) s2];
  }
  else
  {
    *((u16 *) (D_8006FAF0 + 0x20)) = s2;
    tmp = D_802CBF30[(unsigned char) s2];
  }
  if (D_8021E144[0] != 1)
  {
    alSeqpStop(D_8006FB38);
  }
  switch (s2 - 1)
  {
    case 0:
      pe = D_2243D0;
      pb = D_1F9030;
      break;

    case 1:
      pe = D_2632D0;
      pb = D_2243D0;
      break;

    case 2:
      if (pb || s0)
    {
      pe = D_2AFC80;
      pb = D_2632D0;
      break;
    }
    else
    {
      pe = D_2AFC80;
      pb = D_2632D0;
      break;
    }

    case 3:
      pe = D_2D58C0;
      pb = D_2AFC80;
      break;

    case 4:
      pe = D_2FDC40;
      pb = D_2D58C0;
      break;

    case 5:
      pe = D_32F100;
      pb = D_2FDC40;
      break;

    case 6:
      do
    {
      do
      {
        pb = D_32F100; pe = D_355850;
        break;
      }
      while (0);
    }
    while (0);

    case 7:
      pb = D_355850;
      pe = D_3836A0;
      break;

    case 8:
      pb = D_3836A0;
      pe = D_3B7C00;
      break;

    default:
      func_8003DE60(D_80232C10);
      goto after;

  }

  func_800294A0(pb, D_802D6890, ((u32) pe) - ((u32) pb));
  after:
  s0 = s2;

  func_8013D1A4(s0);
  D_802330B0[0] = 0;
  s1 = 0;
  v = (((s0 == 2) || (s0 == 6)) || (s0 == 7)) ? (6) : (2);
  D_802330B1[s1 * 16] = v;
  off = s1 * 16;
  s3 = s1 * 8;
  *((u32 *) (D_802330B4 + off)) = tmp + s3;
  s3 = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, D_802330B0 + off, 0, 0, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  *((u16 *) D_80233EC0) = s3;
  *((u16 *) (D_80233D30 + (s1 * 2))) = s3;
  *((u16 *) (D_802330B8 + off)) = inline_fn(s3, s2);
  *((u16 *) (D_802330BA + off)) = s3 + (s1 + 1);
  *((u16 *) (D_802330BC + off)) = 0xFFFF;
  *((u16 *) (D_802330BE + off)) = 0xFFFF;
  s1 = 1;
  t = D_80232840[s2] - 1;
  while (s1 < t)
  {
    u32 off_arm;
    u32 v_arm;
    off_arm = s1 * 16;
    D_802330B0[off_arm] = 0;
    v_arm = (((s2 == 2) || (s2 == 6)) || (s2 == 7)) ? (6) : (2);
    D_802330B1[off_arm] = v_arm;
    if (s2 == 7)
    {
      D_80233141[0] = __repair_constant;
      D_80233141[0x10] = __repair_constant;
      D_80233141[0x20] = __repair_constant;
    }
    *((u32 *) (D_802330B4 + off_arm)) = tmp + (s1 * 8);
    v_arm = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, D_802330B0 + off_arm, 0, 0, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    *((u16 *) (D_80233D30 + (s1 * 2))) = v_arm;
    *((u16 *) (D_802330B8 + off_arm)) = (s3 + s1) - 1;
    *((u16 *) (D_802330BA + off_arm)) = (s3 + s1) + 1;
    *((u16 *) (D_802330BC + off_arm)) = 0xFFFF;
    *((u16 *) (D_802330BE + off_arm)) = 0xFFFF;
    s1++;
    t = D_80232840[s2] - 1;
  }

  __repair_phase_off = s1 * 16;
  D_802330B0[s1 * 16] = 0;
  v = (((s2 == 2) || (s2 == 6)) || (s2 == 7)) ? (6) : (2);
  D_802330B1[s1 * 16] = v;
  v = s1 * 8;
  *((u32 *) (D_802330B4 + (s1 * 16))) = tmp + v;
  v = func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, D_802330B0 + __repair_phase_off, 0, 0, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  *((u16 *) (D_80233D30 + (s1 * 2))) = v;
  do
  {
    *((u16 *) (D_802330B8 + __repair_phase_off)) = (D_80232840[s2] + s3) - 2;
    *((u16 *) (D_802330BA + __repair_phase_off)) = s3;
    *((u16 *) (D_802330BC + __repair_phase_off)) = 0xFFFF;
    *((u16 *) (D_802330BE + __repair_phase_off)) = 0xFFFF;
  }
  while (0);
}


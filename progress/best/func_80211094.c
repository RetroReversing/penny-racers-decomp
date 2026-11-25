s32 func_8014A870(u32, s32, s32);
void func_8014B854(s32);
void func_80211B90(void);
void func_800DE2E0(void);
void func_800DE38C(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
extern u8 D_8011F32E[];
typedef struct 
{
  u32 f0;
  u8 pad[96];
} Slot_8011F350;
extern Slot_8011F350 D_8011F350[];
extern s32 D_80168BB0;
extern u8 D_80187BF0[];
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern u8 D_8021B420[];
extern u8 D_8021B430[];
extern s8 D_8021E15F;
extern u8 D_8021E231[];
extern u8 D_8021EEC0[];
extern u8 D_8021EEC1;
extern u8 D_8021EEC2;
extern volatile char D_8021EFA0;
extern unsigned short D_8021F036[];
extern u8 D_8021F048[];
extern u8 D_8021F270[];
inline static int inline_fn(u8 arg0)
{
  return arg0 * 4;
}

inline static u16 *inline_fn2(u8 *arg0, s32 arg1, int arg2, int arg3)
{
  return (u16 *) (((arg0 + (D_8021E15F * 0xE0)) + (arg1 * arg2)) + arg3);
}

inline static int inline_fn23(s32 arg0)
{
  return (D_8021E15F * 0xE) + arg0;
}

inline static int inline_fn234(u8 arg0)
{
  return arg0 != 0xFF;
}

inline static int inline_fn2345(s32 arg0, int arg1)
{
  return arg0 * arg1;
}

void func_80211094(u32 arg0)
{
  u8 *__base_D_8021EEC2;
  int __repair_literal;
  s32 s0;
  u8 *__base_D_80187BF0;
  u8 *__base_D_8021F270;
  s32 v;
  s32 i;
  s32 j;
  u16 st;
  u8 nb;
  u8 idx;
  s0 = func_8014A870(0x14, 3, D_8021E15F);
  do
  {
    st = *((u16 *) (D_8011F32E + ((((u32) arg0) & 0xFFFF) * 0x64)));
  }
  while (0);
  switch (st)
  {
    default:
      if (st != 0)
    {
      return;
    }
      v = s0 & 0xF;
      break;

    case 32:
      do
    {
      i = 0;
      if (D_8011F350[D_8018BC3C].f0 == 0)
      {
        do
        {
          j = 0;
          __repair_rows:
          {
            __base_D_80187BF0 = D_80187BF0; __base_D_8021F270 = D_8021F270; __repair_literal = 0x10;
            *inline_fn2(__base_D_8021F270, i, __repair_literal, j * 2) = *((u16 *) ((__base_D_80187BF0 + inline_fn2345(i, 0x12)) + (j * 2)));
            do
            {
              if (s0)
              {
                j++;
              }
              else
              {
                j++;
              }
            }
            while (0);
          }

 do { if (j <= (8 - 1)) { goto __repair_rows; } D_8021F048[inline_fn23(i)] = D_8021F036[i]; } while (0);
          i++;
        }
        while ((s0 = i) < 0xE);
        func_800DE38C();
        func_800DE2E0();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_8021AFDC = 0x12; D_80168BB0 = 0x10;
      }
    }
    while (0);
      return;
      do
    {
      case 16:
        v = s0 & 0xF;

      break;
    }
    while (0 * 0);

  }

  idx = D_8021B420[v];
  if (idx != 0xFF)
  {
    nb = D_8021B430[inline_fn(D_8021EEC1) + idx];
    if (inline_fn234(nb))
    {
      D_8021EEC1 = (int) nb;
      func_8014B854(0x3B);
    }
  }
  func_80211B90();
  if (s0 & 0x80)
  {
    __base_D_8021EEC2 = &D_8021EEC2;
    if ((*__base_D_8021EEC2) != 0)
    {
      (*__base_D_8021EEC2)--;
      func_8014B854(0x3B);
    }
  }
  if (s0 & 0x40)
  {
    if ((*__base_D_8021EEC2) != 7)
    {
      func_8014B854(0x3B);
      (*__base_D_8021EEC2)++;
    }
  }
  if (s0 & 0x10)
  {
    func_8014B854(0x3D);
    if (D_8021EEC1 == 0x5A)
    {
      func_80203DF8(2, 6, 0, 0, 0);
      *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 0x20;
    }
  }
  if (s0 & 0x20)
  {
    func_8014B854(0x3B);
    D_8021EFA0 &= 0xFFFF7FFF;
  }
}

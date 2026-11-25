typedef struct 
{
  u16 st;
  u8 pad[98];
} Slot;
extern Slot D_8011F32E[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern s32 D_8021E130;
extern s8 D_8021E189;
void func_800DE2E0();
void func_800DE38C();
void func_801CF468();
void func_80203DF8();
void func_80231C5C();
inline static int inline_fn(s32 arg0)
{
  return arg0 >= 0x186;
}

inline static int inline_fn2()
{
  return D_8021E130 >= 0x2D0;
}

volatile unsigned char func_80214504(u16 arg0)
{
  switch (D_8011F32E[arg0 & 0xFFFF].st)
  {
    int __repair_constant = 0x28;
    do
    {
      case 0:
      {
        long long phantom_wide = arg0;
      }

      D_8021E130 = 0;
      do
      {
        D_8021E189 = 0;
        do
        {
          D_8011F32E[arg0 & 0xFFFF].st = 1;
        }
        while (0);
        func_80203DF8(1, (long long) 0x78, 0xFF);
      }
      while (0);
      return;
      case 1:
        if (D_8021E130 == 0x10E)
      {
        func_80203DF8(2, 0x78, 0, 0, 0);
      }

      if (inline_fn(D_8021E130))
      {
        func_80203DF8(1, 0x78, 0xFF, 0xFF, 0xFF);
        (&D_8011F32E[arg0 & 0xFFFF])->st = 3;
      }
      D_8021E130 += 1;
      return;
    }
    while (0);
    case 3:
      if (D_8021E130 == 0x24E)
    {
      func_80203DF8(2, 0x78, 0, 0, 0);
    }
      if (inline_fn2())
    {
      D_8011F32E[arg0 & 0xFFFF].st = 2;
    }
      D_8021E130 += 1;
      if (1)
    {
      return;
    }

    case 2:
      func_800DE38C();
      func_800DE2E0();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_8021AFDC = 0x28;
      D_80168BB0 = __repair_constant;
      return;

    case 4:
      break;

  }

}


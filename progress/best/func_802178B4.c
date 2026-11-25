typedef struct PRSlot
{
  u8 pad00[2];
  u16 f02;
  u8 pad04[9];
  u8 f0D;
  u8 pad0E[2];
  u16 f10;
  u8 pad12[0x2C];
  u16 f3E;
  u8 pad40[4];
  f32 f44;
  s32 f48;
  f32 f4C;
  u8 pad50[0x10];
  void *f60;
} PRSlot;
extern PRSlot D_8011F2F0[];
extern volatile unsigned short D_8018BC3C;
extern u16 D_8021C114;
extern u16 D_8021C116;
extern u8 D_8021C110;
extern s32 D_801E99C0;
extern u16 D_800E1850;
void func_80203DF8(long long, s32, s32, s32, unsigned long long);
void func_80211C7C(s32);
volatile short func_802178B4(u16 idx)
{
  u16 st = D_8011F2F0[idx].f3E;
  if (st < 6)
  {
    switch (st)
    {
      case 0:
        if (D_8011F2F0)
      {
        {
          long long phantom_wide2 = idx;
        }
        D_8021C114 = 0;
        D_8021C116++;
      }
      else
      {
        D_8021C114 = D_8018BC3C * 0;
        D_8021C116++;
      }
        do
      {
        ((PRSlot *) (*(D_8011F2F0 + D_8018BC3C)).f60)->f60 = 0;
        if (D_8021C116 >= 0x14)
        {
          if (D_8011F2F0)
          {
            if (1)
            {
              D_8011F2F0[idx].f3E = 5;
            }
            D_8021C116 = 0;
            func_80203DF8(1, 0x3C, 0xFF, 0xFF, 0xFF);
          }
          else
          {
            D_8011F2F0[idx].f3E = 5;
            D_8021C116 = 0;
            func_80203DF8(1, 0x3C, 0xFF, 0xFF, 0xFF);
          }
        }
        break;
      }
      while (0);
        if (1)
      {
        {
          long long phantom_wide = idx;
        }
        case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          default:
          break;






      }

    }

  }
}


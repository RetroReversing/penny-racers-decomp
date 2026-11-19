extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80190CB6;
extern u8 D_8021EEC2;
extern s32 D_8021EFA0;
extern void func_80211C7C(s32);
extern void func_80211B90(void);
extern void func_802117AC(void);
extern void func_80211094(void);
extern u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8021078C(u16 arg0)
{
  u16 *sp = &D_80190CB6;
  u8 *p = D_8011F2F0 + (arg0 * 100);
  u8 *q = &D_8021EEC2;
  do
  {
    func_80211C7C(0x14);
  }
  while (0);
  switch (*((u16 *) (p + 0x3E)))
  {
    case 0:
      if ((*(*((u8 **) (D_8011F350 + (D_8018BC3C * 100))))) == 0)
    {
      *((u16 *) (p + 0x3E)) = 0x10;
    }
      break;

    case 0x10:
      *sp = func_800DE41C(0, 0, 3, 0, 0x4F, 0, 0, func_802117AC, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      D_8021EFA0 = (D_8021EFA0 & (~0x4000)) | 0x8000;
      *((u16 *) (p + 0x3E)) = 0x11;

    case 0x11:
      if (!(D_8021EFA0 & 0x8000))
    {
      D_8011F2FD[(*sp) * 100] = 2;
      *((u16 *) (p + 0x3E)) = 0x20;
    }
      break;

    case 0x20:
      if (q || p)
    {
      *sp = func_800DE41C(0, 0, 3, 0, 0x4F, 0, 0, func_80211094, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      q[0] = 0;
      q[-1] = 0x5A;
      func_80211B90();
      *((s32 *) (q + 0xDE)) |= 0xC000;
      *((u16 *) (p + 0x3E)) = 0x21;
    }
    else
    {
      *sp = func_800DE41C(0, 0, 3, 0, 0x4F, 0, 0, func_80211094, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      q[0] = 0;
      q[-1] = 0x5A;
      func_80211B90();
      *((s32 *) (q + 0xDE)) |= 0xC000;
      *((u16 *) (p + 0x3E)) = 0x21;
    }

    case 0x21:
      if (!(D_8021EFA0 & 0x8000))
    {
      D_8011F2FD[(*sp) * 100] = 2;
      *((u16 *) (p + 0x3E)) = 0x10;
    }
      break;

  }

}


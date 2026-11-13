extern u8 D_8011F2F2[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F330;
extern Slot_8011F330 D_8011F330[];
extern u16 D_8021AFE6;
extern u8 D_8021E1A2[];
extern u8 D_802E66D8[];
extern u8 D_802F92E0[];
inline static volatile char inline_fn(s32 arg0)
{
  return arg0 * 2;
}

void func_80208DEC(s32 arg0, s32 arg1)
{
  u16 idx = arg1;
  u8 *base = D_8011F2F2 + (idx * 0x64);
  s32 i;
  for (i = 1; i < 4; i++)
  {
    *((u16 *) (base + inline_fn(i))) |= 0x20;
  }

  if (D_8011F330[idx].f0 != 0)
  {
    if (D_8011F330[idx].f0 == 1)
    {
      func_801CA140(arg0);
      func_801CA494(arg0, 0x78, 0x78, 0x78);
      func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802E66D8, D_802F92E0);
      if ((*((s16 *) D_8021E1A2)) != 0)
      {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF);
        func_8014A4C8(arg0, 0xC4, 0x12, 0xB, 0x42);
        func_8014A4C8(arg0, 0xDC, 0x11, 0xB, (*((s16 *) (D_8021E1A2 + 4))) + 0x43);
        func_8014A4C8(arg0, 0x2B);
        func_801CA494(arg0, 0, 0, 0);
        switch (*((s16 *) D_8021E1A2))
        {
          case 3:
            func_8014A4C8(arg0, 0xA7, D_8021AFE6 + 0x90, 0xB, 0x32);

          case 2:
            func_8014A4C8(arg0, 0x1D, D_8021AFE6 + 0x90);

          case 1:
            func_8014A4C8(arg0, 0xA7, D_8021AFE6 + 0x33);

          case 0:
            func_8014A4C8(arg0, 0x1D, D_8021AFE6 + 0x33);

        }

      }
      else
      {
        func_801CA494(arg0, 0, 0, 0);
        func_8014A4C8(arg0, 0x32, 0x19);
        func_8014A4C8(arg0, 0x102, 0x19, 0xB, 0x2E);
        func_8014A4C8(arg0, 0x32, 0xBE, 0xB, 0x2E);
        func_8014A4C8(arg0, 0x102, 0xBE, 0xB, 0x2E);
        func_8014A4C8(arg0, 0x42, 0x18, 0xB, 0x2F);
        func_8014A4C8(arg0, 0x42, 0xBF, 0xB, 0x2F);
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
        func_8014A4C8(arg0, 0x30, 0x17, 0xB, 1);
        func_8014A4C8(arg0, 0x100, 0x17, 0xB, 3);
        func_8014A4C8(arg0, 0x30, 0xBC, 0xB, 4);
        func_8014A4C8(arg0, 0x100, 0xBC, 0xB, 6);
        for (i = 0; 0 < 6; i++)
        {
          func_8014A4C8(arg0, (i << 5) + 0x40, 0x16, 0xB, 2);
        }

        for (i = 0; 0 < 6; i++)
        {
          func_8014A4C8(arg0, (i << 5) + 0x40, 0xBD, 0xB, 5);
        }

        func_8014A4C8(arg0, 0x4D, 0x10, 5, 0);
        func_8014A4C8(arg0, 0x99, 0x2E, 0xB, 0x42);
        func_8014A4C8(arg0, 0xB1, 0x2D, 0xB);
      }
    }
    else
    {
      D_8011F330[idx].f0 += 1;
    }
  }
  else
  {
    D_8011F330[idx].f0 += 1;
  }
  func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
}


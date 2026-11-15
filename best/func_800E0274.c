extern u8 D_8011F2F0[];
extern u8 D_800E2660[];
extern u8 D_80126FF6;
extern u8 D_80126FF7;
extern u32 D_800E1860[];
extern u32 D_800E1874;
extern u32 D_800E1880;
extern u32 D_800E188C;
extern u32 D_800E1890;
extern f64 D_800E1E40;
void guScale(void *m, f32 x, f32 y, f32 z);
void guTranslate(void *m, s32 x, s32 y, s32 z);
void func_801FA678(void *p, s32 a, s32 b, s32 c);
void func_800E0274(u32 **arg0, s32 arg1, s32 arg2)
{
  u8 *s2;
  u8 *s4;
  s32 s0;
  s32 s6;
  s32 s7;
  u8 *s1;
  u32 *dl;
  s2 = D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64);
  s4 = D_800E2660 + ((*((u16 *) (s2 + 0x3C))) * 0x308);
  s0 = arg2;
  if (!((*((u16 *) ((s2 + 2) + (D_80126FF6 * 2)))) & 0x20))
  {
    s6 = 0;
    if ((*((f32 *) (s2 + 0x30))) == D_800E1E40)
    {
      goto mask;
    }
    if ((*((f32 *) (s2 + 0x34))) == D_800E1E40)
    {
      s0 &= 0xFF;
      goto L398;
    }
    if ((*((f32 *) (s2 + 0x38))) == D_800E1E40)
    {
      s0 &= 0xFF;
      goto L398;
    }
    do
    {
      guScale((s4 + 0x288) + ((s0 & 0xFF) * 0x40), *((f32 *) (s2 + 0x30)), *((f32 *) (s2 + 0x34)), *((f32 *) (s2 + 0x38)));
    }
    while (0);
    s6 = 1;
    mask:
    s0 &= 0xFF;

    L398:
    s7 = s0 << 6;

    s1 = s4 + (s7 + 8);
    guTranslate(s1, *((s32 *) (s2 + 0x18)), *((s32 *) (s2 + 0x1C)), *((s32 *) (s2 + 0x20)));
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0x1020040;
    dl[1] = ((u32) s1) - 0x80000000u;
    s0 = (s4 + (s0 << 8)) + 0x88;
    func_801FA678((void *) (s0 + (D_80126FF6 * 0x40)), *((s32 *) (s2 + 0x24)), *((s32 *) (s2 + 0x28)), *((s32 *) (s2 + 0x2C)));
    s0 += D_80126FF6 * 0x40;
    dl = *arg0;
    *arg0 = dl + 2;
    dl[0] = 0x1000040;
    dl[1] = ((u32) s0) - 0x80000000u;
    if (s6 & 0xFF)
    {
      ;
      dl = *arg0;
      *arg0 = dl + 2;
      dl[0] = 0x1000040;
      dl[1] = ((u32) (s4 + (s7 + 0x288))) - 0x80000000u;
    }
    if (s2[0xB] != 0)
    {
      if (s2[0xC] == 0xFF)
      {
        if (D_80126FF7 != s2[0xB])
        {
          dl = *arg0;
          *arg0 = dl + 2;
          dl[0] = 0x6000000;
          dl[1] = D_800E1860[s2[0xB]];
        }
        D_80126FF7 = s2[0xB];
      }
      else
      {
        switch (s2[0xB])
        {
          case 1:

          case 9:
            if (D_80126FF7 != 0xB)
          {
            dl = *arg0;
            *arg0 = dl + 2;
            dl[0] = 0x6000000;
            dl[1] = D_800E188C;
          }
            D_80126FF7 = 0xB;
            break;

          case 2:

          case 10:
            if (D_80126FF7 != 0xC)
          {
            dl = *arg0;
            *arg0 = dl + 2;
            dl[0] = 0x6000000;
            dl[1] = D_800E1890;
          }
            D_80126FF7 = 0xC;
            break;

          case 3:

          case 4:
            if (D_80126FF7 != 5)
          {
            dl = *arg0;
            *arg0 = dl + 2;
            dl[0] = 0x6000000;
            dl[1] = D_800E1874;
          }
            D_80126FF7 = 5;
            break;

          case 6:

          case 7:
            if (D_80126FF7 != 8)
          {
            dl = *arg0;
            *arg0 = dl + 2;
            dl[0] = 0x6000000;
            dl[1] = D_800E1880;
          }
            D_80126FF7 = 8;
            break;

          case 5:

          case 8:

          default:
            if (D_80126FF7 != s2[0xB])
          {
            dl = *arg0;
            *arg0 = dl + 2;
            dl[0] = 0x6000000;
            dl[1] = D_800E1860[s2[0xB]];
          }
            D_80126FF7 = s2[0xB];
            break;

        }

      }
      dl = *arg0;
      *arg0 = dl + 2;
      dl[0] = 0xFA000000;
      dl[1] = s2[0xC] | 0xFFFFFF00;
    }
    if (!((*((u16 *) ((s2 + 2) + (D_80126FF6 * 2)))) & 0x4))
    {
      void (*fn)(u32 **, s32) = *((void (**)(u32 **, s32)) (s2 + 0x58));
      if (fn)
      {
        fn(arg0, arg1 & 0xFFFF);
      }
    }
  }
}


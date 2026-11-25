s32 func_8014A870(u32, s32, s32);
void func_801D651C(s32, s32);
extern s8 D_8021DEB0[];
extern u8 D_80190C9C[];
extern u8 D_8011F2F0[];
extern u8 D_80190CB0;
extern u8 D_801C5E9C[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 D_801CA13C;
extern u16 D_8021E19C;
extern u16 D_80190C9A;
void func_80215DE0(int arg0_in)
{
  int arg0;
  u8 *__base_D_801C5EA0;
  s8 tmp[3];
  u16 *rec;
  s8 *src;
  u8 *s3;
  u8 *s0;
  u8 *p;
  u16 *w;
  u8 *q;
  u16 *tm;
  s32 flags;
  long v;
  u8 *__base_D_80190C9C;
  arg0 &= 0xFFFF;
  arg0 = arg0_in;
  if (v)
  {
    __base_D_80190C9C = D_80190C9C;
    tmp[0] = src[0];
    src = D_8021DEB0;
    tmp[1] = src[1];
    tmp[2] = src[2];
    rec = (u16 *) (D_8011F2F0 + (arg0 * 100));
    s3 = __base_D_80190C9C;
    s0 = __base_D_80190C9C + 2;
    flags = func_8014A870(0x1E, 7, 0);
  }
  else
  {
    __base_D_80190C9C = D_80190C9C;
    tmp[0] = src[0];
    src = D_8021DEB0;
    tmp[1] = src[1];
    tmp[2] = src[2];
    rec = (u16 *) (D_8011F2F0 + (arg0 * 100));
    s3 = __base_D_80190C9C;
    s0 = __base_D_80190C9C + 2;
    flags = func_8014A870(0x1E, 7, 0);
  }
  if (rec[0x1F] == 0x10)
  {
    goto EEC;
  }
  if ((((rec[0x1F] + 1) - 1) - 1) < (0x11 - 1))
  {
    if (rec[0x1F] == 0)
    {
      *s0 = 0;
      goto L9C;
    }
    return;
  }
  if (rec[0x1F] == 0x11)
  {
    {
      long long phantom_wide = arg0;
    }
    goto F20;
  }
  if (rec[0x1F] == 0x20)
  {
    goto T32;
  }
  return;
  L9C:
  v = D_801CA13C;

  if (!(v == 2))
  {
    if (v == 7)
    {
      *s0 = 2;
      *s3 = 2;
    }
    else
    {
      *s3 = 2;
    }
  }
  else
  {
    *s0 = 1;
    *s3 = 2;
  }
  __base_D_801C5EA0 = &D_801C5EA0;
  if ((*__base_D_801C5EA0) != 0)
  {
    *s3 = 3;
  }
  rec[0x1F] = 0x10;
  EEC:
  tm = &D_8021E19C;

  *tm += 8;
  if ((*tm) >= 0x100)
  {
    *tm = 0xFF;
    rec[0x1F] = 0x11;
  }
  return;
  F20:
  if (flags & 1)
  {
    if (flags || s3)
    {
      *s0 = (*s0) - 1;
    }
    else
    {
      *s0 = (*s0) - 1;
    }
    if ((*s0) == 0xFF)
    {
      *s0 = (*s3) - 1;
    }
  }

  if (flags & 2)
  {
    *s0 = (*s0) + 1;
    if ((*s3) == (*s0))
    {
      *s0 = 0;
    }
    func_801D651C(7, 0x3B);
  }
  D_801CA13C = tmp[*s0];
  if (flags & 0x10)
  {
    flags = 0;
    do
    {
      func_801D651C(7, 0x3D);
    }
    while (0);
    p = &D_80190CB0;
    *p = 0;
    switch (*s0)
    {
      case 0:
        if (s0)
      {
        w = &D_80190C9A;
        *w = 0x20;
      }
      else
      {
        w = &D_80190C9A;
        *w = 0x20;
      }
        if ((*(&D_801C5EA0)) == 0)
      {
        q = D_801C5E9C;
        q[0] = 3;
        q[1] = 5;
        q[2] = 0;
        q[3] = 0;
      }
        D_801C5EA1 = 0;
        break;

      case 1:
        D_80190C9A = 0x30;
        break;

      case 2:
        w = &D_80190C9A;
        *w = 0;
        do
      {
        rec[0x20] = 0x20;
        rec[0x1F] = 0x20; D_801C5EA1 = 1;
      }
      while (0);
        *(((u8 *) w) + 0x16) = 1;
        break;

      default:
        break;

    }

  }
  if (flags & 0x20)
  {
    do
    {
      func_801D651C(7, 0x3A);
    }
    while (0);
    D_80190C9A = 0;
    rec[0x20] = 0x20;
    rec[0x1F] = 0x20;
    D_801C5EA1 = 0;
  }
  return;
  T32:
  tm = &D_8021E19C;

  *tm -= 8;
  if ((*tm) & 0x8000)
  {
    *tm = 0;
    p = &D_80190CB0;
    *p = 0;
    w = (u16 *) (p - 0x16);
    if (!(((*w) == 0) && (D_801C5EA1 == 0)))
    {
      D_80190C9A = 0xF0;
    }
    else
    {
      D_80190C9A = 0xFA;
    }
  }
}


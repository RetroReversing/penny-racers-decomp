void func_80230960(void *);
void func_8003DE60(void *, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8022A770[];
extern u8 D_801833F0[];
extern u8 D_80183408[];
void func_8013F638(s16 arg0_in)
{
  volatile unsigned int arg0;
  u8 *s1;
  u8 *s0;
  s32 a0;
  s32 ty;
  s16 t;
  s1 = D_8011F2F0 + ((arg0 & 0xFFFF) * 100);
  ;
  a0 = (*((u8 *) s1)) * 0x8F0; s0 = D_8022A770 + a0;
  a0 = 0;
  if ((*((u16 *) (s1 + 0x3E))) != 1)
  {
    if ((*((u16 *) (s1 + 0x3E))) != 0)
    {
      return;
    }
    switch ((*((u16 *) (s0 + 0x53A))) - 1)
    {
      case 0:
        if (!((*((u16 *) (s0 + 0x560))) & 7))
      {
        *((u16 *) (s1 + 0x3E)) = 1;
      }
        break;

      case 1:
        if (!((*((u16 *) (s0 + 0x560))) & 0x20))
      {
        *((u16 *) (s1 + 0x3E)) = 1;
      }
        break;

      case 2:
        if (!((*((u16 *) (s0 + 0x560))) & 0xF))
      {
        *((u16 *) (s1 + 0x3E)) = 1;
      }
        break;

      case 3:
        if (!((*((u16 *) (s0 + 0x560))) & 0x10))
      {
        *((u16 *) (s1 + 0x3E)) = 1;
      }
        break;

      case 4:

      case 5:

      case 6:

      case 7:

      case 8:

      case 9:

      case 10:

      case 11:

      case 12:

      case 13:

      case 14:
        break;

    }

  }
  switch ((*((u16 *) (s0 + 0x53A))) - 1)
  {
    case 0:
      a0 = 5;
      break;

    case 1:
      a0 = 6;
      break;

    case 2:
      a0 = 3;
      break;

    case 3:
      a0 = 0x1E;
      break;

    case 4:

    case 5:

    case 6:

    case 7:

    case 8:

    case 9:

    case 10:

    case 11:

    case 12:

    case 13:

    case 14:
      break;

  }

  t = *((s16 *) (s0 + 0x55E));
  if (t >= 0)
  {
    *((u16 *) (s0 + 0x55E)) = t + (*((u16 *) (s1 + 0x40)));
    if (a0 < (*((s16 *) (s0 + 0x55E))))
    {
      if ((*((u8 *) (s0 + 0x879))) == 0)
      {
        *((u16 *) (s0 + 0x55E)) = a0;
      }
    }
  }
  if ((((u16) ((ty = *((u16 *) (s0 + 0x53A))) - 8)) < 2) || (ty == 0xA))
  {
    if ((6 - ((*((u16 *) (s0 + 0x560))) & 7)) < (*((s16 *) (s0 + 0x55E))))
    {
      *((u16 *) (s0 + 0x55E)) = 6 - ((*((u16 *) (s0 + 0x560))) & 7);
    }
  }
  if ((*((s16 *) (s0 + 0x55E))) != 0)
  {
    func_80230960(s0);
  }
  D_8011F2FD[(arg0_in & 0xFFFF) * 100] = 2;
  *((u16 *) (s1 + 0x3E)) = 2;
  if ((*((u16 *) (s0 + 0x53A))) == 0xB)
  {
    if (!((*((u8 *) (s0 + 0x879))) == 0))
    {
      if ((*((u8 *) (s0 + 0x879))) == 1)
      {
        func_8003DE60(D_80183408, *((u16 *) (s1 + 0x40)));
      }
    }
    else
    {
      func_8003DE60(D_801833F0, *((u16 *) (s1 + 0x40)));
    }
  }
}


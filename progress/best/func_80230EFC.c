extern u8 D_8011F330[];
extern u8 D_802328DB[];
extern s32 func_800DE41C();
extern void func_8013F638();
void func_80230EFC(u8 *a0)
{
  volatile unsigned int pad;
  s32 s0;
  s32 ret;
  u16 h;
  u8 *__base_D_8011F330;
  __base_D_8011F330 = D_8011F330;
  if ((*((u16 *) (a0 + 4))) >= 6)
  {
    return;
  }
  if ((*((s16 *) (a0 + 0x594))) >= 4)
  {
    return;
  }
  h = *((u16 *) (a0 + 0x53A));
  if (h == 0)
  {
    return;
  }
  s0 = 0;
  switch (a0[0x879])
  {
    case 0:
      switch (h)
    {
      case 1:

      case 2:

      case 3:

      case 4:

      case 5:

      case 6:

      case 7:

      case 8:

      case 9:

      case 10:

      case 12:

      case 13:

      case 14:
        s0 = 1;
        break;

      case 11:
        s0 = 0;
        break;

      case 15:
        s0 = 4;
        break;

    }

      break;

    case 1:
      switch (*((volatile u16 *) (a0 + 0x53A)))
    {
      case 1:

      case 2:

      case 3:

      case 4:

      case 5:

      case 6:

      case 7:

      case 8:

      case 9:

      case 10:

      case 12:

      case 13:

      case 14:
        s0 = 1;
        break;

      case 11:
        s0 = 0;
        break;

      case 15:
        s0 = 4;
        break;

    }

      break;

  }

  ret = func_800DE41C(0, a0[5], 3, 0, 0x20, 1, 0, func_8013F638, 0, 0, 0, 0, 0, 0, 0, 0);
  if (((u16) (ret + 2)) < 2)
  {
    return;
  }
  __base_D_8011F330 = D_8011F330;
  if (a0[0x879] == 1)
  {
    if (s0 == 0)
    {
      *((u16 *) (__base_D_8011F330 + (((u16) ret) * 100))) = D_802328DB[(*((s8 *) (a0 + 0x596))) * 5] << 1;
    }
    else
      if ((*((s8 *) (a0 + 0x596))) >= 4)
    {
      *((u16 *) (__base_D_8011F330 + (((u16) ret) * 100))) = 1;
    }
    else
    {
      *((u16 *) (__base_D_8011F330 + (((u16) ret) * 100))) = 0;
    }
  }
  else
  {
    u32 off = ((u16) ret) * 100;
    u32 b = (u32) D_802328DB;
    *((u16 *) (__base_D_8011F330 + off)) = *((u8 *) ((b + ((*((s8 *) (a0 + 0x596))) * 5)) + s0));
  }
}


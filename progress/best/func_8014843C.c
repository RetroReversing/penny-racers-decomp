extern u8 D_80189B34;
extern u8 D_80189B36;
extern u8 D_8018A276;
extern u8 D_8018BC36;
extern u8 D_8018BC37;
extern u8 D_8018BC38;
extern s16 D_8021E1A2;
void func_8014843C(void)
{
  u8 *__base_D_8018BC38;
  u8 *__base_D_8018BC36;
  u8 *__base_D_8018A276;
  u8 *base;
  register s32 i;
  i = 0;
  do
  {
    *(((u8 *) (__base_D_8018A276 = &D_8018A276)) + i) = 0xFF;
    if (1)
    {
      if (__base_D_8018BC36)
      {
        i++;
      }
      else
      {
        i++;
      }
    }
  }
  while (((6 - 1) >= ((i - 1) + 1)) ^ ((*(__base_D_8018BC36 + 2)) * 0));
  base = __base_D_8018A276;
  if (D_80189B34 == 2)
  {
    base[0] = 3;
    __base_D_8018BC38 = &D_8018BC38;
    base[1] = *(__base_D_8018BC38 + 0);
    base[2] = *(__base_D_8018BC38 + 1);
    base[3] = *(__base_D_8018BC38 + 2);
  }
  if (D_80189B34 == 1)
  {
    switch (D_8021E1A2)
    {
      case 2:
        if (1)
      {
      }
        do
      {
        if (!(D_80189B36 & 0x40))
        {
          base[0] = 1; base[1] = D_8018BC37;
          return;
        }
      }
      while (0);
        if (D_80189B34)
      {
        base[0] = 2;
        base[1] = *__base_D_8018BC36;
        __base_D_8018BC36 = &D_8018BC36;
        base[2] = *(__base_D_8018BC36 + 1);
        return;
      }
      else
      {
        base[0] = 2;
        base[1] = *__base_D_8018BC36;
        __base_D_8018BC36 = &D_8018BC36;
        base[2] = *(__base_D_8018BC36 + 1);
        return;
      }

      case 3:
        if (!(D_80189B36 & 0x40))
      {
        base[0] = 1;
        base[1] = *__base_D_8018BC38;
        return;
      }
        base[0] = 3;
        base[2] = *(__base_D_8018BC36 + 1);
        base[1] = *(&D_8018BC36);
        base[3] = *(__base_D_8018BC36 + 2);
        return;

      default:
        if (D_8021E1A2 != D_80189B34)
      {
        return;
      }
        base[0] = 1;
        base[1] = *__base_D_8018BC36;
        return;

    }

  }
}


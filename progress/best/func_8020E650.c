s32 func_80148230();
extern u8 D_801C5EA0;
extern s16 D_8021E18C;
extern s8 D_8021E190;
extern s32 D_8021E1A2;
long func_8020E650(void)
{
    s8 *__base_D_8021E190;
  s32 var_v0;
    s16 *__base_D_8021E18C;

    __base_D_8021E18C = &D_8021E18C;
  if (((*((s16 *) (((char *) (&D_8021E1A2)) + 0))) < 2) && ((func_80148230() & 0xFF) == 2))
  {
    *((s8 *) (((char *) (&D_8021E1A2)) + (-0x12))) = 0;
    *((s8 *) (((char *) (&D_8021E1A2)) + (-0x13))) = 8;
  }
  else
    if ((*((s16 *) (((char *) (&D_8021E1A2)) + 0))) < 2)
  {
    if (((func_80148230() & 0xFF) == 1) || (!(func_80148230() & 0xFF)))
    {
      __base_D_8021E190 = &D_8021E190;
      *((s8 *) (((char *) (__base_D_8021E190)) + 0)) = 0;
      goto block_9;
    }
    if ((*((s16 *) (((char *) (&D_8021E1A2)) + 0))) >= 2)
    {
      goto block_8;
    }
  }
  else
  {
    block_8:
    *((s8 *) (((char *) (__base_D_8021E190)) + 0)) = 9;

    block_9:
    *((s8 *) (((char *) (__base_D_8021E190)) + (-1))) = 0x10;

    if (D_801C5EA0 == 1)
    {
      *((s8 *) (((char *) (__base_D_8021E190)) + (-1))) = 0x11;
    }
  }
  if ((*((s8 *) (((char *) ((&D_8021E18C))) + 3))) < (*((s16 *) (((char *) (__base_D_8021E18C)) + 0))))
  {
    var_v0 = (*((u8 *) (((char *) (__base_D_8021E18C)) + 4))) << 0x18;
    goto block_15;
  }
  if ((*((s16 *) (((char *) (__base_D_8021E18C)) + 0))) < ((s8) (*((u8 *) (((char *) (__base_D_8021E18C)) + 4)))))
  {
    var_v0 = ((u8) (*((s8 *) (((char *) (__base_D_8021E18C)) + 3)))) << 0x18;
    block_15:
    *((s16 *) (((char *) (__base_D_8021E18C)) + 0)) = (s16) (var_v0 >> 0x18);

  }
}


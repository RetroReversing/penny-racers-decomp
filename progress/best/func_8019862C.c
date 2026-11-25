extern s8 D_801C6BB9;
extern u16 D_801C6BE2[];
extern s8 D_801C7062[];
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
s32 func_8019862C(void)
{
  s8 *__base_D_801C7068;
  s32 a2 = 0;
  __base_D_801C7068 = &D_801C7068;
  if ((*__base_D_801C7068) < 0x17)
  {
    if (D_801C6BE2[((D_801C6BB9 * 3) << 3) + (*__base_D_801C7068)] == 0xFFFF)
    {
      if (((u8 *) D_801C7AB0)[1] != 5)
      {
        a2 = 1;
      }
      else
        if ((D_801C7062[0] == (*__base_D_801C7068)) && ((D_801C7062[1] == (D_801C6BB9 + 1)) || (D_801C7062[1] == (D_801C6BB9 - 1))))
      {
        a2 = (float) ((D_801C7469 == 1) | (D_801C7469 == 3));
      }
      else
        if ((D_801C7062[0] == ((*__base_D_801C7068) + 1)) && (D_801C7062[1] == D_801C6BB9))
      {
        if (D_801C7469 == 3)
        {
          a2 = 1;
        }
      }
      else
        if (D_801C7062[0] != ((*(&D_801C7068)) - 1))
      {
        a2 = 1;
      }
      else
        if (D_801C7062[1] != D_801C6BB9)
      {
        a2 = 1;
      }
      else
        if ((D_801C7469 == 0) | (D_801C7469 == 2))
      {
        a2 = 1;
      }
    }
  }
  return a2 & 0xFF;
}


extern s8 D_801C6BB9;
extern u16 D_801C6BDE[];
extern s8 D_801C7062[];
extern s8 D_801C7068;
extern u8 D_801C7469;
extern u8 *D_801C7AB0;

s32 func_8019839C(void)
{
  s32 r = 0;
  if (D_801C7068 != 0 && D_801C6BDE[D_801C6BB9 * 24 + D_801C7068] == 0xFFFF)
  {
    if (D_801C7AB0[1] == 5)
    {
      if (D_801C7062[0] == D_801C7068 && (D_801C7062[1] == D_801C6BB9 + 1 || D_801C7062[1] == D_801C6BB9 - 1))
      {
        if (D_801C7469 == 1 || D_801C7469 == 3)
          r = 1;
      }
      else if (D_801C7062[0] == D_801C7068 + 1 && D_801C7062[1] == D_801C6BB9)
      {
        if (D_801C7469 == 0 || D_801C7469 == 2)
          r = 1;
      }
      else if (D_801C7062[0] != D_801C7068 - 1 || D_801C7062[1] != D_801C6BB9 || D_801C7469 == 1)
        r = 1;
    }
    else
      r = 1;
  }
  return r & 0xFF;
}

extern s32 func_8019A4F8();
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 *D_801C7AB0;

s32 func_8019A31C(void)
{
  s32 r;
  if (D_801C7AB0[1] == 5)
  {
    if (D_801C7068 == 0 || D_801C7068 == 0x17)
    {
      if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) r = 0;
      else if (D_801C6BB9 == 1) r = 1;
      else if (D_801C6BB9 == 0x16) r = 2;
      else r = 3;
    }
    else if (D_801C7068 == 1)
    {
      if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) r = 4;
      else if (D_801C6BB9 == 1) r = 5;
      else if (D_801C6BB9 == 0x16) r = 6;
      else r = 7;
    }
    else if (D_801C7068 == 0x16)
    {
      if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) r = 8;
      else if (D_801C6BB9 == 1) r = 9;
      else if (D_801C6BB9 == 0x16) r = 10;
      else r = 11;
    }
    else
    {
      if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) r = 12;
      else if (D_801C6BB9 == 1) r = 13;
      else if (D_801C6BB9 == 0x16) r = 14;
      else r = 15;
    }
  }
  else
    r = func_8019A4F8();
  return r & 0xFF;
}

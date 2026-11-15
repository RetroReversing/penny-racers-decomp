extern s8 D_801C6BB9;
extern u8 D_801C6C10[];
extern s8 D_801C7062[];
extern s8 D_801C7063;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern u8 *D_801C7AB0;

s32 func_801984DC(void)
{
  s32 a1 = 0;

  if (!(D_801C6BB9 < 0x17))
  {
    goto END;
  }
  if (*((u16 *) (D_801C6C10 + ((D_801C6BB9 * 0x18 + D_801C7068) * 2))) != 0xFFFF)
  {
    goto END;
  }
  if (D_801C7AB0[1] != 5)
  {
    a1 = 1;
    goto END;
  }
  if (D_801C7062[0] != D_801C7068)
  {
    goto L2;
  }
  if (D_801C7062[1] != D_801C6BB9 + 1)
  {
    goto L1;
  }
  a1 = (D_801C7469 == 2);
  goto END;

L1:
  if (D_801C7062[0] != D_801C7068)
  {
    goto L2;
  }
  if (D_801C7062[1] != D_801C6BB9 - 1)
  {
    goto L2;
  }
  a1 = (D_801C7469 == 1) || (D_801C7469 == 3);
  goto END;

L2:
  if (D_801C7062[0] != D_801C7068 + 1 && D_801C7062[0] != D_801C7068 - 1)
  {
    a1 = 1;
    goto END;
  }
  if (D_801C7063 != D_801C6BB9)
  {
    a1 = 1;
    goto END;
  }
  a1 = (D_801C7469 == 0) || (D_801C7469 == 2);

END:
  return a1 & 0xFF;
}

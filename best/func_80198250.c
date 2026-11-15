extern s32 D_801C6BB0;
extern s8 D_801C6BB9;
extern s32 D_801C7062;
extern s8 D_801C7063;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
s32 func_80198250(void)
{
  s32 var_a1;
  var_a1 = 0;
  if ((D_801C6BB9 != 0) && ((*((&D_801C6BB0) + (((D_801C6BB9 * 0x18) + D_801C7068) * 2))) == 0xFFFF))
  {
    if ((*((u8 *) (1 + ((char *) D_801C7AB0)))) == 5)
    {
      if ((*((s8 *) (((char *) (&D_801C7062)) + 0))) == D_801C7068)
      {
        if ((*((s8 *) (((char *) (&D_801C7062)) + 1))) == (D_801C6BB9 + 1))
        {
 do { var_a1 = (D_801C7469 == 1) | (D_801C7469 == 3); } while (0);
        }
        else
          if (((*((s8 *) (((char *) (&D_801C7062)) + 0))) == D_801C7068) && ((*((s8 *) (((char *) (&D_801C7062)) + 1))) == (D_801C6BB9 - 1)))
        {
          if (D_801C7469 == 0)
          {
            var_a1 = 1;
          }
        }
        else
        {
          goto block_10;
        }
      }
      else
      {
        block_10:
        if (((((*((s8 *) (((char *) (&D_801C7062)) + 0))) != (D_801C7068 + 1)) && ((*((s8 *) (((char *) (&D_801C7062)) + 0))) != (D_801C7068 - 1))) || (D_801C7063 != D_801C6BB9)) || (((D_801C7469 == 0) | (D_801C7469 == 2)) != 0))
        {
          goto block_14;
        }

      }
    }
    else
    {
      do
      {
        block_14:
        var_a1 = 1;

      }
      while (0);
    }
  }
  return var_a1 & 0xFF;
}

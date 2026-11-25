s32 func_8014B854(s32);
extern volatile char D_801C6B20;
extern s8 D_801C6B21;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s32 D_801C6BB0;
extern s8 D_801C6BB9;
extern s32 D_801C7062;
extern s8 D_801C7063;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
extern u8 D_801C7AB8;
inline static s8 inline_fn(char *arg0)
{
  return *((s8 *) arg0);
}

void func_801948E0(u8 *arg0_in, const s32 *arg2)
{
  u8 *arg0;
  u8 var_v0;
  s32 *var_a2;
  u8 var_v0_2;
  arg0 = arg0_in;
  do
  {
    var_a2 = arg2;
    if (D_801C6BB9 > 0)
    {
      if ((*((const u8 *) (((char *) D_801C7AB0) + 1))) == 5)
      {
        var_a2 = &D_801C7062;
        do
        {
          if (((inline_fn(((char *) (&D_801C7062)) + 0) != D_801C7068) || ((((*((s8 *) (((char *) (&D_801C7062)) + 1))) != (D_801C6BB9 + 1)) || ((var_v0 = 4, ((((long long) D_801C7469) != 1) & (D_801C7469 != 3)) == 0))) && ((((*((s8 *) (((char *) (&D_801C7062)) + 0))) != D_801C7068) || ((*((s8 *) (((char *) (&D_801C7062)) + 1))) != (D_801C6BB9 - 1))) || ((var_v0 = 4, D_801C7469 == 0))))) && (((((D_801C7068 + 1) != (*((s8 *) (((char *) (&D_801C7062)) + 0)))) && ((*((s8 *) (((char *) (&D_801C7062)) + 0))) != (D_801C7068 - 1))) || (D_801C7063 != D_801C6BB9)) || ((var_v0 = 4, ((D_801C7469 != 0) & (D_801C7469 != 2)) == 0))))
          {
            var_v0 = 4;
            if ((*((u16 *) (((s8 *) (&D_801C6BB0)) + (((D_801C6BB9 * 0x18) + D_801C7068) * 2)))) == 0xFFFF)
            {
              if (!(D_801C7068 || var_v0))
              {
                var_v0 = 4;
              }
              else
              {
                var_v0 = 4;
              }
              if (D_801C6B25 != 2)
              {
                if (D_801C6B25 == (*arg0))
                {
                  var_v0_2 = 5;
                  goto block_25;
                }
                if (D_801C6B25 == 1)
                {
 do { var_v0_2 = 0x13; goto block_25; } while (0);
                }
                goto block_24;
                goto block_26;
              }
            }
          }
          goto block_31;
        }
        while (0);
      }
      var_v0 = 4;
      if (((*((u16 *) (((s8 *) (&D_801C6BB0)) + (((D_801C6BB9 * 0x18) + D_801C7068) * 2)))) == 0xFFFF) && ((var_v0 = 4, D_801C6B25 != 2)))
      {
        if (D_801C6B25 == (*arg0_in))
        {
          var_v0_2 = 5;
          goto block_25;
        }
        if (D_801C6B25 == 1)
        {
          var_v0_2 = 0x13;
          goto block_25;
        }
        block_24:
        if (D_801C6B25 == 3)
        {
          var_v0_2 = 0x10;
          block_25:
          D_801C6B20 = var_v0_2;

        }

        block_26:
        D_801C6B22 = 0;

        if (D_801C7469 || D_801C7068)
        {
          D_801C6B23 = -1;
        }
        else
        {
          D_801C6B23 = -1;
        }
        if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 4)
        {
          D_801C6B21 = 5; D_801C6B20 += 0x2E; D_801C6B21 = 0x33;
        }
        if (D_801C6B26 != 0)
        {
          func_8014B854(0x3B);
          D_801C6B24 = 1; D_801C6B26 = 0;
        }
      }
      else
      {
        goto block_31;
      }
    }
    else
    {
      var_v0 = D_801C7AB8;
      block_31:
      *arg0 = var_v0;

    }
  }
  while (0);
}

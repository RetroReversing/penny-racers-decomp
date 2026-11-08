extern s8 D_801C6BB9;
extern s32 D_801C6BDE;
extern s32 D_801C7062;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 | arg1;
}

s32 func_8019839C(void)
{
  s32 var_a2;
  s32 var_v0;
  s32 var_v1;
  var_a2 = 0;
  if ((D_801C7068 != 0) && ((*((&D_801C6BDE) + (((D_801C6BB9 * 0x18) + D_801C7068) * 2))) == 0xFFFF))
  {
    if ((*((u8 *) (((char *) D_801C7AB0) + 1))) == 5)
    {
      if (((*((s8 *) (((char *) (&D_801C7062)) + 0))) == D_801C7068) && (((*((s8 *) (((char *) (&D_801C7062)) + 1))) == (D_801C6BB9 + 1)) || ((*((s8 *) (((char *) (&D_801C7062)) + 1))) == (D_801C6BB9 - 1))))
      {
        var_v1 = D_801C7469 == 1;
        var_v0 = D_801C7469 ^ 3;
        goto block_7;
      }
      if ((*((s8 *) (((char *) (&D_801C7062)) + 0))) == (D_801C7068 + 1))
      {
        if ((*((s8 *) (((char *) (&D_801C7062)) + 1))) == D_801C6BB9)
        {
          var_v1 = D_801C7469 == 0;
          var_v0 = D_801C7469 ^ 2;
          block_7:
          if (inline_fn(var_v1, var_v0 == 0) != 0)
          {
            var_a2 = 1;
          }

        }
        else
        {
          goto block_13;
        }
      }
      else
      {
        block_13:
        if ((((*((s8 *) (((char *) (&D_801C7062)) + 0))) != (D_801C7068 - 1)) || ((*((s8 *) (((char *) (&D_801C7062)) + 1))) != D_801C6BB9)) || (D_801C7469 == 1))
        {
          goto block_16;
        }

      }
    }
    else
    {
      block_16:
      var_a2 = 1;

    }
  }
  return var_a2 & 0xFF;
}


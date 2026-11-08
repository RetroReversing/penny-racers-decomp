extern s8 D_801C6BB9;
extern s32 D_801C6C10;
extern s32 D_801C7062;
extern s8 D_801C7063;
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
inline static int inline_fn(s32 arg0, int arg1)
{
  return (arg0 | arg1) != 0;
}

inline static int inline_fn2(int arg0)
{
  return D_801C7469 ^ arg0;
}

s32 func_801984DC(void)
{
  s32 var_a1;
  s32 var_v0;
s32 __repair_result_var_v0;
  s32 var_v1;
  var_a1 = 0;
  if (((D_801C6BB9 + 1) <= 0x17) && ((*((&D_801C6C10) + (((D_801C6BB9 * 0x18) + D_801C7068) * 2))) == 0xFFFF))
  {
    if ((*((u8 *) (((char *) D_801C7AB0) + 1))) != 5)
    {
      var_a1 = 1;
    }
    else
      if ((*((s8 *) (((char *) (&D_801C7062)) + 0))) == D_801C7068)
    {
      if ((*((s8 *) (((char *) (&D_801C7062)) + 1))) != (D_801C6BB9 + 1))
      {
        if (((*((s8 *) (((char *) (&D_801C7062)) + 0))) == D_801C7068) && ((*((s8 *) (((char *) (&D_801C7062)) + 1))) == (D_801C6BB9 - 1)))
        {
          var_v1 = D_801C7469 == 1;
          var_v0 = D_801C7469 ^ 3;
          goto block_11;
        }
        goto block_13;
      }
      else
      {
        var_a1 = D_801C7469 == 2;
      }
    }
    else
    {
      block_13:
      if ((*((s8 *) (((char *) (&D_801C7062)) + 0))) != (D_801C7068 + 1))
      {
        if ((*((s8 *) (((char *) (&D_801C7062)) + 0))) != (D_801C7068 - 1))
        {
          var_a1 = 1;
        }
        else
        {
          goto block_17;
        }
      }
      else
      {
        block_17:
        if (D_801C7063 != D_801C6BB9)
        {
          var_a1 = 1;
        }
        else
        {
          var_v1 = D_801C7469 == 0;
          __repair_result_var_v0 = inline_fn2(2);
          block_11:
          if (inline_fn(var_v1, __repair_result_var_v0 == 0))
          {
            var_a1 = 1;
          }

        }

      }

    }
  }
  return var_a1 & 0xFF;
}


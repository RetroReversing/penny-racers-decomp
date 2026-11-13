extern s32 D_801C6BB0;
extern s8 D_801C6BB1;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;
inline static int inline_fn()
{
  return (*((s8 *) (((char *) (&D_801C6BB0)) + 0))) + 1;
}

s32 func_80198A90(void)
{
  s32 var_a2;
  s8 __repair_result_var_v1;
  s32 var_v0;
  var_a2 = 0;
  if ((D_801C6BB9 + 1) < (0x17 + 1))
  {
    int var_v1;
    switch (D_801C7469)
    {
      case 2:
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) == D_801C7068)
      {
        __repair_result_var_v1 = *((s8 *) (((char *) (&D_801C6BB0)) + 1));
        goto block_15;
      }
        goto block_17;
        do
      {
        case 3:
          var_v0 = inline_fn();

        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) != D_801C7068)
        {
          goto block_13;
        }
        goto block_14;
      }
      while (0);

      case 0:
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) != D_801C7068)
      {
        block_17:
        var_a2 = 1;

      }
      else
      {
        var_v1 = D_801C6BB9 + 1;
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 1))) != var_v1)
        {
          var_v0 = (*((s8 *) (((char *) (&D_801C6BB0)) + 1))) - 1;
          block_16:
          if (var_v1 != var_v0)
          {
            goto block_17;
          }

        }
      }
        break;

      case 1:
        var_v0 = (*((s8 *) (((char *) (&D_801C6BB0)) + 0))) - 1;
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) != D_801C7068)
      {
        block_13:
        if (var_v0 == D_801C7068)
        {
          goto block_14;
        }

        goto block_17;
      }
        block_14:
      var_v1 = D_801C6BB1;

        block_15:
      var_v0 = D_801C6BB9 + 1;

        goto block_16;

    }

  }
  return var_a2 & 0xFF;
}


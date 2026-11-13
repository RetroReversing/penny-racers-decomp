extern s32 D_801C6BB0;
extern s8 D_801C6BB1;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;
s32 func_80198B9C(void)
{
  s32 temp_v1;
  s32 var_a2;
  volatile int var_v0;
  s8 var_v1;
  var_a2 = 0;
  if (D_801C7068 < 0x17)
  {
    switch (D_801C7469)
    {
      case 0:
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) == (D_801C7068 + 1))
      {
        var_v1 = D_801C6BB9;
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 1))) != var_v1)
        {
          var_v0 = (*((s8 *) (((char *) (&D_801C6BB0)) + 1))) - 1;
          block_17:
          if (var_v1 != var_v0)
          {
            goto block_18;
          }

        }
      }
      else
      {
        block_18:
        var_a2 = 1;

      }
        break;

      case 1:
        temp_v1 = D_801C7068 + 1;
        if (((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) == temp_v1) || (((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) - 1) == temp_v1))
      {
        var_v1 = D_801C6BB1;
        block_16:
        var_v0 = D_801C6BB9;

        goto block_17;
      }
        goto block_18;

      case 2:
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) == (D_801C7068 + 1))
      {
        var_v1 = D_801C6BB9;
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 1))) != var_v1)
        {
          var_v0 = (*((s8 *) (((char *) (&D_801C6BB0)) + 1))) + 1;
          goto block_17;
        }
      }
      else
      {
        do
        {
          goto block_18;
        }
        while (0);
      }
        break;

      case 3:
        if ((*((s8 *) (((char *) (&D_801C6BB0)) + 0))) == (D_801C7068 + 1))
      {
        var_v1 = *((s8 *) (((char *) (&D_801C6BB0)) + 1));
        goto block_16;
      }
        goto block_18;

    }

  }
  return var_a2 & 0xFF;
}


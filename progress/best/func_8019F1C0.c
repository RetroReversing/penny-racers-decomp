extern signed char D_801C6BB0;
extern signed char D_801C6BB1;
s32 func_8014B854();
s32 func_80199EAC();
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;
inline static u8 inline_fn()
{
  return (u8) D_801C6BB9;
}

void func_8019F1C0(s32 arg0)
{
  int __repair_literal;
  signed char *__base_D_801C6BB1;
  s32 temp_v0;
  s32 temp_v1;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v0;
  s8 var_v0_2;
  do
  {
    temp_v0 = func_80199EAC(arg0 & 0xFFFF);
  }
  while (0);
  if (temp_v0 & 0xFF)
  {
    block_22:
    if ((temp_v0 & 0xFF) != 1)
    {
      var_v1 = temp_v0 & 0xFF;
      goto block_47;
    }

    if ((D_801C7068 - 1) <= (0 - 1))
    {
      var_v1 = temp_v0 & 0xFF;
      block_47:
      if (var_v1 != 2)
      {
        var_v1_2 = temp_v0 & 0xFF;
        goto block_72;
      }

      if (D_801C6BB9 < 0x17)
      {
        {
          long long phantom_wide = arg0;
        }
        switch ((u32) D_801C7469)
        {
          case 0:
            if ((D_801C6BB0 != D_801C7068) || (((*__base_D_801C6BB1) != (temp_v1_3 = D_801C6BB9 + 1)) && (((*__base_D_801C6BB1) - 1) != temp_v1_3)))
          {
            D_801C6BB9 = ((u8) D_801C6BB9) + 1;
            goto block_93;
          }
            break;

          case 1:
            if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 - 1) != D_801C7068)) || ((*__base_D_801C6BB1) != (D_801C6BB9 + 1)))
          {
            D_801C6BB9 = ((u8) D_801C6BB9) + 1;
            goto block_93;
          }
            break;

          case 3:
            if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 + 1) != D_801C7068)) || ((*__base_D_801C6BB1) != (D_801C6BB9 + 1)))
          {
            D_801C6BB9 = ((u8) D_801C6BB9) + 1;
            goto block_93;
          }
            break;

          case 2:
            if ((D_801C6BB0 != D_801C7068) || ((*__base_D_801C6BB1) != (D_801C6BB9 + 1)))
          {
            D_801C6BB9 = ((u8) D_801C6BB9) + 1;
            goto block_93;
          }
            break;

        }

      }
      else
      {
        var_v1_2 = temp_v0 & 0xFF;
        block_72:
        if ((var_v1_2 == 3) && (D_801C7068 < 0x17))
        {
          switch ((u32) D_801C7469)
          {
            case 3:
              if (D_801C6BB0 == (D_801C7068 + 1))
            {
              temp_v0 = *__base_D_801C6BB1;
              {
                var_v0 = D_801C6BB9;
                goto block_90;
              }
            }
              goto block_91;

            case 0:
              if (D_801C6BB0 == (D_801C7068 + 1))
            {
              temp_v0 = D_801C6BB9;
              __base_D_801C6BB1 = &D_801C6BB1;
              var_v0 = (*__base_D_801C6BB1) - 1;
              if ((*__base_D_801C6BB1) != temp_v0)
              {
                block_90:
                if (temp_v0 != var_v0)
                {
                  goto block_91;
                }

              }
            }
            else
            {
              do
              {
                block_91:
                D_801C7068 = ((u8) D_801C7068) + 1;

                goto block_92;
              }
              while (0);
            }
              break;

            case 1:
              temp_v0 = D_801C7068 + 1;
              if ((D_801C6BB0 == temp_v0) || ((D_801C6BB0 - 1) == temp_v0))
            {
              temp_v0 = *__base_D_801C6BB1;
              block_89:
              var_v0 = D_801C6BB9;

              goto block_90;
            }
              goto block_91;

            case 2:
              if (D_801C6BB0 == (D_801C7068 + 1))
            {
              temp_v0 = D_801C6BB9;
              var_v0 = (*__base_D_801C6BB1) + 1;
              if ((*__base_D_801C6BB1) != temp_v0)
              {
                goto block_90;
              }
            }
            else
            {
              do
              {
                goto block_91;
              }
              while (0);
            }
              break;

          }

        }

      }
    }
    else
    {
      switch ((u32) D_801C7469)
      {
        case 0:
          if ((D_801C6BB0 != (D_801C7068 - 1)) || (((*__base_D_801C6BB1) != D_801C6BB9) && (((*__base_D_801C6BB1) - 1) != D_801C6BB9)))
        {
          D_801C7068 = ((u8) D_801C7068) - 1;
          block_92:
          ;

          ;
          ;
          ;
          ;
          ;
          block_93:
          func_8014B854(0x3B);

        }
          break;

        case 1:
          if ((D_801C6BB0 != (D_801C7068 - 1)) || ((*__base_D_801C6BB1) != D_801C6BB9))
        {
          var_v0_2 = ((u8) D_801C7068) - 1;
          goto block_92;
        }
          break;

        case 2:
          if ((D_801C6BB0 != (D_801C7068 - 1)) || (((*__base_D_801C6BB1) != D_801C6BB9) && (((*__base_D_801C6BB1) + 1) != D_801C6BB9)))
        {
          var_v0_2 = ((u8) D_801C7068) - 1;
          goto block_92;
        }
          break;

        case 3:
          temp_v1_4 = D_801C7068 - 1;
          if (((D_801C6BB0 != temp_v1_4) && ((D_801C6BB0 + 1) != temp_v1_4)) || ((*__base_D_801C6BB1) != D_801C6BB9))
        {
          var_v0_2 = ((u8) D_801C7068) - 1;
          goto block_92;
        }
          break;

      }

    }
  }
  else
  {
    __repair_literal = 0;
    if (D_801C6BB9 > __repair_literal)
    {
      switch ((u32) D_801C7469)
      {
        case 0:
          if ((D_801C6BB0 != D_801C7068) || ((*__base_D_801C6BB1) != (D_801C6BB9 - 1)))
        {
          D_801C6BB9 = inline_fn() - 1;
          goto block_93;
        }
          break;

        case 1:
          if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 - 1) != D_801C7068)) || ((*__base_D_801C6BB1) != (D_801C6BB9 - 1)))
        {
          {
            long long phantom_wide2 = arg0;
          }
          D_801C6BB9 = ((u8) D_801C6BB9) - 1;
          goto block_93;
        }
          do
        {
          break;
        }
        while (0);

        case 2:
          if ((D_801C6BB0 != D_801C7068) || (((temp_v1 = D_801C6BB9 - 1, (*__base_D_801C6BB1) != temp_v1)) && (((*__base_D_801C6BB1) + 1) != temp_v1)))
        {
          D_801C6BB9 = ((u8) D_801C6BB9) - 1;
          goto block_93;
        }
          break;

        case 3:
          if (((D_801C6BB0 != D_801C7068) && ((D_801C6BB0 + 1) != D_801C7068)) || ((*__base_D_801C6BB1) != (D_801C6BB9 - 1)))
        {
          D_801C6BB9 = ((u8) D_801C6BB9) - 1;
          goto block_93;
        }
          break;

        case 4:
          break;

      }

    }
    else
    {
      goto block_22;
    }
  }
}


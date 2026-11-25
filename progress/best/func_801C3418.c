extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7078;
extern s32 D_801C7082;
extern s32 D_801C7083;
extern void *D_801C7AB0;
extern s32 D_801C7AD8;
u8 func_801C3418(void)
{
  s32 *__base_D_801C7082;
  s32 *__base_D_801C7083;
  s32 temp_v1;
  s32 var_a0;
  s32 var_v0_2;
  int var_v0;
  if ((*((u8 *) (((s8 *) (&D_801C7AD8)) + D_801C7078))) == 0xFF)
  {
    return *((u8 *) (((char *) D_801C7AB0) + 2));
  }
  if (var_a0)
  {
    var_a0 = 0;
  }
  else
  {
    var_a0 = 0;
  }
  if ((*((u8 *) (((char *) D_801C7AB0) + 2))) != 0)
  {
    var_v0_2 = 0 & 0xFF;
    for (;;)
    {
      temp_v1 = var_v0_2 * 5;
      do
      {
        __base_D_801C7082 = &(*((s32 *) 0x801c7078));
        if ((D_801C7068 != (*(__base_D_801C7082 + temp_v1))) || ((var_v0 = var_a0 & 0xFF, D_801C6BB9 != (*((__base_D_801C7083 = &(*((s32 *) 0x801c7078))) + temp_v1)))))
        {
          do
          {
            var_a0 += 1;
          }
          while (0);
          if (D_801C7AB0)
          {
            var_v0_2 = var_a0 & 0xFF;
          }
          else
          {
            var_v0_2 = var_a0 & 0xFF;
          }
          if (((u32) (var_a0 & 0xFF)) >= ((u8) (*((u8 *) (((char *) D_801C7AB0) + 2)))))
          {
            goto block_7;
          }
          continue;
        }
      }
      while (0);
      break;
    }

  }
  else
  {
    block_7:
    var_v0 = var_a0 & 0xFF;

  }
  if (D_801C7AB0 || var_a0)
  {
    return var_v0;
  }
  else
  {
    return var_v0;
  }
}


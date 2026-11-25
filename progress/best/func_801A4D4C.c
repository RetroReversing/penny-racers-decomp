extern char D_801C5EB0[];
extern char D_801C5EC8[];
extern u8 D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
s32 func_801A4D4C(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a0;
  s32 var_t0;
  s32 var_v0;
  u8 var_a1;
  u8 var_a3;
  char *__base_D_801C5EB0;
  __base_D_801C5EB0 = D_801C5EB0;
  var_t0 = 0;
  if ((((char) (arg1 & 0xFF)) & 0xFF) == (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    return 0;
  }
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    var_a3 = *(D_801C7084 + (((arg1 & 0xFF) & 0xFF) * 5));
  }
  else
  {
    var_a3 = (*(D_801C7084 + (((arg1 & 0xFF) & 0xFF) * 5))) - 0x2E;
  }
  var_a0 = ((unsigned short) ((arg1 & 0xFF) & 0xFF)) * 5;
  var_v0 = 0 & 0xFF;
  if ((*(D_801C7081 + ((arg0 & 0xFF) * 5))) == (*(D_801C7081 + var_a0)))
  {
    if (((u32) ((unsigned char) (var_a3 - 5))) < 5U)
    {
      var_a1 = *(D_801C5EC8 + (arg2 & 0xFF));
      goto block_10;
    }
    if (((u32) ((var_a3 - 0x25) & 0xFF)) < 5U)
    {
      var_a0 = ((arg1 & 0xFF) & 0xFF) * 5;
      *(D_801C7081 + var_a0) = 0x3C;
      var_a1 = *(__base_D_801C5EB0 + (arg2 & 0xFF));
      block_10:
      *(D_801C7084 + var_a0) = var_a1;

      var_t0 = 1;
      if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
      {
        *(D_801C7084 + var_a0) = var_a1 + 0x2E;
      }
    }
    var_v0 = var_t0 & 0xFF;
  }
  return var_v0;
}


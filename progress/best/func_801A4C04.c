extern char D_801C5EB0[];
extern char D_801C5ED0[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
s32 func_801A4C04(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a0;
  s32 var_t0;
  s32 var_v0;
  u8 var_a1;
  u8 var_a3;
  char *__base_D_801C5EB0;
  __base_D_801C5EB0 = D_801C5EB0;
  var_t0 = 0;
  if ((arg1 & 0xFF) == (*((u8 *) (((char *) D_801C7AB0) + 2))))
  {
    return 0;
  }
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    var_a3 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
  }
  else
  {
    var_a3 = (*(D_801C7084 + ((((unsigned char) arg1) & 0xFF) * 5))) - 0x2E;
  }
  if (var_t0 || var_a1)
  {
    var_a0 = (arg1 & 0xFF) * 5;
    var_v0 = 0 & 0xFF;
  }
  else
  {
    var_a0 = (arg1 & 0xFF) * 5;
    var_v0 = 0 & 0xFF;
  }
  if ((*(D_801C7081 + ((arg0 & 0xFF) * 5))) == (*(D_801C7081 + var_a0)))
  {
    if (((((u32) ((unsigned short) ((unsigned char)(var_a3 - 5)))) + 1) - 1) <= (5U - 1))
    {
      var_a1 = *(D_801C5ED0 + (arg2 & 0xFF));
      goto block_10;
    }
    if (((u32) ((var_a3 - 0x20) & 0xFF)) < 5U)
    {
      var_a0 = (arg1 & 0xFF) * 5;
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


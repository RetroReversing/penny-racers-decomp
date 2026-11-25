extern char D_801C5EA8[];
extern char D_801C5EC0[];
extern u8 D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
inline static int inline_fn(u8 arg0)
{
  return arg0 & 0xFF;
}

s32 func_801A41D4(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a0;
  char var_t0;
  unsigned long var_v0;
  s32 var_v1;
  u8 var_a1;
  u8 var_a3;
  do
  {
    var_t0 = 0;
    if ((*((u8 *) (((char *) D_801C7AB0) + 2))) == (arg1 & 0xFF))
    {
      return 0;
    }
  }
  while (0);
  if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 3)
  {
    var_a3 = *(D_801C7084 + (inline_fn(arg1) * 5));
    var_v1 = arg0 & 0xFF;
  }
  else
  {
    var_a3 = (*(D_801C7084 + (inline_fn(arg1) * 5))) - 0x2E;
    do
    {
      var_v1 = inline_fn(arg0);
    }
    while (0);
  }
  if (arg0)
  {
    var_a0 = inline_fn(arg1) * 5;
    var_v0 = inline_fn(0);
  }
  else
  {
    do
    {
      var_a0 = inline_fn(arg1) * 5;
    }
    while (0);
    var_v0 = 0 & 0xFF;
  }
  if ((*(D_801C7081 + (var_v1 * 5))) == (*(D_801C7081 + var_a0)))
  {
    if (((u32) inline_fn(var_a3)) < 5U)
    {
      var_a1 = *(D_801C5EC0 + inline_fn(arg2));
      goto block_10;
    }
    if (((u32) ((unsigned char) (var_a3 - 0x16))) <= (5U - 1))
    {
      var_a0 = (arg1 & 0xFF) * 5;
      *(D_801C7081 + var_a0) = 0x3C;
      var_a1 = *((u16 *) (D_801C5EA8 + inline_fn(arg2)));
      block_10:
      *(D_801C7084 + var_a0) = var_a1;

      var_t0 = 1;
      if ((float) ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4))
      {
        *(D_801C7084 + var_a0) = var_a1 + 0x2E;
      }
    }
    var_v0 = inline_fn(var_t0);
  }
  return var_v0;
}


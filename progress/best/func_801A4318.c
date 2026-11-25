extern char D_801C5EA8[];
extern char D_801C5EB8[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void * volatile D_801C7AB0;
inline static u8 inline_fn(u8 *arg0)
{
  return *arg0;
}

inline static u8 inline_fn2(char *arg0, unsigned char arg1)
{
  return inline_fn(arg0 + (arg1 * 5));
}

inline static u8 inline_fn23(char *arg0, s32 arg1)
{
  return inline_fn(arg0 + arg1);
}

s32 func_801A4318(s32 arg0, s32 arg1, s32 arg2)
{
  char *__base_D_801C7081;
  s32 var_a0;
  s32 var_t0;
  s32 var_v0;
  unsigned char var_v1;
  u8 var_a1;
  s32 var_a3;
  char *__base_D_801C5EA8;
  if (D_801C7081 || arg1)
  {
    __base_D_801C5EA8 = D_801C5EA8;
    var_t0 = 0;
  }
  else
  {
    __base_D_801C5EA8 = D_801C5EA8;
    var_t0 = 0;
  }
  if ((arg1 & 0xFF) == inline_fn((u8 *) (((char *) D_801C7AB0) + 2)))
  {
    return 0;
  }
  if (inline_fn((u8 *) (((char *) D_801C7AB0) + 0)) == 3)
  {
    var_a3 = inline_fn2(D_801C7084, arg1 & 0xFF);
    var_v1 = arg0 & 0xFF;
  }
  else
  {
    var_a3 = inline_fn23(D_801C7084, (arg1 & 0xFF) * 5) - 0x2E;
    do
    {
      var_v1 = arg0 & 0xFF;
    }
    while (0);
  }
  var_a1 = 0xFF & arg1; var_a0 = var_a1 * 5;
  var_v0 = 0 & 0xFF;
  __base_D_801C7081 = D_801C7081;
  if (inline_fn2(__base_D_801C7081, var_v1) == inline_fn23(__base_D_801C7081, var_a0))
  {
    if (((u32) (var_a3 & 0xFF)) < 5U)
    {
      var_a1 = inline_fn23(D_801C5EB8, arg2 & 0xFF);
      goto block_10;
    }
    if (((u32) ((var_a3 - 0x1B) & 0xFF)) < 5U)
    {
      if (1)
      {
        var_a3 = arg1 & 0xFF; var_a0 = var_a3 * 5;
      }
      *(D_801C7081 + var_a0) = 0x3C;
      var_a1 = inline_fn23(__base_D_801C5EA8, arg2 & 0xFF);
      block_10:
      *(D_801C7084 + var_a0) = var_a1;

      var_t0 = 1;
      if (inline_fn((u8 *) (((char *) D_801C7AB0) + 0)) == 4)
      {
        *(D_801C7084 + var_a0) = var_a1 + 0x2E;
      }
    }
    var_v0 = var_t0 & 0xFF;
  }
  return var_v0;
}


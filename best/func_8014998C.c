inline static int __repair_inline(s32 a, s32 b)
{
  return a > b;
}

extern u8 D_80189B34;
extern u8 D_8018BC35[];
extern s32 D_8018BC36;
extern u8 D_8018BC37;
extern u8 D_8018BC38;
extern s16 D_8021E1A2;
extern s32 D_80237632;
extern u8 D_80237633;
extern u8 D_80237635;
extern u8 D_80237637;
extern u8 D_80237639;
void func_8014998C(void)
{
  unsigned short var_v0;
  char *__repair_addr;
  s32 var_v1;
  var_v1 = 0;
  do
  {
    *(D_8018BC35 + var_v1) = 0xFF;
    var_v1 += 1;
  }
  while (__repair_inline(6, var_v1));
  if (D_80189B34 == 2)
  {
    var_v1 = 0;
    var_v0 = 0 * 2;
    do
    {
      __repair_addr = (char *) (var_v0 + (&D_80237632));
      *(D_8018BC35 + var_v1) = *((u8 *) (((char *) __repair_addr) + 1));
      var_v1 += 1;
      var_v0 = var_v1 * 2;
    }
    while (__repair_inline(6, var_v1));
  }
  if (D_80189B34 == 1)
  {
    switch (D_8021E1A2)
    {
      default:
        if (D_8021E1A2 != D_80189B34)
      {
        return;
      }
        do
      {
        block_15:
        *((u8 *) (((char *) (&D_8018BC36)) + 0)) = (u8) D_80237635;

        *((u8 *) (((char *) (&D_8018BC36)) + (-1))) = (u8) D_80237633;
        break;
      }
      while (0);

      case 3:
        D_8018BC38 = D_80237639;

      case 2:
        D_8018BC37 = D_80237637;
        goto block_15;

    }

  }
}


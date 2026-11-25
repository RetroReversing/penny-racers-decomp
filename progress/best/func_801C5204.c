extern unsigned char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern volatile unsigned char *D_801C7AB0;
extern volatile unsigned int D_801C7AD9[];
inline static char inline_fn(int arg0)
{
  return *(D_801C7081 + arg0);
}

inline static int inline_fn2(int arg0)
{
  return arg0 * 5;
}

char func_801C5204(int arg0, s8 *arg1, u8 *arg2, s8 *arg3)
{
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_v0_2;
  char var_v0_3;
  s32 var_v1_2;
  volatile int var_v0_4;
  u32 var_v0;
  int temp_a1;
  u8 var_a0;
  if (((*(D_801C7082 + ((arg0 & 0xFF) * 5))) == 0x17) || ((temp_v0 = (arg0 & 0xFF) * 5, temp_a1 = *((((*(D_801C7083 + temp_v0)) * 0x18) + D_801C7AD9) + (*(D_801C7082 + temp_v0))), (temp_a1 & 0xFF) == 0xFF)))
  {
    *arg2 = 0x7F;
    *arg1 = 0x7F;
    return;
  }
  if ((*D_801C7AB0) == 3)
  {
    var_a0 = *(D_801C7084 + ((temp_a1 & 0xFF) * 5));
    var_v0 = var_a0 & 0xFF;
  }
  else
  {
    var_a0 = (*(D_801C7084 + ((temp_a1 & 0xFF) * 5))) - 0x2E;
    temp_v1 = var_a0 & 0xFF;
    var_v0 = temp_v1;
  }
  var_v1_2 = arg0 & 0xFF;
  if ((var_v0 < 5U) || ((var_v1_2 = arg0 & 0xFF, ((((u32) ((unsigned char) (var_a0 - 0x1B))) < 5U) | (((s8) var_a0) == 0x2D)) != 0)))
  {
    do
    {
      if (1)
      {
        temp_v0 = arg0 & 0xFF;
        if ((((*(D_801C7081 + (var_v1_2 * 5))) == 0) && ((temp_v0 = arg0 & 0xFF, inline_fn((temp_a1 & 0xFF) * 5) == ((unsigned long) 0x3C)))) || (((*(D_801C7081 + ((unsigned char) (temp_v0 * 5)))) == 0x3C) && ((*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == 0x78)))
        {
          ;
          *arg1 = (*(D_801C7082 + ((arg0 & 0xFF) * 5))) + 1;
          *arg2 = *(D_801C7083 + ((arg0 & 0xFF) * 5));
          goto block_23;
        }
      }
    }
    while (0);
  }
  else
  {
    var_v0_3 = arg0 & 0xFF;
    if ((((u32) ((unsigned char) (var_a0 - 0xA))) < 3U) || ((var_v0_3 = arg0 & 0xFF, (((u32) ((var_a0 - 0x10) & 0xFF)) < 3U) != 0)))
    {
      var_v1_2 = arg0 & 0xFF;
      if ((((*(D_801C7081 + (var_v0_3 * 5))) == 0) && ((var_v1_2 = arg0 & 0xFF, (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))) == (((((0x3C & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu)))) || (((*(D_801C7081 + (var_v1_2 * 5))) == 0x3C) && ((*(D_801C7081 + inline_fn2(temp_a1 & 0xFF))) == 0x78)))
      {
        temp_v1_2 = (arg0 & 0xFF) * 5;
        *arg1 = (*(D_801C7082 + temp_v1_2)) + 1;
        *arg2 = *(D_801C7083 + temp_v1_2);
        var_v0_4 = 0xFF;
        goto block_24;
      }
      if (1)
      {
      }
    }
    else
      if ((((u32) ((var_a0 - 0x16) & 0xFF)) + 1) <= 5U)
    {
      temp_a0 = (arg0 & 0xFF) * 5;
      if ((*(D_801C7081 + temp_a0)) == (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))))
      {
        if (D_801C7082)
        {
          *arg1 = (*(D_801C7082 + temp_a0)) + 1;
          *arg2 = *(D_801C7083 + temp_a0);
        }
        else
        {
          *arg1 = (*(D_801C7082 + temp_a0)) + 1;
          *arg2 = *(D_801C7083 + temp_a0);
        }
        block_23:
        var_v0_4 = 3;

        block_24:
        *arg3 = var_v0_4;

      }
    }
  }
}


s32 func_801D651C(s32, s32, s32);
extern s32 D_80190C9E;
extern s32 D_80190CAA;
extern u8 D_80190CAC;
inline static int inline_fn(int arg0, int arg1)
{
  return arg0 < arg1;
}

inline static int inline_fn2(int arg0)
{
  return arg0;
}

long long func_802174DC(s32 arg0, s8 arg1, u8 arg2)
{
  s32 var_a1;
  s32 var_a2;
  int var_v0;
  s32 var_v0_2;
  u8 var_s0;
  char var_s1;
  do
  {
    var_s0 = arg1; var_s1 = arg2;
    do
    {
      if (var_s0)
      {
        var_a2 = inline_fn2(D_80190CAC - 1);
      }
      else
      {
        var_a2 = inline_fn2(D_80190CAC - 1);
      }
    }
    while (0);
  }
  while (0);
  var_a1 = 0;
  do
  {
    if (((u32) (var_a2 & 0xFF)) >= 5U)
    {
      var_a2 = 4;
    }
    if (arg0 & 1)
    {
      if (var_s0 & 0xFF)
      {
        var_s0 -= 1;
        goto block_7;
      }
      var_v0 = arg0 & 2;
      if (var_s1 & 0xFF)
      {
        var_s1--;
        block_7:
        var_a1 = 1;

        goto block_8;
      }
    }
    else
    {
      block_8:
      var_v0 = arg0 & 2;

    }
    if (var_v0)
    {
      if ((var_s0 & 0xFF) != (var_a2 & 0xFF))
      {
        do
        {
          var_s0 += 1;
        }
        while (0);
        goto block_14;
      }
      if (arg0)
      {
        var_v0_2 = var_a1 & 0xFF;
      }
      else
      {
        var_v0_2 = var_a1 & 0xFF;
      }
      if (inline_fn(var_s1 & 0xFF, D_80190CAC - 5))
      {
        ++var_s1;
        block_14:
        var_a1 = 1;

        goto block_15;
      }
    }
    else
    {
      block_15:
      var_v0_2 = var_a1 & 0xFF;

    }
    if (var_v0_2 != 0)
    {
      func_801D651C(7, 0x3B, var_a2);
    }
    *((s8 *) (((char *) (&D_80190C9E)) + 0x10)) = 0;
  }
  while (0);
  *((s8 *) (((char *) (&D_80190C9E)) + 0)) = var_s0;
  *((u8 *) (((char *) (&D_80190C9E)) + 0xC)) = var_s1;
  if (((u8) (*((u8 *) (((char *) (&D_80190C9E)) + 0xE)))) >= 6U)
  {
    if (((*((u8 *) (((char *) (&D_80190C9E)) + 0xC))) + 5) != (*((u8 *) (((char *) (&D_80190C9E)) + 0xE))))
    {
      *((s8 *) (((char *) (&D_80190C9E)) + 0x10)) = 0xF;
    }
    if ((*((u8 *) (((char *) (&D_80190CAA)) + 0))) != 0)
    {
      *((u8 *) (((char *) (&D_80190CAA)) + 4)) = (u8) ((*((u8 *) (((char *) (&D_80190CAA)) + 4))) | 0xF0);
    }
  }
}


extern u8 cursorY;
extern char D_801C6BE0[];
extern u8 cursorX;
extern char glyphLine[];
extern char glyphCode[];
extern void *trackInfo;
extern char D_801C7AD8[];
inline static int inline_fn(u8 arg0)
{
  return arg0 & 0xFF;
}

inline static int inline_fn2(int arg0)
{
  return arg0;
}

u8 func_80190D40(long long arg0)
{
  s32 temp_v1;
  s32 temp_v1_1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_4;
  unsigned long var_t3;
  s32 var_t4;
  s32 var_v0_10;
  s32 var_v0_11;
  s32 var_v0_12;
  volatile int var_v0_13;
  s32 var_v0_15;
  s32 var_v0_16;
  s32 var_v0_17;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_9;
  int var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_v1_4;
  s32 var_v1_5;
  s32 var_v1_6;
  s32 var_v1_7;
  s32 var_v1_9;
  u8 var_a1;
  u32 var_v0_14;
  u32 var_v0_18;
  u32 var_v0_6;
  volatile unsigned short var_v0_8;
  u32 var_v1_8;
  u8 var_a0;
  u8 var_a0_2;
  u8 var_a2;
  register u8 var_a2_2;
  u8 var_a3;
  long var_t0;
  u8 var_t1;
  long var_t1_2;
  volatile long var_t2;
  u8 var_v0;
  u8 temp;
  int temp2;
  var_t3 = 0;
  var_t4 = 0;
  var_a1 = arg0;
  do
  {
    do
    {
      var_t1 = 0;
    }
    while (0);
  }
  while (0);
  var_a2 = 0;
  var_t2 = 0;
  var_a0 = 0;
  temp = *((u8 *) (((char *) trackInfo) + 0));
  if (temp != 3)
  {
    var_a1 -= 0x2E;
  }
  if ((((u32) (var_a1 & 0xFF)) < 5U) || (((u32) inline_fn(var_a1 - 0x16)) < 0xAU))
  {
    var_a0 = cursorX - 1;
    var_t2 = cursorX + 1;
    var_a2 = cursorY;
    var_t1 = var_a2;
    goto block_27;
  }
  temp2 = var_a1 - 5;
  if ((((u32) (temp2 & 0xFF)) < 5U) || (((u32) inline_fn(var_a1 - 0x20)) < 0xAU))
  {
    var_a0 = cursorX;
    var_a2 = cursorY - 1;
    var_t2 = var_a0;
    do
    {
      do
      {
        var_t1 = cursorY + 1;
      }
      while (0);
    }
    while (0);
    goto block_27;
  }
  if (((u32) inline_fn(var_a1 - 0xA)) < 3U)
  {
    var_a0 = cursorX - 1;
    {
      var_a2 = cursorY;
      var_t2 = cursorX;
      var_t1 = var_a2 + 1;
      goto block_27;
    }
  }
  if (((u32) inline_fn(var_a1 - 0xD)) < 3U)
  {
    var_a0 = cursorX + 1;
    block_12:
    var_a2 = cursorY;

    var_t2 = cursorX;
    var_t1 = var_a2 + 1;
    goto block_27;
  }
  if (((u32) inline_fn(var_a1 - 0x10)) < 3U)
  {
    var_a0 = cursorX - 1;
    {
      var_a2 = cursorY;
      var_t2 = cursorX;
      var_t1 = var_a2 - 1;
      goto block_27;
    }
  }
  if (((u32) inline_fn(var_a1 - 0x13)) < 3U)
  {
    var_a0 = cursorX + 1;
    block_17:
    var_a2 = cursorY;

    var_t2 = cursorX;
    var_t1 = var_a2 - 1;
    goto block_27;
  }
  switch ((u32) var_a1)
  {
    case 44:
      var_a0 = 0x18;
      var_a2 = 0x18;
      do
    {
      do
      {
        var_t1 = cursorY;
      }
      while (0);
    }
    while (0);
      var_t2 = cursorX + 1;
      goto block_27;

    default:
      var_v0_6 = 0 & 0xFF;
      if (var_a1 == 0x2D)
    {
      var_a0 = cursorX - 1;
      var_a2 = cursorY;
      {
        var_t2 = 0x18;
        do
        {
          do
          {
            var_t1 = 0x18;
          }
          while (0);
        }
        while (0);
        goto block_27;
      }
    }
      break;

    case 42:
      var_a0 = 0x18;
      var_a2 = 0x18;
      var_t2 = cursorX;
      do
    {
      do
      {
        var_t1 = cursorY + 1;
      }
      while (0);
    }
    while (0);
      block_27:
    var_v0_6 = var_a0 & 0xFF;

      break;

    case 43:
      var_a0_2 = cursorX;
      var_a2 = cursorY - 1;
      block_26:
    var_t2 = 0x18;

      do
    {
      do
      {
        var_t1 = 0x18;
      }
      while (0);
    }
    while (0);
      goto block_27;

  }

  if (((((var_v0_6 >= 0x18U) | (((u32) ((s8) var_a2)) >> 0x1F)) == 0) && (((s8) var_a2) < 0x18)) && ((var_v0_6 = var_t2 & 0xFF, (*((u16 *) (D_801C6BE0 + (((((s8) var_a2) * 0x18) + ((s8) var_a0)) * 2)))) != 0xFFFF)))
  {
    var_t0 = *((u16 *) (D_801C7AD8 + ((((s8) var_a2) * 0x18) + ((s8) var_a0))));
  }
  else
  {
    var_t0 = *((u8 *) (((char *) trackInfo) + 2));
    var_v0_6 = var_t2 & 0xFF;
  }
  if (((((0x18U <= var_v0_6) | (((u32) ((s8) var_t1)) >> 0x1F)) == 0) && (((s8) var_t1) < 0x18)) && ((*((u16 *) (D_801C6BE0 + (((((s8) var_t1) * 0x18) + ((s8) var_t2)) * 2)))) != 0xFFFF))
  {
    do
    {
      do
      {
        do
        {
          var_t1_2 = *((u16 *) (D_801C7AD8 + ((((s8) var_t1) * 0x18) + ((s8) var_t2))));
        }
        while (0);
      }
      while (0);
    }
    while (0);
  }
  else
  {
    do
    {
      var_t1_2 = *((u8 *) (((char *) trackInfo) + 2));
    }
    while (0);
  }
  temp_v1 = var_t0 & 0xFF;
  if ((*((u8 *) (((char *) trackInfo) + 0))) == 3)
  {
    var_a2_2 = *((u16 *) (glyphCode + ((var_t0 & 0xFF) * 5)));
    do
    {
      var_a3 = *((u16 *) (glyphCode + ((var_t1_2 & 0xFF) * 5)));
    }
    while (0);
  }
  else
  {
    temp_v1_1 = *((u16 *) (glyphCode + ((var_t0 & 0xFF) * 5))); var_a2_2 = temp_v1_1 - 0x2E;
    do
    {
      do
      {
        var_a3 = (*((u16 *) (glyphCode + ((var_t1_2 & 0xFF) * 5)))) - 0x2E;
      }
      while (0);
    }
    while (0);
  }
  var_v1_4 = var_t0 & 0xFF;
  var_v0_8 = var_a1 & 0xFF;
  if ((var_v1_4 != (*((u8 *) (((char *) trackInfo) + 2)))) || ((var_v0_8 = var_a1 & 0xFF, (var_t1_2 & 0xFF) != var_v1_4)))
  {
    if ((var_v0_8 < 5U) || (((u32) inline_fn(var_a1 - 0x16)) < 0xAU))
    {
      if (((var_t0 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2)))) && ((((((u32) (var_a2_2 & 0xFF)) < 5U) || (((u32) inline_fn(var_a2_2 - 0xD)) < 3U)) || (((u32) inline_fn(var_a2_2 - 0x13)) < 3U)) || (((((u32) inline_fn(var_a2_2 - 0x16)) < 0xAU) | (((s8) var_a2_2) == 0x2C)) != 0)))
      {
        var_t4 = 1;
      }
      if ((var_t1_2 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2))))
      {
        if (((((u32) (var_a3 & 0xFF)) >= 5U) && (((u32) inline_fn(var_a3 - 0xA)) >= 3U)) && (((u32) inline_fn(var_a3 - 0x10)) >= 3U))
        {
          var_v1_2 = ((u32) inline_fn(var_a3 - 0x16)) < 0xAU;
          var_v0_9 = ((s8) var_a3) ^ 0x2D;
          goto block_107;
        }
        goto block_108;
      }
    }
    else
      if ((((u32) inline_fn(var_a1 - 5)) < 5U) || (((u32) inline_fn(var_a1 - 0x20)) < 0xAU))
    {
      if (((var_t0 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2)))) && (((((u32) inline_fn(var_a2_2 - 5)) < 5U) || (((u32) inline_fn(var_a2_2 - 0xA)) < 6U)) || (((((u32) inline_fn(var_a2_2 - 0x20)) < 0xAU) | (((s8) var_a2_2) == 0x2A)) != 0)))
      {
        var_t4 = 1;
      }
      if ((var_t1_2 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2))))
      {
        if ((((u32) inline_fn(var_a3 - 5)) >= 5U) && (((u32) inline_fn(var_a3 - 0x10)) >= 6U))
        {
          var_v1_2 = ((u32) inline_fn(var_a3 - 0x20)) < 0xAU;
          var_v0_9 = ((s8) var_a3) ^ 0x2B;
          goto block_107;
        }
        goto block_108;
      }
    }
    else
    {
      temp_v1_3 = var_t0 & 0xFF;
      if (((u32) inline_fn(var_a1 - 0xA)) < 3U)
      {
        if ((temp_v1_3 != (*((u8 *) (((char *) trackInfo) + 2)))) && ((((((u32) (var_a2_2 & 0xFF)) < 5U) || (((u32) inline_fn(var_a2_2 - 0xD)) < 3U)) || (((u32) inline_fn(var_a2_2 - 0x13)) < 3U)) || (((((u32) inline_fn(var_a2_2 - 0x16)) < 0xAU) | (((s8) var_a2_2) == 0x2C)) != 0)))
        {
          var_t4 = 1;
        }
        if ((var_t1_2 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2))))
        {
          if ((((u32) inline_fn(var_a3 - 5)) >= 5U) && (((u32) inline_fn(var_a3 - 0x10)) >= 6U))
          {
            var_v1_2 = ((u32) inline_fn(var_a3 - 0x20)) < 0xAU;
            var_v0_9 = ((s8) var_a3) ^ 0x2B;
            goto block_107;
          }
          goto block_108;
        }
      }
      else
        if (((u32) inline_fn(var_a1 - 0xD)) < 3U)
      {
        if ((temp_v1_3 != (*((u8 *) (((char *) trackInfo) + 2)))) && ((((((u32) (var_a2_2 & 0xFF)) < 5U) || (((u32) inline_fn(var_a2_2 - 0xA)) < 3U)) || (((u32) inline_fn(var_a2_2 - 0x10)) < 3U)) || (((((u32) inline_fn(var_a2_2 - 0x16)) < 0xAU) | (((s8) var_a2_2) == 0x2D)) != 0)))
        {
          var_t4 = 1;
        }
        if ((var_t1_2 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2))))
        {
          if ((((u32) inline_fn(var_a3 - 5)) >= 5U) && (((u32) inline_fn(var_a3 - 0x10)) >= 6U))
          {
            var_v1_2 = ((u32) inline_fn(var_a3 - 0x20)) < 0xAU;
            var_v0_9 = ((s8) var_a3) ^ 0x2B;
            goto block_107;
          }
          goto block_108;
        }
      }
      else
      {
        temp_v1_4 = var_t0 & 0xFF;
        if (((u32) inline_fn(var_a1 - 0x10)) < 3U)
        {
          if (temp_v1_4 != (*((u8 *) (((char *) trackInfo) + 2))))
          {
            if (((((u32) (var_a2_2 & 0xFF)) >= 5U) && (((u32) inline_fn(var_a2_2 - 0xD)) >= 3U)) && (((u32) inline_fn(var_a2_2 - 0x13)) >= 3U))
            {
              var_v1_3 = ((u32) inline_fn(var_a2_2 - 0x16)) < 0xAU;
              var_v0_10 = ((s8) var_a2_2) ^ 0x2C;
              goto block_101;
            }
            goto block_102;
          }
          goto block_103;
        }
        if (((u32) inline_fn(var_a1 - 0x13)) < 3U)
        {
          if (temp_v1_4 != (*((u8 *) (((char *) trackInfo) + 2))))
          {
            if (((((u32) (var_a2_2 & 0xFF)) >= 5U) && (((u32) inline_fn(var_a2_2 - 0xA)) >= 3U)) && (((u32) inline_fn(var_a2_2 - 0x10)) >= 3U))
            {
              var_v1_3 = ((u32) inline_fn(var_a2_2 - 0x16)) < 0xAU;
              var_v0_10 = ((s8) var_a2_2) ^ 0x2D;
              block_101:
              if ((var_v1_3 | (var_v0_10 == 0)) != 0)
              {
                goto block_102;
              }

            }
            else
            {
              block_102:
              var_t4 = 1;

            }
          }
          block_103:
          if ((var_t1_2 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2))))
          {
            if ((((u32) inline_fn(var_a3 - 5)) >= 5U) && (((u32) inline_fn(var_a3 - 0xA)) >= 6U))
            {
              var_v1_2 = ((u32) inline_fn(var_a3 - 0x20)) < 0xAU;
              var_v0_9 = ((s8) var_a3) ^ 0x2A;
              block_107:
              if ((var_v1_2 | (var_v0_9 == 0)) != 0)
              {
                goto block_108;
              }

            }
            else
            {
              block_108:
              var_t3 = 1;

            }
          }

        }
      }
    }
    if ((var_t0 & 0xFF) != (*((u8 *) (((char *) trackInfo) + 2))))
    {
      if ((var_t1_2 & 0xFF) == (*((u8 *) (((char *) trackInfo) + 2))))
      {
        var_v0_11 = var_t4 & 0xFF;
        if (((((u32) (var_a1 & 0xFF)) < 5U) || ((var_v0_11 = var_t4 & 0xFF, (((u32) inline_fn(var_a1 - 0xA)) < 3U) != 0))) || ((var_v0_11 = var_t4 & 0xFF, (((u32) inline_fn(var_a1 - 0x10)) < 3U) != 0)))
        {
          if (var_v0_11 != 0)
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) inline_fn(var_a2_2 - 0x1B)) >= 5U)
            {
              var_v1 = (char) (var_t0 & 0xFF);
 do { goto block_364; } while (0);
            }
            goto block_360;
          }
          goto block_366;
        }
        if (((u32) inline_fn(var_a1 - 5)) < 5U)
        {
          if (var_t4 & 0xFF)
          {
            var_v0_5 = var_t0 & 0xFF;
            if (inline_fn2(((u32) inline_fn(var_a2_2 - 0x25)) >= 5U))
            {
              var_v1 = var_t0 & 0xFF;
              goto block_364;
            }
            goto block_360;
          }
          goto block_366;
        }
        var_v0_12 = var_t4 & 0xFF;
        if ((((u32) inline_fn(var_a1 - 0xD)) < 3U) || ((var_v0_12 = var_t4 & 0xFF, (((u32) inline_fn(var_a1 - 0x12)) < 4U) != 0)))
        {
          if (var_v0_12 != 0)
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) inline_fn(var_a2_2 - 0x16)) >= 5U)
            {
              var_v1 = var_t0 & 0xFF;
              goto block_364;
            }
            goto block_360;
          }
          goto block_366;
        }
        if (((u32) inline_fn(var_a1 - 0x16)) < 5U)
        {
          if ((var_t4 & 0xFF) && ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0))
          {
            var_v1 = var_t0 & 0xFF;
            if (((u32) inline_fn(var_a2_2 - 0x1B)) < 5U)
            {
              var_v0_2 = var_v1 * 4;
              goto block_365;
            }
            goto block_174;
          }
          goto block_366;
        }
        if (((u32) inline_fn(var_a1 - 0x1B)) < 5U)
        {
          if ((var_t4 & 0xFF) && ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78))
          {
            var_v1 = var_t0 & 0xFF;
            if (((u32) inline_fn(var_a2_2 - 0x1B)) < 5U)
            {
              var_v0_4 = (*((u16 *) (glyphLine + (var_v1 * 5)))) == 0;
              return (-var_v0_4) & 0x3C;
            }
            var_v0_2 = var_v1 * 4;
            goto block_365;
          }
          goto block_366;
        }
        if (((u32) inline_fn(var_a1 - 0x20)) < 5U)
        {
          if ((var_t4 & 0xFF) && ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0))
          {
            var_v1 = var_t0 & 0xFF;
            if (((u32) inline_fn(var_a2_2 - 0x25)) >= 5U)
            {
              block_174:
              var_v0_3 = var_t0 & 0xFF;

              goto block_175;
            }
            goto block_364;
          }
          goto block_366;
        }
        if (((((u32) inline_fn(var_a1 - 0x25)) < 5U) && (var_t4 & 0xFF)) && ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78))
        {
          var_v1 = var_t0 & 0xFF;
          if (((u32) inline_fn(var_a2_2 - 0x25)) < 5U)
          {
            var_v0_4 = (*((u16 *) (glyphLine + (var_v1 * 5)))) == 0;
            return (-var_v0_4) & 0x3C;
          }
          var_v0_2 = var_v1 * 4;
          goto block_365;
        }
        goto block_366;
      }
      if (var_t3 & var_t4)
      {
        if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) == (*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))))
        {
          if ((((u32) inline_fn(var_a2_2 - 0x1B)) < 5U) && (((u32) inline_fn(var_a3 - 0x16)) < 5U))
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) (var_a1 & 0xFF)) >= 5U)
            {
              var_v0_5 = var_t0 & 0xFF;
              if (((u32) inline_fn(var_a1 - 0xA)) >= 0xCU)
              {
                if ((((u32) inline_fn(var_a1 - 0x16)) < 5U) || ((var_v0 = 0, (((u32) inline_fn(var_a1 - 0x1B)) < 5U) != 0)))
                {
                  var_v1 = var_t0 & 0xFF;
                  if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78)
                  {
                    var_v0_2 = var_v1 * 4;
                    goto block_365;
                  }
                  return 0x3CU;
                }
                return var_v0;
              }
            }
            goto block_360;
          }
          if ((((u32) inline_fn(var_a2_2 - 0x25)) < 5U) && (((u32) inline_fn(var_a3 - 0x20)) < 5U))
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) inline_fn(var_a1 - 5)) >= 0x11U)
            {
              if ((((u32) inline_fn(var_a1 - 0x20)) < 5U) || ((var_v0 = 0, (((u32) inline_fn(var_a1 - 0x25)) < 5U) != 0)))
              {
                var_v1 = var_t0 & 0xFF;
                if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78)
                {
                  var_v0_2 = var_v1 * 4;
                  goto block_365;
                }
                return 0x3CU;
              }
              return var_v0;
            }
            goto block_360;
          }
          if ((((u32) inline_fn(var_a2_2 - 0x1B)) < 5U) && (((u32) inline_fn(var_a3 - 0x20)) < 5U))
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) (var_a1 & 0xFF)) >= 0x13U)
            {
              if ((((u32) inline_fn(var_a1 - 0x16)) < 5U) || ((var_v0 = 0, (((u32) inline_fn(var_a1 - 0x25)) < 5U) != 0)))
              {
                var_v1 = var_t0 & 0xFF;
                if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78)
                {
                  var_v0_2 = var_v1 * 4;
                  goto block_365;
                }
                return 0x3CU;
              }
              return var_v0;
            }
            goto block_360;
          }
          if ((((u32) inline_fn(var_a2_2 - 0x16)) < 5U) && (((u32) inline_fn(var_a3 - 0x20)) < 5U))
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) (var_a1 & 0xFF)) >= 0xAU)
            {
              var_v0_5 = var_t0 & 0xFF;
              if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
              {
                if ((((u32) inline_fn(var_a1 - 0x1B)) < 5U) || ((var_v0 = 0, (((u32) inline_fn(var_a1 - 0x25)) < 5U) != 0)))
                {
                  var_v1 = var_t0 & 0xFF;
                  if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78)
                  {
                    var_v0_2 = var_v1 * 4;
                    goto block_365;
                  }
                  return 0x3CU;
                }
                return var_v0;
              }
            }
            goto block_360;
          }
          if ((((u32) inline_fn(var_a2_2 - 0x1B)) < 5U) && (((u32) inline_fn(var_a3 - 0x25)) < 5U))
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) (var_a1 & 0xFF)) >= 0xAU)
            {
              var_v0_5 = var_t0 & 0xFF;
              if (((u32) inline_fn(var_a1 - 0x10)) >= 3U)
              {
                if ((((u32) inline_fn(var_a1 - 0x16)) < 5U) || ((var_v0 = 0, (((u32) inline_fn(var_a1 - 0x20)) < 5U) != 0)))
                {
                  var_v1 = var_t0 & 0xFF;
                  if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78)
                  {
                    var_v0_2 = var_v1 * 4;
                    goto block_365;
                  }
                  return 0x3CU;
                }
                return var_v0;
              }
            }
            goto block_360;
          }
          if ((((u32) inline_fn(var_a2_2 - 0x16)) < 5U) && (((u32) inline_fn(var_a3 - 0x25)) < 5U))
          {
            var_v0_5 = var_t0 & 0xFF;
            if (((u32) (var_a1 & 0xFF)) >= 0xAU)
            {
              var_v0_5 = var_t0 & 0xFF;
              if (((u32) inline_fn(var_a1 - 0x13)) >= 3U)
              {
                if ((((u32) inline_fn(var_a2_2 - 0x1B)) < 5U) && (((u32) inline_fn(var_a3 - 0x20)) < 5U))
                {
                  var_v1 = (char) (var_t0 & 0xFF);
                  if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) != 0x78)
                  {
                    var_v0_2 = var_v1 * 4;
                    goto block_365;
                  }
                  return 0x3CU;
                }
                goto block_366;
              }
            }
            goto block_360;
          }
          var_v1 = var_t0 & 0xFF;
          goto block_364;
        }
        var_v1_4 = var_t0 & 0xFF;
        if ((*((u16 *) (glyphLine + ((var_t0 & 0xFF) * 5)))) == 0)
        {
          if ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0x78)
          {
            var_v1_4 = var_t0 & 0xFF;
            goto block_244;
          }
          var_v0_13 = var_a2_2 - 0x1B;
          if (((u32) (var_a1 & 0xFF)) >= 5U)
          {
            var_v0_13 = var_a2_2 - 0x1B;
            if (((u32) inline_fn(var_a1 - 0xA)) >= 3U)
            {
              var_v0_13 = var_a2_2 - 0x1B;
              if (((u32) inline_fn(var_a1 - 0x10)) >= 3U)
              {
                var_v0_13 = var_a2_2 - 0x1B;
                if (((u32) inline_fn(var_a1 - 0x1B)) >= 5U)
                {
                  var_v0_13 = var_a2_2 - 0x25;
                  if (((u32) inline_fn(var_a1 - 5)) >= 5U)
                  {
                    var_v0_13 = var_a2_2 - 0x25;
                    if (((u32) inline_fn(var_a1 - 0x25)) >= 5U)
                    {
                      var_v0_13 = var_a2_2 - 0x16;
                      if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
                      {
                        if (((u32) inline_fn(var_a1 - 0x13)) < 3U)
                        {
                          do
                          {
                            var_v0_14 = inline_fn(var_a2_2 - 0x16);
                          }
                          while (0);
                          goto block_338;
                        }
                        goto block_366;
                      }
                    }
                  }
                }
              }
            }
          }
          goto block_337;
        }
        block_244:
        var_v0_15 = var_t0 & 0xFF;

        if ((*((u16 *) (glyphLine + (var_v1_4 * 5)))) == 0x78)
        {
          var_v0_15 = var_t0 & 0xFF;
          if ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) == 0)
          {
            var_v0_13 = var_a3 - 0x16;
            if (((u32) (var_a1 & 0xFF)) >= 5U)
            {
              var_v0_13 = var_a3 - 0x16;
              if (((u32) inline_fn(var_a1 - 0x16)) >= 5U)
              {
                var_v0_13 = var_a3 - 0x20;
                if (((u32) inline_fn(var_a1 - 5)) >= 5U)
                {
                  var_v0_13 = var_a3 - 0x20;
                  if (((u32) inline_fn(var_a1 - 0xA)) >= 3U)
                  {
                    var_v0_13 = var_a3 - 0x20;
                    if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
                    {
                      var_v0_13 = var_a3 - 0x20;
                      if (((u32) inline_fn(var_a1 - 0x20)) >= 5U)
                      {
                        var_v0_13 = var_a3 - 0x25;
                        if (((u32) inline_fn(var_a1 - 0x10)) >= 3U)
                        {
                          if (((u32) inline_fn(var_a1 - 0x13)) < 3U)
                          {
                            var_v0_14 = inline_fn(var_a3 - 0x25);
                            goto block_338;
                          }
                          goto block_366;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto block_337;
          }
        }
        var_v1_5 = var_t0 & 0xFF;
        if ((*((u16 *) (glyphLine + (var_v0_15 * 5)))) == 0)
        {
          if ((*((u16 *) (glyphLine + ((unsigned char) ((var_t1_2 & 0xFF) * 5))))) != 0x3C)
          {
            var_v1_5 = var_t0 & 0xFF;
            goto block_277;
          }
          var_v0_13 = var_a2_2 - 0x1B;
          if (((u32) (var_a1 & 0xFF)) >= 5U)
          {
            var_v0_13 = var_a2_2 - 0x1B;
            if (((u32) inline_fn(var_a1 - 0xA)) >= 3U)
            {
              var_v0_13 = var_a2_2 - 0x1B;
              if (((u32) inline_fn(var_a1 - 0x10)) >= 3U)
              {
                var_v0_13 = var_a2_2 - 0x25;
                if (((u32) inline_fn(var_a1 - 5)) >= 5U)
                {
                  var_v0_13 = var_a2_2 - 0x16;
                  if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
                  {
                    var_v0_13 = var_a2_2 - 0x16;
                    if (((u32) inline_fn(var_a1 - 0x13)) >= 3U)
                    {
                      if (((u32) inline_fn(var_a1 - 0x16)) < 5U)
                      {
                        if (((u32) inline_fn(var_a2_2 - 0x1B)) >= 5U)
                        {
                          var_v0_4 = ((u32) inline_fn(var_a3 - 0x16)) >= 5U;
                          return (-var_v0_4) & 0x3C;
                        }
                        goto block_366;
                      }
                      if (((u32) inline_fn(var_a1 - 0x1B)) < 5U)
                      {
                        var_v0 = 0;
                        if (((u32) inline_fn(var_a2_2 - 0x1B)) < 5U)
                        {
                          var_v0_13 = var_a3 - 0x16;
                          goto block_337;
                        }
                        return var_v0;
                      }
                      if (((u32) inline_fn(var_a1 - 0x20)) < 5U)
                      {
                        if (((u32) inline_fn(var_a2_2 - 0x25)) >= 5U)
                        {
                          var_v0_4 = ((u32) inline_fn(var_a3 - 0x20)) >= 5U;
                          return (-var_v0_4) & 0x3C;
                        }
                        goto block_366;
                      }
                      if (((u32) inline_fn(var_a1 - 0x25)) < 5U)
                      {
                        var_v0 = 0;
                        if (((u32) inline_fn(var_a2_2 - 0x25)) < 5U)
                        {
                          var_v0_13 = var_a3 - 0x20;
                          goto block_337;
                        }
                        return var_v0;
                      }
                      goto block_366;
                    }
                  }
                }
              }
            }
          }
          goto block_337;
        }
        block_277:
        var_v1_6 = var_t0 & 0xFF;

        if ((*((u16 *) (glyphLine + (var_v1_5 * 5)))) == 0x3C)
        {
          if ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0x78)
          {
            var_v1_6 = var_t0 & 0xFF;
            goto block_295;
          }
          var_v1_7 = var_a2_2 - 0x1B;
          if (((((u32) (var_a1 & 0xFF)) >= 5U) && (((u32) inline_fn(var_a1 - 0xA)) >= 3U)) && (((u32) inline_fn(var_a1 - 0x10)) >= 3U))
          {
            var_v1_7 = var_a2_2 - 0x25;
            if (((u32) inline_fn(var_a1 - 5)) >= 5U)
            {
              var_v1_7 = var_a2_2 - 0x16;
              if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
              {
                if (((u32) inline_fn(((s32) var_a1) - 0x13)) >= 3U)
                {
                  var_v0_13 = var_a2_2 - 0x1B;
                  if (((u32) inline_fn(var_a1 - 0x16)) >= 5U)
                  {
                    var_v0 = 0x3C;
                    if (((u32) inline_fn(var_a1 - 0x1B)) >= 5U)
                    {
                      var_v0_13 = var_a2_2 - 0x25;
                      if (((u32) inline_fn(var_a1 - 0x20)) >= 5U)
                      {
                        do
                        {
                          var_v0 = 0;
                        }
                        while (0);
                        if (((u32) inline_fn(var_a1 - 0x25)) < 5U)
                        {
                          return 0x3CU;
                        }
                        return var_v0;
                      }
                      goto block_337;
                    }
                    return var_v0;
                  }
                  goto block_337;
                }
                var_v1_8 = var_v1_7 & 0xFF;
                goto block_331;
              }
            }
          }
          goto block_330;
        }
        block_295:
        var_v1_9 = var_t0 & 0xFF;

        if ((*((u16 *) (glyphLine + (var_v1_6 * 5)))) == 0x3C)
        {
          if ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0)
          {
            var_v1_9 = var_t0 & 0xFF;
            goto block_317;
          }
          var_v0_13 = var_a3 - 0x16;
          if (((u32) (var_a1 & 0xFF)) >= 5U)
          {
            var_v0_13 = var_a3 - 0x20;
            if (((u32) inline_fn(var_a1 - 5)) >= 5U)
            {
              var_v0_13 = var_a3 - 0x20;
              if (((u32) inline_fn(var_a1 - 0xA)) >= 3U)
              {
                var_v0_13 = ((short) var_a3) - 0x20;
                if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
                {
                  var_v0_13 = var_a3 - 0x25;
                  if (((u32) inline_fn(var_a1 - 0x10)) >= 3U)
                  {
                    var_v0_13 = var_a3 - 0x25;
                    if (((u32) inline_fn(var_a1 - 0x13)) >= 3U)
                    {
                      if (((u32) inline_fn(var_a1 - 0x16)) < 5U)
                      {
                        var_v0 = 0;
                        if (((u32) inline_fn(var_a2_2 - 0x1B)) < 5U)
                        {
                          var_v0_13 = var_a3 - 0x16;
                          goto block_337;
                        }
                        return var_v0;
                      }
                      if (((u32) inline_fn(var_a1 - 0x1B)) < 5U)
                      {
                        if (((u32) inline_fn(var_a3 - 0x16)) >= 5U)
                        {
                          var_v0_4 = ((u32) inline_fn(var_a2_2 - 0x1B)) >= 5U;
                          return (-var_v0_4) & 0x3C;
                        }
                        goto block_366;
                      }
                      if (((u32) inline_fn(var_a1 - 0x20)) < 5U)
                      {
                        var_v0 = 0;
                        if (((u32) inline_fn(var_a2_2 - 0x25)) < 5U)
                        {
                          var_v0_13 = var_a3 - 0x20;
                          goto block_337;
                        }
                        return var_v0;
                      }
                      if ((((u32) inline_fn(var_a1 - 0x25)) < 5U) && (((u32) inline_fn(var_a3 - 0x20)) >= 5U))
                      {
                        var_v0_4 = ((u32) inline_fn(var_a2_2 - 0x25)) >= 5U;
                        return (-var_v0_4) & 0x3C;
                      }
                      goto block_366;
                    }
                  }
                }
              }
            }
          }
          goto block_337;
        }
        block_317:
        var_v0 = 0;

        if ((*((u16 *) (glyphLine + (var_v1_9 * 5)))) == 0x78)
        {
          var_v0 = 0;
          if ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) == 0x3C)
          {
            var_v1_7 = var_a3 - 0x16;
            if (((u32) (var_a1 & 0xFF)) >= 5U)
            {
              var_v1_7 = var_a3 - 0x20;
              if ((((u32) inline_fn(var_a1 - 5)) >= 5U) && (((u32) inline_fn(var_a1 - 0xA)) >= 3U))
              {
                if (((u32) inline_fn(var_a1 - 0xD)) >= 3U)
                {
                  var_v1_7 = var_a3 - 0x25;
                  if (((u32) inline_fn(var_a1 - 0x10)) >= 3U)
                  {
                    if (((u32) inline_fn(var_a1 - 0x13)) >= 3U)
                    {
                      var_v0 = 0x3C;
                      if (((u32) inline_fn(var_a1 - 0x16)) >= 5U)
                      {
                        var_v0_13 = var_a3 - 0x16;
                        if (((u32) inline_fn(var_a1 - 0x1B)) >= 5U)
                        {
                          var_v0 = 0x3C;
                          if (((u32) inline_fn(var_a1 - 0x20)) >= 5U)
                          {
                            var_v0_13 = var_a3 - 0x20;
                            if (((u32) inline_fn(var_a1 - 0x25)) < 5U)
                            {
                              goto block_337;
                            }
                            goto block_366;
                          }
                          return var_v0;
                        }
                        block_337:
                        var_v0_14 = var_v0_13 & 0xFF;

                        block_338:
                        var_v0_4 = var_v0_14 < 5U;

                        return (-(var_v0_14 < 5U)) & 0x3C;
                      }
                      return var_v0;
                    }
                    goto block_330;
                  }
                  goto block_330;
                }
                var_v1_8 = var_v1_7 & 0xFF;
                goto block_331;
              }
            }
            block_330:
            var_v1_8 = var_v1_7 & 0xFF;

            block_331:
            var_v0 = 0x3C;

            if (var_v1_8 < 5U)
            {
              return 0x78U;
            }
            return var_v0;
          }
        }
        return var_v0;
      }
      if (var_t4 & 0xFF)
      {
        if (((u32) inline_fn(var_a2_2 - 0x16)) < 5U)
        {
          var_v0 = 0;
          if (((u32) inline_fn(var_a1 - 0x16)) >= 5U)
          {
            var_v1 = var_t0 & 0xFF;
            goto block_364;
          }
          return var_v0;
        }
        if (((u32) inline_fn(var_a2_2 - 0x1B)) < 5U)
        {
          var_v1 = var_t0 & 0xFF;
          if (((u32) inline_fn(var_a1 - 0x16)) >= 5U)
          {
            var_v0_5 = var_t0 & 0xFF;
            goto block_360;
          }
          goto block_364;
        }
        if (((u32) inline_fn(var_a2_2 - 0x20)) < 5U)
        {
          var_v0 = 0;
          if (((u32) inline_fn(var_a1 - 0x20)) >= 5U)
          {
            var_v1 = var_t0 & 0xFF;
            goto block_364;
          }
          return var_v0;
        }
        if (((u32) inline_fn(var_a2_2 - 0x25)) < 5U)
        {
          var_v1 = var_t0 & 0xFF;
          if (((u32) inline_fn(var_a1 - 0x20)) >= 5U)
          {
            var_v0_5 = var_t0 & 0xFF;
            goto block_360;
          }
          goto block_364;
        }
        var_v1 = var_t0 & 0xFF;
        goto block_364;
      }
      if (var_t3 & 0xFF)
      {
        var_v0_16 = var_a1 - 0x1B;
        if (((u32) inline_fn(var_a3 - 0x16)) >= 5U)
        {
          var_v0_17 = var_a1 - 0x1B;
          if (((u32) inline_fn(var_a3 - 0x1B)) >= 5U)
          {
            var_v0_16 = var_a1 - 0x25;
            if (((u32) inline_fn(var_a3 - 0x20)) < 5U)
            {
              goto block_358;
            }
            var_v0_17 = var_a1 - 0x25;
            if (((u32) inline_fn(var_a3 - 0x25)) < 5U)
            {
              goto block_362;
            }
            {
              var_v1 = var_t1_2 & 0xFF;
              goto block_364;
            }
          }
          block_362:
          var_v0 = 0;

          if (((u32) (var_v0_17 & 0xFF)) >= 5U)
          {
            {
              var_v1 = var_t1_2 & 0xFF;
              goto block_364;
            }
          }
          return var_v0;
        }
        block_358:
        var_v1 = var_t1_2 & 0xFF;

        if (((u32) (var_v0_16 & 0xFF)) >= 5U)
        {
          do
          {
            var_v0_5 = var_t1_2 & 0xFF;
          }
          while (0);
          goto block_360;
        }
        goto block_364;
      }
      goto block_366;
    }
    if (((u32) (var_a1 & 0xFF)) < 5U)
    {
      if (var_t3 & 0xFF)
      {
        var_v0_18 = inline_fn(var_a3 - 0x16);
        goto block_115;
      }
      goto block_366;
    }
    if (((u32) inline_fn(var_a1 - 5)) < 0xBU)
    {
      if (var_t3 & 0xFF)
      {
        var_v0_18 = inline_fn(var_a3 - 0x20);
        goto block_115;
      }
      goto block_366;
    }
    if (((u32) inline_fn(var_a1 - 0x10)) < 6U)
    {
      if (var_t3 & 0xFF)
      {
        var_v1 = inline_fn(var_a3 - 0x25);
        block_115:
        var_v0_5 = var_t1_2 & 0xFF;

        if (5U <= var_v1)
        {
          var_v1 = var_t1_2 & 0xFF;
          goto block_364;
        }
        block_360:
        return inline_fn((*((u16 *) (glyphLine + (var_v0_5 * 5)))) + 0x3C);

      }
      goto block_366;
    }
    if (((u32) inline_fn(var_a1 - 0x16)) < 5U)
    {
      if ((var_t3 & 0xFF) && ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0x78))
      {
        if (((u32) inline_fn(var_a3 - 0x16)) < 5U)
        {
          var_v1 = (*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) == 0;
          return (-var_v1) & 0x3C;
        }
        {
          var_v1 = var_t1_2 & 0xFF;
          goto block_364;
        }
      }
      goto block_366;
    }
    if (((u32) inline_fn(var_a1 - 0x1B)) < 5U)
    {
      if ((var_t3 & 0xFF) && ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0))
      {
        var_v1 = var_t1_2 & 0xFF;
        if (((u32) inline_fn(var_a3 - 0x16)) >= 5U)
        {
          do
          {
            var_v0_3 = var_t1_2 & 0xFF;
          }
          while (0);
          goto block_175;
        }
        do
        {
          goto block_364;
        }
        while (0);
      }
      goto block_366;
    }
    if (((u32) inline_fn(var_a1 - 0x20)) < 5U)
    {
      if ((var_t3 & 0xFF) && ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0x78))
      {
        if (((u32) inline_fn(var_a3 - 0x20)) < 5U)
        {
          var_v1 = (*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) == 0;
          return (-var_v1) & 0x3C;
        }
        block_363:
        var_v1 = var_t1_2 & 0xFF;

        goto block_364;
      }
      goto block_366;
    }
    if (((((u32) inline_fn(var_a1 - 0x25)) < 5U) && (var_t3 & 0xFF)) && ((*((u16 *) (glyphLine + ((var_t1_2 & 0xFF) * 5)))) != 0))
    {
      var_v1 = var_t1_2 & 0xFF;
      if (((u32) inline_fn(var_a3 - 0x20)) >= 5U)
      {
        do
        {
          var_v0_3 = var_t1_2 & 0xFF;
        }
        while (0);
        block_175:
        return inline_fn((*((u16 *) (glyphLine + (var_v0_3 * 5)))) - 0x3C);

      }
      block_364:
      var_v0_2 = var_v1 * 4;

      block_365:
      return *(glyphLine + (var_v0_2 + var_v1));

    }
    goto block_366;
  }
  block_366:
  var_v0 = 0;

  return var_v0;
}

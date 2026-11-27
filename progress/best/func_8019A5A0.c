extern signed char D_801C6BB1;
extern signed char blockPos;
extern signed char finishPos;
extern signed char D_801C7063;
s32 updateTrackDirection();
extern char D_8011F2FD[];
extern u8 cursorY;
extern char D_801C6BE0[];
extern u8 cursorX;
extern unsigned char trackPoints[];
extern char glyphLine[];
extern char D_801C7082[];
extern char D_801C7083[];
extern unsigned char glyphCode[];
extern u8 blockFootprint;
extern char D_801C7470[];
extern u8 *trackInfo;
extern u8 D_801C7AB6;
extern unsigned char D_801C7AD8[];
inline static u8 inline_fn(s32 arg0)
{
  return (u8) (*(trackPoints + arg0));
}

inline static int inline_fn2(s32 arg0, int arg1)
{
  return arg0 & arg1;
}

u8 func_8019A5A0(void)
{
  s32 sentinel_const0 = 120;
  u8 sp[256];
  u8 sp10[0x880];
  u8 sp890[0x3E8];
  s32 spC78;
  s32 spC79;
  s32 spC87;
  s32 *spC8C;
  s32 temp_a0;
  s32 temp_a0_11;
  s32 temp_a0_18;
  s32 temp_a0_20;
  s32 temp_a0_27;
  s32 temp_a0_29;
  s32 temp_a0_2;
  s32 temp_a0_36;
  s32 temp_a0_38;
  s32 temp_a0_39;
  s32 temp_a0_40;
  s32 temp_a0_41;
  s32 temp_a0_42;
  s32 temp_a0_43;
  s32 temp_a0_44;
  s32 temp_a0_45;
  s32 temp_a0_47;
  s32 temp_a0_9;
  s32 temp_a1_3;
  s32 temp_a1_4;
  s32 temp_a1_5;
  s32 temp_a3;
  s32 temp_s0;
  s32 temp_s0_10;
  s32 temp_s0_11;
  s32 temp_s0_12;
  s32 temp_s0_13;
  s32 temp_s0_14;
  s32 temp_s0_15;
  s32 temp_s0_16;
  s32 temp_s0_17;
  s32 temp_s0_18;
  s32 temp_s0_19;
  s32 temp_s0_20;
  s32 temp_s0_21;
  s32 temp_s0_22;
  s32 temp_s0_23;
  s32 temp_s0_24;
  s32 temp_s0_25;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 temp_s0_7;
  s32 temp_s0_8;
  s32 temp_s0_9;
  s32 temp_t0;
  s32 temp_v0_10;
  s32 temp_v0_12;
  s32 temp_v0_13;
  s32 temp_v0_15;
  s32 temp_v0_18;
  s32 temp_v0_20;
  s32 temp_v0_21;
  s32 temp_v0_23;
  s32 temp_v0_24;
  s32 temp_v0_26;
  s32 temp_v0_28;
  s32 temp_v0_29;
  s32 temp_v0_2;
  s32 temp_v0_31;
  s32 temp_v0_32;
  s32 temp_v0_34;
  s32 temp_v0_35;
  s32 temp_v0_37;
  s32 temp_v0_3;
  s32 temp_v0_40;
  s32 temp_v0_42;
  s32 temp_v0_43;
  s32 temp_v0_45;
  s32 temp_v0_46;
  s32 temp_v0_48;
  s32 temp_v0_4;
  s32 temp_v0_51;
  s32 temp_v0_53;
  s32 temp_v0_56;
  s32 temp_v0_57;
  s32 temp_v0_58;
  s32 temp_v0_5;
  s32 temp_v0_60;
  s32 temp_v0_61;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 temp_v0_9;
  s32 temp_v1;
  s32 temp_v1_10;
  s32 temp_v1_11;
  s32 temp_v1_12;
  s32 temp_v1_13;
  s32 temp_v1_14;
  s32 temp_v1_15;
  s32 temp_v1_17;
  s32 temp_v1_18;
  s32 temp_v1_19;
  s32 temp_v1_20;
  s32 temp_v1_21;
  s32 temp_v1_22;
  s32 temp_v1_24;
  s32 temp_v1_25;
  s32 temp_v1_26;
  s32 temp_v1_27;
  s32 temp_v1_28;
  s32 temp_v1_29;
  s32 temp_v1_30;
  s32 temp_v1_32;
  s32 temp_v1_33;
  s32 temp_v1_35;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 temp_v1_5;
  s32 temp_v1_6;
  s32 temp_v1_7;
  s32 temp_v1_8;
  s32 var_a1;
  s32 var_a1_11;
  s32 var_a1_12;
  s32 var_a1_13;
  s32 var_a1_14;
  s32 var_a1_15;
  s32 var_a1_16;
  s32 var_a1_17;
  s32 var_a1_18;
  s32 var_a1_19;
  s32 var_a1_20;
  s32 var_a1_21;
  s32 var_a1_22;
  s32 var_a1_24;
  s32 var_a1_25;
  s32 var_a1_26;
  s32 var_a1_27;
  s32 var_a1_28;
  s32 var_a1_29;
  s32 var_a1_2;
  s32 var_a1_30;
  s32 var_a1_31;
  s32 var_a1_32;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_a1_5;
  s32 var_a1_6;
  s32 var_a1_7;
  s32 var_a1_8;
  s32 var_a1_9;
  s32 var_a2_3;
  u16 var_s1;
  s32 var_s1_2;
  s32 var_s1_4;
  s32 var_v0_10;
  s32 var_v0_11;
  s32 var_v0_12;
  s32 var_v0_13;
  s32 var_v0_14;
  s32 var_v0_15;
  s32 var_v0_16;
  s32 var_v0_17;
  s32 var_v0_19;
  s32 var_v0_20;
  s32 var_v0_21;
  s32 var_v0_22;
  s32 var_v0_23;
  s32 var_v0_24;
  s32 var_v0_25;
  s32 var_v0_26;
  s32 var_v0_27;
  s32 var_v0_2;
  s32 var_v0_30;
  s32 var_v0_31;
  s32 var_v0_32;
  s32 var_v0_33;
  s32 var_v0_34;
  s32 var_v0_35;
  s32 var_v0_36;
  s32 var_v0_37;
  s32 var_v0_38;
  s32 var_v0_39;
  s32 var_v0_40;
  s32 var_v0_41;
  s32 var_v0_42;
  s32 var_v0_43;
  s32 var_v0_44;
  s32 var_v0_45;
  s32 var_v0_48;
  s32 var_v0_49;
  s32 var_v0_50;
  s32 var_v0_51;
  s32 var_v0_52;
  s32 var_v0_53;
  s32 var_v0_54;
  s32 var_v0_55;
  s32 var_v0_56;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v0_7;
  s32 var_v0_9;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_s1_5;
  s32 var_s4_2;
  u16 *temp_a2;
  s32 temp_a0_48;
  s32 temp_v1_31;
  u32 temp_v0_17;
  u32 temp_v0_39;
  u32 temp_v0_62;
  u32 var_v0_18;
  u32 var_v0_28;
  u32 var_v0_29;
  u32 var_v0_46;
  u32 var_v0_47;
  u32 var_v1_4;
  u8 *temp_a1;
  s32 temp_s3;
  s32 temp_s5;
  s32 temp_v1_16;
  s32 temp_v1_23;
  s32 temp_v1_2;
  s32 temp_v1_9;
  s32 var_a1_10;
  s32 var_a1_23;
  short var_a2;
  s32 var_a2_2;
  s32 var_s1_3;
  s32 var_s2;
  s32 var_s3;
  s32 var_s4;
  s32 var_s6;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_8;
  void *temp_a0_12;
  void *temp_a0_13;
  void *temp_a0_14;
  void *temp_a0_15;
  void *temp_a0_16;
  void *temp_a0_17;
  void *temp_a0_21;
  void *temp_a0_22;
  void *temp_a0_23;
  void *temp_a0_24;
  void *temp_a0_25;
  void *temp_a0_26;
  void *temp_a0_30;
  void *temp_a0_31;
  void *temp_a0_32;
  void *temp_a0_33;
  void *temp_a0_34;
  void *temp_a0_35;
  void *temp_a0_37;
  void *temp_a0_3;
  void *temp_a0_46;
  void *temp_a0_49;
  void *temp_a0_4;
  void *temp_a0_5;
  void *temp_a0_6;
  void *temp_a0_7;
  void *temp_a0_8;
  void *temp_v0;
  void *temp_v0_11;
  void *temp_v0_14;
  void *temp_v0_19;
  void *temp_v0_22;
  void *temp_v0_25;
  void *temp_v0_30;
  void *temp_v0_33;
  void *temp_v0_36;
  void *temp_v0_41;
  void *temp_v0_44;
  void *temp_v0_47;
  void *temp_v0_49;
  void *temp_v0_52;
  void *temp_v0_59;
  void *temp_v0_63;
  void *temp_v0_8;
  void *temp_v1_34;
  var_s2 = *((u8 *) (((s8 *) trackInfo) + 2));
  do
  {
    do
    {
      do
      {
        var_s4 = 0;
      }
      while (0);
    }
    while (0);
  }
  while (0);
  spC87 = 0;
  for (var_s1 = 0; var_s1 < 0x240; var_s1++)
  {
    *(sp10 + var_s1) = 0xFF;
  }

  var_s1_2 = 0;
  do
  {
    var_a1 = 0;
    var_v0_2 = inline_fn2(0, 0xFF);
    loop_4:
    *((s32 *) ((var_v0_2 * 2) + (((inline_fn2(var_s1_2, 0xFFFF) * 8) + sp10) + 0x240))) = 0xFFFF;

    var_a1 += 1;
    var_v0_2 = var_a1 & 0xFF;
    if (((u32) inline_fn2(var_a1, 0xFF)) < 4U)
    {
      goto loop_4;
    }
    temp_v0 = (void *)(((var_s1_2 & 0xFFFF) * 5)); temp_v0 = (void *)((char *)temp_v0 + (s32)(sp10));
    *((s8 *) (((s8 *) temp_v0) + 0x880)) = 4;
    *((s8 *) (((s8 *) temp_v0) + 0x881)) = 0;
    *((s8 *) (((s8 *) temp_v0) + 0x882)) = -1;
    *((s8 *) (((s8 *) temp_v0) + 0x883)) = -1;
    *((s8 *) (((s8 *) temp_v0) + 0x884)) = -1;
    var_s1_2 += 1;
  }
  while (((u32) inline_fn2(var_s1_2, 0xFFFF)) < 0xC8U);
  var_s3 = *(D_801C7AD8 + ((D_801C6BB1 * 0x18) + blockPos));
  if ((*((u8 *) (((s8 *) trackInfo) + 0))) == 3)
  {
    var_a2 = *(glyphCode + ((var_s3 & 0xFF) * 5));
  }
  else
  {
    var_a2 = (*(glyphCode + (inline_fn2(var_s3, 0xFF) * 5))) - 0x2E;
  }
  if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 5)
  {
    switch (blockFootprint)
    {
      if (((u32) ((var_a2 - 5) & 0xFF)) < 5U)
      {
        temp_v0_2 = (var_s3 & 0xFF) * 5;
        spC78 = *(D_801C7082 + temp_v0_2);
        var_v0_3 = (*(D_801C7083 + temp_v0_2)) - 1;
        goto block_37;
      }
      goto block_445;
      var_v1 = inline_fn2(var_s3, 0xFF);
      if (((u32) inline_fn2(var_a2, 0xFF)) < 5U)
      {
        var_v1_2 = (var_s3 & 0xFF) * 5;
        var_v0_4 = (*(D_801C7082 + var_v1_2)) - 1;
        goto block_36;
      }
      goto block_446;
      if (((u32) ((var_a2 - 5) & 0xFF)) < 5U)
      {
        temp_v0_3 = (var_s3 & 0xFF) * 5;
        spC78 = *(D_801C7082 + temp_v0_3);
        var_v0_3 = (*(D_801C7083 + temp_v0_3)) + 1;
        goto block_37;
      }
      goto block_445;
      var_v1 = var_s3 & 0xFF;
      if (((u32) (var_a2 & 0xFF)) < 5U)
      {
        var_v0_5 = inline_fn2(var_s3, 0xFF);
        goto block_35;
      }
      goto block_446;
    }

  }
  else
    if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 6)
  {
    switch (blockFootprint)
    {
      var_v1 = var_s3 & 0xFF;
      if (((s8) var_a2) == 0x2B)
      {
        temp_v0_4 = var_v1 * 5;
        spC78 = *(D_801C7082 + temp_v0_4);
        var_v0_3 = (*(D_801C7083 + temp_v0_4)) - 1;
        block_37:
        spC79 = (s8) var_v0_3;

        goto block_38;
      }
      goto block_446;
      var_v1 = var_s3 & 0xFF;
      if (((s8) var_a2) == 0x2D)
      {
        var_v1_2 = inline_fn2(var_s3, 0xFF) * 5;
        var_v0_4 = (*(D_801C7082 + var_v1_2)) - 1;
        block_36:
        spC78 = var_v0_4;

        var_v0_3 = *(D_801C7083 + var_v1_2);
        goto block_37;
      }
      goto block_446;
      var_v1 = inline_fn2(var_s3, 0xFF);
      if (((s8) var_a2) == 0x2A)
      {
        temp_v0_5 = var_v1 * 5;
        spC78 = *(D_801C7082 + temp_v0_5);
        var_v0_3 = (*(D_801C7083 + temp_v0_5)) + 1;
        goto block_37;
      }
      goto block_446;
      var_v1 = inline_fn2(var_s3, 0xFF);
      if (((s8) var_a2) == 0x2C)
      {
        var_v0_5 = inline_fn2(var_s3, 0xFF);
        block_35:
        var_v1_2 = var_v0_5 * 5;

        var_v0_4 = (*(D_801C7082 + var_v1_2)) + 1;
        goto block_36;
      }
      goto block_446;
    }

  }
  else
  {
    block_38:
    temp_a1 = trackInfo;

    var_s1_3 = 0;
    if (((*((u8 *) (((s8 *) trackInfo) + 2))) - 1) > 0)
    {
      spC8C = sp890;
      loop_40:
      temp_s5 = *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8));

      if ((*((u8 *) (((s8 *) temp_a1) + 0))) == 3)
      {
        var_s6 = *(glyphCode + (inline_fn2(temp_s5, 0xFF) * 5));
        var_v0_6 = var_s3 & 0xFF;
      }
      else
      {
        var_s6 = (*(glyphCode + (inline_fn2(temp_s5, 0xFF) * 5))) - 0x2E;
        var_v0_6 = inline_fn2(var_s3, 0xFF);
      }
      var_v0_7 = var_s3 & 0xFF;
      if ((((*((u16 *) (glyphLine + (var_v0_6 * 5)))) == 0) && ((var_v0_7 = inline_fn2(var_s3, 0xFF), (*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == sentinel_const0))) || (((var_v0_7 = inline_fn2(var_s3, 0xFF), (*((u16 *) (glyphLine + (var_v0_7 * 5)))) == sentinel_const0)) && ((var_v0_7 = inline_fn2(var_s3, 0xFF), (*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == 0))))
      {
        temp_v1 = var_v0_7 * 5;
        cursorX = *(D_801C7082 + temp_v1);
        var_v0_8 = *(D_801C7083 + temp_v1);
        {
          cursorY = var_v0_8;
          return 0U;
        }
      }
      temp_a0 = var_v0_7 * 5;
      if ((*(trackPoints + temp_a0)) == 0)
      {
        if (((*(D_801C7082 + temp_a0)) == (*(D_801C7082 + (inline_fn2(temp_s5, 0xFF) * 5)))) && ((*(D_801C7083 + temp_a0)) == ((*(D_801C7083 + (inline_fn2(temp_s5, 0xFF) * 5))) + 1)))
        {
          var_v0_9 = var_s3 & 0xFF;
          if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 6)
          {
            temp_a0_2 = var_v0_9 * 5;
            var_v0_9 = inline_fn2(var_s3, 0xFF);
            if ((*(D_801C7082 + temp_a0_2)) == finishPos)
            {
              var_v0_9 = inline_fn2(var_s3, 0xFF);
              if (((*(D_801C7083 + temp_a0_2)) - 1) == D_801C7063)
              {
                var_v0_9 = var_s3 & 0xFF;
                if (((s8) var_s6) != 0x2A)
                {
                  var_s2 = var_s1_3;
                  goto block_94;
                }
                temp_v1_2 = *((u16 *) (glyphLine + (var_v0_9 * 5)));
                if (temp_v1_2 != (*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))))
                {
                  if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) != 0)
                  {
                    if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == 0x3C)
                    {
                      if ((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) != 0)
                      {
                        if (((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) == sentinel_const0) && (((u32) ((var_a2 - 0x20) & 0xFF)) >= 5U))
                        {
                          var_s2 = var_s1_3;
                        }
                      }
                      else
                      {
                        goto block_87;
                      }
                    }
                    else
                      if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == sentinel_const0)
                    {
                      goto block_87;
                    }
                  }
                  else
                    if (((u32) ((var_a2 - 0x20) & 0xFF)) >= 5U)
                  {
                    var_s2 = var_s1_3;
                  }
                  goto block_88;
                }
                temp_v0_6 = var_a2 - 5;
                if (temp_v1_2 == sentinel_const0)
                {
                  temp_s0 = var_s3 & 0xFF;
                  if ((((u32) (temp_v0_6 & 0xFF)) < 5U) || (((u32) inline_fn2(var_a2 - 0x10, 0xFF)) < 6U))
                  {
                    updateTrackDirection(temp_s0, inline_fn2(temp_s5, 0xFF), &spC78, &spC79);
                    temp_a0_3 = ((var_s4 & 0xFF) * 5) + sp10;
                    temp_v1_3 = temp_s0 * 5;
                    *((u8 *) (((s8 *) temp_a0_3) + 0x880)) = (u8) (*(trackPoints + temp_v1_3));
                    *((u8 *) (((s8 *) temp_a0_3) + 0x881)) = (u8) (*(glyphLine + temp_v1_3));
                    *((u8 *) (((s8 *) temp_a0_3) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_3));
                    *((u8 *) (((s8 *) temp_a0_3) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_3));
                    *((u8 *) (((s8 *) temp_a0_3) + 0x884)) = (u8) (*(glyphCode + temp_v1_3));
                    var_a1_2 = 0;
                    var_v0_10 = 0 & 0xFF;
                    loop_goto_1:
                    {
                      temp_v0_7 = var_v0_10 * 2;
                      *((s32 *) (temp_v0_7 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_7 + ((inline_fn2(var_s3, 0xFF) * 8) + D_801C7470)));
                      var_a1_2 += 1;
                      var_v0_10 = var_a1_2 & 0xFF;
                    }

                    if (((u32) inline_fn2(var_a1_2, 0xFF)) < 4U)
                    {
                      goto loop_goto_1;
                    }
                    temp_v0_8 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
                    *(sp10 + (((*((s8 *) (((s8 *) temp_v0_8) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_8) + 2))))) = var_s4;
                    var_s4_2 = var_s4 + 1;
                    temp_a0_29 = temp_s5 & 0xFF;
                    updateTrackDirection(temp_a0_29, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                    temp_a0_4 = ((var_s4_2 & 0xFF) * 5) + sp10;
                    temp_v1_4 = temp_a0_29 * 5;
                    *((u8 *) (((s8 *) temp_a0_4) + 0x880)) = (u8) (*(trackPoints + temp_v1_4));
                    *((u8 *) (((s8 *) temp_a0_4) + 0x881)) = (u8) (*(glyphLine + temp_v1_4));
                    *((u8 *) (((s8 *) temp_a0_4) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_4));
                    *((u8 *) (((s8 *) temp_a0_4) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_4));
                    *((u8 *) (((s8 *) temp_a0_4) + 0x884)) = (u8) (*(glyphCode + temp_v1_4));
                    var_a1_3 = 0;
                    var_v0_11 = 0 & 0xFF;
                    do
                    {
                      temp_v0_9 = var_v0_11 * 2;
                      *((s32 *) (temp_v0_9 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_9 + ((temp_s5 * 8) + D_801C7470)));
                      var_a1_3 += 1;
                      var_v0_11 = inline_fn2(var_a1_3, 0xFF);
                    }
                    while (((u32) (var_a1_3 & 0xFF)) < 4U);
                    var_v1_3 = inline_fn2(var_s4_2, 0xFF);
                    goto block_349;
                  }
                  block_87:
                  var_s2 = var_s1_3;

                  goto block_88;
                }
                temp_s0_3 = var_s3 & 0xFF;
                if (((u32) (temp_v0_6 & 0xFF)) >= 5U)
                {
                  if (((u32) ((var_a2 - 0x10) & 0xFF)) >= 6U)
                  {
                    var_s2 = var_s1_3;
                    if (((u32) inline_fn2(var_a2 - 0x25, 0xFF)) < 5U)
                    {
                      goto block_70;
                    }
                    block_88:
                    var_v0_9 = inline_fn2(var_s3, 0xFF);

                    if ((var_s2 & 0xFF) == (*((u8 *) (((s8 *) trackInfo) + 2))))
                    {
                      var_v0_11 = inline_fn2(var_s3, 0xFF);
                      updateTrackDirection(var_v0_11, inline_fn2(temp_s5, 0xFF), &spC78, &spC79);
                      temp_a0_5 = ((var_s4 & 0xFF) * 5) + sp10;
                      temp_v1_5 = var_v0_11 * 5;
                      *((u8 *) (((s8 *) temp_a0_5) + 0x880)) = (u8) (*(trackPoints + temp_v1_5));
                      *((u8 *) (((s8 *) temp_a0_5) + 0x881)) = (u8) (*(glyphLine + temp_v1_5));
                      *((u8 *) (((s8 *) temp_a0_5) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_5));
                      *((u8 *) (((s8 *) temp_a0_5) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_5));
                      *((u8 *) (((s8 *) temp_a0_5) + 0x884)) = (u8) (*(glyphCode + temp_v1_5));
                      var_a1_4 = 0;
                      var_v0_12 = inline_fn2(0, 0xFF);
                      do
                      {
                        temp_v0_10 = var_v0_12 * 2;
                        *((s32 *) (temp_v0_10 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_10 + ((inline_fn2(var_s3, 0xFF) * 8) + D_801C7470)));
                        var_a1_4 += 1;
                        var_v0_12 = var_a1_4 & 0xFF;
                      }
                      while (((u32) inline_fn2(var_a1_4, 0xFF)) < 4U);
                      temp_v0_11 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
                      *(sp10 + (((*((s8 *) (((s8 *) temp_v0_11) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_11) + 2))))) = var_s4;
                      temp_s0_5 = temp_s5 & 0xFF;
                      updateTrackDirection(temp_s0_5, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                      temp_v1_6 = temp_s0_5 * 5;
                      var_s4_2 = var_s4 + 1;
                      temp_a0_6 = ((var_s4_2 & 0xFF) * 5) + sp10;
                      *((u8 *) (((s8 *) temp_a0_6) + 0x880)) = (u8) (*(trackPoints + temp_v1_6));
                      *((u8 *) (((s8 *) temp_a0_6) + 0x881)) = (u8) (*(glyphLine + temp_v1_6));
                      *((u8 *) (((s8 *) temp_a0_6) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_6));
                      *((u8 *) (((s8 *) temp_a0_6) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_6));
                      *((u8 *) (((s8 *) temp_a0_6) + 0x884)) = (u8) (*(glyphCode + temp_v1_6));
                      var_a1_5 = 0;
                      var_v0_13 = 0 & 0xFF;
                      do
                      {
                        temp_v0_12 = var_v0_13 * 2;
                        *((s32 *) (temp_v0_12 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_12 + ((temp_s5 * 8) + D_801C7470)));
                        var_a1_5 += 1;
                        var_v0_13 = inline_fn2(var_a1_5, 0xFF);
                      }
                      while (((u32) (var_a1_5 & 0xFF)) < 4U);
                      var_v1_3 = var_s4_2 & 0xFF;
                      goto block_349;
                    }
                    goto block_94;
                  }
                  goto block_71;
                }
                block_70:
                block_71:
                updateTrackDirection(temp_s0_3, inline_fn2(temp_s5, 0xFF), &spC78, &spC79);


                temp_a0_7 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
                temp_v1_7 = temp_s0_3 * 5;
                *((u8 *) (((s8 *) temp_a0_7) + 0x880)) = (u8) (*(trackPoints + temp_v1_7));
                *((u8 *) (((s8 *) temp_a0_7) + 0x881)) = (u8) (*(glyphLine + temp_v1_7));
                *((u8 *) (((s8 *) temp_a0_7) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_7));
                *((u8 *) (((s8 *) temp_a0_7) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_7));
                *((u8 *) (((s8 *) temp_a0_7) + 0x884)) = (u8) (*(glyphCode + temp_v1_7));
                var_a1_6 = 0;
                var_v0_14 = 0 & 0xFF;
                do
                {
                  temp_v0_13 = var_v0_14 * 2;
                  *((s32 *) (temp_v0_13 + ((((var_s4 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_13 + ((inline_fn2(var_s3, 0xFF) * 8) + D_801C7470)));
                  var_a1_6 += 1;
                  var_v0_14 = inline_fn2(var_a1_6, 0xFF);
                }
                while (((u32) (var_a1_6 & 0xFF)) < 4U);
                var_s4_2 = inline_fn2(var_s4, 0xFF);
                temp_v0_14 = (void *) ((var_s4_2 * 5) + ((s32) spC8C));
                *(sp10 + (((*((s8 *) (((s8 *) temp_v0_14) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_14) + 2))))) = var_s4;
                var_s4_2 = var_s4 + 1;
                temp_s0_6 = inline_fn2(temp_s5, 0xFF);
                updateTrackDirection(temp_s0_6, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                temp_a0_8 = (inline_fn2(var_s4_2, 0xFF) * 5) + sp10;
                temp_v1_8 = temp_s0_6 * 5;
                *((u8 *) (((s8 *) temp_a0_8) + 0x880)) = (u8) (*(trackPoints + temp_v1_8));
                *((u8 *) (((s8 *) temp_a0_8) + 0x881)) = (u8) (*(glyphLine + temp_v1_8));
                *((u8 *) (((s8 *) temp_a0_8) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_8));
                *((u8 *) (((s8 *) temp_a0_8) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_8));
                *((u8 *) (((s8 *) temp_a0_8) + 0x884)) = (u8) (*(glyphCode + temp_v1_8));
                var_a1_7 = 0;
                var_v0_15 = inline_fn2(0, 0xFF);
                do
                {
                  temp_v0_15 = var_v0_15 * 2;
                  *((s32 *) (temp_v0_15 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_15 + ((temp_s5 * 8) + D_801C7470)));
                  var_a1_7 += 1;
                  var_v0_15 = inline_fn2(var_a1_7, 0xFF);
                }
                while (((u32) (var_a1_7 & 0xFF)) < 4U);
                var_v1_3 = var_s4_2 & 0xFF;
                goto block_349;
              }
            }
          }
          block_94:
          temp_a0_9 = var_v0_9 * 5;

          if ((*((u16 *) (glyphLine + temp_a0_9))) == (*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))))
          {
            if ((((*((u16 *) (glyphLine + temp_a0_9))) == 0) | ((*((u16 *) (glyphLine + temp_a0_9))) == 0x3C)) != 0)
            {
              var_v0_16 = var_s6 - 0x25;
              if (((u32) ((var_a2 - 0x20) & 0xFF)) >= 5U)
              {
                var_v0_17 = var_s6 - 5;
                if (((((u32) ((var_a2 - 5) & 0xFF)) < 5U) || ((var_v0_17 = var_s6 - 5, (((u32) inline_fn2(var_a2 - 0x10, 0xFF)) < 6U) != 0))) || ((var_v0_17 = var_s6 - 5, ((((u32) ((var_a2 - 0x25) & 0xFF)) < 5U) | (((s8) var_a2) == 0x2B)) != 0)))
                {
                  if (((u32) (var_v0_17 & 0xFF)) >= 0xBU)
                  {
                    var_v0_18 = inline_fn2(var_s6 - 0x20, 0xFF);
                    goto block_395;
                  }
                }
                else
                {
                  goto block_397;
                }
              }
              else
              {
                goto block_394;
              }
            }
            else
              if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_19 = var_s6 - 5;
              if (((u32) inline_fn2(var_a2 - 5, 0xFF)) >= 5U)
              {
                if (!inline_fn2(((u32) ((var_a2 - 0x10) & 0xFF)) >= 6U, ((s8) var_a2) != 0x2B))
                {
                  var_v0_19 = var_s6 - 5;
                  goto block_106;
                }
                goto block_397;
              }
              block_106:
              var_v0_20 = ((u32) inline_fn2(var_v0_19, 0xFF)) < 0xBU;

              goto block_396;
            }
          }
          else
            if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) != 0)
          {
            if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == 0x3C)
            {
              if ((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) == 0)
              {
                var_v0_16 = var_s6 - 0x25;
                if (((u32) inline_fn2(var_a2 - 5, 0xFF)) >= 5U)
                {
                  var_v0_16 = var_s6 - 0x25;
                  if (((u32) inline_fn2(var_a2 - 0x10, 0xFF)) >= 6U)
                  {
                    if (((((u32) ((var_a2 - 0x25) & 0xFF)) < 5U) | (((s8) var_a2) == 0x2B)) != 0)
                    {
                      var_v0_18 = inline_fn2(var_s6 - 0x25, 0xFF);
                      goto block_395;
                    }
                    goto block_397;
                  }
                }
                goto block_394;
              }
              if ((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == sentinel_const0)
              {
                if (((u32) inline_fn2(var_a2 - 0x20, 0xFF)) < 5U)
                {
                  var_v0_20 = ((u32) ((var_s6 - 5) & 0xFF)) < 0xBU;
                  goto block_396;
                }
                goto block_397;
              }
            }
            else
              if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_16 = var_s6 - 0x25;
              if (((u32) ((var_a2 - 5) & 0xFF)) >= 5U)
              {
                if (!((((u32) ((var_a2 - 0x10) & 0xFF)) >= 6U) & (((s8) var_a2) != 0x2B)))
                {
                  var_v0_16 = var_s6 - 0x25;
                  goto block_394;
                }
                goto block_397;
              }
              goto block_394;
            }
          }
          else
            if (((u32) ((var_a2 - 0x20) & 0xFF)) < 5U)
          {
            if (((u32) inline_fn2(var_s6 - 5, 0xFF)) >= 0xBU)
            {
              var_v0_18 = (var_s6 - 0x20) & 0xFF;
              goto block_395;
            }
          }
          else
          {
            goto block_397;
          }
          goto block_398;
        }
        goto block_397;
      }
      temp_a1_3 = inline_fn2(var_s3, 0xFF) * 5;
      if ((*(trackPoints + temp_a1_3)) == 1)
      {
        if (((*(D_801C7082 + temp_a1_3)) == ((*(D_801C7082 + (inline_fn2(temp_s5, 0xFF) * 5))) + 1)) && ((*(D_801C7083 + temp_a1_3)) == (*(D_801C7083 + ((temp_s5 & 0xFF) * 5)))))
        {
          var_v0_21 = inline_fn2(var_s3, 0xFF);
          if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 6)
          {
            temp_a0_11 = var_v0_21 * 5;
            var_v0_21 = var_s3 & 0xFF;
            if (((*(D_801C7082 + temp_a0_11)) - 1) == finishPos)
            {
              var_v0_21 = inline_fn2(var_s3, 0xFF);
              if ((*(D_801C7083 + temp_a0_11)) == D_801C7063)
              {
                var_v0_21 = inline_fn2(var_s3, 0xFF);
                if (((s8) var_s6) != 0x2C)
                {
                  var_s2 = var_s1_3;
                  goto block_175;
                }
                temp_v1_9 = *((u16 *) (glyphLine + (var_v0_21 * 5)));
                if (temp_v1_9 != (*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))))
                {
                  if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) != 0)
                  {
                    if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == 0x3C)
                    {
                      if ((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) != 0)
                      {
                        if (((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == sentinel_const0) && (((u32) ((var_a2 - 0x16) & 0xFF)) >= 5U))
                        {
                          var_s2 = var_s1_3;
                        }
                      }
                      else
                      {
                        goto block_168;
                      }
                    }
                    else
                      if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == sentinel_const0)
                    {
                      goto block_168;
                    }
                  }
                  else
                    if (((u32) inline_fn2(var_a2 - 0x16, 0xFF)) >= 5U)
                  {
                    var_s2 = var_s1_3;
                  }
                  goto block_169;
                }
                temp_v0_17 = var_a2 & 0xFF;
                if (temp_v1_9 == sentinel_const0)
                {
                  var_v0_15 = inline_fn2(var_s3, 0xFF);
                  if (((temp_v0_17 < 5U) || (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) < 3U)) || (((u32) ((var_a2 - 0x10) & 0xFF)) < 3U))
                  {
                    updateTrackDirection(var_v0_15, temp_s5 & 0xFF, &spC78, &spC79);
                    temp_a0_12 = ((var_s4 & 0xFF) * 5) + sp10;
                    temp_v1_10 = var_v0_15 * 5;
                    *((u8 *) (((s8 *) temp_a0_12) + 0x880)) = (u8) (*(trackPoints + temp_v1_10));
                    *((u8 *) (((s8 *) temp_a0_12) + 0x881)) = (u8) (*(glyphLine + temp_v1_10));
                    *((u8 *) (((s8 *) temp_a0_12) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_10));
                    *((u8 *) (((s8 *) temp_a0_12) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_10));
                    *((u8 *) (((s8 *) temp_a0_12) + 0x884)) = (u8) (*(glyphCode + temp_v1_10));
                    var_a1_8 = 0;
                    var_v0_22 = inline_fn2(0, 0xFF);
                    do
                    {
                      temp_v0_18 = var_v0_22 * 2;
                      *((s32 *) (temp_v0_18 + ((((var_s4 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_18 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
                      var_a1_8 += 1;
                      var_v0_22 = inline_fn2(var_a1_8, 0xFF);
                    }
                    while (((u32) (var_a1_8 & 0xFF)) < 4U);
                    temp_v0_19 = (void *) (((var_s4 & 0xFF) * 5) + ((s32) spC8C));
                    *(sp10 + (((*((s8 *) (((s8 *) temp_v0_19) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_19) + 2))))) = var_s4;
                    var_s4_2 = var_s4 + 1;
                    var_v0_22 = inline_fn2(temp_s5, 0xFF);
                    updateTrackDirection(var_v0_22, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                    temp_a0_13 = (inline_fn2(var_s4_2, 0xFF) * 5) + sp10;
                    temp_v1_11 = var_v0_22 * 5;
                    *((u8 *) (((s8 *) temp_a0_13) + 0x880)) = (u8) (*(trackPoints + temp_v1_11));
                    *((u8 *) (((s8 *) temp_a0_13) + 0x881)) = (u8) (*(glyphLine + temp_v1_11));
                    *((u8 *) (((s8 *) temp_a0_13) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_11));
                    *((u8 *) (((s8 *) temp_a0_13) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_11));
                    *((u8 *) (((s8 *) temp_a0_13) + 0x884)) = (u8) (*(glyphCode + temp_v1_11));
                    var_a1_9 = 0;
                    var_v0_23 = 0 & 0xFF;
                    do
                    {
                      temp_v0_20 = var_v0_23 * 2;
                      *((s32 *) (temp_v0_20 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_20 + ((temp_s5 * 8) + D_801C7470)));
                      var_a1_9 += 1;
                      var_v0_23 = inline_fn2(var_a1_9, 0xFF);
                    }
                    while (((u32) inline_fn2(var_a1_9, 0xFF)) < 4U);
                    var_v1_3 = var_s4_2 & 0xFF;
                    goto block_349;
                  }
                  block_168:
                  var_s2 = var_s1_3;

                  goto block_169;
                }
                temp_s0_9 = var_s3 & 0xFF;
                if (temp_v0_17 >= 5U)
                {
                  if (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) >= 3U)
                  {
                    var_a1_10 = temp_s5 & 0xFF;
                    if (((u32) inline_fn2(var_a2 - 0x10, 0xFF)) >= 3U)
                    {
                      var_s2 = var_s1_3;
                      if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
                      {
                        goto block_150;
                      }
                      block_169:
                      var_v0_21 = inline_fn2(var_s3, 0xFF);

                      if ((var_s2 & 0xFF) == (*((u8 *) (((s8 *) trackInfo) + 2))))
                      {
                        temp_s0_10 = var_s3 & 0xFF;
                        updateTrackDirection(temp_s0_10, temp_s5 & 0xFF, &spC78, &spC79);
                        temp_a0_14 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
                        temp_v1_12 = temp_s0_10 * 5;
                        *((u8 *) (((s8 *) temp_a0_14) + 0x880)) = (u8) (*(trackPoints + temp_v1_12));
                        *((u8 *) (((s8 *) temp_a0_14) + 0x881)) = (u8) (*(glyphLine + temp_v1_12));
                        *((u8 *) (((s8 *) temp_a0_14) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_12));
                        *((u8 *) (((s8 *) temp_a0_14) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_12));
                        *((u8 *) (((s8 *) temp_a0_14) + 0x884)) = (u8) (*(glyphCode + temp_v1_12));
                        var_a1_11 = 0;
                        var_v0_24 = inline_fn2(0, 0xFF);
                        do
                        {
                          temp_v0_21 = var_v0_24 * 2;
                          *((s32 *) (temp_v0_21 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_21 + ((inline_fn2(var_s3, 0xFF) * 8) + D_801C7470)));
                          var_a1_11 += 1;
                          var_v0_24 = var_a1_11 & 0xFF;
                        }
                        while (((u32) (var_a1_11 & 0xFF)) < 4U);
                        temp_v0_22 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
                        *(sp10 + (((*((s8 *) (((s8 *) temp_v0_22) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_22) + 2))))) = var_s4;
                        var_s4_2 = var_s4 + 1;
                        temp_v0_57 = inline_fn2(temp_s5, 0xFF);
                        updateTrackDirection(temp_v0_57, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                        temp_v1_13 = temp_v0_57 * 5;
                        temp_a0_15 = ((var_s4_2 & 0xFF) * 5) + sp10;
                        *((u8 *) (((s8 *) temp_a0_15) + 0x880)) = (u8) (*(trackPoints + temp_v1_13));
                        *((u8 *) (((s8 *) temp_a0_15) + 0x881)) = (u8) (*(glyphLine + temp_v1_13));
                        *((u8 *) (((s8 *) temp_a0_15) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_13));
                        *((u8 *) (((s8 *) temp_a0_15) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_13));
                        *((u8 *) (((s8 *) temp_a0_15) + 0x884)) = (u8) (*(glyphCode + temp_v1_13));
                        var_a1_12 = 0;
                        var_v0_25 = 0 & 0xFF;
                        do
                        {
                          temp_v0_23 = var_v0_25 * 2;
                          *((s32 *) (temp_v0_23 + ((((var_s4_2 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_23 + ((temp_s5 * 8) + D_801C7470)));
                          var_a1_12 += 1;
                          var_v0_25 = inline_fn2(var_a1_12, 0xFF);
                        }
                        while (((u32) (var_a1_12 & 0xFF)) < 4U);
                        var_v1_3 = inline_fn2(var_s4_2, 0xFF);
                        goto block_349;
                      }
                      goto block_175;
                    }
                    goto block_152;
                  }
                  goto block_151;
                }
                block_150:
                block_151:
                var_a1_10 = inline_fn2(temp_s5, 0xFF);


                block_152:
                updateTrackDirection(temp_s0_9, var_a1_10, &spC78, &spC79);

                temp_a0_16 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
                temp_v1_14 = temp_s0_9 * 5;
                *((u8 *) (((s8 *) temp_a0_16) + 0x880)) = (u8) (*(trackPoints + temp_v1_14));
                *((u8 *) (((s8 *) temp_a0_16) + 0x881)) = (u8) (*(glyphLine + temp_v1_14));
                *((u8 *) (((s8 *) temp_a0_16) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_14));
                *((u8 *) (((s8 *) temp_a0_16) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_14));
                *((u8 *) (((s8 *) temp_a0_16) + 0x884)) = (u8) (*(glyphCode + temp_v1_14));
                var_a1_13 = 0;
                var_v0_26 = 0 & 0xFF;
                do
                {
                  temp_v0_24 = var_v0_26 * 2;
                  *((s32 *) (temp_v0_24 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_24 + ((inline_fn2(var_s3, 0xFF) * 8) + D_801C7470)));
                  var_a1_13 += 1;
                  var_v0_26 = inline_fn2(var_a1_13, 0xFF);
                }
                while (((u32) inline_fn2(var_a1_13, 0xFF)) < 4U);
                temp_v0_25 = (void *) (((var_s4 & 0xFF) * 5) + ((s32) spC8C));
                *(sp10 + (((*((s8 *) (((s8 *) temp_v0_25) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_25) + 2))))) = var_s4;
                var_s4_2 = var_s4 + 1;
                temp_s0_12 = temp_s5 & 0xFF;
                updateTrackDirection(temp_s0_12, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                temp_a0_17 = ((var_s4_2 & 0xFF) * 5) + sp10;
                temp_v1_15 = temp_s0_12 * 5;
                *((u8 *) (((s8 *) temp_a0_17) + 0x880)) = (u8) (*(trackPoints + temp_v1_15));
                *((u8 *) (((s8 *) temp_a0_17) + 0x881)) = (u8) (*(glyphLine + temp_v1_15));
                *((u8 *) (((s8 *) temp_a0_17) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_15));
                *((u8 *) (((s8 *) temp_a0_17) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_15));
                *((u8 *) (((s8 *) temp_a0_17) + 0x884)) = (u8) (*(glyphCode + temp_v1_15));
                var_a1_14 = 0;
                var_v0_27 = inline_fn2(0, 0xFF);
                do
                {
                  temp_v0_26 = var_v0_27 * 2;
                  *((s32 *) (temp_v0_26 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_26 + ((temp_s5 * 8) + D_801C7470)));
                  var_a1_14 += 1;
                  var_v0_27 = inline_fn2(var_a1_14, 0xFF);
                }
                while (((u32) (var_a1_14 & 0xFF)) < 4U);
                var_v1_3 = inline_fn2(var_s4_2, 0xFF);
                goto block_349;
              }
            }
          }
          block_175:
          temp_a0_18 = var_v0_21 * 5;

          if ((*((u16 *) (glyphLine + temp_a0_18))) == (*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))))
          {
            if ((((*((u16 *) (glyphLine + temp_a0_18))) == 0) | ((*((u16 *) (glyphLine + temp_a0_18))) == 0x3C)) != 0)
            {
              var_v0_16 = var_s6 - 0x1B;
              if (((u32) inline_fn2(var_a2 - 0x16, 0xFF)) >= 5U)
              {
                var_v0_28 = var_s6 & 0xFF;
                if ((((((u32) inline_fn2(var_a2, 0xFF)) < 5U) || ((var_v0_28 = inline_fn2(var_s6, 0xFF), (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) < 3U) != 0))) || ((var_v0_28 = inline_fn2(var_s6, 0xFF), (((u32) inline_fn2(var_a2 - 0x10, 0xFF)) < 3U) != 0))) || ((var_v0_28 = var_s6 & 0xFF, ((((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U) | (((s8) var_a2) == 0x2D)) != 0)))
                {
                  if ((var_v0_28 >= 5U) && (((u32) ((var_s6 - 0xD) & 0xFF)) >= 3U))
                  {
                    var_v0_16 = var_s6 - 0x16;
                    if (((u32) inline_fn2(var_s6 - 0x13, 0xFF)) >= 3U)
                    {
                      goto block_394;
                    }
                  }
                }
                else
                {
                  goto block_397;
                }
              }
              else
              {
                goto block_394;
              }
            }
            else
              if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_29 = inline_fn2(var_s6, 0xFF);
              if (((u32) (var_a2 & 0xFF)) >= 5U)
              {
                var_v0_29 = inline_fn2(var_s6, 0xFF);
                if (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) >= 3U)
                {
                  if (!inline_fn2(((u32) ((var_a2 - 0x10) & 0xFF)) >= 3U, ((s8) var_a2) != 0x2D))
                  {
                    var_v0_29 = var_s6 & 0xFF;
                    goto block_191;
                  }
                  goto block_397;
                }
              }
              block_191:
              if ((var_v0_29 >= 5U) && (((u32) ((var_s6 - 0xD) & 0xFF)) >= 3U))
              {
                var_v0_20 = ((u32) inline_fn2(var_s6 - 0x13, 0xFF)) < 3U;
                goto block_396;
              }

            }
          }
          else
            if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) != 0)
          {
            if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == 0x3C)
            {
              if ((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) == 0)
              {
                var_v0_16 = var_s6 - 0x1B;
                if (((u32) (var_a2 & 0xFF)) >= 5U)
                {
                  var_v0_16 = var_s6 - 0x1B;
                  if (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) >= 3U)
                  {
                    var_v0_16 = var_s6 - 0x1B;
                    if (((u32) inline_fn2(var_a2 - 0x10, 0xFF)) >= 3U)
                    {
                      if (((((u32) inline_fn2(var_a2 - 0x1B, 0xFF)) < 5U) | (((s8) var_a2) == 0x2D)) != 0)
                      {
                        var_v0_18 = (var_s6 - 0x1B) & 0xFF;
                        goto block_395;
                      }
                      goto block_397;
                    }
                  }
                }
                goto block_394;
              }
              if ((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) == sentinel_const0)
              {
                if (((u32) ((var_a2 - 0x16) & 0xFF)) < 5U)
                {
                  if ((((u32) inline_fn2(var_s6, 0xFF)) >= 5U) && (((u32) ((var_s6 - 0xD) & 0xFF)) >= 3U))
                  {
                    var_v0_20 = ((u32) inline_fn2(var_s6 - 0x13, 0xFF)) < 3U;
                    goto block_396;
                  }
                }
                else
                {
                  goto block_397;
                }
              }
            }
            else
              if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_16 = var_s6 - 0x1B;
              if (((u32) inline_fn2(var_a2, 0xFF)) >= 5U)
              {
                var_v0_16 = var_s6 - 0x1B;
                if (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) >= 3U)
                {
                  if (!inline_fn2(((u32) ((var_a2 - 0x10) & 0xFF)) >= 3U, ((s8) var_a2) != 0x2D))
                  {
                    var_v0_16 = var_s6 - 0x1B;
                    goto block_394;
                  }
                  goto block_397;
                }
              }
              goto block_394;
            }
          }
          else
            if (((u32) inline_fn2(var_a2 - 0x16, 0xFF)) < 5U)
          {
            if ((((u32) (var_s6 & 0xFF)) >= 5U) && (((u32) ((var_s6 - 0xD) & 0xFF)) >= 3U))
            {
              var_v0_20 = ((u32) ((var_s6 - 0x13) & 0xFF)) < 8U;
              goto block_396;
            }
          }
          else
          {
            goto block_397;
          }
          goto block_398;
        }
        goto block_397;
      }
      temp_a1_4 = (var_s3 & 0xFF) * 5;
      if ((*(trackPoints + temp_a1_4)) == 2)
      {
        if (((*(D_801C7082 + temp_a1_4)) == (*(D_801C7082 + (inline_fn2(temp_s5, 0xFF) * 5)))) && ((*(D_801C7083 + temp_a1_4)) == ((*(D_801C7083 + (inline_fn2(temp_s5, 0xFF) * 5))) - 1)))
        {
          var_v0_30 = var_s3 & 0xFF;
          if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 6)
          {
            temp_a0_20 = var_v0_30 * 5;
            var_v0_30 = inline_fn2(var_s3, 0xFF);
            if ((*(D_801C7082 + temp_a0_20)) == finishPos)
            {
              var_v0_30 = var_s3 & 0xFF;
              if (((*(D_801C7083 + temp_a0_20)) + 1) == D_801C7063)
              {
                var_v0_30 = var_s3 & 0xFF;
                if (((s8) var_s6) != 0x2B)
                {
                  var_s2 = var_s1_3;
                  goto block_264;
                }
                temp_v1_16 = *((u16 *) (glyphLine + (var_v0_30 * 5)));
                if (temp_v1_16 != (*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))))
                {
                  if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) != 0)
                  {
                    if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == 0x3C)
                    {
                      if ((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) != 0)
                      {
                        if (((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) == sentinel_const0) && (((u32) inline_fn2(var_a2 - 0x25, 0xFF)) >= 5U))
                        {
                          var_s2 = var_s1_3;
                        }
                      }
                      else
                      {
                        goto block_257;
                      }
                    }
                    else
                      if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == sentinel_const0)
                    {
                      goto block_257;
                    }
                  }
                  else
                    if (((u32) ((var_a2 - 0x25) & 0xFF)) >= 5U)
                  {
                    var_s2 = var_s1_3;
                  }
                  goto block_258;
                }
                temp_v0_28 = var_a2 - 5;
                if (temp_v1_16 == sentinel_const0)
                {
                  temp_s0_13 = inline_fn2(var_s3, 0xFF);
                  if ((((u32) (temp_v0_28 & 0xFF)) < 5U) || (((u32) inline_fn2(var_a2 - 0xA, 0xFF)) < 6U))
                  {
                    updateTrackDirection(temp_s0_13, inline_fn2(temp_s5, 0xFF), &spC78, &spC79);
                    temp_a0_21 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
                    temp_v1_17 = temp_s0_13 * 5;
                    *((u8 *) (((s8 *) temp_a0_21) + 0x880)) = (u8) (*(trackPoints + temp_v1_17));
                    *((u8 *) (((s8 *) temp_a0_21) + 0x881)) = (u8) (*(glyphLine + temp_v1_17));
                    *((u8 *) (((s8 *) temp_a0_21) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_17));
                    *((u8 *) (((s8 *) temp_a0_21) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_17));
                    *((u8 *) (((s8 *) temp_a0_21) + 0x884)) = (u8) (*(glyphCode + temp_v1_17));
                    var_a1_15 = 0;
                    var_v0_31 = inline_fn2(0, 0xFF);
                    do
                    {
                      temp_v0_29 = var_v0_31 * 2;
                      *((s32 *) (temp_v0_29 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_29 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
                      var_a1_15 += 1;
                      var_v0_31 = var_a1_15 & 0xFF;
                    }
                    while (((u32) inline_fn2(var_a1_15, 0xFF)) < 4U);
                    temp_v0_30 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
                    *(sp10 + (((*((s8 *) (((s8 *) temp_v0_30) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_30) + 2))))) = var_s4;
                    var_s4_2 = var_s4 + 1;
                    temp_v0_57 = temp_s5 & 0xFF;
                    updateTrackDirection(temp_v0_57, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                    temp_a0_22 = (inline_fn2(var_s4_2, 0xFF) * 5) + sp10;
                    temp_v1_18 = temp_v0_57 * 5;
                    *((u8 *) (((s8 *) temp_a0_22) + 0x880)) = (u8) (*(trackPoints + temp_v1_18));
                    *((u8 *) (((s8 *) temp_a0_22) + 0x881)) = (u8) (*(glyphLine + temp_v1_18));
                    *((u8 *) (((s8 *) temp_a0_22) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_18));
                    *((u8 *) (((s8 *) temp_a0_22) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_18));
                    *((u8 *) (((s8 *) temp_a0_22) + 0x884)) = (u8) (*(glyphCode + temp_v1_18));
                    var_a1_16 = 0;
                    var_v0_32 = 0 & 0xFF;
                    do
                    {
                      temp_v0_31 = var_v0_32 * 2;
                      *((s32 *) (temp_v0_31 + ((((var_s4_2 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_31 + ((temp_s5 * 8) + D_801C7470)));
                      var_a1_16 += 1;
                      var_v0_32 = var_a1_16 & 0xFF;
                    }
                    while (((u32) inline_fn2(var_a1_16, 0xFF)) < 4U);
                    var_v1_3 = var_s4_2 & 0xFF;
                    goto block_349;
                  }
                  block_257:
                  var_s2 = var_s1_3;

                  goto block_258;
                }
                temp_s0_15 = var_s3 & 0xFF;
                if (((u32) inline_fn2(temp_v0_28, 0xFF)) >= 5U)
                {
                  if (((u32) ((var_a2 - 0xA) & 0xFF)) >= 6U)
                  {
                    var_s2 = var_s1_3;
                    if (((u32) inline_fn2(var_a2 - 0x20, 0xFF)) < 5U)
                    {
                      goto block_240;
                    }
                    block_258:
                    var_v0_30 = var_s3 & 0xFF;

                    if ((var_s2 & 0xFF) == (*((u8 *) (((s8 *) trackInfo) + 2))))
                    {
                      temp_s0_16 = inline_fn2(var_s3, 0xFF);
                      updateTrackDirection(temp_s0_16, temp_s5 & 0xFF, &spC78, &spC79);
                      temp_a0_23 = ((var_s4 & 0xFF) * 5) + sp10;
                      temp_v1_19 = temp_s0_16 * 5;
                      *((u8 *) (((s8 *) temp_a0_23) + 0x880)) = (u8) (*(trackPoints + temp_v1_19));
                      *((u8 *) (((s8 *) temp_a0_23) + 0x881)) = (u8) (*(glyphLine + temp_v1_19));
                      *((u8 *) (((s8 *) temp_a0_23) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_19));
                      *((u8 *) (((s8 *) temp_a0_23) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_19));
                      *((u8 *) (((s8 *) temp_a0_23) + 0x884)) = (u8) (*(glyphCode + temp_v1_19));
                      var_a1_17 = 0;
                      var_v0_33 = inline_fn2(0, 0xFF);
                      do
                      {
                        temp_v0_32 = var_v0_33 * 2;
                        *((s32 *) (temp_v0_32 + ((((var_s4 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_32 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
                        var_a1_17 += 1;
                        var_v0_33 = inline_fn2(var_a1_17, 0xFF);
                      }
                      while (((u32) (var_a1_17 & 0xFF)) < 4U);
                      temp_v0_33 = (void *) (((var_s4 & 0xFF) * 5) + ((s32) spC8C));
                      *(sp10 + (((*((s8 *) (((s8 *) temp_v0_33) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_33) + 2))))) = var_s4;
                      var_s4_2 = var_s4 + 1;
                      var_s4 = inline_fn2(temp_s5, 0xFF);
                      updateTrackDirection(var_s4, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                      temp_a0_24 = (inline_fn2(var_s4_2, 0xFF) * 5) + sp10;
                      temp_v1_20 = var_s4 * 5;
                      *((u8 *) (((s8 *) temp_a0_24) + 0x880)) = (u8) (*(trackPoints + temp_v1_20));
                      *((u8 *) (((s8 *) temp_a0_24) + 0x881)) = (u8) (*(glyphLine + temp_v1_20));
                      *((u8 *) (((s8 *) temp_a0_24) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_20));
                      *((u8 *) (((s8 *) temp_a0_24) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_20));
                      *((u8 *) (((s8 *) temp_a0_24) + 0x884)) = (u8) (*(glyphCode + temp_v1_20));
                      var_a1_18 = 0;
                      var_v0_34 = 0 & 0xFF;
                      do
                      {
                        temp_v0_34 = var_v0_34 * 2;
                        *((s32 *) (temp_v0_34 + ((((var_s4_2 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_34 + ((temp_s5 * 8) + D_801C7470)));
                        var_a1_18 += 1;
                        var_v0_34 = var_a1_18 & 0xFF;
                      }
                      while (((u32) inline_fn2(var_a1_18, 0xFF)) < 4U);
                      var_v1_3 = var_s4_2 & 0xFF;
                      goto block_349;
                    }
                    goto block_264;
                  }
                  goto block_241;
                }
                block_240:
                block_241:
                updateTrackDirection(temp_s0_15, temp_s5 & 0xFF, &spC78, &spC79);


                temp_a0_25 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
                temp_v1_21 = temp_s0_15 * 5;
                *((u8 *) (((s8 *) temp_a0_25) + 0x880)) = (u8) (*(trackPoints + temp_v1_21));
                *((u8 *) (((s8 *) temp_a0_25) + 0x881)) = (u8) (*(glyphLine + temp_v1_21));
                *((u8 *) (((s8 *) temp_a0_25) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_21));
                *((u8 *) (((s8 *) temp_a0_25) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_21));
                *((u8 *) (((s8 *) temp_a0_25) + 0x884)) = (u8) (*(glyphCode + temp_v1_21));
                var_a1_19 = 0;
                var_v0_35 = inline_fn2(0, 0xFF);
                do
                {
                  temp_v0_35 = var_v0_35 * 2;
                  *((s32 *) (temp_v0_35 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_35 + ((inline_fn2(var_s3, 0xFF) * 8) + D_801C7470)));
                  var_a1_19 += 1;
                  var_v0_35 = inline_fn2(var_a1_19, 0xFF);
                }
                while (((u32) (var_a1_19 & 0xFF)) < 4U);
                temp_v0_36 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
                *(sp10 + (((*((s8 *) (((s8 *) temp_v0_36) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_36) + 2))))) = var_s4;
                var_s4_2 = var_s4 + 1;
                temp_s0_18 = temp_s5 & 0xFF;
                updateTrackDirection(temp_s0_18, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                temp_a0_26 = ((unsigned char) ((var_s4_2 & 0xFF) * 5)) + sp10;
                temp_v1_22 = temp_s0_18 * 5;
                *((u8 *) (((s8 *) temp_a0_26) + 0x880)) = inline_fn(temp_v1_22);
                *((u8 *) (((s8 *) temp_a0_26) + 0x881)) = (u8) (*(glyphLine + temp_v1_22));
                *((u8 *) (((s8 *) temp_a0_26) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_22));
                *((u8 *) (((s8 *) temp_a0_26) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_22));
                *((u8 *) (((s8 *) temp_a0_26) + 0x884)) = (u8) (*(glyphCode + temp_v1_22));
                var_a1_20 = 0;
                var_v0_36 = inline_fn2(0, 0xFF);
                do
                {
                  temp_v0_37 = var_v0_36 * 2;
                  *((s32 *) (temp_v0_37 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_37 + ((temp_s5 * 8) + D_801C7470)));
                  var_a1_20 += 1;
                  var_v0_36 = inline_fn2(var_a1_20, 0xFF);
                }
                while (((u32) inline_fn2(var_a1_20, 0xFF)) < 4U);
                var_v1_3 = var_s4_2 & 0xFF;
                goto block_349;
              }
            }
          }
          block_264:
          temp_a0_27 = var_v0_30 * 5;

          if ((*((u16 *) (glyphLine + temp_a0_27))) == (*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))))
          {
            if ((((*((u16 *) (glyphLine + temp_a0_27))) == 0) | ((*((u16 *) (glyphLine + temp_a0_27))) == 0x3C)) != 0)
            {
              var_v0_16 = var_s6 - 0x20;
              if (((u32) ((var_a2 - 0x25) & 0xFF)) >= 5U)
              {
                var_v0_37 = var_s6 - 5;
                if (((((u32) ((var_a2 - 5) & 0xFF)) < 5U) || ((var_v0_37 = var_s6 - 5, (((u32) ((var_a2 - 0xA) & 0xFF)) < 6U) != 0))) || ((var_v0_37 = var_s6 - 5, ((((u32) inline_fn2(var_a2 - 0x20, 0xFF)) < 5U) | (((s8) var_a2) == 0x2A)) != 0)))
                {
                  if ((((u32) (var_v0_37 & 0xFF)) >= 5U) && (((u32) inline_fn2(var_s6 - 0x10, 0xFF)) >= 6U))
                  {
                    var_v0_18 = (var_s6 - 0x25) & 0xFF;
                    goto block_395;
                  }
                }
                else
                {
                  goto block_397;
                }
              }
              else
              {
                goto block_394;
              }
            }
            else
              if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_38 = var_s6 - 5;
              if (((u32) ((var_a2 - 5) & 0xFF)) >= 5U)
              {
                if (!((((u32) ((var_a2 - 0xA) & 0xFF)) >= 6U) & (((s8) var_a2) != 0x2A)))
                {
                  var_v0_38 = var_s6 - 5;
                  goto block_277;
                }
                goto block_397;
              }
              block_277:
              if (((u32) (var_v0_38 & 0xFF)) >= 5U)
              {
                var_v0_20 = ((u32) ((var_s6 - 0x10) & 0xFF)) < 6U;
                goto block_396;
              }

            }
          }
          else
            if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) != 0)
          {
            if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == 0x3C)
            {
              if ((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == 0)
              {
                var_v0_16 = var_s6 - 0x20;
                if (((u32) inline_fn2(var_a2 - 5, 0xFF)) >= 5U)
                {
                  var_v0_16 = var_s6 - 0x20;
                  if (((u32) ((var_a2 - 0xA) & 0xFF)) >= 6U)
                  {
                    if (((((u32) ((var_a2 - 0x20) & 0xFF)) < 5U) | (((s8) var_a2) == 0x2A)) != 0)
                    {
                      var_v0_18 = (var_s6 - 0x20) & 0xFF;
                      goto block_395;
                    }
                    goto block_397;
                  }
                }
                goto block_394;
              }
              if ((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == sentinel_const0)
              {
                if (((u32) inline_fn2(var_a2 - 0x25, 0xFF)) < 5U)
                {
                  if (((u32) inline_fn2(var_s6 - 5, 0xFF)) >= 5U)
                  {
                    var_v0_20 = ((u32) inline_fn2(var_s6 - 0x10, 0xFF)) < 6U;
                    goto block_396;
                  }
                }
                else
                {
                  goto block_397;
                }
              }
            }
            else
              if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_16 = var_s6 - 0x20;
              if (((u32) ((var_a2 - 5) & 0xFF)) >= 5U)
              {
                if (!inline_fn2(((u32) inline_fn2(var_a2 - 0xA, 0xFF)) >= 6U, ((s8) var_a2) != 0x2A))
                {
                  var_v0_16 = var_s6 - 0x20;
                  goto block_394;
                }
                goto block_397;
              }
              goto block_394;
            }
          }
          else
            if (((u32) ((var_a2 - 0x25) & 0xFF)) < 5U)
          {
            if ((((u32) inline_fn2(var_s6 - 5, 0xFF)) >= 5U) && (((u32) ((var_s6 - 0x10) & 0xFF)) >= 6U))
            {
              var_v0_18 = (var_s6 - 0x25) & 0xFF;
              goto block_395;
            }
          }
          else
          {
            goto block_397;
          }
          goto block_398;
        }
        goto block_397;
      }
      temp_a1_5 = (var_s3 & 0xFF) * 5;
      if ((*(trackPoints + temp_a1_5)) == 3)
      {
        if (((*(D_801C7082 + temp_a1_5)) == ((*(D_801C7082 + (inline_fn2(temp_s5, 0xFF) * 5))) - 1)) && ((*(D_801C7083 + temp_a1_5)) == (*(D_801C7083 + ((temp_s5 & 0xFF) * 5)))))
        {
          var_v0_39 = inline_fn2(var_s3, 0xFF);
          if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 6)
          {
            temp_a0_29 = var_v0_39 * 5;
            var_v0_39 = var_s3 & 0xFF;
            if (((*(D_801C7082 + temp_a0_29)) + 1) == finishPos)
            {
              var_v0_39 = inline_fn2(var_s3, 0xFF);
              if ((*(D_801C7083 + temp_a0_29)) == D_801C7063)
              {
                var_v0_39 = inline_fn2(var_s3, 0xFF);
                if (((s8) var_s6) != 0x2D)
                {
                  var_s2 = var_s1_3;
                  goto block_350;
                }
                temp_v1_23 = *((u16 *) (glyphLine + (var_v0_39 * 5)));
                if (temp_v1_23 != (*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))))
                {
                  if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) != 0)
                  {
                    if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == 0x3C)
                    {
                      if ((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) != 0)
                      {
                        if (((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == sentinel_const0) && (((u32) ((var_a2 - 0x1B) & 0xFF)) >= 5U))
                        {
                          var_s2 = var_s1_3;
                        }
                      }
                      else
                      {
                        goto block_342;
                      }
                    }
                    else
                      if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == sentinel_const0)
                    {
                      goto block_342;
                    }
                  }
                  else
                    if (((u32) inline_fn2(var_a2 - 0x1B, 0xFF)) >= 5U)
                  {
                    var_s2 = var_s1_3;
                  }
                  goto block_343;
                }
                temp_v0_39 = inline_fn2(var_a2, 0xFF);
                if (temp_v1_23 == sentinel_const0)
                {
                  temp_s0_19 = inline_fn2(var_s3, 0xFF);
                  if (((temp_v0_39 < 5U) || (((u32) inline_fn2(var_a2 - 0xD, 0xFF)) < 3U)) || (((u32) inline_fn2(var_a2 - 0x13, 0xFF)) < 3U))
                  {
                    updateTrackDirection(temp_s0_19, temp_s5 & 0xFF, &spC78, &spC79);
                    temp_a0_30 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
                    temp_v1_24 = temp_s0_19 * 5;
                    *((u8 *) (((s8 *) temp_a0_30) + 0x880)) = (u8) (*(trackPoints + temp_v1_24));
                    *((u8 *) (((s8 *) temp_a0_30) + 0x881)) = (u8) (*(glyphLine + temp_v1_24));
                    *((u8 *) (((s8 *) temp_a0_30) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_24));
                    *((u8 *) (((s8 *) temp_a0_30) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_24));
                    *((u8 *) (((s8 *) temp_a0_30) + 0x884)) = (u8) (*(glyphCode + temp_v1_24));
                    var_a1_21 = 0;
                    var_v0_40 = 0 & 0xFF;
                    do
                    {
                      temp_v0_40 = var_v0_40 * 2;
                      *((s32 *) (temp_v0_40 + ((((var_s4 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_40 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
                      var_a1_21 += 1;
                      var_v0_40 = var_a1_21 & 0xFF;
                    }
                    while (((u32) (var_a1_21 & 0xFF)) < 4U);
                    temp_v0_41 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
                    *(sp10 + (((*((s8 *) (((s8 *) temp_v0_41) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_41) + 2))))) = var_s4;
                    var_s4_2 = var_s4 + 1;
                    var_s4 = temp_s5 & 0xFF;
                    updateTrackDirection(var_s4, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                    temp_a0_31 = ((var_s4_2 & 0xFF) * 5) + sp10;
                    temp_v1_25 = var_s4 * 5;
                    *((u8 *) (((s8 *) temp_a0_31) + 0x880)) = (u8) (*(trackPoints + temp_v1_25));
                    *((u8 *) (((s8 *) temp_a0_31) + 0x881)) = (u8) (*(glyphLine + temp_v1_25));
                    *((u8 *) (((s8 *) temp_a0_31) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_25));
                    *((u8 *) (((s8 *) temp_a0_31) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_25));
                    *((u8 *) (((s8 *) temp_a0_31) + 0x884)) = (u8) (*(glyphCode + temp_v1_25));
                    var_a1_22 = 0;
                    var_v0_41 = inline_fn2(0, 0xFF);
                    do
                    {
                      temp_v0_42 = var_v0_41 * 2;
                      *((s32 *) (temp_v0_42 + ((((var_s4_2 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_42 + ((temp_s5 * 8) + D_801C7470)));
                      var_a1_22 += 1;
                      var_v0_41 = var_a1_22 & 0xFF;
                    }
                    while (((u32) (var_a1_22 & 0xFF)) < 4U);
                    var_v1_3 = inline_fn2(var_s4_2, 0xFF);
                    goto block_349;
                  }
                  block_342:
                  var_s2 = var_s1_3;

                  goto block_343;
                }
                temp_s0_21 = var_s3 & 0xFF;
                if (temp_v0_39 >= 5U)
                {
                  if (((u32) inline_fn2(var_a2 - 0xD, 0xFF)) >= 3U)
                  {
                    var_a1_23 = temp_s5 & 0xFF;
                    if (((u32) ((var_a2 - 0x13) & 0xFF)) >= 3U)
                    {
                      var_s2 = var_s1_3;
                      if (((u32) ((var_a2 - 0x16) & 0xFF)) < 5U)
                      {
                        goto block_324;
                      }
                      block_343:
                      var_v0_39 = var_s3 & 0xFF;

                      if (inline_fn2(var_s2, 0xFF) == (*((u8 *) (((s8 *) trackInfo) + 2))))
                      {
                        temp_s0_22 = inline_fn2(var_s3, 0xFF);
                        updateTrackDirection(temp_s0_22, temp_s5 & 0xFF, &spC78, &spC79);
                        temp_a0_32 = ((var_s4 & 0xFF) * 5) + sp10;
                        temp_v1_26 = temp_s0_22 * 5;
                        *((u8 *) (((s8 *) temp_a0_32) + 0x880)) = (u8) (*(trackPoints + temp_v1_26));
                        *((u8 *) (((s8 *) temp_a0_32) + 0x881)) = (u8) (*(glyphLine + temp_v1_26));
                        *((u8 *) (((s8 *) temp_a0_32) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_26));
                        *((u8 *) (((s8 *) temp_a0_32) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_26));
                        *((u8 *) (((s8 *) temp_a0_32) + 0x884)) = (u8) (*(glyphCode + temp_v1_26));
                        var_a1_24 = 0;
                        var_v0_42 = inline_fn2(0, 0xFF);
                        do
                        {
                          temp_v0_43 = var_v0_42 * 2;
                          *((s32 *) (temp_v0_43 + ((((var_s4 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_43 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
                          var_a1_24 += 1;
                          var_v0_42 = inline_fn2(var_a1_24, 0xFF);
                        }
                        while (((u32) (var_a1_24 & 0xFF)) < 4U);
                        temp_v0_44 = (void *) (((var_s4 & 0xFF) * 5) + ((s32) spC8C));
                        *(sp10 + (((*((s8 *) (((s8 *) temp_v0_44) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_44) + 2))))) = var_s4;
                        var_s4_2 = var_s4 + 1;
                        var_s4 = inline_fn2(temp_s5, 0xFF);
                        updateTrackDirection(var_s4, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                        temp_a0_33 = ((var_s4_2 & 0xFF) * 5) + sp10;
                        temp_v1_27 = var_s4 * 5;
                        *((u8 *) (((s8 *) temp_a0_33) + 0x880)) = (u8) (*(trackPoints + temp_v1_27));
                        *((u8 *) (((s8 *) temp_a0_33) + 0x881)) = (u8) (*(glyphLine + temp_v1_27));
                        *((u8 *) (((s8 *) temp_a0_33) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_27));
                        *((u8 *) (((s8 *) temp_a0_33) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_27));
                        *((u8 *) (((s8 *) temp_a0_33) + 0x884)) = (u8) (*(glyphCode + temp_v1_27));
                        var_a1_25 = 0;
                        var_v0_43 = 0 & 0xFF;
                        do
                        {
                          temp_v0_45 = var_v0_43 * 2;
                          *((s32 *) (temp_v0_45 + (((inline_fn2(var_s4_2, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_45 + ((temp_s5 * 8) + D_801C7470)));
                          var_a1_25 += 1;
                          var_v0_43 = inline_fn2(var_a1_25, 0xFF);
                        }
                        while (((u32) inline_fn2(var_a1_25, 0xFF)) < 4U);
                        var_v1_3 = inline_fn2(var_s4_2, 0xFF);
                        goto block_349;
                      }
                      goto block_350;
                    }
                    goto block_326;
                  }
                  goto block_325;
                }
                block_324:
                block_325:
                var_a1_23 = inline_fn2(temp_s5, 0xFF);


                block_326:
                updateTrackDirection(temp_s0_21, var_a1_23, &spC78, &spC79);

                temp_a0_34 = ((var_s4 & 0xFF) * 5) + sp10;
                temp_v1_28 = temp_s0_21 * 5;
                *((u8 *) (((s8 *) temp_a0_34) + 0x880)) = (u8) (*(trackPoints + temp_v1_28));
                *((u8 *) (((s8 *) temp_a0_34) + 0x881)) = (u8) (*(glyphLine + temp_v1_28));
                *((u8 *) (((s8 *) temp_a0_34) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_28));
                *((u8 *) (((s8 *) temp_a0_34) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_28));
                *((u8 *) (((s8 *) temp_a0_34) + 0x884)) = (u8) (*(glyphCode + temp_v1_28));
                var_a1_26 = 0;
                var_v0_44 = inline_fn2(0, 0xFF);
                do
                {
                  temp_v0_46 = var_v0_44 * 2;
                  *((s32 *) (temp_v0_46 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_46 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
                  var_a1_26 += 1;
                  var_v0_44 = var_a1_26 & 0xFF;
                }
                while (((u32) (var_a1_26 & 0xFF)) < 4U);
                temp_v0_47 = (void *) (((var_s4 & 0xFF) * 5) + ((s32) spC8C));
                *(sp10 + (((*((s8 *) (((s8 *) temp_v0_47) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_47) + 2))))) = var_s4;
                var_s4_2 = var_s4 + 1;
                var_s4 = inline_fn2(temp_s5, 0xFF);
                updateTrackDirection(var_s4, *((s32 *) (((spC79 * 0x18) + ((s8) spC78)) + D_801C7AD8)), &spC78, &spC79);
                temp_a0_35 = (inline_fn2(var_s4_2, 0xFF) * 5) + sp10;
                temp_v1_29 = var_s4 * 5;
                *((u8 *) (((s8 *) temp_a0_35) + 0x880)) = (u8) (*(trackPoints + temp_v1_29));
                *((u8 *) (((s8 *) temp_a0_35) + 0x881)) = (u8) (*(glyphLine + temp_v1_29));
                *((u8 *) (((s8 *) temp_a0_35) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_29));
                *((u8 *) (((s8 *) temp_a0_35) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_29));
                *((u8 *) (((s8 *) temp_a0_35) + 0x884)) = (u8) (*(glyphCode + temp_v1_29));
                var_a1_27 = 0;
                var_v0_45 = 0 & 0xFF;
                do
                {
                  temp_v0_48 = var_v0_45 * 2;
                  *((s32 *) (temp_v0_48 + ((((var_s4_2 & 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_48 + ((temp_s5 * 8) + D_801C7470)));
                  var_a1_27 += 1;
                  var_v0_45 = inline_fn2(var_a1_27, 0xFF);
                }
                while (((u32) (var_a1_27 & 0xFF)) < 4U);
                var_v1_3 = var_s4_2 & 0xFF;
                block_349:
                temp_v0_49 = (void *) ((var_v1_3 * 5) + ((s32) spC8C));

                *(sp10 + (((*((s8 *) (((s8 *) temp_v0_49) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_49) + 2))))) = var_s4_2;
                var_s4 = var_s4_2 + 1;
                spC87 = 1;
                goto block_405;
              }
            }
          }
          block_350:
          temp_a0_36 = var_v0_39 * 5;

          if ((*((u16 *) (glyphLine + temp_a0_36))) == (*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))))
          {
            if ((((*((u16 *) (glyphLine + temp_a0_36))) == 0) | ((*((u16 *) (glyphLine + temp_a0_36))) == 0x3C)) != 0)
            {
              var_v0_16 = var_s6 - 0x16;
              if (((u32) inline_fn2(var_a2 - 0x1B, 0xFF)) >= 5U)
              {
                var_v0_46 = inline_fn2(var_s6, 0xFF);
                if ((((((u32) (var_a2 & 0xFF)) < 5U) || ((var_v0_46 = inline_fn2(var_s6, 0xFF), (((u32) ((var_a2 - 0xD) & 0xFF)) < 3U) != 0))) || ((var_v0_46 = inline_fn2(var_s6, 0xFF), (((u32) inline_fn2(var_a2 - 0x13, 0xFF)) < 3U) != 0))) || ((var_v0_46 = var_s6 & 0xFF, ((((u32) inline_fn2(var_a2 - 0x16, 0xFF)) < 5U) | (((s8) var_a2) == 0x2C)) != 0)))
                {
                  if (((var_v0_46 >= 5U) && (((u32) ((var_s6 - 0xA) & 0xFF)) >= 3U)) && (((u32) ((var_s6 - 0x10) & 0xFF)) >= 3U))
                  {
                    var_v0_18 = inline_fn2(var_s6 - 0x1B, 0xFF);
                    goto block_395;
                  }
                }
                else
                {
                  goto block_397;
                }
              }
              else
              {
                goto block_394;
              }
            }
            else
              if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_47 = var_s6 & 0xFF;
              if (((u32) inline_fn2(var_a2, 0xFF)) >= 5U)
              {
                var_v0_47 = var_s6 & 0xFF;
                if (((u32) inline_fn2(var_a2 - 0xD, 0xFF)) >= 3U)
                {
                  if (!inline_fn2(((u32) ((var_a2 - 0x13) & 0xFF)) >= 3U, ((s8) var_a2) != 0x2C))
                  {
                    var_v0_47 = inline_fn2(var_s6, 0xFF);
                    goto block_366;
                  }
                  goto block_397;
                }
              }
              block_366:
              if ((var_v0_47 >= 5U) && (((u32) inline_fn2(var_s6 - 0xA, 0xFF)) >= 3U))
              {
                var_v0_20 = ((u32) inline_fn2(var_s6 - 0x10, 0xFF)) < 3U;
                goto block_396;
              }

            }
          }
          else
            if ((*((u16 *) (glyphLine + ((var_s3 & 0xFF) * 5)))) != 0)
          {
            if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == 0x3C)
            {
              if ((*((u16 *) (glyphLine + (inline_fn2(temp_s5, 0xFF) * 5)))) == 0)
              {
                var_v0_16 = var_s6 - 0x16;
                if ((((((u32) (var_a2 & 0xFF)) >= 5U) && ((var_v0_16 = var_s6 - 0x16, (((u32) inline_fn2(var_a2 - 0xD, 0xFF)) < 3U) == 0))) && ((var_v0_16 = var_s6 - 0x16, (((u32) inline_fn2(var_a2 - 0x13, 0xFF)) < 3U) == 0))) && ((var_v0_16 = var_s6 - 0x16, ((((u32) ((var_a2 - 0x16) & 0xFF)) < 5U) | (((s8) var_a2) == 0x2C)) == 0)))
                {
                  var_s2 = var_s1_3;
                }
                else
                {
                  goto block_394;
                }
              }
              else
                if ((*((u16 *) (glyphLine + ((temp_s5 & 0xFF) * 5)))) == sentinel_const0)
              {
                if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
                {
                  if ((((u32) inline_fn2(var_s6, 0xFF)) >= 5U) && (((u32) inline_fn2(var_s6 - 0xA, 0xFF)) >= 3U))
                  {
                    var_v0_20 = ((u32) inline_fn2(var_s6 - 0x10, 0xFF)) < 3U;
                    goto block_396;
                  }
                }
                else
                {
                  goto block_397;
                }
              }
            }
            else
              if ((*((u16 *) (glyphLine + (inline_fn2(var_s3, 0xFF) * 5)))) == sentinel_const0)
            {
              var_v0_16 = var_s6 - 0x16;
              if (((u32) (var_a2 & 0xFF)) >= 5U)
              {
                var_v0_16 = var_s6 - 0x16;
                if (((u32) inline_fn2(var_a2 - 0xD, 0xFF)) >= 3U)
                {
                  if (!inline_fn2(((u32) inline_fn2(var_a2 - 0x13, 0xFF)) >= 3U, ((s8) var_a2) != 0x2C))
                  {
                    var_v0_16 = var_s6 - 0x16;
                    goto block_394;
                  }
                  goto block_397;
                }
              }
              block_394:
              var_v0_18 = inline_fn2(var_v0_16, 0xFF);

              goto block_395;
            }
          }
          else
            if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
          {
            if (((((u32) (var_s6 & 0xFF)) >= 5U) && (((u32) inline_fn2(var_s6 - 0xA, 0xFF)) >= 3U)) && (((u32) inline_fn2(var_s6 - 0x10, 0xFF)) >= 3U))
            {
              var_v0_18 = inline_fn2(var_s6 - 0x1B, 0xFF);
              block_395:
              var_v0_20 = var_v0_18 < 5U;

              block_396:
              if (var_v0_20 == 0)
              {
                goto block_397;
              }

            }
          }
          else
          {
            goto block_397;
          }
          goto block_398;
        }
        block_397:
        var_s2 = var_s1_3;

        goto block_398;
      }
      block_398:
      temp_s0_25 = var_s3 & 0xFF;

      if ((var_s2 & 0xFF) == (*((u8 *) (((s8 *) trackInfo) + 2))))
      {
        updateTrackDirection(temp_s0_25, inline_fn2(temp_s5, 0xFF), &spC78, &spC79);
        temp_a0_37 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
        temp_v1_30 = temp_s0_25 * 5;
        *((u8 *) (((s8 *) temp_a0_37) + 0x880)) = (u8) (*(trackPoints + temp_v1_30));
        *((u8 *) (((s8 *) temp_a0_37) + 0x881)) = (u8) (*(glyphLine + temp_v1_30));
        *((u8 *) (((s8 *) temp_a0_37) + 0x882)) = (u8) (*(D_801C7082 + temp_v1_30));
        *((u8 *) (((s8 *) temp_a0_37) + 0x883)) = (u8) (*(D_801C7083 + temp_v1_30));
        *((u8 *) (((s8 *) temp_a0_37) + 0x884)) = (u8) (*(glyphCode + temp_v1_30));
        var_a1_28 = 0;
        var_v0_48 = inline_fn2(0, 0xFF);
        do
        {
          temp_v0_51 = var_v0_48 * 2;
          *((s32 *) (temp_v0_51 + (((inline_fn2(var_s4, 0xFF) * 8) + sp10) + 0x240))) = *((s32 *) (temp_v0_51 + (((var_s3 & 0xFF) * 8) + D_801C7470)));
          var_a1_28 += 1;
          var_v0_48 = var_a1_28 & 0xFF;
        }
        while (((u32) (var_a1_28 & 0xFF)) < 4U);
        temp_v0_52 = (void *) ((inline_fn2(var_s4, 0xFF) * 5) + ((s32) spC8C));
        *(sp10 + (((*((s8 *) (((s8 *) temp_v0_52) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_52) + 2))))) = var_s4;
        var_s4 += 1;
        var_s3 = temp_s5;
        var_a2 = var_s6;
        if (((((*((u8 *) (((s8 *) trackInfo) + 1))) == 5) && ((temp_a0_38 = inline_fn2(var_s3, 0xFF) * 5, (*(D_801C7082 + temp_a0_38)) == finishPos))) && ((*(D_801C7083 + temp_a0_38)) == D_801C7063)) || ((var_s1_3 += 1, ((var_s1_3 & 0xFFFF) < ((*((u8 *) (((s8 *) trackInfo) + 2))) - 1)) == 0)))
        {
          goto block_405;
        }
        goto loop_40;
      }
      block_445:
      var_v1 = inline_fn2(var_s3, 0xFF);

      goto block_446;
    }
    block_405:
    temp_s3 = *(D_801C7AD8 + ((D_801C7063 * 0x18) + finishPos));

    if ((*((u8 *) (((s8 *) trackInfo) + 0))) == 3)
    {
      var_a2_2 = *(glyphCode + (inline_fn2(temp_s3, 0xFF) * 5));
    }
    else
    {
      var_a2_2 = (*(glyphCode + (inline_fn2(temp_s3, 0xFF) * 5))) - 0x2E;
    }
    temp_v0_53 = temp_s3 & 0xFF;
    if ((*((u8 *) (((s8 *) trackInfo) + 1))) == 5)
    {
      temp_a0_39 = temp_v0_53 * 5;
      if ((((*(trackPoints + temp_a0_39)) == 0) | ((*(trackPoints + temp_a0_39)) == 2)) != 0)
      {
        if (((u32) inline_fn2(var_a2_2 - 5, 0xFF)) >= 5U)
        {
          cursorX = *(D_801C7082 + temp_a0_39);
          var_v0_8 = *(D_801C7083 + temp_a0_39);
          {
            cursorY = var_v0_8;
            return 0U;
          }
        }
        goto block_415;
      }
      temp_a0_40 = (temp_s3 & 0xFF) * 5;
      if (((((*(trackPoints + temp_a0_40)) == 1) | ((*(trackPoints + temp_a0_40)) == 3)) != 0) && (((u32) inline_fn2(var_a2_2, 0xFF)) >= 5U))
      {
        cursorX = *(D_801C7082 + temp_a0_40);
        var_v0_8 = *(D_801C7083 + temp_a0_40);
        {
          cursorY = var_v0_8;
          return 0U;
        }
      }
      block_415:
      switch (blockFootprint)
      {
        var_v1 = inline_fn2(temp_s3, 0xFF);
        if (blockPos == finishPos)
        {
          var_v1 = temp_s3 & 0xFF;
          if (D_801C6BB1 != (D_801C7063 - 1))
          {
            goto block_446;
          }
          block_431:
          temp_a0_41 = inline_fn2(temp_s3, 0xFF) * 5;

          if ((*((u16 *) (glyphLine + temp_a0_41))) != (*((u16 *) (glyphLine + (((*(D_801C7AD8 + ((D_801C6BB1 * 0x18) + blockPos))) & 0xFF) * 5)))))
          {
            cursorX = *(D_801C7082 + temp_a0_41);
            var_v0_8 = *(D_801C7083 + temp_a0_41);
            {
              cursorY = var_v0_8;
              return 0U;
            }
          }
          goto block_448;
        }
        block_446:
        temp_v0_56 = var_v1 * 5;

        cursorX = *(D_801C7082 + temp_v0_56);
        var_v0_8 = *(D_801C7083 + temp_v0_56);
        {
          cursorY = var_v0_8;
          return 0U;
        }
        var_v0_49 = finishPos - 1;
        block_429:
        var_v1 = inline_fn2(temp_s3, 0xFF);

        if (blockPos == var_v0_49)
        {
          var_v1 = temp_s3 & 0xFF;
          if (D_801C6BB1 == D_801C7063)
          {
            goto block_431;
          }
        }
        goto block_446;
        var_v1 = temp_s3 & 0xFF;
        if (blockPos == finishPos)
        {
          var_v1 = temp_s3 & 0xFF;
          if (D_801C6BB1 != (D_801C7063 + 1))
          {
            goto block_446;
          }
          goto block_431;
        }
        goto block_446;
        var_v0_49 = finishPos + 1;
        goto block_429;
      }


    }
    else
    {
      temp_a0_42 = temp_v0_53 * 5;
      if ((*(trackPoints + temp_a0_42)) == 0)
      {
        if (((s8) var_a2_2) != 0x2A)
        {
          cursorX = *(D_801C7082 + temp_a0_42);
          var_v0_8 = *(D_801C7083 + temp_a0_42);
          {
            cursorY = var_v0_8;
            return 0U;
          }
        }
        goto block_448;
      }
      temp_a0_43 = inline_fn2(temp_s3, 0xFF) * 5;
      if ((*(trackPoints + temp_a0_43)) == 1)
      {
        if (((s8) var_a2_2) != 0x2C)
        {
          cursorX = *(D_801C7082 + temp_a0_43);
          var_v0_8 = *(D_801C7083 + temp_a0_43);
          {
            cursorY = var_v0_8;
            return 0U;
          }
        }
        goto block_448;
      }
      temp_a0_44 = inline_fn2(temp_s3, 0xFF) * 5;
      if ((*(trackPoints + temp_a0_44)) == 2)
      {
        if (((s8) var_a2_2) != 0x2B)
        {
          cursorX = *(D_801C7082 + temp_a0_44);
          var_v0_8 = *(D_801C7083 + temp_a0_44);
          {
            cursorY = var_v0_8;
            return 0U;
          }
        }
        goto block_448;
      }
      temp_a0_45 = inline_fn2(temp_s3, 0xFF) * 5;
      if (((*(trackPoints + temp_a0_45)) == 3) && (((s8) var_a2_2) != 0x2D))
      {
        cursorX = *(D_801C7082 + temp_a0_45);
        var_v0_8 = *(D_801C7083 + temp_a0_45);
        cursorY = var_v0_8;
        return 0U;
      }
      block_448:
      if (spC87 == 0)
      {
        temp_a0_46 = (inline_fn2(var_s4, 0xFF) * 5) + sp10;
        temp_v0_57 = inline_fn2(temp_s3, 0xFF) * 5;
        *((u8 *) (((s8 *) temp_a0_46) + 0x880)) = (u8) (*(trackPoints + temp_v0_57));
        *((u8 *) (((s8 *) temp_a0_46) + 0x881)) = (u8) (*(glyphLine + temp_v0_57));
        *((u8 *) (((s8 *) temp_a0_46) + 0x882)) = (u8) (*(D_801C7082 + temp_v0_57));
        *((u8 *) (((s8 *) temp_a0_46) + 0x883)) = (u8) (*(D_801C7083 + temp_v0_57));
        *((u8 *) (((s8 *) temp_a0_46) + 0x884)) = (u8) (*(glyphCode + temp_v0_57));
        var_a1_29 = 0;
        var_v0_50 = inline_fn2(0, 0xFF);
        do
        {
          temp_v0_58 = var_v0_50 * 2;
          *((s32 *) (temp_v0_58 + ((sp + ((var_s4 & 0xFF) * 8)) + 0x250))) = *((s32 *) (temp_v0_58 + (((temp_s3 & 0xFF) * 8) + D_801C7470)));
          var_a1_29 += 1;
          var_v0_50 = var_a1_29 & 0xFF;
        }
        while (((u32) (var_a1_29 & 0xFF)) < 4U);
        temp_v0_59 = sp890 + ((var_s4 & 0xFF) * 5);
        *(sp10 + (((*((s8 *) (((s8 *) temp_v0_59) + 3))) * 0x18) + (*((s8 *) (((s8 *) temp_v0_59) + 2))))) = var_s4;
        var_s4 += 1;
      }

      var_s1_4 = 0;
      do
      {
        var_a1_30 = 0;
        var_v0_51 = 0 & 0xFF;
        loop_454:
        temp_a3 = var_s1_4 + (var_v0_51 * 0x18);

        temp_a0_47 = temp_a3 & 0xFFFF;
        temp_a2 = (temp_a0_47 * 2) + D_801C6BE0;
        temp_v1_31 = *temp_a2;
        if (temp_v1_31 != 0xFFFF)
        {
          var_v0_52 = temp_a3 & 0xFFFF;
          if ((*(sp10 + temp_a0_47)) == 0xFF)
          {
            *(D_8011F2FD + (temp_v1_31 * 0x64)) = 2;
            *temp_a2 = 0xFFFF;
            D_801C7AB6 -= 1;
            var_a2_3 = 0;
            temp_t0 = temp_a3 & 0xFFFF;
            do
            {
              temp_v1_32 = inline_fn2(var_a2_3, 0xFF) * 2;
              temp_a0_48 = *((u16 *) (temp_v1_32 + (((*(D_801C7AD8 + temp_t0)) * 8) + D_801C7470)));
              if (temp_a0_48 != 0xFFFF)
              {
                *(D_8011F2FD + (temp_a0_48 * 0x64)) = 2;
                *((s32 *) (temp_v1_32 + (((*(D_801C7AD8 + temp_t0)) * 8) + D_801C7470))) = 0xFFFF;
                D_801C7AB6 -= 1;
              }
              var_a2_3 += 1;
            }
            while (((u32) (var_a2_3 & 0xFF)) < 4U);
            goto block_460;
          }
        }
        else
        {
          block_460:
          var_v0_52 = inline_fn2(temp_a3, 0xFFFF);

        }
        *(D_801C7AD8 + var_v0_52) = 0xFF;
        var_a1_30 += 1;
        var_v0_51 = inline_fn2(var_a1_30, 0xFF);
        if (((u32) inline_fn2(var_a1_30, 0xFF)) < 0x18U)
        {
          goto loop_454;
        }
        var_s1_4 += 1;
      }
      while (((u32) inline_fn2(var_s1_4, 0xFFFF)) < 0x18U);
      var_s1_5 = 0;
      if (var_s4 & 0xFF)
      {
        var_v0_53 = 0 & 0xFFFF;
        do
        {
          temp_v1_33 = var_v0_53 * 5;
          temp_a0_49 = temp_v1_33 + trackPoints;
          temp_v1_34 = sp890 + temp_v1_33;
          *((u8 *) (((s8 *) temp_a0_49) + 0)) = (u8) (*((u8 *) (((s8 *) temp_v1_34) + 0)));
          *((u8 *) (((s8 *) temp_a0_49) + 1)) = (u8) (*((u8 *) (((s8 *) temp_v1_34) + 1)));
          *((u8 *) (((s8 *) temp_a0_49) + 2)) = (u8) (*((u8 *) (((s8 *) temp_v1_34) + 2)));
          *((u8 *) (((s8 *) temp_a0_49) + 3)) = (u8) (*((u8 *) (((s8 *) temp_v1_34) + 3)));
          *((u8 *) (((s8 *) temp_a0_49) + 4)) = (u8) (*((u8 *) (((s8 *) temp_v1_34) + 4)));
          var_a1_31 = 0;
          temp_v0_60 = (var_s1_5 & 0xFFFF) * 8;
          var_v0_54 = inline_fn2(0, 0xFF);
          loop_466:
          temp_v0_61 = var_v0_54 * 2;

          *((s32 *) (temp_v0_61 + (temp_v0_60 + D_801C7470))) = *((s32 *) (temp_v0_61 + ((temp_v0_60 + sp10) + 0x240)));
          var_a1_31 += 1;
          var_v0_54 = var_a1_31 & 0xFF;
          if (((u32) (var_a1_31 & 0xFF)) < 4U)
          {
            goto loop_466;
          }
          temp_v1_35 = (var_s1_5 & 0xFFFF) * 5;
          *(D_801C7AD8 + ((((s8) (*(D_801C7082 + temp_v1_35))) + ((*(D_801C7083 + temp_v1_35)) * 0x18)) & 0xFFFF)) = var_s1_5;
          var_s1_5 += 1;
          var_v0_53 = inline_fn2(var_s1_5, 0xFFFF);
        }
        while (((u32) (var_s1_5 & 0xFFFF)) < ((u32) inline_fn2(var_s4, 0xFF)));
      }
      temp_v0_62 = var_s1_5 & 0xFFFF;
      var_v1_4 = temp_v0_62;
      var_v0_55 = var_v1_4 * 4;
      if (temp_v0_62 < 0xC8U)
      {
        do
        {
          temp_v0_63 = (var_v0_55 + var_v1_4) + trackPoints;
          *((s8 *) (((s8 *) temp_v0_63) + 0)) = 4;
          *((s8 *) (((s8 *) temp_v0_63) + 1)) = 0;
          *((s8 *) (((s8 *) temp_v0_63) + 2)) = -1;
          *((s8 *) (((s8 *) temp_v0_63) + 3)) = -1;
          *((s8 *) (((s8 *) temp_v0_63) + 4)) = -1;
          var_a1_32 = 0;
          var_v0_56 = 0 & 0xFF;
          loop_471:
          *((s32 *) ((var_v0_56 * 2) + ((inline_fn2(var_s1_5, 0xFFFF) * 8) + D_801C7470))) = 0xFFFF;

          var_a1_32 += 1;
          var_v0_56 = var_a1_32 & 0xFF;
          if (((u32) inline_fn2(var_a1_32, 0xFF)) < 4U)
          {
            goto loop_471;
          }
          var_s1_5 += 1;
          var_v1_4 = inline_fn2(var_s1_5, 0xFFFF);
          var_v0_55 = var_v1_4 * 4;
        }
        while (var_v1_4 < 0xC8U);
      }
      *((u8 *) (((s8 *) trackInfo) + 2)) = var_s4;
      return *((u8 *) (((s8 *) trackInfo) + 2));
    }
  }
}


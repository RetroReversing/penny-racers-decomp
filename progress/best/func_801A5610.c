extern signed char blockPos;
extern signed char D_801C6BB1;
extern signed char finishPos;
extern signed char D_801C7063;
s32 func_801A41D4();
s32 func_801A4318();
s32 tryBoardMove();
s32 tryBoardMoveAlt();
s32 func_801A4C04();
s32 func_801A4D4C();
s32 tryReplaceGlyph();
s32 tryReplaceGlyphAlt();
s32 func_801BB1F0();
s32 func_801BFA1C();
s32 func_801C34CC();
extern char D_8011F2FD[];
extern char D_8011F30C[];
extern char D_801C5EA8[];
extern char glyphTableA[];
extern char D_801C5EB8[];
extern char D_801C5EC0[];
extern char glyphTableB[];
extern char glyphTableC[];
extern u16 D_801C6BB4;
extern u16 D_801C6BB6;
extern u8 D_801C6BB8;
extern char D_801C6BE0[];
extern u16 D_801C7066[];
extern u16 D_801C7078;
extern u8 D_801C707A;
extern char glyphLine[];
extern char D_801C7082[];
extern char D_801C7083[];
extern unsigned char glyphCode[];
extern u16 D_801C746A;
extern s8 D_801C746C;
extern char D_801C7470[];
extern void * volatile trackInfo;
extern u8 hudGlyph;
extern s8 D_801C7AB5;
extern u8 D_801C7AB6;
extern s8 D_801C7AB7;
extern u8 D_801C7AB9;
extern char D_801C7AD8[];
extern char D_801C7D34[];
extern u8 D_801CA130;
extern u8 D_801CA13D;
extern char D_8031445C[];
s32 func_801A5610(void)
{
    char *__base_D_8011F30C;
  char *__base_D_8011F2FD;
  f32 var_fv0;
  f32 var_fv0_2;
  s32 temp_a0;
  s32 temp_a0_100;
  unsigned char temp_a0_101;
  s32 temp_a0_104;
  s32 temp_a0_105;
  s32 temp_a0_107;
  s32 temp_a0_109;
  s32 temp_a0_10;
  s32 temp_a0_111;
  s32 temp_a0_113;
  s32 temp_a0_115;
  s32 temp_a0_117;
  s32 temp_a0_119;
  s32 temp_a0_11;
  s32 temp_a0_121;
  s32 temp_a0_12;
  s32 temp_a0_13;
  s32 temp_a0_14;
  s32 temp_a0_15;
  s32 temp_a0_16;
  s32 temp_a0_17;
  s32 temp_a0_18;
  s32 temp_a0_19;
  s32 temp_a0_20;
  s32 temp_a0_21;
  s32 temp_a0_22;
  s32 temp_a0_23;
  s32 temp_a0_24;
  s32 temp_a0_25;
  s32 temp_a0_26;
  s32 temp_a0_27;
  s32 temp_a0_28;
  s32 temp_a0_29;
  s32 temp_a0_2;
  s32 temp_a0_30;
  s32 temp_a0_31;
  s32 temp_a0_32;
  s32 temp_a0_33;
  s32 temp_a0_34;
  s32 temp_a0_35;
  s32 temp_a0_36;
  s32 temp_a0_37;
  s32 temp_a0_38;
  s32 temp_a0_39;
  s32 temp_a0_3;
  s32 temp_a0_40;
  s32 temp_a0_41;
  s32 temp_a0_42;
  s32 temp_a0_43;
  s32 temp_a0_44;
  s32 temp_a0_45;
  s32 temp_a0_46;
  s32 temp_a0_47;
  s32 temp_a0_48;
  s32 temp_a0_49;
  s32 temp_a0_4;
  s32 temp_a0_50;
  s32 temp_a0_51;
  s32 temp_a0_52;
  s32 temp_a0_53;
  s32 temp_a0_54;
  s32 temp_a0_55;
  s32 temp_a0_56;
  s32 temp_a0_57;
  s32 temp_a0_58;
  s32 temp_a0_59;
  s32 temp_a0_5;
  s32 temp_a0_60;
  s32 temp_a0_61;
  s32 temp_a0_62;
  s32 temp_a0_63;
  s32 temp_a0_64;
  s32 temp_a0_65;
  s32 temp_a0_66;
  s32 temp_a0_67;
  s32 temp_a0_68;
  s32 temp_a0_69;
  s32 temp_a0_6;
  s32 temp_a0_70;
  s32 temp_a0_71;
  s32 temp_a0_72;
  s32 temp_a0_73;
  s32 temp_a0_74;
  s32 temp_a0_75;
  s32 temp_a0_76;
  s32 temp_a0_77;
  s32 temp_a0_78;
  s32 temp_a0_79;
  s32 temp_a0_7;
  s32 temp_a0_80;
  s32 temp_a0_81;
  s32 temp_a0_82;
  s32 temp_a0_83;
  s32 temp_a0_84;
  s32 temp_a0_85;
  s32 temp_a0_86;
  s32 temp_a0_87;
  s32 temp_a0_88;
  s32 temp_a0_89;
  s32 temp_a0_8;
  s32 temp_a0_90;
  s32 temp_a0_91;
  s32 temp_a0_92;
  s32 temp_a0_93;
  s32 temp_a0_97;
  s32 temp_a0_9;
  s32 temp_a1;
  s32 temp_a1_10;
  s32 temp_a1_11;
  s32 temp_a1_12;
  s32 temp_a1_2;
  s32 temp_a1_3;
  s32 temp_a1_4;
  volatile unsigned int temp_a1_5;
  s32 temp_a1_6;
  s32 temp_a1_7;
  s32 temp_a1_8;
  s32 temp_a1_9;
  s32 temp_a2;
  s32 temp_s1;
  s32 temp_s3;
  s32 temp_v1;
  s32 temp_v1_10;
  s32 temp_v1_11;
  s32 temp_v1_12;
  s32 temp_v1_13;
  s32 temp_v1_14;
  s32 temp_v1_15;
  s32 temp_v1_16;
  s32 temp_v1_17;
  s32 temp_v1_18;
  s32 temp_v1_19;
  s32 temp_v1_20;
  s32 temp_v1_21;
  s32 temp_v1_22;
  s32 temp_v1_23;
  s32 temp_v1_24;
  s32 temp_v1_25;
  s32 temp_v1_26;
  s32 temp_v1_27;
  s32 temp_v1_28;
  s32 temp_v1_29;
  s32 temp_v1_2;
  s32 temp_v1_30;
  s32 temp_v1_31;
  s32 temp_v1_32;
  s32 temp_v1_33;
  s32 temp_v1_34;
  s32 temp_v1_35;
  s32 temp_v1_36;
  s32 temp_v1_37;
  s32 temp_v1_38;
  s32 temp_v1_39;
  s32 temp_v1_3;
  s32 temp_v1_40;
  s32 temp_v1_41;
  s32 temp_v1_42;
  s32 temp_v1_43;
  s32 temp_v1_44;
  s32 temp_v1_45;
  s32 temp_v1_46;
  s32 temp_v1_47;
  s32 temp_v1_48;
  s32 temp_v1_49;
  s32 temp_v1_4;
  s32 temp_v1_50;
  s32 temp_v1_51;
  s32 temp_v1_52;
  s32 temp_v1_53;
  s32 temp_v1_54;
  s32 temp_v1_55;
  s32 temp_v1_56;
  s32 temp_v1_57;
  s32 temp_v1_58;
  s32 temp_v1_59;
  s32 temp_v1_5;
  s32 temp_v1_60;
  s32 temp_v1_61;
  s32 temp_v1_62;
  s32 temp_v1_63;
  s32 temp_v1_6;
  s32 temp_v1_76;
  s32 temp_v1_77;
  s32 temp_v1_78;
  s32 temp_v1_79;
  s32 temp_v1_7;
  s32 temp_v1_80;
  s32 temp_v1_81;
  s32 temp_v1_82;
  s32 temp_v1_83;
  s32 temp_v1_8;
  s32 temp_v1_9;
  s32 var_a0_3;
  s32 var_a0_5;
  s32 var_a0_6;
  s32 var_a0_7;
  s32 var_a1_10;
  s32 var_a1_11;
  s32 var_a1_12;
  s32 var_a1_13;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_a1_5;
  s32 var_a1_6;
  s32 var_a1_7;
  s32 var_a1_8;
  s32 var_a1_9;
  s32 var_s0;
  s32 var_s4;
  s32 var_s5;
  s32 var_s6;
  s32 var_s7;
  s32 var_v0_10;
  s32 var_v0_11;
  s32 var_v0_12;
  s32 var_v0_13;
  s32 var_v0_14;
  s32 var_v0_15;
  s32 var_v0_16;
  s32 var_v0_17;
  s32 var_v0_18;
  s32 var_v0_19;
  s32 var_v0_20;
  s32 var_v0_21;
  s32 var_v0_22;
  s32 var_v0_23;
  s32 var_v0_24;
  s32 var_v0_25;
  s32 var_v0_27;
  s32 var_v0_28;
  s32 var_v0_29;
  s32 var_v0_2;
  s32 var_v0_30;
  s32 var_v0_31;
  s32 var_v0_32;
  s32 var_v0_34;
  s32 var_v0_35;
  s32 var_v0_36;
  s32 var_v0_38;
  s32 var_v0_39;
  s32 var_v0_3;
  s32 var_v0_41;
  s32 var_v0_42;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_7;
  s32 var_v0_8;
  s32 var_v0_9;
  s32 var_v1_15;
  s32 var_v1_16;
  s32 var_v0_37;
  s32 var_v0_40;
  u16 *temp_a0_102;
  u16 *temp_a0_103;
  u16 *temp_a0_106;
  u16 *temp_a0_96;
  u16 *temp_a0_98;
  u16 *temp_a0_99;
  s32 temp_a0_108;
  s32 temp_a0_110;
  s32 temp_a0_112;
  s32 temp_a0_114;
  s32 temp_a0_116;
  s32 temp_a0_118;
  s32 temp_a0_120;
  s32 temp_a0_122;
  s32 temp_v1_65;
  s32 temp_v1_67;
  s32 temp_v1_69;
  s32 temp_v1_71;
  s32 temp_v1_73;
  s32 temp_v1_75;
  u32 var_v0_26;
  u32 var_v0_6;
  s32 temp_a3;
  s32 temp_s4;
  s32 temp_s4_copy;
  s32 temp_s4_2;
  s32 temp_s4_2_copy;
  s32 temp_s5;
  s32 temp_s5_2;
  s32 temp_s5_2_copy;
  s32 temp_v1_64;
  s32 temp_v1_66;
  s32 temp_v1_68;
  s32 temp_v1_70;
  s32 temp_v1_72;
  s32 temp_v1_74;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a0_8;
  s32 var_a1;
  s32 var_a2;
  s32 var_s2;
  s32 var_v0_33;
  s32 var_v1;
  s32 var_v1_10;
  s32 var_v1_11;
  s32 var_v1_12;
  s32 var_v1_13;
  s32 var_v1_14;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_v1_4;
  s32 var_v1_5;
  s32 var_v1_6;
  s32 var_v1_7;
  s32 var_v1_8;
  s32 var_v1_9;
  void *temp_a3_2;
  void *temp_a3_3;
  void *var_a3;
  void *var_a3_2;
    char *__base_D_801C5EC0;

    __base_D_801C5EC0 = D_801C5EC0;
  var_s0 = 0;
  var_s6 = 0;
  var_s7 = 0;
  var_s4 = 0;
  var_s5 = 0;
  do
  {
    temp_s1 = func_801C34CC(D_801C6BB8);
  }
  while (0);
  do
  {
    temp_s3 = func_801C34CC(D_801C707A);
  }
  while (0);
  if ((*(u8 *)trackInfo) == 3)
  {
    var_a2 = *(glyphCode + (D_801CA130 * 5));
    var_a1 = *(glyphCode + (D_801C6BB8 * 5));
    var_s2 = *(glyphCode + (D_801C707A * 5));
  }
  else
  {
    var_a2 = (*(glyphCode + (D_801CA130 * 5))) - 0x2E;
    var_a1 = (*(glyphCode + (D_801C6BB8 * 5))) - 0x2E;
    var_s2 = (*(glyphCode + (D_801C707A * 5))) - 0x2E;
  }
  if ((*(glyphLine + (D_801CA130 * 5))) == 0)
  {
    if (D_801C7AB5 > 0)
    {
      if (((u32) (var_a2 & 0xFF)) < 5U)
      {
        if (func_801A41D4(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = func_801A4318(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 5) & 0xFF)) < 5U)
      {
        var_v0_3 = func_801A4C04(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF;
        goto block_11;
      }
      if (((u32) ((var_a2 - 0xA) & 0xFF)) < 3U)
      {
        var_v0_3 = func_801A41D4(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF;
        goto block_11;
      }
      if (((u32) ((var_a2 - 0xD) & 0xFF)) < 3U)
      {
        var_v0_3 = func_801A4318(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF;
        block_11:
        if (var_v0_3 != 0)
        {
          var_s0 = 1;
        }

        goto block_88;
      }
      if (((u32) ((var_a2 - 0x10) & 0xFF)) < 3U)
      {
        if (func_801A41D4(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = func_801A4C04(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0x13) & 0xFF)) < 3U)
      {
        if (func_801A4318(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = func_801A4C04(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0x16) & 0xFF)) < 5U)
      {
        if (((u32) (var_a1 & 0xFF)) < 5U)
        {
          if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0 = D_801C6BB8 * 5;
            if ((*(glyphLine + temp_a0)) == 0x3C)
            {
              *(glyphCode + temp_a0) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
              goto block_43;
            }
          }
        }
        else
          if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
        {
          if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_2 = D_801C6BB8 * 5;
            if ((*(glyphLine + temp_a0_2)) == 0x3C)
            {
              *(glyphLine + temp_a0_2) = 0x78;
              var_v0_4 = D_801C6BB8 * 5;
              var_v1 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
              goto block_42;
            }
          }
        }
        else
          if (((((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5)))))
        {
          if (D_801C7AB7 == D_801C7AB9)
          {
            var_s5 = 1;
          }
          if (D_801C746C == D_801C7AB9)
          {
            var_s4 = 1;
          }
          var_s6 = func_801A41D4(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2) & 0xFF);
          *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
          var_v0_4 = D_801C6BB8 * 5;
          var_v1 = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
          block_42:
          *(glyphCode + var_v0_4) = var_v1;

          block_43:
          var_s0 = 1;

          if ((*(u8 *)trackInfo) == 4)
          {
            temp_v1 = D_801C6BB8 * 5;
            *(glyphCode + temp_v1) = (*(glyphCode + temp_v1)) + 0x2E;
          }
        }
        var_v0_2 = func_801A4318(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
      {
        if (func_801A41D4(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF)
        {
          var_s0 = 1;
        }
        if (((u32) (var_s2 & 0xFF)) < 5U)
        {
          if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_3 = D_801C707A * 5;
            if ((*(glyphLine + temp_a0_3)) == 0x3C)
            {
              *(glyphCode + temp_a0_3) = *(D_801C5EB8 + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_2 = D_801C707A * 5;
                *(glyphCode + temp_v1_2) = (*(glyphCode + temp_v1_2)) + 0x2E;
              }
            }
          }
        }
        else
          if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
        {
          if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = func_801A4318(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0x3C;
            *(glyphCode + (D_801C707A * 5)) = *(D_801C5EB8 + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_3 = D_801C707A * 5;
              *(glyphCode + temp_v1_3) = (*(glyphCode + temp_v1_3)) + 0x2E;
            }
          }
        }
        else
          if ((((u32) ((var_s2 - 0x1B) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
        {
          temp_a0_4 = D_801C707A * 5;
          if ((*(glyphLine + temp_a0_4)) == 0x3C)
          {
            *(glyphLine + temp_a0_4) = 0x78;
            *(glyphCode + (D_801C707A * 5)) = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_4 = D_801C707A * 5;
              *(glyphCode + temp_v1_4) = (*(glyphCode + temp_v1_4)) + 0x2E;
            }
          }
        }
      }
      else
      {
        if (((u32) ((var_a2 - 0x20) & 0xFF)) < 5U)
        {
          if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_5 = D_801C6BB8 * 5;
              if ((*(glyphLine + temp_a0_5)) == 0x3C)
              {
                *(glyphCode + temp_a0_5) = *(glyphTableC + (temp_s1 & 0xFF));
                goto block_86;
              }
            }
          }
          else
            if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_6 = D_801C6BB8 * 5;
              if ((*(glyphLine + temp_a0_6)) == 0x3C)
              {
                *(glyphLine + temp_a0_6) = 0x78;
                var_v0_5 = D_801C6BB8 * 5;
                var_v1_2 = *(glyphTableA + (temp_s1 & 0xFF));
                goto block_85;
              }
            }
          }
          else
            if (((((u32) ((var_a1 - 0x25) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5)))))
          {
            if (D_801C7AB7 == D_801C7AB9)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801C7AB9)
            {
              var_s4 = 1;
            }
            var_s6 = func_801A4C04(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2) & 0xFF);
            *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
            var_v0_5 = D_801C6BB8 * 5;
            var_v1_2 = *(glyphTableC + (temp_s1 & 0xFF));
            block_85:
            *(glyphCode + var_v0_5) = var_v1_2;

            block_86:
            var_s0 = 1;

            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_5 = D_801C6BB8 * 5;
              *(glyphCode + temp_v1_5) = (*(glyphCode + temp_v1_5)) + 0x2E;
            }
          }
          block_88:
          var_v0_2 = func_801A4D4C(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;

          goto block_1016;
        }
        if (((u32) ((var_a2 - 0x25) & 0xFF)) < 5U)
        {
          if (func_801A4C04(D_801CA130, D_801C6BB8, temp_s1 & 0xFF) & 0xFF)
          {
            var_s0 = 1;
          }
          if (((u32) ((var_s2 - 5) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_7 = D_801C707A * 5;
              if ((*(glyphLine + temp_a0_7)) == 0x3C)
              {
                *(glyphCode + temp_a0_7) = *(glyphTableB + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_6 = D_801C707A * 5;
                  *(glyphCode + temp_v1_6) = (*(glyphCode + temp_v1_6)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              do
              {
                var_s7 = func_801A4D4C(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              }
              while (0);
              *(glyphLine + (D_801C707A * 5)) = 0x3C;
              *(glyphCode + (D_801C707A * 5)) = *(glyphTableB + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_7 = D_801C707A * 5;
                *(glyphCode + temp_v1_7) = (*(glyphCode + temp_v1_7)) + 0x2E;
              }
            }
          }
          else
            if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
          {
            temp_a0_8 = D_801C707A * 5;
            if ((*(glyphLine + temp_a0_8)) == 0x3C)
            {
              *(glyphLine + temp_a0_8) = 0x78;
              *(glyphCode + (D_801C707A * 5)) = *(glyphTableA + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_8 = D_801C707A * 5;
                *(glyphCode + temp_v1_8) = (*(glyphCode + temp_v1_8)) + 0x2E;
              }
            }
          }
        }
        else
        {
          switch ((s8) var_a2)
          {
            func_801A4D4C(D_801CA130, D_801C707A, temp_s3 & 0xFF);
            var_s0 = 2;
            break;
            func_801A4C04(D_801CA130, D_801C6BB8, temp_s1 & 0xFF);
            var_s0 = 1;
            break;
            func_801A4318(D_801CA130, D_801C707A, temp_s3 & 0xFF);
            var_s0 = 2;
            break;
            func_801A41D4(D_801CA130, D_801C6BB8, temp_s1 & 0xFF);
            var_s0 = 1;
            break;
          }

        }
      }
      goto block_1022;
    }
    if (D_801C7AB5 < 0)
    {
      if (((u32) ((var_a2 - 0x16) & 0xFF)) < 5U)
      {
        if (((u32) (var_a1 & 0xFF)) < 5U)
        {
          if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_9 = D_801C6BB8 * 5;
            if ((*(glyphLine + temp_a0_9)) == 0x3C)
            {
              *(glyphLine + temp_a0_9) = 0;
              *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
              goto block_137;
            }
          }
        }
        else
          if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
        {
          if ((D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C6BB8 * 5))) == 0x3C))
          {
            if (D_801C7AB7 == D_801C7AB9)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801C7AB9)
            {
              var_s4 = 1;
            }
            var_s6 = tryBoardMove(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2) & 0xFF);
            *(glyphLine + (D_801C6BB8 * 5)) = 0;
            *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
            goto block_137;
          }
        }
        else
          if ((((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))))
        {
          temp_a0_10 = D_801C6BB8 * 5;
          if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_10)))
          {
            *(glyphCode + temp_a0_10) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
            block_137:
            var_s0 = 1;

            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_9 = D_801C6BB8 * 5;
              *(glyphCode + temp_v1_9) = (*(glyphCode + temp_v1_9)) + 0x2E;
            }
          }
        }
        var_a0 = *(u16 *)(D_801C5EA8 + (func_801C34CC(D_801CA130) & 0xFF));
        goto block_201;
      }
      if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
      {
        if (((u32) (var_s2 & 0xFF)) < 5U)
        {
          if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_11 = D_801C707A * 5;
            if ((*(glyphLine + temp_a0_11)) == 0x3C)
            {
              *(glyphLine + temp_a0_11) = 0;
              goto block_157;
            }
          }
        }
        else
          if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
        {
          if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_12 = D_801C707A * 5;
            if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_12)))
            {
              *(glyphCode + temp_a0_12) = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
              goto block_158;
            }
          }
        }
        else
          if (((((u32) ((var_s2 - 0x1B) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C707A * 5))) == 0x3C))
        {
          if (D_801C7AB7 == D_801CA13D)
          {
            var_s5 = 1;
          }
          if (D_801C746C == D_801CA13D)
          {
            var_s4 = 1;
          }
          loop_goto_1:
          {
            var_s7 = tryBoardMoveAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2) & 0xFF);
          }
          if (0)
          {
              goto loop_goto_1;
          }
          *(glyphLine + (D_801C707A * 5)) = 0;
          block_157:
          *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));

          block_158:
          var_s0 = 2;

          if ((*(u8 *)trackInfo) == 4)
          {
            temp_v1_10 = D_801C707A * 5;
            *(glyphCode + temp_v1_10) = (*(glyphCode + temp_v1_10)) + 0x2E;
          }
        }
        var_a0 = *(u16 *)(D_801C5EA8 + (func_801C34CC(D_801CA130) & 0xFF));
        goto block_201;
      }
      if (((u32) ((var_a2 - 0x20) & 0xFF)) < 5U)
      {
        if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
        {
          if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_13 = D_801C6BB8 * 5;
            if ((*(glyphLine + temp_a0_13)) == 0x3C)
            {
              *(glyphLine + temp_a0_13) = 0;
              *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
              goto block_178;
            }
          }
        }
        else
          if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
        {
          if ((D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C6BB8 * 5))) == 0x3C))
          {
            if (D_801C7AB7 == D_801C7AB9)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801C7AB9)
            {
              var_s4 = 1;
            }
            var_s6 = tryReplaceGlyph(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2) & 0xFF);
            *(glyphLine + (D_801C6BB8 * 5)) = 0;
            *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
            goto block_178;
          }
        }
        else
          if ((((u32) ((var_a1 - 0x25) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))))
        {
          temp_a0_14 = D_801C6BB8 * 5;
          if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_14)))
          {
            *(glyphCode + temp_a0_14) = *(glyphTableA + (temp_s1 & 0xFF));
            block_178:
            var_s0 = 1;

            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_11 = D_801C6BB8 * 5;
              *(glyphCode + temp_v1_11) = (*(glyphCode + temp_v1_11)) + 0x2E;
            }
          }
        }
        goto block_200;
      }
      if (((u32) ((var_a2 - 0x25) & 0xFF)) < 5U)
      {
        if (((u32) ((var_s2 - 5) & 0xFF)) < 5U)
        {
          if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_15 = D_801C707A * 5;
            if ((*(glyphLine + temp_a0_15)) == 0x3C)
            {
              *(glyphLine + temp_a0_15) = 0;
              goto block_197;
            }
          }
        }
        else
          if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
        {
          if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
          {
            temp_a0_16 = D_801C707A * 5;
            if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_16)))
            {
              *(glyphCode + temp_a0_16) = *(glyphTableA + (temp_s3 & 0xFF));
              goto block_198;
            }
          }
        }
        else
          if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C707A * 5))) == 0x3C))
        {
          if (D_801C7AB7 == D_801CA13D)
          {
            var_s5 = 1;
          }
          if (D_801C746C == D_801CA13D)
          {
            var_s4 = 1;
          }
          var_s7 = tryReplaceGlyphAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2) & 0xFF);
          *(glyphLine + (D_801C707A * 5)) = 0;
          block_197:
          *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));

          block_198:
          var_s0 = 2;

          if ((*(u8 *)trackInfo) == 4)
          {
            temp_v1_12 = D_801C707A * 5;
            *(glyphCode + temp_v1_12) = (*(glyphCode + temp_v1_12)) + 0x2E;
          }
        }
        block_200:
        var_a0 = *(glyphTableA + (func_801C34CC(D_801CA130) & 0xFF));

        block_201:
        hudGlyph = var_a0;

      }
    }
  }
  else
  {
    temp_a3 = *(glyphLine + (D_801CA130 * 5));
    if (temp_a3 == 0x3C)
    {
      if (D_801C7AB5 > 0)
      {
        if (((u32) (var_a2 & 0xFF)) < 5U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_17 = D_801C6BB8 * 5;
              var_v0_6 = var_s2 & 0xFF;
              if ((*(glyphLine + temp_a0_17)) == temp_a3)
              {
                *(glyphCode + temp_a0_17) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                goto block_223;
              }
            }
            else
            {
              goto block_225;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_18 = D_801C6BB8 * 5;
              var_v0_6 = var_s2 & 0xFF;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_18)))
              {
                *(glyphLine + temp_a0_18) = 0x78;
                var_v0_7 = D_801C6BB8 * 5;
                var_v1_3 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                goto block_222;
              }
            }
            else
            {
              goto block_225;
            }
          }
          else
          {
            var_v0_6 = var_s2 & 0xFF;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                var_v0_6 = var_s2 & 0xFF;
                if ((*(glyphLine + (D_801C6BB8 * 5))) == 0)
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = func_801A41D4(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                  var_v0_7 = D_801C6BB8 * 5;
                  var_v1_3 = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                  block_222:
                  *(glyphCode + var_v0_7) = var_v1_3;

                  block_223:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_13 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_13) = (*(glyphCode + temp_v1_13)) + 0x2E;
                  }
                  goto block_225;
                }
              }
              else
              {
                block_225:
                var_v0_6 = var_s2 & 0xFF;

              }
            }
          }
          if (var_v0_6 < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_19 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_19)))
              {
                *(glyphCode + temp_a0_19) = *(D_801C5EB8 + (temp_s3 & 0xFF));
                goto block_560;
              }
            }
          }
          else
          {
            var_v0_8 = var_s2 - 0x1B;
            if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
            {
              if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
              {
                if (D_801C7AB7 == D_801CA13D)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801CA13D)
                {
                  var_s4 = 1;
                }
                var_s7 = func_801A4318(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
                *(glyphLine + (D_801C707A * 5)) = 0x3C;
                var_v0_9 = D_801C707A * 5;
                var_v1_4 = *(D_801C5EB8 + (temp_s3 & 0xFF));
                goto block_559;
              }
            }
            else
            {
              goto block_555;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 5) & 0xFF)) < 5U)
        {
          if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_20 = D_801C6BB8 * 5;
              var_v0_10 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_20)))
              {
                *(glyphCode + temp_a0_20) = *(glyphTableC + (temp_s1 & 0xFF));
                goto block_256;
              }
            }
            else
            {
              goto block_258;
            }
          }
          else
            if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_21 = D_801C6BB8 * 5;
              var_v0_10 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_21)))
              {
                *(glyphLine + temp_a0_21) = 0x78;
                var_v0_11 = D_801C6BB8 * 5;
                var_v1_5 = *(glyphTableA + (temp_s1 & 0xFF));
                goto block_255;
              }
            }
            else
            {
              goto block_258;
            }
          }
          else
          {
            var_v0_10 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x25) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                var_v0_10 = var_s2 - 5;
                if ((*(glyphLine + (D_801C6BB8 * 5))) == 0)
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = func_801A4C04(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                  var_v0_11 = D_801C6BB8 * 5;
                  var_v1_5 = *(glyphTableC + (temp_s1 & 0xFF));
                  block_255:
                  *(glyphCode + var_v0_11) = var_v1_5;

                  block_256:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_14 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_14) = (*(glyphCode + temp_v1_14)) + 0x2E;
                  }
                  goto block_258;
                }
              }
              else
              {
                block_258:
                var_v0_10 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_10 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_22 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_22)))
              {
                *(glyphCode + temp_a0_22) = *(glyphTableB + (temp_s3 & 0xFF));
                goto block_560;
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              var_s7 = func_801A4D4C(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              *(glyphLine + (D_801C707A * 5)) = 0x3C;
              var_v0_9 = D_801C707A * 5;
              var_v1_4 = *(glyphTableB + (temp_s3 & 0xFF));
              goto block_559;
            }
          }
          else
            if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
          {
            temp_a0_23 = D_801C707A * 5;
            if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_23)))
            {
              *(glyphLine + temp_a0_23) = 0x78;
              var_v0_9 = D_801C707A * 5;
              var_v1_4 = *(glyphTableA + (temp_s3 & 0xFF));
              goto block_559;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0xA) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_24 = D_801C6BB8 * 5;
              var_v0_12 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_24)))
              {
                *(glyphCode + temp_a0_24) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                goto block_293;
              }
            }
            else
            {
              goto block_295;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_25 = D_801C6BB8 * 5;
              var_v0_12 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_25)))
              {
                *(glyphLine + temp_a0_25) = 0x78;
                var_v0_13 = D_801C6BB8 * 5;
                var_v1_6 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                goto block_292;
              }
            }
            else
            {
              goto block_295;
            }
          }
          else
          {
            var_v0_12 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                var_v0_12 = var_s2 - 5;
                if ((*(glyphLine + (D_801C6BB8 * 5))) == 0)
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = func_801A41D4(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                  var_v0_13 = D_801C6BB8 * 5;
                  var_v1_6 = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                  block_292:
                  *(glyphCode + var_v0_13) = var_v1_6;

                  block_293:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_15 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_15) = (*(glyphCode + temp_v1_15)) + 0x2E;
                  }
                  goto block_295;
                }
              }
              else
              {
                block_295:
                var_v0_12 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_12 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_26 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_26)))
              {
                *(glyphCode + temp_a0_26) = *(glyphTableB + (temp_s3 & 0xFF));
                goto block_560;
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              var_s7 = func_801A4D4C(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              *(glyphLine + (D_801C707A * 5)) = 0x3C;
              var_v0_9 = D_801C707A * 5;
              var_v1_4 = *(glyphTableB + (temp_s3 & 0xFF));
              goto block_559;
            }
          }
          else
            if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
          {
            temp_a0_27 = D_801C707A * 5;
            if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_27)))
            {
              *(glyphLine + temp_a0_27) = 0x78;
              var_v0_9 = D_801C707A * 5;
              var_v1_4 = *(glyphTableA + (temp_s3 & 0xFF));
              goto block_559;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0xD) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_28 = D_801C6BB8 * 5;
              var_v0_14 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_28)))
              {
                *(glyphCode + temp_a0_28) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_330;
              }
            }
            else
            {
              goto block_332;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              var_v0_14 = var_s2 - 5;
              if ((*(glyphLine + (D_801C6BB8 * 5))) == 0)
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = func_801A4318(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                var_v0_15 = D_801C6BB8 * 5;
                var_v1_7 = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_329;
              }
            }
            else
            {
              goto block_332;
            }
          }
          else
          {
            var_v0_14 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_29 = D_801C6BB8 * 5;
                var_v0_14 = var_s2 - 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_29)))
                {
                  *(glyphLine + temp_a0_29) = 0x78;
                  var_v0_15 = D_801C6BB8 * 5;
                  var_v1_7 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  block_329:
                  *(glyphCode + var_v0_15) = var_v1_7;

                  block_330:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_16 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_16) = (*(glyphCode + temp_v1_16)) + 0x2E;
                  }
                  goto block_332;
                }
              }
              else
              {
                block_332:
                var_v0_14 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_14 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_30 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_30)))
              {
                *(glyphCode + temp_a0_30) = *(glyphTableB + (temp_s3 & 0xFF));
                goto block_560;
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              var_s7 = func_801A4D4C(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              *(glyphLine + (D_801C707A * 5)) = 0x3C;
              var_v0_9 = D_801C707A * 5;
              var_v1_4 = *(glyphTableB + (temp_s3 & 0xFF));
              goto block_559;
            }
          }
          else
            if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
          {
            temp_a0_31 = D_801C707A * 5;
            if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_31)))
            {
              *(glyphLine + temp_a0_31) = 0x78;
              var_v0_9 = D_801C707A * 5;
              var_v1_4 = *(glyphTableA + (temp_s3 & 0xFF));
              goto block_559;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0x10) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_32 = D_801C6BB8 * 5;
              var_v0_16 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_32)))
              {
                *(glyphCode + temp_a0_32) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                goto block_367;
              }
            }
            else
            {
              goto block_369;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_33 = D_801C6BB8 * 5;
              var_v0_16 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_33)))
              {
                *(glyphLine + temp_a0_33) = 0x78;
                var_v0_17 = D_801C6BB8 * 5;
                var_v1_8 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                goto block_366;
              }
            }
            else
            {
              goto block_369;
            }
          }
          else
          {
            var_v0_16 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                var_v0_16 = var_s2 - 5;
                if ((*(glyphLine + (D_801C6BB8 * 5))) == 0)
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = func_801A41D4(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                  var_v0_17 = D_801C6BB8 * 5;
                  var_v1_8 = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                  block_366:
                  *(glyphCode + var_v0_17) = var_v1_8;

                  block_367:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_17 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_17) = (*(glyphCode + temp_v1_17)) + 0x2E;
                  }
                  goto block_369;
                }
              }
              else
              {
                block_369:
                var_v0_16 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_16 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_34 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_34)))
              {
                *(glyphCode + temp_a0_34) = *(glyphTableC + (temp_s3 & 0xFF));
                goto block_560;
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_35 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_35)))
              {
                *(glyphLine + temp_a0_35) = 0x78;
                var_v0_9 = D_801C707A * 5;
                var_v1_4 = *(glyphTableA + (temp_s3 & 0xFF));
                goto block_559;
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = func_801A4C04(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0x3C;
            var_v0_9 = D_801C707A * 5;
            var_v1_4 = *(glyphTableC + (temp_s3 & 0xFF));
            goto block_559;
          }
        }
        else
          if (((u32) ((var_a2 - 0x13) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_36 = D_801C6BB8 * 5;
              var_v0_18 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_36)))
              {
                *(glyphCode + temp_a0_36) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_404;
              }
            }
            else
            {
              goto block_406;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              var_v0_18 = var_s2 - 5;
              if ((*(glyphLine + (D_801C6BB8 * 5))) == 0)
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = func_801A4318(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                var_v0_19 = D_801C6BB8 * 5;
                var_v1_9 = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_403;
              }
            }
            else
            {
              goto block_406;
            }
          }
          else
          {
            var_v0_18 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_37 = D_801C6BB8 * 5;
                var_v0_18 = var_s2 - 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_37)))
                {
                  *(glyphLine + temp_a0_37) = 0x78;
                  var_v0_19 = D_801C6BB8 * 5;
                  var_v1_9 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  block_403:
                  *(glyphCode + var_v0_19) = var_v1_9;

                  block_404:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_18 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_18) = (*(glyphCode + temp_v1_18)) + 0x2E;
                  }
                  goto block_406;
                }
              }
              else
              {
                block_406:
                var_v0_18 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_18 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_38 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_38)))
              {
                *(glyphCode + temp_a0_38) = *(glyphTableC + (temp_s3 & 0xFF));
                goto block_560;
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_39 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_39)))
              {
                *(glyphLine + temp_a0_39) = 0x78;
                var_v0_9 = D_801C707A * 5;
                var_v1_4 = *(glyphTableA + (temp_s3 & 0xFF));
                goto block_559;
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = func_801A4C04(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0x3C;
            var_v0_9 = D_801C707A * 5;
            var_v1_4 = *(glyphTableC + (temp_s3 & 0xFF));
            goto block_559;
          }
        }
        else
        {
          if (((u32) ((var_a2 - 0x16) & 0xFF)) < 5U)
          {
            if (((u32) (var_s2 & 0xFF)) < 5U)
            {
              if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_40 = D_801C707A * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_40)))
                {
                  *(glyphCode + temp_a0_40) = *(D_801C5EB8 + (temp_s3 & 0xFF));
                  goto block_441;
                }
              }
            }
            else
              if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
            {
              if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
              {
                if (D_801C7AB7 == D_801CA13D)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801CA13D)
                {
                  var_s4 = 1;
                }
                var_s7 = func_801A4318(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C707A * 5)) = 0x3C;
                var_v0_20 = D_801C707A * 5;
                var_v1_10 = *(D_801C5EB8 + (temp_s3 & 0xFF));
                goto block_440;
              }
            }
            else
              if ((((u32) ((var_s2 - 0x1B) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
            {
              temp_a0_41 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_41)))
              {
                *(glyphLine + temp_a0_41) = 0x78;
                var_v0_20 = D_801C707A * 5;
                var_v1_10 = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
                block_440:
                *(glyphCode + var_v0_20) = var_v1_10;

                block_441:
                var_s0 = 2;

                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_19 = D_801C707A * 5;
                  *(glyphCode + temp_v1_19) = (*(glyphCode + temp_v1_19)) + 0x2E;
                }
              }
            }
            var_a0_2 = *(u16 *)(D_801C5EA8 + (func_801C34CC(D_801CA130) & 0xFF));
            goto block_506;
          }
          if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
          {
            if (((u32) (var_a1 & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_42 = D_801C6BB8 * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_42)))
                {
                  *(glyphCode + temp_a0_42) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                  goto block_462;
                }
              }
            }
            else
              if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_43 = D_801C6BB8 * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_43)))
                {
                  *(glyphLine + temp_a0_43) = 0x78;
                  var_v0_21 = D_801C6BB8 * 5;
                  var_v1_11 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  goto block_461;
                }
              }
            }
            else
              if (((((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C6BB8 * 5))) == 0))
            {
              if (D_801C7AB7 == D_801C7AB9)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801C7AB9)
              {
                var_s4 = 1;
              }
              var_s6 = func_801A41D4(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
              *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
              var_v0_21 = D_801C6BB8 * 5;
              var_v1_11 = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
              block_461:
              *(glyphCode + var_v0_21) = var_v1_11;

              block_462:
              var_s0 = 1;

              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_20 = D_801C6BB8 * 5;
                *(glyphCode + temp_v1_20) = (*(glyphCode + temp_v1_20)) + 0x2E;
              }
            }
            var_a0_2 = *(u16 *)(D_801C5EA8 + (func_801C34CC(D_801CA130) & 0xFF));
            goto block_506;
          }
          if (((u32) ((var_a2 - 0x20) & 0xFF)) < 5U)
          {
            if (((u32) ((var_s2 - 5) & 0xFF)) < 5U)
            {
              if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_44 = D_801C707A * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_44)))
                {
                  *(glyphCode + temp_a0_44) = *(glyphTableB + (temp_s3 & 0xFF));
                  goto block_483;
                }
              }
            }
            else
              if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
            {
              if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
              {
                if (D_801C7AB7 == D_801CA13D)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801CA13D)
                {
                  var_s4 = 1;
                }
                var_s7 = func_801A4D4C(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C707A * 5)) = 0x3C;
                var_v0_22 = D_801C707A * 5;
                var_v1_12 = *(glyphTableB + (temp_s3 & 0xFF));
                goto block_482;
              }
            }
            else
              if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
            {
              temp_a0_45 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_45)))
              {
                *(glyphLine + temp_a0_45) = 0x78;
                var_v0_22 = D_801C707A * 5;
                var_v1_12 = *(glyphTableA + (temp_s3 & 0xFF));
                block_482:
                *(glyphCode + var_v0_22) = var_v1_12;

                block_483:
                var_s0 = 2;

                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_21 = D_801C707A * 5;
                  *(glyphCode + temp_v1_21) = (*(glyphCode + temp_v1_21)) + 0x2E;
                }
              }
            }
            goto block_505;
          }
          if (((u32) ((var_a2 - 0x25) & 0xFF)) < 5U)
          {
            var_a0 = var_a0 + 0x2E;
            if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_46 = D_801C6BB8 * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_46)))
                {
                  *(glyphCode + temp_a0_46) = *(glyphTableC + (temp_s1 & 0xFF));
                  goto block_503;
                }
              }
            }
            else
              if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_47 = D_801C6BB8 * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_47)))
                {
                  *(glyphLine + temp_a0_47) = 0x78;
                  var_v0_23 = D_801C6BB8 * 5;
                  var_v1_13 = *(glyphTableA + (temp_s1 & 0xFF));
                  goto block_502;
                }
              }
            }
            else
              if (((((u32) ((var_a1 - 0x25) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C6BB8 * 5))) == 0))
            {
              if (D_801C7AB7 == D_801C7AB9)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801C7AB9)
              {
                var_s4 = 1;
              }
              var_s6 = func_801A4C04(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
              *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
              var_v0_23 = D_801C6BB8 * 5;
              var_v1_13 = *(glyphTableC + (temp_s1 & 0xFF));
              block_502:
              *(glyphCode + var_v0_23) = var_v1_13;

              block_503:
              var_s0 = 1;

              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_22 = D_801C6BB8 * 5;
                *(glyphCode + temp_v1_22) = (*(glyphCode + temp_v1_22)) + 0x2E;
              }
            }
            block_505:
            var_a0_2 = *(glyphTableA + (func_801C34CC(D_801CA130) & 0xFF));

            block_506:
            var_a0 = var_a0_2;

            if ((*(u8 *)trackInfo) == 4)
            {
              var_a0 = var_a0_2 + 0x2E;
            }
          }
          else
          {
            switch ((s8) var_a2)
            {
              if (((u32) ((var_s2 - 5) & 0xFF)) < 5U)
              {
                if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_48 = D_801C707A * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_48)))
                  {
                    *(glyphCode + temp_a0_48) = *(glyphTableB + (temp_s3 & 0xFF));
                    goto block_560;
                  }
                }
              }
              else
                if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
              {
                if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
                {
                  if (D_801C7AB7 == D_801CA13D)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801CA13D)
                  {
                    var_s4 = 1;
                  }
                  var_s7 = func_801A4D4C(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C707A * 5)) = 0x3C;
                  var_v0_9 = D_801C707A * 5;
                  var_v1_4 = *(glyphTableB + (temp_s3 & 0xFF));
                  goto block_559;
                }
              }
              else
                if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
              {
                temp_a0_49 = D_801C707A * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_49)))
                {
                  *(glyphLine + temp_a0_49) = 0x78;
                  var_v0_9 = D_801C707A * 5;
                  var_v1_4 = *(glyphTableA + (temp_s3 & 0xFF));
                  block_559:
                  *(glyphCode + var_v0_9) = var_v1_4;

                  block_560:
                  var_s0 |= 2;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_23 = D_801C707A * 5;
                    *(glyphCode + temp_v1_23) = (*(glyphCode + temp_v1_23)) + 0x2E;
                  }
                }
              }
              break;
              if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
              {
                if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_50 = D_801C6BB8 * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_50)))
                  {
                    *(glyphCode + temp_a0_50) = *(glyphTableC + (temp_s1 & 0xFF));
                    goto block_580;
                  }
                }
              }
              else
                if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
              {
                if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_51 = D_801C6BB8 * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_51)))
                  {
                    *(glyphLine + temp_a0_51) = 0x78;
                    var_v0_24 = D_801C6BB8 * 5;
                    var_v1_14 = *(glyphTableA + (temp_s1 & 0xFF));
                    goto block_579;
                  }
                }
              }
              else
                if (((((u32) ((var_a1 - 0x25) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C6BB8 * 5))) == 0))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = func_801A4C04(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                var_v0_24 = D_801C6BB8 * 5;
                var_v1_14 = *(glyphTableC + (temp_s1 & 0xFF));
                block_579:
                *(glyphCode + var_v0_24) = var_v1_14;

                block_580:
                var_s0 = 1;

                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_24 = D_801C6BB8 * 5;
                  *(glyphCode + temp_v1_24) = (*(glyphCode + temp_v1_24)) + 0x2E;
                }
              }
              break;
              if (((u32) (var_s2 & 0xFF)) < 5U)
              {
                if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_52 = D_801C707A * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_52)))
                  {
                    *(glyphCode + temp_a0_52) = *(D_801C5EB8 + (temp_s3 & 0xFF));
                    goto block_560;
                  }
                }
              }
              else
              {
                var_v0_8 = var_s2 - 0x1B;
                if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
                {
                  if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801C707A * 5))) == 0))
                  {
                    if (D_801C7AB7 == D_801CA13D)
                    {
                      var_s5 = 1;
                    }
                    if (D_801C746C == D_801CA13D)
                    {
                      var_s4 = 1;
                    }
                    var_s7 = func_801A4318(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                    *(glyphLine + (D_801C707A * 5)) = 0x3C;
                    var_v0_9 = D_801C707A * 5;
                    var_v1_4 = *(D_801C5EB8 + (temp_s3 & 0xFF));
                    goto block_559;
                  }
                }
                else
                {
                  block_555:
                  if ((((u32) (var_v0_8 & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
                  {
                    temp_a0_53 = D_801C707A * 5;
                    if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_53)))
                    {
                      *(glyphLine + temp_a0_53) = 0x78;
                      var_v0_9 = D_801C707A * 5;
                      var_v1_4 = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
                      goto block_559;
                    }
                  }

                }
              }
              break;
              if (((u32) (var_a1 & 0xFF)) < 5U)
              {
                if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_54 = D_801C6BB8 * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_54)))
                  {
                    *(glyphCode + temp_a0_54) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                    goto block_580;
                  }
                }
              }
              else
                if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
              {
                if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_55 = D_801C6BB8 * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_55)))
                  {
                    *(glyphLine + temp_a0_55) = 0x78;
                    var_v0_24 = D_801C6BB8 * 5;
                    var_v1_14 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                    goto block_579;
                  }
                }
              }
              else
                if (((((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801C6BB8 * 5))) == 0))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = func_801A41D4(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0x3C;
                var_v0_24 = D_801C6BB8 * 5;
                var_v1_14 = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));
                goto block_579;
              }
              break;
            }

          }
        }
        var_fv0 = 60.0f;
        var_v0_25 = (*(D_801C6BE0 + (D_801C7078 * 2))) * 0x64;
        goto block_1023;
      }
      if (D_801C7AB5 < 0)
      {
        if (((u32) (var_a2 & 0xFF)) < 5U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_56 = D_801C6BB8 * 5;
              var_v0_26 = var_s2 & 0xFF;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_56)))
              {
                *(glyphLine + temp_a0_56) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_601;
              }
            }
            else
            {
              goto block_603;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 == (*(u8 *)((char *)trackInfo + 2)))
            {
              var_v0_26 = var_s2 & 0xFF;
            }
            else
            {
              var_v0_26 = var_s2 & 0xFF;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5))))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = tryBoardMove(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_601;
              }
            }
          }
          else
          {
            var_v0_26 = var_s2 & 0xFF;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_57 = D_801C6BB8 * 5;
                var_v0_26 = var_s2 & 0xFF;
                if ((*(glyphLine + temp_a0_57)) == 0)
                {
                  *(glyphCode + temp_a0_57) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  block_601:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_25 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_25) = (*(glyphCode + temp_v1_25)) + 0x2E;
                  }
                  goto block_603;
                }
              }
              else
              {
                block_603:
                var_v0_26 = var_s2 & 0xFF;

              }
            }
          }
          if (var_v0_26 < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_58 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_58)))
              {
                *(glyphLine + temp_a0_58) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_26 = D_801C707A * 5;
                  *(glyphCode + temp_v1_26) = (*(glyphCode + temp_v1_26)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_59 = D_801C707A * 5;
              if ((*(glyphLine + temp_a0_59)) == 0)
              {
                *(glyphCode + temp_a0_59) = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_27 = D_801C707A * 5;
                  *(glyphCode + temp_v1_27) = (*(glyphCode + temp_v1_27)) + 0x2E;
                }
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x1B) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = tryBoardMoveAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0;
            *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_28 = D_801C707A * 5;
              *(glyphCode + temp_v1_28) = (*(glyphCode + temp_v1_28)) + 0x2E;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 5) & 0xFF)) < 5U)
        {
          if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_60 = D_801C6BB8 * 5;
              var_v0_27 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_60)))
              {
                *(glyphLine + temp_a0_60) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
                goto block_640;
              }
            }
            else
            {
              goto block_642;
            }
          }
          else
            if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              var_v0_27 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5))))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = tryReplaceGlyph(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
                goto block_640;
              }
            }
            else
            {
              var_v0_27 = var_s2 - 5;
            }
          }
          else
          {
            var_v0_27 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x25) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_61 = D_801C6BB8 * 5;
                var_v0_27 = var_s2 - 5;
                if ((*(glyphLine + temp_a0_61)) == 0)
                {
                  *(glyphCode + temp_a0_61) = *(glyphTableA + (temp_s1 & 0xFF));
                  block_640:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_29 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_29) = (*(glyphCode + temp_v1_29)) + 0x2E;
                  }
                  goto block_642;
                }
              }
              else
              {
                block_642:
                var_v0_27 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_27 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_62 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_62)))
              {
                *(glyphLine + temp_a0_62) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_30 = D_801C707A * 5;
                  *(glyphCode + temp_v1_30) = (*(glyphCode + temp_v1_30)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_63 = D_801C707A * 5;
              if ((*(glyphLine + temp_a0_63)) == 0)
              {
                *(glyphCode + temp_a0_63) = *(glyphTableA + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_31 = D_801C707A * 5;
                  *(glyphCode + temp_v1_31) = (*(glyphCode + temp_v1_31)) + 0x2E;
                }
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = tryReplaceGlyphAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0;
            *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_32 = D_801C707A * 5;
              *(glyphCode + temp_v1_32) = (*(glyphCode + temp_v1_32)) + 0x2E;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0xA) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_64 = D_801C6BB8 * 5;
              var_v0_28 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_64)))
              {
                *(glyphLine + temp_a0_64) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_679;
              }
            }
            else
            {
              goto block_681;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              var_v0_28 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5))))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = tryBoardMove(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_679;
              }
            }
            else
            {
              var_v0_28 = var_s2 - 5;
            }
          }
          else
          {
            var_v0_28 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_65 = D_801C6BB8 * 5;
                var_v0_28 = var_s2 - 5;
                if ((*(glyphLine + temp_a0_65)) == 0)
                {
                  *(glyphCode + temp_a0_65) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  block_679:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_33 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_33) = (*(glyphCode + temp_v1_33)) + 0x2E;
                  }
                  goto block_681;
                }
              }
              else
              {
                block_681:
                var_v0_28 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_28 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_66 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_66)))
              {
                *(glyphLine + temp_a0_66) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_34 = D_801C707A * 5;
                  *(glyphCode + temp_v1_34) = (*(glyphCode + temp_v1_34)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_67 = D_801C707A * 5;
              if ((*(glyphLine + temp_a0_67)) == 0)
              {
                *(glyphCode + temp_a0_67) = *(glyphTableA + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_35 = D_801C707A * 5;
                  *(glyphCode + temp_v1_35) = (*(glyphCode + temp_v1_35)) + 0x2E;
                }
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = tryReplaceGlyphAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0;
            *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_36 = D_801C707A * 5;
              *(glyphCode + temp_v1_36) = (*(glyphCode + temp_v1_36)) + 0x2E;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0xD) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_68 = D_801C6BB8 * 5;
              var_v0_29 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_68)))
              {
                *(glyphLine + temp_a0_68) = 0;
                goto block_718;
              }
            }
            else
            {
              goto block_721;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_69 = D_801C6BB8 * 5;
              var_v0_29 = var_s2 - 5;
              if ((*(glyphLine + temp_a0_69)) == 0)
              {
                *(glyphCode + temp_a0_69) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                goto block_719;
              }
            }
            else
            {
              goto block_721;
            }
          }
          else
          {
            var_v0_29 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              var_v0_29 = var_s2 - 5;
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                var_v0_29 = var_s2 - 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5))))
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = tryBoardMoveAlt(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0;
                  block_718:
                  *(glyphCode + (D_801C6BB8 * 5)) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));

                  block_719:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_37 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_37) = (*(glyphCode + temp_v1_37)) + 0x2E;
                  }
                  block_721:
                  var_v0_29 = var_s2 - 5;

                }
              }
            }
          }
          if (((u32) (var_v0_29 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_70 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_70)))
              {
                *(glyphLine + temp_a0_70) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_38 = D_801C707A * 5;
                  *(glyphCode + temp_v1_38) = (*(glyphCode + temp_v1_38)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_71 = D_801C707A * 5;
              if ((*(glyphLine + temp_a0_71)) == 0)
              {
                *(glyphCode + temp_a0_71) = *(glyphTableA + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_39 = D_801C707A * 5;
                  *(glyphCode + temp_v1_39) = (*(glyphCode + temp_v1_39)) + 0x2E;
                }
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = tryReplaceGlyphAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0;
            *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_40 = D_801C707A * 5;
              *(glyphCode + temp_v1_40) = (*(glyphCode + temp_v1_40)) + 0x2E;
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0x10) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_72 = D_801C6BB8 * 5;
              var_v0_30 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_72)))
              {
                *(glyphLine + temp_a0_72) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_758;
              }
            }
            else
            {
              goto block_760;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            var_v0_30 = var_s2 - 5;
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              var_v0_30 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5))))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = tryBoardMove(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_758;
              }
            }
          }
          else
          {
            var_v0_30 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_73 = D_801C6BB8 * 5;
                var_v0_30 = var_s2 - 5;
                if ((*(glyphLine + temp_a0_73)) == 0)
                {
                  *(glyphCode + temp_a0_73) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  block_758:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_41 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_41) = (*(glyphCode + temp_v1_41)) + 0x2E;
                  }
                  goto block_760;
                }
              }
              else
              {
                block_760:
                var_v0_30 = var_s2 - 5;

              }
            }
          }
          if (((u32) (var_v0_30 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_74 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_74)))
              {
                *(glyphLine + temp_a0_74) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(glyphTableB + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_42 = D_801C707A * 5;
                  *(glyphCode + temp_v1_42) = (*(glyphCode + temp_v1_42)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              var_s7 = tryReplaceGlyph(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              *(glyphLine + (D_801C707A * 5)) = 0;
              *(glyphCode + (D_801C707A * 5)) = *(glyphTableB + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_43 = D_801C707A * 5;
                *(glyphCode + temp_v1_43) = (*(glyphCode + temp_v1_43)) + 0x2E;
              }
            }
          }
          else
            if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
          {
            temp_a0_75 = D_801C707A * 5;
            if ((*(glyphLine + temp_a0_75)) == 0)
            {
              *(glyphCode + temp_a0_75) = *(glyphTableA + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_44 = D_801C707A * 5;
                *(glyphCode + temp_v1_44) = (*(glyphCode + temp_v1_44)) + 0x2E;
              }
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0x13) & 0xFF)) < 3U)
        {
          if (((u32) (var_a1 & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_76 = D_801C6BB8 * 5;
              var_v0_31 = var_s2 - 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_76)))
              {
                *(glyphLine + temp_a0_76) = 0;
                goto block_797;
              }
            }
            else
            {
              goto block_800;
            }
          }
          else
            if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_77 = D_801C6BB8 * 5;
              var_v0_31 = var_s2 - 5;
              if ((*(glyphLine + temp_a0_77)) == 0)
              {
                *(glyphCode + temp_a0_77) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                goto block_798;
              }
            }
            else
            {
              goto block_800;
            }
          }
          else
          {
            var_v0_31 = var_s2 - 5;
            if (((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U)
            {
              var_v0_31 = var_s2 - 5;
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5))))
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = tryBoardMoveAlt(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0;
                  block_797:
                  *(glyphCode + (D_801C6BB8 * 5)) = *(__base_D_801C5EC0 + (temp_s1 & 0xFF));

                  block_798:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_45 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_45) = (*(glyphCode + temp_v1_45)) + 0x2E;
                  }
                  block_800:

                }
                var_v0_31 = var_s2 - 5;
              }
            }
          }
          if (((u32) (var_v0_31 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_78 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_78)))
              {
                *(glyphLine + temp_a0_78) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(glyphTableB + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_46 = D_801C707A * 5;
                  *(glyphCode + temp_v1_46) = (*(glyphCode + temp_v1_46)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
          {
            if ((D_801C707A != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              var_s7 = tryReplaceGlyph(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              *(glyphLine + (D_801C707A * 5)) = 0;
              *(glyphCode + (D_801C707A * 5)) = *(glyphTableB + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_47 = D_801C707A * 5;
                *(glyphCode + temp_v1_47) = (*(glyphCode + temp_v1_47)) + 0x2E;
              }
            }
          }
          else
            if ((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2))))
          {
            temp_a0_79 = D_801C707A * 5;
            if ((*(glyphLine + temp_a0_79)) == 0)
            {
              *(glyphCode + temp_a0_79) = *(glyphTableA + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_48 = D_801C707A * 5;
                *(glyphCode + temp_v1_48) = (*(glyphCode + temp_v1_48)) + 0x2E;
              }
            }
          }
        }
        else
          if (((u32) ((var_a2 - 0x16) & 0xFF)) < 5U)
        {
          if (tryBoardMove(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
          {
            var_s0 = 1;
          }
          if (((u32) (var_s2 & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_80 = D_801C707A * 5;
              if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_80)))
              {
                *(glyphLine + temp_a0_80) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_49 = D_801C707A * 5;
                  *(glyphCode + temp_v1_49) = (*(glyphCode + temp_v1_49)) + 0x2E;
                }
              }
            }
          }
          else
            if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
          {
            if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
            {
              temp_a0_81 = D_801C707A * 5;
              if ((*(glyphLine + temp_a0_81)) == 0)
              {
                *(glyphCode + temp_a0_81) = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
                var_s0 |= 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_50 = D_801C707A * 5;
                  *(glyphCode + temp_v1_50) = (*(glyphCode + temp_v1_50)) + 0x2E;
                }
              }
            }
          }
          else
            if (((((u32) ((var_s2 - 0x1B) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
          {
            if (D_801C7AB7 == D_801CA13D)
            {
              var_s5 = 1;
            }
            if (D_801C746C == D_801CA13D)
            {
              var_s4 = 1;
            }
            var_s7 = tryBoardMoveAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
            *(glyphLine + (D_801C707A * 5)) = 0;
            *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));
            var_s0 |= 2;
            if ((*(u8 *)trackInfo) == 4)
            {
              temp_v1_51 = D_801C707A * 5;
              *(glyphCode + temp_v1_51) = (*(glyphCode + temp_v1_51)) + 0x2E;
            }
          }
        }
        else
        {
          if (((u32) ((var_a2 - 0x1B) & 0xFF)) < 5U)
          {
            if (((u32) (var_a1 & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_82 = D_801C6BB8 * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_82)))
                {
                  *(glyphLine + temp_a0_82) = 0;
                  *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                  goto block_859;
                }
              }
            }
            else
              if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
            {
              if ((D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5)))))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = tryBoardMove(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                goto block_859;
              }
            }
            else
              if ((((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))))
            {
              temp_a0_83 = D_801C6BB8 * 5;
              if ((*(glyphLine + temp_a0_83)) == 0)
              {
                *(glyphCode + temp_a0_83) = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                block_859:
                var_s0 = 1;

                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_52 = D_801C6BB8 * 5;
                  *(glyphCode + temp_v1_52) = (*(glyphCode + temp_v1_52)) + 0x2E;
                }
              }
            }
            var_v0_32 = tryBoardMoveAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
            goto block_904;
          }
          if (((u32) ((var_a2 - 0x20) & 0xFF)) < 5U)
          {
            if (tryReplaceGlyph(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
            {
              var_s0 = 1;
            }
            if (((u32) ((var_s2 - 5) & 0xFF)) < 5U)
            {
              if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_84 = D_801C707A * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_84)))
                {
                  *(glyphLine + temp_a0_84) = 0;
                  *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
                  var_s0 |= 2;
                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_53 = D_801C707A * 5;
                    *(glyphCode + temp_v1_53) = (*(glyphCode + temp_v1_53)) + 0x2E;
                  }
                }
              }
            }
            else
              if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
            {
              if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_85 = D_801C707A * 5;
                if ((*(glyphLine + temp_a0_85)) == 0)
                {
                  *(glyphCode + temp_a0_85) = *(glyphTableA + (temp_s3 & 0xFF));
                  var_s0 |= 2;
                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_54 = D_801C707A * 5;
                    *(glyphCode + temp_v1_54) = (*(glyphCode + temp_v1_54)) + 0x2E;
                  }
                }
              }
            }
            else
              if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
            {
              if (D_801C7AB7 == D_801CA13D)
              {
                var_s5 = 1;
              }
              if (D_801C746C == D_801CA13D)
              {
                var_s4 = 1;
              }
              var_s7 = tryReplaceGlyphAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D) & 0xFF);
              *(glyphLine + (D_801C707A * 5)) = 0;
              *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
              var_s0 |= 2;
              if ((*(u8 *)trackInfo) == 4)
              {
                temp_v1_55 = D_801C707A * 5;
                *(glyphCode + temp_v1_55) = (*(glyphCode + temp_v1_55)) + 0x2E;
              }
            }
          }
          else
            if (((u32) ((var_a2 - 0x25) & 0xFF)) < 5U)
          {
            if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
            {
              if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
              {
                temp_a0_86 = D_801C6BB8 * 5;
                if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_86)))
                {
                  *(glyphLine + temp_a0_86) = 0;
                  *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
                  goto block_901;
                }
              }
            }
            else
              if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
            {
              if ((D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5)))))
              {
                if (D_801C7AB7 == D_801C7AB9)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801C7AB9)
                {
                  var_s4 = 1;
                }
                var_s6 = tryReplaceGlyph(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C6BB8 * 5)) = 0;
                *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
                goto block_901;
              }
            }
            else
              if ((((u32) ((var_a1 - 0x25) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))))
            {
              temp_a0_87 = D_801C6BB8 * 5;
              if ((*(glyphLine + temp_a0_87)) == 0)
              {
                *(glyphCode + temp_a0_87) = *(glyphTableA + (temp_s1 & 0xFF));
                block_901:
                var_s0 = 1;

                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_56 = D_801C6BB8 * 5;
                  *(glyphCode + temp_v1_56) = (*(glyphCode + temp_v1_56)) + 0x2E;
                }
              }
            }
            var_v0_32 = tryReplaceGlyphAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
            block_904:
            if (var_v0_32 != 0)
            {
              var_s0 |= 2;
            }

          }
          else
          {
            switch ((s8) var_a2)
            {
              if (((u32) ((var_s2 - 5) & 0xFF)) < 5U)
              {
                if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_88 = D_801C707A * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_88)))
                  {
                    *(glyphLine + temp_a0_88) = 0;
                    *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
                    var_s0 = 2;
                    if ((*(u8 *)trackInfo) == 4)
                    {
                      temp_v1_57 = D_801C707A * 5;
                      *(glyphCode + temp_v1_57) = (*(glyphCode + temp_v1_57)) + 0x2E;
                    }
                  }
                }
              }
              else
                if (((u32) ((var_s2 - 0x20) & 0xFF)) < 5U)
              {
                if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_89 = D_801C707A * 5;
                  if ((*(glyphLine + temp_a0_89)) == 0)
                  {
                    *(glyphCode + temp_a0_89) = *(glyphTableA + (temp_s3 & 0xFF));
                    var_s0 = 2;
                    if ((*(u8 *)trackInfo) == 4)
                    {
                      temp_v1_58 = D_801C707A * 5;
                      *(glyphCode + temp_v1_58) = (*(glyphCode + temp_v1_58)) + 0x2E;
                    }
                  }
                }
              }
              else
                if (((((u32) ((var_s2 - 0x25) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
              {
                if (D_801C7AB7 == D_801CA13D)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801CA13D)
                {
                  var_s4 = 1;
                }
                var_s7 = tryReplaceGlyphAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C707A * 5)) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(glyphTableC + (temp_s3 & 0xFF));
                var_s0 = 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_59 = D_801C707A * 5;
                  *(glyphCode + temp_v1_59) = (*(glyphCode + temp_v1_59)) + 0x2E;
                }
              }
              break;
              if (((u32) ((var_a1 - 5) & 0xFF)) < 5U)
              {
                if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_90 = D_801C6BB8 * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_90)))
                  {
                    *(glyphLine + temp_a0_90) = 0;
                    *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
                    goto block_981;
                  }
                }
              }
              else
                if (((u32) ((var_a1 - 0x20) & 0xFF)) < 5U)
              {
                if ((D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5)))))
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = tryReplaceGlyph(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0;
                  *(glyphCode + (D_801C6BB8 * 5)) = *(glyphTableB + (temp_s1 & 0xFF));
                  goto block_981;
                }
              }
              else
                if ((((u32) ((var_a1 - 0x25) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))))
              {
                var_a0_3 = D_801C6BB8 * 5;
                if ((*(glyphLine + var_a0_3)) == 0)
                {
                  var_v0_33 = *(glyphTableA + (temp_s1 & 0xFF));
                  block_980:
                  *(glyphCode + var_a0_3) = var_v0_33;

                  block_981:
                  var_s0 = 1;

                  if ((*(u8 *)trackInfo) == 4)
                  {
                    temp_v1_60 = D_801C6BB8 * 5;
                    *(glyphCode + temp_v1_60) = (*(glyphCode + temp_v1_60)) + 0x2E;
                  }
                }
              }
              break;
              if (((u32) (var_s2 & 0xFF)) < 5U)
              {
                if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_91 = D_801C707A * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_91)))
                  {
                    *(glyphLine + temp_a0_91) = 0;
                    *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));
                    var_s0 = 2;
                    if ((*(u8 *)trackInfo) == 4)
                    {
                      temp_v1_61 = D_801C707A * 5;
                      *(glyphCode + temp_v1_61) = (*(glyphCode + temp_v1_61)) + 0x2E;
                    }
                  }
                }
              }
              else
                if (((u32) ((var_s2 - 0x16) & 0xFF)) < 5U)
              {
                if (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_92 = D_801C707A * 5;
                  if ((*(glyphLine + temp_a0_92)) == 0)
                  {
                    *(glyphCode + temp_a0_92) = *(u16 *)(D_801C5EA8 + (temp_s3 & 0xFF));
                    var_s0 = 2;
                    if ((*(u8 *)trackInfo) == 4)
                    {
                      temp_v1_62 = D_801C707A * 5;
                      *(glyphCode + temp_v1_62) = (*(glyphCode + temp_v1_62)) + 0x2E;
                    }
                  }
                }
              }
              else
                if (((((u32) ((var_s2 - 0x1B) & 0xFF)) < 5U) && (D_801C707A != (*(u8 *)((char *)trackInfo + 2)))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C707A * 5)))))
              {
                if (D_801C7AB7 == D_801CA13D)
                {
                  var_s5 = 1;
                }
                if (D_801C746C == D_801CA13D)
                {
                  var_s4 = 1;
                }
                var_s7 = tryBoardMoveAlt(D_801C707A, D_801CA13D, func_801C34CC(D_801CA13D, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                *(glyphLine + (D_801C707A * 5)) = 0;
                *(glyphCode + (D_801C707A * 5)) = *(__base_D_801C5EC0 + (temp_s3 & 0xFF));
                var_s0 = 2;
                if ((*(u8 *)trackInfo) == 4)
                {
                  temp_v1_63 = D_801C707A * 5;
                  *(glyphCode + temp_v1_63) = (*(glyphCode + temp_v1_63)) + 0x2E;
                }
              }
              break;
              if (((u32) (var_a1 & 0xFF)) < 5U)
              {
                if (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2)))
                {
                  temp_a0_93 = D_801C6BB8 * 5;
                  if ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + temp_a0_93)))
                  {
                    *(glyphLine + temp_a0_93) = 0;
                    *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                    goto block_981;
                  }
                }
              }
              else
                if (((u32) ((var_a1 - 0x16) & 0xFF)) < 5U)
              {
                if ((D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))) && ((*(glyphLine + (D_801CA130 * 5))) == (*(glyphLine + (D_801C6BB8 * 5)))))
                {
                  if (D_801C7AB7 == D_801C7AB9)
                  {
                    var_s5 = 1;
                  }
                  if (D_801C746C == D_801C7AB9)
                  {
                    var_s4 = 1;
                  }
                  var_s6 = tryBoardMove(D_801C6BB8, D_801C7AB9, func_801C34CC(D_801C7AB9, var_a1, (s8) var_a2, temp_a3) & 0xFF);
                  *(glyphLine + (D_801C6BB8 * 5)) = 0;
                  *(glyphCode + (D_801C6BB8 * 5)) = *(D_801C5EB8 + (temp_s1 & 0xFF));
                  goto block_981;
                }
              }
              else
                if ((((u32) ((var_a1 - 0x1B) & 0xFF)) < 5U) && (D_801C6BB8 != (*(u8 *)((char *)trackInfo + 2))))
              {
                var_a0_3 = D_801C6BB8 * 5;
                if ((*(glyphLine + var_a0_3)) == 0)
                {
                  var_v0_33 = *(u16 *)(D_801C5EA8 + (temp_s1 & 0xFF));
                  goto block_980;
                }
              }
              break;
            }

          }
        }
        __base_D_8011F30C = D_8011F30C;
        *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7078 * 2))) * 0x64)) = 0;
      }
    }
    else
      if ((*(glyphLine + (D_801CA130 * 5))) == 0x78)
    {
      if (((u32) (var_a2 & 0xFF)) < 5U)
      {
        if (tryBoardMove(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
        {
          var_s0 = 1;
        }
        goto block_1015;
      }
      if (((u32) ((var_a2 - 5) & 0xFF)) < 5U)
      {
        if (tryReplaceGlyph(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = tryReplaceGlyphAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0xA) & 0xFF)) < 3U)
      {
        if (tryBoardMove(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = tryReplaceGlyphAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0xD) & 0xFF)) < 3U)
      {
        if (tryBoardMoveAlt(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = tryReplaceGlyphAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0x10) & 0xFF)) < 3U)
      {
        if (tryBoardMove(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = tryReplaceGlyph(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      if (((u32) ((var_a2 - 0x13) & 0xFF)) < 3U)
      {
        if (tryBoardMoveAlt(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF)
        {
          var_s0 = 1;
        }
        var_v0_2 = tryReplaceGlyph(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;
        goto block_1016;
      }
      switch ((s8) var_a2)
      {
        var_v0_2 = tryReplaceGlyphAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF, temp_a3) & 0xFF;
        block_1016:
        if (var_v0_2 != 0)
        {
          var_s0 |= 2;
        }

        break;
        var_v0_34 = tryReplaceGlyph(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF;
        block_1020:
        if (var_v0_34 != 0)
        {
          var_s0 = 1;
        }

        break;
        block_1015:
        var_v0_2 = tryBoardMoveAlt(D_801CA130, D_801C707A, temp_s3 & 0xFF) & 0xFF;

        goto block_1016;
        var_v0_34 = tryBoardMove(D_801CA130, D_801C6BB8, temp_s1 & 0xFF, temp_a3) & 0xFF;
        goto block_1020;
      }

      block_1022:
      var_v0_25 = (*(D_801C6BE0 + (D_801C7078 * 2))) * 0x64;

      var_fv0 = 30.0f;
      block_1023:
      *(__base_D_8011F30C + var_v0_25) = var_fv0;

    }
  }
  if ((D_801C7AB7 == D_801C6BB8) || (D_801C7AB7 == D_801C707A))
  {
    var_s5 = 1;
  }
  if ((D_801C746C == D_801C6BB8) || (D_801C746C == D_801C707A))
  {
    var_s4 = 1;
  }
  if (((*(D_801C7082 + (D_801CA130 * 5))) == blockPos) && ((*(D_801C7083 + (D_801CA130 * 5))) == D_801C6BB1))
  {
    var_s5 = 1;
  }
  else
    if (((*(D_801C7082 + (D_801CA130 * 5))) == finishPos) && ((*(D_801C7083 + (D_801CA130 * 5))) == D_801C7063))
  {
    var_s4 = 1;
  }
  if ((*(u8 *)((char *)trackInfo + 1)) == 5)
  {
    if (((var_s5 != 0) | (var_s4 != 0)) != 0)
    {
      temp_s5 = *(D_801C7AD8 + D_801C6BB4);
      temp_s4 = *(D_801C7AD8 + D_801C7066[0]);
      if (D_801C7AB5 > 0)
      {
        temp_a1 = (temp_s5 & 0xFF) * 5;
        temp_v1_64 = *(glyphLine + temp_a1);
        if (temp_v1_64 != 0x78)
        {
          temp_a2 = (temp_s4 & 0xFF) * 5;
          if (((*(glyphLine + temp_a2)) != 0x78) && (temp_v1_64 == (*(glyphLine + temp_a2))))
          {
            if (temp_v1_64 == 0)
            {
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 30.0f;
              *(glyphLine + temp_a1) = 0x3C;
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 30.0f;
              *(glyphLine + temp_a2) = 0x3C;
              var_a1_2 = 0;
            }
            else
            {
              temp_a1_2 = (temp_s5 & 0xFF) * 5;
              if ((*(glyphLine + temp_a1_2)) == 0x3C)
              {
                *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 60.0f;
                *(glyphLine + temp_a1_2) = 0x78;
                *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 60.0f;
                *(glyphLine + ((temp_s4 & 0xFF) * 5)) = 0x78;
              }
              var_a1_2 = 0;
            }
            {
              u8 *bp = D_801C7470;
              temp_a3_2 = bp + (temp_s4 * 8);
            }
            var_v0_35 = 0 & 0xFF;
            temp_s4_copy = temp_s4;
            do
            {
              temp_a0_96 = (void *) ((var_v0_35 * 2) + ((s32) temp_a3_2));
              temp_v1_65 = *temp_a0_96;
              if (temp_v1_65 != 0xFFFF)
              {
                __base_D_8011F2FD = D_8011F2FD;
                *((u16 *) (__base_D_8011F2FD + (temp_v1_65 * 0x64))) = 2;
                *temp_a0_96 = 0xFFFF;
                D_801C7AB6 -= 1;
              }
              var_a1_2 += 1;
              var_v0_35 = var_a1_2 & 0xFF;
            }
            while (((u32) (var_a1_2 & 0xFF)) < 4U);
            do
            {
              func_801BFA1C(temp_s4_copy & 0xFF, 1, 0xFFFF, temp_a3_2);
            }
            while (0);
            *(__base_D_8011F30C + (D_801C746A * 0x64)) = (*((f32 *) (glyphLine + ((*(D_801C7AD8 + D_801C6BB4)) * 5)))) * 0.5f;
            var_fv0_2 = *((f32 *) (glyphLine + ((*(D_801C7AD8 + D_801C7066[0])) * 5)));
            var_v1_15 = D_801C6BB6 * 0x64;
            goto block_1121;
          }
        }
      }
      var_v1_16 = var_s0 & 0xFF;
      if (D_801C7AB5 < 0)
      {
        temp_a0_97 = (temp_s5 & 0xFF) * 5;
        temp_v1_66 = *(glyphLine + temp_a0_97);
        if (temp_v1_66 != 0)
        {
          temp_a1_3 = (temp_s4 & 0xFF) * 5;
          if (((*(glyphLine + temp_a1_3)) != 0) && (temp_v1_66 == (*(glyphLine + temp_a1_3))))
          {
            if (temp_v1_66 == 0x3C)
            {
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 0;
              *(glyphLine + temp_a0_97) = 0;
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 0;
              *(glyphLine + temp_a1_3) = 0;
              var_a1_3 = 0;
            }
            else
            {
              temp_a1_4 = (temp_s5 & 0xFF) * 5;
              if ((*(glyphLine + temp_a1_4)) == 0x78)
              {
                *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 30.0f;
                *(glyphLine + temp_a1_4) = 0x3C;
                *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 30.0f;
                *(glyphLine + ((temp_s4 & 0xFF) * 5)) = 0x3C;
              }
              var_a1_3 = 0;
            }
            {
              u8 *bp = D_801C7470;
              temp_a3_3 = bp + (temp_s4 * 8);
            }
            var_v0_36 = 0 & 0xFF;
            do
            {
              temp_a0_98 = (void *) ((var_v0_36 * 2) + ((s32) temp_a3_3));
              temp_v1_67 = *temp_a0_98;
              if (temp_v1_67 != 0xFFFF)
              {
                *((u16 *) (__base_D_8011F2FD + (temp_v1_67 * 0x64))) = 2;
                *temp_a0_98 = 0xFFFF;
                D_801C7AB6 -= 1;
              }
              var_a1_3 += 1;
              var_v0_36 = var_a1_3 & 0xFF;
            }
            while (((u32) (var_a1_3 & 0xFF)) < 4U);
            *(__base_D_8011F30C + (D_801C746A * 0x64)) = (*((f32 *) (glyphLine + ((*(D_801C7AD8 + D_801C6BB4)) * 5)))) * 0.5f;
            func_801BFA1C(temp_s4 & 0xFF, 1, 0xFFFF, temp_a3_3);
            var_fv0_2 = *((f32 *) (glyphLine + ((*(D_801C7AD8 + D_801C7066[0])) * 5)));
            var_v1_15 = D_801C6BB6 * 0x64;
            goto block_1121;
          }
        }
        goto block_1122;
      }
    }
    else
    {
      goto block_1122;
    }
  }
  else
    if ((*(u8 *)((char *)trackInfo + 1)) == 6)
  {
    if (var_s5 != 0)
    {
      temp_s5_2 = *(D_801C7AD8 + D_801C6BB4);
      if (D_801C7AB5 > 0)
      {
        temp_v1_68 = *(glyphLine + ((temp_s5_2 & 0xFF) * 5));
        if (temp_v1_68 != 0x78)
        {
          if (temp_v1_68 != 0)
          {
            var_a1_4 = 0;
            if ((*(glyphLine + ((temp_s5_2 & 0xFF) * 5))) == 0x3C)
            {
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 60.0f;
              var_v0_37 = 0x78;
              goto block_1076;
            }
          }
          else
          {
            *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 30.0f;
            var_v0_37 = 0x3C;
            block_1076:
            *(glyphLine + ((temp_s5_2 & 0xFF) * 5)) = var_v0_37;

            var_a1_4 = 0;
          }
          {
            u8 *bp = D_801C7470;
            var_a3 = bp + (temp_s5_2 * 8);
          }
          var_v0_38 = 0 & 0xFF;
          temp_s5_2_copy = temp_s5_2;
          do
          {
            temp_a0_99 = (void *) ((var_v0_38 * 2) + ((s32) var_a3));
            temp_v1_69 = *temp_a0_99;
            if (temp_v1_69 != 0xFFFF)
            {
              *((u16 *) (__base_D_8011F2FD + (temp_v1_69 * 0x64))) = 2;
              *temp_a0_99 = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1_4 += 1;
            var_v0_38 = var_a1_4 & 0xFF;
          }
          while (((u32) (var_a1_4 & 0xFF)) < 4U);
          var_a0_5 = temp_s5_2_copy & 0xFF;
          goto block_1093;
        }
      }
      if (D_801C7AB5 < 0)
      {
        temp_a0_100 = (temp_s5_2 & 0xFF) * 5;
        temp_v1_70 = *(glyphLine + temp_a0_100);
        if (temp_v1_70 != 0)
        {
          if (temp_v1_70 == 0x3C)
          {
            *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 0;
            *(glyphLine + temp_a0_100) = 0;
            var_a1_5 = 0;
          }
          else
          {
            temp_a0_101 = (temp_s5_2 & 0xFF) * 5;
            var_a1_5 = 0;
            if ((*(glyphLine + temp_a0_101)) == 0x78)
            {
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C6BB4 * 2))) * 0x64)) = 30.0f;
              *(glyphLine + temp_a0_101) = 0x3C;
            }
          }
          {
            u8 *bp = D_801C7470;
            var_a3 = bp + (temp_s5_2 * 8);
          }
          var_v0_39 = 0 & 0xFF;
          do
          {
            temp_a0_102 = (void *) ((var_v0_39 * 2) + ((s32) var_a3));
            temp_v1_71 = *temp_a0_102;
            if (temp_v1_71 != 0xFFFF)
            {
              *((u16 *) (__base_D_8011F2FD + (temp_v1_71 * 0x64))) = 2;
              *temp_a0_102 = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1_5 += 1;
            var_v0_39 = var_a1_5 & 0xFF;
          }
          while (((u32) (var_a1_5 & 0xFF)) < 4U);
          var_a0_5 = temp_s5_2 & 0xFF;
          block_1093:
          func_801BFA1C(var_a0_5, 0, 0xFFFF, var_a3);

          *(__base_D_8011F30C + (D_801C746A * 0x64)) = (*((f32 *) (glyphLine + ((*(D_801C7AD8 + D_801C6BB4)) * 5)))) * 0.5f;
        }
      }
    }
    var_v1_16 = var_s0 & 0xFF;
    if (var_s4 != 0)
    {
      temp_s4_2 = *(D_801C7AD8 + D_801C7066[0]);
      if (D_801C7AB5 > 0)
      {
        var_a0_6 = (temp_s4_2 & 0xFF) * 5;
        temp_v1_72 = *(glyphLine + var_a0_6);
        if (temp_v1_72 != 0x78)
        {
          if (temp_v1_72 != 0)
          {
            var_a0_6 = (temp_s4_2 & 0xFF) * 5;
            var_a1_6 = 0;
            if ((*(glyphLine + var_a0_6)) == 0x3C)
            {
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 60.0f;
              var_v0_40 = 0x78;
              goto block_1103;
            }
          }
          else
          {
            *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 30.0f;
            var_v0_40 = 0x3C;
            block_1103:
            *(glyphLine + var_a0_6) = var_v0_40;

            var_a1_6 = 0;
          }
          {
            u8 *bp = D_801C7470;
            var_a3_2 = bp + (temp_s4_2 * 8);
          }
          var_v0_41 = 0 & 0xFF;
          temp_s4_2_copy = temp_s4_2;
          do
          {
            temp_a0_103 = (void *) ((var_v0_41 * 2) + ((s32) var_a3_2));
            temp_v1_73 = *temp_a0_103;
            if (temp_v1_73 != 0xFFFF)
            {
              *((u16 *) (__base_D_8011F2FD + (temp_v1_73 * 0x64))) = 2;
              *temp_a0_103 = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1_6 += 1;
            var_v0_41 = var_a1_6 & 0xFF;
          }
          while (((u32) (var_a1_6 & 0xFF)) < 4U);
          var_a0_7 = temp_s4_2_copy & 0xFF;
          goto block_1120;
        }
      }
      var_v1_16 = var_s0 & 0xFF;
      if (D_801C7AB5 < 0)
      {
        temp_a0_104 = (temp_s4_2 & 0xFF) * 5;
        temp_v1_74 = *(glyphLine + temp_a0_104);
        if (temp_v1_74 != 0)
        {
          if (temp_v1_74 == 0x3C)
          {
            *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 0;
            *(glyphLine + temp_a0_104) = 0;
            var_a1_7 = 0;
          }
          else
          {
            temp_a0_105 = (temp_s4_2 & 0xFF) * 5;
            var_a1_7 = 0;
            if ((*(glyphLine + temp_a0_105)) == 0x78)
            {
              *(__base_D_8011F30C + ((*(D_801C6BE0 + (D_801C7066[0] * 2))) * 0x64)) = 30.0f;
              *(glyphLine + temp_a0_105) = 0x3C;
            }
          }
          {
            u8 *bp = D_801C7470;
            var_a3_2 = bp + (temp_s4_2 * 8);
          }
          var_v0_42 = 0 & 0xFF;
          do
          {
            temp_a0_106 = (void *) ((var_v0_42 * 2) + ((s32) var_a3_2));
            temp_v1_75 = *temp_a0_106;
            if (temp_v1_75 != 0xFFFF)
            {
              *((u16 *) (__base_D_8011F2FD + (temp_v1_75 * 0x64))) = 2;
              *temp_a0_106 = 0xFFFF;
              D_801C7AB6 -= 1;
            }
            var_a1_7 += 1;
            var_v0_42 = var_a1_7 & 0xFF;
          }
          while (((u32) (var_a1_7 & 0xFF)) < 4U);
          var_a0_7 = temp_s4_2 & 0xFF;
          block_1120:
          func_801BFA1C(var_a0_7, 1, 0xFFFF, var_a3_2);

          var_v1_15 = D_801C6BB6 * 0x64;
          var_fv0_2 = *((f32 *) (glyphLine + ((*(D_801C7AD8 + D_801C7066[0])) * 5)));
          block_1121:
          *(__base_D_8011F30C + var_v1_15) = var_fv0_2 * 0.5f;

        }
        goto block_1122;
      }
    }
  }
  else
  {
    block_1122:
    var_v1_16 = var_s0 & 0xFF;

  }
  if (var_v1_16 == 1)
  {
    temp_a1_5 = D_801C6BB8 * 5;
    temp_a0_107 = (((s8) (*(D_801C7082 + temp_a1_5))) + ((*(D_801C7083 + temp_a1_5)) * 0x18)) & 0xFFFF;
    *(D_801C7D34 + (temp_a0_107 * 0x10)) = ((*(glyphCode + temp_a1_5)) * 8) + D_8031445C;
    *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_107 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_5))) * 0.5f;
    var_a1_8 = 0;
    do
    {
      temp_v1_76 = (var_a1_8 & 0xFF) * 2;
      temp_a0_108 = *((u16 *) (temp_v1_76 + ((D_801C6BB8 * 8) + D_801C7470)));
      if (temp_a0_108 != 0xFFFF)
      {
        *((u16 *) (__base_D_8011F2FD + (temp_a0_108 * 0x64))) = 2;
        *((s32 *) (temp_v1_76 + ((D_801C6BB8 * 8) + D_801C7470))) = 0xFFFF;
        D_801C7AB6 -= 1;
      }
      var_a1_8 += 1;
    }
    while (((u32) (var_a1_8 & 0xFF)) < 4U);
    func_801BB1F0(D_801C6BB8, var_a1_8, 0xFFFF, temp_a3);
    if (var_s6 & 0xFF)
    {
      temp_a1_6 = D_801C7AB9 * 5;
      temp_a0_109 = (((s8) (*(D_801C7082 + temp_a1_6))) + ((*(D_801C7083 + temp_a1_6)) * 0x18)) & 0xFFFF;
      *(D_801C7D34 + (temp_a0_109 * 0x10)) = ((*(glyphCode + temp_a1_6)) * 8) + D_8031445C;
      *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_109 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_6))) * 0.5f;
      var_a1_9 = 0;
      do
      {
        temp_v1_77 = (var_a1_9 & 0xFF) * 2;
        temp_a0_110 = *((u16 *) (temp_v1_77 + ((D_801C7AB9 * 8) + D_801C7470)));
        if (temp_a0_110 != 0xFFFF)
        {
          *((u16 *) (__base_D_8011F2FD + (temp_a0_110 * 0x64))) = 2;
          *((s32 *) (temp_v1_77 + ((D_801C7AB9 * 8) + D_801C7470))) = 0xFFFF;
          D_801C7AB6 -= 1;
        }
        var_a1_9 += 1;
      }
      while (((u32) (var_a1_9 & 0xFF)) < 4U);
      var_a0_8 = D_801C7AB9;
      goto block_1166;
    }
    return var_s0 & 0xFF;
  }
  if ((var_s0 & 0xFF) == 2)
  {
    temp_a1_7 = D_801C707A * 5;
    temp_a0_111 = (((s8) (*(D_801C7082 + temp_a1_7))) + ((*(D_801C7083 + temp_a1_7)) * 0x18)) & 0xFFFF;
    *(D_801C7D34 + (temp_a0_111 * 0x10)) = ((*(glyphCode + temp_a1_7)) * 8) + D_8031445C;
    *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_111 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_7))) * 0.5f;
    var_a1_10 = 0;
    do
    {
      temp_v1_78 = (var_a1_10 & 0xFF) * 2;
      temp_a0_112 = *((u16 *) (temp_v1_78 + ((D_801C707A * 8) + D_801C7470)));
      if (temp_a0_112 != 0xFFFF)
      {
        *((u16 *) (__base_D_8011F2FD + (temp_a0_112 * 0x64))) = 2;
        *((s32 *) (temp_v1_78 + ((D_801C707A * 8) + D_801C7470))) = 0xFFFF;
        D_801C7AB6 -= 1;
      }
      var_a1_10 += 1;
    }
    while (((u32) (var_a1_10 & 0xFF)) < 4U);
    func_801BB1F0(D_801C707A, var_a1_10, 0xFFFF);
    if (var_s7 & 0xFF)
    {
      temp_a1_8 = D_801CA13D * 5;
      temp_a0_113 = (((s8) (*(D_801C7082 + temp_a1_8))) + ((*(D_801C7083 + temp_a1_8)) * 0x18)) & 0xFFFF;
      *(D_801C7D34 + (temp_a0_113 * 0x10)) = ((*(glyphCode + temp_a1_8)) * 8) + D_8031445C;
      *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_113 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_8))) * 0.5f;
      var_a1_9 = 0;
      do
      {
        temp_v1_79 = (var_a1_9 & 0xFF) * 2;

        temp_a0_114 = *((u16 *) (temp_v1_79 + ((D_801CA13D * 8) + D_801C7470)));
        if (temp_a0_114 != 0xFFFF)
        {
          *((u16 *) (__base_D_8011F2FD + (temp_a0_114 * 0x64))) = 2;
          *((s32 *) (temp_v1_79 + ((D_801CA13D * 8) + D_801C7470))) = 0xFFFF;
          D_801C7AB6 -= 1;
        }
        var_a1_9 += 1;
      } while (((u32) (var_a1_9 & 0xFF)) < 4U);
      goto block_1165;
    }
    return var_s0 & 0xFF;
  }
  if ((var_s0 & 0xFF) == 3)
  {
    var_a1_12 = 0;
    temp_a1_9 = D_801C6BB8 * 5;
    temp_a0_115 = (((s8) (*(D_801C7082 + temp_a1_9))) + ((*(D_801C7083 + temp_a1_9)) * 0x18)) & 0xFFFF;
    *(D_801C7D34 + (temp_a0_115 * 0x10)) = ((*(glyphCode + temp_a1_9)) * 8) + D_8031445C;
    *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_115 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_9))) * 0.5f;
    var_a1_11 = 0;
    do
    {
      temp_v1_80 = (var_a1_11 & 0xFF) * 2;
      temp_a0_116 = *((u16 *) (temp_v1_80 + ((D_801C6BB8 * 8) + D_801C7470)));
      if (temp_a0_116 != 0xFFFF)
      {
        *((u16 *) (__base_D_8011F2FD + (temp_a0_116 * 0x64))) = 2;
        *((s32 *) (temp_v1_80 + ((D_801C6BB8 * 8) + D_801C7470))) = 0xFFFF;
        D_801C7AB6 -= 1;
      }
      var_a1_11 += 1;
    }
    while (((u32) (var_a1_11 & 0xFF)) < 4U);
    func_801BB1F0(D_801C6BB8, var_a1_11, 0xFFFF);
    temp_a1_10 = D_801C707A * 5;
    temp_a0_117 = (((s8) (*(D_801C7082 + temp_a1_10))) + ((*(D_801C7083 + temp_a1_10)) * 0x18)) & 0xFFFF;
    *(D_801C7D34 + (temp_a0_117 * 0x10)) = ((*(glyphCode + temp_a1_10)) * 8) + D_8031445C;
    *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_117 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_10))) * 0.5f;
    do
    {
      temp_v1_81 = (var_a1_12 & 0xFF) * 2;
      temp_a0_118 = *((u16 *) (temp_v1_81 + ((D_801C707A * 8) + D_801C7470)));
      if (temp_a0_118 != 0xFFFF)
      {
        *((u16 *) (__base_D_8011F2FD + (temp_a0_118 * 0x64))) = 2;
        *((s32 *) (temp_v1_81 + ((D_801C707A * 8) + D_801C7470))) = 0xFFFF;
        D_801C7AB6 -= 1;
      }
      var_a1_12 += 1;
    }
    while (((u32) (var_a1_12 & 0xFF)) < 4U);
    func_801BB1F0(D_801C707A, var_a1_12, 0xFFFF);
    if (var_s6 & 0xFF)
    {
      temp_a1_11 = D_801C7AB9 * 5;
      temp_a0_119 = (((s8) (*(D_801C7082 + temp_a1_11))) + ((*(D_801C7083 + temp_a1_11)) * 0x18)) & 0xFFFF;
      *(D_801C7D34 + (temp_a0_119 * 0x10)) = ((*(glyphCode + temp_a1_11)) * 8) + D_8031445C;
      *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_119 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_11))) * 0.5f;
      var_a1_13 = 0;
      do
      {
        temp_v1_82 = (var_a1_13 & 0xFF) * 2;
        temp_a0_120 = *((u16 *) (temp_v1_82 + ((D_801C7AB9 * 8) + D_801C7470)));
        if (temp_a0_120 != 0xFFFF)
        {
          *((u16 *) (__base_D_8011F2FD + (temp_a0_120 * 0x64))) = 2;
          *((s32 *) (temp_v1_82 + ((D_801C7AB9 * 8) + D_801C7470))) = 0xFFFF;
          D_801C7AB6 -= 1;
        }
        var_a1_13 += 1;
      }
      while (((u32) (var_a1_13 & 0xFF)) < 4U);
      func_801BB1F0(D_801C7AB9, var_a1_13, 0xFFFF);
    }
    if (var_s7 & 0xFF)
    {
      temp_a1_12 = D_801CA13D * 5;
      temp_a0_121 = (((s8) (*(D_801C7082 + temp_a1_12))) + ((*(D_801C7083 + temp_a1_12)) * 0x18)) & 0xFFFF;
      *(D_801C7D34 + (temp_a0_121 * 0x10)) = ((*(glyphCode + temp_a1_12)) * 8) + D_8031445C;
      *(__base_D_8011F30C + ((*(D_801C6BE0 + (temp_a0_121 * 2))) * 0x64)) = (*((f32 *) (glyphLine + temp_a1_12))) * 0.5f;
      var_a1_9 = 0;
      do
      {
        temp_v1_83 = (var_a1_9 & 0xFF) * 2;
        temp_a0_122 = *((u16 *) (temp_v1_83 + ((D_801CA13D * 8) + D_801C7470)));
        if (temp_a0_122 != 0xFFFF)
        {
          *((u16 *) (__base_D_8011F2FD + (temp_a0_122 * 0x64))) = 2;
          *((s32 *) (temp_v1_83 + ((D_801CA13D * 8) + D_801C7470))) = 0xFFFF;
          D_801C7AB6 -= 1;
        }
        var_a1_9 += 1;
      }
      while (((u32) (var_a1_9 & 0xFF)) < 4U);
      block_1165:
      var_a0_8 = D_801CA13D;

      block_1166:
      func_801BB1F0(var_a0_8, var_a1_9, 0xFFFF);

    }
    return var_s0 & 0xFF;

  }
  else
  {
    return var_s0 & 0xFF;
  }
}


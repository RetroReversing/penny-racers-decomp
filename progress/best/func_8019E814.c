s32 func_8014B854();
s8 func_80190D40();
s32 func_801BD7E8();
extern char D_8011F2FD[];
extern char D_801C5E8B[];
extern char D_801C5E8D[];
extern char D_801C5E90[];
extern char D_801C5E92[];
extern u16 D_801C6BB4;
extern u16 D_801C7066;
extern s8 D_801C7070;
extern u16 D_801C7078;
extern char D_801C7081[];
extern char D_801C7084[];
extern u8 D_801C7468;
extern void * volatile D_801C7AB0;
extern u8 D_801C7AB4;
extern s8 D_801C7AB5;
extern u8 D_801C7ABC;
extern void *D_801C7AC4;
extern char D_801C7D1A[];
extern u8 D_801CA130;
extern s8 D_801CA138;
extern char D_801E995A[];
extern char D_801E995B[];
extern char D_801E9980[];
extern char D_801E9984[];
extern char D_801E9988[];
extern char D_801E998C[];
extern char D_8031445C[];
inline static int inline_fn(u16 arg0)
{
  return arg0 * 0x64;
}

void func_8019E814(s32 arg0)
{
  u8 *__base_D_8011F2FD;
  s32 __index_D_8011F2FD;
  s32 __repair_phase___index_D_8011F2FD;
  s32 *temp_a0;
  s32 *temp_a0_3;
  s32 temp_v1;
  s32 temp_v1_5;
  s32 temp_v1_8;
  s32 var_a0;
  s32 var_a0_3;
  s32 var_v0;
  s32 var_v0_12;
  s32 var_v0_3;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v0_9;
  s8 var_v0_10;
  s8 var_v0_2;
  s8 __repair_result_var_v0_2;
  s8 var_v0_4;
  s8 __repair_result_var_v0_4;
  u16 *var_a1;
  u16 *__repair_phase_var_a1;
  u16 *var_a1_2;
  u16 *__repair_phase_var_a1_2;
  u16 temp_v1_10;
  u16 temp_v1_2;
  u16 temp_v1_4;
  u16 temp_v1_7;
  u32 temp_v1_6;
  u32 temp_v1_9;
  u8 temp_a0_2;
  u8 temp_a0_4;
  u8 var_a0_2;
  u8 var_a0_4;
  u8 var_v0_11;
  u8 var_v0_8;
  __base_D_8011F2FD = 0;
  if (((D_801C7AB5 == 0) && (D_801C7078 != D_801C6BB4)) && (D_801C7078 != D_801C7066))
  {
    var_v0_6 = arg0 & 0xFFFF; temp_v1 = var_v0_6 * 0x70;
    var_v0 = arg0 & 0xFFFF;
    if ((*(D_801E995A + temp_v1)) >= 0x33)
    {
      temp_a0 = D_801E9980 + temp_v1;
      var_v0 = arg0 & 0xFFFF;
      if ((((*temp_a0) / 15) * 0xF) == ((*temp_a0) - 1))
      {
        D_801CA138 = 1;
        temp_a0_2 = D_801C7AB4 + 1;
        D_801C7AB4 = temp_a0_2;
        if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 3)
        {
          if (((s8) temp_a0_2) == 0x2A)
          {
            D_801C7AB4 = 0;
          }
          if (D_801CA130 == (*((const u8 *) (((char *) D_801C7AB0) + 2))))
          {
            __repair_result_var_v0_2 = func_80190D40((s8) D_801C7AB4);
            goto block_21;
          }
          var_a0 = 0;
          if (D_801C7468 == 0x78)
          {
 do { var_v0_2 = 0x3C; if (((u32) (D_801C7AB4 - 0x16)) < 0x14U) { } else { goto block_20; } goto block_21; } while (0);
          }
        }
        else
        {
          var_a0 = 0;
          if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 4)
          {
            if (((s8) D_801C7AB4) == 0x58)
            {
              D_801C7AB4 = 0x2E;
            }
            if (D_801CA130 == (*((const u8 *) (((char *) D_801C7AB0) + 2))))
            {
              var_v0_2 = func_80190D40((s8) D_801C7AB4);
              goto block_21;
            }
            var_a0 = 0;
            if (D_801C7468 == 0x78)
            {
              var_v0_2 = 0x3C;
              if (((u32) (D_801C7AB4 - 0x44)) >= 0x14U)
              {
                block_20:
                var_v0_2 = 0x78;

              }
              block_21:
              D_801C7070 = var_v0_2;

              var_a0 = 0;
            }
          }
        }
        {
          u8 __repair_i;
          for (__repair_i = 0; __repair_i < 4; __repair_i++)
          {
            var_a1 = (__repair_i * 2) + D_801C7D1A;
            temp_v1_2 = *var_a1;
            if (temp_v1_2 != 0xFFFF)
            {
              __index_D_8011F2FD = inline_fn(temp_v1_2);
              __base_D_8011F2FD = D_8011F2FD;
              *(__base_D_8011F2FD + __index_D_8011F2FD) = 2;
              *var_a1 = 0xFFFF;
            }
          }

        }
        goto block_50;
      }
    }
    __repair_phase___index_D_8011F2FD = var_v0 * 0x70;
    if ((*(D_801E995A + __repair_phase___index_D_8011F2FD)) < (-0x32))
    {
      temp_a0_3 = D_801E9984 + __repair_phase___index_D_8011F2FD;
      if ((((*temp_a0_3) / 15) * 0xF) == ((*temp_a0_3) - 1))
      {
        D_801CA138 = -1;
        temp_a0_4 = D_801C7AB4 - 1;
        D_801C7AB4 = temp_a0_4;
        if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 3)
        {
          if (((s8) temp_a0_4) == (-1))
          {
            D_801C7AB4 = 0x29;
          }
          if (D_801CA130 == (*((const u8 *) (((char *) D_801C7AB0) + 2))))
          {
            __repair_result_var_v0_4 = func_80190D40((s8) D_801C7AB4);
            goto block_45;
          }
          var_a0 = 0;
          if (D_801C7468 == 0x78)
          {
            var_v0_4 = 0x3C;
            if (((u32) (D_801C7AB4 - 0x16)) < 0x14U)
            {
            }
            else
            {
              goto block_44;
            }
            goto block_45;
          }
        }
        else
        {
          var_a0 = 0;
          if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 4)
          {
            if (((s8) D_801C7AB4) == 0x2D)
            {
              D_801C7AB4 = 0x57;
            }
            if (D_801CA130 == (*((const u8 *) (((char *) D_801C7AB0) + 2))))
            {
              var_v0_4 = func_80190D40((s8) D_801C7AB4);
              goto block_45;
            }
            var_a0 = 0;
            if (D_801C7468 == 0x78)
            {
              var_v0_4 = 0x3C;
              if (((u32) (D_801C7AB4 - 0x44)) >= 0x14U)
              {
                block_44:
                var_v0_4 = 0x78;

              }
              block_45:
              D_801C7070 = var_v0_4;

              var_a0 = 0;
            }
          }
        }
        {
          u8 __repair_i;
          for (__repair_i = 0; __repair_i < 4; __repair_i++)
          {
            __repair_phase_var_a1 = (__repair_i * 2) + D_801C7D1A;
            temp_v1_4 = *__repair_phase_var_a1;
            if (temp_v1_4 != 0xFFFF)
            {
              *(D_8011F2FD + inline_fn(temp_v1_4)) = 2;
              *__repair_phase_var_a1 = 0xFFFF;
            }
          }

        }
        block_50:
        D_801C7AC4 = (((s8) D_801C7AB4) * 8) + D_8031445C;

        func_801BD7E8();
        func_8014B854(0x3B);
      }
    }
  }
  if (D_801CA138 == 0)
  {
    if (D_801C5E8B)
    {
      temp_v1_5 = (arg0 & 0xFFFF) * 0x70;
    }
    else
    {
      temp_v1_5 = (arg0 & 0xFFFF) * 0x70;
    }
    if (((u32) (((*(D_801E995A + temp_v1_5)) + 0x13) & 0xFF)) < 0x27U)
    {
      var_v0_6 = arg0 & 0xFFFF;
      if (((*(D_801E995B + temp_v1_5)) >= 0x33) && ((var_v0_6 = arg0 & 0xFFFF, (*((s32 *) (D_801E9988 + temp_v1_5))) == 1)))
      {
        if ((D_801C7ABC & 1) && (D_801C7AB5 == 0))
        {
          D_801CA138 = 1;
          D_801C7AB5 = 0x3C;
          if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 3)
          {
            var_a0_2 = *(D_801C7084 + (D_801CA130 * 5));
            temp_v1_5 = D_801CA130 * 4;
          }
          else
          {
            var_a0_2 = (*(D_801C7084 + (D_801CA130 * 5))) - 0x2E;
            temp_v1_5 = D_801CA130 * 4;
          }
          if ((*(D_801C7081 + (temp_v1_5 + D_801CA130))) == 0x3C)
          {
            temp_v1_6 = (unsigned char) (var_a0_2 - 0x16);
            if (temp_v1_6 < 0x14U)
            {
              D_801C7070 = 0x78;
              if (temp_v1_6 < 5U)
              {
                var_v0_8 = *(D_801C5E92 + ((s8) var_a0_2));
                goto block_70;
              }
              if (((u32) ((unsigned char) (var_a0_2 - 0x1B))) < 5U)
              {
                var_v0_8 = *(D_801C5E8D + ((s8) var_a0_2));
                goto block_70;
              }
              if (((u32) ((unsigned char) (var_a0_2 - 0x20))) < 5U)
              {
                var_v0_8 = *(D_801C5E90 + ((s8) var_a0_2));
                goto block_70;
              }
              if (((u32) ((var_a0_2 - 0x25) & 0xFF)) < 5U)
              {
                var_v0_8 = *(D_801C5E8B + ((s8) var_a0_2));
                block_70:
                D_801C7AB4 = var_v0_8;

              }
              var_a0_3 = 0;
              if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 4)
              {
                D_801C7AB4 += 0x2E;
              }
              {
                u8 __repair_i;
                for (__repair_i = 0; __repair_i < 4; __repair_i++)
                {
                  var_a1_2 = (__repair_i * 2) + D_801C7D1A;
                  temp_v1_7 = *var_a1_2;
                  if (temp_v1_7 != 0xFFFF)
                  {
                    *(D_8011F2FD + inline_fn(temp_v1_7)) = 2;
                    *var_a1_2 = 0xFFFF;
                  }
                }

              }
              goto block_103;
            }
          }
          var_v0_10 = (*(D_801C7081 + (D_801CA130 * 5))) + 0x3C;
          goto block_105;
          goto block_106;
        }
      }
      else
      {
        temp_v1_8 = var_v0_6 * 0x70;
        if (((((*(D_801E995B + temp_v1_8)) < (-0x32)) && ((*((s32 *) (D_801E998C + temp_v1_8))) == 1)) && (D_801C7ABC & 2)) && (D_801C7AB5 == 0))
        {
          if (D_801C5E92)
          {
            D_801CA138 = -1;
            D_801C7AB5 = -0x3C;
          }
          else
          {
            D_801CA138 = -1;
            D_801C7AB5 = -0x3C;
          }
          if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 3)
          {
            var_a0_4 = *(D_801C7084 + (D_801CA130 * 5));
          }
          else
          {
            var_a0_4 = (*(D_801C7084 + (D_801CA130 * 5))) - 0x2E;
          }
          if (((*(D_801C7081 + (D_801CA130 * 5))) == 0) && ((temp_v1_9 = (unsigned char) (var_a0_4 - 0x16), (temp_v1_9 < 0x14U) != 0)))
          {
            D_801C7070 = 0;
            if (temp_v1_9 < 5U)
            {
              var_v0_11 = *(D_801C5E92 + ((s8) var_a0_4));
              goto block_96;
            }
            if (((u32) ((unsigned char) (var_a0_4 - 0x1B))) < 5U)
            {
              var_v0_11 = *(D_801C5E8D + ((s8) var_a0_4));
              goto block_96;
            }
            if (((u32) ((unsigned char) (var_a0_4 - 0x20))) < 5U)
            {
              var_v0_11 = *(D_801C5E90 + ((s8) var_a0_4));
              goto block_96;
            }
            if (((u32) ((var_a0_4 - 0x25) & 0xFF)) < 5U)
            {
              var_v0_11 = *(D_801C5E8B + ((s8) var_a0_4));
              block_96:
              D_801C7AB4 = var_v0_11;

            }
            var_a0_3 = 0;
            if ((*((const u8 *) (((char *) D_801C7AB0) + 0))) == 4)
            {
              D_801C7AB4 += 0x2E;
            }
            {
              u8 __repair_i;
              for (__repair_i = 0; __repair_i < 4; __repair_i++)
              {
                __repair_phase_var_a1_2 = (__repair_i * 2) + D_801C7D1A;
                temp_v1_10 = *__repair_phase_var_a1_2;
                if (temp_v1_10 != 0xFFFF)
                {
                  *(D_8011F2FD + inline_fn(temp_v1_10)) = 2;
                  *__repair_phase_var_a1_2 = 0xFFFF;
                }
              }

            }
            block_103:
            D_801C7AC4 = (((s8) D_801C7AB4) * 8) + D_8031445C;

            func_801BD7E8();
          }
          else
          {
            var_v0_10 = (*(D_801C7081 + (D_801CA130 * 5))) - 0x3C;
            block_105:
            D_801C7070 = var_v0_10;

          }
          block_106:
          func_8014B854(0x3B);

        }
      }
    }
  }
  else
  {
    D_801C7ABC = 0;
  }
}

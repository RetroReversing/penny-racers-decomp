extern int D_801E87A0;
extern int D_801E87A4;
s32 func_800DE2E0();
s32 func_800DE38C();
s32 func_801CF468();
s32 func_801D651C();
s32 func_801DD938();
s32 func_801DDCDC();
s32 func_80203DF8();
s32 func_80231C5C();
s32 nuContPakCodeSet();
s32 nuContPakFileNum();
s32 nuContPakFileOpenJis();
s32 nuContPakGetFree();
s32 nuContPakOpen();
extern s8 D_80046832;
extern char D_8011F32E[];
extern char D_8011F330[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u8 D_801E4420;
extern u16 D_801E879C;
extern char D_801E87A8[];
extern char D_801E87BC[];
extern u8 D_801E87C0;
extern u8 D_801E87D2;
extern char D_801E9768[];
extern u8 D_801E977C;
extern char D_801E9788[];
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern u8 D_801E9B18;
extern s8 D_801E9B19;
extern char D_801E9D60[];
extern char D_801E9D70[];
extern char D_801F1898[];
extern char D_801F18A0[];
extern char D_801F18A4[];
extern s32 D_8021AFDC;
inline static int inline_fn(s32 arg0)
{
  return arg0 * 4;
}

inline static char *inline_fn2(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_801DF62C(volatile int arg0)
{
  s32 temp_s0;
  short temp_v1_2;
  s32 temp_v0;
  int temp_s0_2;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 var_s1;
  s32 var_s1_2;
  s32 var_s2;
  s32 var_s3;
  s32 var_s4;
  s32 var_v0;
  s32 var_v0_3;
  char *__base_D_8011F32E;
  s32 var_v1;
  s32 var_v1_2;
  s8 var_v0_2;
  s32 temp_v1;
  __base_D_8011F32E = D_8011F32E;
  temp_v1 = *inline_fn2(__base_D_8011F32E, (arg0 & 0xFFFF) * 0x64);
  switch (temp_v1)
  {
    case 0x0:
      if (D_801E879C == 0)
    {
      *((s32 *) (*((s32 *) inline_fn2(D_8011F350, D_8018BC3C * 0x64)))) = 1;
      *((s16 *) inline_fn2(D_8011F330, (arg0 & 0xFFFF) * 0x64)) = 1;
      case 0x1:
        var_s3 = 0;

      if (D_801E879C != 0)
      {
        goto block_14;
      }
      D_801E9B19 = 0;
      D_801E9B18 = 0;
      D_801E977C = 0;
      var_s4 = 0;
      var_s1 = 0;
      __repair_rows:
      {
        var_s4 += (((s32) D_801E4420) >> var_s1) & 1;
        var_s1 += 1;
      }

      if (var_s1 < 4)
      {
        goto __repair_rows;
      }
      if (var_s4 != 0)
      {
        if (!(D_801E4420 & 1))
        {
          D_801E9B19 = 1;
          *inline_fn2(D_8011F32E, (arg0 & 0xFFFF) * 0x64) = 3;
          if (((u8) D_801E977C) < 0x1EU)
          {
            ++D_801E977C;
            return;
          }
          D_801E977C = 0;
          return;
        }
        var_s1_2 = 0;
        var_s2 = 0;
        loop_23:
        var_v1 = 0;

        var_v0 = ((s32) D_801E4420) >> 0;
        loop_24:
        if ((!(var_v0 & 1)) || ((var_s2 += 1, var_s1_2 != var_s2)))
        {
          var_v1 += 1;
          var_v0 = ((s32) D_801E4420) >> var_v1;
          if ((var_v1 + 1) < (4 + 1))
          {
            goto loop_24;
          }
        }
        else
        {
          var_s2 = var_v1;
        }

        temp_s0 = var_s2 * 0x10;
        nuContPakOpen(temp_s0 + D_801F1898);
        temp_v1_2 = func_801DDCDC(var_v1 & 0xFF, 1);
        if ((*((s32 *) inline_fn2(D_801F18A4, temp_s0))) != 1)
        {
          if (temp_v1_2 == 2)
          {
            {
              func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, (s32) D_801E87C0, 0xD);
              return;
            }
          }
          goto block_47;
        }
        if (temp_v1_2 != 2)
        {
          if (temp_v1_2 >= 3)
          {
            if (temp_v1_2 != 3)
            {
              ++var_s1_2;
            }
            else
            {
              block_47:
              *inline_fn2(D_801E9D70 - 16, var_s1_2) = 2;

              var_s3 += 1;
              goto block_50;
            }
          }
          else
            if (temp_v1_2 >= 0)
          {
            if (D_8011F350)
            {
              ;
              nuContPakCodeSet(D_801E87A0, D_801E87A4);
              nuContPakFileOpenJis((((u32) var_s2) * 0x10) + D_801F1898, D_801E87A8, D_801E87BC);
              temp_v1_3 = *((s32 *) inline_fn2(D_801F18A0, temp_s0_2));
            }
            else
            {
              ;
              nuContPakCodeSet(D_801E87A0, D_801E87A4);
              nuContPakFileOpenJis((((u32) var_s2) * 0x10) + D_801F1898, D_801E87A8, D_801E87BC);
              temp_v1_3 = *((s32 *) inline_fn2(D_801F18A0, temp_s0_2));
            }
            if (temp_v1_3 == 5)
            {
              *inline_fn2(D_801E9D70, var_s1_2) = 1;
              temp_v0 = inline_fn(var_s1_2);
              nuContPakFileNum((var_s2 * 0x10) + D_801F1898, temp_v0 + D_801E9788, temp_v0 + D_801E9D60);
              temp_v1_4 = inline_fn(var_s1_2);
              if (func_801DDCDC(var_s2 & 0xFF, 1) == 0)
              {
                if ((*(temp_v1_4 + D_801E9788)) == (*((s32 *) inline_fn2(D_801E9D60, temp_v1_4))))
                {
                  var_v0_2 = 4;
                  goto block_46;
                }
                *(inline_fn(var_s1_2) + D_801E9768) = nuContPakGetFree((var_s2 * 0x10) + D_801F1898);
                if (func_801DDCDC(var_s2 & 0xFF, 1) != 0)
                {
                  goto block_44;
                }
                var_v0_2 = 5;
                if (((((s32) (*((var_s1_2 * 4) + D_801E9768))) >> 5) >> 3) < 0x44)
                {
                  block_46:
                  *inline_fn2(D_801E9D70, var_s1_2) = var_v0_2;

                  var_s3 += 1;
                }
              }
              else
              {
                goto block_44;
              }
              goto block_50;
            }
            if (temp_v1_3 != 0)
            {
              block_44:
              *inline_fn2(D_801E9D70, var_s1_2) = 3;

              var_s3 += 1;
              goto block_50;
            }
            else
            {
              *inline_fn2(D_801E9D70, var_s1_2) = 0;
              var_s1_2 += 1;
            }
          }
          else
          {
            block_50:
            var_s1_2 += 1;

          }
          if (var_s1_2 >= 1)
          {
            var_s2 = 0;
            if (var_s3 != 0)
            {
              *((u16 *) inline_fn2(D_8011F32E, (arg0 & 0xFFFF) * 0x64)) = 2;
            }
            else
            {
              func_80203DF8(0, 0x78, 0xFF, 0xFF, 0xFF);
              if (D_801E87D2 != 0)
              {
                *((s32 *) (*((s32 *) inline_fn2(D_8011F350, D_8018BC3C * 0x64)))) = 2;
              }
              var_v0_3 = arg0 & 0xFFFF;
              *inline_fn2(__base_D_8011F32E, var_v0_3 * 0x64) = 0x385;
            }
            if (((u8) D_801E977C) < 0x1EU)
            {
              ++D_801E977C;
              return;
            }
            D_801E977C = 0;
            return;
          }
          goto loop_23;
        }
        block_49:
        func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, (s32) D_801E87C0, 0xD);

        return;
      }
      D_801E9B19 = 1;
      *inline_fn2(D_8011F32E, (arg0 & 0xFFFF) * 0x64) = 3;
      if (((u8) D_801E977C) < 0x1EU)
      {
        ++D_801E977C;
        return;
      }
      D_801E977C = 0;
      return;
    }
      block_14:
    if (D_801E87D2 == 0)
    {
      *inline_fn2(D_8011F32E, (arg0 & 0xFFFF) * 0x64) = 0x386;
    }
    else
    {
      block_71:
      *((s32 *) (*((s32 *) inline_fn2(D_8011F350, D_8018BC3C * 0x64)))) = 2;

      var_v1_2 = arg0 & 0xFFFF;
      block_72:
      *inline_fn2(__base_D_8011F32E, var_v1_2 * 0x64) = 0x385;

    }


    default:
      if (((u8) D_801E977C) < 0x1EU)
    {
      ++D_801E977C;
      return;
    }
      D_801E977C = 0;
      return;

    case 0x2:
      D_801E87D2 = 1;
      if (D_801E9988 == 1)
    {
      if (D_801E9B18 == D_801E9988)
      {
        func_801D651C(7, 0x3B);
      }
      D_801E9B18 = 0;
    }
    else
      if (D_801E998C == 1)
    {
      if (D_801E9B18 == 0)
      {
        func_801D651C(7, 0x3B);
      }
      D_801E9B18 = 1;
    }
    else
      if (D_801E9990 == 1)
    {
      if (D_801E9B18 == D_801E9990)
      {
        func_801D651C(7, 0x3D);
        *inline_fn2(__base_D_8011F32E, (arg0 & 0xFFFF) * 0x64) = 1;
      }
      else
      {
        *((s32 *) (*((s32 *) inline_fn2(D_8011F350, D_8018BC3C * 0x64)))) = 2;
        func_801D651C(7, 0x3D);
        func_80203DF8(2, 0x78, 0xFF, 0xFF, 0xFF);
        var_v1_2 = arg0 & 0xFFFF;
        goto block_72;
      }
    }
    else
      if (D_801E9994 == 1)
    {
      func_801D651C(7, 0x3A);
      goto block_71;
    }
      if (((u8) D_801E977C) < 0x1EU)
    {
      ++D_801E977C;
      return;
    }
      D_801E977C = 0;
      return;

    case 0x385:
      if ((*((s32 *) (*((s32 *) inline_fn2(D_8011F350, D_8018BC3C * 0x64))))) == 0)
    {
      case 0x386:
        func_800DE38C();

      func_800DE2E0();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_8021AFDC = 0x22;
      D_80046832 = 0;
      D_80168BB0 = 0x22;
    }
      if (((u8) D_801E977C) < 0x1EU)
    {
      ++D_801E977C;
      return;
    }
      D_801E977C = 0;
      return;

  }

}


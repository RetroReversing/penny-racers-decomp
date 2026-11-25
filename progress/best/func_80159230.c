#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
extern unsigned short D_8006FB10;
extern short D_800DD2C0;
extern unsigned char D_8006FB18;
f32 __sinf(f32, s32);
s32 alSeqpSetVol();
s32 func_80143D70();
u8 func_80148230();
s32 func_801CF468();
s32 func_801D63F4();
s32 func_801D651C();
s32 func_801D65BC();
s32 func_8021F5F0();
s32 func_802319E8();
s32 func_80231C5C();
extern s8 D_80046832;
extern s16 D_8006F9E8;
extern char D_8006FAF0[];
extern char D_8006FB14[];
extern char D_8006FB38[];
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2F2[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F300[];
extern char D_8011F32E[];
extern char D_8011F334[];
extern char D_8011F338[];
extern char D_8011F33C[];
extern char D_8011F350[];
extern s32 D_80168BB0;
extern f64 D_80183910;
extern f64 D_80183918;
extern u8 D_80183BD0;
extern u8 D_80183BD6;
extern f32 D_80187CEC;
extern char D_80189950[];
extern char D_80189952[];
extern u16 D_8018996A;
extern f32 D_80189C78;
extern u8 D_80189C7C;
extern s32 D_80189C80;
extern u8 D_80189CC8;
extern s8 D_80189DC1;
extern char D_8018A148[];
extern u16 D_8018A26C;
extern u16 D_8018BC3C;
extern char D_801D7E06[];
extern u16 D_801D7F0E;
extern char D_801E9988[];
extern char D_801E998C[];
extern char D_801E9990[];
extern char D_801E99C0[];
extern u8 D_8021F028;
extern char D_8022A772[];
extern char D_8022AD04[];
extern char D_8022AD64[];
extern char D_8022AFE9[];
extern u16 func_800E1850;
void func_80159230(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *__base_D_8011F300;
  s32 __index_D_8011F300;
  u8 *__base_D_8011F2FC;
  s32 __index_D_8011F2FC;
  s32 var_a2;
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  s16 var_v0;
  s32 temp_a1;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 temp_v1_7;
  s32 var_a0;
  s32 var_a0_10;
  s32 var_a0_3;
  s32 var_a0_5;
  s32 var_a0_6;
  s32 var_a0_7;
  s32 var_a0_8;
  s32 var_a0_9;
  s32 var_v0_10;
  s32 var_v0_11;
  s32 var_v0_12;
  s32 var_v0_13;
  s32 var_v0_14;
  s32 var_v0_15;
  s32 var_v0_16;
  s32 var_v0_17;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v0_7;
  s32 var_v0_8;
  s32 var_v0_9;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s32 var_v1_4;
  s32 var_v1_5;
  s32 var_v1_6;
  s32 var_v1_7;
  s32 var_v1_9;
  s8 var_v0_18;
  u16 temp_a0;
  u16 temp_a0_2;
  u16 temp_v1;
  u16 temp_v1_6;
  u16 temp_v1_8;
  u16 var_a0_4;
  u32 var_v1_8;
  u8 temp_a0_3;
  u8 var_a0_2;
  void *temp_v1_5;
  __base_D_8011F300 = 0;
  __base_D_8011F2FC = 0;
  var_a2 = arg2;
  temp_v1 = *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64)));
  switch (temp_v1)
  {
    case 0:
      D_80189DC1 = 0;
      D_80183BD0 = 0;
      D_80187CEC = 0.0f;
      D_80189C78 = 0.0f;
      D_8018A26C = 0;
      D_80189C80 = 0x3C;
      D_80189CC8 = func_80148230();
      if (D_8006FB10 == 0)
    {
      D_80189CC8 = 3;
    }
      if ((D_80189CC8 == 0) || ((D_80189CC8 == 3) && (D_800DD2C0 == 1)))
    {
      D_80189C7C = 0;
    }
    else
    {
      D_80189C7C = 1;
    }
      D_80183BD6 = 0;
      var_a0 = 0;
      for (;;)
    {
      {
        *(D_8018A148 + var_a0) = 0xFF;
        var_a0 += 1;
      }
      if (var_a0 < 4)
      {
        continue;
      }
      break;
    }

      D_80046832 = 0;
      var_v1 = (arg0 & 0xFFFF) * 0x64;
      var_v0 = 1;
      block_140:
    *((u16 *) (D_8011F32E + var_v1)) = var_v0;


    default:
      block_141:
    break;


    case 1:
      if (D_8006FB18 == 1)
    {
      if (D_80189C80 != 0)
      {
        D_80189C80 -= 1;
      }
      if (D_8006FB18 == 1)
      {
        if (D_80189C80 == 0)
        {
          D_80183BD6 = 0xFF;
          var_a0_2 = 0;
          if (D_800DD2C0 > 0)
          {
            var_a2 = 1;
            var_v1_2 = 0 * 8;
            loop_20:
            if (((*((s32 *) (D_801E99C0 + ((var_v1_2 - var_a0_2) * 0x10)))) != 1) || ((*(D_8022AFE9 + ((((var_v1_2 + var_a0_2) * 0x10) - var_a0_2) * 0x10))) != 0))
            {
              var_a0_2 += 1;
              var_v1_2 = var_a0_2 * 8;
              if (((s32) var_a0_2) < D_800DD2C0)
              {
                goto loop_20;
              }
            }
            else
            {
              D_80183BD6 = var_a0_2;
            }

          }
          var_a0_3 = 0;
          if (D_80183BD6 != 0xFF)
          {
            var_v1_3 = 0 * 4;
            do
            {
              *((s32 *) (var_v1_3 + D_80189950)) = (s32) (*((s16 *) (D_801D7E06 + (var_a0_3 * 0x2C))));
              var_a0_3 += 1;
              var_v1_3 = var_a0_3 * 4;
            }
            while (var_a0_3 < 7);
            D_8018A26C = 0;
            func_801D651C(7, 0x41, var_a2);
            if (D_8021F028 != 0)
            {
              alSeqpSetVol(D_8006FB38, (s16) (D_8021F028 * 0x1F4));
            }
            var_a0_4 = func_800E1850;
            if ((var_a0_4 & 0xFFFF) != 0xFFFF)
            {
              var_v0_3 = var_a0_4 & 0xFFFF;
              var_v1_4 = var_v0_3 * 2;
              do
              {
                temp_v1_2 = (((var_v1_4 + var_v0_3) * 8) + var_v0_3) * 4;
                var_v0_4 = var_a0_4 & 0xFFFF;
                if ((*(D_8011F2F0 + temp_v1_2)) != 0xFF)
                {
                  *((u16 *) (D_8011F2F2 + temp_v1_2)) = (*((u16 *) (D_8011F2F2 + temp_v1_2))) | 0x10;
                  var_v0_4 = var_a0_4 & 0xFFFF;
                }
                __index_D_8011F300 = var_v0_4 * 0x64;
                __base_D_8011F300 = D_8011F300;
                var_a0_4 = *(__base_D_8011F300 + __index_D_8011F300);
                var_v0_3 = var_a0_4 & 0xFFFF;
                var_v1_4 = var_v0_3 * 2;
              }
              while (var_v0_3 != 0xFFFF);
            }
            temp_s0 = (arg0 & 0xFFFF) * 0x64;
            *((u16 *) (D_8011F2F2 + temp_s0)) = (*((u16 *) (D_8011F2F2 + temp_s0))) & 0xFFEF;
            temp_v0 = D_8018BC3C * 0x64;
            *((u16 *) (D_8011F2F2 + temp_v0)) = (*((u16 *) (D_8011F2F2 + temp_v0))) & 0xFFEF;
            *((s32 *) (*((s32 *) (D_8011F350 + temp_v0)))) = 2;
            *((s16 *) (((s8 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64))))) + 2)) = 0x2D;
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80183BD0 = 0;
            D_80046832 = 1;
            *((u16 *) (D_8011F32E + temp_s0)) = 0xA;
          }
          else
          {
            goto block_141;
          }
        }
      }
    }
      break;

    case 2:
      temp_s0_2 = *((s32 *) (D_801E9990 - (-(D_80183BD6 * 0x70))));
      if (temp_s0_2 == 1)
    {
      func_801D651C(7, 0x3D);
      if (D_80183BD0 != temp_s0_2)
      {
        if (((s32) D_80183BD0) >= 2)
        {
          if (D_80183BD0 != 2)
          {
            if (D_80183BD0 != 3)
            {
            }
            else
            {
              temp_v1_3 = D_80183BD6 * 0x8F0;
              if ((*((u16 *) (D_8022AD04 + temp_v1_3))) < 0)
              {
                *((u16 *) (D_8022AD04 + temp_v1_3)) = 0;
              }
              temp_v0_2 = D_80183BD6 * 0x8F0;
              *((u16 *) (D_8022AD04 + temp_v0_2)) = (*((u16 *) (D_8022AD04 + temp_v0_2))) + 4;
              *(D_8022AFE9 + temp_v0_2) = 5;
              goto block_50;
            }
          }
          else
          {
            D_80046832 = 0;
            var_v0_5 = (arg0 & 0xFFFF) * 0x64;
            *((f32 *) (D_8011F334 + var_v0_5)) = 4.0f;
            *(D_8011F338 + var_v0_5) = 0;
            goto block_46;
          }
        }
        else
          if (D_80183BD0 != 0)
        {
        }
        else
        {
          block_50:
          *((s32 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64))))) = 3;

          D_80189DC1 = 0;
          D_8018A26C = 0;
          *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 0xB;
        }
      }
      else
      {
        D_80046832 = 0;
        var_v0_5 = (arg0 & 0xFFFF) * 0x64;
        *((f32 *) (D_8011F334 + var_v0_5)) = 5.0f;
        *(D_8011F338 + var_v0_5) = 0;
        block_46:
        *((f32 *) (D_8011F33C + var_v0_5)) = 4.0f;

        *((u16 *) (D_8011F32E + var_v0_5)) = 6;
      }
    }
    else
      if ((*((s32 *) (D_801E99C0 + (D_80183BD6 * 0x70)))) == 1)
    {
      *((s32 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64))))) = 3;
      D_80189DC1 = 0;
      D_8018A26C = 0;
      *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 0xB;
      func_801D651C(7, 0x41);
    }
    else
    {
      if (((*((s32 *) (D_801E9988 + (D_80183BD6 * 0x70)))) == 1) && (D_80183BD0 != 0))
      {
        D_80183BD0 -= 1;
        func_801D651C(7, 0x3B);
      }
      if ((*((s32 *) (D_801E998C + (D_80183BD6 * 0x70)))) == 1)
      {
        if (((s32) D_80183BD0) < (D_80189C7C + 2))
        {
          D_80183BD0 += 1;
          func_801D651C(7, 0x3B);
        }
        else
        {
          goto block_141;
        }
      }
    }
      break;

    case 4:
      func_802319E8();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      func_8021F5F0();
      var_a0_5 = 0;
      var_v0_6 = 0 * 8;
      do
    {
      if (((*((u16 *) (D_8022A772 + ((((var_v0_6 + var_a0_5) * 0x10) - var_a0_5) * 0x10)))) != 0xFFFF) & (var_a0_5 < 4))
      {
        var_v1_5 = 0;
        var_v0_7 = 0 * 8;
        do
        {
          *((s16 *) (D_8022AD64 + (((var_v0_7 - var_v1_5) * 8) + (var_a0_5 * 0x8F0)))) = -1;
          var_v1_5 += 1;
          var_v0_7 = var_v1_5 * 8;
        }
        while (var_v1_5 < 4);
      }
      var_a0_5 += 1;
      var_v0_6 = var_a0_5 * 8;
    }
    while (var_a0_5 < 4);
      func_801D63F4(var_a0_5);
      func_801D65BC(0);
      func_80143D70();
      D_80168BB0 = 2;
      D_8006F9E8 = 8;
      break;

    case 5:
      func_802319E8();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      func_8021F5F0();
      D_8006F9E8 = 0x14;
      break;

    case 6:
      temp_v1_4 = (arg0 & 0xFFFF) * 0x64;
      var_a0_6 = 0;
      if ((*(D_8011F2FC + temp_v1_4)) != 0)
    {
      *(D_8011F2FC + temp_v1_4) = (*(D_8011F2FC + temp_v1_4)) - 5;
      do
      {
        __index_D_8011F2FC = (arg0 & 0xFFFF) * 0x64;
        __base_D_8011F2FC = D_8011F2FC;
        if (((u8) (*(__base_D_8011F2FC + __index_D_8011F2FC))) < ((u8) (*(D_8018A148 + var_a0_6))))
        {
          *(D_8018A148 + var_a0_6) = (*(D_8018A148 + var_a0_6)) - 5;
        }
        var_a0_6 += 1;
      }
      while (var_a0_6 < 4);
    }
    else
    {
      *((s32 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64))))) = 4;
      *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 0x1E;
    }
      break;

    case 10:
      temp_v1_5 = *((s32 *) (D_8011F350 + (D_8018BC3C * 0x64)));
      if (((u8) (*((u8 *) (((s8 *) temp_v1_5) + 9)))) >= 0x97U)
    {
      *((s8 *) (((s8 *) temp_v1_5) + 0)) = 0;
      D_80189DC1 = 1;
      *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 2;
    }
      temp_a0 = *((u16 *) (((s8 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64))))) + 4));
      if (D_800DD2C0 != 2)
    {
      if (D_800DD2C0 < 3)
      {
        if (D_800DD2C0 != 1)
        {
        }
        else
          if (!(temp_a0 & 3))
        {
          var_v0_8 = D_8018A26C * 2;
          if (((u16) D_8018A26C) >= 2U)
          {
            if (D_8018A26C == 2)
            {
              D_801D7F0E = 0;
            }
          }
          else
          {
 do { goto block_92; } while (0);
          }
          goto block_118;
        }
      }
      else
        if (D_800DD2C0 != 3)
      {
        var_v0_9 = temp_a0 & 3;
        if (D_800DD2C0 != 4)
        {
        }
        else
        {
          goto block_89;
        }
      }
      else
        if (!(temp_a0 & 3))
      {
        var_v0_10 = ((u16) D_8018A26C) < 3U;
        goto block_91;
      }
    }
    else
    {
      var_v0_9 = temp_a0 & 3;
      block_89:
      if (var_v0_9 == 0)
      {
        var_v0_10 = ((u16) D_8018A26C) < 4U;
        block_91:
        var_v0_8 = D_8018A26C * 2;

        if (var_v0_10 != 0)
        {
          block_92:
          *((s16 *) (D_801D7E06 + ((((var_v0_8 + D_8018A26C) * 4) - D_8018A26C) * 4))) = 0;

        }
        block_118:
        D_8018A26C += 1;

      }

    }
      break;

    case 11:
      temp_v1_6 = D_8018BC3C;
      var_v0_11 = temp_v1_6 * 2;
      if ((*((s32 *) (*((s32 *) (D_8011F350 + (temp_v1_6 * 0x64)))))) == 0)
    {
      D_80046832 = 0;
      var_v1_6 = func_800E1850 & 0xFFFF;
      if (var_v1_6 != 0xFFFF)
      {
        do
        {
          temp_v0_3 = var_v1_6 * 0x64;
          *((u16 *) (D_8011F2F2 + temp_v0_3)) = (*((u16 *) (D_8011F2F2 + temp_v0_3))) & 0xFFEF;
          temp_a0_2 = *((u16 *) (D_8011F300 + temp_v0_3));
          var_v1_6 = temp_a0_2 & 0xFFFF;
        }
        while ((temp_a0_2 & 0xFFFF) != 0xFFFF);
      }
      if (D_8021F028 != 0)
      {
        alSeqpSetVol(D_8006FB38, (s16) (D_8021F028 * 0x3CF));
      }
      *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 1;
      var_v0_11 = D_8018BC3C * 2;
    }
      temp_a0_3 = *((u8 *) (((s8 *) (*((s32 *) (D_8011F350 + ((((var_v0_11 + temp_v1_6) * 8) + temp_v1_6) * 4))))) + 9));
      if (D_800DD2C0 != 2)
    {
      if (D_800DD2C0 < 3)
      {
        if (D_800DD2C0 != 1)
        {
        }
        else
          if (!(temp_a0_3 & 3))
        {
          var_v0_12 = D_8018A26C * 2;
          if (((u16) D_8018A26C) >= 2U)
          {
            if (D_8018A26C == 2)
            {
              D_801D7F0E = D_8018996A;
            }
          }
          else
          {
            goto block_117;
          }
          goto block_118;
        }
      }
      else
        if (D_800DD2C0 != 3)
      {
        var_v0_13 = temp_a0_3 & 3;
        if (D_800DD2C0 != 4)
        {
        }
        else
        {
          goto block_114;
        }
      }
      else
        if (!(temp_a0_3 & 3))
      {
        var_v0_14 = ((u16) D_8018A26C) < 3U;
        goto block_116;
      }
    }
    else
    {
      var_v0_13 = temp_a0_3 & 3;
      block_114:
      if (var_v0_13 == 0)
      {
        var_v0_14 = ((u16) D_8018A26C) < 4U;
        block_116:
        var_v0_12 = D_8018A26C * 2;

        if (var_v0_14 != 0)
        {
          block_117:
          *((s16 *) (D_801D7E06 + ((((var_v0_12 + D_8018A26C) * 4) - D_8018A26C) * 4))) = *((u16 *) (D_80189952 + (D_8018A26C * 4)));

        }
        goto block_118;
      }

    }
      break;

    case 20:
      var_v1_7 = arg0 & 0xFFFF;
      temp_v0_4 = var_v1_7 * 0x64;
      *(D_8011F338 + temp_v0_4) = (*(D_8011F338 + temp_v0_4)) + 1.0f;
      temp_fv1 = *(D_8011F338 + temp_v0_4);
      if (temp_fv1 >= 2.1474836e9f)
    {
      var_a0_7 = ((s32) (temp_fv1 - 2.1474836e9f)) | 0x80000000;
      var_v1_7 = arg0 & 0xFFFF;
    }
    else
    {
      var_a0_7 = (s32) temp_fv1;
    }
      var_v0_15 = var_v1_7 * 2;
      temp_fv1_2 = *((f32 *) (D_8011F33C + ((((var_v0_15 + var_v1_7) * 8) + var_v1_7) * 4)));
      if (!(temp_fv1_2 >= 2.1474836e9f))
    {
      var_v1_8 = var_a0_7 & 0xFFFF;
      var_a0_8 = (s32) temp_fv1_2;
    }
    else
    {
      var_a0_8 = ((s32) (temp_fv1_2 - 2.1474836e9f)) | 0x80000000;
      var_v1_8 = var_a0_7 & 0xFFFF;
    }
      if (((u32) (var_a0_8 & 0xFFFF)) < var_v1_8)
    {
      temp_a1 = (arg0 & 0xFFFF) * 0x64;
      temp_fv1_3 = *((f32 *) (D_8011F334 + temp_a1));
      if (temp_fv1_3 >= 2.1474836e9f)
      {
        var_a0_9 = ((s32) (temp_fv1_3 - 2.1474836e9f)) | 0x80000000;
      }
      else
      {
        var_a0_9 = (s32) temp_fv1_3;
      }
      *((u16 *) (D_8011F32E + temp_a1)) = (s16) var_a0_9;
    }
    else
    {
      goto block_141;
    }
      break;

    case 30:
      if ((*((s32 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64)))))) == 0)
    {
      var_v0_16 = arg0 & 0xFFFF;
      if ((func_800E1850 & 0xFFFF) != 0xFFFF)
      {
        var_v0_17 = func_800E1850 & 0xFFFF;
        var_v1_9 = var_v0_17 * 2;
        do
        {
          temp_v1_7 = (((var_v1_9 + var_v0_17) * 8) + var_v0_17) * 4;
          *(D_8011F2FD + temp_v1_7) = 4;
          var_v0_17 = (*((u16 *) (D_8011F300 + temp_v1_7))) & 0xFFFF;
          var_v1_9 = var_v0_17 * 2;
        }
        while (var_v0_17 != 0xFFFF);
        var_v0_16 = arg0 & 0xFFFF;
      }
      var_v1 = var_v0_16 * 0x64;
      *(D_8011F2FD + var_v1) = 0;
      *((u16 *) (D_8011F2F2 + var_v1)) = (*((u16 *) (D_8011F2F2 + var_v1))) | 0x20;
      *(D_8011F2FD + (D_8018BC3C * 0x64)) = 0;
      var_v0 = 0x14;
      goto block_140;
    }
      break;

  }

  var_a0_10 = (arg0 & 0xFFFF) * 0x64;
  temp_v1_8 = *((u16 *) (D_8011F32E + var_a0_10));
  temp_v0_5 = temp_v1_8 & 0xFFFF;
  if (((((u32) (temp_v1_8 - 4)) >= 2U) && ((temp_v0_5 != 6) & (temp_v0_5 != 0x14))) && ((*((u16 *) (D_8011F32E + var_a0_10))) != 0x1E))
  {
    var_a0_10 = 0;
    do
    {
      if (D_80183BD0 == var_a0_10)
      {
        if (((u8) (*(D_8018A148 + var_a0_10))) < 0xFFU)
        {
          var_v0_18 = (*(D_8018A148 + var_a0_10)) + 0xF;
          goto block_151;
        }
      }
      else
        if (((u8) (*(D_8018A148 + var_a0_10))) >= 0x6AU)
      {
        var_v0_18 = (*(D_8018A148 + var_a0_10)) - 0xF;
        block_151:
        *(D_8018A148 + var_a0_10) = var_v0_18;

      }
      var_a0_10 += 1;
    }
    while (var_a0_10 < 4);
  }
  temp_fv0 = D_80187CEC + 4.0f;
  D_80187CEC = temp_fv0;
  if (temp_fv0 > 180.0f)
  {
    D_80187CEC = temp_fv0 - 180.0f;
  }
  D_80189C78 = __sinf((f32) ((((f64) D_80187CEC) * D_80183910) / D_80183918), var_a0_10) * 20.0f;
}

u8 func_80149F40();
s32 func_8014A870();
void func_8014B854();
s32 func_801FD530();
extern char D_800DA260[];
extern unsigned char D_8011F2F0[];
extern char D_8011F32E[];
extern char D_8011F350[];
extern char D_80168C60[];
extern u16 D_8018BC3C;
extern char D_8021AFEC[];
extern char D_8021AFFC[];
extern u8 D_8021B00C;
extern char D_8021B010[];
extern char D_8021B014[];
extern u8 D_8021B019;
extern u8 D_8021B069;
extern u8 D_8021B06A;
extern char D_8021E180[];
extern s16 D_8021E1A2;
extern s16 carClassIndex;
extern char D_8021E20B[];
extern char D_8021E20C[];
extern char randomSequenceTable[];
inline static unsigned char inline_fn(int arg0)
{
  return *(D_8011F2F0 + arg0);
}

inline static u16 *inline_fn2(u16 arg0)
{
  return (u16 *) (D_8011F32E + (arg0 * 0x64));
}

s32 func_8020AAB0(s32 arg0)
{
  u8 *__base_D_8021E22F;
  u8 *__repair_phase___base_D_8021E22F;
  s32 __index_D_8021E22F;
  s32 *temp_a0_3;
  s32 *temp_v1_6;
  s32 *temp_v1_7;
  s32 *temp_v1_8;
  s32 *var_v1_3;
  s32 temp_s1;
  s32 temp_v0_2;
  s32 temp_v1_2;
  s32 temp_v1_3;
  volatile unsigned long temp_v1_5;
  s32 temp_v1_9;
  u16 var_v0;
  s32 var_v0_2;
  u16 var_v0_4;
  s32 var_v1;
  s32 var_v1_2;
  u16 var_v1_4;
  volatile char var_v1_5;
  s32 var_v1_6;
  s32 temp_v1;
  u32 var_s0;
  u8 temp_a0;
  u8 temp_a0_2;
  u8 temp_a0_4;
  u8 temp_a0_5;
  u8 temp_a0_6;
  u8 temp_v0;
  s32 temp;
  s32 temp2;
  do
  {
    __base_D_8021E22F = 0;
    temp = (arg0 & 0xFFFF) * 0x64;
    temp_v1 = *((u16 *) (D_8011F32E + temp));
    if (temp_v1 != 1)
    {
      if (((s32) temp_v1) >= 2)
      {
        if (temp_v1 != 2)
        {
          return;
        }
        if ((D_8021E1A2 != 0) && (D_8021B069 & 0x10))
        {
          temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
          *((u16 *) (D_8011F32E + temp_v1_2)) = 1;
          *((D_8021E180 + 1) + inline_fn(temp_v1_2)) = (*(D_8021E20C + (inline_fn(temp_v1_2) * 9)) = 0);
        }
        return;
      }
      if (temp_v1 != 0)
      {
        return;
      }
      temp2 = arg0 & 0xFFFF;
      *inline_fn2(temp2) = 1;
      return;
    }
    D_8021B069 = func_8014A870(0x14U, 7, (s32) inline_fn((arg0 & 0xFFFF) * 0x64));
  }
  while (0);
  if ((*((s32 *) (*((s32 *) (D_8011F350 + (D_8018BC3C * 0x64)))))) != 0)
  {
    D_8021B069 = 0;
  }
  temp_v1_3 = (arg0 & 0xFFFF) * 0x64;
  if (1)
  {
    *((D_8021E180 + 1) + inline_fn(temp_v1_3)) = 0;
    if (D_8021B069 & 0x10)
    {
      if ((*(D_8021E20B + (inline_fn(temp_v1_3) * 9))) == 0)
      {
        u16 var_v0_1;
        func_8014B854(0x3D);
        var_v0_1 = arg0;
        temp_v1_3 = var_v0_1 * 0x64;
      }
      else
      {
        u16 var_v0_2_;
        var_v0_2_ = arg0;
        temp_v1_3 = var_v0_2_ * 0x64;
      }
      
      *((D_8021E180 + 1) + inline_fn(temp_v1_3)) = 1;
      *(D_8021E20B + (inline_fn(temp_v1_3) * 9)) = 1;
      *(D_8021E20C + (inline_fn(temp_v1_3) * 9)) = 0;
      var_v1 = arg0 & 0xFFFF;
      goto block_49;
    }
    temp_v1_5 = arg0 & 0xFFFF;
    if (D_8021B069 & 0x20)
    {
      if ((((*(D_8021E20B + (inline_fn(temp_v1_5 * 0x64) * 9))) != 1) && ((var_v1_2 = arg0 & 0xFFFF, D_8021E1A2 != 0))) || ((func_8014B854(0x3A), var_v1_2 = arg0 & 0xFFFF, D_8021E1A2 != 0)))
      {
        *(D_8021E20B + (inline_fn(var_v1_2 * 0x64) * 9)) = 0;
        var_v1 = arg0 & 0xFFFF;
      }
      else
        if (D_8021B00C != 1)
      {
        if ((*((s8 *) (((s8 *) D_8021E20B) + 0))) == 0)
        {
          *((s8 *) (((s8 *) D_8021E20B) + (-0x8A))) = 2;
        }
        if ((D_8021B00C == 1) || ((*(D_8021E20B + (inline_fn((arg0 & 0xFFFF) * 0x64) * 9)) = 0, var_v1 = arg0 & 0xFFFF, D_8021B00C == 1)))
        {
          goto block_26;
        }
      }
      else
      {
        block_26:
        *((s8 *) (((s8 *) D_8021E180) + 1)) = 2;

        var_v1 = arg0 & 0xFFFF;
      }
      goto block_49;
    }
    if (D_8021B069 & 8)
    {
      temp_a0 = inline_fn(temp_v1_5 * 0x64);
      if ((*(D_8021E20B + (temp_a0 * 9))) == 0)
      {
        if ((&D_8021B00C)[temp_a0] == 1)
        {
          var_v1_3 = (temp_a0 * 4) + D_8021AFEC;
          do { var_v0_2 = (*((s8 *) var_v1_3)) + 1; } while (0);
          goto block_46;
        }
        if (D_8021E1A2 == 0)
        {
          if (D_8021B019 == 0)
          {
            D_8021B019 = 1;
            goto block_47;
          }
          var_v1_4 = arg0;
          if (D_8021E1A2 != 0)
          {
            goto block_35;
          }
        }
        else
        {
          var_v1_4 = arg0;
          block_35:
          var_v1_3 = (inline_fn(var_v1_4 * 0x64) * 4) + D_8021AFFC;

          do { var_v0_2 = (*var_v1_3) + 1; } while (0);
          goto block_46;
        }
        goto block_48;
      }
    }
    var_v1 = arg0 & 0xFFFF;
    if (D_8021B069 & 4)
    {
      volatile short var_v0_3_a1;
      temp_a0_2 = inline_fn(var_v1 * 0x64);
      var_v0_3_a1 = var_v1 * 2;
      if ((*(D_8021E20B + (temp_a0_2 * 9))) == 0)
      {
        if ((&D_8021B00C)[temp_a0_2] == 1)
        {
          do { var_v1_3 = (temp_a0_2 * 4) + D_8021AFEC; } while (0);
          goto block_45;
        }
        var_v1_5 = arg0 & 0xFFFF;
        if (D_8021E1A2 == 0)
        {
          if (D_8021B019 == 0)
          {
            D_8021B019 = 2;
            goto block_47;
          }
          var_v1_5 = arg0 & 0xFFFF;
          if (D_8021E1A2 != 0)
          {
            goto block_44;
          }
        }
        else
        {
          block_44:
          var_v1_3 = (inline_fn(var_v1_5 * 0x64) * 4) + D_8021AFFC;

          block_45:
          var_v0_2 = (*var_v1_3) - 1;

          block_46:
          *var_v1_3 = var_v0_2;

          block_47:
          func_8014B854(0x3B);
        }
        goto block_48;
      }
      temp_a0_3 = (inline_fn((((var_v0_3_a1 + var_v1) * 8) + var_v1) << 2) * 4) + D_8021AFFC;
    }
    else
    {
      s32 var_v0_3_a2;
      block_48:
      var_v1 = arg0 & 0xFFFF;

      block_49:
      var_v0_3_a2 = var_v1 * 2;

      temp_a0_3 = (inline_fn((((var_v0_3_a2 + var_v1) * 8) + var_v1) * 4) * 4) + D_8021AFFC;
    }
    var_v1_6 = arg0 & 0xFFFF;
    if (((s32) D_8021B06A) < (*temp_a0_3))
    {
      *temp_a0_3 = 0;
    }
    else
    {
      temp_v1_6 = (inline_fn(var_v1_6 * 0x64) * 4) + D_8021AFFC;
      if ((*temp_v1_6) < 0)
      {
        *temp_v1_6 = (s32) D_8021B06A;
      }
      var_v1_6 = arg0 & 0xFFFF;
    }
    temp_v1_7 = (inline_fn(var_v1_6 * 0x64) * 4) + D_8021AFEC;
    if ((*temp_v1_7) >= 2)
    {
      *temp_v1_7 = 0;
    }
    else
    {
      temp_v1_8 = (inline_fn((arg0 & 0xFFFF) * 0x64) * 4) + D_8021AFEC;
      if ((*temp_v1_8) < 0)
      {
        *temp_v1_8 = 1;
      }
    }
    temp_a0_4 = inline_fn((arg0 & 0xFFFF) * 0x64);
    if ((*((D_8021E180 + 1) + temp_a0_4)) == 2)
    {
      if (D_8021E1A2 == 0)
      {
        *(D_8021E20C + (temp_a0_4 * 9)) = 1;
      }
      var_v0_4 = arg0;
      *inline_fn2(var_v0_4) = 2;
    }
    *(D_8021B010 + inline_fn((arg0 & 0xFFFF) * 0x64)) = 0;
    do { var_s0 = 0; } while (0);
    temp_s1 = (arg0 & 0xFFFF) * 0x64;
    __repair_rows:
    {
      temp_v0 = inline_fn(temp_s1);
      temp_v1_9 = temp_v0 * 0x110;
      do { temp_v0_2 = var_s0 * 0x22; } while (0);
      temp_a0_5 = inline_fn(temp_s1);
      __index_D_8021E22F = temp_v0_2 + temp_v1_9;
      __repair_phase___base_D_8021E22F = randomSequenceTable;
      *(D_8021B010 + temp_a0_5) = (*(D_8021B010 + temp_a0_5)) + func_801FD530((s32) var_s0, func_80149F40((s32) (*((u16 *) (D_800DA260 + (temp_v0 * 0x178)))), var_s0, (s32) (*((s8 *) (((s8 *) ((temp_v0_2 + (temp_v1_9 + randomSequenceTable)) + (*(__repair_phase___base_D_8021E22F + __index_D_8021E22F)))) + 2)))) & 0xFF);
      do
      {
        do
        {
          do
          {
            do { var_s0 += 1; } while (0);
          }
          while (0);
        }
        while (0);
      }
      while (0);
    }

    if (((s32) var_s0) < 8)
    {
      goto __repair_rows;
    }
    temp_a0_6 = inline_fn((arg0 & 0xFFFF) * 0x64);
  }
  if (((u8) (*(D_80168C60 + carClassIndex))) < ((u8) (*(D_8021B010 + temp_a0_6))))
  {
    *(D_8021B014 + temp_a0_6) = 1;
    return;
  }
  *(D_8021B014 + inline_fn((arg0 & 0xFFFF) * 0x64)) = 0;
}


s32 func_80029790();
s32 func_800297C8();
s32 func_8003DE60(s32 *, u32, u8);
s32 func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_801E2F38(u8);
s32 func_801E3FE8(s16);
s32 func_801E435C(u8, u8);
s32 func_801E43A0(u8, u8, u8);
s32 func_80235074(s32, s32);
extern s32 D_8006FAF0;
extern s32 D_800DB1B8;
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_80167E62;
extern u8 D_80189CC8;
extern void *D_801C7AB0;
extern u8 D_8021E1A7;
typedef struct 
{
  u16 f0;
  u8 pad[2286];
} Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
extern s32 D_8022AD04;
extern u8 D_8022AD06[];
extern s32 D_8022AD07;
extern s32 D_8022AD08;
extern s32 D_8022AFE9;
extern s32 D_80236F30;
extern u8 D_80236F50;
extern u8 D_80236F51;
extern s32 D_8023760E;
extern u8 D_8023761C;
extern s32 D_8023761E;
extern s32 D_80237630;
extern s32 D_80237640;
extern s32 D_80237642;
extern s32 D_80237644;
extern s32 D_80237648;
extern s32 D_8023764A;
extern s32 D_80237694;
void func_80234484(s32 arg0)
{
  s32 sp2F;
  u8 sp37;
  s16 temp_a0_2;
  s16 temp_v0;
  s16 temp_v0_10;
  s16 temp_v0_11;
  s16 temp_v0_2;
  s16 temp_v0_3;
  s16 temp_v0_5;
  s16 temp_v0_6;
  s16 temp_v0_8;
  s16 temp_v0_9;
  s16 temp_v1;
  s16 temp_v1_2;
  s16 temp_v1_3;
  s16 temp_v1_4;
  s16 temp_v1_5;
  s16 var_a0_3;
  s16 var_s0;
  s16 var_s0_2;
  s16 var_s0_3;
  s16 var_s0_4;
  s16 var_s0_5;
  s16 var_s1;
  s16 var_s2;
  s16 var_s2_2;
  s16 var_s2_3;
  s16 var_s2_4;
  s16 var_s2_5;
  s16 var_s2_6;
  s16 var_s2_7;
  s16 var_s2_8;
  s16 var_s3;
  s16 var_s4;
  s16 var_s5;
  s16 var_s7;
  s16 var_v0_10;
  s16 var_v0_11;
  s16 var_v0_12;
  s16 var_v0_3;
  s16 var_v0_9;
  s16 var_v1_3;
  s16 var_v1_5;
  s32 temp_a0;
  s32 temp_a1;
  s32 temp_v0_12;
  s32 temp_v0_13;
  s32 temp_v0_16;
  s32 temp_v0_4;
  s32 temp_v0_7;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a0_4;
  s32 var_a0_5;
  s32 var_a0_6;
  s32 var_s0_6;
  s32 var_s0_7;
  s32 var_s2_9;
  s32 var_v0;
  s32 var_v0_13;
  s32 var_v0_14;
  s32 var_v0_15;
  s32 var_v0_16;
  s32 var_v0_17;
  s32 var_v0_2;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v0_7;
  s32 var_v0_8;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_4;
  s32 var_v1_6;
  s32 var_v1_7;
  u32 temp_a1_2;
  u8 temp_v0_14;
  u8 temp_v0_15;
  u8 temp_v0_17;
  void *temp_s1;
  void *temp_s1_4;
  sp2F = *((u8 *) (((char *) (&D_8006FAF0)) + 0x21));
  sp2F = (*((u8 *) (((char *) (&D_8006FAF0)) + 0x21))) - 1;
  sp37 = D_8021E1A7;
  var_s7 = 0;
  if (D_8011F32E[arg0 & 0xFFFF].f0 == 0)
  {
    var_s2 = 0;
    var_v0 = 0 << 0x10;
    do
    {
      *((var_v0 >> 0xF) + (&D_8023761E)) = 0;
      temp_v0 = var_s2 + 1;
      var_s2 = temp_v0;
      var_v0 = var_s2 << 0x10;
    }
    while (temp_v0 < 7);
    D_8011F32E[arg0 & 0xFFFF].f0 = 1;
    var_s7 = 0;
  }
  var_s2_2 = 0;
  var_v0_2 = 0 << 0x10;
  __repair_rows:
  {
    temp_a1 = var_v0_2 >> 0x10;
    temp_a0 = temp_a1 * 0x8F0;
    if ((D_8022A772[temp_a1].f0 != 0xFFFF) & (temp_a1 < 6))
    {
      temp_s1 = (char *) (var_s7 * 0xC); temp_s1 += 0x80237640;
      *((u16 *) (((char *) temp_s1) + 0)) = (u16) (*((&D_8022AD04) + temp_a0));
      *((s16 *) (((char *) temp_s1) + 2)) = (s16) (*((&D_8022AD07) + temp_a0));
      *((f32 *) (((char *) temp_s1) + 4)) = (f32) (*((&D_8022AD08) + temp_a0));
      *((s16 *) (((char *) temp_s1) + 8)) = var_s2_2;
      *((u8 *) (((char *) temp_s1) + 0xA)) = (u8) (*((&D_80237694) + temp_a1));
      var_s7 += 1;
    }
    temp_v0_2 = var_s2_2 + 1;
    var_s2_2 = temp_v0_2;
    var_v0_2 = var_s2_2 << 0x10;
  }

  if (temp_v0_2 < 7)
  {
    goto __repair_rows;
  }
  var_a0 = var_s7 << 0x10;
  var_s2_3 = 0;
  if ((var_s7 - 1) > 0)
  {
    var_v0_3 = 1;
    __repair_rows_: {
      var_s0 = var_v0_3;
      if ((var_v0_3 << 0x10) < var_a0)
      {
        var_v1 = var_s0 << 0x10;
        do
        {
          if ((*((&D_80237640) + (var_s2_3 * 0xC))) < (*((&D_80237640) + ((var_v1 >> 0x10) * 0xC))))
          {
            func_80235074(var_s2_3 & 0xFFFF, var_s0 & 0xFFFF);
          }
          temp_v0_3 = var_s0 + 1;
          var_s0 = temp_v0_3;
          var_v1 = var_s0 << 0x10;
        }
        while (temp_v0_3 < var_s7);
      }
      temp_v1 = var_s2_3 + 1;
      var_s2_3 = temp_v1;
      var_a0 = var_s7 << 0x10;
      var_v0_3 = var_s2_3 + 1;
    }
if (temp_v1 < (var_s7 - 1)) goto __repair_rows_;
  }
  var_s4 = 0;
  var_v0_4 = var_s7 << 0x10;
  var_s5 = 0;
  if (var_v0_4 > 0)
  {
    var_v1_2 = 0 << 0x10;
    do
    {
      var_v0_5 = var_s5 << 0x10;
      loop_20:
      temp_v0_4 = var_v0_5 >> 0x10;

      if (((*((&D_80237640) + ((var_v1_2 >> 0x10) * 0xC))) == (*((&D_80237640) + (temp_v0_4 * 0xC)))) & (temp_v0_4 < var_s7))
      {
        var_s5 += 1;
        var_v0_5 = var_s5 << 0x10;
        goto loop_20;
      }
      var_s2_4 = var_s4;
      var_v1_3 = var_s2_4;
      var_a0_2 = var_s5 << 0x10;
      loop_30:
      temp_v0_5 = var_s2_4 + 1;

      if (var_v1_3 < (var_s5 - 1))
      {
        var_s0_2 = temp_v0_5;
        if ((temp_v0_5 << 0x10) < var_a0_2)
        {
          var_v0_6 = var_s0_2 << 0x10;
          do
          {
            if ((*((&D_80237642) + (var_s2_4 * 0xC))) < (*((&D_80237642) + ((var_v0_6 >> 0x10) * 0xC))))
            {
              func_80235074(var_s2_4 & 0xFFFF, var_s0_2 & 0xFFFF);
            }
            temp_v0_6 = var_s0_2 + 1;
            var_s0_2 = temp_v0_6;
            var_v0_6 = var_s0_2 << 0x10;
          }
          while (temp_v0_6 < var_s5);
        }
        temp_v1_2 = var_s2_4 + 1;
        var_s2_4 = temp_v1_2;
        var_v1_3 = temp_v1_2;
        var_a0_2 = var_s5 << 0x10;
        goto loop_30;
      }
      var_a0_3 = var_s4;
      var_s3 = var_s4;
      if (var_s4 < var_s5)
      {
        var_v1_4 = var_a0_3 << 0x10;
        do
        {
          var_v0_7 = var_s3 << 0x10;
          loop_35:
          temp_v0_7 = var_v0_7 >> 0x10;

          if (((*((&D_80237642) + ((var_v1_4 >> 0x10) * 0xC))) == (*((&D_80237642) + (temp_v0_7 * 0xC)))) & (var_s5 > temp_v0_7))
          {
            ++var_s3;
            var_v0_7 = var_s3 << 0x10;
            goto loop_35;
          }
          var_s1 = var_a0_3;
          var_v1_5 = var_a0_3;
          var_a0_4 = var_s3 << 0x10;
          loop_45:
          temp_v0_8 = var_s1 + 1;

          if (var_v1_5 < (var_s3 - 1))
          {
            var_s0_3 = temp_v0_8;
            if ((temp_v0_8 << 0x10) < var_a0_4)
            {
              var_v0_8 = var_s0_3 << 0x10;
              do
              {
                if ((*((&D_80237644) + ((var_v0_8 >> 0x10) * 0xC))) < (*((&D_80237644) + (var_s1 * 0xC))))
                {
                  func_80235074(var_s1 & 0xFFFF, var_s0_3 & 0xFFFF);
                }
                temp_v0_9 = var_s0_3 + 1;
                var_s0_3 = temp_v0_9;
                var_v0_8 = var_s0_3 << 0x10;
              }
              while (temp_v0_9 < var_s3);
            }
            temp_v1_3 = var_s1 + 1;
            var_s1 = temp_v1_3;
            var_v1_5 = temp_v1_3;
            var_a0_4 = var_s3 << 0x10;
            goto loop_45;
          }
          var_a0_3 = var_s3;
          var_v1_4 = var_a0_3 << 0x10;
        }
        while (var_s5 > var_a0_3);
      }
      var_s4 = var_s5;
      var_v1_2 = var_s4 << 0x10;
    }
    while (var_s7 > var_s4);
    var_v0_4 = var_s7 << 0x10;
  }
  var_a0_5 = var_v0_4;
  var_s2_5 = 0;
  if (((var_v0_4 >> 0x10) - 1) > 0)
  {
    var_v0_9 = 1;
    do
    {
      var_s0_4 = var_v0_9;
      if ((var_v0_9 << 0x10) < var_a0_5)
      {
        var_v1_6 = var_s0_4 << 0x10;
        do
        {
          if (((u8) (*((&D_8023764A) + (var_s2_5 * 0xC)))) < ((u8) (*((&D_8023764A) + ((var_v1_6 >> 0x10) * 0xC)))))
          {
            func_80235074(var_s2_5 & 0xFFFF, var_s0_4 & 0xFFFF);
          }
          temp_v0_10 = var_s0_4 + 1;
          var_s0_4 = temp_v0_10;
          var_v1_6 = var_s0_4 << 0x10;
        }
        while (temp_v0_10 < var_s7);
      }
 do { do { temp_v1_4 = var_s2_5 + 1; var_s2_5 = temp_v1_4; var_a0_5 = var_s7 << 0x10; } while (0); } while (0);
      var_v0_9 = var_s2_5 + 1;
    }
    while (temp_v1_4 < (var_s7 - 1));
  }
  var_a0_6 = var_s7 << 0x10;
  var_s2_6 = 0;
  if ((var_s7 - 1) > 0)
  {
    var_v0_10 = 1;
    do
    {
      var_s0_5 = var_v0_10;
      if ((var_v0_10 << 0x10) < var_a0_6)
      {
        do
        {
          if ((*((&D_8022AFE9) + ((*((&D_80237648) + (var_s2_6 * 0xC))) * 0x8F0))) == 5)
          {
            func_80235074(var_s2_6 & 0xFFFF, var_s0_5 & 0xFFFF);
          }
          var_v0_11 = var_s0_5 + 1;
          var_s0_5 = var_v0_11;
        }
        while (var_v0_11 < var_s7);
      }
      temp_v1_5 = var_s2_6 + 1;
      var_s2_6 = temp_v1_5;
      var_a0_6 = var_s7 << 0x10;
      var_v0_10 = var_s2_6 + 1;
    }
    while (temp_v1_5 < (var_s7 - 1));
  }
  var_s0_6 = 0;
  var_s2_7 = 0;
  if ((var_s7 << 0x10) > 0)
  {
    do
    {
      temp_s1 = (var_s2_7 * 0xC) + (&D_80237640);
      var_v0_12 = var_s2_7 + 1;
      if ((*((u8 *) (((char *) temp_s1) + 0xA))) == 0)
      {
        *((D_8022AD06) + ((*((u16 *) (((char *) temp_s1) + 8))) * 0x8F0)) = var_s0_6 + 1;
        var_v0_12 = var_s2_7 + 1;
      }
      var_s2_7 = var_v0_12;
      var_s0_6 += 1;
    }
    while (var_v0_12 < var_s7);
  }
  var_s2_8 = 0;
  var_v0_13 = 0 << 0x10;
  do
  {
    temp_v0_12 = var_v0_13 >> 0xF;
    *(temp_v0_12 + (&D_8023761E)) = *(temp_v0_12 + (&D_8023760E));
    temp_v0_11 = var_s2_8 + 1;
    var_s2_8 = temp_v0_11;
    var_v0_13 = var_s2_8 << 0x10;
  }
  while (temp_v0_11 < 7);
  temp_v0_13 = var_s7 - 1;
  var_s2_9 = temp_v0_13;
  if (!(temp_v0_13 & 0x8000))
  {
    var_v1_7 = var_s2_9 << 0x10;
    do
    {
      temp_s1 = ((var_v1_7 >> 0x10) * 0xC) + (&D_80237640);
      temp_a0_2 = *((&D_8022AD04) + ((*((u16 *) (((char *) temp_s1) + 8))) * 0x8F0));
      if ((temp_a0_2 >= 4) || ((((var_v0_14 = var_s2_9 - 1, D_80189CC8 == 3)) && ((var_v0_14 = var_s2_9 - 1, (*((u8 *) (((char *) D_801C7AB0) + 1))) == 6))) && ((var_v0_14 = var_s2_9 - 1, (temp_a0_2 < 2) == 0))))
      {
        var_v0_14 = var_s2_9 - 1;
        if ((*((u8 *) (((char *) temp_s1) + 0xA))) == 0)
        {
          *((u8 *) (((char *) temp_s1) + 0xA)) = 1U;
          *((&D_80237694) + (*((u16 *) (((char *) temp_s1) + 8)))) = 1;
          if ((*((&D_8022AFE9) + ((*((u16 *) (((char *) temp_s1) + 8))) * 0x8F0))) == 5)
          {
            D_80236F51 = var_s7 - D_80167E62;
            D_80167E62 += 1;
          }
          else
          {
            temp_v0_14 = D_8023761C + 1;
            D_8023761C = temp_v0_14;
            D_80236F51 = temp_v0_14;
          }
          *((D_80236F51 * 2) + (&D_80237630)) = *((u16 *) (((char *) temp_s1) + 8));
          temp_v0_15 = *((&D_8022AFE9) + ((*((u16 *) (((char *) temp_s1) + 8))) * 0x8F0));
          if (((temp_v0_15 == 0) | (temp_v0_15 == 5)) != 0)
          {
            D_80236F50 += 1;
          }
          if ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) == D_80236F50)
          {
            if (D_80189CC8 != 0)
            {
              if (D_80189CC8 == 2)
              {
                var_v0_15 = var_s7 << 0x10;
                if ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) == 1)
                {
                  goto block_88;
                }
              }
              else
              {
                goto block_90;
              }
            }
            else
            {
              block_88:
              if ((*((&D_8022AFE9) + ((*((u16 *) (((char *) temp_s1) + 8))) * 0x8F0))) != 5)
              {
                func_801E3FE8(*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108)));
              }

              block_90:
              var_v0_15 = var_s7 << 0x10;

              if ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) == 1)
              {
                var_v0_15 = var_s7 << 0x10;
                if (D_80189CC8 == 2)
                {
                  var_v0_15 = var_s7 << 0x10;
                  if ((*((&D_8022AFE9) + ((*((u16 *) (((char *) temp_s1) + 8))) * 0x8F0))) == 0)
                  {
                    temp_a1_2 = func_801E435C(sp2F, sp37) & 0xFF;
                    var_v0_15 = var_s7 << 0x10;
                    if (((u8) D_80236F51) < temp_a1_2)
                    {
                      func_8003DE60(&D_80236F30, temp_a1_2, D_80236F51);
                      func_801E43A0(sp2F, sp37, D_80236F51);
                      func_80029790();
                      if (func_801E2F38(sp2F) != 0)
                      {
                        func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x16, 0, 0x66);
                      }
                      func_800297C8();
                      var_v0_15 = var_s7 << 0x10;
                    }
                  }
                }
              }
            }
            if ((var_v0_15 >> 0x10) >= 7)
            {
              var_s7 = 6;
            }
            var_v0_16 = var_s7 - 1;
            var_s0_7 = var_v0_16;
            var_v0_14 = var_s2_9 - 1;
            if (!(var_v0_16 & 0x8000))
            {
              var_v0_16 = var_s0_7 << 0x10;
              do
              {
                temp_s1_4 = ((var_v0_16 >> 0x10) * 0xC) + (&D_80237640);
                var_v0_17 = var_s0_7 - 1;
                if ((*((u8 *) (((char *) temp_s1_4) + 0xA))) == 0)
                {
                  *((&D_80237694) + (*((u16 *) (((char *) temp_s1_4) + 8)))) = 1;
                  *((u8 *) (((char *) temp_s1_4) + 0xA)) = 1U;
                  if ((*((&D_8022AFE9) + ((*((u16 *) (((char *) temp_s1_4) + 8))) * 0x8F0))) == 5)
                  {
                    D_80236F51 = var_s7 - D_80167E62;
                    D_80167E62 += 1;
                  }
                  else
                  {
                    temp_v0_17 = D_8023761C + 1;
                    D_8023761C = temp_v0_17;
                    D_80236F51 = temp_v0_17;
                  }
                  *((D_80236F51 * 2) + (&D_80237630)) = *((u16 *) (((char *) temp_s1_4) + 8));
                  var_v0_17 = var_s0_7 - 1;
                }
                var_s0_7 = var_v0_17;
                var_v0_16 = var_s0_7 << 0x10;
              }
              while (!(var_v0_17 & 0x8000));
              goto block_107;
            }
          }
          else
          {
            block_107:
            var_v0_14 = var_s2_9 - 1;

          }
        }
      }
      var_s2_9 = var_v0_14;
      var_v1_7 = var_s2_9 << 0x10;
    }
    while (!(var_v0_14 & 0x8000));
  }
}

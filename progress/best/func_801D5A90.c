s16 func_80027EE0();
s32 func_8002D030();
s32 func_801D63F4();
s32 func_801D663C(void);
s32 n_alSndpGetState();
s32 n_alSndpSetFXMix();
s32 n_alSndpSetPan();
s32 n_alSndpSetPitch(f32);
s32 n_alSndpSetVol();
s32 n_alSndpStop();
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern char D_801D75E4[];
typedef struct 
{
  u16 f0;
  u8 pad[10];
} Slot_801D75E6;
extern Slot_801D75E6 D_801D75E6[];
extern char D_801D75E8[];
extern f64 D_801D7B10;
extern char D_801D7DF0[];
extern char D_801D7DF1[];
extern char D_801D7DF2[];
extern char D_801D7DF4[];
extern char D_801D7DFC[];
extern char D_801D7E00[];
extern char D_801D7E04[];
extern char D_801D7E06[];
extern char D_801D7E08[];
extern char D_801D7E09[];
extern char D_801D7E0C[];
extern char D_801D7E12[];
extern char D_801D7E14[];
extern char D_801D7E16[];
extern char D_801D7E18[];
extern u8 D_8021F029;
void func_801D5A90(s32 arg0_in)
{
  int __repair_constant = 0x40;
  s32 arg0;
  u8 *__base_D_801D75E4;
  s32 __index_D_801D75E4;
  s32 __repair_phase___index_D_801D75E4;
  f32 temp_fa0;
  f32 var_fs0;
  s16 temp_a0;
  s16 temp_a0_2;
  s16 temp_s1;
  s16 temp_v0_4;
  s16 temp_v0_5;
  s16 var_a0;
  s16 __repair_result_var_a0;
  s16 var_a0_2;
  s16 var_a2;
  s32 temp_a1;
  s32 temp_s0;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_v0_3;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 temp_v1_2;
  s32 temp_v1_4;
  s32 temp_v1_5;
  s32 temp_v1_6;
  s32 temp_v1_7;
  s32 var_a0_3;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_v0;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v0_6;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s8 temp_v1_3;
  u16 temp_v0;
  u16 temp_v0_2;
  u16 temp_v1;
  u32 var_v0_2;
  u8 temp_a0_3;
  u8 temp_a0_4;
  void *var_a1;
  __base_D_801D75E4 = 0;
  temp_v1 = D_8011F32E[arg0 & 0xFFFF].f0;
  arg0 = arg0_in;
  if (temp_v1 != 0)
  {
    var_s2 = 0;
    if (temp_v1 != 1)
    {
      return;
    }
    var_v0 = 0 & 0xFFFF;
    do
    {
      temp_v1_2 = var_v0 * 0x2C;
      var_v0_3 = var_s2 & 0xFFFF;
      if (((*(D_801D7DF1 + temp_v1_2)) != 0) || ((*(D_801D7DF1 + temp_v1_2) = *(D_801D7DF0 + temp_v1_2), *(D_801D7DF0 + temp_v1_2) = 0, var_v0_3 = var_s2 & 0xFFFF, (*(D_801D7DF1 + temp_v1_2)) != 0)))
      {
        temp_v1_3 = *(D_801D7DF1 + (var_v0_3 * 0x2C));
        if (temp_v1_3 != 2)
        {
          if (temp_v1_3 < 3)
          {
            if (temp_v1_3 != 1)
            {
              var_s2 += 1;
              goto block_31;
            }
            temp_s0 = (var_s2 & 0xFFFF) * 0x2C;
            temp_s1 = *((s16 *) ((D_801D7DF4 - 4) + temp_s0));
            if (temp_s1 == (-1))
            {
              __repair_result_var_a0 = func_80027EE0(*((u16 *) (D_801D7DF2 + temp_s0)));
              var_a2 = __repair_result_var_a0;
              if (var_a2 != temp_s1)
              {
                *(D_801D7DF1 + temp_s0) = 0;
                *((s16 *) (D_801D7DF4 + temp_s0)) = __repair_result_var_a0;
                *((s16 *) (D_801D7E04 + temp_s0)) = *((u16 *) (D_801D7DF2 + temp_s0));
                var_a1 = temp_s0 + D_801D7DF0;
                *((f32 *) (((char *) var_a1) + 0x10)) = 1.0f;
                *((f32 *) (D_801D7E0C + temp_s0)) = 1.0f;
                *((s8 *) (((char *) var_a1) + 0x18)) = __repair_constant;
                *(D_801D7E14 + temp_s0) = __repair_constant;
                *((s8 *) (((char *) var_a1) + 0x19)) = 0;
                *((D_801D7E14 + 1) + temp_s0) = 0;
                __index_D_801D75E4 = (*((u16 *) (D_801D7DF2 + temp_s0))) * 0xC;
                __base_D_801D75E4 = D_801D75E4;
                *(D_801D7E16 + temp_s0) = *(__base_D_801D75E4 + __index_D_801D75E4);
                *((s16 *) (D_801D7E18 + temp_s0)) = *((u16 *) (D_801D75E8 + ((*((u16 *) (D_801D7DF2 + temp_s0))) * 0xC)));
                var_v1 = var_s2 & 0xFFFF;
                if ((*((u16 *) (D_801D7E06 + temp_s0))) == 0)
                {
                  temp_v0 = D_801D75E6[*((u16 *) (D_801D7DF2 + temp_s0))].f0;
                  *((u16 *) (((char *) var_a1) + 0x16)) = temp_v0;
                  *((s16 *) (D_801D7E12 + temp_s0)) = temp_v0;
                  var_fs0 = (((f32) (*((u16 *) (D_801D7E06 + temp_s0)))) * ((f32) D_8021F029)) * 0.047619f;
                  var_a0_2 = var_a2;
                }
                else
                {
                  goto block_25;
                }
                goto block_26;
              }
              goto block_30;
            }
            __repair_phase___index_D_801D75E4 = (var_s2 & 0xFFFF) * 0x2C;
            if (((u8) (*(D_801D7E16 + __repair_phase___index_D_801D75E4))) >= ((u8) (*(D_801D75E4 + ((*((u16 *) (D_801D7DF2 + __repair_phase___index_D_801D75E4))) * 0xC)))))
            {
              var_s2 += 1;
              func_8002D030(*((s16 *) (D_801D7DF4 + __repair_phase___index_D_801D75E4)));
              n_alSndpStop();
              *(D_801D7DF1 + __repair_phase___index_D_801D75E4) = 2;
              *((u16 *) (D_801D7E06 + __repair_phase___index_D_801D75E4)) = 0;
              var_v0_2 = var_s2 & 0xFFFF;
            }
            else
            {
              *(D_801D7DF1 + ((var_s2 & 0xFFFF) * 0x2C)) = 0;
              var_s2 += 1;
              goto block_31;
            }
          }
          else
          {
            if (temp_v1_3 != 3)
            {
              if (temp_v1_3 != 4)
              {
                var_s2 += 1;
              }
              else
              {
                temp_v1_4 = (var_s2 & 0xFFFF) * 0x2C;
                if ((*((s32 *) (D_801D7DFC + temp_v1_4))) == 0)
                {
                  *(D_801D7DF1 + temp_v1_4) = 0;
                  *((s16 *) (D_801D7DF4 + temp_v1_4)) = -1;
                }
                goto block_30;
              }
              goto block_31;
            }
            __index_D_801D75E4 = (var_s2 & 0xFFFF) * 0x2C;
            temp_a0 = *((s16 *) (D_801D7DF4 + __index_D_801D75E4));
            var_s2 += 1;
            func_8002D030(temp_a0);
            n_alSndpStop();
            *(D_801D7DF1 + __index_D_801D75E4) = 4;
            var_v0_2 = var_s2 & 0xFFFF;
          }
        }
        else
        {
          temp_s0_4 = (var_s2 & 0xFFFF) * 0x2C;
          if (((*((s32 *) (D_801D7DFC + temp_s0_4))) == 0) && ((var_a0 = func_80027EE0(*((u16 *) (D_801D7DF2 + temp_s0_4))), var_a2 = var_a0, var_a2 != (-1))))
          {
            *(D_801D7DF1 + temp_s0_4) = 0;
            *((s16 *) (D_801D7DF4 + temp_s0_4)) = var_a0;
            *((s16 *) (D_801D7E04 + temp_s0_4)) = *((u16 *) (D_801D7DF2 + temp_s0_4));
            var_a1 = temp_s0_4 + D_801D7DF0;
            *((f32 *) (((char *) var_a1) + 0x10)) = 1.0f;
            *((f32 *) (D_801D7E0C + temp_s0_4)) = 1.0f;
            *((s8 *) (((char *) var_a1) + 0x18)) = __repair_constant;
            *(D_801D7E14 + temp_s0_4) = __repair_constant;
            *((s8 *) (((char *) var_a1) + 0x19)) = 0;
            *((D_801D7E14 + 1) + temp_s0_4) = 0;
            *(D_801D7E16 + temp_s0_4) = *(D_801D75E4 + ((*((u16 *) (D_801D7DF2 + temp_s0_4))) * 0xC));
            *((s16 *) (D_801D7E18 + temp_s0_4)) = *((u16 *) (D_801D75E8 + ((*((u16 *) (D_801D7DF2 + temp_s0_4))) * 0xC)));
            var_v1 = var_s2 & 0xFFFF;
            if ((*((u16 *) (D_801D7E06 + temp_s0_4))) == 0)
            {
              temp_v0_2 = D_801D75E6[*((u16 *) (D_801D7DF2 + temp_s0_4))].f0;
              *((u16 *) (((char *) var_a1) + 0x16)) = temp_v0_2;
              *((s16 *) (D_801D7E12 + temp_s0_4)) = temp_v0_2;
              var_fs0 = (((f32) (*((u16 *) (D_801D7E06 + temp_s0_4)))) * ((f32) D_8021F029)) * 0.047619f;
              var_a0_2 = var_a2;
            }
            else
            {
              block_25:
              temp_v0_3 = var_v1 * 0x2C;

              *((s16 *) (D_801D7E12 + temp_v0_3)) = *((u16 *) (D_801D7E06 + temp_v0_3));
              var_fs0 = (((f32) (*((u16 *) (D_801D7E06 + temp_v0_3)))) * ((f32) D_8021F029)) * 0.047619f;
              var_a0_2 = var_a0;
            }
            block_26:
            var_s2 += 1;

            func_8002D030(var_a0_2, var_a1, var_a2);
            n_alSndpSetVol((s16) ((s32) var_fs0));
            var_v0_2 = var_s2 & 0xFFFF;
          }
          else
          {
            goto block_30;
          }
        }
      }
      else
      {
        block_30:
        var_s2 += 1;

        block_31:
        var_v0_2 = var_s2 & 0xFFFF;

      }
      var_v0 = var_s2 & 0xFFFF;
    }
    while (var_v0_2 < 8U);
    var_s2_2 = 0;
    var_a0_3 = 0 & 0xFFFF;
    do
    {
      temp_a1 = var_a0_3 * 0x2C;
      if ((*((s16 *) (D_801D7DF4 + temp_a1))) != (-1))
      {
        temp_v0_4 = *((s16 *) (D_801D7E18 + temp_a1));
        if (temp_v0_4 > 0)
        {
          temp_v0_5 = temp_v0_4 - 1;
          *((s16 *) (((char *) (temp_a1 + D_801D7DF0)) + 0x28)) = temp_v0_5;
          var_v1_2 = var_s2_2 & 0xFFFF;
          if ((temp_v0_5 << 0x10) <= 0)
          {
            func_801D663C();
            goto block_38;
          }
        }
        else
        {
          block_38:
          var_v1_2 = var_s2_2 & 0xFFFF;

        }
        temp_s0_5 = var_v1_2 * 0x2C;
        func_8002D030(*((s16 *) (D_801D7DF4 + temp_s0_5)));
        temp_v0_6 = n_alSndpGetState();
        *((s32 *) (((char *) (temp_s0_5 + D_801D7DF0)) + 0xC)) = temp_v0_6;
        if (temp_v0_6 == 1)
        {
          temp_fa0 = *((f32 *) (D_801D7E00 + temp_s0_5));
          var_v0_4 = var_s2_2 & 0xFFFF;
          if (temp_fa0 != (*((f32 *) (D_801D7E0C + temp_s0_5))))
          {
            do
            {
              n_alSndpSetPitch((f32) (((f64) temp_fa0) * D_801D7B10));
            }
            while (0);
            var_v0_4 = var_s2_2 & 0xFFFF;
          }
          temp_v1_5 = var_v0_4 * 0x2C;
          temp_a0_2 = *((u16 *) (D_801D7E06 + temp_v1_5));
          var_v0_5 = var_s2_2 & 0xFFFF;
          if (temp_a0_2 != (*((s16 *) (D_801D7E12 + temp_v1_5))))
          {
            n_alSndpSetVol((s16) ((s32) ((((f32) temp_a0_2) * ((f32) D_8021F029)) * 0.047619f)));
            var_v0_5 = var_s2_2 & 0xFFFF;
          }
          if (var_s2)
          {
            temp_v1_6 = var_v0_5 * 0x2C;
            temp_a0_3 = *(D_801D7E08 + temp_v1_6);
            var_v0_6 = var_s2_2 & 0xFFFF;
          }
          else
          {
            temp_v1_6 = var_v0_5 * 0x2C;
            temp_a0_3 = *(D_801D7E08 + temp_v1_6);
            var_v0_6 = var_s2_2 & 0xFFFF;
          }
          if (temp_a0_3 != (*(D_801D7E14 + temp_v1_6)))
          {
            n_alSndpSetPan(temp_a0_3);
            var_v0_6 = var_s2_2 & 0xFFFF;
          }
          temp_v1_7 = var_v0_6 * 0x2C;
          temp_a0_4 = *(D_801D7E09 + temp_v1_7);
          var_v1_3 = var_s2_2 & 0xFFFF;
          if (temp_a0_4 != (*((D_801D7E14 + 1) + temp_v1_7)))
          {
            n_alSndpSetFXMix(temp_a0_4);
            goto block_48;
          }
        }
        else
        {
          block_48:
          var_v1_3 = var_s2_2 & 0xFFFF;

        }
        temp_v0_7 = var_v1_3 * 0x2C;
        *((f32 *) (D_801D7E0C + (var_v1_3 * 0x2C))) = *((f32 *) (D_801D7E00 + (var_v1_3 * 0x2C)));
        *((s16 *) (D_801D7E12 + (var_v1_3 * 0x2C))) = *((u16 *) (D_801D7E06 + (var_v1_3 * 0x2C)));
        *(D_801D7E14 + (var_v1_3 * 0x2C)) = *(D_801D7E08 + (var_v1_3 * 0x2C));
        *((D_801D7E14 + 1) + (var_v1_3 * 0x2C)) = *(D_801D7E09 + temp_v0_7);
      }
      var_s2_2 += 1;
      var_a0_3 = var_s2_2 & 0xFFFF;
    }
    while (((u32) (var_s2_2 & 0xFFFF)) < 8U);
    return;
  }
  func_801D63F4();
  D_8011F32E[arg0 & 0xFFFF].f0 = 1;
}


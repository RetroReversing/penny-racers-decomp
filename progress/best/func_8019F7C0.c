extern float D_801C6BCC;
extern float D_801C6BC8;
extern float D_801C6BC0;
extern float D_801C6BC4;
extern short D_800DD2C4;
extern float D_801C6BD0;
f32 __cosf();
f32 __sinf();
extern char D_800DB1B8[];
extern char D_8011F32E[];
extern f32 D_801C57C0;
extern f32 D_801C57C4;
extern u8 D_801C57C8;
extern s8 D_801C57C9;
extern u8 D_801C6B40;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7074;
extern char D_801E9980[];
extern char D_801E9984[];
extern char D_801E9988[];
extern char D_801E998C[];
extern char D_801E9998[];
extern char D_801E999C[];
extern char D_801E99A0[];
extern char D_801E99A4[];
extern char D_801E99A8[];
extern char D_801E99AC[];
extern char D_801E99C4[];
extern char D_80221080[];
extern char D_80221084[];
extern char D_80221088[];
extern char D_8022108C[];
extern char D_80221090[];
extern char D_80221094[];
void func_8019F7C0(s32 arg0)
{
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_ft1;
  f32 temp_ft1_2;
  f32 temp_fv0;
  register f32 temp_fv0_2;
  f32 var_fv1;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_a1_3;
  s32 temp_s1;
  int temp_v0;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 __repair_phase_temp_v1_5;
  s32 var_a0;
  volatile unsigned int pad;
  s32 var_condition_bit;
  s32 var_s1;
  unsigned char var_v0;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v0_5;
  s32 var_v1;
  s8 var_v0_2;
  u32 temp_a1_4;
  u32 temp_a1_5;
  var_a0 = arg0;
  if (D_801C57C9 == 0)
  {
    if ((*((u16 *) (D_8011F32E + (D_801C7074 * 0x64)))) != 0x14)
    {
      temp_a1 = (var_a0 & 0xFFFF) * 0x70;
      if ((*((s32 *) (D_801E99A8 - (-temp_a1)))) == 1)
      {
        var_v0 = var_a0 & 0xFFFF;
        if ((*((s32 *) (D_801E99AC + temp_a1))) == 0)
        {
          var_v0 = var_a0 & 0xFFFF;
          if ((*((s32 *) (D_801E9998 + temp_a1))) == 0)
          {
            var_v0 = var_a0 & 0xFFFF;
            if ((*((s32 *) (D_801E999C + temp_a1))) == 0)
            {
              if (D_801C6BD0 || D_801C6BCC)
              {
                D_801C57C9 = 0xA;
              }
              else
              {
                D_801C57C9 = 0xA;
              }
              if (D_801C6BCC != 360.0f)
              {
                if (var_a0)
                {
                  var_v0 = var_a0 & 0xFFFF;
                }
                else
                {
                  var_v0 = var_a0 & 0xFFFF;
                }
              }
              else
              {
                do
                {
                  D_801C6BCC = 0.0f;
                  goto block_23;
                }
                while (0);
              }
            }
          }
        }
      }
      else
      {
        temp_a1_2 = (var_a0 & 0xFFFF) * 0x70;
        var_v0 = var_a0 & 0xFFFF;
        if ((*((s32 *) (D_801E99AC + temp_a1_2))) == 1)
        {
          var_v0 = var_a0 & 0xFFFF;
          if ((*((s32 *) (D_801E99A8 + temp_a1_2))) == 0)
          {
            var_v0 = var_a0 & 0xFFFF;
            if ((*((s32 *) (D_801E9998 + temp_a1_2))) == 0)
            {
              var_v0 = var_a0 & 0xFFFF;
              if ((*((s32 *) (D_801E999C + temp_a1_2))) == 0)
              {
                D_801C57C9 = -0xA;
                if (D_801C6BCC == 0.0f)
                {
                  D_801C6BCC = 360.0f;
                }
                goto block_23;
              }
            }
          }
        }
      }
    }
    else
    {
      goto block_23;
    }
  }
  else
  {
    if (D_801C57C9 > 0)
    {
      D_801C6BCC = (f32) (D_801C6BCC + 9.0f);
      D_801C57C9 = D_801C57C9 - 1;
      goto block_22;
    }
    if ((D_801C57C9 + 1) <= 0)
    {
      D_801C6BCC = (f32) (D_801C6BCC - 9.0f);
      D_801C57C9 = D_801C57C9 + 1;
      block_22:
      ;

      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
    }
    block_23:
    var_v0 = var_a0 & 0xFFFF;

  }
  temp_a1_3 = var_v0 * 0x70;
  if ((*((s32 *) (D_801E99C4 + temp_a1_3))) != 0)
  {
    if ((*((u16 *) (D_8011F32E + (D_801C7074 * 0x64)))) != 0x14)
    {
      if ((*((s32 *) (D_801E99A0 + temp_a1_3))) != 0)
      {
        temp_fv0 = D_801C6BD0 + 1.0f;
        var_fv1 = 85.0f;
        var_condition_bit = temp_fv0 > 85.0f;
        D_801C6BD0 = temp_fv0;
        goto block_30;
      }
      if ((*((s32 *) (D_801E99A4 + ((56 * (var_a0 & 0xFFFF)) * 2)))) != 0)
      {
        temp_fv0_2 = D_801C6BD0 - 1.0f;
        var_fv1 = 5.0f;
        var_condition_bit = temp_fv0_2 < 5.0f;
        D_801C6BD0 = temp_fv0_2;
        block_30:
        if (var_condition_bit)
        {
          D_801C6BD0 = var_fv1;
        }

      }
    }
  }
  else
    if ((*((u16 *) (D_8011F32E + (D_801C7074 * 0x64)))) != 0x14)
  {
    s32 temp_v1_5_arm;
    temp_v1 = (var_a0 & 0xFFFF) * 0x70;
    temp_a1_4 = *((s32 *) (D_801E99A0 + temp_v1));
    if ((((temp_a1_4 != 0) && ((*((s32 *) (D_801E99A4 + temp_v1))) == 0)) && ((*((s32 *) (D_801E9998 + temp_v1))) == 0)) && ((*((s32 *) (D_801E999C + temp_v1))) == 0))
    {
      if (D_801C6BC8 > 1000.0f)
      {
        if (temp_a1_4 >= 0x15U)
        {
          D_801C6BC8 = (f32) (D_801C6BC8 - 20.0f);
        }
        else
        {
          D_801C6BC8 = (f32) (D_801C6BC8 - 5.0f);
        }
        D_801C57C8 = 1;
        if (D_801C6BC8 < 1000.0f)
        {
          D_801C6BC8 = 1000.0f;
        }
      }
      var_v1 = var_a0 & 0xFFFF;
    }
    else
    {
      var_v1 = var_a0 & 0xFFFF;
    }
    temp_v1_2 = var_v1 * 0x70;
    temp_a1_5 = *((s32 *) (D_801E99A4 + temp_v1_2));
    __repair_phase_temp_v1_5 = var_a0 & 0xFFFF;
    if (temp_a1_5 != 0)
    {
      var_v0_3 = var_a0 & 0xFFFF;
      if ((*((s32 *) (D_801E99A0 + temp_v1_2))) == 0)
      {
        var_v0_3 = var_a0 & 0xFFFF;
        if ((*((s32 *) (D_801E9998 + temp_v1_2))) == 0)
        {
          if (((*((s32 *) (D_801E999C + temp_v1_2))) == 0) && (D_801C6BC8 < 5000.0f))
          {
            if ((temp_a1_5 + 1) > 0x15U)
            {
              D_801C6BC8 = (f32) (D_801C6BC8 + 20.0f);
            }
            else
            {
              D_801C6BC8 = (f32) (D_801C6BC8 + 5.0f);
            }
            D_801C57C8 = 1;
            if (D_801C6BC8 > 5000.0f)
            {
              D_801C6BC8 = 5000.0f;
            }
          }
          var_v0_3 = var_a0 & 0xFFFF;
        }
      }
    }
    __repair_phase_temp_v1_5 = __repair_phase_temp_v1_5 * 0x70;
    var_v0_4 = var_a0 & 0xFFFF;
    if ((((*((s32 *) (D_801E99A0 + __repair_phase_temp_v1_5))) == 0) || ((var_v0_4 = var_a0 & 0xFFFF, (*((s32 *) (D_801E99A4 + __repair_phase_temp_v1_5))) != 0))) && (((((temp_v1_4 = var_v0_4 * 0x70, var_a0 = 1, (*((s32 *) (D_801E9988 + (var_v0_4 * 0x70)))) == 1)) || ((*((s32 *) (D_801E998C + (var_v0_4 * 0x70)))) == 1)) || ((*((s32 *) (D_801E9984 + (var_v0_4 * 0x70)))) == 1)) || ((*((s32 *) (D_801E9980 + (var_v0_4 * 0x70)))) == 1)))
    {
      D_801C57C8 = 0;
    }
  }
  if (5000.0f != D_801C6BC8)
  {
    s32 var_v0_5_arm;
    if (D_801C57C8 != 1)
    {
      *((f32 *) (&D_801C6BC0)) = (f32) D_801C7068;
      *((f32 *) (&D_801C6BC4)) = (f32) D_801C6BB9;
    }
    temp_ft1 = (f32) D_801C7068;
    if ((*((f32 *) (&D_801C6BC0))) != temp_ft1)
    {
      do
      {
        if (D_801C57C0 == 0.0f)
        {
          D_801C57C0 = (temp_ft1 - (*((f32 *) (&D_801C6BC0)))) / 30.0f; D_801C6B40 = 0;
        }
        else
        {
          if (D_801C6BD0)
          {
            var_a0 = (s32) (&D_801C6BC0);
            *((s32 *) ((s32) (&D_801C6BC0))) = (f32) ((*((s32 *) ((s32) (*((f32 *) (&D_801C6BC0)))))) + D_801C57C0);
          }
          else
          {
            var_a0 = (s32) (&D_801C6BC0);
            *((s32 *) ((s32) (&D_801C6BC0))) = (f32) ((*((s32 *) ((s32) (*((f32 *) (&D_801C6BC0)))))) + D_801C57C0);
          }
          if (D_801C6B40 == 0x1E)
          {
            *((s32 *) ((s32) (&D_801C6BC0))) = (f32) D_801C7068; D_801C57C0 = 0.0f; D_801C57C8 = 0;
          }
        }
      }
      while (0);
    }
    temp_ft1_2 = (f32) D_801C6BB9;
    if ((*((f32 *) (&D_801C6BC4))) != temp_ft1_2)
    {
      if (D_801C57C4 == 0.0f)
      {
        D_801C57C4 = (temp_ft1_2 - (*((f32 *) (&D_801C6BC4)))) / 30.0f;
        D_801C6B40 = 0;
      }
      else
      {
        var_a0 = (s32) (&D_801C6BC4);
        *((s32 *) ((s32) (&D_801C6BC4))) = (f32) ((*((s32 *) ((s32) (*((f32 *) (&D_801C6BC4)))))) + D_801C57C4);
        if (D_801C6B40 == 0x1E)
        {
          *((s32 *) ((s32) (&D_801C6BC4))) = (f32) D_801C6BB9;
          D_801C57C4 = 0.0f;
          D_801C57C8 = 0;
        }
      }
    }
    if (((u8) D_801C6B40) < 0x1EU)
    {
      D_801C6B40 += 1;
    }
    if (D_801C57C8 == 1)
    {
      var_v0_5_arm = D_800DD2C4 * 8;
      goto block_95;
    }
    temp_v1 = D_800DD2C4 * 0x24;
    *((f32 *) (D_8022108C + temp_v1)) = (((f32) D_801C7068) * 400.0f) * 0.5f;
    *(D_80221090 + temp_v1) = 0;
    *((f32 *) (D_80221094 + temp_v1)) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
    var_s1 = D_800DD2C4 * 8;
  }
  else
  {
    if (((unsigned short) (*((f32 *) (((char *) (&D_801C6BC8)) + (-8))))) != 11.5f)
    {
      if (D_801C57C0 == 0.0f)
      {
        D_801C57C0 = (11.5f - (*((f32 *) (((char *) (&D_801C6BC8)) + (-8))))) / 30.0f;
        D_801C6B40 = 0;
      }
      else
      {
        var_a0 = (s32) (&D_801C6BC0);
        *((s32 *) ((s32) (&D_801C6BC0))) = (f32) ((*((s32 *) ((s32) (*((f32 *) (&D_801C6BC0)))))) + D_801C57C0);
        if (D_801C6B40 == 0x1E)
        {
          *((s32 *) ((s32) (&D_801C6BC0))) = 11.5f;
          D_801C57C8 = 0;
          D_801C57C0 = 0.0f;
        }
      }
    }
    if (((int) ((u32) (*((f32 *) (&D_801C6BC4))))) != 11.5f)
    {
      if (D_801C57C4 == 0.0f)
      {
        D_801C57C4 = (11.5f - (*((f32 *) (&D_801C6BC4)))) / 30.0f;
        D_801C6B40 = 0;
      }
      else
      {
        var_a0 = (s32) (&D_801C6BC4);
        *((s32 *) ((s32) (&D_801C6BC4))) = (f32) ((*((s32 *) ((s32) (*((f32 *) (&D_801C6BC4)))))) + D_801C57C4);
        if (D_801C6B40 == 0x1E)
        {
          *((s32 *) ((s32) (&D_801C6BC4))) = 11.5f;
          D_801C57C8 = 0;
          D_801C57C4 = 0.0f;
        }
      }
    }
    if (((u8) D_801C6B40) < 0x1EU)
    {
      if (var_s1 || var_v0_4)
      {
        D_801C6B40 += 1;
      }
      else
      {
        D_801C6B40 += 1;
      }
    }
    var_v0_5 = D_800DD2C4 * 8;
    block_95:
    temp_v0 = (var_v0_5 + D_800DD2C4) * 4;

    if (temp_ft1_2)
    {
      *((f32 *) (D_8022108C + temp_v0)) = ((*((f32 *) (&D_801C6BC0))) * 400.0f) * 0.5f;
      do
      {
        *((u16 *) (D_80221090 + temp_v0)) = 0;
      }
      while (0);
      *((f32 *) (D_80221094 + temp_v0)) = ((*((f32 *) (&D_801C6BC4))) * 400.0f) * 0.5f;
      var_s1 = D_800DD2C4 * 8;
    }
    else
    {
      *((f32 *) (D_8022108C + temp_v0)) = ((*((f32 *) (&D_801C6BC0))) * 400.0f) * 0.5f;
      *(D_80221090 + temp_v0) = 0;
      *((f32 *) (D_80221094 + temp_v0)) = ((*((f32 *) (&D_801C6BC4))) * 400.0f) * 0.5f;
      var_s1 = D_800DD2C4 * 8;
    }
  }
  var_s1 = (var_s1 + D_800DD2C4) * 4;
  temp_fs1 = __sinf() * (*((f32 *) (((char *) (&D_801C6BCC)) + (-4))));
  temp_fs0 = __sinf();
  *((f32 *) (D_80221080 + var_s1)) = (temp_fs1 - ((temp_fs0 * __sinf()) * (*((f32 *) (((char *) (&D_801C6BCC)) + (-4)))))) + (*((f32 *) (D_8022108C + var_s1)));
  *((f32 *) (D_80221084 + var_s1)) = (__sinf() * (*((f32 *) (((char *) (&D_801C6BCC)) + (-4))))) + (*(D_80221090 + var_s1));
  temp_fs1_2 = __cosf() * (*((f32 *) (((char *) (&D_801C6BCC)) + (-4))));
  temp_fs0_2 = __cosf();
  *((f32 *) (D_80221088 + var_s1)) = (temp_fs1_2 - ((temp_fs0_2 * __sinf()) * (*((f32 *) (((char *) (&D_801C6BCC)) + (-4)))))) + (*((f32 *) (D_80221094 + var_s1)));
}


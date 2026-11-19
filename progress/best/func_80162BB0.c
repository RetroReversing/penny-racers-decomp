s8 func_801FA30C();
s32 guMtxCatF();
s32 guMtxXFMF();
s32 guRotateF();
s32 guTranslate();
extern char D_190CB8[];
extern s32 D_80046834;
extern char D_8011F2F0[];
extern s8 D_80126FF7;
extern char D_80182E40[];
extern char D_8018A460[];
extern char D_8018BC40[];
extern char D_80190CB8[];
void func_80162BB0(void **arg0, s32 arg1)
{
  s32 sp20;
  s32 sp60;
  s32 spA0;
  f32 spE0;
  f32 spE4;
  f32 spE8;
  void *spF4;
  u32 spFC;
  u32 __repair_phase_spFC;
  void *sp104;
  s32 *sp10C;
  s32 *sp114;
  s32 temp_a2;
  s32 temp_s0_2;
  s32 var_s4;
  s32 var_s6;
  s8 var_v0;
  s8 var_v0_2;
  s8 var_v0_3;
  unsigned int temp_v1;
  u8 temp_a1;
  void *temp_a0;
  void *temp_a0_2;
  void *temp_s0;
  void *temp_s7;
  void *temp_t0;
  void *temp_v1_10;
  void *temp_v1_11;
  void *temp_v1_12;
  void *temp_v1_13;
  void *temp_v1_14;
  void *temp_v1_15;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  void *temp_v1_9;
  void *var_s1;
  temp_a0 = ((arg1 & 0xFFFF) * 0x64) + D_8011F2F0;
  temp_t0 = *((void **) (((char *) temp_a0) + 0x60));
  spF4 = temp_t0;
  var_s4 = 0;
  if ((*((s16 *) (((char *) temp_t0) + 0x14))) != 0x12C)
  {
    __repair_phase_spFC = (s32) (*((u16 *) (((char *) (*((void **) (((char *) temp_t0) + 4)))) + 4)));
    temp_a2 = __repair_phase_spFC;
    temp_s0_2 = (u8) (*((u8 *) (((char *) temp_a0) + 0xC)));
    spFC = (temp_a2 * 0x24C) + ((temp_s0_2 * 0xC4) + D_8018A460);
    var_s1 = (temp_a2 * 0x300) + ((temp_s0_2 << 8) + D_8018BC40);
    sp104 = var_s1;
    sp114 = &spA0;
    sp10C = &sp60;
    do
    {
      temp_s0_2 = 0 * 4;
    }
    while (0);
    do
    {
      temp_s0 = temp_s0_2 + spFC;
      if (((unsigned long) sp10C) & 0x100)
      {
        if (((unsigned long) sp10C) & 0x10000)
        {
          if (((unsigned long) sp10C) & 0x100)
          {
            guRotateF(&sp20, *((s32 *) (((char *) temp_s0) + 0x64)), 0x3F800000, 0, 0.0f);
          }
          else
          {
            guRotateF(&sp20, *((s32 *) (((char *) temp_s0) + 0x64)), 0x3F800000, 0, 0.0f);
          }
        }
        else
          if (((unsigned long) sp10C) & 0x100)
        {
          guRotateF(&sp20, *((s32 *) (((char *) temp_s0) + 0x64)), 0x3F800000, 0, 0.0f);
        }
        else
        {
          guRotateF(&sp20, *((s32 *) (((char *) temp_s0) + 0x64)), 0x3F800000, 0, 0.0f);
        }
      }
      else
      {
        guRotateF(&sp20, *((s32 *) (((char *) temp_s0) + 0x64)), 0x3F800000, 0, 0.0f);
      }
      var_s6 = 0;
      guRotateF(sp10C, *((s32 *) (((char *) temp_s0) + 0x84)), 0, 0x3F800000, 0.0f);
      guRotateF(sp114, *((s32 *) (((char *) temp_s0) + 0xA4)), 0, 0, 1.0f);
      guMtxCatF(sp10C, &sp20, &sp20);
      guMtxCatF(&sp20);
      temp_s7 = (var_s4 * 4) + spFC;
      loop_3:
      temp_s0_2 = (var_s4 + (*((s16 *) (((char *) spF4) + 0x14)))) & 7;

      guMtxXFMF(&spA0, *(D_80182E40 + (((var_s4 * 2) + var_s6) * 4)), 0, 0, &spE0, &spE4, &spE8);
      *((s16 *) (((char *) var_s1) + 0)) = (s16) ((s32) (spE0 + (*((f32 *) (((char *) temp_s7) + 4)))));
      *((s16 *) (((char *) var_s1) + 2)) = (s16) ((s32) (spE4 + (*((f32 *) (((char *) temp_s7) + 0x24)))));
      *((s16 *) (((char *) var_s1) + 4)) = (s16) ((s32) (spE8 + (*((f32 *) (((char *) temp_s7) + 0x44)))));
      temp_v1 = *((u16 *) (((char *) (*((void **) (((char *) spF4) + 4)))) + 0x230));
      if (temp_v1 == 7)
      {
        *((u8 *) (((char *) var_s1) + 0xC)) = 0xFF;
        var_v0 = (-0x38) - (temp_s0_2 * 0x14);
        goto block_44;
      }
      if (((s32) temp_v1) < 8)
      {
        if (temp_v1 != 3)
        {
          if (((s32) temp_v1) < 4)
          {
            if (temp_v1 == 1)
            {
              *((u8 *) (((char *) var_s1) + 0xC)) = 0xFF;
              *((s8 *) (((char *) var_s1) + 0xD)) = 0;
              var_v0_2 = (-0x38) - (temp_s0_2 * 0x14);
              goto block_49;
            }
            if (((((s32) temp_v1) + 1) - 1) >= 2)
            {
              *((s8 *) (((char *) var_s1) + 0xC)) = 0;
              var_v0 = (-0x38) - (temp_s0_2 * 0x14);
              goto block_44;
            }
            if (temp_v1 == 0)
            {
              *((u8 *) (((char *) var_s1) + 0xC)) = 0xFF;
              *((s8 *) (((char *) var_s1) + 0xD)) = (s8) ((-0x38) - (temp_s0_2 * 0x14));
              *((s8 *) (((char *) var_s1) + 0xE)) = 0;
              goto block_50;
            }
            var_v0_3 = var_s4 * 0x1E;
          }
          else
          {
            if (temp_v1 == 5)
            {
              *((s8 *) (((char *) var_s1) + 0xC)) = 0;
              *((u8 *) (((char *) var_s1) + 0xD)) = 0xFF;
              var_v0_2 = (-0x38) - (temp_s0_2 * 0x14);
              goto block_49;
            }
            if (((s32) temp_v1) >= 6)
            {
              *((u8 *) (((char *) var_s1) + 0xC)) = 0xFF;
              *((u8 *) (((char *) var_s1) + 0xD)) = 0xFF;
              var_v0_2 = (-0x38) - (temp_s0_2 * 0x14);
              goto block_49;
            }
            *((s8 *) (((char *) var_s1) + 0xC)) = (s8) ((-0x38) - (temp_s0_2 * 0x14));
            *((u8 *) (((char *) var_s1) + 0xD)) = 0xFF;
            *((s8 *) (((char *) var_s1) + 0xE)) = 0;
            goto block_50;
          }
        }
        else
        {
          *((s8 *) (((char *) var_s1) + 0xC)) = (s8) ((-0x38) - (temp_s0_2 * 0x14));
          *((s8 *) (((char *) var_s1) + 0xD)) = 0;
          *((u8 *) (((char *) var_s1) + 0xE)) = 0xFF;
          goto block_50;
        }
      }
      else
        if (temp_v1 != 0xB)
      {
        if (((s32) temp_v1) < 0xC)
        {
          if (temp_v1 != 9)
          {
            if (((s32) temp_v1) < 0xA)
            {
              *((s8 *) (((char *) var_s1) + 0xC)) = (s8) ((-0x38) - (temp_s0_2 * 0x14));
              *((u8 *) (((char *) var_s1) + 0xD)) = 0xFF;
              *((u8 *) (((char *) var_s1) + 0xE)) = 0xFF;
            }
            else
            {
              var_v0_2 = (-0x38) - (temp_s0_2 * 0x14);
              *((s8 *) (((char *) var_s1) + 0xC)) = var_v0_2;
              *((u8 *) (((char *) var_s1) + 0xD)) = 0xFF;
              goto block_49;
            }
          }
          else
          {
            var_v0 = (-0x38) - (temp_s0_2 * 0x14);
            *((s8 *) (((char *) var_s1) + 0xC)) = var_v0;
            block_44:
            *((s8 *) (((char *) var_s1) + 0xD)) = var_v0;

            *((u8 *) (((char *) var_s1) + 0xE)) = 0xFF;
          }
          goto block_50;
        }
        if (temp_v1 == 0xC)
        {
          var_v0_2 = (-0x38) - (temp_s0_2 * 0x14);
          *((s8 *) (((char *) var_s1) + 0xC)) = var_v0_2;
          *((s8 *) (((char *) var_s1) + 0xD)) = var_v0_2;
          goto block_49;
        }
        else
        {
          var_v0_3 = var_s4 * 0x1E;
          if (((s32) temp_v1) < 0x100)
          {
            *((s8 *) (((char *) var_s1) + 0xC)) = func_801FA30C();
            *((s8 *) (((char *) var_s1) + 0xD)) = func_801FA30C();
            var_v0_2 = func_801FA30C();
            goto block_49;
          }
        }
      }
      else
      {
        *((u8 *) (((char *) var_s1) + 0xC)) = 0xFF;
        var_v0_2 = (-0x38) - (temp_s0_2 * 0x14);
        *((s8 *) (((char *) var_s1) + 0xD)) = var_v0_2;
        block_49:
        *((s8 *) (((char *) var_s1) + 0xE)) = var_v0_2;

        block_50:
        var_v0_3 = var_s4 * 0x1E;

      }
      *((s8 *) (((char *) var_s1) + 0xF)) = var_v0_3;
      var_s6 += 1;
      var_s1 += 0x10;
      if (var_s6 < 2)
      {
        goto loop_3;
      }
      var_s4 += 1;
      temp_s0_2 = var_s4 * 4;
    }
    while ((temp_a2 = var_s4) < 8);
    guTranslate((D_80046834 << 6) + D_80190CB8, 0);
    temp_a0_2 = *arg0;
    *arg0 = temp_a0_2 + 8;
    *((s32 *) (((char *) temp_a0_2) + 0)) = 0x01020040;
    *((void **) (((char *) temp_a0_2) + 4)) = (void *) ((D_80046834 << 6) + D_190CB8);
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    *((s32 *) (((char *) temp_v1_2) + 0)) = 0xE7000000;
    *((void **) (((char *) temp_v1_2) + 4)) = NULL;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    *((s32 *) (((char *) temp_v1_3) + 0)) = 0xBA001402;
    *((void **) (((char *) temp_v1_3) + 4)) = NULL;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    *((s32 *) (((char *) temp_v1_4) + 0)) = 0xB6000000;
    *((void **) (((char *) temp_v1_4) + 4)) = (void *) 0xF3205;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    *((s32 *) (((char *) temp_v1_5) + 0)) = 0xB7000000;
    *((void **) (((char *) temp_v1_5) + 4)) = (void *) 0x204;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    *((s32 *) (((char *) temp_v1_6) + 0)) = 0xFCFFFFFF;
    *((void **) (((char *) temp_v1_6) + 4)) = (void *) 0xFFFE793C;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    *((s32 *) (((char *) temp_v1_7) + 0)) = 0xB900031D;
    *((void **) (((char *) temp_v1_7) + 4)) = (void *) 0x504240;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    *((s32 *) (((char *) temp_v1_8) + 0)) = 0x040040FF;
    *((void **) (((char *) temp_v1_8) + 4)) = sp104;
    temp_v1_9 = *arg0;
    *arg0 = temp_v1_9 + 8;
    *((s32 *) (((char *) temp_v1_9) + 0)) = 0xB1020400;
    *((void **) (((char *) temp_v1_9) + 4)) = (void *) 0x20604;
    temp_v1_10 = *arg0;
    *arg0 = temp_v1_10 + 8;
    *((s32 *) (((char *) temp_v1_10) + 0)) = 0xB1060804;
    *((void **) (((char *) temp_v1_10) + 4)) = (void *) 0x60A08;
    temp_v1_11 = *arg0;
    *arg0 = temp_v1_11 + 8;
    *((s32 *) (((char *) temp_v1_11) + 0)) = 0xB10A0C08;
    *((void **) (((char *) temp_v1_11) + 4)) = (void *) 0xA0E0C;
    temp_v1_12 = *arg0;
    *arg0 = temp_v1_12 + 8;
    *((s32 *) (((char *) temp_v1_12) + 0)) = 0xB10E100C;
    *((void **) (((char *) temp_v1_12) + 4)) = (void *) 0xE1210;
    temp_v1_13 = *arg0;
    *arg0 = temp_v1_13 + 8;
    *((s32 *) (((char *) temp_v1_13) + 0)) = 0xB1121410;
    *((void **) (((char *) temp_v1_13) + 4)) = (void *) 0x1614;
    temp_v1_14 = *arg0;
    *arg0 = temp_v1_14 + 8;
    *((s32 *) (((char *) temp_v1_14) + 0)) = 0xB1161814;
    *((void **) (((char *) temp_v1_14) + 4)) = (void *) 0x161A18;
    temp_v1_15 = *arg0;
    *arg0 = temp_v1_15 + 8;
    *((s32 *) (((char *) temp_v1_15) + 0)) = 0xB11A1C18;
    *((void **) (((char *) temp_v1_15) + 4)) = (void *) 0x1A1E1C;
    D_80126FF7 = 0xFF;
  }
}


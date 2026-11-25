s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, s32, f32, s32, s32, s32, s32, f32, f32, f32);
s16 func_8012913C(u16, s32, f32, s32);
s32 func_80129918(void *, s32, f32, s32, f32, f32, f32);
s32 func_8013AE60(s32);
s32 func_8013E364();
s32 func_8013E818(s32, s32, s32, s32, s32, s32, s32);
s32 func_8013F050(s32, void *);
s32 func_8013F1D4(s32, void *);
s32 func_801D7028(s32, s32);
extern u8 D_8011F2F0[];
extern u16 D_8018D672;
extern s32 D_8018D6C4;
extern s32 D_8018D730;
extern u8 D_8022A770[];
extern u16 D_80233EC0;
extern u8 D_80233EC1;
extern s32 D_802390C8;
extern s32 func_80164218;
extern unsigned long func_80167DD4;
void func_80167510(volatile int arg0)
{
  u8 *__base_D_8022A770;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_ft2;
  f32 temp_fv0;
  f32 temp_fv0_2;
  s32 temp_s0;
  s32 temp_s2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_6;
  s32 var_a0;
  s32 var_v1;
  s32 var_v1_2;
  u16 temp_v0_4;
  s32 temp_v1;
  void *temp_s0_2;
  void *temp_s0_3;
  void *temp_s1;
  void *temp_s2_2;
  void *__repair_phase_pointer;
  void *temp_v1_4;
  void *temp_v1_5;
  void *var_v0;
  void *var_v0_2;
  if (__repair_phase_pointer)
  {
    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_v1 = *((u16 *) (((char *) temp_s1) + 0x3E));
  }
  else
  {
    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_v1 = *((u16 *) (((char *) temp_s1) + 0x3E));
  }
  switch (temp_v1)
  {
    case 0:
      temp_s0 = func_8013E364() & 0xFFFF;
      if (temp_s0 != 0xFFFF)
    {
      {
        func_8013E818(temp_s0, arg0 & 0xFFFF, 0, 0, 0, 0, 4);
      }
 do { *((u16 *) (((char *) temp_s1) + 0x3E)) = 2U; temp_v0 = temp_s0 * 0x7C; *((f32 *) (((s8 *) (&D_8018D730)) + temp_v0)) = 15.0f; __base_D_8022A770 = D_8022A770; *((s32 *) (((s8 *) (&D_8018D6C4)) + temp_v0)) = __base_D_8022A770; *((f32 *) (((char *) temp_s1) + 0x44)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x18))); *((f32 *) (((char *) temp_s1) + 0x48)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x1C))); } while (0);
      *((f32 *) (((char *) temp_s1) + 0x4C)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x20)));
      *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) ((*((f32 *) (((char *) temp_s1) + 0x1C))) + 100.0f);
      default:
        block_34:
      func_8013AE60(arg0 & 0xFFFF);


    }
      return;

    case 1:
      temp_s0_2 = *((void **) (((char *) temp_s1) + 0x60));
      temp_s2 = arg0 & 0xFFFF;
      if (func_8013F050(temp_s2, temp_s0_2) & 0xFF)
    {
      func_801D7028(temp_s2, 0x29);
      *((u16 *) (((char *) temp_s1) + 0x3E)) = 2U;
      temp_s2_2 = (D_8018D672 * 0x8F0) + __base_D_8022A770;
      *((f32 *) (((char *) temp_s0_2) + 8)) = (f32) ((*((f32 *) (((char *) temp_s2_2) + 0x7C0))) * 1.5f);
      *((f32 *) (((char *) temp_s0_2) + 0xC)) = (f32) ((((*((f32 *) (((char *) temp_s2_2) + 0x7C4))) * 1.5f) + 2.0f) + ((*((f32 *) (((char *) temp_s2_2) + 0x774))) * 0.01f));
      *((f32 *) (((char *) temp_s0_2) + 0x10)) = (f32) ((*((f32 *) (((char *) temp_s2_2) + 0x7C8))) * 1.5f);
      temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x8C, &D_802390C8, &func_80164218, &func_80167DD4, *((f32 *) (((char *) temp_s1) + 0x18)), (*((f32 *) (((char *) temp_s1) + 0x1C))) + 5.0f, *((f32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
      if (((u32) ((temp_v0_2 + 2) & 0xFFFF)) >= 2U)
      {
        temp_s0_2 = ((temp_v0_2 & 0xFFFF) * 0x64) + D_8011F2F0;
        *((s16 *) (((char *) temp_s0_2) + 8)) = 0x40;
        *((s16 *) (((char *) temp_s0_2) + 6)) = 0x40;
        *((s16 *) (((char *) temp_s0_2) + 4)) = 0x40;
        *((s16 *) (((char *) temp_s0_2) + 2)) = 0x40;
        *((f32 *) (((char *) temp_s0_2) + 0x44)) = (f32) (*((f32 *) (((char *) temp_s2_2) + 0x7C0)));
        *((f32 *) (((char *) temp_s0_2) + 0x48)) = (f32) (*((f32 *) (((char *) temp_s2_2) + 0x7C4)));
        *((f32 *) (((char *) temp_s0_2) + 0x4C)) = (f32) (*((f32 *) (((char *) temp_s2_2) + 0x7C8)));
      }
    }
      goto block_34;

    case 2:
      temp_s0_3 = *((void **) (((char *) temp_s1) + 0x60));
      *((f32 *) (((char *) temp_s0_3) + 0xC)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0xC))) - 0.15f);
      func_80129918(temp_s0_3 + 0x1C, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((f32 *) (((char *) temp_s1) + 0x20)), *((f32 *) (((char *) temp_s0_3) + 8)), *((f32 *) (((char *) temp_s0_3) + 0xC)), *((f32 *) (((char *) temp_s0_3) + 0x10)));
      *((f32 *) (((char *) temp_s1) + 0x18)) = (f32) (*((f32 *) (((char *) temp_s0_3) + 0x24)));
      *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) (*((f32 *) (((char *) temp_s0_3) + 0x28)));
      *((f32 *) (((char *) temp_s1) + 0x20)) = (f32) (*((f32 *) (((char *) temp_s0_3) + 0x2C)));
      *((s8 *) (((char *) temp_s1) + 0)) = (s8) ((*((u8 *) (((char *) temp_s0_3) + 0x21))) - D_80233EC1);
      var_v1 = 0;
      if ((*((u8 *) (((char *) temp_s0_3) + 0x1E))) != 0)
    {
      var_v0 = temp_s0_3;
      do
      {
        *((s8 *) (((char *) var_v0) + 0x67)) = 0;
        var_v1 += 1;
        var_v0 = temp_s0_3 + var_v1;
      }
      while (var_v1 < 7);
      if (temp_s0_3)
      {
        temp_v0_3 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x8C, &D_802390C8, &func_80164218, &func_80167DD4, *((f32 *) (((char *) temp_s1) + 0x18)), (*((f32 *) (((char *) temp_s1) + 0x1C))) + 5.0f, *((f32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
      }
      else
      {
        temp_v0_3 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x8C, &D_802390C8, &func_80164218, &func_80167DD4, *((f32 *) (((char *) temp_s1) + 0x18)), (*((f32 *) (((char *) temp_s1) + 0x1C))) + 5.0f, *((f32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
      }
      if (((u32) ((temp_v0_3 + 2) & 0xFFFF)) >= 2U)
      {
        do
        {
          __repair_phase_pointer = ((temp_v0_3 & 0xFFFF) * 0x64) + D_8011F2F0;
          *((s16 *) (((char *) __repair_phase_pointer) + 8)) = 0x40;
          *((s16 *) (((char *) __repair_phase_pointer) + 6)) = 0x40;
          *((s16 *) (((char *) __repair_phase_pointer) + 4)) = 0x40;
        }
        while (0);
        *((s16 *) (((char *) __repair_phase_pointer) + 2)) = 0x40;
        do
        {
          *((s32 *) (((char *) __repair_phase_pointer) + 0x44)) = 0;
          *((f32 *) (((char *) __repair_phase_pointer) + 0x48)) = 0.3f;
        }
        while (0);
        *((s32 *) (((char *) __repair_phase_pointer) + 0x4C)) = 0;
      }
      temp_v1_4 = (void *) (*((u16 *) (((char *) temp_s0_3) + 0x14))); temp_v0_4 = ((u32) temp_v1_4) - 1;
      *((u16 *) (((char *) temp_s0_3) + 0x14)) = temp_v0_4;
      if ((temp_v0_4 << 0x10) == 0)
      {
        __repair_phase_pointer = (void *) func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_80167DD4, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((f32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if (((u32) ((((s32) __repair_phase_pointer) + 2) & 0xFFFF)) >= 2U)
        {
          temp_v1_4 = ((((s32) __repair_phase_pointer) & 0xFFFF) * 0x64) + D_8011F2F0;
          *((s16 *) (((char *) temp_v1_4) + 8)) = 0x40;
          *((s16 *) (((char *) temp_v1_4) + 6)) = 0x40;
          *((s16 *) (((char *) temp_v1_4) + 4)) = 0x40;
          *((s16 *) (((char *) temp_v1_4) + 2)) = 0x40;
          *((f32 *) (((char *) temp_v1_4) + 0x44)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 8))) * 0.8f);
          *((f32 *) (((char *) temp_v1_4) + 0x48)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0xC))) * 0.8f);
          *((f32 *) (((char *) temp_v1_4) + 0x4C)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0x10))) * 0.8f);
        }
        *((u16 *) (((char *) temp_s0_3) + 0x14)) = 5U;
        *((u16 *) (((char *) temp_s1) + 0x3E)) = 1U;
        return;
      }
      temp_fs0 = *((f32 *) (((char *) temp_s0_3) + 8));
      temp_fs1 = *((f32 *) (((char *) temp_s0_3) + 0x10));
      temp_ft0 = sqrtf((temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1));
      temp_ft1 = *((f32 *) (((char *) temp_s0_3) + 0x30));
      temp_ft2 = *((f32 *) (((char *) temp_s0_3) + 0x38));
      var_a0 = arg0 & 0xFFFF;
      if (temp_ft0 != 0.0f)
      {
        temp_fv0 = ((((temp_fs0 * temp_ft1) + (temp_fs1 * temp_ft2)) / temp_ft0) * temp_ft0) * (-1.3f);
        do
        {
          *((f32 *) (((char *) temp_s0_3) + 8)) = (f32) (temp_fs0 + (temp_ft1 * temp_fv0));
          *((f32 *) (((char *) temp_s0_3) + 0x10)) = (f32) (temp_fs1 + (temp_ft2 * temp_fv0));
        }
        while (0);
        temp_fv0_2 = (*((f32 *) (((char *) temp_s0_3) + 0xC))) * 0.8f;
        *((f32 *) (((char *) temp_s0_3) + 0xC)) = temp_fv0_2;
        if (temp_fv0_2 < 0.0f)
        {
          *((f32 *) (((char *) temp_s0_3) + 0xC)) = (f32) (-temp_fv0_2);
          goto block_25;
        }
      }
      goto block_26;
    }
      block_25:
    var_a0 = arg0 & 0xFFFF;

      block_26:
    if (func_8013F1D4(var_a0, temp_s0_3) & 0xFF)
    {
      var_v1_2 = 0;
      var_v0_2 = temp_s0_3;
      __repair_rows:
      {
        *((s8 *) (((char *) var_v0_2) + 0x67)) = 0;
        var_v1_2 += 1;
        var_v0_2 = temp_s0_3 + var_v1_2;
      }

      if (var_v1_2 < 7)
      {
        goto __repair_rows;
      }
      temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_80167DD4, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((f32 *) (((char *) temp_s1) + 0x20)), 0, 0, 0, 0.08f, 0.08f, 0.08f);
      if (((u32) ((temp_v0_6 + 2) & 0xFFFF)) >= 2U)
      {
        if (temp_s1 || D_80233EC1)
        {
          temp_v1_5 = ((temp_v0_6 & 0xFFFF) * 0x64) + D_8011F2F0;
          *((s16 *) (((char *) temp_v1_5) + 8)) = 0x40;
          *((s16 *) (((char *) temp_v1_5) + 6)) = 0x40;
          *((s16 *) (((char *) temp_v1_5) + 4)) = 0x40;
          *((s16 *) (((char *) temp_v1_5) + 2)) = 0x40;
          *((f32 *) (((char *) temp_v1_5) + 0x44)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 8))) * 0.8f);
          *((f32 *) (((char *) temp_v1_5) + 0x48)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0xC))) * 0.8f);
          *((f32 *) (((char *) temp_v1_5) + 0x4C)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0x10))) * 0.8f);
        }
        else
        {
          temp_v1_5 = ((temp_v0_6 & 0xFFFF) * 0x64) + D_8011F2F0;
          *((s16 *) (((char *) temp_v1_5) + 8)) = 0x40;
          *((s16 *) (((char *) temp_v1_5) + 6)) = 0x40;
          *((s16 *) (((char *) temp_v1_5) + 4)) = 0x40;
          *((s16 *) (((char *) temp_v1_5) + 2)) = 0x40;
          *((f32 *) (((char *) temp_v1_5) + 0x44)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 8))) * 0.8f);
          *((f32 *) (((char *) temp_v1_5) + 0x48)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0xC))) * 0.8f);
          *((f32 *) (((char *) temp_v1_5) + 0x4C)) = (f32) ((*((f32 *) (((char *) temp_s0_3) + 0x10))) * 0.8f);
        }
      }
      *((f32 *) (((char *) temp_s1) + 0x18)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x44)));
      *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) ((*((f32 *) (((char *) temp_s1) + 0x48))) + 150.0f);
      temp_fv0_3 = *((f32 *) (((char *) temp_s1) + 0x4C));
      *((f32 *) (((char *) temp_s1) + 0x20)) = temp_fv0_3;
      *((s16 *) (((char *) temp_s0_3) + 0x20)) = func_8012913C(D_80233EC0, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), *((f32 *) (((char *) temp_s1) + 0x4C)));
      *((s16 *) (((char *) temp_s0_3) + 0x22)) = 0;
      *((s8 *) (((char *) temp_s0_3) + 0x1D)) = 0;
      *((u8 *) (((char *) temp_s0_3) + 0x1E)) = 0U;
      *((f32 *) (((char *) temp_s0_3) + 8)) = 0.0f;
      *((f32 *) (((char *) temp_s0_3) + 0xC)) = 0.0f;
      *((f32 *) (((char *) temp_s0_3) + 0x10)) = 0.0f;
    }

      if ((*((f32 *) (((char *) temp_s1) + 0x1C))) < (-200.0f))
    {
      *((f32 *) (((char *) temp_s1) + 0x18)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x44)));
      *((f32 *) (((char *) temp_s1) + 0x1C)) = (f32) (*((f32 *) (((char *) temp_s1) + 0x48)));
      temp_fv0_4 = *((f32 *) (((char *) temp_s1) + 0x4C));
      *((f32 *) (((char *) temp_s1) + 0x20)) = temp_fv0_4;
      *((s16 *) (((char *) temp_s0_3) + 0x20)) = func_8012913C(D_80233EC0, *((f32 *) (((char *) temp_s1) + 0x18)), *((f32 *) (((char *) temp_s1) + 0x1C)), temp_fv0_4);
      *((s16 *) (((char *) temp_s0_3) + 0x22)) = 0;
      do
      {
        *((s8 *) (((char *) temp_s0_3) + 0x1D)) = 0;
        *((u8 *) (((char *) temp_s0_3) + 0x1E)) = 0U;
        *((f32 *) (((char *) temp_s0_3) + 8)) = 0.0f;
        *((f32 *) (((char *) temp_s0_3) + 0xC)) = 0.0f;
        *((f32 *) (((char *) temp_s0_3) + 0x10)) = 0.0f;
      }
      while (0);
      *((u16 *) (((char *) temp_s1) + 0x3E)) = 1U;
    }
    {
      func_8013AE60(arg0 & 0xFFFF);
      return;
    }

  }

}

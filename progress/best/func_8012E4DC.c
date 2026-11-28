extern unsigned short D_8006FB10;
extern short D_800DD2C0;
f32 __cosf(f32);
f32 __sinf();
u16 objCreate();
s32 func_800DF1E0();
s32 updateRouteFlags();
s32 racerUpdateTrackWindow();
s32 func_8012AD20();
s32 func_801D65BC();
s32 stopStageSound();
f32 func_801F9C8C(f32, f32);
s32 initRowTable();
s32 func_80232360();
s32 guMtxCatF();
s32 guMtxXFMF(s32, s32, f32, s32);
s32 guRotateF();
f32 sqrtf(f32);
extern char D_8006FAF0[];
extern char sRowBoard[];
extern char sNodeFlags[];
extern char racerTimerFlags[];
extern char D_8011F2FD[];
extern char D_8011F304[];
extern char D_8011F308[];
extern char sPrimColorG[];
extern char sPathOffsetZ[];
extern char liftPlatforms[];
extern char D_8011F318[];
extern char D_8011F31C[];
extern char playerSlots[];
extern char sPathNodes[];
extern u16 D_80167E60;
extern u8 D_80167E61;
extern u16 D_80167E62;
extern unsigned char D_80183AF0[];
extern unsigned char D_80183AF4[];
extern char D_80183AF8[];
extern f32 D_80183AFC;
extern f32 D_80183B00;
extern f32 D_80183B04;
extern char D_80183B08[];
extern char D_80183B18[];
extern char D_80183B28[];
extern char D_80183B38[];
extern char D_80189C84[];
extern u16 playerFadeObj;
extern u8 D_80189CC8;
extern char D_8018A264[];
extern char D_8018A26E[];
extern u16 D_8018BC30;
extern u16 D_80190C90;
extern void *trackInfo;
extern u16 D_801E975A;
extern char D_801E9998[];
extern char btnCycleNextPressed[];
extern char btnUpPressed[];
extern char btnDownPressed[];
extern char btnRightPressed[];
extern char btnLeftPressed[];
extern char D_801E99B0[];
extern unsigned int D_801E99B4[];
extern char D_801E99B8[];
extern char D_801E99BC[];
extern char btnCyclePrevPressed[];
extern char D_80221080[];
extern char D_80221084[];
extern char D_80221088[];
extern char D_8022108C[];
extern char D_80221090[];
extern char D_80221094[];
extern char D_80221098[];
extern char D_8022109C[];
extern char D_802210A0[];
extern char slotObjIds[];
extern char D_8022A980[];
extern char D_8022AD04[];
extern char D_8022AD64[];
extern char D_8022AF3C[];
extern unsigned char D_8022AFE0[];
extern char D_8022AFE9[];
extern char carPartSpriteInfo[];
extern char D_80237D18[];
extern char carPartFrameUvs[];
extern char D_80237FCC[];
extern char D_80237FD0[];
extern char D_80237FD4[];
extern char carPartFrameTable[];
extern s32 func_8012FFF0;
extern s32 func_80135544;
extern s32 func_80135C64;
extern s32 func_80136A28;
inline static char *inline_fn(int arg0, char *arg1, char *arg2)
{
  return D_80237FCC + ((*((arg0 + arg1) + (*arg2))) * 0x10);
}

inline static volatile unsigned char inline_fn2(u8 arg0)
{
  return arg0 & 0xFFFF;
}

inline static char *inline_fn23(s32 arg0)
{
  return (arg0 * 4) + D_80183B18;
}

inline static int inline_fn234(u16 arg0)
{
  return arg0 * 0x64;
}

void func_8012E4DC(u16 arg0)
{
    f32 __repair_pin_0 = 3.14f;
    f32 __repair_pin_1 = 180.0f;
  f32 lit_0p0;
  f32 lit_r;
  char *__base_D_8011F2F2;
  f32 *sp10;
  f32 *sp14;
  f32 *sp18;
  s32 *sp1C;
  s32 *sp20;
  s32 sp24[9];
  u8 sp48[0x40];
  u8 sp88[0x40];
  u8 spC8[0x40];
  u8 sp108[0x50];
  f32 sp148[3];
  f32 sp158;
  f32 sp15C;
  f32 sp160;
  u16 sp16E;
  s32 var_a0_4;
  f32 *temp_s0_2;
  f32 *temp_s1;
  f32 *temp_v0;
  f32 *temp_v0_17;
  f32 *temp_v0_19;
  f32 *temp_v0_2;
  f32 *temp_v0_3;
  f32 *temp_v0_4;
  f32 *temp_v0_5;
  f32 *temp_v0_6;
  f32 *temp_v1_4;
  f32 *temp_v1_6;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fa0_4;
  f32 temp_fa0_5;
  f32 temp_fa0_6;
  f32 temp_fa1;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs0_4;
  f32 temp_fs0_5;
  f32 temp_fs0_6;
  f32 temp_fs0_7;
  f32 temp_fs0_8;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_fs1_3;
  f32 temp_fs1_4;
  f32 temp_fs1_5;
  f32 temp_fs1_6;
  f32 temp_fs2;
  f32 temp_fs2_2;
  f32 temp_fs2_3;
  f32 temp_fs3;
  f32 temp_fs3_2;
  f32 temp_fs3_3;
  f32 temp_fs4;
  f32 temp_fs4_2;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_fv0;
  f32 temp_fv0_10;
  f32 temp_fv0_11;
  f32 temp_fv0_12;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv0_6;
  f32 temp_fv0_7;
  f32 temp_fv0_8;
  f32 temp_fv0_9;
  f32 temp_fv1;
  f32 temp_fv1_10;
  f32 temp_fv1_11;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  f32 temp_fv1_6;
  f32 temp_fv1_7;
  f32 temp_fv1_8;
  f32 temp_fv1_9;
  f32 temp_s2;
  f32 temp_s5;
  f32 temp_s6;
  f32 temp_s7;
  f32 var_fs5;
  f32 var_ft0;
  f32 var_ft0_2;
  f32 var_fv1;
  f32 var_fv1_2;
  s16 temp_a0_5;
  s16 temp_a0_9;
  s32 temp_a0;
  s32 temp_a0_10;
  s32 temp_a0_11;
  s32 temp_a0_12;
  s32 temp_a0_13;
  s32 temp_a0_14;
  u16 temp_a0_16;
  s32 temp_a0_17;
  s32 temp_a0_2;
  s32 temp_a0_4;
  s32 temp_a0_6;
  s32 temp_a0_8;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_s0;
  s32 temp_s0_3;
  s32 temp_s1_2;
  s32 temp_s1_3;
  
  s32 temp_v0_10;
  s32 temp_v0_11;
  s32 temp_v0_12;
  s32 temp_v0_13;
  s32 temp_v0_14;
  s32 temp_v0_14_1;
  
  s32 temp_v0_20;
  s32 temp_v0_7;
  s32 temp_v0_8;
  s32 temp_v0_9;
  s32 temp_v1_10;
  volatile int temp_v1_11;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_5;
  s32 temp_v1_7;
  s32 temp_v1_9;
  s32 var_a0;
  s32 var_a0_3;
  s32 var_s0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  volatile int var_v1_5;
  s32 var_v1_6;
  s32 var_v1_7;
  s32 var_v1_8;
  s8 var_s0_3;
  u16 *temp_a0_7;
  u16 *temp_s0_5;
  u16 temp_fp;
  u16 temp_v1;
  u32 temp_a0_3;
  u16 temp_s0_4;
  u32 temp_v0_16;
  u32 temp_v0_18;
  u32 var_a0_2;
  u8 temp_s4;
  void *temp_v1_8;
  char *__base_D_8011F308;
  __base_D_8011F308 = D_8011F308; do { } while (0);
  sp16E = arg0;
  temp_a0 = inline_fn234(sp16E);
  temp_s4 = *(racerTimerFlags + temp_a0);
  temp_v1 = *((u16 *) (playerSlots + temp_a0));
  temp_a0 = inline_fn2(temp_s4) / 3;
  temp_fp = *((u16 *) (slotObjIds + (inline_fn2(temp_a0) * 0x8F0)));
  if (temp_v1 != 0)
  {
    temp_a0_2 = inline_fn2(temp_a0);
    if (temp_v1 != 1)
    {
      return;
    }
    if ((*((s32 *) (btnRightPressed + (temp_a0_2 * 0x70)))) != 0)
    {
      temp_v0 = (temp_a0_2 * 4) + D_80183B28;
      temp_fv0 = (*temp_v0) + 1.0f;
      *temp_v0 = temp_fv0;
      if (temp_fv0 >= 360.0f)
      {
        *temp_v0 = temp_fv0 - 360.0f;
      }
    }
    var_a0 = inline_fn2(temp_a0);
    if ((*((s32 *) (btnLeftPressed + (var_a0 * 0x70)))) != 0)
    {
      temp_v0_2 = (var_a0 * 4) + D_80183B28;
      temp_fv1 = (*temp_v0_2) - 1.0f;
      *temp_v0_2 = temp_fv1;
      if (temp_fv1 < 0.0f)
      {
        *temp_v0_2 = temp_fv1 + 360.0f;
        var_a0 = inline_fn2(temp_a0);
      }
    }
    temp_v1_2 = var_a0 * 0x70;
    if ((*((s32 *) (btnCyclePrevPressed + temp_v1_2))) != 0)
    {
      if ((*((s32 *) (btnUpPressed + temp_v1_2))) != 0)
      {
        temp_v0_5 = (var_a0 * 4) + D_80183B38;
        temp_fv0_2 = (*temp_v0_5) + 1.0f;
        *temp_v0_5 = temp_fv0_2;
        if (temp_fv0_2 > 85.0f)
        {
          *temp_v0_5 = 85.0f;
        }
      }
      var_a0_2 = inline_fn2(temp_a0);
      if ((*((s32 *) (btnDownPressed + (var_a0_2 * 0x70)))) != 0)
      {
        temp_v0_6 = (var_a0_2 * 4) + D_80183B38;
        temp_fv0_3 = (*temp_v0_6) - 1.0f;
        *temp_v0_6 = temp_fv0_3;
        if (temp_fv0_3 < 0.0f)
        {
          *temp_v0_6 = 0.0f;
        }
      }
    }
    else
    {
      temp_v1_3 = inline_fn2(temp_a0);
      temp_a0_3 = *((s32 *) (btnUpPressed + (temp_v1_3 * 0x70)));
      if (temp_a0_3 != 0)
      {
        temp_v1_4 = inline_fn23(temp_v1_3);
        temp_fv1_2 = *temp_v1_4;
        if (temp_fv1_2 > 2.0f)
        {
          if (temp_a0_3 >= 0x10U)
          {
            *temp_v1_4 = temp_fv1_2 - 4.0f;
          }
          else
          {
            temp_v0_3 = inline_fn23(inline_fn2(temp_a0));
            *temp_v0_3 -= 1.0f;
          }
        }
      }
      temp_v1_5 = inline_fn2(temp_a0);
      var_a0_2 = *((s32 *) (btnDownPressed + (temp_v1_5 * 0x70)));
      if (var_a0_2 != 0)
      {
        temp_v1_6 = inline_fn23(temp_v1_5);
        temp_fv1_3 = *temp_v1_6;
        if (temp_fv1_3 < 5000.0f)
        {
          if (var_a0_2 >= 0x10U)
          {
            *temp_v1_6 = temp_fv1_3 + 4.0f;
          }
          else
          {
            temp_v0_4 = inline_fn23(inline_fn2(temp_a0));
            *temp_v0_4 += 1.0f;
          }
        }
      }
    }
    temp_s0 = inline_fn2(temp_a0) * 4;
    temp_v0_7 = inline_fn234(inline_fn2(temp_fp));
    temp_s7 = *(__base_D_8011F308 + temp_v0_7);
    temp_s5 = (*((f32 *) (sPrimColorG + temp_v0_7))) + (*((f32 *) (D_80183B08 + temp_s0)));
    temp_s6 = *(s32 *)(sPathOffsetZ + temp_v0_7);
    D_80183AFC = (*((f32 *) (D_8011F318 + temp_v0_7))) + (*((f32 *) (D_80183B28 + temp_s0)));
    temp_s1 = temp_s0 + D_80183B18;
    {
      f32 *__fence_temp_s1;
      do
      {
        do
        {
          __fence_temp_s1 = temp_s1;
        }
        while (0); temp_fs4 = __sinf((D_80183AFC * 3.14f) / 180.0f, var_a0_2) * (*__fence_temp_s1); }
      while (0);
    }
    temp_fs0 = __sinf((D_80183AFC * 3.14f) / 180.0f);
    temp_s0_2 = temp_s0 + D_80183B38;
    do
    {
      temp_fs4_2 = (temp_fs4 - ((temp_fs0 * __sinf(((*temp_s0_2) * (__repair_pin_0 = 3.14f)) / (__repair_pin_1 = 180.0f))) * (*temp_s1))) + temp_s7;
    }
    while (0);
    temp_s2 = (__sinf(((*temp_s0_2) * 3.14f) / 180.0f) * (*temp_s1)) + temp_s5;
    temp_fs3 = __cosf((D_80183AFC * 3.14f) / 180.0f) * (*temp_s1);
    temp_fs0_2 = __cosf((D_80183AFC * 3.14f) / 180.0f);
    temp_fs3_2 = (temp_fs3 - ((temp_fs0_2 * __sinf(((*temp_s0_2) * 3.14f) / 180.0f)) * (*temp_s1))) + temp_s6;
    temp_v0_8 = inline_fn2(temp_s4) * 0x24;
    temp_ft0 = temp_s7 - (*((f32 *) (D_80221080 + temp_v0_8)));
    temp_fv0_4 = temp_s5 - (*((f32 *) (D_80221084 + temp_v0_8)));
    temp_fv1_4 = temp_s6 - (*((f32 *) (D_80221088 + temp_v0_8)));
    temp_fa0_2 = ((temp_ft0 * temp_ft0) + (temp_fv0_4 * temp_fv0_4)) + (temp_fv1_4 * temp_fv1_4);
    temp_fv0_5 = sqrtf(temp_fa0_2);
    var_fs5 = temp_fv0_5;
    temp_fs0_3 = temp_s7 - temp_fs4_2;
    temp_fs1 = temp_s5 - temp_s2;
    temp_fs2 = temp_s6 - temp_fs3_2;
    temp_fv0_6 = sqrtf(((temp_fs0_3 * temp_fs0_3) + (temp_fs1 * temp_fs1)) + (temp_fs2 * temp_fs2));
    if (var_fs5 < temp_fv0_6)
    {
      temp_fv1_5 = (var_fs5 - temp_fv0_6) / temp_fv0_6;
      if ((*(D_8022AFE0 + (inline_fn2(temp_a0) * 0x8F0))) == 0)
      {
        temp_v0_9 = inline_fn2(temp_s4) * 0x24;
        *((f32 *) (D_80221080 + temp_v0_9)) = (temp_fs0_3 * temp_fv1_5) + (*((f32 *) (D_80221080 + temp_v0_9)));
        *((f32 *) (D_80221084 + temp_v0_9)) = (temp_fs1 * temp_fv1_5) + (*((f32 *) (D_80221084 + temp_v0_9)));
        *((f32 *) (D_80221088 + temp_v0_9)) = (temp_fs2 * temp_fv1_5) + (*((f32 *) (D_80221088 + temp_v0_9)));
      }
    }
    var_v1 = inline_fn2(temp_s4);
    if ((*(D_8022AFE0 + (inline_fn2(temp_a0) * 0x8F0))) == 0)
    {
      temp_v0_10 = var_v1 * 0x24;
      temp_fs0_4 = temp_fs4_2 - (*((f32 *) (D_80221080 + temp_v0_10)));
      temp_fs1_2 = temp_s2 - (*((f32 *) (D_80221084 + temp_v0_10)));
      temp_fs2_2 = temp_fs3_2 - (*((f32 *) (D_80221088 + temp_v0_10)));
      temp_fa0_3 = ((temp_fs0_4 * temp_fs0_4) + (temp_fs1_2 * temp_fs1_2)) + (temp_fs2_2 * temp_fs2_2);
      temp_fv0_7 = sqrtf(temp_fa0_3);
      var_ft0 = temp_fv0_7;
      if (D_80183B00 < var_ft0)
      {
        var_fv1 = var_ft0 - D_80183B00;
        goto block_43;
      }
      if (var_ft0 > 1.0f)
      {
        var_fv1 = (var_ft0 - D_80183B00) * 0.001f;
        block_43:
        temp_fv1_6 = var_fv1 / var_ft0;

        temp_v0_11 = inline_fn2(temp_s4) * 0x24;
        *((f32 *) (D_80221080 + temp_v0_11)) = (temp_fs0_4 * temp_fv1_6) + (*((f32 *) (D_80221080 + temp_v0_11)));
        *((f32 *) (D_80221084 + temp_v0_11)) = (temp_fs1_2 * temp_fv1_6) + (*((f32 *) (D_80221084 + temp_v0_11)));
        *((f32 *) (D_80221088 + temp_v0_11)) = (temp_fs2_2 * temp_fv1_6) + (*((f32 *) (D_80221088 + temp_v0_11)));
      }
      var_v1 = temp_s4 & 0xFFFF;
    }
    temp_v0_12 = var_v1 * 0x24;
    temp_fs0_5 = temp_s7 - (*((f32 *) (D_8022108C + temp_v0_12)));
    temp_fs1_3 = temp_s5 - (*((f32 *) (D_80221090 + temp_v0_12)));
    temp_fs2_3 = temp_s6 - (*((f32 *) (D_80221094 + temp_v0_12)));
    temp_fa0_4 = ((temp_fs0_5 * temp_fs0_5) + (temp_fs1_3 * temp_fs1_3)) + (temp_fs2_3 * temp_fs2_3);
    temp_fv0_8 = sqrtf(temp_fa0_4);
    var_ft0_2 = temp_fv0_8;
    if (D_80183B04 < var_ft0_2)
    {
      var_fv1_2 = var_ft0_2 - D_80183B04;
      goto block_50;
    }
    if (var_ft0_2 > 1.0f)
    {
      var_fv1_2 = (var_ft0_2 - D_80183B04) * 0.001f;
      block_50:
      temp_fv1_7 = var_fv1_2 / var_ft0_2;

      temp_v0_13 = inline_fn2(temp_s4) * 0x24;
      *((f32 *) (D_8022108C + temp_v0_13)) = (temp_fs0_5 * temp_fv1_7) + (*((f32 *) (D_8022108C + temp_v0_13)));
      *((f32 *) (D_80221090 + temp_v0_13)) = (temp_fs1_3 * temp_fv1_7) + (*((f32 *) (D_80221090 + temp_v0_13)));
      *((f32 *) (D_80221094 + temp_v0_13)) = (temp_fs2_3 * temp_fv1_7) + (*((f32 *) (D_80221094 + temp_v0_13)));
    }
    var_v0 = inline_fn2(temp_a0);
    if ((D_8006FB10 == 0) && ((var_v0 = temp_a0 & 0xFFFF, (*((u8 *) (((char *) trackInfo) + 1))) == 6)))
    {
      do { racerUpdateTrackWindow((var_v0 * 0x8F0) + D_8022AF3C, 4, temp_a0 & 0xFF); } while (0);
      var_v1_2 = temp_fp & 0xFFFF;
    }
    else
    {
      updateRouteFlags((var_v0 * 0x8F0) + D_8022AF3C, 4, temp_a0 & 0xFF);
      var_v1_2 = temp_fp & 0xFFFF;
    }
    temp_v0_14_1 = inline_fn234(var_v1_2);
    temp_fs0_6 = *((f32 *) (D_8011F318 + temp_v0_14_1));
    temp_fs1_4 = *((f32 *) (D_8011F31C + temp_v0_14_1));
    sp10 = NULL;
    guRotateF(sp88, *((f32 *) (liftPlatforms + temp_v0_14_1)), (f32 *) 0x3F800000, sp10);
    sp10 = NULL;
    guRotateF(sp48, temp_fs0_6, sp10, (f32 *) 0x3F800000);
    sp10 = (f32 *) 0x3F800000;
    guRotateF(spC8, temp_fs1_4, NULL, NULL);
    guMtxCatF(sp48, sp88, sp108);
    guMtxCatF(sp108, spC8, sp108);
    sp10 = &sp158;
    sp14 = &sp15C;
    sp18 = &sp160;
    guMtxXFMF(sp108, 0, 1.0f, 0);
    temp_v0_14 = temp_s4;
    temp_v1_7 = temp_v0_14 & 0xFFFF;
    temp_a0_4 = (temp_v1_7 - 1) * 0x24;
    temp_v0_14 = temp_v1_7 * 0x24;
    temp_v1_8 = temp_v0_14 + D_80221080;
    temp_fv1_8 = *((f32 *) (D_80221098 + temp_v0_14));
    temp_fv0_9 = temp_fv1_8 + ((sp158 - temp_fv1_8) * 0.05f);
    *((f32 *) (((char *) temp_v1_8) + 0x18)) = temp_fv0_9;
    *((f32 *) (D_80221098 + temp_a0_4)) = temp_fv0_9;
    temp_fv1_9 = *((f32 *) (D_8022109C + temp_v0_14));
    temp_fv0_10 = ((sp15C - temp_fv1_9) * 0.05f) + temp_fv1_9;
    *((f32 *) (((char *) temp_v1_8) + 0x1C)) = temp_fv0_10;
    *((f32 *) (D_80221098 + temp_a0_4)) = temp_fv0_10;
    temp_fv1_10 = *((f32 *) (D_802210A0 + temp_v0_14));
    temp_fv0_11 = ((sp160 - temp_fv1_10) * 0.05f) + temp_fv1_10;
    *((f32 *) (((char *) temp_v1_8) + 0x20)) = temp_fv0_11;
    *((f32 *) (D_80221098 + temp_a0_4)) = temp_fv0_11;
    temp_ft1 = (*((f32 *) (D_8022108C + temp_v0_14))) - (*((f32 *) (D_80221080 + temp_v0_14)));
    sp148[0] = temp_ft1;
    temp_fv1_11 = (*((f32 *) (D_80221090 + temp_v0_14))) - (*((f32 *) (D_80221084 + temp_v0_14)));
    sp148[1] = temp_fv1_11;
    temp_fv0_12 = (*((f32 *) (D_80221094 + temp_v0_14))) - (*((f32 *) (D_80221088 + temp_v0_14)));
    sp148[2] = temp_fv0_12;
    temp_fa0_5 = 1.0f / sqrtf(((temp_ft1 * temp_ft1) + (temp_fv1_11 * temp_fv1_11)) + (temp_fv0_12 * temp_fv0_12));
    temp_fa1 = temp_fa0_5 * sp148[0];
    sp148[0] = temp_fa1;
    sp148[1] *= temp_fa0_5;
    temp_fa0_6 = temp_fa0_5 * sp148[2];
    sp148[2] = temp_fa0_6;
    lit_r = func_801F9C8C(temp_fa0_6, -temp_fa1);
    lit_0p0 = 0.0f;
    temp_fs3_3 = lit_r;
    temp_s0_3 = (inline_fn2(temp_s4) - 1) * 0x24;
    *((f32 *) (D_80221080 + temp_s0_3)) = lit_0p0;
    *((f32 *) (D_80221084 + temp_s0_3)) = lit_0p0;
    *((f32 *) (D_80221088 + temp_s0_3)) = lit_0p0;
    temp_fs1_5 = __sinf(temp_fs3_3) * 400.0f;
    temp_fs0_7 = __sinf(temp_fs3_3);
    *((f32 *) (D_8022108C + temp_s0_3)) = temp_fs1_5 - ((temp_fs0_7 * __sinf(0.0f)) * 400.0f);
    *((f32 *) (D_80221090 + temp_s0_3)) = __sinf(0.0f) * 400.0f;
    temp_fs1_6 = __cosf(temp_fs3_3) * 400.0f;
    temp_fs0_8 = __cosf(temp_fs3_3);
    *((f32 *) (D_80221094 + temp_s0_3)) = temp_fs1_6 - ((temp_fs0_8 * __sinf(0.0f)) * 400.0f);
    temp_a0_5 = *((s16 *) (D_8022AD04 + (inline_fn2(temp_a0) * 0x8F0)));
    if (temp_a0_5 < 4)
    {
      if ((D_80189CC8 == 3) && ((*((u8 *) (((char *) trackInfo) + 1))) == 6))
      {
        var_a0_3 = temp_a0 & 0xFFFF;
        if (temp_a0_5 >= 2)
        {
          goto block_59;
        }
      }
      else
      {
        goto block_85;
      }
    }
    else
    {
      block_59:
      D_80167E60 += 1;

      temp_v1_9 = inline_fn2(temp_a0);
      *(D_80189C84 + temp_v1_9) = D_80167E61;
      temp_a0_6 = inline_fn2(temp_a0);
      if ((*(D_8022AFE9 + (temp_v1_9 * 0x8F0))) == 5)
      {
        D_80167E62 += 1;
      }
      *(D_8018A264 + temp_a0_6) = 0;
      __base_D_8011F2F2 = sNodeFlags;
      temp_a0_7 = (temp_a0_6 * 2) + (inline_fn234(inline_fn2(temp_fp) + 1) + __base_D_8011F2F2);
      *temp_a0_7 &= 0xFFF7;
      if (D_800DD2C0 == 1)
      {
        *(D_8011F2FD + inline_fn234(D_8018BC30)) = 2;
      }
      *(D_8011F2FD + inline_fn234(sp16E)) = 1;
      sp10 = (f32 *) 0x80;
      sp14 = temp_s4 & 0xFF;
      sp18 = NULL;
      sp1C = &func_8012FFF0;
      sp20 = NULL;
      sp24[0] = 0;
      sp24[1] = 0;
      sp24[2] = 0;
      sp24[3] = 0;
      sp24[4] = 0;
      sp24[5] = 0;
      sp24[6] = 0;
      sp24[7] = 0;
      sp24[8] = 0;
      objCreate(0, 0, 3, 0);
      if (D_80189CC8 != 3)
      {
        temp_a0_8 = temp_a0 & 0xFFFF;
        temp_a1 = temp_a0_8 * 0x8F0;
        if ((*(D_8022AFE9 + temp_a1)) != 5)
        {
          *(D_8022AFE9 + temp_a1) = 1;
          func_80232360(temp_a0_8, 0);
        }
        temp_s0_4 = temp_a0 & 0xFFFF;
        if (D_80189CC8 == 0)
        {
          *(racerTimerFlags + inline_fn234(D_801E975A)) = 0;
        }
        if (temp_s0_4 < 2U)
        {
          sp10 = (f32 *) 0x81;
          sp14 = NULL;
          sp18 = NULL;
          sp1C = &func_80135544;
          sp20 = NULL;
          sp24[0] = 0;
          sp24[1] = 0;
          sp24[2] = 0;
          sp24[3] = 0;
          sp24[4] = 0;
          sp24[5] = 0;
          sp24[6] = 0;
          sp24[7] = 0;
          sp24[8] = 0;
          do { objCreate(0, temp_a0 & 0xFF, 3, 0); } while (0);
          if ((*(D_8022AFE9 + (temp_s0_4 * 0x8F0))) != 5)
          {
            func_801D65BC(0x10);
            var_a0_3 = temp_a0 & 0xFFFF;
          }
          else
          {
            func_801D65BC(0x11);
            var_a0_3 = inline_fn2(temp_a0);
          }
        }
        else
        {
          goto block_85;
        }
      }
      else
      {
        if ((*(D_8022AFE9 + (inline_fn2(temp_a0) * 0x8F0))) != 5)
        {
          func_801D65BC(0x10);
        }
        else
        {
          func_801D65BC(0x11);
        }
        if (D_800DD2C0 == D_80167E60)
        {
          func_801D65BC(5);
        }
        var_s0 = 0;
        temp_s1_2 = inline_fn2(temp_a0) * 0x8F0;
        var_v1_3 = 0 & 0xFFFF;
        for (;;) {
          temp_a0_9 = *((s16 *) (D_8022AD64 + ((var_v1_3 * 0x38) + temp_s1_2)));
          var_v0_2 = var_s0 & 0xFFFF;
          if (temp_a0_9 != (-1))
          {
            stopStageSound(temp_a0_9);
            var_v0_2 = var_s0 & 0xFFFF;
          }
          *((s16 *) (D_8022AD64 + ((var_v0_2 * 0x38) + temp_s1_2))) = -1;
          var_s0 += 1;
          var_v1_3 = var_s0 & 0xFFFF;
if (!(((u32) inline_fn2(var_s0)) < 4U)) {
temp_a0_10 = inline_fn2(temp_a0) * 0x8F0;
        if ((*(D_8022AFE9 + temp_a0_10)) != 5)
        {
          *(D_8022AFE9 + temp_a0_10) = 4;
        }
        temp_s0_5 = ((temp_a0 & 0xFFFF) * 2) + D_8018A26E;
        *(D_8011F2FD + inline_fn234(*temp_s0_5)) = 2;
        sp10 = (f32 *) 0x80;
        sp14 = NULL;
        sp18 = NULL;
        sp1C = &func_80135C64;
        sp20 = &func_80136A28;
        sp24[0] = 0;
        sp24[1] = 0;
        sp24[2] = 0;
        sp24[3] = 0;
        sp24[4] = 0;
        sp24[5] = 0;
        sp24[6] = 0;
        sp24[7] = 0;
        sp24[8] = 0;
        *temp_s0_5 = objCreate(0, temp_a0 & 0xFF, 3, 0);
        if (D_80167E60 == D_800DD2C0)
        {
          *(D_8011F2FD + inline_fn234(D_80190C90)) = 2;
          *(D_8011F2FD + inline_fn234(playerFadeObj)) = 2;
          var_a0_3 = temp_a0 & 0xFFFF;
          if (D_800DD2C0 == 1)
          {
            *(D_8011F2FD + inline_fn234(D_8018BC30)) = 2;
            goto block_85;
          }
        }
        else
        {
          block_85:
          var_a0_3 = temp_a0 & 0xFFFF;

        }
break;
}
}
      }
    }
    temp_v1_10 = var_a0_3 * 0x70;
    if ((*((s32 *) (btnCyclePrevPressed + temp_v1_10))) == 0)
    {
      if ((*((s32 *) (D_801E9998 + temp_v1_10))) == 1)
      {
        s32 __repair_web_temp_s1_3;
        if (((u8) (*(D_80183AF0 + var_a0_3))) < 0xDU)
        {
          *(D_80183AF0 + var_a0_3) = (*(D_80183AF0 + var_a0_3)) + 1;
        }
        else
        {
          *(D_80183AF0 + inline_fn2(temp_a0)) = 0;
        }
        temp_a0_13 = inline_fn234(inline_fn2(temp_fp));
        __repair_web_temp_s1_3 = inline_fn2(temp_a0);
        *((void **) (((char *) (*((s32 *) (sPathNodes + inline_fn234(*((u16 *) (D_8011F304 + temp_a0_13))))))) + 4)) = (void *) (((*(D_80183AF0 + __repair_web_temp_s1_3)) * 0xC) + D_80237D18);
        func_800DF1E0(*((u16 *) (D_8011F304 + temp_a0_13)), (__repair_web_temp_s1_3 * 0x8F0) + D_8022A980);
        temp_a0_14 = inline_fn234((temp_fp & 0xFFFF) + 5);
        *(__base_D_8011F308 + temp_a0_14) = *((f32 *) (carPartFrameUvs + ((*((((*(D_80183AF4 + __repair_web_temp_s1_3)) * 0x10) + carPartFrameTable) + (*(D_80183AF0 + __repair_web_temp_s1_3)))) * 0x10)));
        *((f32 *) (sPrimColorG + temp_a0_14)) = *((f32 *) inline_fn((*(D_80183AF4 + __repair_web_temp_s1_3)) * 0x10, carPartFrameTable, D_80183AF0 + __repair_web_temp_s1_3));
        *(f32 *)(sPathOffsetZ + temp_a0_14) = *((f32 *) (D_80237FD0 + ((*((((*(D_80183AF4 + __repair_web_temp_s1_3)) * 0x10) + carPartFrameTable) + (*(D_80183AF0 + __repair_web_temp_s1_3)))) * 0x10)));
        *((f32 *) (liftPlatforms + temp_a0_14)) = *((f32 *) (D_80237FD4 + ((*((((*(D_80183AF4 + __repair_web_temp_s1_3)) * 0x10) + carPartFrameTable) + (*(D_80183AF0 + __repair_web_temp_s1_3)))) * 0x10)));
      }
      temp_s1_3 = temp_a0 & 0xFFFF;
      if ((*((s32 *) (btnCycleNextPressed + (temp_s1_3 * 0x70)))) == 1)
      {
        if (((u8) (*(D_80183AF8 + temp_s1_3))) < 9U)
        {
          *(D_80183AF8 + temp_s1_3) = (*(D_80183AF8 + temp_s1_3)) + 1;
          var_v1_5 = temp_fp & 0xFFFF;
        }
        else
        {
          *(D_80183AF8 + inline_fn2(temp_a0)) = 0;
          var_v1_5 = inline_fn2(temp_fp);
        }
        temp_v1_11 = inline_fn2(temp_a0);
        func_8012AD20(*((u16 *) (D_8011F304 + inline_fn234(var_v1_5))), (temp_v1_11 * 0x8F0) + D_8022A980, *(D_80183AF0 + temp_v1_11), *(D_80183AF8 + temp_v1_11));
      }
      temp_a0_16 = temp_a0;
      if ((*((s32 *) (btnCycleNextPressed + (temp_a0_16 * 0x70)))) == 1)
      {
        if ((((u8) (*(D_80183AF4 + temp_a0_16))) - 1) < (0x2EU - 1))
        {
          *(D_80183AF4 + temp_a0_16) = (*(D_80183AF4 + temp_a0_16)) + 1;
          var_v0_3 = inline_fn2(temp_fp);
        }
        else
        {
          *(D_80183AF4 + (temp_a0 & 0xFFFF)) = 3;
          var_v0_3 = temp_fp & 0xFFFF;
        }
        temp_a1_2 = inline_fn2(temp_a0);
        ;
        *((void **) (((char *) (*((s32 *) (sPathNodes + inline_fn234(var_v0_3 + 5))))) + 4)) = (void *) (((*(D_80183AF4 + temp_a1_2)) * 0xC) + carPartSpriteInfo);
        *(__base_D_8011F308 + inline_fn234(var_v0_3 + 5)) = *((f32 *) (carPartFrameUvs + ((*((((*(D_80183AF4 + temp_a1_2)) * 0x10) + carPartFrameTable) + (*(D_80183AF0 + temp_a1_2)))) * 0x10)));
        *((f32 *) (sPrimColorG + inline_fn234(var_v0_3 + 5))) = *((f32 *) inline_fn((*(D_80183AF4 + temp_a1_2)) * 0x10, carPartFrameTable, D_80183AF0 + temp_a1_2));
        *(f32 *)(sPathOffsetZ + inline_fn234(var_v0_3 + 5)) = *((f32 *) (D_80237FD0 + ((*((((*(D_80183AF4 + temp_a1_2)) * 0x10) + carPartFrameTable) + (*(D_80183AF0 + temp_a1_2)))) * 0x10)));
        *((f32 *) (liftPlatforms + inline_fn234(var_v0_3 + 5))) = *((f32 *) (D_80237FD4 + ((*((((*(D_80183AF4 + temp_a1_2)) * 0x10) + carPartFrameTable) + (*(D_80183AF0 + temp_a1_2)))) * 0x10)));
      }
    }
    else
    {
      temp_a0_11 = inline_fn2(temp_a0);
      temp_v0_16 = *((s32 *) (D_801E9998 + (temp_a0_11 * 0x70)));
      if (((temp_v0_16 == 1) | (temp_v0_16 >= 0xBU)) != 0)
      {
        temp_v0_17 = (temp_a0_11 * 4) + D_80183B08;
        *temp_v0_17 -= 1.0f;
      }
      temp_a0_12 = inline_fn2(temp_a0);
      temp_v0_18 = *((s32 *) (btnCycleNextPressed + (temp_a0_12 * 0x70)));
      if (((temp_v0_18 == 1) | (temp_v0_18 >= 0xBU)) != 0)
      {
        temp_v0_19 = (temp_a0_12 * 4) + D_80183B08;
        *temp_v0_19 += 1.0f;
      }
    }
    var_v1_6 = temp_a0 & 0xFFFF;
    if ((*((s32 *) (D_801E99B0 + (inline_fn2(temp_a0) * 0x70)))) == 1)
    {
      initRowTable(1);
      var_v1_6 = inline_fn2(temp_a0);
    }
    var_v1_7 = inline_fn2(temp_a0);
    if ((*((s32 *) (D_801E99B8 + (var_v1_6 * 0x70)))) == 1)
    {
      initRowTable(2);
      var_v1_7 = inline_fn2(temp_a0);
    }
    var_v1_8 = inline_fn2(temp_a0);
    if ((*((s32 *) (D_801E99BC + (var_v1_7 * 0x70)))) == 1)
    {
      initRowTable(3);
      var_v1_8 = inline_fn2(temp_a0);
    }
    if ((*((s32 *) (D_801E99B4 + (var_v1_8 * 0x70)))) == 1)
    {
      initRowTable(4);
    }
    return;
  }
  D_80183B00 = 8.0f;
  D_80183B04 = 10.0f;
  temp_v0_20 = (temp_a0 & 0xFFFF) * 4;
  *((f32 *) (D_80183B08 + temp_v0_20)) = 16.0f;
  *((f32 *) (D_80183B18 + temp_v0_20)) = 47.0f;
  *((f32 *) (D_80183B28 + temp_v0_20)) = 180.0f;
  *((f32 *) (D_80183B38 + temp_v0_20)) = 9.0f;
  var_s0_3 = 0;
  var_v0_4 = 0 & 0xFFFF;
  loop_goto_1:
  {
    *(D_80183AF0 + var_v0_4) = var_s0_3;
    *(D_80183AF4 + var_v0_4) = 3;
    *(D_80183AF8 + var_v0_4) = 0;
    var_s0_3 += 1;
    var_v0_4 = var_s0_3 & 0xFFFF;
  }

  if (((u32) (var_s0_3 & 0xFFFF)) < 4U)
  {
    goto loop_goto_1;
  }
  *((u16 *) (playerSlots + inline_fn234(sp16E))) = 1;
}


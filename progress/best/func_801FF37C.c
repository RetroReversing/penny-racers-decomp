s16 func_80027EE0(s32);
void func_8002D030(s16);
void n_alSndpSetPan(s32);
void n_alSndpSetPitch(f32);
void n_alSndpSetVol(s16);
void n_alSndpStop(void);
extern u8 D_801D75E6[];
extern u8 D_801D7DF4[];
extern u8 D_801D7E00[];
extern u8 D_801D7E04[];
extern u8 D_801D7E08[];
extern s8 D_801E995A;
extern s8 D_801E995B;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E999C;
extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C0;
extern s32 D_801E99C4;
extern u8 D_802025EC[];
extern u8 D_802025F0[];
extern s32 D_80203AB8;
extern u16 D_80203ABA;
extern s32 D_80203ABC;
extern s16 D_80203ABE;
extern s32 D_80203AC0;
extern volatile u8 D_80203ACA;
inline static int inline_fn(float arg0, int arg1)
{
  return ((s32) arg0) | arg1;
}

void func_801FF37C(void)
{
    __typeof__(D_801E99A0) mode;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_fs0;
  f32 var_fs0_2;
  f32 __repair_phase_var_fs0_2;
  f32 var_fs1;
  f32 __repair_var_fs1_1;
  f32 var_fv0;
  f32 var_fv0_2;
  f32 var_fv1;
  f32 var_fv1_2;
  s16 temp_v0;
  s32 temp_v0_2;
  s32 var_a0;
  s32 var_a0_2;
  
  s32 var_a1;
  s32 var_v0;
  u8 var_v0_2;
  do { mode = D_801E99A0; } while (0);
  if (mode == 1)
  {
    if (D_80203AB8 == 0x43)
    {
      D_80203AB8 = 0;
    }
    else
    {
      D_80203AB8 += 1;
    }
  }
  if (D_801E99A4 == 1)
  {
    if (D_80203AB8 == 0)
    {
      var_v0 = 0x43;
    }
    else
    {
      var_v0 = D_80203AB8 - 1;
    }
    D_80203AB8 = var_v0;
  }
  if ((D_801E99A8 == 1) && (D_80203ABC < 7))
  {
    D_80203ABC += 1;
  }
  if ((D_801E99AC == 1) && (D_80203ABC > 0))
  {
    D_80203ABC -= 1;
  }
  if (D_801E9990 == 1)
  {
    temp_v0 = func_80027EE0(D_80203AB8);
    if (temp_v0 != (-1))
    {
      temp_v0_2 = temp_v0 * 0x2C;
      {
        *((s16 *) (D_801D7DF4 + temp_v0_2)) = temp_v0;
        *((u16 *) (D_801D7E04 + temp_v0_2)) = D_80203ABA;
      }
      func_8002D030(temp_v0);
      n_alSndpSetVol(*((s16 *) (D_801D75E6 - (-(D_80203AB8 * 0xC)))));
    }
  }
  if (D_801E9994 == 1)
  {
    func_8002D030(D_80203ABE);
    n_alSndpStop();
    *((s32 *) (D_801D7DF4 + (D_80203ABC * 0x2C))) = -1;
  }
  if (D_801E999C == 1)
  {
    if (D_80203ACA == 4)
    {
      D_80203ACA = 0;
    }
    else
    {
      D_80203ACA += 1;
    }
  }
  if (D_801E99C4 == 1)
  {
    if (D_80203ACA == 0)
    {
      var_v0_2 = 4;
    }
    else
    {
      var_v0_2 = D_80203ACA - 1;
    }
    D_80203ACA = var_v0_2;
  }
  if (D_801E995B)
  {
    func_8002D030(D_80203ABE);
    var_fs0 = (f32) D_801E995B;
  }
  else
  {
    func_8002D030(D_80203ABE);
    var_fs0 = (f32) D_801E995B;
  }
  if (var_fs0 > 10.0f)
  {
    if (var_fs0 > 60.0f)
    {
      var_fs0 = 60.0f;
    }
    var_fs0_2 = var_fs0 - 10.0f;
    do { var_fv1 = *((f32 *) (D_802025F0 + (D_80203ACA * 0xC))); } while (0);
    var_fv0 = var_fs0_2 / 50.0f;
    n_alSndpSetPitch((var_fv0 * var_fv1) + 1.0f);
    *((f32 *) (D_801D7E00 + (D_80203ABC * 0x2C))) = var_fs0_2;
  }
  else
    if (var_fs0 < (-10.0f))
  {
    if (var_fs0 < (-60.0f))
    {
      var_fs0 = -60.0f;
    }
    __repair_phase_var_fs0_2 = var_fs0 + 10.0f;
    var_fv0 = __repair_phase_var_fs0_2 / 50.0f;
    do { do { do { var_fv1 = *((f32 *) (D_802025EC + (D_80203ACA * 0xC))); } while (0); } while (0); } while (0);
    n_alSndpSetPitch((var_fv0 * var_fv1) + 1.0f);
    *((f32 *) (D_801D7E00 + (D_80203ABC * 0x2C))) = __repair_phase_var_fs0_2;
  }
  else
  {
    n_alSndpSetPitch(1.0f);
  }
  func_8002D030(D_80203ABE);
  do { var_fs1 = (f32) D_801E995A; } while (0);
  if (var_fs1 >= (10.0f + 1))
  {
    temp_fs1 = var_fs1 - 10.0f;
    temp_fv1 = temp_fs1 + 64.0f;
    if (temp_fv1 >= 2.1474836e9f)
    {
      ;
      n_alSndpSetPan(inline_fn(temp_fv1 - 2.1474836e9f, 0x80000000) & 0xFF);
    }
    else
    {
      var_a0 = (s32) temp_fv1;
      n_alSndpSetPan(var_a0 & 0xFF);
    }
    if (D_80203AB8)
    {
      if (1)
      {
      }
      var_fv1_2 = temp_fs1 + 64.0f;
      var_a1 = D_80203ABC * 0x2C;
    }
    else
    {
      var_fv1_2 = temp_fs1 + 64.0f;
      var_a1 = D_80203ABC * 0x2C;
    }
    if (var_fv1_2 >= ((unsigned char) 2.1474836e9f))
    {
      var_fv0_2 = var_fv1_2 - 2.1474836e9f;
      goto block_56;
    }
    goto block_54;
  }
  if (var_fs1 < (-10.0f))
  {
    if (var_fs1 < (-74.0f))
    {
      __repair_var_fs1_1 = -74.0f;
    }
    __repair_var_fs1_1 = __repair_var_fs1_1 + 10.0f;
    temp_fv1_2 = __repair_var_fs1_1 + 64.0f;
    if (!(temp_fv1_2 >= 2.1474836e9f))
    {
      do { var_a0_2 = (s32) temp_fv1_2; } while (0);
      n_alSndpSetPan(var_a0_2 & 0xFF);
    }
    else
    {
      do { do { do { var_a0_2 = (s32) (temp_fv1_2 - 2.1474836e9f); } while (0); } while (0); } while (0); var_a0_2 = var_a0_2 | 0x80000000;
      n_alSndpSetPan(var_a0_2 & 0xFF);
    }
    var_fv1_2 = __repair_var_fs1_1 + 64.0f;
    do { var_a1 = D_80203ABC * 0x2C; } while (0);
    if (!(var_fv1_2 >= 2.1474836e9f))
    {
      block_54:
      var_a0 = (s32) var_fv1_2;

    }
    else
    {
      var_fv0_2 = var_fv1_2 - 2.1474836e9f;
      block_56:
      var_a0 = inline_fn(var_fv0_2, 0x80000000);

    }
    *((s8 *) (D_801D7E08 + var_a1)) = (s8) var_a0;
  }
  else
  {
    n_alSndpSetPan(0x3F);
  }
  if (D_801E99C0 == 1)
  {
    D_80203AC0 = 0;
  }
}


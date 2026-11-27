s16 func_80027EE0(s32);
void func_8002D030(s16);
void n_alSndpSetPan(u8);
void n_alSndpSetPitch(f32);
void n_alSndpSetVol(s16);
void n_alSndpStop(void);
typedef struct { s16 vol; u8 pad[10]; } Sound;
typedef struct { s16 id; u8 pad0[10]; f32 pitch; u16 vol; u8 pad1[2]; u8 pan; u8 pad2[23]; } Slot;
typedef struct { f32 down; f32 up; u8 pad[4]; } Range;
extern Sound D_801D75E6[];
extern Slot D_801D7DF4[];
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
extern Range D_802025EC[];
extern u8 D_802025F0[];
extern s32 D_80203AB8;
extern u16 D_80203ABA;
extern s32 D_80203ABC;
extern s16 D_80203ABE;
extern s32 D_80203AC0;
extern u8 D_80203ACA;
void func_801FF37C(s32 arg0)
{
  f32 x, y, pitch;
  s16 temp_v0;
  s32 temp_v0_2;
  s32 var_v0;
  u8 var_v0_2;
  if (D_801E99A0 == 1)
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
        D_801D7DF4[temp_v0].id = temp_v0;
        D_801D7DF4[temp_v0].vol = D_80203ABA;
      }
      func_8002D030(temp_v0);
      n_alSndpSetVol(D_801D75E6[D_80203AB8].vol);
    }
  }
  if (D_801E9994 == 1)
  {
    func_8002D030(D_80203ABE);
    n_alSndpStop();
    D_801D7DF4[D_80203ABC].id = -1;
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
  func_8002D030(D_80203ABE);
  x = D_801E995B;
  do { if (x > 10.0f) {
    if (x > 60.0f) x = 60.0f;
    x -= 10.0f;
    pitch = D_802025EC[D_80203ACA].up * (x / 50.0f);
    n_alSndpSetPitch(pitch + 1.0f);
    D_801D7DF4[D_80203ABC].pitch = x;
  } else if (x < -10.0f) {
    if (x < -60.0f) x = -60.0f;
    x += 10.0f;
    pitch = D_802025EC[D_80203ACA].down * (x / 50.0f);
    n_alSndpSetPitch(pitch + 1.0f);
    D_801D7DF4[D_80203ABC].pitch = x;
  } else n_alSndpSetPitch(1.0f); } while (0);
  func_8002D030(D_80203ABE);
  y = D_801E995A;
  if (y > 10.0f) {
    y -= 10.0f;
    n_alSndpSetPan(y + 64.0f);
    D_801D7DF4[D_80203ABC].pan = (u32)(y + 64.0f);
  } else if (y < -10.0f) {
    if (y < -74.0f) y = -74.0f;
    y += 10.0f;
    n_alSndpSetPan(y + 64.0f);
    D_801D7DF4[D_80203ABC].pan = (u32)(y + 64.0f);
  } else n_alSndpSetPan(0x3f);
  if (D_801E99C0 == 1)
  {
    var_v0 = (s32)x; D_80203AC0 = var_v0 & ~var_v0;
  }
}


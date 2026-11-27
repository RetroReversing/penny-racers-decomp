typedef struct { u8 pad0[0x3E]; u16 timer; u8 pad40[4]; f32 unk44; f32 unk48; f32 unk4C; u8 pad50[0x14]; } RFB;
typedef struct { u8 pad0[0xA]; u16 unkA; } NFB;
typedef struct { NFB *p; u8 pad[0x60]; } PFB;
typedef struct { f32 eye[3]; f32 at[3]; f32 up[3]; } CFB;
extern RFB D_8011F2F0[];
extern PFB sPathNodes[];
extern CFB D_80221080[];
extern f32 D_802038A0;
extern f32 D_802038A4;
extern f32 D_802038A8;
extern f32 D_802038AC;
extern f32 D_802038B0;
extern f32 D_802038B4;
extern f32 D_802038B8;
extern u16 D_802038BC;
extern u16 D_802038BE;
extern u16 D_80233EC0;
f32 __sinf(f32);
f32 __cosf(f32);
f32 sqrtf(f32);

#define RAD(a) ((f32) ((a) * 3.14 / 180.0))
#define EYE() \
  c = &D_80221080[cam]; \
  { f32 t = __sinf(RAD(D_802038A0)) * D_802038A4; \
  t -= __sinf(RAD(D_802038A0)) * __sinf(RAD(D_802038AC)) * D_802038A4; \
  t += D_80221080[cam].at[0]; \
  D_80221080[cam].eye[0] = t; } \
  D_80221080[cam].eye[1] = __sinf(RAD(D_802038AC)) * D_802038A4 + D_80221080[cam].at[1]; \
  { f32 t = __cosf(RAD(D_802038A0)) * D_802038A4; \
  t -= __cosf(RAD(D_802038A0)) * __sinf(RAD(D_802038AC)) * D_802038A4; \
  t += D_80221080[cam].at[2]; \
  D_80221080[cam].eye[2] = t; }

void func_801FBBFC(u16 arg0)
{
  u16 cam = 1;
  f32 k = 0.02f;
  f32 dx;
  CFB *c;
  f32 dy;
  f32 dz;

  switch (D_8011F2F0[arg0].timer)
  {
    case 0:
      D_802038A0 = 0;
      D_802038A4 = 200.0f;
      D_802038A8 = 0;
      D_802038AC = 15.0f;
      D_802038BC = D_80233EC0;
      D_802038BE = sPathNodes[D_802038BC].p->unkA;
      D_802038B0 = D_8011F2F0[D_802038BE].unk44;
      D_802038B4 = D_8011F2F0[D_802038BE].unk48;
      D_802038B8 = D_8011F2F0[D_802038BE].unk4C;
      D_80221080[cam].at[0] = D_8011F2F0[D_802038BC].unk44;
      D_80221080[cam].at[1] = D_8011F2F0[D_802038BC].unk48 + -50.0f;
      D_80221080[cam].at[2] = D_8011F2F0[D_802038BC].unk4C;
      EYE();
      D_8011F2F0[arg0].timer = 1;
      break;
    case 1:
      D_80221080[cam].at[0] = (D_802038B0 - D_80221080[cam].at[0]) * k + D_80221080[cam].at[0];
      D_80221080[cam].at[1] = (D_802038B4 - D_80221080[cam].at[1]) * k + D_80221080[cam].at[1];
      D_80221080[cam].at[2] = (D_802038B8 - D_80221080[cam].at[2]) * k + D_80221080[cam].at[2];
      dx = D_802038B0 - D_80221080[cam].at[0];
      dy = D_802038B4 - D_80221080[cam].at[1];
      dz = D_802038B8 - D_80221080[cam].at[2];
      if (sqrtf(dx * dx + dy * dy + dz * dz) < 100.0f)
      {
        D_802038BC = D_802038BE;
        D_802038BE = sPathNodes[D_802038BC].p->unkA;
        D_802038B0 = D_8011F2F0[D_802038BE].unk44;
        D_802038B4 = D_8011F2F0[D_802038BE].unk48;
        D_802038B8 = D_8011F2F0[D_802038BE].unk4C;
      }
      D_802038A0 = D_802038A8;
      if (D_802038A8 >= 360.0f)
      {
        D_802038A8 = 0;
      }
      else
      {
        D_802038A8 = D_802038A8 + 0.5;
      }
      EYE();
      break;
  }
}

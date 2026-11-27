typedef struct { u8 pad0[0x3E]; u16 timer; u8 pad40[4]; f32 unk44; f32 unk48; f32 unk4C; u8 pad50[0x14]; } RFB;
typedef struct { u8 pad0[0xA]; u16 unkA; } NFB;
typedef struct { NFB *p; u8 pad[0x60]; } PFB;
typedef struct { f32 eye[3]; f32 at[3]; f32 up[3]; } CFB;
typedef struct { u8 pad0[0x10]; u32 unk10; u32 unk14; u32 unk18; u32 unk1C; u8 pad20[0x14]; u32 unk34; u8 pad38[0x38]; } IFB;
extern IFB D_801E9990[];
extern RFB D_8011F2F0[];
extern PFB sNodeTable[];
extern CFB D_80221080[];
extern f32 D_801FFD20;
extern f32 D_801FFD24;
extern f32 D_801FFD28;
extern f32 D_801FFD2C;
extern f32 D_80203890;
extern f32 D_80203894;
extern f32 D_80203898;
extern u16 D_8020389C;
extern u16 D_8020389E;
extern u16 D_80233EC0;
f32 __sinf(f32);
f32 __cosf(f32);
f32 sqrtf(f32);

#define RAD(a) ((f32) ((a) * 3.14 / 180.0))
#define EYE() \
  c = &D_80221080[cam]; \
  { f32 t = __sinf(RAD(D_801FFD20)) * D_801FFD24; \
  t -= __sinf(RAD(D_801FFD20)) * __sinf(RAD(D_801FFD2C)) * D_801FFD24; \
  t += D_80221080[cam].at[0]; \
  D_80221080[cam].eye[0] = t; } \
  D_80221080[cam].eye[1] = __sinf(RAD(D_801FFD2C)) * D_801FFD24 + D_80221080[cam].at[1]; \
  { f32 t = __cosf(RAD(D_801FFD20)) * D_801FFD24; \
  t -= __cosf(RAD(D_801FFD20)) * __sinf(RAD(D_801FFD2C)) * D_801FFD24; \
  t += D_80221080[cam].at[2]; \
  D_80221080[cam].eye[2] = t; }

void func_801FB300(u16 arg0)
{
  s32 i = 0;
  s32 off;
  u16 cam = 1;
  f32 k = 0.02f;
  f32 dx;
  CFB *c;
  f32 dy;
  f32 dz;

  switch (D_8011F2F0[arg0].timer)
  {
    case 0:
      D_8020389C = D_80233EC0;
      D_8020389E = sNodeTable[D_8020389C].p->unkA;
      D_80203890 = D_8011F2F0[D_8020389E].unk44;
      D_80203894 = D_8011F2F0[D_8020389E].unk48;
      D_80203898 = D_8011F2F0[D_8020389E].unk4C;
      D_80221080[cam].at[0] = D_8011F2F0[D_8020389C].unk44;
      D_80221080[cam].at[1] = D_8011F2F0[D_8020389C].unk48 + -50.0f;
      D_80221080[cam].at[2] = D_8011F2F0[D_8020389C].unk4C;
      EYE();
      D_8011F2F0[arg0].timer = 1;
      break;
    case 1:
      if (D_801E9990[0].unk18 != 0)
      {
        D_801FFD28 += 1.0f;
        if (D_801FFD28 >= 360.0f)
        {
          D_801FFD28 -= 360.0f;
        }
      }
      off = i ? 0 : 0;
      if (D_801E9990[0].unk1C != 0)
      {
        D_801FFD28 -= 1.0f;
        if (D_801FFD28 < 0.0f)
        {
          D_801FFD28 += 360.0f;
        }
      }
      if (*(u32 *) ((u8 *) &D_801E9990[0].unk34 + off) != 0)
      {
        if (*(u32 *) ((u8 *) &D_801E9990[0].unk10 + off) != 0)
        {
          D_801FFD2C += 1.0f;
          if (D_801FFD2C > 85.0f)
          {
            D_801FFD2C = 85.0f;
          }
        }
        if (D_801E9990[0].unk14 != 0)
        {
          D_801FFD2C -= 1.0f;
          if (D_801FFD2C < 0.0f)
          {
            D_801FFD2C = 0.0f;
          }
        }
      }
      else
      {
        if (D_801E9990[0].unk10 != 0)
        {
          if (D_801FFD24 > 2.0f)
          {
            if (D_801E9990[0].unk10 > 0x14)
            {
              D_801FFD24 -= 4.0f;
            }
            else
            {
if (i != 0) { D_801FFD24 -= 1.0f; } else { D_801FFD24 -= 1.0f; }
            }
          }
        }
        if (D_801E9990[0].unk14 != 0)
        {
          if (D_801FFD24 < 5000.0f)
          {
            if (D_801E9990[0].unk14 > 0x14)
            {
              D_801FFD24 += 4.0f;
            }
            else
            {
              D_801FFD24 += 1.0f;
            }
          }
        }
      }
      D_80221080[cam].at[0] = (D_80203890 - D_80221080[cam].at[0]) * k + D_80221080[cam].at[0];
      D_80221080[cam].at[1] = (D_80203894 - D_80221080[cam].at[1]) * k + D_80221080[cam].at[1];
      D_80221080[cam].at[2] = (D_80203898 - D_80221080[cam].at[2]) * k + D_80221080[cam].at[2];
      dx = D_80203890 - D_80221080[cam].at[0];
      dy = D_80203894 - D_80221080[cam].at[1];
      dz = D_80203898 - D_80221080[cam].at[2];
      if (sqrtf(dx * dx + dy * dy + dz * dz) < 40.0f)
      {
        D_8020389C = D_8020389E;
        D_8020389E = sNodeTable[D_8020389C].p->unkA;
        D_80203890 = D_8011F2F0[D_8020389E].unk44;
        D_80203894 = D_8011F2F0[D_8020389E].unk48;
        D_80203898 = D_8011F2F0[D_8020389E].unk4C;
      }
      D_801FFD20 = D_801FFD28;
      EYE();
      break;
  }
}

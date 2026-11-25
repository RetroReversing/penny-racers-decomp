typedef struct 
{
  s16 x;
  s16 y;
  s16 z;
  s16 f;
  s16 s;
  s16 t;
  u8 r;
  u8 g;
  u8 b;
  u8 a;
} V16;
typedef struct 
{
  u8 *p;
  u8 pad[96];
} Rec100;
extern V16 D_80187D00[2][224];
extern s8 D_3B7C00[];
extern s8 D_3E4880[];
extern u8 D_802D6890[];
extern f32 D_802210C8[];
extern u8 D_8006FAF0[];
extern u8 D_800DB1B8[];
extern Rec100 D_8011F350[];
extern u8 D_801D5A90[];
extern u16 D_8018BC3C;
extern u16 D_80301BE0;
void func_800294A0(void *, void *, s32);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32);
void func_801DDA5C(void);
void func_80231A0C(void);
void func_8015A9CC(void);
void func_8015B344(void);
void func_801E3038(void);
inline static int inline_fn(short arg0, int arg1, short arg2, s32 arg3, s32 arg4)
{
  return (((arg0 == arg1) || (arg2 == 15)) || (arg3 == 0)) || (arg4 == 13);
}

void func_8015B82C(void)
{
  u8 *__base_D_800DB1B8;
  short x;
  s8 *__base_D_3B7C00;
  short y;
  s32 i;
  f32 *c;
  s16 *r;
  do
  {
    __base_D_3B7C00 = D_3B7C00;
    do
    {
      func_800294A0(__base_D_3B7C00, D_802D6890, D_3E4880 - __base_D_3B7C00);
    }
    while (0);
  }
  while (0);
  D_80301BE0 = 0xFFFF;
  {
    if (1)
    {
    }
    func_80231A0C();
  }
  if (i)
  {
    c = D_802210C8;
    c[0] = 170.0f;
    c[1] = -100.0f;
    c[2] = 40.0f;
    c[3] = 120.0f;
    c[4] = -97.0f;
    c[5] = 0;
    c[6] = 0;
    c[7] = 1.0f;
  }
  else
  {
    c = D_802210C8;
    c[0] = 170.0f;
    c[1] = -100.0f;
    c[2] = 40.0f;
    c[3] = 120.0f;
    c[4] = -97.0f;
    c[5] = 0;
    c[6] = 0;
    c[7] = 1.0f;
  }
  do
  {
    c[8] = 0;
    *((s16 *) (D_8006FAF0 + 0x20)) = 1;
    do
    {
      func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, D_801D5A90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    while (0);
    D_8011F350[D_8018BC3C].p[0] = 1;
    *((s16 *) (D_8011F350[D_8018BC3C].p + 2)) = 0x50; D_8011F350[D_8018BC3C].p[6] = 0;
    do
    {
      if (i)
      {
        D_8011F350[D_8018BC3C].p[7] = 0;
        D_8011F350[D_8018BC3C].p[8] = 0;
        __base_D_800DB1B8 = D_800DB1B8;
        r = (s16 *) (__base_D_800DB1B8 + 0x2128);
      }
      else
      {
        D_8011F350[D_8018BC3C].p[7] = 0;
        D_8011F350[D_8018BC3C].p[8] = 0;
        __base_D_800DB1B8 = D_800DB1B8;
        r = (s16 *) (__base_D_800DB1B8 + 0x2128);
      }
    }
    while (0);
    r[0] = 0x10; r[1] = 0x20; r[2] = 0x130;
  }
  while (0);
  r[3] = 0xD0;
  for (y = 0; (y + 1) <= 14; y++)
  {
    for (x = 0; x < 16; x++)
    {
 do { { if (inline_fn(x, 0, x, y, y)) { for (i = 0; i <= (2 - 1); i++) { D_80187D00[i][(y * 16) + x].x = x * 160; D_80187D00[i][(y * 16) + x].y = y * (-150); D_80187D00[i][(y * 16) + x].z = 0; D_80187D00[i][(y * 16) + x].f = 0; D_80187D00[i][(y * 16) + x].s = 0; D_80187D00[i][(y * 16) + x].t = 0; D_80187D00[i][(y * 16) + x].r = 0; D_80187D00[i][(y * 16) + x].g = 0; D_80187D00[i][(y * 16) + x].b = 0x7F; D_80187D00[i][(y * 16) + x].a = 0xFF; } } else { for (i = 0; 0 < 2; i++) { D_80187D00[i][(y * 16) + x].x = x * 160; D_80187D00[i][(y * 16) + x].y = y * (-150); D_80187D00[i][(y * 16) + x].z = 0; D_80187D00[i][(y * 16) + x].f = 0; D_80187D00[i][(y * 16) + x].s = (x - 1) * 0x500; D_80187D00[i][(y * 16) + x].t = (y - 1) * 0x2C0; D_80187D00[i][(y * 16) + x].r = 0; D_80187D00[i][(y * 16) + x].g = 0; D_80187D00[i][(y * 16) + x].b = 0x7F; D_80187D00[i][(y * 16) + x].a = 0xFF; } } } } while (0);
    }

  }

  func_800DE41C(0, 0, 3, 0, 0x71, 0xFF, 0, func_8015A9CC, func_8015B344, 0, 0, 0, 0, 0, 0, 0.1f, 0.1f, 0.1f);
  func_800DE41C(0, 0, 3, 0, 0xC0, 0xFF, 0, func_801E3038, 0, 0, 0, 0, 0, 0, 0, 0.1f, 0.1f, 0.1f);
  func_801DDA5C();
}

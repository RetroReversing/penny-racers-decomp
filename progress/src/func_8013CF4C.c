typedef struct { f32 v[8]; } V8;
typedef struct { short ob[3]; unsigned short flag; short tc[2]; unsigned char cn[4]; } V16;
typedef struct { u16 state; u8 pad[0x62]; } R64;
f32 __sinf(f32);
extern void func_8013AE60(u16);
extern R64 D_8011F32E[];
extern V16 D_80167FB8[];
extern V8 D_80183308;
extern f32 D_80183B80[8];
extern s32 D_80183BA0;
void func_8013CF4C(u16 arg0)
{
  V8 sp = D_80183308;
  s32 i;
  func_8013AE60(arg0);
  switch (D_8011F32E[arg0].state) {
  case 0:
    for (i = 0; i < 8; i++) {
      D_80183B80[i] = i * 45;
    }
    D_80183BA0 = 0;
    D_8011F32E[arg0].state = 1;
    break;
  case 1:
    for (i = 0; i < 8; i++) {
      if (D_80183B80[i] < 360.0f) {
        D_80183B80[i] = D_80183B80[i] + 4.0;
      } else {
        D_80183B80[i] = D_80183B80[i] - 360.0f;
      }
    }
    for (i = 0; i < 8; i++) {
      D_80167FB8[i].ob[2] = D_80167FB8[i + 8].ob[2] = ({ __sinf((f32)(D_80183B80[i] * 3.14 / 180.0)); }) * sp.v[i];    }
    break;
  }
}

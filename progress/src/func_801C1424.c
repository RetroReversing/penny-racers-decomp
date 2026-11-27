typedef struct { f32 v[8]; } V8;
typedef struct { short ob[3]; unsigned short flag; short tc[2]; unsigned char cn[4]; } V16;
typedef struct { u16 state; u8 pad[0x62]; } R64;
f32 __sinf(f32);
extern void liftCopyFlags(u16);
extern R64 playerSlots[];
extern u8 D_801C6BAC;
extern V16 waveVertices[];
extern V8 waveAmplitudes;
extern f32 D_801C6B60[8];
extern s32 D_801C6B80;
void func_801C1424(u16 arg0)
{
  V8 sp = waveAmplitudes;
  s32 i;
  if (D_801C6BAC == 0) {
    liftCopyFlags(arg0);
  }
  switch (playerSlots[arg0].state) {
  case 0:
    for (i = 0; i < 8; i++) {
      D_801C6B60[i] = i * 45.0f;
    }
    D_801C6B80 = 0;
    playerSlots[arg0].state = 1;
    break;
  case 1:
    for (i = 0; i < 8; i++) {
      if (D_801C6B60[i] < 360.0f) {
        D_801C6B60[i] = D_801C6B60[i] + 4.0f;
      } else {
        D_801C6B60[i] = D_801C6B60[i] - 360.0f;
      }
    }
    for (i = 0; i < 8; i++) {
      waveVertices[i].ob[2] = waveVertices[i + 8].ob[2] = ({ __sinf((f32)(D_801C6B60[i] * 3.1415927f / 180.0f)); }) * sp.v[i];    }
    break;
  }
}


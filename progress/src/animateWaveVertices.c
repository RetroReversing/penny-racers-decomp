typedef struct { f32 v[8]; } V8;
typedef struct { short ob[3]; unsigned short flag; short tc[2]; unsigned char cn[4]; } V16;
typedef struct { u16 state; u8 pad[0x62]; } R64;
f32 __sinf(f32);
extern void liftCopyFlags(u16);
extern R64 playerSlots[];
extern u8 D_801C6BAC;
extern V16 waveVertices[];
extern V8 waveAmplitudes;
extern f32 waveAngles[8];
extern s32 D_801C6B80;

/* Animates one racer's wave: spreads eight vertex-pair heights around a sine with a phase that advances 4 degrees per frame. */
void animateWaveVertices(u16 arg0)
{
  V8 amps = waveAmplitudes;
  s32 i;
  if (D_801C6BAC == 0) {
    liftCopyFlags(arg0);
  }
  switch (playerSlots[arg0].state) {
  case 0:
    for (i = 0; i < 8; i++) {
      waveAngles[i] = i * 45.0f;
    }
    D_801C6B80 = 0;
    playerSlots[arg0].state = 1;
    break;
  case 1:
    for (i = 0; i < 8; i++) {
      if (waveAngles[i] < 360.0f) {
        waveAngles[i] = waveAngles[i] + 4.0f;
      } else {
        waveAngles[i] = waveAngles[i] - 360.0f;
      }
    }
    for (i = 0; i < 8; i++) {
      waveVertices[i].ob[2] = waveVertices[i + 8].ob[2] = ({ __sinf((f32)(waveAngles[i] * 3.1415927f / 180.0f)); }) * amps.v[i];
    }
    break;
  }
}

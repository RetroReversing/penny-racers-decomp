typedef struct { f32 v[8]; } V8;
typedef struct { short ob[3]; unsigned short flag; short tc[2]; unsigned char cn[4]; } V16;
typedef struct { u16 state; u8 pad[0x62]; } R64;
f32 __sinf(f32);
extern void liftCopyFlags(u16);
extern R64 playerSlots[];
extern V16 waveVertices[];
extern V8 altWaveAmplitudes;
extern f32 altWaveAngles[8];
extern s32 D_80183BA0;

/* Same wave animation as animateWaveVertices, using the alternate amplitude and phase tables. */
void animateWaveVerticesAlt(u16 arg0)
{
  V8 amps = altWaveAmplitudes;
  s32 i;
  liftCopyFlags(arg0);
  switch (playerSlots[arg0].state) {
  case 0:
    for (i = 0; i < 8; i++) {
      altWaveAngles[i] = i * 45;
    }
    D_80183BA0 = 0;
    playerSlots[arg0].state = 1;
    break;
  case 1:
    for (i = 0; i < 8; i++) {
      if (altWaveAngles[i] < 360.0f) {
        altWaveAngles[i] = altWaveAngles[i] + 4.0;
      } else {
        altWaveAngles[i] = altWaveAngles[i] - 360.0f;
      }
    }
    for (i = 0; i < 8; i++) {
      waveVertices[i].ob[2] = waveVertices[i + 8].ob[2] = ({ __sinf((f32)(altWaveAngles[i] * 3.14 / 180.0)); }) * amps.v[i];
    }
    break;
  }
}

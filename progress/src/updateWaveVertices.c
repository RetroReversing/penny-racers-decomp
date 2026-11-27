typedef struct { f32 v[8]; } V8;
typedef struct { short ob[3]; unsigned short flag; short tc[2]; unsigned char cn[4]; } V16;
typedef struct { u16 state; u8 pad[0x62]; } R64;
f32 __sinf(f32);
extern void liftCopyFlags(u16);
extern R64 playerSlots[];
extern u8 D_801C6BAC;
extern V16 waveVertices[];
extern V8 waveAmplitudes;
extern f32 wavePhases[8];
extern s32 D_801C6BA8;
/* Advances the 8-point wave animation and writes each pair's Z offset from its sine value times amplitude; the first call per state initialises the phases. */
void updateWaveVertices(u16 stateIndex)
{
  V8 amplitudes = waveAmplitudes;
  s32 k;
  if (D_801C6BAC == 0) {
    liftCopyFlags(stateIndex);
  }
  switch (playerSlots[stateIndex].state) {
  case 0:
    for (k = 0; k < 8; k++) {
      wavePhases[k] = k * 45.0f;
    }
    D_801C6BA8 = 0;
    playerSlots[stateIndex].state = 1;
    break;
  case 1:
    for (k = 0; k < 8; k++) {
      if (wavePhases[k] < 360.0f) {
        wavePhases[k] = wavePhases[k] + 4.0f;
      } else {
        wavePhases[k] = wavePhases[k] - 360.0f;
      }
    }
    for (k = 0; k < 8; k++) {
      waveVertices[k].ob[2] = waveVertices[k + 8].ob[2] = ({ __sinf((f32)(wavePhases[k] * 3.1415927f / 180.0f)); }) * amplitudes.v[k];
    }
    break;
  }
}

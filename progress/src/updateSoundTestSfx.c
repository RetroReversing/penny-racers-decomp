s16 sndStartSound(s32);
void sndSetActiveVoice(s16);
void n_alSndpSetPan(u8);
void n_alSndpSetPitch(f32);
void n_alSndpSetVol(s16);
void n_alSndpStop(void);
typedef struct { s16 vol; u8 pad[10]; } Sound;
typedef struct { s16 id; u8 pad0[10]; f32 pitch; u16 vol; u8 pad1[2]; u8 pan; u8 pad2[23]; } Slot;
typedef struct { f32 down; f32 up; u8 pad[4]; } Range;
extern Sound soundDefs[];
extern Slot sndTestSlots[];
extern s8 stickY;
extern s8 stickX;
extern s32 btnPlayPressed;
extern s32 btnStopPressed;
extern s32 btnUpPressed;
extern s32 btnDownPressed;
extern s32 btnRightPressed;
extern s32 btnLeftPressed;
extern s32 btnCycleNextPressed;
extern s32 btnCyclePrevPressed;
extern s32 btnModePressed;
extern s32 sndTestIndex;
extern u16 sndTestVolume;
extern s32 sndTestSlot;
extern s16 sndTestVoice;
extern u8 sndTestPitchPreset;
extern s32 soundTestMode;
extern Range pitchRanges[];
/* Debug sound test, SFX mode: the pad picks a sound, slot and pitch/pan preset, plays or stops it, and the sticks drive pitch and pan. */
void updateSoundTestSfx(s32 unusedArg)
{
  f32 pitchAxis, panAxis, pitchScale;
  s16 voiceId;
  s32 slotOffset;
  s32 nextIndex;
  u8 nextPreset;
  if (btnUpPressed == 1)
  {
    if (sndTestIndex == 0x43)
    {
      sndTestIndex = 0;
    }
    else
    {
      sndTestIndex += 1;
    }
  }
  if (btnDownPressed == 1)
  {
    if (sndTestIndex == 0)
    {
      nextIndex = 0x43;
    }
    else
    {
      nextIndex = sndTestIndex - 1;
    }
    sndTestIndex = nextIndex;
  }
  if ((btnRightPressed == 1) && (sndTestSlot < 7))
  {
    sndTestSlot += 1;
  }
  if ((btnLeftPressed == 1) && (sndTestSlot > 0))
  {
    sndTestSlot -= 1;
  }
  if (btnPlayPressed == 1)
  {
    voiceId = sndStartSound(sndTestIndex);
    if (voiceId != (-1))
    {
      slotOffset = voiceId * 0x2C;
      {
        sndTestSlots[voiceId].id = voiceId;
        sndTestSlots[voiceId].vol = sndTestVolume;
      }
      sndSetActiveVoice(voiceId);
      n_alSndpSetVol(soundDefs[sndTestIndex].vol);
    }
  }
  if (btnStopPressed == 1)
  {
    sndSetActiveVoice(sndTestVoice);
    n_alSndpStop();
    sndTestSlots[sndTestSlot].id = -1;
  }
  if (btnCycleNextPressed == 1)
  {
    if (sndTestPitchPreset == 4)
    {
      sndTestPitchPreset = 0;
    }
    else
    {
      sndTestPitchPreset += 1;
    }
  }
  if (btnCyclePrevPressed == 1)
  {
    if (sndTestPitchPreset == 0)
    {
      nextPreset = 4;
    }
    else
    {
      nextPreset = sndTestPitchPreset - 1;
    }
    sndTestPitchPreset = nextPreset;
  }
  sndSetActiveVoice(sndTestVoice);
  pitchAxis = stickX;
  do { if (pitchAxis > 10.0f) {
    if (pitchAxis > 60.0f) pitchAxis = 60.0f;
    pitchAxis -= 10.0f;
    pitchScale = pitchRanges[sndTestPitchPreset].up * (pitchAxis / 50.0f);
    n_alSndpSetPitch(pitchScale + 1.0f);
    sndTestSlots[sndTestSlot].pitch = pitchAxis;
  } else if (pitchAxis < -10.0f) {
    if (pitchAxis < -60.0f) pitchAxis = -60.0f;
    pitchAxis += 10.0f;
    pitchScale = pitchRanges[sndTestPitchPreset].down * (pitchAxis / 50.0f);
    n_alSndpSetPitch(pitchScale + 1.0f);
    sndTestSlots[sndTestSlot].pitch = pitchAxis;
  } else n_alSndpSetPitch(1.0f); } while (0);
  sndSetActiveVoice(sndTestVoice);
  panAxis = stickY;
  if (panAxis > 10.0f) {
    panAxis -= 10.0f;
    n_alSndpSetPan(panAxis + 64.0f);
    sndTestSlots[sndTestSlot].pan = (u32)(panAxis + 64.0f);
  } else if (panAxis < -10.0f) {
    if (panAxis < -74.0f) panAxis = -74.0f;
    panAxis += 10.0f;
    n_alSndpSetPan(panAxis + 64.0f);
    sndTestSlots[sndTestSlot].pan = (u32)(panAxis + 64.0f);
  } else n_alSndpSetPan(0x3f);
  if (btnModePressed == 1)
  {
    nextIndex = (s32)pitchAxis; soundTestMode = nextIndex & ~nextIndex;
  }
}

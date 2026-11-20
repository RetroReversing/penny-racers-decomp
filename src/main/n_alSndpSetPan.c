#include "common.h"

typedef struct { u8 data[0x30]; } PR_SoundState;
typedef struct { u8 pad[0x3c]; s32 target; PR_SoundState *states; } PR_SoundPlayer;
typedef struct { u8 pad[12]; PR_SoundPlayer *snd; } PR_AudioGlobal;
typedef struct { s16 type; u16 pad; PR_SoundState *state; union {s8 mix; f32 pitch;} value; u8 extra[4]; } PR_SndEvent;
extern PR_AudioGlobal *D_80046DF4;
extern void alEvtqPostEvent(void *, PR_SndEvent *, s32);
void n_alSndpSetFXMix(s8 arg0) {
 PR_SndEvent evt;
 PR_SoundPlayer *p = D_80046DF4->snd;
 PR_SoundState *states = p->states;
 evt.type=8;
 evt.state=states+p->target;
 evt.value.mix=arg0;
 alEvtqPostEvent((u8*)p+0x14,&evt,0);
}
void n_alSndpSetPan(s8 arg0) {
 PR_SndEvent evt;
 PR_SoundPlayer *p = D_80046DF4->snd;
 PR_SoundState *states = p->states;
 evt.type=2;
 evt.value.mix=arg0;
 evt.state=states+p->target;
 alEvtqPostEvent((u8*)p+0x14,&evt,0);
}
void n_alSndpSetPitch(f32 arg0) {
 PR_SndEvent evt;
 PR_SoundPlayer *p = D_80046DF4->snd;
 PR_SoundState *states = p->states;
 evt.type=4;
 evt.state=states+p->target;
 evt.value.pitch=arg0;
 alEvtqPostEvent((u8*)p+0x14,&evt,0);
}

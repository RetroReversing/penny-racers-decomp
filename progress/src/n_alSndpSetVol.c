typedef struct { u8 pad[12]; N_ALSoundPlayerLayout *snd; } PR_AudioGlobal;
typedef struct { s16 type; u16 pad; N_ALSoundStateLayout *state; union { s16 vol; f32 pitch; } value; u8 extra[4]; } PR_VolEvent;
extern PR_AudioGlobal *D_80046DF4;
extern void alEvtqPostEvent(void *, PR_VolEvent *, s32);
void n_alSndpSetVol(s16 arg0) { PR_VolEvent evt; N_ALSoundPlayerLayout *p=D_80046DF4->snd; N_ALSoundStateLayout *states=p->states; evt.type=3; evt.state=states+p->target; evt.value.vol=arg0; alEvtqPostEvent((u8*)p+0x14,&evt,0); }

typedef struct { u8 pan; u8 vol; u8 pad2[2]; s32 program; u8 fx; u8 prio; u8 useA; u8 useB; u8 useC; u8 useD; u8 useE; u8 panSet; u8 volSet; u8 pad11[3]; s32 programSet; u8 fxSet; u8 prioSet; u8 pad1A[2]; } Chan;
typedef struct { s32 ticks; s32 tempo; s32 savedTempo; u16 vol; u16 pad; Chan chan[16]; } Audio;
typedef struct { u8 pad0[4]; s16 kind; u8 pad6[6]; s32 state; u8 pad10[0x1C]; } Snd;
extern Audio D_802038D8;
extern Snd D_801D7DF0[];
extern u8 D_8006FB38[];
s32 alCSPGetTempo(u8 *);
s16 func_8002C1D0(u8 *);
s32 func_8002C190(u8 *);
u8 func_8002C0D0(u8 *, s32);
u8 func_8002C090(u8 *, s32);
s32 alCSPGetChlProgram(u8 *, s32);
u8 func_8002C0B0(u8 *, s32);
u8 func_8002C0F0(u8 *, s32);
void func_8002C2E0(u8 *, s32, u8);
void func_8002C240(u8 *, s32, u8);
void func_8002C370(u8 *, s32, u8);
void alSeqpSetChlFXMix(u8 *, s32, u8);
void func_8002C330(u8 *, s32, u8);
void func_8002D030(s16);
s32 n_alSndpGetState(void);

/* Snapshots the sequencer's tempo, volume and per-channel settings, then restores pending overrides and refreshes sound slot states. */ void snapshotSoundDriverState(void) {
    u32 i;
    s32 sndState;
    Snd *sndSlot;

    if (D_802038D8.savedTempo == 0) {
        D_802038D8.savedTempo = alCSPGetTempo(D_8006FB38);
    } else {
        D_802038D8.tempo = alCSPGetTempo(D_8006FB38);
    }
    D_802038D8.vol = func_8002C1D0(D_8006FB38);
    D_802038D8.ticks = func_8002C190(D_8006FB38);
    for (i = 0; i < 16; i++) {
        D_802038D8.chan[i].pan = func_8002C0D0(D_8006FB38, (u8) i);
        D_802038D8.chan[i].vol = func_8002C090(D_8006FB38, (u8) i);
        D_802038D8.chan[i].program = alCSPGetChlProgram(D_8006FB38, (u8) i);
        D_802038D8.chan[i].fx = func_8002C0B0(D_8006FB38, (u8) i);
        D_802038D8.chan[i].prio = func_8002C0F0(D_8006FB38, (u8) i);
    }
    for (i = 0; i < 16; i++) {
        if (D_802038D8.chan[i].useA) {
            func_8002C2E0(D_8006FB38, (u8) i, D_802038D8.chan[i].panSet);
        } else {
            D_802038D8.chan[i].panSet = D_802038D8.chan[i].pan;
        }
        if (D_802038D8.chan[i].useB) {
            func_8002C240(D_8006FB38, (u8) i, D_802038D8.chan[i].volSet);
        } else {
            D_802038D8.chan[i].volSet = D_802038D8.chan[i].vol;
        }
        if (D_802038D8.chan[i].useC) {
            func_8002C370(D_8006FB38, (u8) i, D_802038D8.chan[i].programSet);
        } else {
            D_802038D8.chan[i].programSet = D_802038D8.chan[i].program;
        }
        if (D_802038D8.chan[i].useD) {
            alSeqpSetChlFXMix(D_8006FB38, (u8) i, D_802038D8.chan[i].fxSet);
        } else {
            D_802038D8.chan[i].fxSet = D_802038D8.chan[i].fx;
        }
        if (D_802038D8.chan[i].useE) {
            func_8002C330(D_8006FB38, (u8) i, D_802038D8.chan[i].prioSet);
        } else {
            D_802038D8.chan[i].prioSet = D_802038D8.chan[i].prio;
        }
    }
    for (i = 0; i < 8; i++) {
        func_8002D030(i);
        sndState = n_alSndpGetState();
        (&D_801D7DF0[i])->state = sndState;
        if (sndState == 0) {
            D_801D7DF0[i].kind = -1;
        }
    }
}

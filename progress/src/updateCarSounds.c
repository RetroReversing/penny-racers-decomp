typedef struct { s16 id; s16 b; s16 c; s16 pad6; f32 d; s16 e; u8 pad[0x2A]; } Sub;
typedef struct { u8 kind; u8 pad[0x5F3]; Sub sub[4]; u8 pad2[0x21C]; } Car;
typedef struct { u8 pad0[4]; s16 mode; u8 pad6[10]; f32 f; u8 pad14[0x18]; } Anim;
typedef struct { s16 x; u8 pad[10]; } Rec12;
extern Car sCars[];
extern Anim D_801D7DF0[];
extern Rec12 soundDefs[];
void playStageSound(s32, s16);
void playStageSoundVol(s32, s16, s16);
void stopStageSound(s32);

/* Per-frame: for each car's sound slots, starts queued sounds, plays or stops sampled sounds per command, and updates channel volume. */ void updateCarSounds(void) {
    u16 carIdx;
    u16 subIdx;
    s16 id;
    s16 b;
    s16 c;
    s16 e;
    f32 d;

    for (carIdx = 0; carIdx < 7; carIdx++) {
        if (sCars[carIdx].kind != 0xFF && carIdx < 6) {
            for (subIdx = 0; subIdx < 4; subIdx++) {
                b = sCars[carIdx].sub[subIdx].b;
                c = sCars[carIdx].sub[subIdx].c;
                d = sCars[carIdx].sub[subIdx].d;
                e = sCars[carIdx].sub[subIdx].e;
                id = sCars[carIdx].sub[subIdx].id;
                if (id != -1) {
                    if (e != -1) {
                        playStageSound(id, e);
                        D_801D7DF0[sCars[carIdx].sub[subIdx].id].f = 0.6f;
                        sCars[carIdx].sub[subIdx].e = e = -1;
                    } else {
                        if (D_801D7DF0[id].mode == -1 && b != -1 && c == 2) {
                            playStageSoundVol(id, b, soundDefs[b].x);
                            playStageSound(id, b);
                            sCars[carIdx].sub[subIdx].c = c = 0;
                        }
                        switch (c) {
                        case 1:
                            stopStageSound(id);
                            sCars[carIdx].sub[subIdx].b = b = -1;
                            sCars[carIdx].sub[subIdx].c = 0;
                            break;
                        case 2:
                            playStageSoundVol(id, b, soundDefs[b].x);
                            sCars[carIdx].sub[subIdx].c = 0;
                            break;
                        }
                        D_801D7DF0[id].f = d;
                    }
                }
            }
        }
    }
}

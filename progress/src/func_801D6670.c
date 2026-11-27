typedef struct { s16 id; s16 b; s16 c; s16 pad6; f32 d; s16 e; u8 pad[0x2A]; } Sub;
typedef struct { u8 kind; u8 pad[0x5F3]; Sub sub[4]; u8 pad2[0x21C]; } Car;
typedef struct { u8 pad0[4]; s16 mode; u8 pad6[10]; f32 f; u8 pad14[0x18]; } Anim;
typedef struct { s16 x; u8 pad[10]; } Rec12;
extern Car sCars[];
extern Anim D_801D7DF0[];
extern Rec12 D_801D75E6[];
void playStageSound(s32, s16);
void playStageSoundVol(s32, s16, s16);
void stopStageSound(s32);

void func_801D6670(void) {
    u16 i;
    u16 j;
    s16 id;
    s16 b;
    s16 c;
    s16 e;
    f32 d;

    for (i = 0; i < 7; i++) {
        if (sCars[i].kind != 0xFF && i < 6) {
            for (j = 0; j < 4; j++) {
                b = sCars[i].sub[j].b;
                c = sCars[i].sub[j].c;
                d = sCars[i].sub[j].d;
                e = sCars[i].sub[j].e;
                id = sCars[i].sub[j].id;
                if (id != -1) {
                    if (e != -1) {
                        playStageSound(id, e);
                        D_801D7DF0[sCars[i].sub[j].id].f = 0.6f;
                        sCars[i].sub[j].e = e = -1;
                    } else {
                        if (D_801D7DF0[id].mode == -1 && b != -1 && c == 2) {
                            playStageSoundVol(id, b, D_801D75E6[b].x);
                            playStageSound(id, b);
                            sCars[i].sub[j].c = c = 0;
                        }
                        switch (c) {
                        case 1:
                            stopStageSound(id);
                            sCars[i].sub[j].b = b = -1;
                            sCars[i].sub[j].c = 0;
                            break;
                        case 2:
                            playStageSoundVol(id, b, D_801D75E6[b].x);
                            sCars[i].sub[j].c = 0;
                            break;
                        }
                        D_801D7DF0[id].f = d;
                    }
                }
            }
        }
    }
}

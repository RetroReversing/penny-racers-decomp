extern s32 alCSPGetTempo(void *);
extern s32 alCSPGetChlProgram(void *, s32);
extern void alSeqpSetChlFXMix(void *, s32, s32);
extern s8 func_8002C090(void *, s32);
extern s8 func_8002C0B0(void *, s32);
extern s8 func_8002C0D0(void *, s32);
extern s8 func_8002C0F0(void *, s32);
extern s32 func_8002C190(void *);
extern s16 func_8002C1D0(void *);
extern void func_8002C240(void *, s32, s32);
extern void func_8002C2E0(void *, s32, s32);
extern void func_8002C330(void *, s32, s32);
extern void func_8002C370(void *, s32, s32);
extern void func_8002D030(s32);
extern s32 n_alSndpGetState(void);
extern u8 D_8006FB38;
extern u8 D_801D7DF0;
extern u8 D_801D7DF4;
extern s32 D_802038DC;
extern s32 D_802038E0;
extern u8 D_802038E4;
extern u8 D_802038E8;
extern u8 D_802038E9;
extern u8 D_802038EC;
extern u8 D_802038F0;
extern u8 D_802038F1;
extern u8 D_802038F2;
extern u8 D_802038F3;
extern u8 D_802038F4;
extern u8 D_802038F5;
extern u8 D_802038F6;
extern u8 D_802038F7;
extern u8 D_802038F8;
extern u8 D_802038FC;
extern u8 D_802038FF;
extern u8 D_80203900;
extern u8 D_80203901;

void func_801FF978(void) {
    s32 t;
    u32 i;
    u32 j;

    if (D_802038E0 == 0) {
        D_802038E0 = alCSPGetTempo(&D_8006FB38);
    } else {
        D_802038DC = alCSPGetTempo(&D_8006FB38);
    }
    *(s16 *)&D_802038E4 = func_8002C1D0(&D_8006FB38);
    *(s32 *)((u8 *)&D_802038E4 - 0xC) = func_8002C190(&D_8006FB38);
    for (i = 0; i < 16; i++) {
        t = i * 0x1C;
        *(&D_802038E8 + t) = func_8002C0D0(&D_8006FB38, i & 0xFF);
        *(&D_802038E9 + t) = func_8002C090(&D_8006FB38, i & 0xFF);
        *(s32 *)(&D_802038EC + t) = alCSPGetChlProgram(&D_8006FB38, i & 0xFF);
        *(&D_802038F0 + t) = func_8002C0B0(&D_8006FB38, i & 0xFF);
        *(&D_802038F1 + t) = func_8002C0F0(&D_8006FB38, i & 0xFF);
    }
    for (j = 0; j < 16; j++) {
        t = j * 0x1C;
        if (*(&D_802038F2 + t) != 0) {
            func_8002C2E0(&D_8006FB38, j & 0xFF, *(&D_802038F7 + t));
        } else {
            *(&D_802038F7 + t) = *(&D_802038E8 + t);
        }
        if (*(&D_802038F3 + t) != 0) {
            func_8002C240(&D_8006FB38, j & 0xFF, *(&D_802038F8 + t));
        } else {
            *(&D_802038F8 + t) = *(&D_802038E9 + t);
        }
        if (*(&D_802038F4 + t) != 0) {
            func_8002C370(&D_8006FB38, j & 0xFF, *(&D_802038FF + t));
        } else {
            *(s32 *)(&D_802038FC + t) = *(s32 *)(&D_802038EC + t);
        }
        if (*(&D_802038F5 + t) != 0) {
            alSeqpSetChlFXMix(&D_8006FB38, j & 0xFF, *(&D_80203900 + t));
        } else {
            *(&D_80203900 + t) = *(&D_802038F0 + t);
        }
        if (*(&D_802038F6 + t) != 0) {
            func_8002C330(&D_8006FB38, j & 0xFF, *(&D_80203901 + t));
        } else {
            *(&D_80203901 + t) = *(&D_802038F1 + t);
        }
    }
    for (i = 0; i < 8; i++) {
        func_8002D030(i);
        t = n_alSndpGetState();
        *(s32 *)((u8 *)&D_801D7DF0 + i * 0x2C + 0xC) = t;
        if (t == 0) {
            *(s32 *)((u8 *)&D_801D7DF4 + i * 0x2C) = -1;
        }
    }
}

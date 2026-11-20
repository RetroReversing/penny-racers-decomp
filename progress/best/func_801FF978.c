s32 alCSPGetChlProgram(void *, s32);
s32 alCSPGetTempo(void *);
void alSeqpSetChlFXMix(void *, s32, u8);
s8 func_8002C090(void *, s32);
s8 func_8002C0B0(void *, s32);
s8 func_8002C0D0(void *, s32);
s8 func_8002C0F0(void *, s32);
s32 func_8002C190(void *);
s16 func_8002C1D0(void *);
void func_8002C240(void *, s32, u8);
void func_8002C2E0(void *, s32, u8);
void func_8002C330(void *, s32, u8);
void func_8002C370(void *, s32, u8);
void func_8002D030(short);
s32 n_alSndpGetState(void);
extern u8 D_8006FB38[];
extern u8 D_801D7DF0[];
extern u8 D_801D7DF4[];
extern s32 D_802038DC;
extern s32 D_802038E0;
extern u8 D_802038E4[];
extern u8 D_802038E8[];

void func_801FF978(void) {
    register s32 *__base_D_802038E0;
    u8 *__base_D_802038E8;
    u8 *__base_D_801D7DF0;
    unsigned long i;
    u8 *base;

    __base_D_802038E0 = &D_802038E0;
    if ((*__base_D_802038E0) == 0) {
        (*__base_D_802038E0) = alCSPGetTempo(D_8006FB38);
    } else {
        D_802038DC = alCSPGetTempo(D_8006FB38);
    }
    *(s16 *)(D_802038E4) = func_8002C1D0(D_8006FB38);
    *(s32 *)(D_802038E4 - 0xC) = func_8002C190(D_8006FB38);
    for (i = 0; i < 0x10; i++) {
        base = __base_D_802038E8 + i * 0x1C;
        __base_D_802038E8 = D_802038E8;
        base[0] = func_8002C0D0((int)D_8006FB38, i & 0xFF);
        base[1] = func_8002C090(D_8006FB38, i & 0xFF);
        *(s32 *)(base + 4) = alCSPGetChlProgram(D_8006FB38, i & 0xFF);
        base[8] = func_8002C0B0(D_8006FB38, (u32)i & 0xFF);
        base[9] = func_8002C0F0(D_8006FB38, i & 0xFF);
    }
    for (i = 0; i < 0x10; i++) {
        base = (void *)(__base_D_802038E8); base = (void *)((char *)base + (s32)(i * 0x1C));
        if (base[10] != 0) {
            func_8002C2E0(D_8006FB38, i & 0xFF, base[15]);
        } else {
            base[15] = base[0];
        }
        if (base[11] != 0) {
            func_8002C240(D_8006FB38, i & 0xFF, base[16]);
        } else {
            base[16] = base[1];
        }
        if (base[12] != 0) {
            func_8002C370(D_8006FB38, i & 0xFF, base[23]);
        } else {
            base[20] = base[4];
        }
        if (base[13] != 0) {
            alSeqpSetChlFXMix(D_8006FB38, i & 0xFF, base[24]);
        } else {
            base[24] = base[8];
        }
        if (base[14] != 0) {
            func_8002C330(D_8006FB38, i & 0xFF, base[25]);
        } else {
            base[25] = base[9];
        }
    }
    for (i = 0; i < 8; i++) {
        func_8002D030(i);
        __base_D_801D7DF0 = D_801D7DF0;
        *(s32 *)(__base_D_801D7DF0 + i * 0x2C + 0xC) = n_alSndpGetState();
        if (*(s32 *)(__base_D_801D7DF0 + i * 0x2C + 0xC) == 0) {
            *(s32 *)((D_801D7DF4-4) + i * 0x2C) = -1;
        }
    }
}

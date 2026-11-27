extern void debugPrintf(void *, u16);
extern s32 func_8014A030(u16, s16, s32);
extern u8 D_80183740[];
extern u8 D_80189B34;
extern u16 D_80189C94;
extern u8 D_8018A43C;
extern u16 D_8018A44A[];
extern u32 randomMasks[];
extern s32 D_8018D3B8;
extern u8 D_8018D678;
extern u32 D_80168D54[];

typedef struct { u8 b0; u8 b1; u8 b2; u8 b3; u8 b4; } Rec5;
typedef struct {
    s16 f0; u8 pad2[0x14]; s16 f16[3];
} Cfg;
typedef struct {
    u8 pad0[6]; u16 f6; u8 pad8[0x228]; u16 f230; u8 pad232[0x306]; s32 f538; u8 pad53C[0x26]; Rec5 recs[4]; u8 pad576[0x20]; s8 f596;
} Save;
extern Cfg D_8021E18C;
extern Save sCars;

/* Works out which unlock flags the current save state earns, for the race scene; returns them as a bitmask. */ s32 computeUnlockFlags(void)
{
    u16 unlockFlags = 0;
    s32 idx;
    s32 anyMissing;

    if (D_80189B34 == 2) {
        if (D_8021E18C.f16[0] == 0) {
            Save *save = &sCars;
            debugPrintf(D_80183740, save->f6);
            if (save->f596 < 4) {
                D_8018A44A[D_8021E18C.f16[2]] = func_8014A030(D_8018A44A[D_8021E18C.f16[2]], D_8021E18C.f0, 1);
            }
            if (D_8021E18C.f16[2] == 2) {
                if (save->f596 == 1) {
                    D_80189C94 = func_8014A030(D_80189C94, D_8021E18C.f0, 1);
                }
                if (save->f230 == 0xA) {
                    D_8018A43C = 1;
                }
                if (((D_80189C94 & 0x1FF) == 0x1FF) && D_8018A43C) {
                    unlockFlags |= 0x800;
                }
                if (save->f596 < 4) {
                    for (idx = 1; idx < 4; idx++) {
                        if (save->recs[idx].b4 == 0x63) {
                            unlockFlags |= 1;
                        }
                    }
                    if (D_8021E18C.f0 == 2) {
                        for (idx = 1; idx < 4; idx++) {
                            if (save->recs[idx].b0 == 0 && save->recs[idx].b1 == 0 && save->recs[idx].b2 < 0x2A) {
                                unlockFlags |= 2;
                            }
                        }
                    }
                    if (save->f538 == 0x2000E) {
                        unlockFlags |= 8;
                    }
                    if (!(save->f6 & 0x10) && D_8021E18C.f0 == 5) {
                        unlockFlags |= 0x10;
                    }
                    if ((save->f6 & 0x40) && D_8021E18C.f0 == 4) {
                        unlockFlags |= 0x40;
                    }
                    if (D_8018D678 >= 0x1E) {
                        unlockFlags |= 0x100;
                    }
                    if ((D_8018D3B8 & 0x3FFFF) == 0x3FFFF) {
                        unlockFlags |= 0x200;
                    }
                    anyMissing = 0;
                    for (idx = 0; idx < 7; idx++) {
                        if ((randomMasks[idx] & D_80168D54[idx]) != D_80168D54[idx]) {
                            anyMissing = 1;
                        }
                    }
                    if (anyMissing == 0) {
                        unlockFlags |= 0x400;
                    }
                }
                if (save->f596 == 1) {
                    if (D_8021E18C.f0 == 7) {
                        unlockFlags |= 4;
                    }
                    if (D_8021E18C.f0 == 1) {
                        unlockFlags |= 0x80;
                    }
                    if (!(save->f6 & 4) && D_8021E18C.f0 == 6) {
                        unlockFlags |= 0x20;
                    }
                }
            }
        }
    }
    return unlockFlags;
}

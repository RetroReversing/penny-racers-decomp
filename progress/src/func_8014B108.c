extern void func_8003DE60(void *, u16);
extern s32 func_8014A030(u16, s16, s32);
extern u8 D_80183740[];
extern u8 D_80189B34;
extern u16 D_80189C94;
extern u8 D_8018A43C;
extern u16 D_8018A44A[];
extern u32 D_8018D3A0[];
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
extern Save D_8022A770;

s32 func_8014B108(void)
{
    u16 flags = 0;
    s32 i;
    s32 miss;

    if (D_80189B34 == 2) {
        if (D_8021E18C.f16[0] == 0) {
            Save *sv = &D_8022A770;
            func_8003DE60(D_80183740, sv->f6);
            if (sv->f596 < 4) {
                D_8018A44A[D_8021E18C.f16[2]] = func_8014A030(D_8018A44A[D_8021E18C.f16[2]], D_8021E18C.f0, 1);
            }
            if (D_8021E18C.f16[2] == 2) {
                if (sv->f596 == 1) {
                    D_80189C94 = func_8014A030(D_80189C94, D_8021E18C.f0, 1);
                }
                if (sv->f230 == 0xA) {
                    D_8018A43C = 1;
                }
                if (((D_80189C94 & 0x1FF) == 0x1FF) && D_8018A43C) {
                    flags |= 0x800;
                }
                if (sv->f596 < 4) {
                    for (i = 1; i < 4; i++) {
                        if (sv->recs[i].b4 == 0x63) {
                            flags |= 1;
                        }
                    }
                    if (D_8021E18C.f0 == 2) {
                        for (i = 1; i < 4; i++) {
                            if (sv->recs[i].b0 == 0 && sv->recs[i].b1 == 0 && sv->recs[i].b2 < 0x2A) {
                                flags |= 2;
                            }
                        }
                    }
                    if (sv->f538 == 0x2000E) {
                        flags |= 8;
                    }
                    if (!(sv->f6 & 0x10) && D_8021E18C.f0 == 5) {
                        flags |= 0x10;
                    }
                    if ((sv->f6 & 0x40) && D_8021E18C.f0 == 4) {
                        flags |= 0x40;
                    }
                    if (D_8018D678 >= 0x1E) {
                        flags |= 0x100;
                    }
                    if ((D_8018D3B8 & 0x3FFFF) == 0x3FFFF) {
                        flags |= 0x200;
                    }
                    miss = 0;
                    for (i = 0; i < 7; i++) {
                        if ((D_8018D3A0[i] & D_80168D54[i]) != D_80168D54[i]) {
                            miss = 1;
                        }
                    }
                    if (miss == 0) {
                        flags |= 0x400;
                    }
                }
                if (sv->f596 == 1) {
                    if (D_8021E18C.f0 == 7) {
                        flags |= 4;
                    }
                    if (D_8021E18C.f0 == 1) {
                        flags |= 0x80;
                    }
                    if (!(sv->f6 & 4) && D_8021E18C.f0 == 6) {
                        flags |= 0x20;
                    }
                }
            }
        }
    }
    return flags;
}

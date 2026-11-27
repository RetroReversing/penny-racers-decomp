s32 func_80149778(s32);
u32 nextRandom(void);
typedef struct { u8 mode; u8 pad1; u8 flags; u8 pad3; } Hdr;
extern Hdr D_80189B34;
extern u8 D_8018A277[];
extern u16 D_8018A27C;
typedef struct { s32 f[8]; } Rec;
extern Rec randomMasks[];
extern s16 D_8021E1A6;
/* In random-mask mode, picks a free random slot and sets the mask bits for each enabled option bit on it. */ void applyRandomMaskBits(void)
{
    s32 slot;
    s32 maskIdx;
    s32 rnd;

    if (D_80189B34.mode == 2 && (D_80189B34.flags & 0x80) && D_8021E1A6 == D_80189B34.mode && D_8018A27C != 0) {
        do {
            rnd = nextRandom() & 3;
            slot = rnd != 3; slot = -slot; slot &= rnd;
            maskIdx = D_8018A277[slot] & 0xF;
        } while (func_80149778((u8) maskIdx) & 0xFF);
        D_8018A277[slot] |= 0x20;
        if (D_8018A27C & 1) randomMasks[maskIdx].f[1] |= 0x200000;
        if (D_8018A27C & 2) randomMasks[maskIdx].f[1] |= 0x400000;
        if (D_8018A27C & 4) randomMasks[maskIdx].f[1] |= 0x800000;
        if (D_8018A27C & 8) randomMasks[maskIdx].f[1] |= 0x1000000;
        if (D_8018A27C & 0x10) randomMasks[maskIdx].f[4] |= 0x200;
        if (D_8018A27C & 0x20) randomMasks[maskIdx].f[5] |= 0x40;
        if (D_8018A27C & 0x40) randomMasks[maskIdx].f[5] |= 0x80;
        if (D_8018A27C & 0x80) randomMasks[maskIdx].f[6] |= 0x40000;
        if (D_8018A27C & 0x100) randomMasks[maskIdx].f[6] |= 0x80000;
        if (D_8018A27C & 0x200) randomMasks[maskIdx].f[6] |= 0x100000;
        if (D_8018A27C & 0x400) randomMasks[maskIdx].f[7] |= 0x4000;
        if (D_8018A27C & 0x800) randomMasks[maskIdx].f[0] |= 0x2000;
    }
}

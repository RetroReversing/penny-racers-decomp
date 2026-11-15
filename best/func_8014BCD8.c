s32 func_80149778(s32);
s32 func_801FA30C();
extern s32 D_80189B34;
extern u8 D_8018A277[];
extern u16 D_8018A27C;
extern s32 D_8018D3A0;
extern s32 D_8018D3A4;
extern s32 D_8018D3B0;
extern s32 D_8018D3B4;
extern s32 D_8018D3B8;
extern s32 D_8018D3BC;
extern s16 D_8021E1A6;

#define BITS(base) (*(u32 *)((u8 *)&(base) + s1 * 32))

void func_8014BCD8(void) {
    s32 s0;
    s32 s1;
    s32 t;

    if ((*(u8 *)&D_80189B34 == 2) && (*((u8 *)&D_80189B34 + 2) & 0x80) && (D_8021E1A6 == *(u8 *)&D_80189B34) && (D_8018A27C != 0)) {
        for (;;) {
            t = func_801FA30C() & 3;
            s0 = -(t != 3) & t;
            s1 = D_8018A277[s0] & 0xF;
            if ((func_80149778(s1 & 0xFF) & 0xFF) == 0) {
                break;
            }
        }
        D_8018A277[s0] |= 0x20;
        if (D_8018A27C & 1) BITS(D_8018D3A4) |= 0x200000;
        if (D_8018A27C & 2) BITS(D_8018D3A4) |= 0x400000;
        if (D_8018A27C & 4) BITS(D_8018D3A4) |= 0x800000;
        if (D_8018A27C & 8) BITS(D_8018D3A4) |= 0x01000000;
        if (D_8018A27C & 0x10) BITS(D_8018D3B0) |= 0x200;
        if (D_8018A27C & 0x20) BITS(D_8018D3B4) |= 0x40;
        if (D_8018A27C & 0x40) BITS(D_8018D3B4) |= 0x80;
        if (D_8018A27C & 0x80) BITS(D_8018D3B8) |= 0x40000;
        if (D_8018A27C & 0x100) BITS(D_8018D3B8) |= 0x80000;
        if (D_8018A27C & 0x200) BITS(D_8018D3B8) |= 0x100000;
        if (D_8018A27C & 0x400) BITS(D_8018D3BC) |= 0x4000;
        if (D_8018A27C & 0x800) BITS(D_8018D3A0) |= 0x2000;
    }
}

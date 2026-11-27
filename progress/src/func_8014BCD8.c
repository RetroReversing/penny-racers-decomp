s32 func_80149778(s32);
u32 nextRandom(void);
typedef struct { u8 mode; u8 pad1; u8 flags; u8 pad3; } Hdr;
extern Hdr D_80189B34;
extern u8 D_8018A277[];
extern u16 D_8018A27C;
typedef struct { s32 f[8]; } Rec;
extern Rec D_8018D3A0[];
extern s16 D_8021E1A6;
void func_8014BCD8(void)
{
    s32 index;
    s32 value;
    s32 r;

    if (D_80189B34.mode == 2 && (D_80189B34.flags & 0x80) && D_8021E1A6 == D_80189B34.mode && D_8018A27C != 0) {
        do {
            r = nextRandom() & 3;
            index = r != 3; index = -index; index &= r;
            value = D_8018A277[index] & 0xF;
        } while (func_80149778((u8) value) & 0xFF);
        D_8018A277[index] |= 0x20;
        if (D_8018A27C & 1) D_8018D3A0[value].f[1] |= 0x200000;
        if (D_8018A27C & 2) D_8018D3A0[value].f[1] |= 0x400000;
        if (D_8018A27C & 4) D_8018D3A0[value].f[1] |= 0x800000;
        if (D_8018A27C & 8) D_8018D3A0[value].f[1] |= 0x1000000;
        if (D_8018A27C & 0x10) D_8018D3A0[value].f[4] |= 0x200;
        if (D_8018A27C & 0x20) D_8018D3A0[value].f[5] |= 0x40;
        if (D_8018A27C & 0x40) D_8018D3A0[value].f[5] |= 0x80;
        if (D_8018A27C & 0x80) D_8018D3A0[value].f[6] |= 0x40000;
        if (D_8018A27C & 0x100) D_8018D3A0[value].f[6] |= 0x80000;
        if (D_8018A27C & 0x200) D_8018D3A0[value].f[6] |= 0x100000;
        if (D_8018A27C & 0x400) D_8018D3A0[value].f[7] |= 0x4000;
        if (D_8018A27C & 0x800) D_8018D3A0[value].f[0] |= 0x2000;
    }
}

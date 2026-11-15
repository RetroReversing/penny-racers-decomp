extern u8 D_80189B34[];
extern u8 D_8018A277[];
extern u16 D_8018A27C;
extern u8 D_8018D3A0[];
extern u8 D_8018D3A4[];
extern u8 D_8018D3B0[];
extern u8 D_8018D3B4[];
extern u8 D_8018D3B8[];
extern u8 D_8018D3BC[];
extern s16 D_8021E1A6;
s32 func_80149778(s32 arg0);
u32 func_801FA30C(void);

#define ORW(base, off, val) (*(u32 *)((base) + (off)) |= (val))

void func_8014BCD8(void) {
    s32 idx;
    s32 bank;
    s32 off;

    if (D_80189B34[0] == 2 && (D_80189B34[2] & 0x80) && D_8021E1A6 == D_80189B34[0] && D_8018A27C != 0) {
        do {
            idx = func_801FA30C() & 3;
            bank = -(idx != 3) & idx;
            off = D_8018A277[bank] & 0xF;
        } while (func_80149778(off & 0xFF) & 0xFF);
        D_8018A277[bank] |= 0x20;
        if (D_8018A27C & 1) ORW(D_8018D3A4, off << 5, 0x200000);
        if (D_8018A27C & 2) ORW(D_8018D3A4, off << 5, 0x400000);
        if (D_8018A27C & 4) ORW(D_8018D3A4, off << 5, 0x800000);
        if (D_8018A27C & 8) ORW(D_8018D3A4, off << 5, 0x01000000);
        if (D_8018A27C & 0x10) ORW(D_8018D3B0, off << 5, 0x200);
        if (D_8018A27C & 0x20) ORW(D_8018D3B4, off << 5, 0x40);
        if (D_8018A27C & 0x40) ORW(D_8018D3B4, off << 5, 0x80);
        if (D_8018A27C & 0x80) ORW(D_8018D3B8, off << 5, 0x40000);
        if (D_8018A27C & 0x100) ORW(D_8018D3B8, off << 5, 0x80000);
        if (D_8018A27C & 0x200) ORW(D_8018D3B8, off << 5, 0x100000);
        if (D_8018A27C & 0x400) ORW(D_8018D3BC, off << 5, 0x4000);
        if (D_8018A27C & 0x800) ORW(D_8018D3A0, off << 5, 0x2000);
    }
}

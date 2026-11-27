typedef struct { u8 sel; u8 pad1[2]; u8 count; u8 pad4[8]; f32 x; u8 pad10[0xD0]; s32 flags; } Menu;
extern Menu D_8021EEC0;
extern s8 D_8021E15F;
extern s8 D_8021E231[];
extern u8 D_8021F036[];
extern f64 D_8021DDC0;
extern f64 D_8021DDC8;
void func_80211A84(void);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, s32, s32, s32, s32, s32, f32, s32, s32);
s32 func_8014A870(s32, s32, s32);
void func_8014B854(s32);
void func_80211C08(void);

void func_802117AC(void) {
    s32 keys = 0;
    s32 i;

    if (!(D_8021EEC0.flags & 0x2000)) {
        keys = func_8014A870(0x14, 3, D_8021E15F);
    }
    if (keys & 4) {
        if (D_8021EEC0.sel != 0) {
            D_8021EEC0.flags |= 0x2000;
            D_8021EEC0.sel--;
            func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, func_80211A84, 0, D_8021EEC0.x - D_8021DDC0, 0, 0, 0, 0, 0, -0.5f, 0, 0);
            func_8014B854(0x3B);
        }
    }
    if (keys & 8) {
        if (D_8021EEC0.sel != D_8021EEC0.count - 1) {
            D_8021EEC0.flags |= 0x2000;
            D_8021EEC0.sel++;
            func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, func_80211A84, 0, D_8021EEC0.x + D_8021DDC8, 0, 0, 0, 0, 0, 0.5f, 0, 0);
            func_8014B854(0x3B);
        }
    }
    {
        s32 n = D_8021E15F * 0x110;

        i = D_8021E231[n + D_8021EEC0.sel];
    }
    if (keys & 1) {
        D_8021F036[i]++;
        if (D_8021F036[i] >= 10) {
            D_8021F036[i] = 0;
        }
    }
    if (keys & 2) {
        D_8021F036[i]--;
        if (D_8021F036[i] == 0xFF) {
            D_8021F036[i] = 9;
        }
    }
    if (((keys & 3) != 0) & (i != 0xD)) {
        func_8014B854(0x3C);
    }
    if (keys & 0x10) {
        D_8021EEC0.flags &= ~0x8000;
        func_8014B854(0x3B);
    }
    func_80211C08();
}

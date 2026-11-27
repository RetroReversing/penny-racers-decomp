typedef struct { u8 sel; u8 pad1[2]; u8 count; u8 pad4[8]; f32 x; u8 pad10[0xD0]; s32 flags; } Menu;
extern Menu D_8021EEC0;
extern s8 menuInputLock;
extern s8 D_8021E231[];
extern u8 D_8021F036[];
extern f64 D_8021DDC0;
extern f64 D_8021DDC8;
void func_80211A84(void);
void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, s32, s32, s32, s32, s32, f32, s32, s32);
s32 getMenuNavMask(s32, s32, s32);
void playMenuSound(s32);
void func_80211C08(void);

/* Handles one frame of menu navigation: up/down moves the selection with a slide object, left/right changes the current row's option value, and B clears the menu's select flag. */ void updateMenuNavigation(void) {
    s32 navKeys = 0;
    s32 optIdx;

    if (!(D_8021EEC0.flags & 0x2000)) {
        navKeys = getMenuNavMask(0x14, 3, menuInputLock);
    }
    if (navKeys & 4) {
        if (D_8021EEC0.sel != 0) {
            D_8021EEC0.flags |= 0x2000;
            D_8021EEC0.sel--;
            objCreate(0, 0, 3, 0, 0x50, 0, 0, func_80211A84, 0, D_8021EEC0.x - D_8021DDC0, 0, 0, 0, 0, 0, -0.5f, 0, 0);
            playMenuSound(0x3B);
        }
    }
    if (navKeys & 8) {
        if (D_8021EEC0.sel != D_8021EEC0.count - 1) {
            D_8021EEC0.flags |= 0x2000;
            D_8021EEC0.sel++;
            objCreate(0, 0, 3, 0, 0x50, 0, 0, func_80211A84, 0, D_8021EEC0.x + D_8021DDC8, 0, 0, 0, 0, 0, 0.5f, 0, 0);
            playMenuSound(0x3B);
        }
    }
    {
        s32 n = menuInputLock * 0x110;

        optIdx = D_8021E231[n + D_8021EEC0.sel];
    }
    if (navKeys & 1) {
        D_8021F036[optIdx]++;
        if (D_8021F036[optIdx] >= 10) {
            D_8021F036[optIdx] = 0;
        }
    }
    if (navKeys & 2) {
        D_8021F036[optIdx]--;
        if (D_8021F036[optIdx] == 0xFF) {
            D_8021F036[optIdx] = 9;
        }
    }
    if (((navKeys & 3) != 0) & (optIdx != 0xD)) {
        playMenuSound(0x3C);
    }
    if (navKeys & 0x10) {
        D_8021EEC0.flags &= ~0x8000;
        playMenuSound(0x3B);
    }
    func_80211C08();
}

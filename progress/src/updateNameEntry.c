typedef struct { u8 pad0[0x3E]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { u8 sel; u8 cur; u8 digit; u8 count; u8 pad4[0x30]; u16 chars[0x56]; s32 flags; } Menu;
extern Rec D_8011F2F0[];
extern Menu D_8021EEC0;
extern u16 D_8018BC3C;
typedef struct { s8 v; } Pad;
extern Pad menuInputLock;
extern s8 D_8021E231[];
extern u8 D_8021B420[];
extern u8 D_8021B430[];
extern u16 D_80187BF0[][9];
extern u16 D_8021F270[][14][8];
extern u8 D_8021F048[][14];
extern u8 D_8021F036[];
extern s32 D_8021AFDC;
extern s32 D_80168BB0;
s32 getMenuNavMask(s32, s32, s32);
void playMenuSound(s32);
void func_80211B90(void);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);

/* Name entry screen: the cursor moves over the character grid, a press on a
 * character writes it into the name and advances the digit. Ok leaves the screen;
 * when the transition finishes, the names are saved and the next screen is set. */
void updateNameEntry(u16 id) {
    s32 keys = getMenuNavMask(0x14, 3, menuInputLock.v);
    s32 i;
    s32 j;

    switch (D_8011F2F0[id].f3E) {
    case 0:
    case 0x10: {
        u8 next = D_8021B420[keys & 0xF];

        if (next != 0xFF) {
            next = D_8021B430[D_8021EEC0.cur * 4 + next];
            if (next != 0xFF) {
                D_8021EEC0.cur = next;
                playMenuSound(0x3B);
            }
        }
        func_80211B90();
        if (keys & 0x80) {
            if (D_8021EEC0.digit != 0) {
                D_8021EEC0.digit--;
                playMenuSound(0x3B);
            }
        }
        if (keys & 0x40) {
            if (D_8021EEC0.digit != 7) {
                D_8021EEC0.digit++;
                playMenuSound(0x3B);
            }
        }
        if (keys & 0x10) {
            keys = 0;
            playMenuSound(0x3D);
            switch (D_8021EEC0.cur) {
            case 0x5A:
                setScreenTransition(2, 6, 0, 0, 0);
                D_8011F2F0[id].f3E = 0x20;
                break;
            case 0x55: {
                s32 row = menuInputLock.v * 0x110;

                j = D_8021E231[row + D_8021EEC0.sel];

                D_80187BF0[j][D_8021EEC0.digit] = D_8021EEC0.chars[D_8021EEC0.cur];
                if (D_8021EEC0.digit != 0) {
                    D_8021EEC0.digit--;
                }
                break;
            }
            default: {
                s32 row = menuInputLock.v * 0x110;

                j = D_8021E231[row + D_8021EEC0.sel];

                D_80187BF0[j][D_8021EEC0.digit] = D_8021EEC0.chars[D_8021EEC0.cur];
                if (D_8021EEC0.digit != 7) {
                    D_8021EEC0.digit++;
                }
                break;
            }
            }
        }
        if (keys & 0x20) {
            D_8021EEC0.flags &= ~0x8000;
            playMenuSound(0x3B);
        }
        break;
    }
    case 0x20:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            for (i = 0; i < 14; i++) {
                for (j = 0; j < 8; j++) {
                    D_8021F270[menuInputLock.v][i][j] = D_80187BF0[i][j];
                }
                D_8021F048[menuInputLock.v][i] = D_8021F036[i];
            }
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x12;
            D_80168BB0 = 0x10;
        }
        break;
    }
}

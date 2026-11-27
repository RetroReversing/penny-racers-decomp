typedef struct { u8 pad0[0x3E]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { u8 flag; u8 pad1[8]; u8 f9; u8 pad10[2]; u16 fC; u8 padE[0x12]; s16 pos[8]; } Menu;
extern Rec D_8011F2F0[];
extern Menu sMenu;
extern u16 D_8018BC3C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s32 D_80168BB0;
s32 func_8014A870(s32, s32, s32);
void playMenuSound(s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);

/* Runs the menu for player playerId: moves the cursor on up/down/left/right, plays the menu sounds, and moves to the next screen when the selection is confirmed. */ void updateMenuSelection(u16 playerId) {
    s32 buttons;

    switch (D_8011F2F0[playerId].f3E) {
    case 0:
        sMenu.f9 = 0;
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_8011F2F0[playerId].f3E = 1;
        }
        break;
    case 1:
        sMenu.flag = 0;
        buttons = func_8014A870(0x14, 7, 0);
        if (D_801E9990 == 1) {
            playMenuSound(0x3D);
            sMenu.flag = 1;
        } else if (D_801E9994 == 1) {
            playMenuSound(0x3A);
            sMenu.pos[0]--;
        } else if (buttons & 8) {
            sMenu.pos[sMenu.pos[0]]++;
            if ((sMenu.pos[0] != 1 || sMenu.pos[4] != 0) && (sMenu.pos[0] != 2 || sMenu.pos[1] < 2)
                    && (sMenu.pos[0] != 3 || sMenu.pos[6] != 0)) {
                playMenuSound(0x3B);
            }
        } else if (buttons & 4) {
            sMenu.pos[sMenu.pos[0]]--;
            if ((sMenu.pos[0] != 1 || sMenu.pos[4] != 0) && (sMenu.pos[0] != 2 || sMenu.pos[1] < 2)
                    && (sMenu.pos[0] != 3 || sMenu.pos[6] != 0)) {
                playMenuSound(0x3B);
            }
        }
        if (sMenu.pos[sMenu.pos[0]] > sMenu.pos[sMenu.pos[0] + 3]) {
            sMenu.pos[sMenu.pos[0]] = 0;
        } else if (sMenu.pos[sMenu.pos[0]] < 0) {
            sMenu.pos[sMenu.pos[0]] = sMenu.pos[sMenu.pos[0] + 3];
        }
        if (sMenu.flag == 1) {
            sMenu.pos[0]++;
            if (sMenu.pos[0] >= 4) {
                sMenu.pos[0] = 3;
                func_80203DF8(2, 6, 0, 0, 0);
                D_8021AFDC = 4;
                D_8021B060 = 0xC;
                D_8011F2F0[playerId].f3E = 3;
            }
        }
        if (sMenu.pos[0] <= 0) {
            sMenu.pos[0] = 1;
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 4;
            D_8021B060 = 2;
            D_8011F2F0[playerId].f3E = 3;
        }
        break;
    case 3:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            if (sMenu.pos[1] >= 2) {
                sMenu.fC = 9;
            }
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = D_8021B060;
        }
        break;
    }
}

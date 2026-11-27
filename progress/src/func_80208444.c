typedef struct { u8 pad0[2]; u16 flags[4]; u8 padA[0x34]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { s32 state; s32 choice; } Prompt;
typedef struct { s16 v; } Half;
extern Rec D_8011F2F0[];
extern u16 D_8018BC3C;
extern Half skipFirstRowFlag;
extern s16 D_8021E18C;
extern s16 D_8021E100;
extern s16 D_8021E102;
extern s8 D_8021E20B[][9];
extern s8 D_8021E20C[][9];
extern Prompt D_8021B128;
extern s32 D_8021B1A0;
extern u8 D_8021B1B4;
extern u8 D_8021B1B5;
extern s32 D_8021AFEC[];
extern u8 D_8021B014[];
extern u8 carouselCmd;
extern u8 D_8021B01A;
extern u8 D_8021B00C[];
extern u8 D_8021B064[];
extern u8 D_8021B068;
extern s32 carouselSelected[];
extern u16 *D_802030CC[];
extern u16 D_8021F270[][14][8];
extern u8 D_80046832;
extern s32 btnPlayPressed;
extern s32 btnStopPressed;
extern s32 menuChoice;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_80168BB0;
s32 getMenuNavMask(s32, s32, s32);
void playMenuSound(s32);
u8 func_80148230(void);
void func_80205C00(void);
void initRandomSlot(s32);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_801E1EEC(s32, s32);
void initModelTransforms(void);
void initObjList(void);
void createNoticeScreenObj(void);
void func_801CF468(u16, s32, s32, s32);

void func_80208444(u16 id) {
    s32 keys = 0;
    s32 i;
    s32 j;
    u8 count;

    for (i = 1; i < 4; i++) {
        D_8011F2F0[id].flags[i] |= 0x10;
    }
    switch (D_8011F2F0[id].f3E) {
    case 1:
        count = 0;
        for (i = 0; i <= skipFirstRowFlag.v; i++) {
            count += D_8021E20B[i][0];
        }
        if (D_8021B128.state == 1 && D_8021B1A0 == 0) {
            if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
                keys = getMenuNavMask(0x14, 7, 0);
            }
            if (keys & 2) {
                D_8021B128.choice++;
                playMenuSound(0x3B);
            } else if (keys & 1) {
                D_8021B128.choice--;
                playMenuSound(0x3B);
            }
            if (func_80148230() != 0 || (func_80148230() == 0 && D_8021E18C >= 9)) {
                if (D_8021B128.choice < 0) {
                    D_8021B128.choice = 1;
                }
                if (D_8021B128.choice >= 2) {
                    D_8021B128.choice = 0;
                }
            } else {
                if (D_8021B128.choice < 0) {
                    D_8021B128.choice = 2;
                }
                if (D_8021B128.choice >= 3) {
                    D_8021B128.choice = 0;
                }
            }
        }
        D_8021B1A0 = 0;
        for (i = 0; i <= skipFirstRowFlag.v; i++) {
            if (D_8021AFEC[i] == 1 || D_8021B014[i] == 1) {
                D_8021B1A0 = 1;
                D_8021B128.choice = 1;
            }
        }
        if (btnPlayPressed == 2 && *D_8011F2F0[D_8018BC3C].f60 == 0) {
            if (carouselCmd != 0) {
                func_80205C00();
            }
            if (D_8021B128.state == 1) {
                playMenuSound(0x3D);
                if (D_8021B128.choice == 2) {
                    D_8011F2F0[id].f3E = 3;
                } else {
                    setScreenTransition(2, 6, 0, 0, 0);
                    D_8011F2F0[id].f3E = 2;
                }
            }
        }
        if (count >= skipFirstRowFlag.v + 1) {
            D_8021B128.state = 1;
        } else {
            D_8021B128.state = 0;
            D_8021B128.choice = 0;
        }
        D_8021E100 = 0;
        D_8021E102 = 0;
        D_8021B1B5 = 0;
        for (i = 0; i <= skipFirstRowFlag.v; i++) {
            if (D_8021E20C[i][0] == 1) {
                D_8021E100 = 1;
            }
            if (D_8021E20B[i][0] == 1) {
                D_8021E102 = 1;
            }
        }
        if (btnStopPressed == 1 && *D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_8021B1B5 = 1;
        }
        if (skipFirstRowFlag.v == 0) {
            if (D_8021E100 > 0) {
                setScreenTransition(2, 6, 0, 0, 0);
                D_8011F2F0[id].f3E = 4;
            }
        } else if (D_8021E102 == 0) {
            if (D_8021B1B4 == 1 && D_8021B1B5 == 1) {
                playMenuSound(0x3A);
                setScreenTransition(2, 6, 0, 0, 0);
                D_8011F2F0[id].f3E = 4;
                D_8021B1B4 = 0;
            }
            D_8021B1B4 = 1;
        } else if (btnStopPressed == 1 && *D_8011F2F0[D_8018BC3C].f60 == 0) {
            playMenuSound(0x3E);
        }
        break;
    case 4:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_8021B068 = 1;
            initModelTransforms();
            initObjList();
            createNoticeScreenObj();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = D_8021AFDC = 0xC;
        }
        break;
    case 2:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            if (D_8021B128.choice == 1) {
                menuChoice = 0x1C;
                D_8021AFDC = 6;
                D_8021AFE0 = 6;
                for (i = 0; i <= skipFirstRowFlag.v; i++) {
                    if (D_8021B00C[i] == 0) {
                        initRandomSlot(i);
                        for (j = 0; j < 8; j++) {
                            D_8021F270[i][0][i] = 0xFFFF;
                        }
                        for (j = 0; D_802030CC[carouselSelected[i]][j] != 0xFFFF; j++) {
                            D_8021F270[i][0][j] = D_802030CC[carouselSelected[i]][j];
                        }
                        D_8021B064[i] = 1;
                        D_8021AFEC[i] = 0;
                        D_8021B00C[i] = 1;
                    }
                    if (skipFirstRowFlag.v != 0) {
                        D_8021E20B[i][0] = 0;
                    }
                }
            } else if (D_8021B128.choice == 0) {
                D_80046832 = 0;
                D_8021AFDC = 0x16;
                menuChoice = 0x16;
                D_8021B01A = 1;
                for (i = 0; i <= skipFirstRowFlag.v; i++) {
                    if (D_8021B00C[i] == 0) {
                        initRandomSlot(i);
                        D_8021B064[i] = 1;
                        D_8021AFEC[i] = 0;
                        D_8021B00C[i] = 1;
                    }
                    if (skipFirstRowFlag.v != 0) {
                        D_8021E20B[i][0] = 0;
                    }
                }
            }
            initModelTransforms();
            initObjList();
            createNoticeScreenObj();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = menuChoice;
        }
        break;
    case 3:
        func_801E1EEC(1, 0);
    case 0:
        D_8011F2F0[id].f3E = 1;
        break;
    }
}

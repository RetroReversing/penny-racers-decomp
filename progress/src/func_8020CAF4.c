typedef struct { u8 pad0[0x3E]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { u8 flag; u8 pad1[8]; u8 f9; u8 pad10[2]; s16 fC; } Menu;
extern Rec D_8011F2F0[];
extern Menu sMenu;
extern u16 D_8018BC3C;
extern s16 D_8021E1A0;
typedef struct { s16 v; } Half;
extern Half skipFirstRowFlag;
extern u8 D_8021E20B[][9];
extern u8 D_8021B068;
extern s32 D_8021B300;
extern s32 D_8021B304;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern u8 *D_801CA134;
extern u8 *trackInfo;
extern u8 D_801C5EF8[], D_801C6074[], D_801C618C[], D_801C631C[], D_801C6408[], D_801C6624[], D_801C673C[], D_801C687C[], trackPointTable[];
extern u8 D_801C5ED8[], D_801C5EDC[], D_801C5EE0[], D_801C5EE4[], D_801C5EE8[], D_801C5EEC[], D_801C5EF0[], D_801C5EF4[], D_801C5E9C[];
extern s32 D_8021AFDC;
extern s32 menuChoice;
extern s32 D_8021AFE0;
extern s32 D_80168BB0;
s32 getMenuNavMask(s32, s32, s32);
void playMenuSound(s32);
void func_8020E650(void);
void func_8020E788(void);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);

void func_8020CAF4(u16 id) {
    s16 i;
    s32 keys;

    switch (D_8011F2F0[id].f3E) {
    case 0:
        sMenu.f9 = 0;
        for (i = 0; i < 4; i++) {
            if (skipFirstRowFlag.v != 0) {
                D_8021E20B[i][0] = 0;
            }
        }
        if (D_8021B068 == 0) {
            D_8011F2F0[id].f3E = 1;
        } else {
            D_8011F2F0[id].f3E = 2;
        }
        break;
    case 1:
        sMenu.flag = 0;
        keys = getMenuNavMask(0x1E, 3, 0);
        if (*D_8011F2F0[D_8018BC3C].f60 != 0) {
            keys = 0;
        }
        if (D_801E9990 == 1 && D_8021B300 == 0) {
            switch (sMenu.fC) {
            case 9:
                D_801CA134 = D_801C5EF8;
                trackInfo = D_801C5ED8;
                break;
            case 10:
                D_801CA134 = D_801C6074;
                trackInfo = D_801C5EDC;
                break;
            case 11:
                D_801CA134 = D_801C618C;
                trackInfo = D_801C5EE0;
                break;
            case 12:
                D_801CA134 = D_801C631C;
                trackInfo = D_801C5EE4;
                break;
            case 13:
                D_801CA134 = D_801C6408;
                trackInfo = D_801C5EE8;
                break;
            case 14:
                D_801CA134 = D_801C6624;
                trackInfo = D_801C5EEC;
                break;
            case 15:
                D_801CA134 = D_801C673C;
                trackInfo = D_801C5EF0;
                break;
            case 16:
                D_801CA134 = D_801C687C;
                trackInfo = D_801C5EF4;
                break;
            case 17:
                D_801CA134 = trackPointTable;
                trackInfo = D_801C5E9C;
                break;
            }
            playMenuSound(0x3D);
            sMenu.flag = 1;
            D_8011F2F0[id].f3E = 2;
        } else if ((keys & 4) && D_8021B300 == 0) {
            if (D_8021B068 == 0) {
                D_8021B300 = 2;
                playMenuSound(0x3B);
            }
        } else if ((keys & 8) && D_8021B300 == 0) {
            if (D_8021B068 == 0) {
                D_8021B300 = 1;
                playMenuSound(0x3B);
            }
        } else if (D_801E9994 == 1 && D_8021B068 == 0 && D_8021B300 == 0) {
            playMenuSound(0x3A);
            D_8011F2F0[id].f3E = 5;
        }
        if (D_8021B300 == 1) {
            D_8021B304--;
        } else if (D_8021B300 == 2) {
            D_8021B304++;
        }
        if (D_8021B304 < -6 || D_8021B304 > 6) {
            if (D_8021B300 == 1) {
                sMenu.fC++;
            }
            if (D_8021B300 == 2) {
                sMenu.fC--;
            }
            D_8021B304 = 0;
            D_8021B300 = 0;
        }
        func_8020E650();
        func_8020E788();
        break;
    case 2:
        if (D_801E9990 == 1 && D_8021B300 == 0) {
            playMenuSound(0x3D);
            D_8011F2F0[id].f3E = 4;
        }
        D_8021B068 = 1;
        if (D_801E9994 == 1 && D_8021B300 == 0) {
            playMenuSound(0x3A);
            D_8011F2F0[id].f3E = 1;
            D_8021B068 = 0;
        }
        break;
    case 4:
        if (D_8021B300 == 0) {
            setScreenTransition(2, 6, 0, 0, 0);
            D_8021AFDC = 6;
            menuChoice = 6;
            D_8011F2F0[id].f3E = 3;
        }
        break;
    case 5:
        if (D_8021B300 == 0) {
            setScreenTransition(2, 6, 0, 0, 0);
            D_8021AFDC = 4;
            menuChoice = 4;
            D_8021E1A0 = 3;
            D_8021B068 = 0;
            D_8011F2F0[id].f3E = 3;
        }
        break;
    case 3:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_8021AFE0 = 0;
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = menuChoice;
        }
        break;
    }
}

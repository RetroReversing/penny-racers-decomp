typedef struct { u8 unk0; u8 unk1; u16 unk2; u16 unk4; u8 unk6; u8 unk7; u8 unk8; u8 unk9; u16 unkA; u16 unkC; u16 unkE; u16 unk10; } Menu;
typedef struct { u8 unk0[0x3E]; u16 state; u8 unk40[0x20]; u8 *unk60; } Obj;
typedef struct { u32 a; u32 b; u16 c; u8 name[4]; u8 ext[16]; } Entry;
typedef struct { u8 unk0[4]; s32 file; u8 unk8[4]; s32 free; } Pak;
typedef struct { u8 b[4]; } Word;

extern Obj D_8011F2F0[];
extern u16 D_801E879C;
extern u8 D_801E9720;
extern u16 D_801E977E;
extern u16 D_801E9730;
extern u16 D_801F188A;
extern u8 D_801E9799;
extern u8 D_801E9798;
extern void *D_801E8790[];
extern u8 D_801E86F0[];
extern u8 D_801E8710[];
extern u8 D_801E8730[];
extern u8 D_80046832;
extern u16 D_801E9764;
extern Menu D_801D59B2;
extern Entry D_801E9B38[];
extern u16 D_801E9D5C;
extern u8 D_801E87C0;
extern Pak D_801F1898[];
extern u8 D_801E9B20[];
extern Word D_801E9788[];
extern Word D_801E9D60[];
extern s32 D_801E9768[];
extern u16 D_8018BC3C;
extern u32 D_801E9980;
extern u32 D_801E9984;
extern u32 D_801E9988;
extern u32 D_801E998C;
extern u32 D_801E9990;
typedef struct { u32 a; u8 unk4[0x28]; u32 b; } Keys;
extern Keys D_801E9994;
extern u8 D_801E9B1C;
extern Entry D_801E9D38;
extern u16 D_80072BDC;
extern u16 gameState;
extern void updatePlayerFade();
extern void func_801CEC2C();
extern void func_80028EB0();
extern void func_80029340();
extern void func_800293D0();
extern s32 func_80028F60();
extern void func_80029190();
extern void func_800292A0();
extern s32 func_801DDCDC();
extern void func_801DD938();
extern void playMenuSound();
extern void playStageSound();
extern void func_800DE38C();
extern void func_800DE2E0();
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define CHECK() \
    do { \
        r = func_801DDCDC(D_801E87C0, 1); \
        if (r == 2) { \
            goto errA; \
        } \
        if (r == 3) { \
            goto errB; \
        } \
    } while (0)
#define MENU ((Menu *) D_8011F2F0[D_801E9764].unk60)
#define MSG_A func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, D_801E87C0, 0xD)
#define MSG_B func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, D_801E87C0, 0xA)

void func_801DDD8C(u16 arg0)
{
    u32 i;
    u32 j;
    s32 r;

    switch (D_8011F2F0[arg0].state) {
    case 0:
        D_801E879C = 0;
        D_801E9720 = 0;
        D_801E977E = 0;
        D_801E9730 = 0;
        D_801F188A = 0;
        D_801E9799 = 0;
        D_801E9798 = 0;
        D_801E8790[0] = D_801E86F0;
        D_801E8790[1] = D_801E8710;
        D_801E8790[2] = D_801E8730;
        D_80046832 = 1;
        D_8011F2F0[arg0].state = 1;
        D_801E9764 = objCreate(0, 0, 3, 0, 0x81, 0xFF, 0, updatePlayerFade, func_801CEC2C,
                                   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        D_8011F2F0[D_801E9764].unk60 = (u8 *) &D_801D59B2;
        MENU->unk0 = 0;
        MENU->unk2 = 0;
        MENU->unk4 = 0;
        MENU->unk6 = 0;
        MENU->unk7 = 0;
        MENU->unk8 = 0;
        MENU->unk9 = 0;
        MENU->unkA = 0x48;
        MENU->unkC = 0xC5;
        MENU->unkE = 0x50;
        MENU->unk10 = 0x14;
        for (i = 0; i < 17; i++) {
            D_801E9B38[i].a = 0;
            D_801E9B38[i].b = 0;
            D_801E9B38[i].c = 0;
            for (j = 0; j < 4; j++) {
                D_801E9B38[i].name[j] = 0;
            }
            for (j = 0; j < 16; j++) {
                D_801E9B38[i].name[j] = 0;
            }
        }
    case 1:
        if (D_801E879C) {
            D_8011F2F0[arg0].state = 0x385;
            break;
        }
        D_801E9D5C = 0;
        func_80028EB0(&D_801F1898[D_801E87C0], D_801E87C0);
        CHECK();
        if (D_801F1898[D_801E87C0].free != 1) {
            goto errB;
        }
        for (i = 0; i < 16; i++) {
            D_801E9B20[i] = 1;
            D_801F1898[D_801E87C0].file = i;
            func_80029340(&D_801F1898[D_801E87C0], &D_801E9B38[i]);
            r = func_801DDCDC(D_801E87C0, 1);
            if (r == 2) {
                goto errA;
            }
            if (r == 3) {
                goto errB;
            }
            if (r == 4) {
                D_801E9B20[i] = 0;
            }
        }
        func_800293D0(&D_801F1898[D_801E87C0], &D_801E9788[D_801E87C0], &D_801E9D60[D_801E87C0]);
        CHECK();
        D_801E9768[D_801E87C0] = func_80028F60(&D_801F1898[D_801E87C0]);
        CHECK();
        if (D_801E9720 == 0) {
            *D_8011F2F0[D_8018BC3C].unk60 = 1;
            D_801E9720 = 1;
        }
        D_8011F2F0[arg0].state = 2;
        break;
    case 2:
        if (D_801E9988 == 1 || (D_801E9988 >= 0x10 && (D_801E9988 & 2))) {
            if (D_801E977E == 1 && D_801F188A != 0) {
                D_801E9D5C += 2;
                D_801E8790[0] = D_801E86F0;
                D_801E8790[1] = D_801E8710;
                D_8011F2F0[arg0].state = 0xA;
                playMenuSound(0x3B);
            } else if (D_801E977E != 0) {
                D_801E977E--;
                playMenuSound(0x3B);
            }
            D_801E9730 = D_801F188A + D_801E977E;
        } else if (D_801E998C == 1 || (D_801E998C >= 0x10 && (D_801E998C & 2))) {
            if (D_801E977E == 5 && D_801F188A < 9) {
                D_801E9D5C -= 2;
                D_801E8790[0] = D_801E86F0;
                D_801E8790[1] = D_801E8710;
                D_8011F2F0[arg0].state = 0xB;
                playMenuSound(0x3B);
            } else if (D_801E977E < 6) {
                D_801E977E++;
                playMenuSound(0x3B);
            }
            D_801E9730 = D_801F188A + D_801E977E;
        } else if (D_801E9990 == 1 && D_801E9B20[D_801E9730] == 1) {
            D_801E9799 = 1;
            D_801E9B1C = 0;
            D_8011F2F0[arg0].state = 0x14;
            playStageSound(7, 0x3D);
        } else if (D_801E9994.a == 1 || D_801E9994.b == 1) {
            playStageSound(7, 0x3A);
            D_8011F2F0[arg0].state = 0x384;
            *D_8011F2F0[D_8018BC3C].unk60 = 2;
        }
        break;
    case 0xA:
        D_801E9D5C += 2;
        if ((s16) D_801E9D5C >= 0xF) {
            D_801F188A--;
            D_801E9D5C = 0;
            D_801E9730 = D_801F188A + D_801E977E;
            D_8011F2F0[arg0].state = 2;
        }
        break;
    case 0xB:
        D_801E9D5C -= 2;
        if ((s16) D_801E9D5C < -0xE) {
            D_801F188A++;
            D_801E9D5C = 0;
            D_801E9730 = D_801F188A + D_801E977E;
            D_8011F2F0[arg0].state = 2;
        }
        break;
    case 0x14:
        if (D_801E9984 == 1) {
            if (D_801E9B1C == 0) {
                D_801E9B1C = 1;
                playStageSound(7, 0x3B);
            }
        } else if (D_801E9980 == 1) {
            if (D_801E9B1C == 1) {
                D_801E9B1C = 0;
                playStageSound(7, 0x3B);
            }
        } else if (D_801E9990 == 1) {
            if (D_801E9B1C == 1) {
                func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x18, D_801E87C0, 0x2E);
                playStageSound(7, 0x3D);
            } else {
                goto cancel;
            }
        } else if (D_801E9994.a == 1) {
        cancel:
            D_801E9799 = 0;
            D_8011F2F0[arg0].state = 2;
            playStageSound(7, 0x3A);
        }
        break;
    case 0x1E:
        func_80029190(&D_801E9B38[D_801E9730].c, &D_801E9B38[D_801E9730].b);
        func_800292A0(&D_801F1898[D_801E87C0], D_801E9B38[D_801E9730].ext, D_801E9B38[D_801E9730].name);
        r = func_801DDCDC(D_801E87C0, 1);
        if (r == 2) {
            MSG_A;
            D_8011F2F0[arg0].state = 1;
            D_801E9799 = 0;
            return;
        }
        if (r == 3) {
            MSG_B;
            D_8011F2F0[arg0].state = 0x385;
            D_801E9799 = 0;
            return;
        }
        D_801E9B38[D_801E9730] = D_801E9D38;
        D_801E9799 = 0;
        D_8011F2F0[arg0].state = 1;
        break;
    case 0x1F:
        D_801E9799 = 0;
        D_8011F2F0[arg0].state = 2;
        break;
    case 0x64:
    case 0xC8:
        break;
    case 0x384:
        if (*D_8011F2F0[D_8018BC3C].unk60 != 0) {
            break;
        }
    case 0x385:
        gameState = D_80072BDC;
        func_800DE38C();
        func_800DE2E0();
        D_80046832 = 0;
        break;
    }

    if (D_801E9798 < 0x1E) {
        D_801E9798++;
    } else {
        D_801E9798 = 0;
    }
    if (D_801E9798 < 0x14 || D_8011F2F0[arg0].state == 0x14) {
        D_801E8790[1] = D_801E8710;
        return;

errA:
    MSG_A;
    D_8011F2F0[arg0].state = 1;
    return;
errB:
    MSG_B;
    D_8011F2F0[arg0].state = 0x385;
        return;
    }
    D_801E8790[1] = D_801E86F0;
}

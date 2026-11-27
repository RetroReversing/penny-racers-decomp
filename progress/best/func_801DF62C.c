typedef struct { u8 pad0[0x3E]; u16 state; u16 x40; u8 pad42[0x1E]; u8 *sub; } Obj;
typedef struct { s32 pad0; s32 pad4; s32 error; s32 type; } Pak;
typedef struct { u32 a; u32 b; } Code;
extern Obj D_8011F2F0[];
extern u16 D_801E879C;
extern u8 D_801E87D2;
extern u16 D_8018BC3C;
extern u8 D_801E9B19;
extern u8 D_801E9B18;
extern u8 D_801E977C;
extern u8 D_801E4420;
extern Pak D_801F1898[];
extern Code D_801E87A0;
extern u8 D_801E87A8[];
extern u8 D_801E87BC[];
extern u8 D_801E9D70[];
extern s32 D_801E9D60[];
extern s32 D_801E9788[];
extern s32 D_801E9768[];
extern u8 D_801E87C0;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_8021AFDC;
extern s32 D_80168BB0;
extern u8 D_80046832;
s32 nuContPakOpen(Pak *, s32);
s32 func_801DDCDC(u8, s32);
void nuContPakCodeSet(u32, u32);
s32 nuContPakFileOpenJis(Pak *, u8 *, u8 *, s32, s32);
s32 nuContPakFileNum(Pak *, s32 *, s32 *);
s32 nuContPakGetFree(Pak *);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void playStageSound(s32, s16);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);

void func_801DF62C(u16 id) {
    s32 i;
    s32 pak;
    s32 j;
    s32 bad;
    s32 count;
    s32 status;

    switch (D_8011F2F0[id].state) {
    case 0:
        if (D_801E879C == 0) {
            *D_8011F2F0[D_8018BC3C].sub = 1;
            D_8011F2F0[id].x40 = 1;
        }
    case 1:
        if (D_801E879C != 0) {
            if (D_801E87D2 == 0) {
                D_8011F2F0[id].state = 902;
            } else {
                *D_8011F2F0[D_8018BC3C].sub = 2;
                D_8011F2F0[id].state = 901;
            }
            break;
        }
        bad = 0;
        D_801E9B19 = 0;
        D_801E9B18 = 0;
        D_801E977C = 0;
        count = 0;
        for (i = 0; i < 4; i++) {
            count += (D_801E4420 >> i) & 1;
        }
        if (count == 0 || !(D_801E4420 & 1)) {
            D_801E9B19 = 1;
            D_8011F2F0[id].state = 3;
            break;
        }
        count = 1;
        for (i = 0; i < count; i++) {
            pak = 0;
            for (j = 0; j < 4; j++) {
                if ((D_801E4420 >> j) & 1) {
                    if (i == pak) {
                        pak = j;
                        break;
                    }
                    pak++;
                }
            }
            nuContPakOpen(&D_801F1898[pak], pak);
            status = func_801DDCDC(pak, 1);
            if (D_801F1898[pak].type != 1) {
                if (status == 2) {
                    goto screen;
                }
            two:
                D_801E9D70[i] = 2;
                bad++;
            } else {
                switch (status) {
                case 0:
                case 1:
                    nuContPakCodeSet(D_801E87A0.a, D_801E87A0.b);
                    nuContPakFileOpenJis(&D_801F1898[pak], D_801E87A8, D_801E87BC, 0, 0x4400);
                    if (D_801F1898[pak].error == 5) {
                        D_801E9D70[i] = 1;
                    } else if (D_801F1898[pak].error != 0) {
                        goto three;
                    } else {
                        D_801E9D70[i] = 0;
                        break;
                    }
                    nuContPakFileNum(&D_801F1898[pak], &D_801E9788[i], &D_801E9D60[i]);
                    if (func_801DDCDC(pak, 1) != 0) {
                        goto three;
                    }
                    if (D_801E9788[i] == D_801E9D60[i]) {
                        D_801E9D70[i] = 4;
                        bad++;
                        break;
                    }
                    D_801E9768[i] = nuContPakGetFree(&D_801F1898[pak]);
                    if (func_801DDCDC(pak, 1) != 0) {
                    three:
                        D_801E9D70[i] = 3;
                        bad++;
                        break;
                    }
                    if ((D_801E9768[i] >> 8) < 0x44) {
                        D_801E9D70[i] = 5;
                        bad++;
                    }
                    break;
                case 3:
                    goto two;
                case 2:
                screen:
                    func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, D_801E87C0, 0xD);
                    return;
                }
            }
        }
        if (bad != 0) {
            D_8011F2F0[id].state = 2;
            break;
        }
        func_80203DF8(0, 0x78, 0xFF, 0xFF, 0xFF);
        if (D_801E87D2 != 0) {
            *D_8011F2F0[D_8018BC3C].sub = 2;
        }
        D_8011F2F0[id].state = 901;
        break;
    case 2:
        D_801E87D2 = 1;
        if (D_801E9988 == 1) {
            if (D_801E9B18 == 1) {
                playStageSound(7, 0x3B);
            }
            D_801E9B18 = 0;
        } else if (D_801E998C == 1) {
            if (D_801E9B18 == 0) {
                playStageSound(7, 0x3B);
            }
            D_801E9B18 = 1;
        } else if (D_801E9990 == 1) {
            if (D_801E9B18 == 1) {
                playStageSound(7, 0x3D);
                D_8011F2F0[id].state = 1;
            } else {
                playStageSound(7, 0x3D);
                *D_8011F2F0[D_8018BC3C].sub = 2;
                func_80203DF8(2, 0x78, 0xFF, 0xFF, 0xFF);
                D_8011F2F0[id].state = 901;
            }
        } else if (D_801E9994 == 1) {
            playStageSound(7, 0x3A);
            *D_8011F2F0[D_8018BC3C].sub = 2;
            D_8011F2F0[id].state = 901;
        }
        break;
    case 901:
        if (*D_8011F2F0[D_8018BC3C].sub != 0) {
            break;
        }
    case 902:
        func_800DE38C();
        func_800DE2E0();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_8021AFDC = 0x22;
        D_80168BB0 = 0x22;
        D_80046832 = 0;
        break;
    }
    if (D_801E977C < 0x1E) {
        D_801E977C++;
    } else {
        D_801E977C = 0;
    }
}

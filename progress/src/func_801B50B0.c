typedef struct { u8 unk0; u8 pad1; u16 unk2; u16 unk4; u8 pad6[6]; u8 unkC; u8 unkD; u8 padE[2]; u16 unk10; u8 pad12[0x3E - 0x12]; u16 st; u8 pad40[0x60 - 0x40]; u8 *p; } Car;
typedef struct { u32 v; u8 pad[0x6C]; } PadU;
typedef struct { s32 v; u8 pad[0x6C]; } PadS;
extern Car D_8011F2F0[];
extern PadU D_801E9988[];
extern PadU D_801E998C[];
extern PadS D_801E9990[];
extern PadS D_801E9994[];
extern PadS D_801E99C0[];
extern u16 func_800E1850;
extern u16 D_8006F9E8;
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 D_801C5EA2;
extern u8 D_801C69D0;
extern u16 D_801C6B52;
extern u16 D_801C6B54;
extern u16 D_801C6B56;
extern u16 D_801C6B58;
extern u16 D_801C7074;
extern u8 D_801C7AB8;
void func_8014B854(s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_802319E8(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);
void func_8021F5F0(void);
void func_801D65BC(s32);

#define ME D_8011F2F0[arg0]
#define HIT(t) ((t)[player].v % 15 == 1)
#define SET(a, b) D_801C5EA2 = a; ME.unk0 = b
#define GO(next) \
    func_80203DF8(4, 0x14, 0, 0, 0); \
    *(u16 *)(D_8011F2F0[D_8018BC3C].p + 4) = 0xC; \
    D_801C6B58 = 0; \
    D_801C6B56 = 6; \
    D_801C6B54 = next; \
    ME.st = 6
#define OK_PRESSED (D_801E9990[player].v == 1 && D_801E99C0[player].v == 0 && D_801E9994[player].v == 0)
#define BACK_PRESSED (D_801E9990[player].v == 0 && (D_801E99C0[player].v == 1 || D_801E9994[player].v == 1))
#define CLOSE() \
    ME.st = 0; \
    D_8011F2F0[D_8018BC3C].p[9] = 0
#define QUIT() \
    func_8014B854(0x3A); \
    D_8011F2F0[D_801C7074].st = 0x10; \
    CLOSE(); \
    D_801C69D0 = 0

void func_801B50B0(u16 arg0)
{
    u16 player = 0;

    ME.unkC -= 8;
    if (ME.unkC == 0xF) {
        ME.unkC = 0xFF;
    }
    switch (ME.st) {
    case 0:
        break;
    case 1:
        if (HIT(D_801E9988) || HIT(D_801E998C)) {
            func_8014B854(0x3B);
            if (D_801C5EA2 == 3) {
                SET(4, 0x70);
            } else if (D_801C5EA2 == 4) {
                SET(3, 0x60);
            }
        }
        if (D_801C69D0) {
            if (OK_PRESSED) {
                func_8014B854(0x3D);
                if (D_801C5EA2 == 3) {
                    D_801C5EA1 = 0;
                    GO(4);
                } else if (D_801C5EA2 == 4) {
                    D_801C5EA2 = 5;
                    GO(5);
                }
                D_801C69D0 = 0;
            } else if (BACK_PRESSED) {
                func_8014B854(0x3A);
                D_8011F2F0[D_801C7074].st = D_8011F2F0[D_801C7074].unk0;
                CLOSE();
                D_801C69D0 = 0;
            }
        } else {
            D_801C69D0 = 1;
        }
        break;
    case 2:
        if (HIT(D_801E9988)) {
            func_8014B854(0x3B);
            if (ME.unk0 == 0x50) {
                SET(4, 0x70);
            } else if (ME.unk0 == 0x60) {
                SET(0, 0x50);
            } else if (ME.unk0 == 0x70) {
                SET(3, 0x60);
            }
        } else if (HIT(D_801E998C)) {
            func_8014B854(0x3B);
            if (ME.unk0 == 0x50) {
                SET(3, 0x60);
            } else if (ME.unk0 == 0x60) {
                SET(4, 0x70);
            } else if (ME.unk0 == 0x70) {
                SET(0, 0x50);
            }
        }
        if (D_801C69D0) {
            if (OK_PRESSED) {
                func_8014B854(0x3D);
                if (D_801C5EA2 == 0) {
                    D_8011F2F0[D_801C7074].st = 0x11;
                    D_801C7AB8 = 4;
                    CLOSE();
                } else if (D_801C5EA2 == 3) {
                    D_801C5EA1 = 0;
                    GO(4);
                } else if (D_801C5EA2 == 4) {
                    D_801C5EA2 = 5;
                    GO(5);
                }
                D_801C69D0 = 0;
            } else if (BACK_PRESSED) {
                QUIT();
            }
        } else {
            D_801C69D0 = 1;
        }
        break;
    case 3:
        if (HIT(D_801E9988)) {
            func_8014B854(0x3B);
            if (ME.unk0 == 0x60) {
                SET(4, 0x90);
            } else if (ME.unk0 == 0x70) {
                SET(1, 0x60);
            } else if (ME.unk0 == 0x80) {
                SET(2, 0x70);
            } else if (ME.unk0 == 0x90) {
                SET(3, 0x80);
            }
        } else if (HIT(D_801E998C)) {
            func_8014B854(0x3B);
            if (ME.unk0 == 0x60) {
                SET(2, 0x70);
            } else if (ME.unk0 == 0x70) {
                SET(3, 0x80);
            } else if (ME.unk0 == 0x80) {
                SET(4, 0x90);
            } else if (ME.unk0 == 0x90) {
                SET(1, 0x60);
            }
        }
        if (D_801C69D0) {
            if (OK_PRESSED) {
                func_8014B854(0x3D);
                if (D_801C5EA2 == 1) {
                    D_801C5EA0 = 1;
                    D_801C5EA2 = 5;
                    GO(5);
                } else if (D_801C5EA2 == 2) {
                    D_801C5EA0 = 1;
                    GO(4);
                } else if (D_801C5EA2 == 3) {
                    D_801C5EA1 = 0;
                    GO(4);
                } else if (D_801C5EA2 == 4) {
                    D_801C5EA2 = 5;
                    GO(5);
                }
                D_801C69D0 = 0;
            } else if (BACK_PRESSED) {
                QUIT();
            }
        } else {
            D_801C69D0 = 1;
        }
        break;
    case 4:
        func_802319E8();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        func_801D65BC(0);
        D_80168BB0 = 0x2A;
        D_8006F9E8 = 8;
        break;
    case 5:
        func_802319E8();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        func_801D65BC(0);
        D_80168BB0 = 2;
        D_8006F9E8 = 8;
        break;
    case 6:
        if (D_8011F2F0[D_8018BC3C].p[0] == 0) {
            D_801C6B52 = func_800E1850;
            while (D_801C6B52 != 0xFFFF) {
                D_8011F2F0[D_801C6B52].unkD = 4;
                D_801C6B52 = D_8011F2F0[D_801C6B52].unk10;
            }
            ME.unkD = 0;
            ME.unk2 |= 0x20;
            ME.unk4 |= 0x20;
            D_8011F2F0[D_8018BC3C].unkD = 0;
            ME.st = 7;
        }
        break;
    case 7:
        D_801C6B58++;
        if (D_801C6B58 > D_801C6B56) {
            ME.st = D_801C6B54;
        }
        break;
    }
}

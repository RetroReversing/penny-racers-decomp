typedef struct { u16 st; u8 pad[98]; } Slot64;
typedef struct { u8 v; u8 pad[99]; } SlotB;
typedef struct { s16 x, y, id; } Tri;
typedef struct { s16 x, y; } Pt;
s32 func_80148230(void);
void func_8014A4C8(s32, s16, s16, s32, s32);
void func_801CA140(s32);
void func_801CA494(s32, s32, s32, s32, s32);
void func_80209B90(s32);
extern SlotB D_8011F2F0[];
extern Slot64 D_8011F330[];
extern u16 D_8021AFE6;
extern u8 D_8021B014[];
extern Tri D_8021B110[];
extern s32 D_8021B128;
extern s32 D_8021B12C;
extern s32 D_8021B1A0;
extern Pt D_8021B1A4[];
extern s16 D_8021E18C;
extern u8 D_8021E19E;
extern s16 D_8021E1A2;

void func_80209310(s32 arg0, u16 arg1) {
    s32 x, y, i, c;
    s16 a, b;
    s16 p, q;

    do { func_80209B90(arg1); } while (0);
    if (D_8011F330[arg1].st == 0 || D_8011F330[arg1].st != 2) {
        D_8011F330[arg1].st++;
        return;
    }
    do { func_801CA140(arg0); } while (0);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    if (D_8021E1A2 != 0) {
        Tri *t = &D_8021B110[D_8011F2F0[arg1].v];
        do { func_8014A4C8(arg0, t->x, t->y + D_8021AFE6, 0xB, t->id); } while (0);
    }
    if (D_8021E1A2 == 0) {
        x = 0x55;
        y = 0x2A;
        if (D_8021B128 == 1) {
            x = 7;
        }
    } else {
        x = 0;
        y = 0;
    }
    for (i = 0; i <= D_8021E1A2; i++) {
        if (D_8021B014[i] == 1) {
            do { func_8014A4C8(arg0, D_8021B1A4[i].x + x, D_8021B1A4[i].y + y + D_8021AFE6, 0xB, 0x56); } while (0);
        }
    }
    if (D_8021B128 == 1 && D_8011F2F0[arg1].v == D_8021E1A2) {
        if (D_8011F2F0[arg1].v == 0) {
            x = 0x34;
            y = 0x14;
        } else {
            x = 0;
            y = 0;
        }
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xC8);
        if (!(func_80148230() & 0xFF)) {
            func_8014A4C8(arg0, 0x8C, 0x68, 0xB, 0x59);
            func_8014A4C8(arg0, 0x8C, 0xAB, 0xB, 0x5A);
            func_8014A4C8(arg0, 0x114, 0x68, 0xB, 0x5B);
            func_8014A4C8(arg0, 0x114, 0xAB, 0xB, 0x5C);
        } else {
            a = x + 0x58;
            b = y + 0x59;
            func_8014A4C8(arg0, a, b, 0xB, 0x4B);
            func_8014A4C8(arg0, a, y + 0x91, 0xB, 0x4C);
            func_8014A4C8(arg0, x + 0xE0, b, 0xB, 0x4D);
            func_8014A4C8(arg0, x + 0xE0, y + 0x91, 0xB, 0x4E);
        }
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, D_8021E19E);
        if (D_8021B1A0 > 0) {
            func_8014A4C8(arg0, x + 0x5B, y + 0x62, 0xB, 0x23);
            func_8014A4C8(arg0, x + 0xD2, y + 0x62, 0xB, 0x24);
            func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
            func_8014A4C8(arg0, x + 0x71, y + 0x65, 0xB, 0x27);
        } else if (!(func_80148230() & 0xFF) && D_8021E18C < 9) {
            func_8014A4C8(arg0, x + 0x5B, D_8021B12C * 0x14 + y + 0x58, 0xB, 0x23);
            func_8014A4C8(arg0, x + 0xD2, D_8021B12C * 0x14 + y + 0x58, 0xB, 0x24);
            switch (D_8021B12C) {
            case 0:
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                func_8014A4C8(arg0, 0xA4, 0x6F, 0xB, 0x25);
                func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                func_8014A4C8(arg0, 0xA4, 0x83, 0xB, 0x26);
                func_8014A4C8(arg0, 0xA4, 0x97, 0xB, 9);
                break;
            case 1:
                func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                func_8014A4C8(arg0, 0xA4, 0x97, 0xB, 9);
                func_8014A4C8(arg0, 0xA4, 0x6F, 0xB, 0x25);
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                func_8014A4C8(arg0, 0xA4, 0x83, 0xB, 0x26);
                break;
            case 2:
                func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                func_8014A4C8(arg0, 0xA4, 0x6F, 0xB, 0x25);
                func_8014A4C8(arg0, 0xA4, 0x83, 0xB, 0x26);
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                func_8014A4C8(arg0, 0xA4, 0x97, 0xB, 9);
                break;
            }
        } else {
            func_8014A4C8(arg0, x + 0x5B, D_8021B12C * 0x14 + y + 0x62, 0xB, 0x23);
            func_8014A4C8(arg0, x + 0xD2, D_8021B12C * 0x14 + y + 0x62, 0xB, 0x24);
            if (D_8021B12C == 0) {
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
                func_8014A4C8(arg0, x + 0x71, y + 0x65, 0xB, 0x25);
                func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
            } else {
                func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
                func_8014A4C8(arg0, x + 0x71, y + 0x65, 0xB, 0x25);
                func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
            }
            func_8014A4C8(arg0, x + 0x71, y + 0x7A, 0xB, 0x26);
        }
    }
}

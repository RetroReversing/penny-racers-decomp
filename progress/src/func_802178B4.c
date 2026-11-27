typedef struct { u8 pad0[2]; u16 f2; u8 pad4[9]; u8 fD; u8 padE[2]; u16 f10; u8 pad12[0x2C]; u16 f3E; u8 pad40[4]; f32 f44; f32 f48; f32 f4C; u8 pad50[0x10]; u8 *f60; } Rec;
typedef struct { u16 timer; u16 count; } Clock;
typedef struct { u8 pad0[2]; u16 f2; u8 pad4[0x8EC]; } Car;
typedef struct { s16 a; u8 pad[54]; } Slot;
typedef struct { Slot e[4]; u8 rest[0x8F0 - 4 * 56]; } SlotCar;
extern Rec D_8011F2F0[];
extern u16 D_8018BC3C;
extern u16 D_8021C114;
extern u16 D_8021C116;
extern s32 D_801E99C0;
extern u8 D_8021C110;
extern u8 D_8021C111;
extern u16 objListHead[];
extern u8 D_8006FB38[];
extern Car sCars[];
extern SlotCar D_8022AD64[];
extern s32 D_8021B680;
extern s32 D_80168BB0;
extern s32 D_8021AFDC;
extern s16 gameState;
extern u8 D_8021E144;
void setScreenTransition(s32, s32, s32, s32, s32);
void func_80211C7C(s32);
void alSeqpStop(void *);
void func_802319E8(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);
void func_8021F5F0(void);
void func_801D63F4(void);
void func_80143D70(void);
s32 func_80205D48(f32, f32, u8);

void func_802178B4(u16 id) {
    u16 i;
    u16 j;
    u16 k;

    switch (D_8011F2F0[id].f3E) {
    case 0:
        D_8021C114 = 0;
        D_8021C116++;
        *(u16 *) (D_8011F2F0[D_8018BC3C].f60 + 4) = 0;
        if (D_8021C116 >= 0x14) {
            D_8011F2F0[id].f3E = 5;
            D_8021C116 = 0;
            setScreenTransition(1, 0x3C, 0xFF, 0xFF, 0xFF);
        }
        break;
    case 5:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_8011F2F0[id].f3E = 1;
        }
        func_80211C7C(0x14);
        break;
    case 1:
        if (D_8021C114 >= 0x385 || D_801E99C0 == 1) {
            D_8011F2F0[id].f44 = 4.0f;
            D_8011F2F0[id].f48 = 0.0f;
            D_8011F2F0[id].f4C = 4.0f;
            setScreenTransition(2, 0x3C, 0xFF, 0xFF, 0xFF);
            D_8011F2F0[id].f3E = 2;
            if (D_801E99C0 == 1) {
                D_8021C110 = 2;
            }
        } else {
            D_8021C114++;
        }
        func_80211C7C(0x14);
        break;
    case 2:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            for (k = objListHead[0]; k != 0xFFFF; k = D_8011F2F0[k].f10) {
                D_8011F2F0[k].fD = 4;
            }
            D_8011F2F0[id].fD = 0;
            D_8011F2F0[id].f2 |= 0x20;
            D_8011F2F0[D_8018BC3C].fD = 0;
            if (D_8021C110 >= 2) {
                alSeqpStop(D_8006FB38);
            }
            D_8011F2F0[id].f3E = 3;
        }
        break;
    case 3:
        D_8011F2F0[id].f48 = (u16) ((u16) D_8011F2F0[id].f48 + 1);
        if ((u16) D_8011F2F0[id].f48 > (u16) D_8011F2F0[id].f4C) {
            D_8011F2F0[id].f3E = 4;
        }
        break;
    case 4:
        func_802319E8();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0xFF, 0xFF, 0xFF);
        func_8021F5F0();
        for (i = 0; i < 4; i++) {
            if (sCars[i].f2 != 0xFFFF && i < 4) {
                for (j = 0; j < 4; j++) {
                    D_8022AD64[i].e[j].a = -1;
                }
            }
        }
        func_801D63F4();
        if (D_8021C110 >= 2) {
            func_80143D70();
            D_8021B680 = 0x22;
            D_80168BB0 = 0;
            D_8021C110 = 0;
        } else {
            D_80168BB0 = 0x2C;
        }
        D_8021AFDC = 0x2C;
        gameState = 8;
        D_8021E144 = 0;
        break;
    }
    D_8021C111 = func_80205D48(255.0f, 4.0f, 1);
}

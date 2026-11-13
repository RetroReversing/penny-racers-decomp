extern u8 D_8011F2F2[], D_8011F2FD[], D_8011F300[], D_8011F32E[], D_8011F334[], D_8011F338[], D_8011F33C[];
extern u8 *D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_8021C114, D_8021C116;
extern u8 D_8021C110, D_8021C111;
extern s32 D_801E99C0;
extern u16 D_800E1850;
extern u8 D_8006FB38[];
extern u8 D_8022A772[], D_8022AD64[];
extern s32 D_8021B680, D_80168BB0, D_8021AFDC;
extern s16 D_8006F9E8;
extern u8 D_8021E144;
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80211C7C(s32);
void func_8002C410(void *);
void func_802319E8(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);
void func_8021F5F0(u16 arg0);
void func_801D63F4(void);
void func_80143D70(void);
u8 func_80205D48(f32, f32, s32);

#define R(T, sym, i) (*(T *)(sym + (i) * 100))
#define PLR (D_8011F350[D_8018BC3C * 25])

void func_802178B4(u16 arg0) {
    u16 i, j;

    switch (R(u16, D_8011F32E, arg0)) {
    case 4:
        D_8021C114 = 0;
        *(u16 *)(PLR + 4) = 0;
        D_8021C116++;
        if (D_8021C116 >= 20) {
            R(u16, D_8011F32E, arg0) = 5;
            D_8021C116 = 0;
            do { func_80203DF8(1, 0x3C, 0xFF, 0xFF, 0xFF); } while (0);
        }
        break;
    case 0:
        if (PLR[0] == 0) {
            R(u16, D_8011F32E, arg0) = 1;
        }
        func_80211C7C(0x14);
        break;
    case 1:
        if (D_8021C114 >= 0x385 || D_801E99C0 == 1) {
            R(f32, D_8011F334, arg0) = 4.0f;
            R(f32, D_8011F338, arg0) = 0.0f;
            R(f32, D_8011F33C, arg0) = 4.0f;
            do { func_80203DF8(2, 0x3C, 0xFF, 0xFF, 0xFF); } while (0);
            R(u16, D_8011F32E, arg0) = 2;
            if (D_801E99C0 == 1) {
                D_8021C110 = 2;
            }
        } else {
            D_8021C114++;
        }
        func_80211C7C(0x14);
        break;
    case 2:
        if (PLR[0] == 0) {
            for (i = D_800E1850; i != 0xFFFF; i = R(u16, D_8011F300, i)) {
                R(u8, D_8011F2FD, i) = 4;
            }
            R(u8, D_8011F2FD, arg0) = 0;
            R(u16, D_8011F2F2, arg0) |= 0x20;
            R(u8, D_8011F2FD, D_8018BC3C) = 0;
            if (D_8021C110 >= 2) {
                func_8002C410(D_8006FB38);
            }
            R(u16, D_8011F32E, arg0) = 3;
        }
        break;
    case 3:
        R(f32, D_8011F338, arg0) = (u16)((u32)R(f32, D_8011F338, arg0) + 1);
        if ((u16)(u32)R(f32, D_8011F33C, arg0) < (u16)(u32)R(f32, D_8011F338, arg0)) {
            R(u16, D_8011F32E, arg0) = 4;
        }
        break;
    case 5:
        func_802319E8();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0xFF, 0xFF, 0xFF);
        func_8021F5F0(arg0);
        for (i = 0; i < 4; i++) {
            if (*(u16 *)(D_8022A772 + i * 0x470) != 0xFFFF && i < 4) {
                for (j = 0; j < 4; j++) {
                    *(s16 *)(D_8022AD64 + i * 0x470 + j * 56) = -1;
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
        D_8006F9E8 = 8;
        D_8021E144 = 0;
        break;
    }
    D_8021C111 = func_80205D48(255.0f, 4.0f, 1);
}

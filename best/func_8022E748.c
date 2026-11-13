extern s32 D_801E99A0[];
extern s32 D_801E9A10[];
extern u8 D_8022B64C[];
extern u8 D_8022ACAA[];
extern u8 D_8022ACCE[];
extern u8 D_8006FAF0[];
extern u8 D_800DA26A[];
extern u8 D_8011F2FC[];
extern u8 D_80159230[];
extern u16 D_8018A438;
extern u8 D_801E87E1;
extern u8 D_801E87E3;
extern u16 D_801E975A;
extern u16 D_801E975C;
extern u8 func_80232820;

u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_80148230(void);
void func_80231A0C(void);
void func_80231E30(void);
void func_8022F780(u16);
void func_800E067C(void);
void func_802312F8(s32);
void func_802306F0(u8);
void func_8021F6A0(u8);
void func_8022FE50(s32, s32, s32, s32);
void func_8013ADA8(void);
void func_801DDA5C(void);
extern u8 func_8012AD9C[];
extern u8 func_8013DD2C[];
extern u8 func_8015A414[];
extern u8 func_801E0F10[];
extern u8 D_80159230[];

void func_8022E748(void) {
    s32 var_s1 = 0;
    s32 i;
    s32 j;
    u8 *p;
    s32 *d;

    func_80231A0C();
    func_80231E30();
    func_8022F780(*(u16 *)(D_8006FAF0 + 0x20));
    func_800E067C();
    func_802312F8(0);
    if ((u32)(func_80232820 - 1) < 2U) {
        func_802306F0(func_80232820);
    }
    if (func_80232820 == 2) {
        if (((s32 *)D_801E9A10)[0] != 0 && ((s32 *)D_801E9A10)[2] != 0 && ((s32 *)D_801E9A10)[3] != 0 && ((s32 *)D_801E9A10)[7] != 0 && *(u16 *)(D_800DA26A + 0x17C) == 0xF) {
            var_s1 = 1;
        }
    } else if (func_80232820 == 1) {
        if (((s32 *)D_801E99A0)[0] != 0 && ((s32 *)D_801E99A0)[2] != 0 && ((s32 *)D_801E99A0)[3] != 0 && ((s32 *)D_801E99A0)[7] != 0 && *(u16 *)(D_800DA26A + 4) == 0xF) {
            var_s1 = 1;
        }
    }
    switch (func_80232820) {
    case 1:
        if (func_80148230() & 0xFF) {
            func_8022FE50(5, 0, 0, 0);
            for (i = 1; i < 6; i++) {
                func_8022FE50(i - 1, i, i, 1);
                if (var_s1 != 0) {
                    *(s32 *)(D_8022ACAA + i * 0x8F0) = 0xF;
                    *(s32 *)(D_8022ACCE + i * 0x8F0) = 0x1E;
                }
            }
        } else {
            func_8022FE50(0, 0, 0, 0);
            D_801E975A = func_800DE41C(0, 0, 3, 0xC0, 0, 0, NULL, func_801E0F10, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            *(u8 *)(D_8011F2FC + D_801E975A * 0x64) = 1;
            if (D_801E87E3 == 1 && D_801E87E1 == *(u16 *)(D_8006FAF0 + 0x20)) {
                p = D_800DA26A + 0x16E;
                d = (s32 *)(D_800DA26A + 0x16E + 0xA40);
                for (j = 0; j < 0; j++) {}
                func_8022FE50(0, 0x11, 1, 2);
                *(s32 *)D_8022B64C = 0;
                *(f32 *)(D_8022B64C - 0x4C) = 1.0f;
                *(f32 *)(D_8022B64C - 0x48) = 1.0f;
                *(f32 *)(D_8022B64C - 0x44) = 1.0f;
                *(f32 *)(D_8022B64C - 0x40) = 1.0f;
                D_801E975C = func_800DE41C(0, 1, 3, 0xC0, 0, 0, NULL, func_801E0F10, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                *(u8 *)(D_8011F2FC + D_801E975C * 0x64) = 2;
            }
        }
        break;
    case 2:
        if ((func_80148230() & 0xFF) != 1) {
            func_8022FE50(4, 0, 0, 0);
            i = 5;
        } else {
            func_8022FE50(0, 0, 0, 0);
            i = 1;
        }
        func_8022FE50(i, 1, 1, 0);
        if ((func_80148230() & 0xFF) != 1) {
            for (i = 2; i < 6; i++) {
                func_8022FE50(i - 2, i, i, 1);
                if (var_s1 != 0) {
                    *(s32 *)(D_8022ACAA + i * 0x8F0) = 0xF;
                    *(s32 *)(D_8022ACCE + i * 0x8F0) = 0x1E;
                }
            }
        }
        break;
    case 3:
        func_8022FE50(3, 0, 0, 0);
        func_8022FE50(4, 1, 1, 0);
        func_8022FE50(5, 2, 2, 0);
        if ((func_80148230() & 0xFF) != 1) {
            for (i = 3; i < 6; i++) {
                func_8022FE50(i - 3, i, i, 1);
            }
        }
        break;
    case 4:
        func_8022FE50(2, 0, 0, 0);
        func_8022FE50(3, 1, 1, 0);
        func_8022FE50(4, 2, 2, 0);
        func_8022FE50(5, 3, 3, 0);
        if ((func_80148230() & 0xFF) != 1) {
            for (i = 4; i < 6; i++) {
                func_8022FE50(i - 1, i, i, 1);
            }
        }
        break;
    }
    func_8021F6A0(func_80232820);
    switch (func_80232820) {
    case 4:
        func_800DE41C(0, 0, 3, 0, 1, 0, func_8012AD9C, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_800DE41C(0, 0, 3, 0, 0x20, 4, NULL, func_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_800DE41C(0, 0, 3, 0, 0x20, 7, NULL, func_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_800DE41C(0, 0, 3, 0, 0, 0, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        break;
    case 1:
        func_800DE41C(0, 0, 3, 0, 0, 0, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        break;
    case 2:
        func_800DE41C(0, 0, 3, 0, 0x20, 1, NULL, func_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_800DE41C(0, 0, 3, 0, 0, 0, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        break;
    case 3:
        func_800DE41C(0, 0, 3, 0, 0x20, 1, NULL, func_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_800DE41C(0, 0, 3, 0, 0x20, 4, NULL, func_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        func_800DE41C(0, 0, 3, 0, 0, 0, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        break;
    }
    func_8013ADA8();
    func_801DDA5C();
    D_8018A438 = func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, D_80159230, func_8015A414, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80190C98;
extern u8 D_80190CB0;
extern u8 D_80190CA8;
extern u8 D_80190CB2;
extern u16 D_80190C9A;
extern s16 D_8021E19C;
extern u8 D_801C5EA2;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s32 D_80168BB0;
extern s16 D_8006F9E8;

s32 func_800DE41C();
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_801E1EEC(s32, s32);
void func_80215DE0(void);
void func_80216128(void);
void func_802163B0(void);
void func_8021662C(void);
void func_80216958(void);
void func_80216D80(void);

void func_80215850(s32 arg0) {
    u8 *s0;
    u16 *s1;
    u8 *s2;
    u16 st;

    s0 = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
    s1 = &D_80190C98;
    s2 = (u8 *)s1 + 0x18;
    st = *(u16 *)(s0 + 0x3E);
    switch (st) {
    case 0x0:
        if (*(u8 *)*(u8 **)(D_8011F350 + D_8018BC3C * 0x64) == 0) {
            D_8021E19C = 0;
            *(u16 *)(s0 + 0x3E) = 0x10;
            if (D_801C5EA2 == 2) {
                *(u16 *)(s0 + 0x3E) = 0x30;
                D_80190CB2 = 0;
                do { func_801E1EEC(7, 0); } while (0);
            } else if (D_801C5EA2 == 3) {
                *(u16 *)(s0 + 0x3E) = 0x20;
            }
        }
        break;
    case 0x10:
        *s1 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, func_80215DE0, func_80216128, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *s2 = 1;
        *(u16 *)(s0 + 0x3E) = 0x18;
        goto check;
    case 0x20:
        *s1 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, func_802163B0, func_8021662C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *s2 = 1;
        *(u16 *)(s0 + 0x3E) = 0x28;
        goto check;
    case 0x30:
        D_80190CA8 = 0;
        *s1 = func_800DE41C(0, 0, 3, 0, 0x4A, 0, 0, func_80216958, func_80216D80, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *s2 = 1;
        *(u16 *)(s0 + 0x3E) = 0x38;
        goto check;
    case 0x18:
    case 0x28:
    case 0x38:
    check:
        if (*s2 == 0) {
            D_8011F2FD[*s1 * 0x64] = 2;
            *(u16 *)(s0 + 0x3E) = D_80190C9A;
        }
        break;
    case 0xF0:
        func_80203DF8(2, 6, 0, 0, 0);
        *(u16 *)(s0 + 0x3E) = 0xF8;
        /* fall through */
    case 0xF8:
        if (*(u8 *)*(u8 **)(D_8011F350 + D_8018BC3C * 0x64) == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x2A;
            D_8021B060 = 2;
            D_80168BB0 = 2;
            D_8006F9E8 = 0x16;
        }
        break;
    case 0xFA:
        func_80203DF8(2, 0x14, 0, 0, 0);
        *(u16 *)(s0 + 0x3E) = 0xFB;
        /* fall through */
    case 0xFB:
        if (*(u8 *)*(u8 **)(D_8011F350 + D_8018BC3C * 0x64) == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x2A;
            D_8021B060 = 2;
            D_80168BB0 = 2;
        }
        break;
    }
}

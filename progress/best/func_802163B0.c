s32 func_8014A870(s32, s32, s32);
void func_801D651C(s32, s32);
extern u8 D_8011F2F0[];
extern u16 D_80190CA0;
extern u8 D_80190CA6;
extern u8 D_80190CB0;
extern u8 D_801C5E9C[];
extern u8 D_801C5E9D;
extern u8 D_801C5EA2;

void func_802163B0(s32 arg0) {
    u8 *s4 = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    u16 *s1 = &D_80190CA0;
    u8 *s3 = (u8 *)&D_80190CA0 + 2;
    u8 *s2 = (u8 *)&D_80190CA0 + 4;
    s32 s0 = func_8014A870(0x1E, 7, 0);
    s16 t;

    switch (*(u16 *)(s4 + 0x3E)) {
    case 0:
        *s1 = 0xFF;
        D_80190CA6 = 0;
        *s3 = D_801C5E9C[0] - 3;
        *s2 = D_801C5E9C[1] - 5;
        *(u16 *)(s4 + 0x3E) = 0x10;
        /* fall through */
    case 0x10:
        if ((s0 & 8) && *s3 != 1) {
            func_801D651C(7, 0x3B);
            *s3 = 1;
        }
        if ((s0 & 4) && *s3 != 0) {
            func_801D651C(7, 0x3B);
            *s3 = 0;
        }
        D_801C5E9C[0] = *s3 + 3;
        if (s0 & 0x10) {
            s0 = 0;
            func_801D651C(7, 0x3D);
            D_80190CA6 = 1;
            *(u16 *)(s4 + 0x3E) = 0x20;
        }
        if (s0 & 0x20) {
            func_801D651C(7, 0x3A);
            D_80190CB0 = 0;
            *(s16 *)((u8 *)&D_80190CB0 - 0x16) = 0x10;
            D_801C5EA2 = 5;
        }
        return;
    case 0x20:
        if ((s0 & 8) && *s2 != 1) {
            func_801D651C(7, 0x3B);
            *s2 = 1;
        }
        if ((s0 & 4) && *s2 != 0) {
            func_801D651C(7, 0x3B);
            *s2 = 0;
        }
        D_801C5E9D = *s2 + 5;
        if (s0 & 0x10) {
            s0 = 0;
            func_801D651C(7, 0x3D);
            *(u16 *)(s4 + 0x3E) = 0x30;
        }
        if (s0 & 0x20) {
            func_801D651C(7, 0x3A);
            *(u16 *)(s4 + 0x3E) = 0;
            return;
        }
        break;
    case 0x30:
        t = *s1 - 8;
        *s1 = t;
        if (t < 0) {
            *s1 = 0;
            D_80190CB0 = 0;
            *(s16 *)((u8 *)&D_80190CB0 - 0x16) = 0xF0;
        }
        break;
    }
}

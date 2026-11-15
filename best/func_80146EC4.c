extern s32 func_801485C8(void);
extern s32 func_80148754(u8, u8);
extern s32 func_8014A870(s32, s32, s32);
extern void func_8014B854(s32);
extern s32 func_8014BAC0(s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_80189B36;
extern s16 D_80189C98;
extern u8 D_80189C9A[];
extern u8 D_80189CC6[];
extern u8 D_80190CA0[];

void func_80146EC4(s32 arg0) {
    s32 s1;
    u8 *temp_s0;
    u8 *base;

    temp_s0 = D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
    base = D_80189CC6;
    if (*(u16 *)base & 0x800) {
        s1 = func_8014A870(0x14, 3, base[-8]);
        if (s1 & 8) {
            if (!(*(u16 *)base & 0x8000)) {
                *(u16 *)base |= 0x8000;
                func_8014B854(0x3B);
            }
        }
        if (s1 & 4) {
            if (*(u16 *)base & 0x8000) {
                *(u16 *)base &= 0x7FFF;
                func_8014B854(0x3B);
            }
        }
    } else {
        s1 = func_8014BAC0(0x14) & 0x10;
        temp_s0[0] += 1;
        if (temp_s0[0] >= 0x29) {
            s1 = 0x10;
        }
    }
    if (s1 & 0x10) {
        D_80189B36 &= 0xEF;
        if (!(*(u16 *)base & 0x8000)) {
            *(u16 *)(D_8011F2FD + *(u16 *)D_80190CA0 * 0x64) = 2;
            *(u16 *)(D_8011F2FD + *(u16 *)(D_80190CA0 + 2) * 0x64) = 2;
            *(u16 *)base |= 0x3000;
            func_8014B854(0x3D);
            func_80148754(base[-0x10], base[-8]);
            if (func_801485C8() == 0) {
                *(s16 *)(base - 0x2E) = 0x100;
            } else {
                D_80189C9A[1] += 1;
                *(s16 *)(D_80189C9A + 1 - 3) = 0x21;
                D_80189C9A[1 - 1] = 0;
            }
        } else {
            func_8014B854(0x3A);
            D_80189C98 = 0x41;
        }
    }
    if (s1 & 0x20) {
        func_8014B854(0x3A);
        D_80189B36 &= 0xEF;
        D_80189C98 = 0x41;
    }
}

extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_80189B36[];
extern u8 D_80189C98[];
extern u8 D_80189C9A[];
extern u8 D_80189CC6[];
extern u8 D_80190CA0[];

s32 func_8014A870();
s32 func_8014B854();
s32 func_8014BAC0();
s32 func_80148754();
s32 func_801485C8();

void func_80146EC4(s32 arg0)
{
    u8 *s0;
    u8 *s2;
    s32 s1;

    s2 = D_80189CC6;
    s0 = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    if (*(u16 *)s2 & 0x800) {
        s1 = func_8014A870(0x14, 3, s2[-8]);
        if (s1 & 8) {
            if (!(*(u16 *)s2 & 0x8000)) {
                *(u16 *)s2 = *(u16 *)s2 | 0x8000;
                func_8014B854(0x3B);
            }
        }
        if (s1 & 4) {
            if (*(u16 *)s2 & 0x8000) {
                *(u16 *)s2 = *(u16 *)s2 & 0x7FFF;
                func_8014B854(0x3B);
            }
        }
    } else {
        s1 = func_8014BAC0(0x14) & 0x10;
        s0[0]++;
        if (s0[0] >= 0x29) {
            s1 = 0x10;
        }
    }

    if (s1 & 0x10) {
        D_80189B36[0] &= 0xEF;
        s1 = 0;
        if (!(*(u16 *)s2 & 0x8000)) {
            D_8011F2FD[*(u16 *)D_80190CA0 * 100] = 2;
            D_8011F2FD[*(u16 *)(D_80190CA0 + 2) * 100] = 2;
            *(u16 *)s2 = *(u16 *)s2 | 0x3000;
            func_8014B854(0x3D, D_80190CA0);
            func_80148754(s2[-0x10], s2[-8]);
            if (func_801485C8() == 0) {
                *(s16 *)(s2 - 0x2E) = 0x100;
            } else {
                D_80189C9A[1]++;
                *(s16 *)(D_80189C9A + 1 - 3) = 0x21;
                D_80189C9A[0] = 0;
            }
        } else {
            func_8014B854(0x3A);
            *(s16 *)D_80189C98 = 0x41;
        }
    } else if (s1 & 0x20) {
        func_8014B854(0x3A);
        D_80189B36[0] &= 0xEF;
        *(s16 *)D_80189C98 = 0x41;
    }
}

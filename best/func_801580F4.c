s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_801FA38C(s32);
extern u16 D_8011F2F0[];
extern u16 D_8011F2F2[];
extern u16 D_8011F32E[];
extern f64 D_80183880;
extern u16 D_8018D660;
extern s32 D_802393D4[];
extern s32 func_80157F6C[];
extern s32 func_801580AC[];

void func_801580F4(s32 arg0) {
    s32 idx;
    s32 n;
    s32 r;
    s32 cnt;
    f64 base;
    f64 v;

    idx = (arg0 & 0xFFFF) * 0x64;
    if (*(u16 *)((u8 *)D_8011F32E + idx) == 0) {
        D_8018D660 = 0;
        *(u16 *)((u8 *)D_8011F32E + idx) = 1;
    }
    D_8018D660 += 1;
    cnt = 0;
    if (D_8018D660 >= 0xB) {
        base = D_80183880;
loop_4:
        r = func_801FA38C(0) % 1800;
        v = (f64)r;
        if (r < 0) {
            v += base;
        }
        n = func_800DE41C(0, 0x1E, 1, 0, 0x5B, 0xFF, D_802393D4, func_80157F6C, func_801580AC, 1800.0f, -260.0f, (f32)v + -1200.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
        if ((u32)((n + 2) & 0xFFFF) >= 2) {
            *(u16 *)((u8 *)D_8011F2F0 + (n & 0xFFFF) * 0x64 + 8) = 0x40;
            *(u16 *)((u8 *)D_8011F2F0 + (n & 0xFFFF) * 0x64 + 6) = 0x40;
            *(u16 *)((u8 *)D_8011F2F0 + (n & 0xFFFF) * 0x64 + 4) = 0x40;
            *(u16 *)((u8 *)D_8011F2F2 + (n & 0xFFFF) * 0x64) = 0x40;
            r = func_801FA38C(0) % 1800;
            v = (f64)r;
            if (r < 0) {
                v += base;
            }
            n = func_800DE41C(0, 0x1E, 1, 0, 0x5B, 0xFF, D_802393D4, func_80157F6C, func_801580AC, 1200.0f, -260.0f, (f32)v + -1200.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
            if ((u32)((n + 2) & 0xFFFF) >= 2) {
                *(u16 *)((u8 *)D_8011F2F0 + (n & 0xFFFF) * 0x64 + 8) = 0x40;
                *(u16 *)((u8 *)D_8011F2F0 + (n & 0xFFFF) * 0x64 + 6) = 0x40;
                *(u16 *)((u8 *)D_8011F2F0 + (n & 0xFFFF) * 0x64 + 4) = 0x40;
                *(u16 *)((u8 *)D_8011F2F2 + (n & 0xFFFF) * 0x64) = 0x40;
                cnt += 1;
                if ((u32)(cnt & 0xFFFF) < 2) {
                    goto loop_4;
                }
            }
        }
        D_8018D660 = 0;
    }
}

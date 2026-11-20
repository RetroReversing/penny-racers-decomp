f32 __cosf(f32);
f32 __sinf(f32);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern u8 D_8011F2F0;
extern u8 D_8016891C;
extern u8 D_802390C8;
extern u8 func_801434CC;
extern u8 func_801435A8;

void func_80143250(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9) {
    u8 *rec;
    u8 *rec2;
    f32 fs3;
    f32 ang;
    f32 s;
    f32 c;
    s32 i;
    s32 r;

    rec = (u8 *)&D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    if (arg9 != 0) {
        fs3 = *(f32 *)((u8 *)&D_8016891C + *(u16 *)(rec + 0x40) * 0x5C);
    } else {
        fs3 = *(f32 *)(rec + 0x1C);
    }
    i = 0;
    if (arg6 != 0) {
        do {
            ang = ((f32)i * (360.0f / (f32)(arg6 & 0xFFFF)) + arg5) * 0.0174532925f;
            s = __sinf(ang);
            c = __cosf(ang);
            r = func_800DE41C(0, 0, 1, 0, 0x5B, arg8 & 0xFF, &D_802390C8, &func_801434CC, &func_801435A8,
                              s * arg4 + *(f32 *)(rec + 0x18), fs3, c * arg4 + *(f32 *)(rec + 0x20),
                              0, 0, 0, arg3, arg3, arg3);
            i++;
            if ((u16)(r + 2) >= 2) {
                rec2 = (u8 *)&D_8011F2F0 + (u16)r * 100;
                *(u16 *)(rec2 + 8) = 0x40;
                *(u16 *)(rec2 + 6) = 0x40;
                *(u16 *)(rec2 + 4) = 0x40;
                *(u16 *)(rec2 + 2) = 0x40;
                *(f32 *)(rec2 + 0x44) = s * arg2;
                *(f32 *)(rec2 + 0x4C) = c * arg2;
                *(s32 *)(rec2 + 0x48) = arg1;
                *(u16 *)(rec2 + 0x40) = arg7;
            }
        } while (i < (arg6 & 0xFFFF));
    }
}

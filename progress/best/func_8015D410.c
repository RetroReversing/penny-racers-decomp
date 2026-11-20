s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364();
s32 func_8013E818(s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_801684D8[];
extern u8 D_8018D6C4[];
extern u8 D_8018D6D6[];
extern u8 D_802395A8[];
extern u8 D_802395DC[];
void func_8015D7F0();
void func_8015DC9C();
void func_8015DD80();
void func_8015E240();
void func_8015E404();
void func_8015E484();

void func_8015D410(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    u32 off;
    s32 r;
    u16 s1;

    s1 = func_8013E364() & 0xFFFF;
    if (s1 != 0xFFFF) {
        off = ((u16)arg0) * 0x64;
        r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_801684D8, &func_8015D7F0, &func_8015E240,
                          *(f32 *)(D_8011F308 + off), *(f32 *)(D_8011F30C + off), *(f32 *)(D_8011F310 + off),
                          0, 0, 0, 1.0f, 1.0f, 1.0f);
        if ((u16)(r + 2) >= 2) {
            func_8013E818(s1, r & 0xFFFF, 0, arg1, 0, 0, 3);
            *(s32 *)(D_8018D6C4 + s1 * 0x7C) = arg2;
            *(s8 *)(D_8018D6D6 + s1 * 0x7C) = arg3;
            s1 = func_8013E364() & 0xFFFF;
            if (s1 != 0xFFFF) {
                off = ((u16)arg0) * 0x64;
                r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_802395A8, &func_8015DC9C, &func_8015E404,
                                  *(f32 *)(D_8011F308 + off), *(f32 *)(D_8011F30C + off), *(f32 *)(D_8011F310 + off),
                                  0, 0, 0, 1.0f, 1.0f, 1.0f);
                if ((u16)(r + 2) >= 2) {
                    *(s32 *)(D_8018D6C4 + s1 * 0x7C) = arg2;
                    func_8013E818(s1, r & 0xFFFF, 0, arg1, 0, 0, 0);
                    *(s8 *)(D_8018D6D6 + s1 * 0x7C) = arg3;
                    s1 = func_8013E364() & 0xFFFF;
                    if (s1 != 0xFFFF) {
                        off = ((u16)arg0) * 0x64;
                        r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, &D_802395DC, &func_8015DD80, &func_8015E484,
                                          *(f32 *)(D_8011F308 + off), *(f32 *)(D_8011F30C + off), *(f32 *)(D_8011F310 + off),
                                          0, 0, 0, 1.0f, 1.0f, 1.0f);
                        if ((u16)(r + 2) < 2) {
                            func_8013E49C(s1);
                        } else {
                            func_8013E818(s1, r & 0xFFFF, 0, arg1, 0, 0, 0);
                            *(s32 *)(D_8018D6C4 + s1 * 0x7C) = arg2;
                            *(s8 *)(D_8018D6D6 + s1 * 0x7C) = arg3;
                        }
                    } else {
                        func_8013E49C(s1);
                    }
                } else {
                    func_8013E49C(s1);
                }
            } else {
                func_8013E49C(s1);
            }
        } else {
            func_8013E49C(s1);
        }
    }
}

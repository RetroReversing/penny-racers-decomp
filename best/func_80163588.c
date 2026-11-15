s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80129918(void *, s32, s32, s32, f32, f32, f32);
void func_8013E49C(u16);
s32 func_8013F1D4(s32, void *);
void func_801D7028(s32, s32);
void func_8016410C(void);
void func_80164324(void);
extern u8 D_8011F340[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F2F2[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern u8 D_8011F33C[];
extern u8 D_8006FAF0[];
extern f32 D_80168574[];
extern u8 D_802390C8[];

void func_80163588(u16 arg0) {
    s32 idx = arg0 * 100;
    u8 *ctl;
    u8 *obj;
    u8 *o;
    f32 f;
    u16 v;
    u16 lo;
    s32 i;

    if (*(u8 *)(*(u8 **)(D_8011F340 + idx)) != 0) {
        return;
    }
    ctl = D_8011F2F0 + idx;
    obj = *(u8 **)(ctl + 0x60);
    if (*(s16 *)(obj + 0x14) > 0) {
        *(s16 *)(obj + 0x14) -= 1;
        if (*(s16 *)(obj + 0x14) <= 0) {
            if (*(f32 *)(obj + 0xC) == 0.0f) {
                for (i = 0; i < 7; i++) {
                    *(u8 *)(obj + 0x67 + i) = 0;
                }
            } else {
                o = *(u8 **)(obj + 4);
                v = *(u16 *)(o + 0x560);
                lo = (v & 7) - 1;
                *(u16 *)(o + 0x560) = v & 0xF8;
                o = *(u8 **)(obj + 4);
                *(u16 *)(o + 0x560) = *(u16 *)(o + 0x560) | lo;
                func_8013E49C(*(u16 *)(obj + 0x76));
                D_8011F2FD[idx] = 2;
            }
        }
    }
    f = *(f32 *)(obj + 0xC);
    if (f != 0.0f) {
        *(f32 *)(obj + 8) = *(f32 *)(obj + 8) * 0.9f;
        *(f32 *)(obj + 0xC) = *(f32 *)(obj + 0xC) - 0.11f;
        *(f32 *)(obj + 0x10) = *(f32 *)(obj + 0x10) * 0.9f;
        func_80129918(obj + 0x1C, *(s32 *)(ctl + 0x18), *(s32 *)(ctl + 0x1C),
                      *(s32 *)(ctl + 0x20), *(f32 *)(obj + 8), *(f32 *)(obj + 0xC),
                      *(f32 *)(obj + 0x10));
        *(f32 *)(ctl + 0x18) = *(f32 *)(obj + 0x24);
        *(f32 *)(ctl + 0x1C) = *(f32 *)(obj + 0x28);
        *(f32 *)(ctl + 0x20) = *(f32 *)(obj + 0x2C);
        if (*(s32 *)(obj + 0x1C) & 0xFFFF00) {
            *(f32 *)(obj + 0xC) = 0.0f;
            return;
        }
        if (*(f32 *)(ctl + 0x1C) < D_80168574[*(u16 *)(D_8006FAF0 + 0x20)]) {
            o = *(u8 **)(obj + 4);
            v = *(u16 *)(o + 0x560);
            lo = (v & 7) - 1;
            *(u16 *)(o + 0x560) = v & 0xF8;
            o = *(u8 **)(obj + 4);
            *(u16 *)(o + 0x560) = *(u16 *)(o + 0x560) | lo;
            func_8013E49C(*(u16 *)(obj + 0x76));
            D_8011F2FD[arg0 * 100] = 2;
        }
    } else if (func_8013F1D4(arg0, obj) & 0xFF) {
        s32 r = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, func_8016410C,
                              func_80164324, *(f32 *)(ctl + 0x18),
                              *(f32 *)(ctl + 0x1C), *(f32 *)(ctl + 0x20), 0, 0, 0,
                              0.08f, 0.08f, 0.08f);
        if ((u16)(r + 2) < 2u) {
            i = 0;
        } else {
            u8 *r2 = D_8011F2F0 + (r & 0xFFFF) * 100;
            *(u16 *)(r2 + 8) = 0x40;
            *(u16 *)(r2 + 6) = 0x40;
            *(u16 *)(r2 + 4) = 0x40;
            *(u16 *)(D_8011F2F2 + (r & 0xFFFF) * 100) = 0x40;
            *(s32 *)(D_8011F334 + (r & 0xFFFF) * 100) = 0;
            *(s32 *)(D_8011F338 + (r & 0xFFFF) * 100) = 0;
            *(s32 *)(D_8011F33C + (r & 0xFFFF) * 100) = 0;
        }
        o = *(u8 **)(obj + 4);
        v = *(u16 *)(o + 0x560);
        lo = (v & 7) - 1;
        *(u16 *)(o + 0x560) = v & 0xF8;
        o = *(u8 **)(obj + 4);
        *(u16 *)(o + 0x560) = *(u16 *)(o + 0x560) | lo;
        func_8013E49C(*(u16 *)(obj + 0x76));
        func_801D7028(arg0, 0x28);
        D_8011F2FD[arg0 * 100] = 2;
    }
}

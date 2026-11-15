s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80129918(void *, s32, s32, s32, f32, f32, f32);
void func_8015D410(s32, s32, void *, s32);
void func_801D7028(s32, s32);
extern u8 D_8011F350[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8006FAF0[];
extern u8 D_80168574[];
extern u8 D_802390C8[];
extern u8 func_80164218[];
extern u8 func_80164364[];

void func_80163E5C(s32 arg0)
{
    u8 *obj;
    u8 *p;
    u8 *q;
    s32 s0;
    s32 r;
    u16 t;
    u16 v;

    obj = *(u8 **)(D_8011F350 + (arg0 & 0xFFFF) * 100);
    p = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    *(f32 *)(obj + 0xC) = *(f32 *)(obj + 0xC) - 0.1f;
    func_80129918(obj + 0x1C, *(s32 *)(p + 0x18), *(s32 *)(p + 0x1C), *(s32 *)(p + 0x20),
                  *(f32 *)(obj + 0x8), *(f32 *)(obj + 0xC), *(f32 *)(obj + 0x10));
    *(f32 *)(p + 0x18) = *(f32 *)(obj + 0x24);
    *(f32 *)(p + 0x1C) = *(f32 *)(obj + 0x28);
    *(f32 *)(p + 0x20) = *(f32 *)(obj + 0x2C);
    if ((*(s32 *)(obj + 0x1C) & 0xFFFF00) ||
        (t = *(u16 *)(obj + 0x14) - 1, *(u16 *)(obj + 0x14) = t, (t << 16) == 0) ||
        (*(f32 *)(p + 0x1C) < *(f32 *)(D_80168574 + *(u16 *)(D_8006FAF0 + 0x20) * 4))) {
        v = *(u16 *)(*(u8 **)(obj + 4) + 0x560);
        *(u16 *)(*(u8 **)(obj + 4) + 0x560) = (u16)(v & 0xF8);
        *(u16 *)(*(u8 **)(obj + 4) + 0x560) = (u16)(*(u16 *)(*(u8 **)(obj + 4) + 0x560) | ((v & 7) - 1));
        s0 = arg0 & 0xFFFF;
        func_8013E49C(*(u16 *)(obj + 0x76));
        func_8015D410(s0, 0x3F800000, *(u8 **)(obj + 4), 0);
        func_801D7028(s0, 0x34);
        *(u8 *)(D_8011F2FD + s0 * 100) = 2;
    }
    if ((*(u16 *)(obj + 0x14) & 3) == 0) {
        r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, D_802390C8, func_80164218, func_80164364,
                          *(f32 *)(p + 0x18), *(f32 *)(p + 0x1C), *(f32 *)(p + 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if ((u32)((r + 2) & 0xFFFF) >= 2U) {
            q = D_8011F2F0 + (r & 0xFFFF) * 100;
            *(s16 *)(q + 8) = 0x40;
            *(s16 *)(q + 6) = 0x40;
            *(s16 *)(q + 4) = 0x40;
            *(s16 *)(q + 2) = 0x40;
            *(f32 *)(q + 0x44) = -*(f32 *)(obj + 0x8) * 0.5f;
            *(f32 *)(q + 0x48) = -*(f32 *)(obj + 0xC) * 0.5f;
            *(f32 *)(q + 0x4C) = -*(f32 *)(obj + 0x10) * 0.5f;
        }
    }
}

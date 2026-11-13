extern void func_80129918(void *, s32, f32, s32, f32, f32, f32);
extern void func_8013E49C(u16);
extern s32 func_8013F050(s32, void *);
extern void func_8015CB40(s32);
extern void func_801D7028(s32, s32);
extern u8 D_8006FAF0[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern f32 D_80168574[];

void func_801614D8(s32 arg0) {
    u8 *rec;
    u8 *obj;
    u16 t;
    u16 old;
    u16 lo;
    u8 *ctl;
    s32 idx;

    rec = D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
    obj = *(u8 **)(rec + 0x60);
    func_80129918(obj + 0x1C, *(s32 *)(rec + 0x18), *(f32 *)(rec + 0x1C), *(s32 *)(rec + 0x20), *(f32 *)(obj + 8), *(f32 *)(obj + 0xC), *(f32 *)(obj + 0x10));
    *(f32 *)(rec + 0x18) = *(f32 *)(obj + 0x24);
    *(f32 *)(rec + 0x1C) = *(f32 *)(obj + 0x28);
    *(f32 *)(rec + 0x20) = *(f32 *)(obj + 0x2C);
    t = *(u16 *)(obj + 0x14) - 1;
    *(u16 *)(obj + 0x14) = t;
    if ((t << 16) == 0 || *(f32 *)(rec + 0x1C) < D_80168574[*(u16 *)(D_8006FAF0 + 0x20)]) {
        ctl = *(u8 **)(obj + 4);
        old = *(u16 *)(ctl + 0x560);
        lo = old & 7;
        *(u16 *)(ctl + 0x560) = old & 0xF8;
        ctl = *(u8 **)(obj + 4);
        *(u16 *)(ctl + 0x560) = *(u16 *)(ctl + 0x560) | (lo - 1);
        idx = arg0 & 0xFFFF;
        func_8013E49C(*(u16 *)(obj + 0x76));
        func_8015CB40(idx);
        D_8011F2FD[idx * 0x64] = 2;
    }
    if ((*(s32 *)(obj + 0x1C) & 0xFFFF00) || (func_8013F050(arg0 & 0xFFFF, obj) & 0xFF)) {
        ctl = *(u8 **)(obj + 4);
        old = *(u16 *)(ctl + 0x560);
        lo = old & 7;
        *(u16 *)(ctl + 0x560) = old & 0xF8;
        ctl = *(u8 **)(obj + 4);
        *(u16 *)(ctl + 0x560) = *(u16 *)(ctl + 0x560) | (lo - 1);
        idx = arg0 & 0xFFFF;
        func_8013E49C(*(u16 *)(obj + 0x76));
        func_8015CB40(idx);
        func_801D7028(idx, 0x33);
        D_8011F2FD[idx * 0x64] = 2;
    }
}

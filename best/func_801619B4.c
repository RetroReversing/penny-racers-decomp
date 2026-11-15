s32 func_80129918(void *, s32, s32, s32, f32, f32, f32);
s32 func_8013E49C(u16);
s32 func_8013F050(void *, void *);
s32 func_8015CB40(void *);
s32 func_801D7028(void *, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8006FAF0[];
extern f32 D_80168574[];

void func_801619B4(s16 arg0) {
    u8 *racer;
    u8 *obj;
    u8 *o;
    u8 *p;
    f32 f;
    u16 v;
    s32 i;

    racer = (u8 *)D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    obj = *(u8 **)(racer + 0x60);
    if (*(s16 *)(obj + 0x14) > 0) {
        *(s16 *)(obj + 0x14) -= 1;
        if (*(s16 *)(obj + 0x14) <= 0) {
            i = 0;
            p = obj;
            do {
                *(u8 *)(p + 0x67) = 0;
                i++;
                p = obj + i;
            } while (i < 7);
        }
    }
    f = *(f32 *)(obj + 0xC);
    if (f != 0.0f) {
        *(f32 *)(obj + 0xC) = f - 0.1f;
        func_80129918(obj + 0x1C, *(s32 *)(racer + 0x18), *(s32 *)(racer + 0x1C),
                      *(s32 *)(racer + 0x20), *(f32 *)(obj + 8), *(f32 *)(obj + 0xC),
                      *(f32 *)(obj + 0x10));
        *(f32 *)(racer + 0x18) = *(f32 *)(obj + 0x24);
        *(f32 *)(racer + 0x1C) = *(f32 *)(obj + 0x28);
        *(f32 *)(racer + 0x20) = *(f32 *)(obj + 0x2C);
        if (*(s32 *)(obj + 0x1C) & 0xFFFF00) {
            *(f32 *)(obj + 0xC) = 0.0f;
            return;
        }
        if (*(f32 *)(racer + 0x1C) < D_80168574[*(u16 *)(D_8006FAF0 + 0x20)]) {
            o = *(u8 **)(obj + 4);
            v = *(u16 *)(o + 0x560);
            *(u16 *)(o + 0x560) = v & 0xF8;
            o = *(u8 **)(obj + 4);
            *(u16 *)(o + 0x560) = *(u16 *)(o + 0x560) | ((v & 7) - 1);
            func_8013E49C(*(u16 *)(obj + 0x76));
            D_8011F2FD[(arg0 & 0xFFFF) * 100] = 2;
        }
    } else {
        if (func_8013F050(arg0 & 0xFFFF, obj) & 0xFF) {
            o = *(u8 **)(obj + 4);
            v = *(u16 *)(o + 0x560);
            *(u16 *)(o + 0x560) = v & 0xF8;
            o = *(u8 **)(obj + 4);
            *(u16 *)(o + 0x560) = *(u16 *)(o + 0x560) | ((v & 7) - 1);
            func_8013E49C(*(u16 *)(obj + 0x76));
            func_8015CB40(arg0 & 0xFFFF);
            func_801D7028(arg0 & 0xFFFF, 0x33);
            *(u8 *)(D_8011F2FD + (s32)(arg0 & 0xFFFF) * 100) = 2;
        }
    }
}

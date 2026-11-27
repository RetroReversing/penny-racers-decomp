extern void ballMoveCollide(void *, s32, s32, s32, f32, f32, f32);
s32 func_8013E49C(u16);
extern s32 func_8013F050(s32, void *);
extern void spawnCrashEffect(s32);
extern void queueObjEvent(s32, s32);
extern u8 D_8006FAF0[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern f32 D_80168574[];

void func_801619B4(s32 arg0) {
    u8 *rec;
    u8 *obj;
    u8 *ctl;
    u8 *p;
    u16 old;
    u16 lo;
    s32 i;
    f32 f;

    rec = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    obj = *(u8 **)(rec + 0x60);
    if (*(s16 *)(obj + 0x14) > 0) {
        *(s16 *)(obj + 0x14) -= 1;
        if ((*(s16 *)(obj + 0x14) << 16) <= 0) {
            i = 0;
            do {
                p = obj + i;
                p[0x67] = 0;
                i++;
            } while (i < 7);
        }
    }
    f = *(f32 *)(obj + 0xC);
    if (f != 0.0f) {
        *(f32 *)(obj + 0xC) = f - 0.1f;
        ballMoveCollide(obj + 0x1C, *(s32 *)(rec + 0x18), *(s32 *)(rec + 0x1C), *(s32 *)(rec + 0x20),
                      *(f32 *)(obj + 0x8), *(f32 *)(obj + 0xC), *(f32 *)(obj + 0x10));
        *(f32 *)(rec + 0x18) = *(f32 *)(obj + 0x24);
        *(f32 *)(rec + 0x1C) = *(f32 *)(obj + 0x28);
        *(f32 *)(rec + 0x20) = *(f32 *)(obj + 0x2C);
        if (*(s32 *)(obj + 0x1C) & 0xFFFF00) {
            *(f32 *)(obj + 0xC) = 0.0f;
            return;
        }
        if (*(f32 *)(rec + 0x1C) < D_80168574[*(u16 *)(D_8006FAF0 + 0x20)]) {
            ctl = *(u8 **)(obj + 4);
            old = *(u16 *)(ctl + 0x560);
            lo = old & 7;
            *(u16 *)(ctl + 0x560) = old & 0xF8;
            ctl = *(u8 **)(obj + 4);
            *(u16 *)(ctl + 0x560) = *(u16 *)(ctl + 0x560) | (lo - 1);
            func_8013E49C(*(u16 *)(obj + 0x76));
            D_8011F2FD[(arg0 & 0xFFFF) * 100] = 2;
        }
    } else {
        if (func_8013F050(arg0 & 0xFFFF, obj) & 0xFF) {
            ctl = *(u8 **)(obj + 4);
            old = *(u16 *)(ctl + 0x560);
            lo = old & 7;
            *(u16 *)(ctl + 0x560) = old & 0xF8;
            ctl = *(u8 **)(obj + 4);
            *(u16 *)(ctl + 0x560) = *(u16 *)(ctl + 0x560) | (lo - 1);
            func_8013E49C(*(u16 *)(obj + 0x76));
            spawnCrashEffect(arg0 & 0xFFFF);
            queueObjEvent(arg0 & 0xFFFF, 0x33);
            D_8011F2FD[(arg0 & 0xFFFF) * 100] = 2;
        }
    }
}

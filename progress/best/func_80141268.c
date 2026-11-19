typedef struct { f32 a; f32 b; f32 c; u8 d; } Tbl80168844;
extern Tbl80168844 D_80168844[];
extern u8 D_8011F2F0[];
extern u8 D_8011F338[];
extern u8 D_8011F334[];
extern u8 D_8022A770[];
extern u8 D_80239818[];
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
s32 func_8013E958(s32, s32, s32, f32, f32, f32, s32);
s32 func_801D7028(s32, s32);
u32 func_801FA30C(void);
f32 sqrtf(f32 x);
extern s32 func_80141818;
extern s32 func_80141BC4;

void func_80141268(s32 arg0) {
    u8 *self;
    u8 *other;
    s32 i;
    s32 off;
    s32 near;
    s32 kind;
    s32 slot;
    s32 res;
    s32 s1;
    s32 s3;
    u16 k;
    f32 dx, dy, dz;
    f32 fs0, fs1, fs2, fs3, fs4;

    near = 0;
    self = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    i = 0;
    do {
        off = (((i * 8) + i) * 16 - i) * 16;
        k = *(u16 *)(D_8022A770 + off + 2);
        if (k != 0xFFFF) {
            other = D_8011F2F0 + k * 100;
            dx = *(f32 *)(self + 0x18) - *(f32 *)(other + 0x18);
            dy = *(f32 *)(self + 0x1C) - *(f32 *)(other + 0x1C);
            dz = *(f32 *)(self + 0x20) - *(f32 *)(other + 0x20);
            if (sqrtf((dx * dx) + (dy * dy) + (dz * dz)) < 1500.0f) {
                near = 1;
            }
        }
        i++;
    } while (i < 7);

    self[0xC]++;
    if (!(self[0xC] & 0x1F) && near) {
        slot = func_8013E364();
        if ((slot & 0xFFFF) != 0xFFFF) {
            if ((u32)(func_801FA30C() & 0xFF) >= 0x80) {
                fs2 = -850.0f - (f32)(u32)(func_801FA30C() & 0x7F);
                kind = 0;
            } else {
                fs2 = -1425.0f - (f32)(u32)(func_801FA30C() & 0x7F);
                kind = 1;
            }
            fs0 = (f32)(u32)((u32)func_801FA30C() % 827) + 59.0f;
            if ((u32)(func_801FA30C() & 0xFF) >= 0x80) {
                fs4 = -1196.0f;
            } else {
                if (kind) {
                    fs4 = -850.0f - (f32)(u32)(func_801FA30C() & 0x7F);
                } else {
                    fs4 = -1425.0f - (f32)(u32)(func_801FA30C() & 0x7F);
                }
            }
            fs3 = (f32)(u32)((u32)func_801FA30C() % 827) + 59.0f;
            s3 = func_801FA30C() & 7;
            res = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, D_80239818, &func_80141818, &func_80141BC4, fs2, -30.0f, fs0, 0, 0, 0, 5.0f, 5.0f, 5.0f);
            if ((u32)((res + 2) & 0xFFFF) >= 2) {
                s1 = res & 0xFFFF;
                func_8013E958(slot & 0xFFFF, s1, 0x40, (fs4 - fs2) * D_80168844[s3].c, D_80168844[s3].a, (fs3 - fs0) * D_80168844[s3].c, D_80168844[s3].d);
                *(f32 *)(D_8011F338 + s1 * 100) = D_80168844[s3].b;
                if (fs4 == -1196.0f) {
                    *(f32 *)(D_8011F334 + s1 * 100) = 1.0f;
                } else {
                    *(s32 *)(D_8011F334 + s1 * 100) = 0;
                }
                func_801D7028(res & 0xFFFF, 0x1E);
                return;
            }
            func_8013E49C(slot & 0xFFFF);
        }
    }
}

#define U16(p,o) (*(u16 *)((u8 *)(p) + (o)))
#define U8(p,o)  (*(u8 *)((u8 *)(p) + (o)))
#define U32(p,o) (*(u32 *)((u8 *)(p) + (o)))

extern u8 D_8011F2F0[];
extern u8 D_800E2660[];
extern u8 D_80126FF6;
extern u8 D_80126FF7;
extern u32 D_800E1860[];
extern u32 D_800E188C;
extern u32 D_800E1890;
extern u32 D_800E1874;
extern u32 D_800E1880;
extern f64 D_800E1E10;
extern void guScale(u32 *m, f32 x, f32 y, f32 z);
extern void guTranslate(u32 *m, f32 x, f32 y, f32 z);
extern void func_800DF2AC(s32 mode, f32 a1, f32 a2, f32 a3, f32 p0, f32 p1, f32 p2, u32 *p3, u32 *p4);
extern void func_801FA678(u32 a0, u32 a1, u32 a2, u32 a3);

void func_800DFD64(u32 **dl, u16 arg1, s32 arg2, f32 a3, f32 f1, f32 f2)
{
    u8 *rec = D_8011F2F0 + (arg1 & 0xFFFF) * 0x64;
    u8 *obj = D_800E2660 + U16(rec, 0x3C) * 0x308;
    u32 *g;
    s32 s0 = arg2 & 0xFF;
    s32 s5;
    s32 s6 = 0;
    f32 fs0 = a3;
    f32 fs1 = f1;
    f32 fs2 = f2;

    if (!(U16(rec, 2 + D_80126FF6 * 2) & 8)) {
        if (!((f64)FLT_CVT(rec, 0x30) == D_800E1E10 && (f64)FLT_CVT(rec, 0x34) == D_800E1E10 && (f64)FLT_CVT(rec, 0x38) == D_800E1E10)) {
            guScale((u32 *)(obj + (s0 << 6) + 0x288), *(f32 *)(rec + 0x30), *(f32 *)(rec + 0x34), *(f32 *)(rec + 0x38));
            s6 = 1;
        }
        guTranslate((u32 *)(obj + (s0 << 6) + 0x8), *(f32 *)(rec + 0x18), *(f32 *)(rec + 0x1C), *(f32 *)(rec + 0x20));

        if (U16(rec, 2 + D_80126FF6 * 2) & 0x40) {
            func_800DF2AC(1, fs0, fs1, fs2, *(f32 *)(rec + 0x18), *(f32 *)(rec + 0x1C), *(f32 *)(rec + 0x20), (u32 *)(rec + 0x24), (u32 *)(rec + 0x28));
        } else if (U16(rec, 2 + D_80126FF6 * 2) & 0x80) {
            func_800DF2AC(0, fs0, fs1, fs2, *(f32 *)(rec + 0x18), *(f32 *)(rec + 0x1C), *(f32 *)(rec + 0x20), (u32 *)(rec + 0x24), (u32 *)(rec + 0x28));
        }

        g = *dl; *dl = g + 2;
        g[0] = 0x01020040;
        g[1] = (u32)(obj + (s0 << 6) + 0x8) - 0x80000000;

        s0 = (s0 << 8) + 0x88;
        s0 = (s32)(obj + s0);
        g = *dl; *dl = g + 2;
        g[0] = 0x01000040;
        g[1] = (u32)(s0 + (D_80126FF6 << 6)) - 0x80000000;

        if (s6 & 0xFF) {
            g = *dl; *dl = g + 2;
            g[0] = 0x01000040;
            g[1] = (u32)(obj + (s0 << 6) + 0x288) - 0x80000000;
        }
    }
}

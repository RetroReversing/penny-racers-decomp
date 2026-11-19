#define FLT(p,o) (*(f32 *)((u8 *)(p) + (o)))
#define U16(p,o) (*(u16 *)((u8 *)(p) + (o)))
#define U8(p,o)  (*(u8 *)((u8 *)(p) + (o)))
#define S32(p,o) (*(s32 *)((u8 *)(p) + (o)))

extern u8 D_8011F2F0[];
extern u8 D_801688C4[];
extern u8 D_8022A772[];
extern u8 D_8022AEE4[];
extern void func_80143250(s32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, s32 a6, s32 a7, s32 a8, s32 a9);
extern void func_801D7028(s32 a0, s32 a1);
extern s32 func_8013F1D4(s32 a0, u8 *a1);
extern f32 sqrtf(f32);

void func_80142C6C(u16 arg0)
{
    u8 *rec = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
    u8 *rec2 = D_801688C4 + (U16(rec, 0x40)) * 0x5C;
    u8 *s5 = *(u8 **)(rec + 0x60);
    s32 s4 = 0;
    s32 i;
    u16 t;
    f32 v;

    for (i = 0; i < 7; i++) {
        u16 key = *(u16 *)(D_8022A772 + i * 0x8F0);
        if (key != 0xFFFF) {
            u8 *other = D_8011F2F0 + key * 0x64;
            f32 dx = FLT(other, 0x18) - FLT(rec, 0x18);
            f32 dy = FLT(other, 0x1C) - FLT(rec, 0x1C);
            f32 dz = FLT(other, 0x20) - FLT(rec, 0x20);
            f32 d2 = dx * dx + dy * dy + dz * dz;
            f32 dist = sqrtf(d2);
            f32 thr = *(f32 *)(D_8022AEE4 + i * 0x8F0) * 80.0f * 0.1f + 160.0f;
            if (dist < thr) {
                s4 = 1;
            }
        }
    }

    switch (U16(rec, 0x3E)) {
    case 0:
        v = (1.0f - FLT(rec, 0x30)) * 0.01f + FLT(rec, 0x30);
        FLT(rec, 0x30) = v;
        FLT(rec, 0x38) = v;
        FLT(rec, 0x34) = v;
        if (FLT(rec, 0x30) > 0.99f && (s4 & 0xFF)) {
            S32(rec, 0x4C) = 0;
            S32(rec, 0x44) = 0;
            U16(rec2, 0x10) = 0x5F;
            U16(rec, 0x3E) = 1;
            func_80143250(arg0, 0.0f, 6.0f, 1.0f, 43.0f, 0.0f, 8, 1, 0xFF, 0);
            func_801D7028(arg0, 0x27);
        }
        break;
    case 1:
        FLT(rec, 0x4C) = FLT(rec, 0x4C) + 0.001f;
        FLT(rec, 0x44) = FLT(rec, 0x44) - FLT(rec, 0x4C);
        FLT(rec, 0x1C) = FLT(rec, 0x1C) + FLT(rec, 0x44);
        t = (u16)(U16(rec2, 0x10) - 1);
        U16(rec2, 0x10) = t;
        if (t == 0) {
            U16(rec2, 0x10) = 4;
            U16(rec, 0x3E) = 2;
            func_801D7028(arg0, 0x34);
        }
        t = U16(rec2, 0x10);
        if ((t & 3) == 0 && t < 25) {
            f32 f10 = (f32)(100 - t) * 0.5f;
            f32 f14 = (f32)(t * 3);
            func_80143250(arg0, (f32)((t & 7) << 1), 6.0f, 2.0f, f10, f14, 4, 1, 0xFF, 1);
        }
        if (func_8013F1D4(arg0 & 0xFFFF, s5) & 0xFF) {
            for (i = 0; i < 7; i++) {
                s5[0x67 + i] = 0;
            }
        }
        break;
    case 2:
        FLT(rec, 0x44) = FLT(rec, 0x44) * 0.7f;
        FLT(rec, 0x1C) = FLT(rec, 0x1C) + FLT(rec, 0x44);
        t = (u16)(U16(rec2, 0x10) - 1);
        U16(rec2, 0x10) = t;
        if (t == 0) {
            U16(rec2, 0x10) = 100;
            U16(rec, 0x3E) = 3;
        }
        if (func_8013F1D4(arg0 & 0xFFFF, s5) & 0xFF) {
            for (i = 0; i < 7; i++) {
                s5[0x67 + i] = 0;
            }
        }
        break;
    case 3:
        FLT(rec, 0x44) = FLT(rec, 0x44) * 0.95f;
        FLT(rec, 0x1C) = FLT(rec, 0x1C) + FLT(rec, 0x44);
        t = (u16)(U16(rec2, 0x10) - 1);
        U16(rec2, 0x10) = t;
        if (t == 0) {
            U16(rec, 0x3E) = 4;
        }
        break;
    case 4:
        S32(rec, 0x44) = 0;
        U8(rec, 0xC) = (u8)(U8(rec, 0xC) - 10);
        if (U8(rec, 0xC) < 11) {
            v = 0.01f;
            FLT(rec, 0x38) = v;
            FLT(rec, 0x34) = v;
            FLT(rec, 0x30) = v;
            U8(rec, 0xC) = 0xFF;
            FLT(rec, 0x1C) = FLT(rec2, 0xC);
            U16(rec2, 0x10) = 100;
            U16(rec, 0x3E) = 0;
        }
        break;
    }
}

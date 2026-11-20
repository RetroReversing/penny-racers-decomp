/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern char D_802D2C74[];

void func_80224334(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x894);
    if (temp_v1 != 0) {
        if (temp_v1 == 1) {
            M2C_FIELD(arg0, f32 *, 0x75C) = (f32) M2C_FIELD(*(s32 *)(D_802D2C74 + (M2C_FIELD(arg0, u16 *, 0x536) * 0xC)), f32 *, 4);
        } else {
            temp_fv0 = M2C_FIELD(arg0, f32 *, 0x75C) + M2C_FIELD(*(s32 *)(D_802D2C74 + (M2C_FIELD(arg0, u16 *, 0x536) * 0xC)), f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x75C) = temp_fv0;
            if (temp_fv0 < 0.0f) {
                M2C_FIELD(arg0, f32 *, 0x75C) = 0.0f;
            }
        }
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x758);
        if (temp_fv1 < *(s32 *)*(s32 *)(D_802D2C74 + (M2C_FIELD(arg0, u16 *, 0x536) * 0xC))) {
            M2C_FIELD(arg0, f32 *, 0x758) = (f32) (temp_fv1 + M2C_FIELD(arg0, f32 *, 0x75C));
        }
        M2C_FIELD(arg0, f32 *, 0x748) = (f32) M2C_FIELD(arg0, f32 *, 0x748);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x758) = 0.0f;
}

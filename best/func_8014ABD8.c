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

extern char D_8011F2F0[];
extern char D_8011F2F2[];
extern char D_8011F340[];

void func_8014ABD8(s32 arg0) {
    f32 temp_fv1;
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a1;

    temp_a1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = (arg0 & 0xFFFF) * 0x64;
        *(u16 *)(D_8011F2F2 + temp_v0) = *(u16 *)(D_8011F2F2 + temp_v0) | 0x8000;
        M2C_FIELD(temp_a1, u16 *, 0x3E) = 1U;
        return;
    case 1:
        if (*(s32 *)*(D_8011F340 + ((arg0 & 0xFFFF) * 0x64)) == 0) {
            temp_fv1 = M2C_FIELD(temp_a1, f32 *, 0x28) - 1.0f;
            M2C_FIELD(temp_a1, f32 *, 0x28) = temp_fv1;
            if (temp_fv1 < 0.0f) {
                M2C_FIELD(temp_a1, f32 *, 0x28) = (f32) (temp_fv1 + 360.0f);
            }
        }
        return;
    }
}

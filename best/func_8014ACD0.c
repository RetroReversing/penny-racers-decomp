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

extern M2C_UNK D_8011F2F0;
extern f64 D_80183738;

void func_8014ACD0(s32 arg0) {
    u16 temp_a0;
    void *temp_v1;

    temp_v1 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_a0 = M2C_FIELD(temp_v1, u16 *, 0x3E);
    switch (temp_a0) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_v1, f32 *, 0x24) = 142.0f;
        M2C_FIELD(temp_v1, f32 *, 0x18) = 142.0f;
        M2C_FIELD(temp_v1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x24);
        M2C_FIELD(temp_v1, f32 *, 0x30) = -2.0f;
        M2C_FIELD(temp_v1, u16 *, 0x3E) = 1U;
        /* fallthrough */
    case 1:
        M2C_FIELD(temp_v1, f32 *, 0x18) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x18) + M2C_FIELD(temp_v1, f32 *, 0x30));
        M2C_FIELD(temp_v1, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x1C) - M2C_FIELD(temp_v1, f32 *, 0x30));
        M2C_FIELD(temp_v1, f32 *, 0x30) = (f32) ((f64) M2C_FIELD(temp_v1, f32 *, 0x30) + D_80183738);
        if (M2C_FIELD(temp_v1, f32 *, 0x24) < M2C_FIELD(temp_v1, f32 *, 0x18)) {
            M2C_FIELD(temp_v1, u16 *, 0x3E) = 0U;
        }
        return;
    }
}

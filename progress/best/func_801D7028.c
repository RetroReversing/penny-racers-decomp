/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (((struct { __typeof__(*(type_ptr)0) v; } *)((s8 *)(expr) + (offset)))->v)
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern char D_8011F2F0[];
extern char D_801D7D60[];
extern s16 D_801D7DE8;

void func_801D7028(s32 arg0, s16 arg1) {
    u8 __repair_frame[8];
    void *temp_a0;
    void *temp_v0;

    if (D_801D7DE8 < 8) {
        temp_v0 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
        temp_a0 = (D_801D7DE8 * 0x10) + D_801D7D60;
        { void *__fence_temp_a0; do { __fence_temp_a0 = temp_a0; } while (0); M2C_FIELD(__fence_temp_a0, f32 *, 0) = (f32) M2C_FIELD(temp_v0, f32 *, 0x18); }
        { void *__fence_temp_a0; do { __fence_temp_a0 = temp_a0; } while (0); M2C_FIELD(__fence_temp_a0, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 0x1C); }
        { void *__fence_temp_a0; do { __fence_temp_a0 = temp_a0; } while (0); M2C_FIELD(__fence_temp_a0, f32 *, 8) = (f32) M2C_FIELD(temp_v0, f32 *, 0x20); }
        { void *__fence_temp_a0; do { __fence_temp_a0 = temp_a0; } while (0); M2C_FIELD(__fence_temp_a0, s16 *, 0xC) = arg1; }
        D_801D7DE8 += 1;
    }
}

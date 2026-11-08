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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_8011F350;
extern M2C_UNK func_80163A38;

void func_80163960(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    u16 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x898);
    if (temp_a0 == 1) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x560);
        if (!(temp_v1 & 8) && ((temp_v1 & 7) < 5)) {
            temp_v0 = func_800DE41C(0, 0, 3, 0, 0x20, temp_a0, 0, &func_80163A38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if ((u32) ((temp_v0 + 2) & 0xFFFF) >= 2U) {
                *(&D_8011F350 + ((temp_v0 & 0xFFFF) * 0x64)) = arg0;
            }
        }
    }
}

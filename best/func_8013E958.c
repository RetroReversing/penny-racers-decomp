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

s16 func_8012913C(u16, s32, s32, s32);              /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_8018D6C0;
extern u16 D_80233EC0;

void func_8013E958(s32 arg0, s32 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    s32 temp_v0;
    void *temp_s0;
    void *temp_t0;

    temp_v0 = (arg1 & 0xFFFF) * 0x64;
    temp_t0 = temp_v0 + &D_8011F2F0;
    temp_s0 = ((arg0 & 0xFFFF) * 0x7C) + &D_8018D6C0;
    *(&D_8011F350 + temp_v0) = temp_s0;
    M2C_FIELD(temp_t0, s16 *, 8) = arg2;
    M2C_FIELD(temp_t0, s16 *, 6) = arg2;
    M2C_FIELD(temp_t0, s16 *, 4) = arg2;
    M2C_FIELD(temp_t0, s16 *, 2) = arg2;
    M2C_FIELD(temp_s0, s32 *, 8) = arg3;
    M2C_FIELD(temp_s0, f32 *, 0xC) = arg4;
    M2C_FIELD(temp_s0, f32 *, 0x10) = arg5;
    M2C_FIELD(temp_s0, u16 *, 0x14) = arg6;
    M2C_FIELD(temp_s0, s8 *, 0x16) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x20) = func_8012913C(D_80233EC0, M2C_FIELD(temp_t0, s32 *, 0x18), M2C_FIELD(temp_t0, s32 *, 0x1C), M2C_FIELD(temp_t0, s32 *, 0x20));
    M2C_FIELD(temp_s0, s16 *, 0x22) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x1D) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x1E) = 0;
}

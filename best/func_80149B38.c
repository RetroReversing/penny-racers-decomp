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

s32 func_800DE41C(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, void *, s32, M2C_UNK *, s32, s32, s32, s32, f32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8012AD20(u16, void *, u8, u8);         /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_800DA26A;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F340;
extern M2C_UNK D_8018F5D0;
extern M2C_UNK D_8021F0A0;
extern M2C_UNK D_80237DC0;
extern M2C_UNK func_8020FED8;

s32 func_80149B38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    u8 temp_s3;

    temp_s0 = arg1 * 0x178;
    temp_s3 = *(&D_800DA260 + 1 + temp_s0);
    temp_s1 = func_800DE41C(0, temp_s3, 1, 0, 0x5C, 0xFF, (arg0 * 0x1A0) + &D_8018F5D0, 0, &func_8020FED8, arg2, arg3, 0, 0, -10.0f, 0, 0.02f, 0.02f, 0.02f) & 0xFFFF;
    temp_a0 = temp_s1 * 0x64;
    M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + temp_a0) * 0x64)), void **, 4) = (void *) ((temp_s3 * 0xC) + &D_80237DC0);
    func_8012AD20(*(&D_8011F304 + temp_a0), (arg0 << 5) + &D_8021F0A0, temp_s3, *(temp_s0 + (&D_800DA26A + 0x160) + temp_s3));
    return temp_s1;
}

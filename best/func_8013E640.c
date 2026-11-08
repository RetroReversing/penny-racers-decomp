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

s16 func_8012913C(f32, u16, f32, f32, f32);         /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8018D6C0;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8022AD5C;
extern u16 D_80233EC0;

void func_8013E640(s32 arg0, s32 arg1, void *arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u16 arg10) {
    s32 temp_a0;
    s8 var_v1;
    void *temp_s0;
    void *temp_t0;
    void *var_a1;

    temp_t0 = ((arg1 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_s0 = ((arg0 & 0xFFFF) * 0x7C) + &D_8018D6C0;
    M2C_FIELD(temp_t0, void **, 0x60) = temp_s0;
    M2C_FIELD(temp_t0, s16 *, 8) = arg3;
    M2C_FIELD(temp_t0, s16 *, 6) = arg3;
    M2C_FIELD(temp_t0, s16 *, 4) = arg3;
    M2C_FIELD(temp_t0, s16 *, 2) = arg3;
    M2C_FIELD(temp_t0, f32 *, 0x18) = (f32) (arg4 + *(&D_8011F308 + (M2C_FIELD(arg2, u16 *, 2) * 0x64)));
    M2C_FIELD(temp_t0, f32 *, 0x1C) = (f32) (arg5 + *(&D_8011F30C + (M2C_FIELD(arg2, u16 *, 2) * 0x64)));
    M2C_FIELD(temp_t0, f32 *, 0x20) = (f32) (arg6 + *(&D_8011F310 + (M2C_FIELD(arg2, u16 *, 2) * 0x64)));
    M2C_FIELD(temp_s0, f32 *, 8) = arg7;
    M2C_FIELD(temp_s0, f32 *, 0xC) = arg8;
    M2C_FIELD(temp_s0, f32 *, 0x10) = arg9;
    M2C_FIELD(temp_s0, u16 *, 0x14) = arg10;
    M2C_FIELD(temp_s0, s8 *, 0x16) = 0;
    M2C_FIELD(temp_s0, u16 *, 0x74) = (u16) M2C_FIELD(arg2, u16 *, 0x8E4);
    M2C_FIELD(temp_s0, void **, 4) = arg2;
    M2C_FIELD(temp_s0, s16 *, 0x20) = func_8012913C(arg9, D_80233EC0, M2C_FIELD(temp_t0, f32 *, 0x18), M2C_FIELD(temp_t0, f32 *, 0x1C), M2C_FIELD(temp_t0, f32 *, 0x20));
    M2C_FIELD(temp_s0, s16 *, 0x22) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x1D) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x1E) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x70) = 0;
    var_v1 = 0;
    var_a1 = temp_s0;
    __repair_rows: {
        M2C_FIELD(var_a1, s8 *, 0x67) = 0;
        temp_a0 = var_v1 * 0x8F0;
        if ((*(&D_8022A772 + temp_a0) != 0xFFFF) && (*(&D_8022AD5C + temp_a0) > 0.0f)) {
            M2C_FIELD(var_a1, s8 *, 0x60) = var_v1;
        } else {
            M2C_FIELD((temp_s0 + var_v1), s8 *, 0x60) = -1;
        }
        var_v1 += 1;
        var_a1 = temp_s0 + var_v1;
    }
if (var_v1 < 7) goto __repair_rows;
}

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

extern void *D_80046DF4;
extern char D_801D75E6[];
extern s32 func_8021AF20;

s32 func_8002C508(void *arg0, s32 arg1) {
    s16 temp_v0;
    s16 var_a3;
    s32 temp_a2;
    s32 var_v0;
    void *temp_a1;
    void *temp_t0;

    temp_t0 = M2C_FIELD(D_80046DF4, void **, 0xC);
    var_a3 = 0;
    if (M2C_FIELD(temp_t0, s32 *, 0x44) > 0) {
        var_v0 = 0 << 0x10;
loop_2:
        temp_a2 = var_v0 >> 0x10;
        temp_a1 = (temp_a2 * 0x30) + M2C_FIELD(temp_t0, s32 *, 0x40);
        temp_v0 = var_a3 + 1;
        if (M2C_FIELD(temp_a1, void **, 0x1C) == NULL) {
            M2C_FIELD(temp_a1, void **, 0x1C) = arg0;
            M2C_FIELD(temp_a1, s16 *, 0x20) = 5;
            M2C_FIELD(temp_a1, s32 *, 0x28) = 0;
            M2C_FIELD(temp_a1, f32 *, 0x24) = 0.5f;
            M2C_FIELD(temp_a1, s8 *, 0x2E) = 0x40;
            M2C_FIELD(temp_a1, s8 *, 0x2F) = 0;
            M2C_FIELD(temp_a1, s16 *, 0x2C) = (s16) (((s32) ((f32) *(D_801D75E6 + (arg1 * 0xC)) * (f32) M2C_FIELD(&func_8021AF20, u8 *, 0x4109) * 0.047619f) * M2C_FIELD(arg0, u8 *, 0xD)) / 127);
            return temp_a2;
        }
        var_a3 = temp_v0;
        var_v0 = var_a3 << 0x10;
        if (temp_v0 >= M2C_FIELD(temp_t0, s32 *, 0x44)) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return -1;
}

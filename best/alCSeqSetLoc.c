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

void alCSeqSetLoc(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 var_t0;
    void *temp_a0;
    void *temp_v1;
    void *var_a2;
    void *var_a3;

    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    var_t0 = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    var_a3 = arg1;
    var_a2 = arg0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 8);
    __repair_rows: {
        M2C_FIELD(var_a2, s32 *, 0x18) = (s32) M2C_FIELD(var_a3, s32 *, 0xC);
        temp_a0 = arg1 + var_t0;
        M2C_FIELD(var_a2, s32 *, 0x58) = (s32) M2C_FIELD(var_a3, s32 *, 0x4C);
        temp_v1 = arg0 + var_t0;
        M2C_FIELD(temp_v1, u8 *, 0x98) = (u8) M2C_FIELD(temp_a0, u8 *, 0x8C);
        M2C_FIELD(temp_v1, u8 *, 0xA8) = (u8) M2C_FIELD(temp_a0, u8 *, 0x9C);
        temp_v0 = M2C_FIELD(var_a3, s32 *, 0xAC);
        var_t0 += 1;
        var_a3 += 4;
        M2C_FIELD(var_a2, s32 *, 0xB8) = temp_v0;
        var_a2 += 4;
    }
if (var_t0 < 0x10) goto __repair_rows;
}

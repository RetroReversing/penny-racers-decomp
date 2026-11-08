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

void alSeqFileNew(void *arg0, s32 arg1) {
    s32 var_a2;
    void *var_v1;

    var_a2 = 0;
    if (M2C_FIELD(arg0, s16 *, 2) > 0) {
        var_v1 = arg0;
        __repair_rows: {
            M2C_FIELD(var_v1, s32 *, 4) = (s32) (M2C_FIELD(var_v1, s32 *, 4) + arg1);
            var_a2 += 1;
            var_v1 += 8;
        }
if (var_a2 < M2C_FIELD(arg0, s16 *, 2)) goto __repair_rows;
    }
}

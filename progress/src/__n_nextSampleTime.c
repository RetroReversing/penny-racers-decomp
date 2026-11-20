static __inline__ int __repair_inline(s32 a, s32 b) { return a > b; }
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

s32 __n_nextSampleTime(void **arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;

    *arg0 = NULL;
    temp_a1 = M2C_FIELD(D_80046DF4, void **, 0xC);
    var_a2 = 0x7FFFFFFF;
    if (temp_a1 != NULL) {
        temp_v1 = M2C_FIELD(temp_a1, s32 *, 0x10) - M2C_FIELD(D_80046DF4, s32 *, 0x2C);
        if (__repair_inline(0x7FFFFFFF, temp_v1)) {
            *arg0 = temp_a1;
            var_a2 = temp_v1;
        }
    }
    temp_a1_2 = M2C_FIELD(D_80046DF4, void **, 4);
    if (temp_a1_2 != NULL) {
        temp_v1_2 = M2C_FIELD(temp_a1_2, s32 *, 0x10) - M2C_FIELD(D_80046DF4, s32 *, 0x2C);
        if (temp_v1_2 < var_a2) {
            *arg0 = temp_a1_2;
            var_a2 = temp_v1_2;
        }
    }
    temp_a1_3 = M2C_FIELD(D_80046DF4, void **, 8);
    if ((temp_a1_3 != NULL) && ((M2C_FIELD(temp_a1_3, s32 *, 0x10) - M2C_FIELD(D_80046DF4, s32 *, 0x2C)) < var_a2)) {
        *arg0 = temp_a1_3;
    }
    return M2C_FIELD(*arg0, s32 *, 0x10);
}

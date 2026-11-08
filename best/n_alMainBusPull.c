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

s32 n_alMainBusPull(s32 arg0, void *arg1) {
void *__repair_cached_pointer = D_80046DF4;

    void *temp_v0;
    void *temp_v1;

    M2C_FIELD(arg1, s32 *, 0) = 0x020004E0;
    M2C_FIELD(arg1, s32 *, 4) = 0x2E0;
    temp_v0 = M2C_FIELD(M2C_FIELD(__repair_cached_pointer, void **, 0x3C), void *(**)(void *), 4)(arg1 + 8);
    temp_v1 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 0) = 0x0C007FFF;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x07C004E0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0x0C007FFF;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x09300650;
    return temp_v1 + 8;
}

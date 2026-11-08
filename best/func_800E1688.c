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

extern M2C_UNK func_801153C8;

void func_800E1688(u16 arg0) {
    s32 temp_a0;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s1;

    temp_a0 = arg0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x64) + (&func_801153C8 + 0x9F28);
    temp_s1 = M2C_FIELD(temp_s0, void **, 0x50);
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 2);
    if (!(temp_v1 & 0x10)) {
        if (!(temp_v1 & 2)) {
            M2C_FIELD(temp_s0, M2C_UNK (**)(s32), 0x54)(temp_a0);
        }
        if (M2C_FIELD(temp_s1, u16 *, 0xC) != 0xFFFF) {
            func_800E1688(M2C_FIELD(temp_s0, u16 *, 0x14));
        }
        if (M2C_FIELD(temp_s1, u16 *, 0xA) != 0xFFFF) {
            func_800E1688(M2C_FIELD(temp_s0, u16 *, 0x14));
        }
    }
}

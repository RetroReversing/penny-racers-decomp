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

extern M2C_UNK D_800DB1B8;

void func_801AEEE8(void) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = &D_800DB1B8 + 0x2108;
    M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) = 1;
    M2C_FIELD(temp_v0, s16 *, 2) = 0;
    M2C_FIELD(temp_v0, s16 *, 4) = 1;
    M2C_FIELD(temp_v0, s16 *, 6) = 2;
    M2C_FIELD(temp_v0, s16 *, 0xC) = 0xF0;
    M2C_FIELD(temp_v0, s16 *, 0xE) = 0xF0;
    M2C_FIELD(temp_v0, s16 *, 8) = 0;
    M2C_FIELD(temp_v0, s16 *, 0xA) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x20) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x22) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x24) = 0xF0;
    M2C_FIELD(temp_v0, s16 *, 0x26) = 0xF0;
    M2C_FIELD(temp_v0, s16 *, 0x28) = 1;
    M2C_FIELD(temp_v0, s16 *, 0x2A) = 3;
    M2C_FIELD(temp_v0, s16 *, 0x2C) = 4;
    M2C_FIELD(temp_v0, s16 *, 0x2E) = 5;
    M2C_FIELD(temp_v0, s16 *, 0x34) = 0x78;
    M2C_FIELD(temp_v0, s16 *, 0x36) = 0x5A;
    M2C_FIELD(temp_v0, s16 *, 0x30) = 0x3C;
    M2C_FIELD(temp_v0, s16 *, 0x32) = 0x4B;
    M2C_FIELD(temp_v0, s16 *, 0x48) = 0x3C;
    M2C_FIELD(temp_v0, s16 *, 0x4A) = 0x4B;
    M2C_FIELD(temp_v0, s16 *, 0x4C) = 0xB4;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 0xA5;
    var_a0 = 2;
    __repair_rows: {
        *(&D_800DB1B8 + 0x2108 + ((var_a0 & 0xFF) * 0x28)) = 0;
        var_a0 += 1;
    }
if ((u32) (var_a0 & 0xFF) < 4U) goto __repair_rows;
}

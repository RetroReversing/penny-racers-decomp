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

M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F32E;

void func_801FD23C(s32 arg0) {
    s16 var_v0;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_v0;

    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8021F6A0(1);
        M2C_FIELD(&D_800DB1B8, s16 *, 0x2114) = 0xA0;
        M2C_FIELD((&D_800DB1B8 + 0x2114), s16 *, 2) = 0x78;
        *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2110) < 0xA0) {
            M2C_FIELD(&D_800DB1B8, s16 *, 0x2110) = (s16) (M2C_FIELD(&D_800DB1B8, s16 *, 0x2110) + 1);
        } else {
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0 = 2;
block_15:
            *(&D_8011F32E + var_v1) = var_v0;
        }
block_16:
        temp_v0 = &D_800DB1B8 + 0x2128;
        temp_v1_2 = M2C_FIELD(temp_v0, u16 *, -0x18);
        M2C_FIELD(&D_800DB1B8, u16 *, 0x2128) = temp_v1_2;
        temp_a0 = M2C_FIELD(temp_v0, u16 *, -0x16);
        M2C_FIELD(temp_v0, u16 *, 2) = temp_a0;
        M2C_FIELD(temp_v0, s16 *, 4) = (s16) (temp_v1_2 + 0xA0);
        M2C_FIELD(temp_v0, s16 *, 6) = (s16) (temp_a0 + 0x78);
        return;
    case 2:
        if (M2C_FIELD(&D_800DB1B8, s16 *, 0x2110) > 0) {
            M2C_FIELD(&D_800DB1B8, s16 *, 0x2110) = (s16) (M2C_FIELD(&D_800DB1B8, s16 *, 0x2110) - 1);
        } else {
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0 = 1;
            goto block_15;
        }
        goto block_16;
    }
}

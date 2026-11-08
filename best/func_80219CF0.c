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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_801FA30C(void *);                          /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8021CA3C;
extern u8 D_8021E19E;
extern M2C_UNK D_80239984;
extern M2C_UNK func_80219E28;
extern M2C_UNK func_8021A050;

void func_80219CF0(s32 arg0) {
    f32 temp_fv1;
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_8021E19E = 0;
        M2C_FIELD(temp_a0, u16 *, 0x3E) = 1U;
        return;
    case 1:
        D_8021E19E += 1;
        if ((u8) D_8021E19E >= 6U) {
            temp_fv1 = *(&D_8021CA3C + ((func_801FA30C(temp_a0) & 1) * 4));
            func_800DE41C(0, 0, 1, 0, 0x82, 0xFF, &D_80239984, &func_80219E28, &func_8021A050, 0, 7.0f, 2.0f, 0, 0, 0, temp_fv1, temp_fv1, temp_fv1);
            D_8021E19E = 0;
        }
        return;
    }
}

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

s32 func_8014A870(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_801D651C(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_80190CA0;
extern s8 D_80190CA6;
extern M2C_UNK D_80190CB0;
extern M2C_UNK D_801C5E9C;
extern s8 D_801C5E9D;
extern s8 D_801C5EA2;

void func_802163B0(s32 arg0) {
    s32 var_s0;
    u16 temp_v0;
    u16 temp_v1;
    void *temp_s4;

    temp_s4 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    var_s0 = func_8014A870(0x1E, 7, 0);
    temp_v1 = M2C_FIELD(temp_s4, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(&D_80190CA0, u16 *, 0) = 0xFFU;
        D_80190CA6 = 0;
        M2C_FIELD(&D_80190CA0, u8 *, 2) = (u8) (M2C_FIELD(&D_801C5E9C, u8 *, 0) - 3);
        M2C_FIELD(&D_80190CA0, u8 *, 4) = (u8) (M2C_FIELD(&D_801C5E9C, u8 *, 1) - 5);
        M2C_FIELD(temp_s4, u16 *, 0x3E) = 0x10U;
        /* fallthrough */
    case 16:
        if ((var_s0 & 8) && (M2C_FIELD(&D_80190CA0, u8 *, 2) != 1)) {
            func_801D651C(7, 0x3B);
            M2C_FIELD(&D_80190CA0, u8 *, 2) = 1U;
        }
        if ((var_s0 & 4) && (M2C_FIELD(&D_80190CA0, u8 *, 2) != 0)) {
            func_801D651C(7, 0x3B);
            M2C_FIELD(&D_80190CA0, u8 *, 2) = 0U;
        }
        M2C_FIELD(&D_801C5E9C, u8 *, 0) = (u8) (M2C_FIELD(&D_80190CA0, u8 *, 2) + 3);
        if (var_s0 & 0x10) {
            var_s0 = 0;
            func_801D651C(7, 0x3D);
            D_80190CA6 = 1;
            M2C_FIELD(temp_s4, u16 *, 0x3E) = 0x20U;
        }
        if (var_s0 & 0x20) {
            func_801D651C(7, 0x3A);
            M2C_FIELD(&D_80190CB0, s8 *, 0) = 0;
            M2C_FIELD(&D_80190CB0, s16 *, -0x16) = 0x10;
            D_801C5EA2 = 5;
            return;
        }
        return;
    case 32:
        if ((var_s0 & 8) && (M2C_FIELD(&D_80190CA0, u8 *, 4) != 1)) {
            func_801D651C(7, 0x3B);
            M2C_FIELD(&D_80190CA0, u8 *, 4) = 1U;
        }
        if ((var_s0 & 4) && (M2C_FIELD(&D_80190CA0, u8 *, 4) != 0)) {
            func_801D651C(7, 0x3B);
            M2C_FIELD(&D_80190CA0, u8 *, 4) = 0U;
        }
        D_801C5E9D = M2C_FIELD(&D_80190CA0, u8 *, 4) + 5;
        if (var_s0 & 0x10) {
            var_s0 = 0;
            func_801D651C(7, 0x3D);
            M2C_FIELD(temp_s4, u16 *, 0x3E) = 0x30U;
        }
        if (var_s0 & 0x20) {
            func_801D651C(7, 0x3A);
            M2C_FIELD(temp_s4, u16 *, 0x3E) = 0U;
            return;
        }
        break;
    case 48:
        temp_v0 = M2C_FIELD(&D_80190CA0, u16 *, 0) - 8;
        M2C_FIELD(&D_80190CA0, u16 *, 0) = temp_v0;
        if (temp_v0 & 0x8000) {
            M2C_FIELD(&D_80190CA0, u16 *, 0) = 0U;
            M2C_FIELD(&D_80190CB0, s8 *, 0) = 0;
            M2C_FIELD(&D_80190CB0, s16 *, -0x16) = 0xF0;
        }
        break;
    }
}

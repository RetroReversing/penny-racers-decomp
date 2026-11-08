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

extern M2C_UNK D_801C5E9C;
extern M2C_UNK D_801C7080;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7082;
extern M2C_UNK D_801C7083;
extern M2C_UNK D_801C7084;
extern M2C_UNK D_801F18E4;
extern M2C_UNK D_801F18F8;
extern M2C_UNK D_801F18FC;

void func_8018CE38(void) {
    s32 temp_v1;
    u32 var_a0;

    M2C_FIELD(&D_801C5E9C, u8 *, 0) = (u8) M2C_FIELD(&D_801F18E4, u8 *, 0);
    M2C_FIELD(&D_801C5E9C, u8 *, 1) = (u8) M2C_FIELD(&D_801F18E4, u8 *, 1);
    M2C_FIELD(&D_801C5E9C, u8 *, 2) = (u8) M2C_FIELD(&D_801F18E4, u8 *, 2);
    M2C_FIELD(&D_801C5E9C, u8 *, 3) = (u8) M2C_FIELD(&D_801F18E4, u8 *, 3);
    var_a0 = 0;
    __repair_rows: {
        temp_v1 = var_a0 * 5;
        *(&D_801C7080 + temp_v1) = *(temp_v1 + &D_801F18F8);
        *(&D_801C7081 + temp_v1) = *(temp_v1 + (&D_801F18F8 + 1));
        *(&D_801C7082 + temp_v1) = *(temp_v1 + (&D_801F18F8 + 2));
        *(&D_801C7083 + temp_v1) = *(temp_v1 + (&D_801F18F8 + 3));
        *(&D_801C7084 + temp_v1) = *(temp_v1 + &D_801F18FC);
        var_a0 += 1;
    }
if (var_a0 < 0xC8U) goto __repair_rows;
}

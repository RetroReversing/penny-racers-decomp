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

s32 func_801E2BA4(u8 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_801C5E9C;
extern M2C_UNK D_801C7080;
extern M2C_UNK D_801C7081;
extern M2C_UNK D_801C7082;
extern M2C_UNK D_801C7083;
extern M2C_UNK D_801C7084;
extern s32 D_801F18E0;
extern M2C_UNK D_801F18E4;
extern M2C_UNK D_801F18F8;
extern M2C_UNK D_801F18F9;
extern M2C_UNK D_801F18FA;
extern M2C_UNK D_801F18FB;
extern M2C_UNK D_801F18FC;

void func_801E2BFC(void) {
int __repair_literal;

    s32 temp_v1;
    s32 var_v1;
    u32 var_a1;
    u32 var_a1_2;
    u8 *temp_a0;

    M2C_FIELD(&D_801F18E4, u8 *, 0) = (u8) M2C_FIELD(&D_801C5E9C, u8 *, 0);
    M2C_FIELD(&D_801F18E4, u8 *, 1) = (u8) M2C_FIELD(&D_801C5E9C, u8 *, 1);
    M2C_FIELD(&D_801F18E4, u8 *, 2) = (u8) M2C_FIELD(&D_801C5E9C, u8 *, 2);
    M2C_FIELD(&D_801F18E4, u8 *, 3) = (u8) M2C_FIELD(&D_801C5E9C, u8 *, 3);
    var_a1 = 8;
    __repair_rows: {
        *(&D_801F18E0 + var_a1) = 0;
        var_a1 += 1;
    }
if (var_a1 < 0x18U) goto __repair_rows;
    var_a1_2 = 0;
    var_v1 = 0 * 4;
    do {
        temp_v1 = var_v1 + var_a1_2;
        *(temp_v1 + &D_801F18F8) = *(&D_801C7080 + temp_v1);
        *(temp_v1 + &D_801F18F9) = *(&D_801C7081 + temp_v1);
        *(temp_v1 + &D_801F18FA) = *(&D_801C7082 + temp_v1);
        *(temp_v1 + &D_801F18FB) = *(&D_801C7083 + temp_v1);
        temp_a0 = temp_v1 + &D_801F18FC;
        *temp_a0 = *(&D_801C7084 + temp_v1);/*__repair_loop_weight*/do {
        var_a1_2 += 1;} while (0);
__repair_literal = 4;

        var_v1 = var_a1_2 * __repair_literal;
    } while (var_a1_2 < 0xC8U);
    D_801F18E0 = func_801E2BA4(temp_a0, var_a1_2, &D_801F18FC, &D_801F18FB);
}

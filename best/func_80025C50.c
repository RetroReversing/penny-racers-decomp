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

M2C_UNK func_80025DAC();                            /* extern */
M2C_UNK func_80025DBC(void *);                      /* extern */
M2C_UNK func_800DE2E0();                            /* extern */
M2C_UNK func_800DE38C();                            /* extern */
M2C_UNK func_801D87FC();                            /* extern */
M2C_UNK func_8021F5F0();                            /* extern */
M2C_UNK func_8022132C(void *);                      /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_800DA262;
extern M2C_UNK D_800DA264;
extern M2C_UNK D_800DA266;
extern M2C_UNK D_800DA268;
extern M2C_UNK D_800DA26A;
extern s16 D_80189C94;
extern s8 D_8018A43C;
extern M2C_UNK D_8018A44A;
extern M2C_UNK D_8022A770;
extern M2C_UNK func_8018B030;
extern M2C_UNK func_8021AF20;

void func_80025C50(void) {
    s16 var_s1_2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_3;
    void *temp_v0;

    func_801D87FC();
    var_s1 = 0;
    func_80025DAC();
    func_8021F5F0();
    func_800DE38C();
    func_800DE2E0();
    var_a0 = 0 * 8;
    do {
        func_8022132C(((((var_a0 + var_s1) * 0x10) - var_s1) * 0x10) + &D_8022A770);
        var_s1 += 1;
        var_a0 = var_s1 * 8;
    } while (var_s1 < 7);
    var_s1_2 = 0;
    var_s0 = 0 * 2;
    __repair_rows: {
        temp_s0 = (((var_s0 + var_s1_2) * 0x10) - var_s1_2) * 8;
        func_80025DBC(temp_s0 + &D_800DA260);
        *(&D_800DA260 + temp_s0) = var_s1_2;
        *(&D_800DA262 + temp_s0) = var_s1_2;
        *(&D_800DA264 + temp_s0) = var_s1_2;
        *(&D_800DA266 + temp_s0) = var_s1_2;
        *(&D_800DA268 + temp_s0) = var_s1_2;
        *(&D_800DA26A + temp_s0) = var_s1_2;
        var_s1_2 += 1;
        var_s0 = var_s1_2 * 2;
    }
if (var_s1_2 < 8) goto __repair_rows;
    temp_v0 = &func_8021AF20 + 0x4108;
    M2C_FIELD(&func_8021AF20, s8 *, 0x4108) = 0x15;
    M2C_FIELD(temp_v0, s8 *, 1) = 0x15;
    M2C_FIELD(temp_v0, s8 *, 2) = 0;
    var_s1_3 = 0;
    do {
        *((var_s1_3 * 2) + &D_8018A44A) = 0;
        var_s1_3 += 1;
    } while (var_s1_3 < 4);
    M2C_FIELD(&func_8018B030, s8 *, 0x2648) = 0;
    D_8018A43C = 0;
    D_80189C94 = 0;
}

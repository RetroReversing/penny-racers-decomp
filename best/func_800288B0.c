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

s32 func_800339C0(s32);                             /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_80039AD0();                                /* extern */
s32 func_80039B10();                                /* extern */
extern M2C_UNK D_800DD93C;
extern M2C_UNK *D_800DDE88;

void func_800288B0(void *arg0) {
    M2C_UNK *sp10;
    M2C_UNK *sp14;
    s16 sp18;
    M2C_UNK *temp_v1;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_v1 = D_800DDE88;
    temp_a0 = func_800339C0(1);
    sp14 = &D_800DD93C;
    sp18 = 1;
    D_800DDE88 = &sp10;
    sp10 = temp_v1;
    func_800339C0(temp_a0);
loop_1:
    if (func_80039AD0() == temp_s0) {
block_3:
        osRecvMesg(&D_800DD93C, 0, 1);
        goto loop_1;
    }
    var_s1 = NULL;
    if (func_80039B10() == temp_s0) {
        goto block_3;
    }
    var_s0 = D_800DDE88;
    temp_a0_2 = func_800339C0(1);
    if (var_s0 != NULL) {
loop_5:
        if (var_s0 != &sp10) {
            var_s1 = var_s0;
            var_s0 = *var_s0;
            if (var_s0 != NULL) {
                goto loop_5;
            }
        } else if (var_s1 != NULL) {
            *var_s1 = *var_s0;
        } else {
            D_800DDE88 = *var_s0;
        }
    }
    func_800339C0(temp_a0_2);
}

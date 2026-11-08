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

s32 func_80034640(s32);                             /* extern */
M2C_UNK func_800382AC(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_800382CC(M2C_UNK *);                   /* extern */
M2C_UNK osEPiStartDma(s32, void *, M2C_UNK);        /* extern */
s32 osCartRomInit();                                /* extern */
extern s32 D_80046C30;
extern M2C_UNK D_8005D088;
extern M2C_UNK D_8005D1A0;
extern M2C_UNK *D_8005D7A4;
extern M2C_UNK *D_8005D7A8;
extern s32 D_8005DCB0;

s32 func_80026F60(s32 arg0, s32 arg1) {
    M2C_UNK *temp_a0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s1;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    void *temp_a1;

    var_s1 = D_8005D7A4;
    var_s0 = NULL;
    if (var_s1 != NULL) {
loop_1:
        temp_v0 = M2C_FIELD(var_s1, s32 *, 8);
        if (arg0 >= temp_v0) {
            var_s0 = var_s1;
            if ((temp_v0 + 0x400) < (arg0 + arg1)) {
                var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
                if (var_s1 == NULL) {
                    goto block_4;
                }
                goto loop_1;
            }
            M2C_FIELD(var_s1, s32 *, 0xC) = (s32) D_80046C30;
            return func_80034640((M2C_FIELD(var_s1, s32 *, 0x10) + arg0) - M2C_FIELD(var_s1, s32 *, 8));
        }
        goto block_4;
    }
block_4:
    temp_s1 = D_8005D7A8;
    temp_a0 = temp_s1;
    if (temp_s1 == NULL) {
        return M2C_FIELD(D_8005D7A4, s32 *, 0x10) - 0x80000000;
    }
    D_8005D7A8 = M2C_FIELD(temp_s1, M2C_UNK **, 0);
    func_800382CC(temp_a0);
    if (var_s0 != NULL) {
        func_800382AC(temp_s1, var_s0);
    } else {
        temp_s0_2 = D_8005D7A4;
        if (D_8005D7A4 != NULL) {
            D_8005D7A4 = temp_s1;
            M2C_FIELD(temp_s1, M2C_UNK **, 0) = temp_s0_2;
            M2C_FIELD(temp_s1, s32 *, 4) = 0;
            M2C_FIELD(temp_s0_2, M2C_UNK **, 4) = temp_s1;
        } else {
            D_8005D7A4 = temp_s1;
            M2C_FIELD(temp_s1, M2C_UNK **, 0) = NULL;
            M2C_FIELD(temp_s1, s32 *, 4) = 0;
        }
    }
    temp_s0 = arg0 & 1;
    temp_a0_2 = osCartRomInit();
    temp_s2 = M2C_FIELD(temp_s1, s32 *, 0x10);
    temp_a1 = (D_8005DCB0 * 0x18) + &D_8005D1A0;
    temp_s3 = arg0 - temp_s0;
    M2C_FIELD(temp_s1, s32 *, 8) = temp_s3;
    D_8005DCB0 += 1;
    M2C_FIELD(temp_s1, s32 *, 0xC) = (s32) D_80046C30;
    M2C_FIELD(temp_a1, M2C_UNK **, 4) = &D_8005D088;
    M2C_FIELD(temp_a1, s8 *, 2) = 0;
    M2C_FIELD(temp_a1, s32 *, 8) = temp_s2;
    M2C_FIELD(temp_a1, s32 *, 0xC) = temp_s3;
    M2C_FIELD(temp_a1, s32 *, 0x10) = 0x400;
    osEPiStartDma(temp_a0_2, temp_a1, 0);
    return func_80034640(temp_s2) + temp_s0;
}

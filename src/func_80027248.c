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

M2C_UNK func_800382AC(void *, void *);              /* extern */
M2C_UNK func_800382CC(void *);                      /* extern */
extern u32 D_80046C30;
extern M2C_UNK D_8005D7A4;
extern s32 D_8005DCB0;

void func_80027248(void) {
    void *temp_s1;
    void *var_s0;

    var_s0 = M2C_FIELD(&D_8005D7A4, void **, 0);
    if (var_s0 != NULL) {
        do {
            temp_s1 = M2C_FIELD(var_s0, void **, 0);
            if ((u32) (M2C_FIELD(var_s0, s32 *, 0xC) + 2) < (u32) D_80046C30) {
                if (M2C_FIELD(&D_8005D7A4, void **, 0) == var_s0) {
                    M2C_FIELD(&D_8005D7A4, void **, 0) = temp_s1;
                }
                func_800382CC(var_s0);
                if (M2C_FIELD(&D_8005D7A4, void **, 4) == NULL) {
                    M2C_FIELD(&D_8005D7A4, void **, 4) = var_s0;
                    M2C_FIELD(var_s0, void **, 0) = NULL;
                    M2C_FIELD(var_s0, s32 *, 4) = 0;
                    goto block_10;
                }
                func_800382AC(var_s0, M2C_FIELD(&D_8005D7A4, void **, 4));
                var_s0 = temp_s1;
            } else {
block_10:
                var_s0 = temp_s1;
            }
        } while (var_s0 != NULL);
    }
    D_8005DCB0 = 0;
    D_80046C30 += 1;
}

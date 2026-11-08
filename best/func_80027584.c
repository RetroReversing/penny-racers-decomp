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

M2C_UNK func_80027D00(s32);                         /* extern */
s32 func_8002C190(M2C_UNK *);                       /* extern */
s16 func_8002C1D0(void *);                          /* extern */
M2C_UNK func_8002C3E0(void *, s16);                 /* extern */
M2C_UNK func_8002C410(void *);                      /* extern */
extern M2C_UNK D_8006FB38;
extern M2C_UNK D_8006FCB4;
extern M2C_UNK D_8006FCB8;
extern M2C_UNK D_8006FCBA;

void func_80027584(void) {
    M2C_UNK *var_s4;
    s32 *var_s2;
    s32 var_s1;
    s32 var_s3;
    void *temp_s0;

    var_s3 = 0;
    var_s2 = &D_8006FB38 + 0x17C;
    var_s1 = 0;
    var_s4 = &D_8006FB38;
    do {
        if ((*var_s2 & 2) && (func_8002C190(var_s4) == 0)) {
            func_80027D00(var_s3);
            *var_s2 &= ~2;
        }
        if (*var_s2 & 1) {
            temp_s0 = var_s1 + &D_8006FB38;
            if (*(&D_8006FCB8 + var_s1) == 0) {
                func_8002C3E0(temp_s0, 0);
                func_8002C410(temp_s0);
                *(&D_8006FCB4 + var_s1) = *(&D_8006FCB4 + var_s1) & ~1;
                func_8002C3E0(temp_s0, 0x7FFF);
                var_s2 += 0x184;
            } else {
                do { func_8002C3E0(temp_s0, (s16) (func_8002C1D0(temp_s0) - *(&D_8006FCBA + var_s1))); } while (0);
                M2C_FIELD(temp_s0, s16 *, 0x180) = (s16) (*(&D_8006FCB8 + var_s1) - 1);
                goto block_8;
            }
        } else {
block_8:
            var_s2 += 0x184;
        }
        var_s1 += 0x184;
        var_s3 += 1;
        var_s4 += 0x184;
    } while (var_s3 < 2);
}

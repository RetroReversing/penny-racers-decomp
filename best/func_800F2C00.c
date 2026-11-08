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

M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CA468(void **, u8);                 /* extern */
M2C_UNK func_801CABF4(void **, M2C_UNK, s32, M2C_UNK, M2C_UNK *, void *, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_801CAF18(void **, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801CC150(void **, s32, s16, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_800DA26A;
extern M2C_UNK D_800DB1B8;
extern u8 D_80126FF6;
extern M2C_UNK D_80173170;
extern M2C_UNK D_80173970;
extern M2C_UNK D_80173998;
extern M2C_UNK D_80173C40;
extern M2C_UNK D_8018993F;
extern u8 D_80189DC0;
extern u8 D_8018A248;
extern M2C_UNK D_801CF4C8;
extern M2C_UNK D_801D4390;
extern M2C_UNK D_80237630;
extern M2C_UNK func_8011EDAC;
extern M2C_UNK func_8018B9BC;
extern M2C_UNK func_8018D158;
extern M2C_UNK func_80220E94;

void func_800F2C00(void **arg0, u16 arg1) {
    u16 sp4E;
    s32 sp54;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_s0;
    void *temp_v1;

    sp4E = arg1;
    if (D_80126FF6 == (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) - 1)) {
        temp_s1 = sp4E * 0x64;
        if (*(&func_8011EDAC + 0x582 + temp_s1) != 0) {
            temp_v1 = *arg0;
            *arg0 = temp_v1 + 8;
            M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
            M2C_FIELD(temp_v1, void **, 4) = (void *) (&func_80220E94 + 0x44);
            func_801CA140();
            func_801CA468(arg0, D_8018A248);
            func_801CC150(arg0, 0x2C, D_80189DC0 + 0x12, 0, 0, 0x50, 0x33, 0x50, 0x33, 0x50, 0x33, 0, 0, 0x13F, 0xEF, &D_80173170, &D_80173970);
            var_s0 = 1;
            if ((s32) *(&func_8011EDAC + 0x550 + temp_s1) > 1) {
                sp54 = sp4E * 0x64;
                __repair_rows: {
                    func_801CA468(arg0, M2C_FIELD(&func_8018B9BC, u8 *, 0x276));
                    temp_s1_2 = var_s0 * 0x18;
                    func_801CC150(arg0, *(&func_8018D158 + 0x509 + var_s0) + 0x28, (s16) (temp_s1_2 + 0x3B), 0, 0, 0x60, 0xE, 0x60, 0xE, 0x60, 0xE, 0, 0, 0xA0, 0xEF, &D_80173998, &D_80173C40);
                    if (*(&func_8018D158 + 0x509 + var_s0) == 0) {
                        func_801CAF18(arg0, 0x1E, (temp_s1_2 + 0x34) & 0xFFFF, (var_s0 + 0x10) & 0xFFFF, &D_801CF4C8, &D_801D4390, 0, 0xA, 0xE, 0xA0, 0xFC);
                    }
                    func_801CA468(arg0, *(&D_8018993F + var_s0));
                    temp_v0 = *(&D_80237630 + (var_s0 * 2)) * 0x178;
                    func_801CABF4(arg0, 0x37, ((var_s0 * 0x18) + 0x37) & 0xFFFF, 0xA, &D_801D4390, temp_v0 + (&D_800DA26A + 0x64) + (*(&D_800DA260 + temp_v0) * 0x12), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
                    var_s0 += 1;
                }
if (var_s0 < (s32) *(&func_8011EDAC + 0x550 + sp54)) goto __repair_rows;
            }
        }
    }
}

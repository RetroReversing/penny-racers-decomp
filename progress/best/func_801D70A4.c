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

M2C_UNK func_8003DE60(M2C_UNK *);                   /* extern */
M2C_UNK func_801D651C(M2C_UNK, s16);                /* extern */
M2C_UNK func_801D656C(M2C_UNK, s16, s16);           /* extern */
M2C_UNK func_801D663C(M2C_UNK, s16);                /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8006FB14;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_801D75E6;
extern M2C_UNK D_801D7A78;
extern M2C_UNK D_801D7D40;
extern u16 D_801D7DEA;
extern s16 D_801D7EFC;
extern u16 D_801D7F0E;
extern u16 D_801D7F50;
extern M2C_UNK D_80221080;

void func_801D70A4(s32 arg0) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv1;
    f32 var_fs0;
    f32 var_fv0;
    s32 var_v0;
    u16 *var_s0;
    u16 *var_s2;
    u16 temp_s4;
    u16 temp_v0;
    u16 temp_v1;
    void *temp_a0;
    void *temp_s1;

    temp_a0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((*(&D_801D7A78 + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4)) != 0) && (M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) < 2)) {
            D_801D7DEA = 0xA;
            D_801D7F50 = -1U;
            M2C_FIELD(temp_a0, u16 *, 0x3E) = 1U;
            func_8003DE60(&D_801D7D40);
            return;
        }
        return;
    case 1:
        if (D_801D7DEA != 0) {
            D_801D7DEA -= 1;
            return;
        }
        if ((u8) M2C_FIELD(&D_8006FB14, u8 *, 4) >= 2U) {
            M2C_FIELD(temp_a0, u16 *, 0x3E) = 2U;
        }
        temp_s4 = D_801D7F50;
        D_801D7F50 = 0;
        temp_s1 = (M2C_FIELD(&D_800DB1B8, s16 *, 0x210C) * 0x24) + &D_80221080;
        var_fs0 = 10000.0f;
        var_s0 = *(&D_801D7A78 + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4));
        var_s2 = NULL;
        temp_v0 = *var_s0;
        if (temp_v0 != 0) {
            var_v0 = temp_v0 << 0x10;
            __repair_rows: {
                if ((var_v0 >> 0x10) == 0x1F) {
                    var_fv0 = 0.0f;
                } else {
                    temp_ft0 = M2C_FIELD(temp_s1, f32 *, 0) - M2C_FIELD(var_s0, f32 *, 4);
                    temp_ft1 = M2C_FIELD(temp_s1, f32 *, 4) - M2C_FIELD(var_s0, f32 *, 8);
                    temp_fv1 = M2C_FIELD(temp_s1, f32 *, 8) - M2C_FIELD(var_s0, f32 *, 0xC);
                    var_fv0 = sqrtf((temp_ft0 * temp_ft0) + (temp_ft1 * temp_ft1) + (temp_fv1 * temp_fv1));
                }
                if (var_fv0 < var_fs0) {
                    var_fs0 = var_fv0;
                    D_801D7F50 = M2C_FIELD(var_s0, u16 *, 0);
                    var_s2 = var_s0;
                }
                var_s0 += 0x14;
                var_v0 = *var_s0 << 0x10;
            }
if ((s16) *var_s0 != 0) goto __repair_rows;
        }
        if ((s16) temp_s4 != (s16) D_801D7F50) {
            if ((s16) D_801D7F50 != 0) {
                temp_fs0 = var_fs0 - M2C_FIELD(var_s2, f32 *, 0x10);
                if (temp_fs0 < 0.0f) {
                    func_801D651C(6, (s16) D_801D7F50);
                    D_801D7F0E = *(&D_801D75E6 + ((s16) D_801D7F50 * 0xC));
                    return;
                }
                if (temp_fs0 < 900.0f) {
                    func_801D656C(6, (s16) D_801D7F50, (s16) (s32) (((f32) *(&D_801D75E6 + ((s16) D_801D7F50 * 0xC)) * (1000.0f - temp_fs0)) / 1000.0f));
                    return;
                }
                goto block_34;
            }
            goto block_35;
        }
        if ((s16) D_801D7F50 != 0) {
            temp_fs0_2 = var_fs0 - M2C_FIELD(var_s2, f32 *, 0x10);
            if (temp_fs0_2 < 0.0f) {
                D_801D7F0E = *(&D_801D75E6 + ((s16) D_801D7F50 * 0xC));
                return;
            }
            if (temp_fs0_2 < 900.0f) {
                D_801D7F0E = (u16) (s32) (((f32) *(&D_801D75E6 + ((s16) D_801D7F50 * 0xC)) * (1000.0f - temp_fs0_2)) / 1000.0f);
                return;
            }
block_34:
            D_801D7F50 = 0;
block_35:
            if (D_801D7EFC != -1) {
                func_801D663C(6, (s16) D_801D7F50);
                return;
            }
        }
        break;
    case 2:
        D_801D7F0E = 0;
        break;
    }
}

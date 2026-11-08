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

extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F32E;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern s8 D_801C7AB5;
extern s8 D_801CA138;

void func_801B4B6C(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_v0;
    u8 temp_a1;
    void *temp_v0;
    void *temp_v1;

    if ((*(&D_8011F32E + (D_801C7074 * 0x64)) == 0x10) && (D_801C707B == 1)) {
        if (D_801CA138 != 0) {
            var_a1 = (arg0 & 0xFFFF) * 0x64;
            var_v0 = arg0 & 0xFFFF;
            if ((u8) *(&D_8011F2F0 + var_a1) >= 6U) {
                goto block_8;
            }
            goto block_7;
        }
        if (D_801C7AB5 != 0) {
            var_a1 = (arg0 & 0xFFFF) * 0x64;
            var_v0 = arg0 & 0xFFFF;
            if ((u8) *(&D_8011F2F0 + var_a1) < 6U) {
block_7:
                temp_v0 = var_a1 + &D_8011F2F0;
                M2C_FIELD(temp_v0, s8 *, 0) = (s8) (*(&D_8011F2F0 + var_a1) + 1);
                M2C_FIELD(temp_v0, s8 *, 0xC) = (s8) (*(&D_8011F2FC + var_a1) + 1);
                return;
            }
block_8:
            temp_a0 = var_v0 * 0x64;
            temp_a1 = *(&D_8011F2F0 + temp_a0);
            if ((u32) (temp_a1 - 6) < 6U) {
                temp_v1 = temp_a0 + &D_8011F2F0;
                M2C_FIELD(temp_v1, s8 *, 0) = (s8) (temp_a1 + 1);
                M2C_FIELD(temp_v1, s8 *, 0xC) = (s8) (*(&D_8011F2FC + temp_a0) - 1);
            }
        } else {
            temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
            *(&D_8011F2F0 + temp_v0_2) = 0;
            *(&D_8011F2FC + temp_v0_2) = 0;
        }
    }
}

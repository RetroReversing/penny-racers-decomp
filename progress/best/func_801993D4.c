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

extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F330;
extern u8 D_801C6B31;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;

void func_801993D4(void **arg0, s32 arg1) {
    s32 temp_v1_2;
    s32 temp_v1_3;
    u16 temp_v1;
    void *temp_a0;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            return;
        }
        temp_v1_2 = D_801C7074 * 0x64;
        if (((u32) (*(&D_8011F32E + temp_v1_2) - 7) < 2U) || (*(&D_8011F32E + temp_v1_2) == 6)) {
            if ((D_801C7469 != 4) && (D_801C7469 != 1) && (D_801C6B31 != 0)) {
                goto block_20;
            }
            goto block_19;
        }
        temp_v1_3 = D_801C7074 * 0x64;
        if (((u32) (*(&D_8011F32E + temp_v1_3) - 9) >= 2U) && (*(&D_8011F32E + temp_v1_3) != 0xD)) {
            if ((u32) (*(&D_8011F32E + (D_801C7074 * 0x64)) - 0xF) < 2U) {
                if (D_801C707B != 0) {
                    if (D_801C707B != 1) {

                    } else {
                        goto block_20;
                    }
                } else {
                    goto block_19;
                }
            } else {
                if ((D_801C7AB8 == 4) || (D_801C7AB8 == 1) || (D_801C6B31 == 0)) {
                    goto block_19;
                }
block_20:
                temp_v1_4 = *arg0;
                *arg0 = temp_v1_4 + 8;
                M2C_FIELD(temp_v1_4, s32 *, 0) = 0xFA000000;
                M2C_FIELD(temp_v1_4, s32 *, 4) = 0x96969664;
            }
        } else {
block_19:
            temp_a0 = *arg0;
            *arg0 = temp_a0 + 8;
            M2C_FIELD(temp_a0, s32 *, 0) = 0xFA000000;
            M2C_FIELD(temp_a0, s32 *, 4) = (s32) (*(&D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)) | 0xFF00);
        }
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xF9000000;
        M2C_FIELD(temp_v1_5, s32 *, 4) = 1;
        return;
    }
    *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8011F2FC;
extern s32 D_8011F32E;
extern s32 D_8011F330;
extern u8 D_801C6B31;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;

void func_801993D4(void **arg0, s16 arg1) {
    s32 *__base_D_8011F330;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u16 temp_v1;
    void *temp_a0;
    void *temp_v1_4;
    void *temp_v1_5;
    s32 *__base_D_8011F2FC;
    s32 *__base_D_8011F32E;

    __base_D_8011F32E = &D_8011F32E;

    __base_D_8011F2FC = &D_8011F2FC;

    __base_D_8011F330 = &D_8011F330;
    temp_v1 = *(__base_D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            return;
        }
        temp_v1_2 = D_801C7074 * 0x64;
        if (((u32) (*(__base_D_8011F32E + temp_v1_2) - 7) < 2U) || (*(__base_D_8011F32E + temp_v1_2) == 6)) {
            if ((D_801C7469 != 4) && (D_801C7469 != 1) && (D_801C6B31 != 0)) {
                goto block_20;
            }
            goto block_19;
        }
        temp_v1_3 = (u32)D_801C7074 * 0x64;
        if (((u32) (*(__base_D_8011F32E + temp_v1_3) - 9) >= 2U) && (*(__base_D_8011F32E + temp_v1_3) != 0xD)) {
            if ((u32) (*(__base_D_8011F32E + (D_801C7074 * 0x64)) - 0xF) < 2U) {
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
                (*(s32 *)((char *)(temp_v1_4) + 4)) = 0x96969664;
                *arg0 = temp_v1_4 + 8;
                (*(s32 *)((char *)(temp_v1_4) + 0)) = 0xFA000000;
            }
        } else {
block_19:
            temp_a0 = *arg0;
            *arg0 = temp_a0 + 8;
            (*(s32 *)((char *)(temp_a0) + 0)) = 0xFA000000;
            (*(s32 *)((char *)(temp_a0) + 4)) = (s32) (*(__base_D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)) | 0xFF00);
        }
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        (*(s32 *)((char *)(temp_v1_5) + 0)) = 0xF9000000;
        (*(s32 *)((char *)(temp_v1_5) + 4)) = 1;
        return;
    }
    *(__base_D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
}

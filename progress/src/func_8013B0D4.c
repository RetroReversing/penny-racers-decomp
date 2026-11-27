typedef s32 M2C_UNK;
extern char D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 viewIndex;
extern char D_8018A264[];

void func_8013B0D4(void **arg0, s32 arg1) {
    u8 temp_a0;
    u8 temp_v1;
    void *temp_a0_2;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v1 = *(D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64));
    if (temp_v1 == viewIndex) {
        temp_a0 = *(D_8018A264 + temp_v1);
        if (temp_a0 == 1) {
            temp_v1_2 = *arg0;
            *arg0 = temp_v1_2 + 8;
            *(s32 *)temp_v1_2 = 0xE7000000;
            *(s32 *)((s8 *)temp_v1_2 + 4) = 0;
            temp_v1_3 = *arg0;
            *arg0 = temp_v1_3 + 8;
            *(s32 *)temp_v1_3 = 0xB6000000;
            *(s32 *)((s8 *)temp_v1_3 + 4) = (s32) temp_a0;
            temp_v1_4 = *arg0;
            *arg0 = temp_v1_4 + 8;
            *(s32 *)temp_v1_4 = 0xB900031D;
            *(s32 *)((s8 *)temp_v1_4 + 4) = 0x504340;
        }
    }
    temp_a0_2 = *arg0;
    *arg0 = temp_a0_2 + 8;
    *(s32 *)temp_a0_2 = 0xFA000000;
    *(s32 *)((s8 *)temp_a0_2 + 4) = (s32) (*(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)) | ~0xFF);
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */

extern s32 D_8011F338;
extern s32 D_8016D0B0;
extern s32 D_8016D0C4;

void func_801513E4(void **arg0, s32 arg1) {
    f32 temp_fv1;
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;

    temp_v1 = *arg0;
    (*(s32 *)((char *)(temp_v1) + 0)) = 0xFD900000;
    *arg0 = temp_v1 + 8;
    temp_fv1 = *(&D_8011F338 + ((arg1 & 0xFFFF) * 0x64));
    var_v0 = (u32) temp_fv1 & 0xFFFF;
    (*(s32 *)((char *)(temp_v1) + 4)) = (s32) *(&D_8016D0B0 + (*(&D_8016D0C4 + var_v0) * 4));
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    (*(s32 *)((char *)(temp_v1_2) + 0)) = 0xF5900000;
    (*(s32 *)((char *)(temp_v1_2) + 4)) = 0x07094250;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    (*(s32 *)((char *)(temp_v1_3) + 0)) = 0xE6000000;
    (*(s32 *)((char *)(temp_v1_3) + 4)) = 0;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    (*(s32 *)((char *)(temp_v1_4) + 0)) = 0xF3000000;
    (*(s32 *)((char *)(temp_v1_4) + 4)) = 0x071FF200;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    (*(s32 *)((char *)(temp_v1_5) + 0)) = 0xE7000000;
    (*(s32 *)((char *)(temp_v1_5) + 4)) = 0;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    (*(s32 *)((char *)(temp_v1_6) + 0)) = 0xF5880800;
    (*(s32 *)((char *)(temp_v1_6) + 4)) = 0x94250;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    (*(s32 *)((char *)(temp_v1_7) + 0)) = 0xF2000000;
    (*(s32 *)((char *)(temp_v1_7) + 4)) = 0x7C07C;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    (*(s32 *)((char *)(temp_v1_8) + 0)) = 0xFA000000;
    (*(s32 *)((char *)(temp_v1_8) + 4)) = 0xF87800FF;
}

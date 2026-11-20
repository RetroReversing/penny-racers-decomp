/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_801F99A8(s32, s32);                        /* extern */
s32 guMtxCatL(void *, s32 *, void *);       /* extern */
s32 guRotate(void *, f32, s32, s32, f32); /* extern */
s32 guTranslate(s32 *, f32, f32, f32); /* extern */
extern s32 D_80046834;
extern u8 D_8011F2FC[];
extern s32 D_80167ED8;
extern s32 D_8018D460;
extern s32 D_8022AEB8;
extern s32 D_8022AEE8;

typedef struct { int value; } __repair_field_0;
void func_801306B4(void **arg0, s32 arg1) {
    char sp18[0x40];
    f32 temp_fs0;
    int temp_a1;
    s32 temp_s0;
    u8 temp_s2;
    void *temp_a0;
    void *temp_a2;
    void *temp_s2_2;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_a1 = arg1 & 0xFFFF;
    temp_s2 = *(D_8011F2FC + (temp_a1 * 0x64));
    temp_s0 = temp_s2 * 0x8F0;
    temp_fs0 = 102.0f - (((func_801F99A8(*(&D_8022AEE8 + temp_s0) * 0xA, temp_a1) * 100.0f) + *(&D_8022AEB8 + temp_s0)) * 0.019f);
    guTranslate(sp18, 472.0f, -318.0f, -637.0f);
    temp_s2_2 = (void *)((temp_s2 << 6)); temp_s2_2 = (void *)((char *)temp_s2_2 + (s32)(&D_8018D460));
    guRotate((D_80046834 << 8) + temp_s2_2, temp_fs0, 0, 0, 1.0f);
    temp_a2 = (D_80046834 << 8) + temp_s2_2;
    guMtxCatL(temp_a2, sp18, temp_a2);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    ((__repair_field_0 *)temp_v1)->value = 0xE7000000;
    (*(s32 **)((char *)(temp_v1) + 4)) = NULL;
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    ((__repair_field_0 *)temp_a0)->value = 0x01020040;
    (*(s32 **)((char *)(temp_a0) + 4)) = (s32 *) (((D_80046834 << 8) + temp_s2_2) - 0x80000000);
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    ((__repair_field_0 *)temp_v1_2)->value = 0xB6000000;
    (*(s32 **)((char *)(temp_v1_2) + 4)) = (s32 *)0xF3205;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    ((__repair_field_0 *)temp_v1_3)->value = 0xB7000000;
    (*(s32 **)((char *)(temp_v1_3) + 4)) = (s32 *)0x204;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    ((__repair_field_0 *)temp_v1_4)->value = 0xFCFFFFFF;
    (*(s32 **)((char *)(temp_v1_4) + 4)) = (s32 *)0xFFFE793C;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    ((__repair_field_0 *)temp_v1_5)->value = 0xB900031D;
    (*(s32 **)((char *)(temp_v1_5) + 4)) = (s32 *)0x552048;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    ((__repair_field_0 *)temp_v1_6)->value = 0xBA000E02;
    (*(s32 **)((char *)(temp_v1_6) + 4)) = (s32 *)0x8000;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    ((__repair_field_0 *)temp_v1_7)->value = 0xB9000002;
    (*(s32 **)((char *)(temp_v1_7) + 4)) = NULL;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    ((__repair_field_0 *)temp_v1_8)->value = 0xFA000000;
    (*(s32 **)((char *)(temp_v1_8) + 4)) = (s32 *)-1;
    temp_v1_9 = *arg0;
    *arg0 = temp_v1_9 + 8;
    ((__repair_field_0 *)temp_v1_9)->value = 0x04000C2F;
    (*(s32 **)((char *)(temp_v1_9) + 4)) = &D_80167ED8;
    temp_v1_10 = *arg0;
    ((__repair_field_0 *)temp_v1_10)->value = 0xBF000000;
    *arg0 = temp_v1_10 + 8;
    (*(s32 **)((char *)(temp_v1_10) + 4)) = (s32 *)0x204;
}

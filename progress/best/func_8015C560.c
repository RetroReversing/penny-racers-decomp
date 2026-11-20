/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80046834;
extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern s32 D_8011F334;
extern s32 D_80182E20;
extern f64 D_80183968;
extern s32 D_80189970;
extern s32 D_80189DC8;
extern s32 D_8022AFD4;

typedef struct { int value; } __repair_field_0;
void func_8015C560(void **arg0, s32 arg1) {
    f32 temp_ft0;
    s32 temp_a0;
    s32 temp_t2;
    s32 temp_v1_8;
    s32 var_t0;
    s32 temp_t5;
    void *temp_a0_2;
    
    
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_9;

    temp_a0 = (arg1 & 0xFFFF) * 0x64;
    if ((*(D_8011F32E + temp_a0) != 0) && ((temp_t5 = *(D_8011F2F0 + temp_a0), temp_ft0 = *((s32 *)((s8 *)&D_8022AFD4 + ((temp_t5 & 0xFF) * 0x8F0))), !(D_80183968 < (f64) temp_ft0)) || ((f64) *((s32 *)((s8 *)&D_8011F334 + temp_a0)) != 0.0))) {
        temp_a0_2 = *arg0;
        *arg0 = temp_a0_2 + 8;
        (((__repair_field_0 *)temp_a0_2)->value) = 0xFA000000;
        (*(s32 **)((char *)(temp_a0_2) + 4)) = (s32 *) *(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64));
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        (((__repair_field_0 *)temp_v1)->value) = 0xFD900000;
        (*(s32 **)((char *)(temp_v1) + 4)) = &D_80182E20;
        temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        (((__repair_field_0 *)temp_v1_2)->value) = 0xF5900000;
        (*(s32 **)((char *)(temp_v1_2) + 4)) = (s32 *)0x07080200;
        temp_v1_3 = *arg0;
        *arg0 = temp_v1_3 + 8;
        (((__repair_field_0 *)temp_v1_3)->value) = 0xE6000000;
        (*(s32 **)((char *)(temp_v1_3) + 4)) = NULL;
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        (*(s32 **)((char *)(temp_v1_4) + 4)) = (s32 *)0x07007400;
        (((__repair_field_0 *)temp_v1_4)->value) = 0xF3000000;
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        (((__repair_field_0 *)temp_v1_5)->value) = 0xE7000000;
        (*(s32 **)((char *)(temp_v1_5) + 4)) = NULL;
        temp_v1_6 = *arg0;
        *arg0 = temp_v1_6 + 8;
        (((__repair_field_0 *)temp_v1_6)->value) = 0xF5800400;
        (*(s32 **)((char *)(temp_v1_6) + 4)) = (s32 *)0x80200;
        temp_v1_7 = *arg0;
        *arg0 = temp_v1_7 + 8;
        (((__repair_field_0 *)temp_v1_7)->value) = 0xF2000000;
        (*(s32 **)((char *)(temp_v1_7) + 4)) = (s32 *)0x7C000;
        var_t0 = 0;do{temp_a0 = temp_t5 << 6;}while(0);
        do {
            temp_v1_8 = var_t0 * 0x10;
            temp_a0_2 = temp_v1_8 + (temp_a0 + ((D_80046834 * 0x1C0) + &D_80189DC8));
            temp_v1_9 = temp_v1_8 + (temp_a0 + &D_80189970);
            (*(s32 *)((char *)(temp_a0_2) + 4)) = (s32) (*(s32 *)((char *)(temp_v1_9) + 4));
            (((__repair_field_0 *)temp_a0_2)->value) = (s32) (((__repair_field_0 *)temp_v1_9)->value);
            (*(s32 *)((char *)(temp_a0_2) + 8)) = (s32) (*(s32 *)((char *)(temp_v1_9) + 8));
            (*(s32 *)((char *)(temp_a0_2) + 0xC)) = (s32) (*(s32 *)((char *)(temp_v1_9) + 0xC));/*__repair_loop_weight*/do {var_t0 += 1;} while (0);
        } while (var_t0 < 4);
        temp_a0_2 = *arg0;
        *arg0 = temp_a0_2 + 8;
        (((__repair_field_0 *)temp_a0_2)->value) = 0x0400103F;
        (*(s32 **)((char *)(temp_a0_2) + 4)) = (s32 *) ((D_80046834 * 0x1C0) + ((temp_t5 << 6) + &D_80189DC8));
        if (temp_ft0 >= 0.0f) {
            temp_v1_10 = *arg0;
            *arg0 = temp_v1_10 + 8;
            (((__repair_field_0 *)temp_v1_10)->value) = 0xB1000204;
            (*(s32 *)((char *)(*arg0) + 4)) = 0x20604;
        } else {
            temp_v1_11 = *arg0;
            *arg0 = temp_v1_11 + 8;
            (((__repair_field_0 *)temp_v1_11)->value) = 0xB1000402;
            (*(s32 *)((char *)(*arg0) + 4)) = 0x20406;
        }
    }
}

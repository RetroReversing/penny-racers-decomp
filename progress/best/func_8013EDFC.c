/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801D7028();
extern char D_8011F2F0[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8022A770[];
extern char D_8022A772[];

s32 func_8013EDFC(s32 arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_s4;
    s32 temp_v0_2;
    s32 var_s1;
    s8 temp_v1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1_2;
    void *var_v0;

    temp_s4 = (*(f32 *)((char *)(temp_v0) + 0x18));
    temp_v0 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_fs5 = (*(f32 *)((char *)(temp_v0) + 0x1C));
    temp_fs4 = (*(f32 *)((char *)(temp_v0) + 0x20));
    var_s1 = 0;
    var_v0 = arg1;
    do {
        temp_v1 = (*(s8 *)((char *)(var_v0) + 0x60));
        if (temp_v1 != -1) {
            temp_s0 = (temp_v1 * 0x8F0) + D_8022A770;
            temp_v0_2 = *(u16 *)(D_8022A772 + (var_s1 * 0x8F0)) * 0x64;
            temp_fs1 = temp_s4 - *(u16 *)(D_8011F308 + temp_v0_2);
            temp_fv1 = temp_fs5 - *(u16 *)(D_8011F30C + temp_v0_2);
            temp_fs0 = temp_fs4 - *(u16 *)(D_8011F310 + temp_v0_2);
            temp_v1_2 = arg1 + var_s1;
            if ((sqrtf((temp_fs1 * temp_fs1) + (temp_fv1 * temp_fv1) + (temp_fs0 * temp_fs0)) < (*(f32 *)((char *)(arg1) + 0x70))) && ((*(u8 *)((char *)(temp_v1_2) + 0x67)) == 0)) {
                (*(u8 *)((char *)(temp_v1_2) + 0x67)) = 1U;
                if (!((*(u16 *)((char *)(temp_s0) + 0x560)) & 0x20) && ((*(u8 *)((char *)(temp_s0) + 0x8A1)) != 4)) {
                    (*(u8 *)((char *)(temp_s0) + 0x8A1)) = 3U;
                    (*(s8 *)((char *)(temp_s0) + 0x8C8)) = 0;
                    (*(s8 *)((char *)(temp_s0) + 0x8C9)) = 1;
                    (*(f32 *)((char *)(temp_s0) + 0x8CC)) = 360.0f;
                    temp_fv1_2 = -temp_fs1 * 0.025f;
                    (*(f32 *)((char *)(temp_s0) + 0x7B4)) = temp_fv1_2;
                    temp_fv0 = -temp_fs0 * 0.025f;
                    (*(f32 *)((char *)(temp_s0) + 0x7BC)) = temp_fv0;
                    (*(f32 *)((char *)(temp_s0) + 0x7C0)) = temp_fv1_2;
                    (*(f32 *)((char *)(temp_s0) + 0x7C8)) = temp_fv0;/*__repair_call_balance*/if(var_s1){
                    func_801D7028((*(u16 *)((char *)(temp_s0) + 2)), 0x34);}else{
                    func_801D7028((*(u16 *)((char *)(temp_s0) + 2)), 0x34);}
                }
                temp_v0_3 = temp_s0 + ((*(u16 *)((char *)((*(void **)((char *)(arg1) + 4))) + 4)) * 8);
                temp_ft0 = (*(f32 *)((char *)(temp_v0_3) + 0x5B4));
                (*(f32 *)((char *)(temp_v0_3) + 0x5B4)) = (f32) (((1.0f - temp_ft0) * (*(f32 *)((char *)(temp_s0) + 0x5A0))) + temp_ft0);
            }
        }/*__repair_loop_weight*/do {
        var_s1 += 1;} while (0);
        var_v0 = arg1 + var_s1;
    } while (7 > var_s1);
    return (s32) var_v0;
}

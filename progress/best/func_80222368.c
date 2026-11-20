/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 sqrtf(f32);                                     /* extern */

void func_80222368(void *arg0) {
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv0_6;
    f32 var_fv1_2;
    f32 temp_fv0_8;
    f32 temp_fv0_5;
    f32 temp_fv1_2;
    f32 var_fv1;
    f32 temp_fv0_7;

    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x7B4));
    temp_fv0_2 = (*(f32 *)((char *)(arg0) + 0x7B8));
    temp_fv0_3 = (*(f32 *)((char *)(arg0) + 0x7BC));
    temp_fa0 = (temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2) + (temp_fv0_3 * temp_fv0_3);
    temp_fv0_4 = sqrtf(temp_fa0);
    var_fv1 = temp_fv0_4;
    if (temp_fv0_4 != temp_fv0_4) {
        var_fv1 = sqrtf(temp_fa0);
    }
    if (var_fv1 > 15.0f) {
        temp_fv1 = 15.0f / var_fv1;
        (*(f32 *)((char *)(arg0) + 0x7B4)) = (f32) (temp_fv1 * (*(f32 *)((char *)(arg0) + 0x7B4)));
        (*(f32 *)((char *)(arg0) + 0x7BC)) = (f32) (temp_fv1 * (*(f32 *)((char *)(arg0) + 0x7BC)));
        (*(f32 *)((char *)(arg0) + 0x7B8)) = (f32) (temp_fv1 * (*(f32 *)((char *)(arg0) + 0x7B8)));
    }
    temp_fv0_5 = (*(f32 *)((char *)(arg0) + 0x7C0));
    temp_fv0_6 = (*(f32 *)((char *)(arg0) + 0x7C4));
    temp_fv0_7 = (*(f32 *)((char *)(arg0) + 0x7C8));
    temp_fa0_2 = (temp_fv0_5 * temp_fv0_5) + (temp_fv0_6 * temp_fv0_6) + (temp_fv0_7 * temp_fv0_7);
    temp_fv0_8 = sqrtf(temp_fa0_2);
    var_fv1_2 = temp_fv0_8;
    if (temp_fv0_8 != temp_fv0_8) {
        var_fv1_2 = sqrtf(temp_fa0_2);
    }
    if (var_fv1_2 > 15.0f) {
        temp_fv1_2 = 15.0f / var_fv1_2;
        (*(f32 *)((char *)(arg0) + 0x7C0)) = (f32) (temp_fv1_2 * (*(f32 *)((char *)(arg0) + 0x7C0)));
        (*(f32 *)((char *)((short)arg0) + 0x7C8)) = (f32) (temp_fv1_2 * (*(f32 *)((char *)(arg0) + 0x7C8)));
        (*(f32 *)((char *)(arg0) + 0x7C4)) = (f32) (temp_fv1_2 * (*(f32 *)((char *)(arg0) + 0x7C4)));
    }
}

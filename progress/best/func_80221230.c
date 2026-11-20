/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_80221230(void *arg0, s32 arg1, f32 arg2) {
s32 __repair_operand;

    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 var_ft2;
    f32 var_fv1;
f32 __repair_var_fv1_1;
    s32 var_a1;
    void *temp_v0;

    var_a1 = arg1;
    var_ft2 = arg2;
    if ((u32) (var_a1 & 0xFFFF) >= 5U) {
        var_a1 = 4;
    }
    if (var_ft2 < 10.0f) {
        var_ft2 = 10.0f;
    }
    temp_v0 = ((((var_a1 & 0xFFFF) * 6) & 0xFFFF) * 4) + __repair_operand;
    __repair_operand = (*(s32 *)((char *)(arg0) + 0x23C));
    temp_ft3 = (*(f32 *)((char *)(temp_v0) + 4));
    temp_fa0 = (*(f32 *)((char *)(temp_v0) + 0xC));
    temp_ft0 = (*(f32 *)((char *)(temp_v0) + 0));
    var_fv1 = (*(f32 *)((char *)(temp_v0) + 0x14));
    temp_ft1 = (*(f32 *)((char *)(temp_v0) + 8));
    temp_fv0 = (*(f32 *)((char *)(temp_v0) + 0x10));
    if (var_ft2 < temp_ft0) {
        __repair_var_fv1_1 = temp_ft3 / (temp_ft0 - var_ft2);
        if (temp_ft3 < __repair_var_fv1_1) {
            var_fv1 = temp_ft3;
        }
    } else if (var_ft2 < temp_ft1) {
        var_fv1 = (((temp_fa0 - temp_ft3) / (temp_ft1 - temp_ft0)) * (var_ft2 - temp_ft0)) + temp_ft3;
    } else if (temp_fv0 > var_ft2) {
        var_fv1 = (((var_fv1 - temp_fa0) / (temp_fv0 - temp_ft1)) * (var_ft2 - temp_ft1)) + temp_fa0;
    }
    return var_fv1;
}

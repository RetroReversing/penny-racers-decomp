f32 func_801F9BE8(f32 arg0, f32 arg1) {
    f32 var_fa1;

    var_fa1 = arg1 - arg0;
    if (var_fa1 > 0.0f) {
        if (var_fa1 > 180.0f) {
            goto block_6;
        }
    } else {
        if (-var_fa1 > 180.0f) {
block_6:
            if (var_fa1 > 0.0f) {
                var_fa1 -= 360.0f;
            } else {
                var_fa1 += 360.0f;
            }
        }
    }
    return var_fa1;
}

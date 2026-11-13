void func_801F9A20(f32 arg0) {
    f32 var_fv0;

    var_fv0 = arg0;
    if (var_fv0 < 0.0f) {
        do {
            var_fv0 += 360.0f;
        } while (var_fv0 < 0.0f);
    } else if (var_fv0 >= 360.0f) {
        do {
            var_fv0 -= 360.0f;
        } while (var_fv0 >= 360.0f);
    }
}

s32 func_800339C0(s32);
extern s32 *D_800DDE88;

void nuScRemoveClient(s32 *arg0) {
    s32 **pp;
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a0;

    pp = &D_800DDE88;
    var_s0 = *pp;
    var_s1 = 0;
    temp_a0 = func_800339C0(1);
    if (var_s0 != 0) {
        do {
            if (var_s0 != arg0) {
                var_s1 = var_s0;
            } else {
                if (var_s1 != 0) {
                    *var_s1 = *var_s0;
                } else {
                    *pp = (s32 *) *var_s0;
                }
                break;
            }
            var_s0 = (s32 *) *var_s0;
        } while (var_s0 != 0);
    }
    func_800339C0(temp_a0);
}

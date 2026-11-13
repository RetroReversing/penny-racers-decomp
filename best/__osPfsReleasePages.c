s32 __osBlockSum(void *, s32, u32, s32);

s32 __osPfsReleasePages(void *arg0, u16 *arg1, s32 arg2, u32 arg3, u8 arg4, u16 *arg5, s32 arg6) {
    s32 temp_s1;
    s32 var_v0;
    s32 var_v1;
    u16 var_s0;
    u16 var_a1;
    u32 temp_a0;
    u32 temp_v1;

    var_s0 = arg1[arg2 & 0xFF];
    temp_a0 = var_s0 & 0xFFFF;
    if (temp_a0 != 1) {
        var_v1 = 1;
        if ((temp_a0 >> 8) == 0) {
            var_v1 = *(s32 *)((u8 *)arg0 + 0x60);
        }
    } else {
        var_v1 = 1;
        if (arg4 == 0) {
            var_v1 = *(s32 *)((u8 *)arg0 + 0x60);
        }
    }
    if (((var_s0 & 0xFF) >= var_v1) || (var_v0 = 3, ((var_s0 & 0xFFFF) == 1))) {
        *arg5 = var_s0;
        if (arg6 == 1) {
            arg1[arg2 & 0xFF] = 3;
        }
        temp_s1 = arg4 & 0xFF;
        var_v0 = __osBlockSum(arg0, arg2 & 0xFF, arg3, temp_s1);
        temp_v1 = var_s0 & 0xFFFF;
        if (var_v0 == 0) {
            var_v0 = 0;
            if (temp_v1 != 1) {
                if (temp_v1 >= *(s32 *)((u8 *)arg0 + 0x60)) {
                    var_a1 = var_s0;
                    do {
                        var_s0 = arg1[var_a1 & 0xFF];
                        arg1[var_a1 & 0xFF] = 3;
                        var_v0 = __osBlockSum(arg0, var_a1 & 0xFF, arg3, temp_s1);
                        if (var_v0 != 0) break;
                        var_a1 = var_s0;
                    } while (((var_s0 & 0xFFFF) >> 8) == temp_s1 && (s32)(var_s0 & 0xFFFF) >= *(s32 *)((u8 *)arg0 + 0x60));
                } else {
                    *arg5 = var_s0;
                    var_v0 = 0;
                }
            }
        }
    }
    return var_v0;
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_802240B0(void *arg0) {
    f32 temp_fv1;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    s32 var_v0;
    u8 var_v0_2;

    temp_v1 = (*(u8 *)((char *)(arg0) + 0x87A));
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = (*(u8 *)((char *)(arg0) + 0x74C));
        if (temp_v1_2 != 5) {
            temp_fv1 = (*(f32 *)((char *)(arg0) + 0x748));
            if ((temp_fv1 > 5000.0f) && ((*(u8 *)((char *)(arg0) + 0x74D)) == 0) && ((*(s32 *)((char *)(arg0) + 0x890)) != 0)) {
                if (temp_v1_2 < 4U) {
                    (*(u8 *)((char *)(arg0) + 0x74C)) = var_v0;
                    var_v0 = (*(u8 *)((char *)(arg0) + 0x74C)) + 1;
                    (*(u8 *)((char *)(arg0) + 0x74D)) = (u8) ((*(u8 *)((char *)(arg0) + 0x74D)) + 0x3C);
                    return;
                }
            } else if ((temp_fv1 < 3000.0f) && ((*(u8 *)((char *)(arg0) + 0x74D)) == 0) && ((*(u8 *)((char *)(arg0) + 0x74C)) != 0)) {
                var_v0 = (*(u8 *)((char *)(arg0) + 0x74C)) - 1;
                (*(u8 *)((char *)(arg0) + 0x74C)) = var_v0;
                (*(u8 *)((char *)(arg0) + 0x74D)) = (u8) ((*(u8 *)((char *)(arg0) + 0x74D)) + 0x3C);
                return;
            }
        } else {
            return;
        }
        break;
    case 1:
        temp_v1_3 = (*(u8 *)((char *)(arg0) + 0x8A0));
        if (temp_v1_3 != 1) {
            if (temp_v1_3 != 2) {
                (*(u8 *)((char *)(arg0) + 0x8A0)) = 0U;
                return;
            }
            if ((*(u8 *)((char *)(arg0) + 0x74C)) != 0) {
                var_v0_2 = (*(u8 *)((char *)(arg0) + 0x74C)) - 1;
                goto block_21;
            }
            goto block_22;
        }
        if ((u8) (*(u8 *)((char *)(arg0) + 0x74C)) < 4U) {
            var_v0_2 = (*(u8 *)((char *)(arg0) + 0x74C)) + 1;
block_21:
            (*(u8 *)((char *)(arg0) + 0x74C)) = var_v0_2;
            (*(u8 *)((char *)(arg0) + 0x74D)) = (u8) ((*(u8 *)((char *)(arg0) + 0x74D)) + 0x3C);
        }
block_22:
        (*(u8 *)((char *)(arg0) + 0x8A0)) = 0U;
        break;
    }
}

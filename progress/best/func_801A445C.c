/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_801C5EA8;
extern s32 D_801C5EB8;
extern s8 D_801C7081[];
extern s32 D_801C7084;
extern void *volatile D_801C7AB0;

s32 func_801A445C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_4;
    register s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_2;
    u32 var_v0_2;
    u8 var_a1;
    u8 var_a3;
    u8 var_v1;

    var_t1 = 0;
    if ((arg1 & 0xFF) == (*(u8 *)((char *)(D_801C7AB0) + 2))) {
        return 0;
    }
    var_v0_4 = arg0 & 0xFF;
    if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 3) {
        var_a3 = *(&D_801C7084 + ((arg0 & 0xFF) * 5));
        var_v1 = *(&D_801C7084 + ((arg1 & 0xFF) * 5));
        var_v0_2 = var_v1 & 0xFF;
    } else {
        var_a3 = *(&D_801C7084 + ((arg0 & 0xFF) * 5)) - 0x2E;
        var_v1 = *(&D_801C7084 + ((arg1 & 0xFF) * 5)) - 0x2E;
        var_a0 = var_v1 & 0xFF;
    var_v0_2 = var_a0;
    }
    if (var_v0_2 < 5U) {
        if (*(D_801C7081 + ((arg0 & 0xFF) * 5)) == *(D_801C7081 + ((arg1 & 0xFF) * 5))) {
            var_v0_4 = arg1 & 0xFF;
            if (((u32) (var_a3 & 0xFF) < 5U) || (var_v0_4 = arg1 & 0xFF, (((u32) ((var_a3 - 0xA) & 0xFF) < 3U) != 0)) || (var_v0_4 = arg1 & 0xFF, ((((u32) ((var_a3 - 0x10) & 0xFF) < 3U) | ((s8) var_a3 == 0x2D)) != 0))) {
                var_a0 = var_v0_4 * 5;
                *(D_801C7081 + var_a0) = 0x3C;
                var_a1 = *(&D_801C5EB8 + (arg2 & 0xFF));
                goto block_36;
            }
            goto block_38;
        } else {
            var_v0_3 = arg0 & 0xFF;
            if (*(D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x3C) {
                var_a0 = (arg1 & 0xFF) * 5;
                var_v0_3 = arg0 & 0xFF;
                if (*(D_801C7081 + var_a0) == 0x78) {
                    if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                        var_a1 = *(&D_801C5EB8 + (arg2 & 0xFF));
                        *(D_801C7081 + var_a0) = 0x3C;
                        goto block_36;
                    }
                    goto block_38;
                }
            }
            var_v0 = 0 & 0xFF;
            if (*(D_801C7081 + (var_v0_3 * 5)) == 0) {
                var_a0 = (arg1 & 0xFF) * 5;
                var_v0 = 0 & 0xFF;
                if (*(D_801C7081 + var_a0) == 0x3C) {
                    if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                        *(D_801C7081 + var_a0) = 0;
                        var_a1 = *(&D_801C5EB8 + (arg2 & 0xFF));
                        goto block_36;
                    }
                    goto block_38;
                }
            }
        }
    } else if ((u32) ((var_v1 - 0x1B) & 0xFF) < 5U) {
        var_a0 = (arg1 & 0xFF) * 5;
        if (*(D_801C7081 + ((arg0 & 0xFF) * 5)) != *(D_801C7081 + var_a0)) {
            var_a0 = arg0 & 0xFF;
            if (((*(D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x78) && (var_a0 = arg0 & 0xFF, (*(D_801C7081 + ((arg1 & 0xFF) * 5)) == 0x3C))) || ((var_v0 = 0 & 0xFF, (*(D_801C7081 + (var_a0 * 5)) == 0x3C)) && (var_v0 = 0 & 0xFF, (*(D_801C7081 + ((arg1 & 0xFF) * 5)) == 0)))) {
                var_v0_5 = arg1 & 0xFF;
                if (((u32) (var_a3 & 0xFF) < 5U) || (var_v0_5 = arg1 & 0xFF, (((u32) ((var_a3 - 0xA) & 0xFF) < 3U) != 0)) || (var_v0_5 = arg1 & 0xFF, ((((u32) ((var_a3 - 0x10) & 0xFF) < 3U) | ((s8) var_a3 == 0x2D)) != 0))) {
                    var_a0 = var_v0_5 * 5;
                    var_v0_6 = arg2 & 0xFF;
                    goto block_35;
                }
                goto block_38;
            }
        } else {
            var_v0 = 0 & 0xFF;
            if ((u32) ((var_a3 - 0x16) & 0xFF) < 5U) {
                var_v0_6 = arg2 & 0xFF;
block_35:
                var_a1 = *(&D_801C5EA8 + var_v0_6);
block_36:
                var_t1 = 1;
                *(&D_801C7084 + var_a0) = var_a1;
                if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 4) {
                    *(&D_801C7084 + var_a0) = var_a1 + 0x2E;
                }
                goto block_38;
            }
        }
    } else {
block_38:
        var_v0 = var_t1 & 0xFF;
    }
    return var_v0;
}

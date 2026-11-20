/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_801C5EB0[];
extern char D_801C5EC8[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void *volatile D_801C7AB0;

s32 func_801A4E94(s32 arg0, s32 arg1, s32 arg2) {
    u8 var_a1;
    s32 var_a0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_2;
    s32 temp_v1;
    u8 var_t0;
    u8 var_v1;

    var_t1 = 0;
    if ((arg1 & 0xFF) == (*(u8 *)((char *)(D_801C7AB0) + 2))) {
        return 0;
    }
    var_v0_4 = arg0 & 0xFF;
    if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 3) {
        var_v1 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
        var_t0 = *(D_801C7084 + ((arg0 & 0xFF) * 5));
        var_v0_2 = var_v1 - 5;
    } else {
        var_v1 = *(D_801C7084 + ((arg1 & 0xFF) * 5)) - 0x2E;
        var_t0 = *(D_801C7084 + ((arg0 & 0xFF) * 5)) - 0x2E;
        var_v0_2 = var_v1 - 5;
    }
    if ((u32) (var_v0_2 & 0xFF) < 5U) {
        if (*(D_801C7081 + ((arg0 & 0xFF) * 5)) == *(u16 *)(D_801C7081 + ((arg1 & 0xFF) * 5))) {
            var_v0 = arg1 & 0xFF;
            if (((u32) ((unsigned char)(var_t0 - 5)) < 5U) || (var_v0 = arg1 & 0xFF, ((((u32) ((var_t0 - 0x10) & 0xFF) < 6U) | ((s8) var_t0 == 0x2B)) != 0))) {
                var_a0 = var_v0 * 5;
                var_a1 = *(u16 *)(D_801C5EC8 + (arg2 & 0xFF));
                *(D_801C7081 + var_a0) = 0x3C;
                goto block_34;
            }
            goto block_36;
        } else {
            var_v0_5 = arg0 & 0xFF;
            if (*(D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x3C) {
                var_a0 = (arg1 & 0xFF) * 5;
                var_v0_3 = arg0 & 0xFF;
                if (*(D_801C7081 + var_a0) == 0x78) {
                    if ((u32) ((var_t0 - 0x20) & 0xFF) < 5U) {
                        *(D_801C7081 + var_a0) = 0x3C;
                        var_a1 = *(u16 *)(D_801C5EC8 + (arg2 & 0xFF));
                        goto block_34;
                    }
                    goto block_36;
                }
            }
            var_v0 = 0 & 0xFF;
            if (*(D_801C7081 + (var_v0_5 * 5)) == 0) {
                var_v0 = 0 & 0xFF;
                var_a0 = (arg1 & 0xFF) * 5;
                if (*(D_801C7081 + var_a0) == 0x3C) {
                    if ((u32) ((var_t0 - 0x20) & 0xFF) < 5U) {
                        *(D_801C7081 + var_a0) = 0;
                        var_a1 = *(u16 *)(D_801C5EC8 + (arg2 & 0xFF));
                        goto block_34;
                    }
                    goto block_36;
                }
            }
        }
    } else if ((u32) ((var_v1 - 0x25) & 0xFF) < 5U) {
        var_a0 = (arg1 & 0xFF) * 5;
        if (*(D_801C7081 + ((arg0 & 0xFF) * 5)) != *(D_801C7081 + var_a0)) {
            var_a0 = arg0 & 0xFF;
            if (((*(D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x78) && (var_a0 = arg0 & 0xFF, (*(D_801C7081 + ((arg1 & 0xFF) * 5)) == (u32)0x3C))) || ((var_v0 = 0 & 0xFF, (*(D_801C7081 + (var_a0 * 5)) == 0x3C)) && (var_v0 = 0 & 0xFF, (*(D_801C7081 + ((arg1 & 0xFF) * 5)) == 0)))) {
                var_v0_6 = arg1 & 0xFF;
                if (((u32) ((var_t0 - 5) & 0xFF) < 5U) || (var_v0_6 = arg1 & 0xFF, ((((u32) ((var_t0 - 0x10) & 0xFF) < 6U) | ((s8) var_t0 == 0x2B)) != 0))) {
                    var_a0 = var_v0_6 * 5;
                    var_v0_6 = arg2 & 0xFF;
                    goto block_33;
                }
                goto block_36;
            }
        } else {
            var_v0 = 0 & 0xFF;
            if ((u32) ((var_t0 - 0x20) & 0xFF) < 5U) {
                var_v0_6 = arg2 & 0xFF;
block_33:
                var_a1 = *(D_801C5EB0 + var_v0_6);
block_34:
                var_t1 = 1;
                *(D_801C7084 + var_a0) = var_a1;
                if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 4) {
                    *(D_801C7084 + var_a0) = var_a1 + 0x2E;
                }
                goto block_36;
            }
        }
    } else {
block_36:
        var_v0 = var_t1 & 0xFF;
    }
    return var_v0;
}

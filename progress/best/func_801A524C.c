/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_801C5EB0[];
extern char D_801C5ED0[];
extern char D_801C7081[];
extern char D_801C7084[];
extern void *D_801C7AB0;

s32 func_801A524C(s32 arg0, s32 arg1, s32 arg2) {
    char *__base_D_801C7081;
    char *__base_D_801C5EB0;
    s32 temp_v1;
    
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_2;
    register u8 var_a1;
    u8 var_t0;
    u8 var_v1;

    var_t1 = 0;
    if ((arg1 & 0xFF) == (*(u8 *)((char *)(D_801C7AB0) + 2))) {
        return 0;
    }
    temp_v1 = arg0 & 0xFF;
    if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 3) {
        var_t0 = *(D_801C7084 + ((arg0 & 0xFF) * 5));
        var_v1 = *(D_801C7084 + ((arg1 & 0xFF) * 5));
        var_v0_2 = var_v1 - 5;
    } else {
        var_t0 = *(D_801C7084 + ((arg0 & 0xFF) * 5)) - 0x2E;
        var_v0_2 = var_v1 - 5;
        var_v1 = *(D_801C7084 + ((arg1 & 0xFF) * 5)) - 0x2E;
    }
    if ((u32) (var_v0_2 & 0xFF) < 5U) {
        __base_D_801C7081 = D_801C7081;
        if (*(__base_D_801C7081 + ((arg0 & 0xFF) * 5)) != *(__base_D_801C7081 + ((arg1 & 0xFF) * 5))) {
            temp_v1 = arg0 & 0xFF;
            if (*(__base_D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x3C) {
                temp_v1 = (arg1 & 0xFF) * 5;
                var_v0_3 = arg0 & 0xFF;
                if (*(__base_D_801C7081 + temp_v1) == 0x78) {
                    if ((u32) ((var_t0 - 0x25) & 0xFF) < 5U) {
                        *(__base_D_801C7081 + temp_v1) = 0x3C;
                        var_a1 = *(D_801C5ED0 + (arg2 & 0xFF));
                        goto block_34;
                    }
                    goto block_36;
                }
            }
            var_v0 = 0 & 0xFF;
            if (*(__base_D_801C7081 + (temp_v1 * 5)) == 0) {
                temp_v1 = (arg1 & 0xFF) * 5;
                var_v0 = 0 & 0xFF;
                if (*(__base_D_801C7081 + temp_v1) == 0x3C) {
                    if ((u32) ((var_t0 - 0x25) & 0xFF) < 5U) {
                        *(__base_D_801C7081 + temp_v1) = 0;
                        var_a1 = *(D_801C5ED0 + (arg2 & 0xFF));
                        goto block_34;
                    }
                    goto block_36;
                }
            }
        } else {
            var_v0_4 = arg1 & 0xFF;
            if (((u32) ((var_t0 - 5) & 0xFF) < 5U) || (var_v0_4 = arg1 & 0xFF, ((((u32) ((var_t0 - 0xA) & 0xFF) < 6U) | ((s8) var_t0 == 0x2A)) != 0))) {
                temp_v1 = var_v0_4 * 5;
                *(__base_D_801C7081 + temp_v1) = 0x3C;
                var_a1 = *(D_801C5ED0 + (arg2 & 0xFF));
                goto block_34;
            }
            goto block_36;
        }
    } else if ((u32) ((var_v1 - 0x20) & 0xFF) < 5U) {
        temp_v1 = (arg1 & 0xFF) * 5;
        if (*(__base_D_801C7081 + ((arg0 & 0xFF) * 5)) != *(__base_D_801C7081 + temp_v1)) {
            temp_v1 = arg0 & 0xFF;
            if (((*(__base_D_801C7081 + ((arg0 & 0xFF) * 5)) == 0x78) && (temp_v1 = arg0 & 0xFF, (*(__base_D_801C7081 + ((arg1 & 0xFF) * 5)) == 0x3C))) || ((var_v0 = 0 & 0xFF, (*(__base_D_801C7081 + (temp_v1 * 5)) == 0x3C)) && (var_v0 = 0 & 0xFF, (*(__base_D_801C7081 + ((arg1 & 0xFF) * 5)) == 0)))) {
                var_v0_5 = arg1 & 0xFF;
                if (((u32) ((var_t0 - 5) & 0xFF) < 5U) || (var_v0_5 = arg1 & 0xFF, ((((u32) ((var_t0 - 0xA) & 0xFF) < 6U) | ((s8) var_t0 == 0x2A)) != 0))) {
                    temp_v1 = var_v0_5 * 5;
                    var_v0_6 = arg2 & 0xFF;
                    goto block_33;
                }
                goto block_36;
            }
        } else {
            var_v0 = 0 & 0xFF;
            if ((u32) ((var_t0 - 0x25) & 0xFF) < 5U) {
                var_v0_6 = arg2 & 0xFF;
__base_D_801C5EB0 = D_801C5EB0;
    block_33:
                var_a1 = *(__base_D_801C5EB0 + var_v0_6);
block_34:
                *(D_801C7084 + temp_v1) = var_a1;
                var_t1 = 1;
                if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 4) {
                    *(D_801C7084 + temp_v1) = var_a1 + 0x2E;
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

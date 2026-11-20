/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern u8 D_801C7469;
extern void *D_801C7AB0;
extern char D_801C7AD8[];

u8 func_801C5528(u8 *arg0, u8 *arg1, s32 arg2) {
    int temp_v0;
    unsigned var_a0_2;
    register u8 var_a3;
    u8 var_a0;
    register u8 temp_v1;
    u8 var_v0;
u8 __repair_result_var_v0;

    var_a3 = 0;
    temp_v0 = arg2 & 0xFF;
    if (D_801C7469 == temp_v0) {
        if (D_801C7469 == 0) {
            var_a0 = *arg0;
            var_a3 = *arg1 - 1;
            goto block_18;
        }
        if ((arg2 & 0xFF) == 1) {
            var_a0 = *arg0 - 1;
            goto block_17;
        }
        if ((arg2 & 0xFF) == 2) {/*__repair_loop_weight*/__repair_rows: {do {do {
            var_a0 = *arg0;} while (0);} while (0);}
if (0) goto __repair_rows;
            var_a3 = *arg1 + 1;
            goto block_18;
        }
        var_a0_2 = 0 << 0x18;
        if ((arg2 & 0xFF) == 3) {
            var_a0 = *arg0 + 1;
            goto block_17;
        }
    } else {
        if (!temp_v0) {
            var_a0 = *arg0;
            var_a3 = *arg1 - 2;
            goto block_18;
        }
        if ((arg2 & 0xFF) == 1) {
            var_a0 = *arg0 - 2;
            goto block_17;
        }
        if ((arg2 & 0xFF) == 2) {
            var_a0 = *arg0;
            var_a3 = *arg1 + 2;
            goto block_18;
        }
        var_a0_2 = 0 << 0x18;
        if ((arg2 & 0xFF) == 3) {
            var_a0 = *arg0 + 2;
block_17:
            var_a3 = *arg1;
block_18:
            var_a0_2 = var_a0 << 0x18;
        }
    }
    temp_v1 = *(D_801C7AD8 + (((s8) var_a3 * 0x18) + (var_a0_2 >> 0x18)));
    var_v0 = temp_v1;
    if (temp_v1 == 0xFF) {
        *arg0 = 0x7F;
        *arg1 = 0x7F;
        __repair_result_var_v0 = (*(u8 *)((char *)(D_801C7AB0) + 2));
    }
    return __repair_result_var_v0;
}

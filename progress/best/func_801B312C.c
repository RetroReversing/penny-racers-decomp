#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern void *D_801C7AB0;

void func_801B312C(void *arg0, void *arg1, s32 arg2, f32 arg3, f32 arg4) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fv0;
    f32 var_fv0_2;
f32 __repair_phase_var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    f32 var_fv1_4;
    s32 temp_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_8;
    u32 temp_v0;
    u32 var_v1;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 var_v0_3;
    u8 var_v0_7;
    void *var_a1;
    void *tbl;

    tbl = D_801C7AB0;
    var_a1 = arg1;
    var_t0 = 0;
    temp_v0 = arg2 & 0xFF;
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        temp_a3 = arg2 & 0xFF;
        do {
            temp_v0_2 = M2C_FIELD(arg0, u8 *, 0);
            if (temp_v0_2 == 0) {
                if (var_v1 == 1) {
                    M2C_FIELD(var_a1, f32 *, 0) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f) + 75.0f + (arg3 - 75.0f));
                } else {
                    switch (temp_a3) {
case 0: break;

                    case 4:
                        var_fv1 = (f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f;
                        var_v0 = var_t0 & 0xFF;
                        goto block_11;
                    case 3:
                        var_fv1 = (f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f;
                        var_fv0 = (f32) (var_t0 & 0xFF) * 75.0f;
                        goto block_12;
                    case 2:
                        var_fv1 = (f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f;
                        var_v0 = (var_t0 & 0xFF) + 1;
block_11:
                        var_fv0 = (f32) var_v0 * 50.0f;
block_12:
                        M2C_FIELD(var_a1, f32 *, 0) = (f32) (var_fv1 + var_fv0 + (arg3 - 75.0f));
                        break;
                    }
                }
                if (M2C_FIELD(tbl, u8 *, 1) == 5) {
                    M2C_FIELD(var_a1, f32 *, 4) = (f32) M2C_FIELD(((M2C_FIELD(tbl, u8 *, 2) * 5) + arg0), u8 *, -4);
                    M2C_FIELD(var_a1, f32 *, 8) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 3) + 1 * 400.0f) + (arg4 - 180.0f));
                } else {
                    M2C_FIELD(var_a1, f32 *, 4) = (f32) M2C_FIELD(arg0, u8 *, 1);
                    M2C_FIELD(var_a1, f32 *, 8) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f) + (arg4 - 180.0f));
                }
                M2C_FIELD(var_a1, s32 *, 0xC) = 0x43340000;
            } else if (temp_v0_2 == 1) {
                temp_fv1 = arg3 - 170.0f;
                if (M2C_FIELD(tbl, u8 *, 1) == 5) {
                    M2C_FIELD(var_a1, f32 *, 0) = (f32) (((f32) (M2C_FIELD(arg0, s8 *, 2) + 1) * 400.0f) + (arg3 - 170.0f));
                    var_v0_3 = M2C_FIELD(((M2C_FIELD(tbl, u8 *, 2) * 5) + arg0), u8 *, -4);
                } else {
                    M2C_FIELD(var_a1, f32 *, 0) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f) + (arg3 - 170.0f));
                    var_v0_3 = M2C_FIELD(arg0, u8 *, 1);
                }
                M2C_FIELD(var_a1, f32 *, 4) = (f32) var_v0_3;
                switch (temp_a3) {
                case 1:
                    M2C_FIELD(var_a1, f32 *, 8) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f) + 75.0f + (arg4 - 75.0f));
                    break;
                case 2:
                    var_fv1_2 = (f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f;
                    var_v0_4 = (var_t0 & 0xFF) + 1;
block_29:
                    var_fv0_2 = (f32) var_v0_4 * 50.0f;
                    M2C_FIELD(var_a1, f32 *, 8) = (f32) (var_fv1_2 + var_fv0_2 + (arg4 - 75.0f));
                    break;
                case 3:
                    var_fv1_2 = (f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f;
                    __repair_phase_var_fv0_2 = (f32) (var_t0 & 0xFF) * 75.0f;
                    M2C_FIELD(var_a1, f32 *, 8) = (f32) (var_fv1_2 + __repair_phase_var_fv0_2 + (arg4 - 75.0f));
                    break;
                case 4:
                    var_fv1_2 = (f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f;
                    var_v0_4 = var_t0 & 0xFF;
                    goto block_29;
                }
                M2C_FIELD(var_a1, s32 *, 0xC) = 0x43870000;
            } else {
                temp_v0_3 = M2C_FIELD(arg0, u8 *, 0);
                if (temp_v0_3 == 2) {
                    switch (temp_a3) {
                    case 1:
                        M2C_FIELD(var_a1, f32 *, 0) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f) + 75.0f + (arg3 - 75.0f));
                        break;
                    case 2:
                        var_fv1_3 = (f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f;
                        var_v0_5 = (var_t0 & 0xFF) + 1;
block_41:
                        var_fv0_3 = (f32) var_v0_5 * 50.0f;
block_42:
                        M2C_FIELD(var_a1, f32 *, 0) = (f32) (var_fv1_3 + var_fv0_3 + (arg3 - 75.0f));
                        break;
                    case 3:
                        var_fv1_3 = (f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f;
                        var_fv0_3 = (f32) (var_t0 & 0xFF) * 75.0f;
                        goto block_42;
                    case 4:
                        var_fv1_3 = (f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f;
                        var_v0_5 = var_t0 & 0xFF;
                        goto block_41;
                    }
                    if (M2C_FIELD(tbl, u8 *, 1) == 5) {
                        M2C_FIELD(var_a1, f32 *, 4) = (f32) M2C_FIELD(((M2C_FIELD(tbl, u8 *, 2) * 5) + arg0), u8 *, -4);
                        M2C_FIELD(var_a1, f32 *, 8) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 3) - 1 * 400.0f) + (arg4 + 180.0f));
                    } else {
                        M2C_FIELD(var_a1, f32 *, 4) = (f32) M2C_FIELD(arg0, u8 *, 1);
                        M2C_FIELD(var_a1, f32 *, 8) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f) + (arg4 + 180.0f));
                    }
                    M2C_FIELD(var_a1, s32 *, 0xC) = 0;
                } else if (temp_v0_3 == 3) {
                    temp_fv1_2 = arg3 + 170.0f;
                    if (M2C_FIELD(tbl, u8 *, 1) == 5) {
                        M2C_FIELD(var_a1, f32 *, 0) = (f32) (((f32) (M2C_FIELD(arg0, s8 *, 2) - 1) * 400.0f) + temp_fv1_2);
                        var_v0_7 = M2C_FIELD(((M2C_FIELD(tbl, u8 *, 2) * 5) + arg0), u8 *, -4);
                    } else {
                        M2C_FIELD(var_a1, f32 *, 0) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 2) * 400.0f) + temp_fv1_2);
                        var_v0_7 = M2C_FIELD(arg0, u8 *, 1);
                    }
                    M2C_FIELD(var_a1, f32 *, 4) = (f32) var_v0_7;
                    switch ((arg2 & 0xFF)) {
                    case 1:
                        M2C_FIELD(var_a1, f32 *, 8) = (f32) (((f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f) + 75.0f + (arg4 - 75.0f));
                        break;
                    case 2:
                        var_fv1_4 = (f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f;
                        var_v0_8 = (var_t0 & 0xFF) + 1;
block_59:
                        var_fv0_4 = (f32) var_v0_8 * 50.0f;
block_60:
                        M2C_FIELD(var_a1, f32 *, 8) = (f32) (var_fv1_4 + var_fv0_4 + (arg4 - 75.0f));
                        break;
                    case 3:
                        var_fv1_4 = (f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f;
                        var_fv0_4 = (f32) (var_t0 & 0xFF) * 75.0f;
                        goto block_60;
                    case 4:
                        var_fv1_4 = (f32) M2C_FIELD(arg0, s8 *, 3) * 400.0f;
                        var_v0_8 = var_t0 & 0xFF;
                        goto block_59;
                    }
                    M2C_FIELD(var_a1, s32 *, 0xC) = 0x42B40000;
                }
            }/*__repair_loop_weight*/do {
            var_t0 += 1;} while (0);
            var_v1 = arg2 & 0xFF;
            var_a1 += 0x10;
        } while ((u32) (var_t0 & 0xFF) < var_v1);
    }
}

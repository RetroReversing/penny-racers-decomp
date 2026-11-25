/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_800DE41C(); /* extern */
extern s8 D_801C6BAC;
extern M2C_UNK D_803157D4;
extern M2C_UNK D_80315808;
extern M2C_UNK D_8031583C;
extern M2C_UNK D_80315870;
extern M2C_UNK D_803159DC;
extern M2C_UNK D_80315A10;
extern M2C_UNK D_80315A44;
extern M2C_UNK func_8013AE60;

void func_801B7970(void *arg0, u8 *arg1) {
  int __repair_integer_one;
  s32 temp_v0_6_b1;
    f32 __repair_pin_0;
    f32 __repair_pin_1;
    f32 __repair_pin_2;
    f32 __repair_pin_3;
    f32 __repair_pin_4;
    f32 __repair_pin_5;
    f32 __repair_pin_6;
    f32 __repair_pin_7;
    f32 __repair_pin_8;
    f32 __repair_pin_9;
    f32 __repair_pin_10;
    f32 __repair_pin_11;
    f32 __repair_pin_12;
    f32 __repair_pin_13;
    f32 __repair_pin_14;
    f32 __repair_pin_15;
    f32 __repair_pin_16;
    void *sp4C;
    M2C_UNK var_a2;
    M2C_UNK var_a3;
    f32 temp_fs0;
    f32 temp_fs0_10;
    f32 temp_fs0_11;
    f32 temp_fs0_12;
    f32 temp_fs0_13;
    f32 temp_fs0_14;
    f32 temp_fs0_15;
    f32 temp_fs0_16;
    f32 temp_fs0_17;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs0_9;
    f32 temp_fs1;
    f32 temp_fs1_10;
    f32 temp_fs1_11;
    f32 temp_fs1_12;
    f32 temp_fs1_13;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs1_6;
    f32 temp_fs1_7;
    f32 temp_fs1_8;
    f32 temp_fs1_9;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s6;
    s8 temp_v0_10;
    s8 temp_v0_11;
    s8 temp_v0_12;
    s8 temp_v0_13;
    s8 temp_v0_14;
    s8 temp_v0_15;
    s8 temp_v0_16;
    s8 temp_v0_17;
    s8 temp_v0_18;
    s8 temp_v0_19;
    s8 temp_v0_20;
    s8 temp_v0_21;
    s8 temp_v0_22;
    s8 temp_v0_23;
    s8 temp_v0_24;
    s8 temp_v0_25;
    s8 temp_v0_26;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v0_6;
    s8 temp_v0_7;
    s8 temp_v0_8;
    s8 temp_v0_9;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 var_a0;
    void *temp_v1;

    sp4C = arg0;
    D_801C6BAC = 0;
    var_s6 = 0;
    temp_v0 = M2C_FIELD(sp4C, u8 *, 2);
    var_a0 = temp_v0;
    if (temp_v0 != 0) {
        __repair_integer_one = 1;
  var_s0 = 0 & 0xFF;
        do {
            temp_v1 = (var_s0 * 5) + arg1;
            temp_fs3 = ((f32) M2C_FIELD(temp_v1, s8 *, 2) * (__repair_pin_0 = 400.0f)) + (__repair_pin_0 = 400.0f);
            temp_fs4 = (f32) M2C_FIELD(temp_v1, u8 *, 1);
            temp_v0_2 = M2C_FIELD(temp_v1, s8 *, 4);
            temp_fs5 = ((f32) M2C_FIELD(temp_v1, s8 *, 3) * (__repair_pin_0 = 400.0f)) + (__repair_pin_0 = 400.0f);
            if (((temp_v0_2 == 0) | (temp_v0_2 == 0x2E)) != 0) {
                if (var_s0 != (var_a0 - 1)) {
                    var_s6 += 1;
                } else if (M2C_FIELD(sp4C, u8 *, 1) != 5) {
                    var_s6 += 1;
                } else {
                    temp_v1_2 = *arg1;
                    if (temp_v1_2 == 1) {
                        temp_fs0 = temp_fs3 + -196.0f;
                        temp_fs1 = temp_fs4 + (__repair_pin_1 = 0.0f);
                        do { func_800DE41C(0, var_s0, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs0, temp_fs1, temp_fs5 + (__repair_pin_2 = 116.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, var_s0, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs0, temp_fs1, temp_fs5 + -116.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, var_s0, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs0, temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs5 + (__repair_pin_1 = 0.0f), 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f); } while (0);
                        var_a1 = var_s0;
                        var_a2 = 2;
                        var_a3 = 0;
                        goto block_103;
                    }
                    if (temp_v1_2 != 3) {
                        var_s6 += 1;
                    } else {
                        temp_s0 = var_s6 & 0xFF;
                        temp_fs0_2 = temp_fs3 + (__repair_pin_4 = 196.0f);
                        temp_fs1_2 = temp_fs4 + (__repair_pin_1 = 0.0f);
                        func_800DE41C(0, temp_s0, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs0_2, temp_fs1_2, temp_fs5 + (__repair_pin_2 = 116.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, temp_s0, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs0_2, temp_fs1_2, temp_fs5 + -116.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, temp_s0, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs0_2, temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs5 + (__repair_pin_1 = 0.0f), 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
                        goto block_103_tail;
                    }
                }
            } else {
                var_a1 = var_s6 & 0xFF;
                temp_v0_3 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                if (((temp_v0_3 == 2) | (temp_v0_3 == 0x30)) != 0) {
                    var_a3 = 0;
                    var_a2 = 1;
                    goto block_103;
                }
                temp_s0_2 = var_s6 & 0xFF;
                if (M2C_FIELD(((temp_s0_2 * 5) + arg1), s8 *, 4) == 3) {
                    temp_fs1_3 = temp_fs4 + (__repair_pin_5 = 1.0f);
                    func_800DE41C(0, temp_s0_2, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs1_3, temp_fs5 + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    temp_fs0_3 = temp_fs5 + -10.0f;
                    func_800DE41C(0, temp_s0_2, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs1_3, temp_fs0_3, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    func_800DE41C(0, temp_s0_2, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs1_3, temp_fs0_3, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    var_a1 = temp_s0_2;
                    goto block_102;
                }
                temp_v0_4 = M2C_FIELD(((temp_s0_2 * 5) + arg1), s8 *, 4);
                if (((temp_v0_4 == 4) | (temp_v0_4 == 0x32)) != 0) {
                    temp_fs1_4 = temp_fs4 + (__repair_pin_5 = 1.0f);
                    func_800DE41C(0, temp_s0_2, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs1_4, temp_fs5 + (__repair_pin_8 = 20.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    func_800DE41C(0, temp_s0_2, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs1_4, temp_fs5 + 73.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    func_800DE41C(0, temp_s0_2, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs1_4, temp_fs5 + 45.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    var_a1 = temp_s0_2;
                    goto block_102;
                }
                temp_s0_3 = var_s6 & 0xFF;
                temp_v0_5 = M2C_FIELD(((temp_s0_3 * 5) + arg1), s8 *, 4);
                var_a1 = var_s6 & 0xFF;
                if (((temp_v0_5 == 5) | (temp_v0_5 == 0x33)) != 0) {
                    if (temp_s0_3 != (M2C_FIELD(sp4C, u8 *, 2) - 1)) {
                        var_s6 += 1;
                    } else if (M2C_FIELD(sp4C, u8 *, 1) != 5) {
                        var_s6 += 1;
                    } else {
                        if (*arg1 == 0) {
                            temp_fs1_5 = temp_fs4 + (__repair_pin_1 = 0.0f);
                            temp_fs0_4 = temp_fs5 + -196.0f;
                            func_800DE41C(0, temp_s0_3, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + (__repair_pin_2 = 116.0f), temp_fs1_5, temp_fs0_4, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_3, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + -116.0f, temp_fs1_5, temp_fs0_4, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_3, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs3 + (__repair_pin_1 = 0.0f), temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs0_4, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_3;
                            var_a2 = 2;
                            var_a3 = 0;
                            goto block_103;
                        }
                        if (*arg1 != 2) {
                            var_s6 += 1;
                        } else {
                            temp_s0_4 = var_s6 & 0xFF;
                            temp_fs1_6 = temp_fs4 + (__repair_pin_1 = 0.0f);
                            temp_fs0_5 = temp_fs5 + (__repair_pin_4 = 196.0f);
                            func_800DE41C(0, temp_s0_4, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + (__repair_pin_2 = 116.0f), temp_fs1_6, temp_fs0_5, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_4, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + -116.0f, temp_fs1_6, temp_fs0_5, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_4, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs3 + (__repair_pin_1 = 0.0f), temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs0_5, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_4;
                            var_a2 = 2;
                            var_a3 = 0;
                            goto block_103;
                        }
                    }
                } else {
                    temp_v0_6 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                    if (((temp_v0_6 == 7) | (temp_v0_6 == 0x35)) != 0) {
                        var_a2 = 1;
                        var_a3 = 0;
                        goto block_103;
                    }
                    temp_s0_5 = var_s6 & 0xFF;
                    temp_v0_6_b1 = M2C_FIELD(((temp_s0_5 * 5) + arg1), s8 *, 4);
                    if (((temp_v0_6_b1 == 8) | (temp_v0_6_b1 == 0x36)) != 0) {
                        temp_fs1_7 = temp_fs4 + (__repair_pin_1 = 0.0f);
                        func_800DE41C(0, temp_s0_5, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs3 + -10.0f, temp_fs1_7, temp_fs5 + (__repair_pin_6 = 50.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, temp_s0_5, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs3 + -45.0f, temp_fs1_7, temp_fs5 + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, temp_s0_5, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs3 + -70.0f, temp_fs1_7, temp_fs5 + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        var_a1 = temp_s0_5;
                        var_a2 = 1;
                        var_a3 = 0;
                        goto block_103;
                    }
                    temp_v0_8 = M2C_FIELD(((temp_s0_5 * 5) + arg1), s8 *, 4);
                    if (((temp_v0_8 == 9) | (temp_v0_8 == 0x37)) != 0) {
                        temp_fs0_6 = temp_fs3 + (__repair_pin_8 = 20.0f);
                        temp_fs1_8 = temp_fs4 + (__repair_pin_5 = 1.0f);
                        func_800DE41C(0, temp_s0_5, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs0_6, temp_fs1_8, temp_fs5 + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, temp_s0_5, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs0_6, temp_fs1_8, temp_fs5 + (__repair_pin_7 = 150.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, temp_s0_5, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs3 + (__repair_pin_9 = 47.0f), temp_fs1_8, temp_fs5 + (__repair_pin_6 = 50.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                        var_a1 = temp_s0_5;
                        goto block_102;
                    }
                    var_a1 = var_s6 & 0xFF;
                    temp_v0_9 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                    if (((temp_v0_9 == 0xB) | (temp_v0_9 == 0x39)) != 0) {
                        goto block_102;
                    }
                    temp_v0_10 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                    if (((temp_v0_10 == 0xE) | (temp_v0_10 == 0x3C)) != 0) {
                        goto block_102;
                    }
                    temp_v0_11 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                    if (((temp_v0_11 == 0x11) | (temp_v0_11 == 0x3F)) == 0) {
                        var_a1 = var_s6 & 0xFF;
                        temp_v0_12 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_12 == 0x14) | (temp_v0_12 == 0x42)) != 0) {
                            goto block_102;
                        }
                        temp_v0_13 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                        var_a2 = 1;
                        if (((temp_v0_13 == 0x18) | (temp_v0_13 == 0x46)) != 0) {
                            var_a3 = 0;
                            goto block_103;
                        }
                        temp_s0_6 = var_s6 & 0xFF;
                        if (M2C_FIELD(((temp_s0_6 * 5) + arg1), s8 *, 4) == 0x19) {
                            func_800DE41C(0, temp_s0_6, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + (__repair_pin_11 = 10.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_6, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + (__repair_pin_13 = 76.5f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_6, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs4 + (__repair_pin_14 = 7.5f), temp_fs5 + (__repair_pin_15 = 48.5f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_6;
                            goto block_102;
                        }
                        temp_v0_14 = M2C_FIELD(((temp_s0_6 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_14 == 0x1A) | (temp_v0_14 == 0x48)) != 0) {
                            func_800DE41C(0, temp_s0_6, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + (__repair_pin_8 = 20.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_6, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + (__repair_pin_9 = 47.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_6, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs4 + (__repair_pin_14 = 7.5f), temp_fs5 + 74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_6;
                            goto block_102;
                        }
                        var_a1 = var_s6 & 0xFF;
                        temp_v0_15 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                        var_a2 = 1;
                        if (((temp_v0_15 == 0x1D) | (temp_v0_15 == 0x4B)) != 0) {
                            var_a3 = 0;
                            goto block_103;
                        }
                        temp_s0_7 = var_s6 & 0xFF;
                        if (M2C_FIELD(((temp_s0_7 * 5) + arg1), s8 *, 4) == 0x1E) {
                            func_800DE41C(0, temp_s0_7, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            temp_fs0_7 = temp_fs5 + -10.0f;
                            func_800DE41C(0, temp_s0_7, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs0_7, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_7, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315870, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs0_7, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_7;
                            goto block_102;
                        }
                        temp_v0_16 = M2C_FIELD(((temp_s0_7 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_16 == 0x1F) | (temp_v0_16 == 0x4D)) != 0) {
                            func_800DE41C(0, temp_s0_7, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + -76.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_7, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + -20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_7, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315808, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs5 + 14.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_7;
                            goto block_102;
                        }
                        var_a1 = var_s6 & 0xFF;
                        temp_v0_17 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                        var_a2 = 1;
                        if (((temp_v0_17 == 0x22) | (temp_v0_17 == 0x50)) != 0) {
                            var_a3 = 0;
                            goto block_103;
                        }
                        temp_s0_8 = var_s6 & 0xFF;
                        temp_v0_18 = M2C_FIELD(((temp_s0_8 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_18 == 0x23) | (temp_v0_18 == 0x51)) != 0) {
                            temp_fs0_8 = temp_fs3 + 24.0f;
                            func_800DE41C(0, temp_s0_8, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs0_8, temp_fs4 + (__repair_pin_14 = 7.5f), temp_fs5 + (__repair_pin_7 = 150.0f), 0x41087AE1, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_8, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs0_8, temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs5 + -150.0f, 0x41087AE1, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_8, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs3 + -10.0f, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + (__repair_pin_6 = 50.0f), 0x41087AE1, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_8;
                            var_a2 = 1;
                            var_a3 = 0;
                            goto block_103;
                        }
                        temp_v0_19 = M2C_FIELD(((temp_s0_8 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_19 == 0x24) | (temp_v0_19 == 0x52)) != 0) {
                            temp_fs0_9 = temp_fs3 + -20.0f;
                            func_800DE41C(0, temp_s0_8, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs0_9, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + (__repair_pin_6 = 50.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_8, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs0_9, temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs5 + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_8, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs3 + -48.5f, temp_fs4 + (__repair_pin_14 = 7.5f), temp_fs5 + (__repair_pin_7 = 150.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_8;
                            goto block_102;
                        }
                        var_a1 = var_s6 & 0xFF;
                        temp_v0_20 = M2C_FIELD(((var_a1 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_20 == 0x27) | (temp_v0_20 == 0x55)) != 0) {
                            var_a2 = 1;
                            var_a3 = 0;
                            goto block_103;
                        }
                        temp_s0_9 = var_s6 & 0xFF;
                        temp_v0_21 = M2C_FIELD(((temp_s0_9 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_21 == 0x28) | (temp_v0_21 == 0x56)) != 0) {
                            temp_fs0_10 = temp_fs3 + (__repair_pin_11 = 10.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs0_10, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + -50.0f, 0xC1087AE1, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs0_10, temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs5 + (__repair_pin_7 = 150.0f), 0xC1087AE1, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0, 0x52, 0xFF, &D_803159DC, &func_8013AE60, 0, temp_fs3 + (__repair_pin_9 = 47.0f), temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + (__repair_pin_6 = 50.0f), 0xC1087AE1, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_9;
                            var_a2 = 1;
                            var_a3 = 0;
                            goto block_103;
                        }
                        temp_v0_22 = M2C_FIELD(((temp_s0_9 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_22 == 0x29) | (temp_v0_22 == 0x57)) != 0) {
                            temp_fs0_11 = temp_fs3 + (__repair_pin_8 = 20.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs0_11, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs0_11, temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs5 + (__repair_pin_7 = 150.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0x80, 0x52, 0xFF, &D_8031583C, &func_8013AE60, 0, temp_fs3 + 48.0f, temp_fs4 + (__repair_pin_14 = 7.5f), temp_fs5 + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            var_a1 = temp_s0_9;
                            goto block_102;
                        }
                        temp_v0_23 = M2C_FIELD(((temp_s0_9 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_23 == 0x2A) | (temp_v0_23 == 0x58)) != 0) {
                            temp_fs0_12 = temp_fs4 + (__repair_pin_1 = 0.0f);
                            temp_fs1_9 = temp_fs5 + (__repair_pin_4 = 196.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + (__repair_pin_2 = 116.0f), temp_fs0_12, temp_fs1_9, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + -116.0f, temp_fs0_12, temp_fs1_9, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_9, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs3 + (__repair_pin_1 = 0.0f), temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs1_9, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            if (temp_s0_9 == 0) {
                                var_a1 = 0;
                                var_a2 = 2;
                                var_a3 = 0;
                            } else {
                                var_a1 = var_s6 & 0xFF;
                                var_a2 = 2;
                                var_a3 = 0;
                            }
                            goto block_103;
                        }
                        temp_s0_10 = var_s6 & 0xFF;
                        temp_v0_24 = M2C_FIELD(((temp_s0_10 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_24 == 0x2B) | (temp_v0_24 == 0x59)) != 0) {
                            temp_fs0_13 = temp_fs4 + (__repair_pin_1 = 0.0f);
                            temp_fs1_10 = temp_fs5 + -196.0f;
                            func_800DE41C(0, temp_s0_10, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + (__repair_pin_2 = 116.0f), temp_fs0_13, temp_fs1_10, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_10, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs3 + -116.0f, temp_fs0_13, temp_fs1_10, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_10, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs3 + (__repair_pin_1 = 0.0f), temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs1_10, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            if (temp_s0_10 == 0) {
                                var_a1 = 0;
                                var_a2 = 2;
                                var_a3 = 0;
                            } else {
                                var_a1 = var_s6 & 0xFF;
                                var_a2 = 2;
                                var_a3 = 0;
                            }
                            goto block_103;
                        }
                        temp_v0_25 = M2C_FIELD(((temp_s0_10 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_25 == 0x2C) | (temp_v0_25 == 0x5A)) != 0) {
                            temp_fs1_11 = temp_fs3 + (__repair_pin_4 = 196.0f);
                            temp_fs0_14 = temp_fs4 + (__repair_pin_1 = 0.0f);
                            func_800DE41C(0, temp_s0_10, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs1_11, temp_fs0_14, temp_fs5 + (__repair_pin_2 = 116.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_10, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs1_11, temp_fs0_14, temp_fs5 + -116.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_10, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs1_11, temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs5 + (__repair_pin_1 = 0.0f), 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
                            if (temp_s0_10 == 0) {
                                var_a1 = 0;
                                var_a2 = 2;
                                var_a3 = 0;
                            } else {
                                var_a1 = var_s6 & 0xFF;
                                var_a2 = 2;
                                var_a3 = 0;
                            }
                            goto block_103;
                        }
                        temp_s0_11 = var_s6 & 0xFF;
                        temp_v0_26 = M2C_FIELD(((temp_s0_11 * 5) + arg1), s8 *, 4);
                        if (((temp_v0_26 == 0x2D) | (temp_v0_26 == 0x5B)) != 0) {
                            temp_fs1_12 = temp_fs3 + -196.0f;
                            temp_fs0_15 = temp_fs4 + (__repair_pin_1 = 0.0f);
                            func_800DE41C(0, temp_s0_11, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs1_12, temp_fs0_15, temp_fs5 + (__repair_pin_2 = 116.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_11, __repair_integer_one, 0x80, 0x52, 0xFF, &D_80315A10, &func_8013AE60, 0, temp_fs1_12, temp_fs0_15, temp_fs5 + -116.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, temp_s0_11, __repair_integer_one, 0, 0x52, 0xFF, &D_80315A44, &func_8013AE60, 0, temp_fs1_12, temp_fs4 + (__repair_pin_3 = 2.0f), temp_fs5 + (__repair_pin_1 = 0.0f), 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
                            if (temp_s0_11 == 0) {
                                var_a1 = 0;
                                var_a2 = 2;
                                var_a3 = 0;
                            } else {
                                var_a1 = var_s6 & 0xFF;
                                var_a2 = 2;
                                var_a3 = 0;
                            }
                            goto block_103;
                        }
                        var_s1 = var_s6 & 0xFF;
                        if (M2C_FIELD(((var_s1 * 5) + arg1), s8 *, 4) == 0x31) {
                            temp_fs1_13 = temp_fs4 + (__repair_pin_5 = 1.0f);
                            func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs1_13, temp_fs5 + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            temp_fs0_16 = temp_fs5 + -10.0f;
                            func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs1_13, temp_fs0_16, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs1_13, temp_fs0_16, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            goto block_100;
                        }
                        if (M2C_FIELD(((var_s1 * 5) + arg1), s8 *, 4) != 0x47) {
                            var_s1 = var_s6 & 0xFF;
                            if (M2C_FIELD(((var_s1 * 5) + arg1), s8 *, 4) != 0x4C) {
                                var_s6 += 1;
                            } else {
                                func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                                temp_fs0_17 = temp_fs5 + -10.0f;
                                func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs0_17, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                                func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs4 + (__repair_pin_16 = 52.5f), temp_fs0_17, 0, 0, 0, 1.0f, 1.0f, 1.0f);
block_100:
                                goto block_101;
                            }
                        } else {
                            func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + (__repair_pin_6 = 50.0f), temp_fs4 + (__repair_pin_10 = 22.5f), temp_fs5 + (__repair_pin_11 = 10.0f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + -50.0f, temp_fs4 + (__repair_pin_12 = 37.5f), temp_fs5 + (__repair_pin_13 = 76.5f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
                            func_800DE41C(0, var_s1, __repair_integer_one, 0x80, 0x52, 0xFF, &D_803157D4, &func_8013AE60, 0, temp_fs3 + (__repair_pin_7 = 150.0f), temp_fs4 + (__repair_pin_14 = 7.5f), temp_fs5 + (__repair_pin_15 = 48.5f), 0, 0, 0, 1.0f, 1.0f, 1.0f);
block_101:
                            var_a1 = var_s1;
                            goto block_102;
                        }
                    } else {
block_102:
                        var_a2 = 1;
                        var_a3 = 0x80;
goto block_103;
block_103_tail:
                        var_a1 = temp_s0; var_a2 = 2; var_a3 = 0;
block_103:
                        var_s6 += 1;
                        func_800DE41C(0, temp_s0, var_a2, var_a3);
                    }
                }
            }
            var_a0 = M2C_FIELD(sp4C, u8 *, 2);
            var_s0 = var_s6 & 0xFF;
        } while ((u32) (var_s6 & 0xFF) < var_a0);
    }
}

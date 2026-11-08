/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1 -fno-schedule-insns -g3, tried by autopilot */
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

M2C_UNK func_8002C410(M2C_UNK *);                   /* extern */
M2C_UNK func_800341C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_800DE2E0();                            /* extern */
M2C_UNK func_800DE38C();                            /* extern */
M2C_UNK func_800E1728();                            /* extern */
M2C_UNK func_80143D70();                            /* extern */
M2C_UNK func_80143F68();                            /* extern */
M2C_UNK func_801441E0();                            /* extern */
M2C_UNK func_80144800();                            /* extern */
M2C_UNK func_80192670();                            /* extern */
M2C_UNK func_801B3C74();                            /* extern */
M2C_UNK func_801D7F60();                            /* extern */
M2C_UNK func_801E0B98();                            /* extern */
M2C_UNK func_801E0F08();                            /* extern */
M2C_UNK func_801F93FC(void *);                      /* extern */
M2C_UNK func_801FD3B4();                            /* extern */
M2C_UNK func_801FD528();                            /* extern */
M2C_UNK func_8022132C(void *);                      /* extern */
M2C_UNK func_8022E6B0();                            /* extern */
M2C_UNK func_8022F0D8();                            /* extern */
M2C_UNK func_8022F0E0();                            /* extern */
M2C_UNK func_8022F2F8();                            /* extern */
M2C_UNK func_80232480();                            /* extern */
M2C_UNK func_80232818();                            /* extern */
s32 osGetTime();                                    /* extern */
extern s8 D_80046830;
extern u8 D_80046831;
extern u8 D_80046832;
extern s32 D_80046834;
extern s32 D_80046838;
extern s32 D_8006E790;
extern u32 D_8006E794;
extern u16 D_8006F9E8;
extern M2C_UNK D_8006FB38;
extern u16 D_8006FE58;
extern u16 D_80072BDC;
extern M2C_UNK D_80092C30;
extern u8 D_801E4420;
extern s32 D_801E99C0;
extern M2C_UNK D_8022A770;

void func_80025DE0(s32 arg0) {
    s32 temp_ret;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;

    func_800341C0(0, 0);
    if (D_80046838 == 0) {
        func_801D7F60();
    }
    func_800E1728();
    temp_v1 = D_8006F9E8 & 0xFFFF;
    if (temp_v1 != 0x13) {
        if (temp_v1 < 0x14) {
            if (temp_v1 != 8) {
                if (temp_v1 < 9) {
                    if (temp_v1 != 1) {
                        var_v0 = arg0 < 2;
                        if (temp_v1 >= 2) {
                            if (temp_v1 != 2) {
                                var_v0 = arg0 < 2;
                                if (temp_v1 != 3) {

                                } else {
                                    func_801FD528();
                                    goto block_50;
                                }
                            } else {
                                func_801FD3B4();
                                D_8006F9E8 = 3;
                                var_v0 = arg0 < 2;
                            }
                        }
                    } else {
                        D_8006F9E8 = 0x12;
                        var_v0 = arg0 < 2;
                    }
                } else if (temp_v1 != 0xA) {
                    if (temp_v1 >= 0xA) {
                        if (temp_v1 != 0xB) {
                            var_v0 = arg0 < 2;
                            if (temp_v1 != 0x12) {

                            } else {
                                func_8022F0E0();
                                D_8006F9E8 = 0x13;
                                var_v0 = arg0 < 2;
                            }
                        } else {
                            func_80144800();
                            goto block_50;
                        }
                    } else {
                        func_80143F68();
                        goto block_50;
                    }
                } else {
                    func_801441E0();
                    D_8006F9E8 = 0xB;
                    var_v0 = arg0 < 2;
                }
            } else {
                func_80143D70();
                D_8006F9E8 = 9;
                var_v0 = arg0 < 2;
            }
        } else if (temp_v1 != 0x18) {
            if (temp_v1 < 0x19) {
                if (temp_v1 != 0x15) {
                    if (temp_v1 >= 0x15) {
                        if (temp_v1 != 0x16) {
                            var_v0 = arg0 < 2;
                            if (temp_v1 != 0x17) {

                            } else {
                                func_80192670();
                                goto block_50;
                            }
                        } else {
                            func_801B3C74();
                            D_8006F9E8 = 0x17;
                            func_8002C410(&D_8006FB38);
                            var_v0 = arg0 < 2;
                        }
                    } else {
                        func_8022E6B0();
                        D_8006F9E8 = 0x15;
                        var_v0 = arg0 < 2;
                    }
                } else {
                    func_8022F0D8();
                    goto block_50;
                }
            } else if (temp_v1 != 0x1A) {
                if (temp_v1 >= 0x1A) {
                    if (temp_v1 != 0x1B) {
                        var_v0 = arg0 < 2;
                        if (temp_v1 == 0x384) {
                            var_s0 = 0;
                            func_800DE38C();
                            func_800DE2E0();
                            D_80046831 = 1;
                            D_80046832 = 0;
                            D_80046830 = 0;
                            var_a0 = 0 * 8;
                            do {
                                func_8022132C(((((var_a0 + var_s0) * 0x10) - var_s0) * 0x10) + &D_8022A770);
                                var_s0 += 1;
                                var_a0 = var_s0 * 8;
                            } while (var_s0 < 7);
                            D_8006F9E8 = 8;
                            D_80072BDC = D_8006F9E8;
                            D_8006F9E8 = 0x18;
                            D_8006FE58 = 0;
                            var_v0 = arg0 < 2;
                        }
                    } else {
                        func_80232818();
                        goto block_50;
                    }
                } else {
                    func_801E0F08();
block_50:
                    D_8006FE58 = 1;
                    var_v0 = arg0 < 2;
                }
            } else {
                func_80232480();
                D_8006F9E8 = 0x1B;
                var_v0 = arg0 < 2;
            }
        } else if ((D_801E99C0 != 0) && (D_801E4420 & 1)) {
            func_801E0B98();
            D_8006F9E8 = 0x19;
            var_v0 = arg0 < 2;
        } else {
            D_8006F9E8 = D_80072BDC;
            var_v0 = arg0 < 2;
        }
    } else {
        D_8006FE58 = 1;
        func_8022F2F8();
        var_v0 = arg0 < 2;
    }
    if ((var_v0 != 0) && ((s16) D_8006FE58 == 1) && ((D_80046831 != 0) || (D_80046832 != 0))) {
        func_801F93FC((D_80046834 * 0x23AC0) + &D_80092C30);
        D_80046834 ^= 1;
        D_80046831 = 0;
    } else {
        D_80046831 = 1;
    }
    temp_ret = osGetTime();
    D_8006E790 = temp_ret;
    D_8006E794 = (u32) (u64) temp_ret;
}

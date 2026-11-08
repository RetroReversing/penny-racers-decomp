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

M2C_UNK func_8002B454(void *);                      /* extern */
M2C_UNK func_8002B534(void *, void *);              /* extern */
M2C_UNK func_8002BDBC(void *, void *);              /* extern */
M2C_UNK func_8002BFDC(void *, M2C_UNK);             /* extern */
M2C_UNK func_8002C010(void *);                      /* extern */
s32 func_8002D0CC(void *, void *);                  /* extern */
M2C_UNK func_8002D164(void *, s16 *, s32);          /* extern */
M2C_UNK func_8002D270(s32, M2C_UNK);                /* extern */
M2C_UNK n_alSynFreeVoice(M2C_UNK *);                   /* extern */
M2C_UNK n_alSynSetPitch(M2C_UNK *, f32);              /* extern */
M2C_UNK n_alSynSetVol(M2C_UNK *, s16, s32);         /* extern */
M2C_UNK n_alSynStopVoice(M2C_UNK *);                   /* extern */
M2C_UNK func_800316EC(void *, M2C_UNK *);           /* extern */
M2C_UNK __n_seqpReleaseVoice(void *, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_8003186C(void *, M2C_UNK *, M2C_UNK);      /* extern */
s16 func_80031B24(M2C_UNK *, void *);               /* extern */
s32 func_80031B94(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_80031BF4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_80031DD8(void *, M2C_UNK *);           /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */

s32 func_8002AF40(void *arg0) {
    s16 sp10;
    M2C_UNK *sp14;
    s32 sp18;
    u8 sp1C;
    f32 sp20;
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a1_2;
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s0_6;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s1_2;
    M2C_UNK *temp_s1_3;
    M2C_UNK *temp_s1_4;
    M2C_UNK *temp_s1_5;
    M2C_UNK *temp_s1_6;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    s16 temp_s0_3;
    s16 temp_s0_5;
    s16 temp_v1;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    u8 temp_s0_4;
    void *var_a0;
    void *var_a0_3;

    temp_s6 = arg0 + 0x48;
    do {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0x38);
        switch (temp_v1) {
        case 0:
            func_8002B454(arg0);
            var_a0 = arg0 + 0x48;
            break;
        case 9:
            sp10 = 9;
            func_8002D164(arg0 + 0x48, &sp10, M2C_FIELD(arg0, s32 *, 0x5C));
            var_a0 = arg0 + 0x48;
            break;
        case 5:
            temp_s0 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            n_alSynStopVoice(temp_s0);
            n_alSynFreeVoice(temp_s0);
            temp_s1 = M2C_FIELD(temp_s0, M2C_UNK **, 0x10);
            if (M2C_FIELD(temp_s1, u8 *, 0x37) != 0) {
                func_80031DD8(arg0, temp_s1);
            }
            func_800316EC(arg0, temp_s0);
            var_a0 = arg0 + 0x48;
            break;
        case 6:
            temp_s0_2 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            temp_s1_2 = M2C_FIELD(temp_s0_2, M2C_UNK **, 0x10);
            if (M2C_FIELD(temp_s1_2, u8 *, 0x34) == 0) {
                M2C_FIELD(temp_s1_2, u8 *, 0x34) = 1U;
            }
            temp_s3 = M2C_FIELD(arg0, s32 *, 0x40);
            M2C_FIELD(temp_s1_2, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_s3);
            M2C_FIELD(temp_s1_2, u8 *, 0x30) = (u8) M2C_FIELD(arg0, u8 *, 0x44);
            n_alSynSetVol(temp_s0_2, func_80031B24(temp_s1_2, arg0), temp_s3);
            var_a0 = arg0 + 0x48;
            break;
        case 22:
            temp_s1_3 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            temp_s4 = M2C_FIELD(arg0, s32 *, 0x40);
            temp_s3_2 = M2C_FIELD(arg0, s32 (**)(s32, f32 *), 0x74)(temp_s4, &sp20);
            if (!(sp20 >= 2.1474836e9f)) {
                var_v1 = (s32) sp20;
            } else {
                var_v1 = (s32) (sp20 - 2.1474836e9f) | 0x80000000;
            }
            M2C_FIELD(temp_s1_3, s8 *, 0x36) = (s8) var_v1;
            temp_s0_3 = func_80031B24(temp_s1_3, arg0);
            n_alSynSetVol(temp_s1_3 + 4, temp_s0_3, func_80031B94(temp_s1_3, M2C_FIELD(arg0, s32 *, 0x1C)));
            sp10 = 0x16;
            sp14 = temp_s1_3;
            sp18 = temp_s4;
            func_8002D164(arg0 + 0x48, &sp10, temp_s3_2);
            var_a0 = arg0 + 0x48;
            break;
        case 23:
            temp_s1_4 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            temp_s4_2 = M2C_FIELD(arg0, s32 *, 0x40);
            temp_s0_4 = M2C_FIELD(arg0, u8 *, 0x44);
            temp_v0_2 = M2C_FIELD(arg0, s32 (**)(s32, f32 *), 0x74)(temp_s4_2, &sp20);
            M2C_FIELD(temp_s1_4, f32 *, 0x2C) = sp20;
            n_alSynSetPitch(temp_s1_4 + 4, M2C_FIELD(temp_s1_4, f32 *, 0x28) * sp20 * M2C_FIELD(((temp_s0_4 * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), f32 *, 0xC));
            sp10 = 0x17;
            sp14 = temp_s1_4;
            sp18 = temp_s4_2;
            sp1C = temp_s0_4;
            func_8002D164(arg0 + 0x48, &sp10, temp_v0_2);
            var_a0 = arg0 + 0x48;
            break;
        case 2:
        case 21:
            func_8002B534(arg0, arg0 + 0x38);
            var_a0 = arg0 + 0x48;
            break;
        case 7:
            func_8002BDBC(arg0, arg0 + 0x38);
            var_a0 = arg0 + 0x48;
            break;
        case 10:
            var_s1 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
            M2C_FIELD(arg0, u16 *, 0x32) = (u16) M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            if (var_s1 != NULL) {
                var_a0_2 = var_s1;
                do {
                    temp_s0_5 = func_80031B24(var_a0_2, arg0);
                    n_alSynSetVol(var_s1 + 4, temp_s0_5, func_80031B94(var_s1, M2C_FIELD(arg0, s32 *, 0x1C)));
                    var_s1 = *var_s1;
                    var_a0_2 = var_s1;
                } while (var_s1 != NULL);
                var_a0 = arg0 + 0x48;
            } else {
            default:
block_50:
                var_a0 = arg0 + 0x48;
            }
            break;
        case 15:
            var_a0 = arg0 + 0x48;
            if (M2C_FIELD(arg0, s32 *, 0x2C) != 1) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                func_8002C010(arg0);
                var_a0 = arg0 + 0x48;
            }
            break;
        case 16:
            var_a0 = arg0 + 0x48;
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 2) {
                temp_s1_5 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                if (temp_s1_5 == NULL) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                } else {
                    var_s0 = temp_s1_5 + 4;
                    do {
                        n_alSynStopVoice(var_s0);
                        n_alSynFreeVoice(var_s0);
                        if (M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x64), u8 *, 0x37) != 0) {
                            func_80031DD8(arg0, M2C_FIELD(arg0, M2C_UNK **, 0x64));
                        }
                        func_800316EC(arg0, var_s0);
                        temp_s1_6 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                        var_s0 = temp_s1_6 + 4;
                    } while (temp_s1_6 != NULL);
                    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                    goto block_50;
                }
            }
            break;
        case 17:
            var_a0 = arg0 + 0x48;
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                func_8002D270(temp_s6, 0);
                func_8002D270(temp_s6, 0x15);
                func_8002D270(temp_s6, 2);
                var_s1_2 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
                var_a0_3 = arg0 + 0x48;
                if (var_s1_2 != NULL) {
                    do {
                        temp_s0_6 = var_s1_2 + 4;
                        if ((func_8003186C(arg0, temp_s0_6, 0xC350) << 0x18) != 0) {
                            __n_seqpReleaseVoice(arg0, temp_s0_6, 0xC350);
                        }
                        var_s1_2 = *var_s1_2;
                    } while (var_s1_2 != NULL);
                    var_a0_3 = arg0 + 0x48;
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = 2;
                sp10 = 0x10;
                func_8002D164(var_a0_3, &sp10, 0x7FFFFFFF);
                var_a0 = arg0 + 0x48;
            }
            break;
        case 12:
            M2C_FIELD((((u8) M2C_FIELD(arg0, M2C_UNK **, 0x3C) * 0x10) + M2C_FIELD(arg0, s32 *, 0x60)), u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0x3D);
            goto block_50;
        case 13:
            if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
                func_800346B0("EX", "n_csplayer.c", 0x111);
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            func_8002BFDC(arg0, 0x48F42400);
            temp_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x20);
            var_a0 = arg0 + 0x48;
            if (temp_a1 != NULL) {
                func_80031BF4(arg0, temp_a1);
                var_a0 = arg0 + 0x48;
            }
            break;
        case 14:
            if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
                func_800346B0("EX", "n_csplayer.c", 0x11B);
            }
            temp_a1_2 = M2C_FIELD(arg0, M2C_UNK **, 0x3C);
            M2C_FIELD(arg0, M2C_UNK **, 0x20) = temp_a1_2;
            func_80031BF4(arg0, temp_a1_2);
            var_a0 = arg0 + 0x48;
            break;
        case 1:
        case 3:
        case 4:
            func_800346B0("EX", "n_csplayer.c", 0x128);
            goto block_50;
        }
        temp_v0 = func_8002D0CC(var_a0, arg0 + 0x38);
        M2C_FIELD(arg0, s32 *, 0x28) = temp_v0;
    } while (temp_v0 == 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_v0);
    return M2C_FIELD(arg0, s32 *, 0x28);
}

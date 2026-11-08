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

M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_80036400(void *, s16 *, u16 *, s32, s32, s32); /* extern */
f32 func_80036A84(f32, s32, s16, u16);              /* extern */
M2C_UNK func_80039338(void *, void *);              /* extern */
M2C_UNK func_800393A4(s32, s32);                    /* extern */
extern M2C_UNK D_80047290;
extern s32 D_800473B0;

s32 func_80035DE0(void *arg0, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp18;
    u16 sp1A;
    s32 sp24;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_a1;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s3;
    s32 var_s7;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0_4;
    void *temp_v1_2;

    var_s3 = arg4;
    var_s7 = arg2;
    sp24 = arg3;
    sp1A = 0;
    sp18 = 0;
    if (M2C_FIELD(arg0, void **, 0x3C) != NULL) {
loop_2:
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 4);
        temp_s2 = temp_v0 - sp24;
        sp24 = temp_v0;
        if (var_s7 >= temp_s2) {
            var_v0 = temp_s2 < 0xA1;
            if (temp_s2 < 0) {
                func_800346B0("EX", "env.c", 0x68);
                var_v0 = temp_s2 < 0xA1;
            }
            if (var_v0 == 0) {
                func_800346B0("EX", "env.c", 0x69);
            }
            temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s16 *, 8);
            switch (temp_v1) {
            case 13:
                temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
                if (M2C_FIELD(temp_s1, s16 *, 0xA) != 0) {
                    M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, 8, 0);
                }
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, 5, M2C_FIELD(temp_s1, s32 *, 0x18));
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, 9, 0);
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                M2C_FIELD(arg0, s32 *, 0x30) = 0;
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_s1, s32 *, 0x14);
                temp_v0_2 = M2C_FIELD(temp_s1, s16 *, 0x10);
                M2C_FIELD(arg0, s16 *, 0x1A) = (s16) ((s32) (temp_v0_2 * temp_v0_2) >> 0xF);
                M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(temp_s1, u8 *, 0x12);
                M2C_FIELD(arg0, u16 *, 0x20) = (u16) *((M2C_FIELD(temp_s1, u8 *, 0x13) * 2) + &D_80047290);
                M2C_FIELD(arg0, u16 *, 0x22) = (u16) *(((0x7F - M2C_FIELD(temp_s1, u8 *, 0x13)) * 2) + &D_80047290);
                if (M2C_FIELD(temp_s1, s32 *, 0x14) != 0) {
                    M2C_FIELD(arg0, u16 *, 0x1C) = 1U;
                    M2C_FIELD(arg0, u16 *, 0x1E) = 1U;
                } else {
                    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x1A) * *((M2C_FIELD(arg0, s16 *, 0x18) * 2) + &D_80047290)) >> 0xF);
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x1A) * *(((0x7F - M2C_FIELD(arg0, s16 *, 0x18)) * 2) + &D_80047290)) >> 0xF);
                }
                temp_a0 = M2C_FIELD(arg0, void **, 0);
                if (temp_a0 != NULL) {
                    M2C_FIELD(temp_a0, M2C_UNK (**)(void *, M2C_UNK, s32), 8)(temp_a0, 7, M2C_FIELD(temp_s1, s32 *, 0xC));
                }
                break;
            case 11:
            case 12:
            case 16:
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
                var_s3 = func_80036400(arg0, &sp18, &sp1A, temp_s2, arg3, var_s3);
                if (temp_a1 >= M2C_FIELD(arg0, s32 *, 0x34)) {
                    M2C_FIELD(arg0, u16 *, 0x28) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x1A) * *((M2C_FIELD(arg0, s16 *, 0x18) * 2) + &D_80047290)) >> 0xF);
                    M2C_FIELD(arg0, u16 *, 0x2E) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x1A) * *(((0x7F - M2C_FIELD(arg0, s16 *, 0x18)) * 2) + &D_80047290)) >> 0xF);
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
                    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x2E);
                } else {
                    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (s32) func_80036A84((f32) (s16) M2C_FIELD(arg0, u16 *, 0x1C), temp_a1, M2C_FIELD(arg0, s16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x24));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (s32) func_80036A84((f32) (s16) M2C_FIELD(arg0, u16 *, 0x1E), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s16 *, 0x2C), M2C_FIELD(arg0, u16 *, 0x2A));
                }
                if ((s16) M2C_FIELD(arg0, u16 *, 0x1C) == 0) {
                    M2C_FIELD(arg0, u16 *, 0x1C) = 1U;
                }
                if ((s16) M2C_FIELD(arg0, u16 *, 0x1E) == 0) {
                    M2C_FIELD(arg0, u16 *, 0x1E) = 1U;
                }
                temp_a0_2 = M2C_FIELD(arg0, void **, 0x3C);
                if (M2C_FIELD(temp_a0_2, s16 *, 8) == 0xC) {
                    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(temp_a0_2, s32 *, 0xC);
                }
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s16 *, 8) == 0xB) {
                    M2C_FIELD(arg0, s32 *, 0x30) = 0;
                    temp_v0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0xC);
                    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) ((s32) (temp_v0_3 * temp_v0_3) >> 0xF);
                    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s16 *, 0x10);
                }
                temp_a0_3 = M2C_FIELD(arg0, void **, 0x3C);
                if (M2C_FIELD(temp_a0_3, s16 *, 8) != 0x10) {
                    M2C_FIELD(arg0, s32 *, 0x38) = 1;
                } else {
                    M2C_FIELD(arg0, u16 *, 0x20) = (u16) *((M2C_FIELD(temp_a0_3, s32 *, 0xC) * 2) + &D_80047290);
                    M2C_FIELD(arg0, u16 *, 0x22) = (u16) *(((0x7F - M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0xC)) * 2) + &D_80047290);
                    M2C_FIELD(arg0, s32 *, 0x38) = 1;
                }
                break;
            case 14:
                temp_s1_2 = M2C_FIELD(arg0, void **, 0x3C);
                if (M2C_FIELD(temp_s1_2, s16 *, 0xA) != 0) {
                    M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, 8, 0);
                }
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, 5, M2C_FIELD(temp_s1_2, s32 *, 0xC));
                var_a1 = 9;
block_35:
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, var_a1, 0);
                break;
            case 15:
                var_s3 = func_80036400(arg0, &sp18, &sp1A, temp_s2, arg3, var_s3);
                var_a1 = 4;
                goto block_35;
            case 0:
                temp_v0_4 = M2C_FIELD(arg0, void **, 0x3C);
                M2C_FIELD(M2C_FIELD(temp_v0_4, s32 *, 0xC), s32 *, 0xD8) = 0;
                func_800393A4(D_800473B0, M2C_FIELD(temp_v0_4, s32 *, 0xC));
                break;
            default:
                temp_v1_2 = M2C_FIELD(arg0, void **, 0x3C);
                var_s3 = func_80036400(arg0, &sp18, &sp1A, temp_s2, arg3, var_s3);
                M2C_FIELD(arg0, M2C_UNK (**)(void *, s16, s32), 8)(arg0, M2C_FIELD(temp_v1_2, s16 *, 8), M2C_FIELD(temp_v1_2, s32 *, 0xC));
                break;
            }
            temp_a1_2 = M2C_FIELD(arg0, void **, 0x3C);
            var_s7 -= temp_s2;
            temp_a0_4 = M2C_FIELD(temp_a1_2, void **, 0);
            sp1A += temp_s2 * 2;
            M2C_FIELD(arg0, void **, 0x3C) = temp_a0_4;
            if (temp_a0_4 == NULL) {
                M2C_FIELD(arg0, s32 *, 0x40) = 0;
            }
            func_80039338(temp_a1_2, temp_a1_2);
            if (M2C_FIELD(arg0, void **, 0x3C) == NULL) {

            } else {
                goto loop_2;
            }
        }
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_s3 = func_80036400(arg0, &sp18, &sp1A, var_s7, arg3, var_s3);
    if (temp_a0_5 < M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x30) = temp_a0_5;
    }
    return temp_s3;
}

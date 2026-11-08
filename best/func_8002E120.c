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

M2C_UNK func_8002ABC8(void *, void *);              /* extern */
M2C_UNK func_8002AC40(s32);                         /* extern */
M2C_UNK func_8002E6E4(void *, s16, s32);            /* extern */
s32 func_8002E784(void *, s16 *, u16 *, s32, s32);  /* extern */
u16 func_8002EAE4(s16, s32, s16, u16);              /* extern */
M2C_UNK func_8002EF78(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_80046F90;

s32 func_8002E120(void *arg0, s32 arg1, s32 arg2) {
    s16 sp18;
    u16 sp1A;
    s16 temp_v0;
    s16 temp_v1;
    s16 var_a1;
    s32 temp_a0;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_s3;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1_2;
    void *temp_s1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    var_s3 = arg2;
    var_s7 = arg1;
    var_s6 = 0xB8;
    sp1A = 0;
    sp18 = 0;
    if (M2C_FIELD(arg0, void **, 0x7C) != NULL) {
loop_2:
        temp_a0 = var_s7;
        var_s7 = ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 4) + 0x5C) / 184) * 0xB8;
        temp_s2 = var_s7 - temp_a0;
        if (var_s6 >= temp_s2) {
            var_v0 = temp_s2 < 0xB9;
            if (temp_s2 < 0) {
                func_800346B0("EX", "n_env.c", 0x83);
                var_v0 = temp_s2 < 0xB9;
            }
            if (var_v0 == 0) {
                func_800346B0("EX", "n_env.c", 0x87);
            }
            temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s16 *, 8);
            switch (temp_v1) {
            case 13:
                temp_s1 = M2C_FIELD(arg0, void **, 0x7C);
                if (M2C_FIELD(temp_s1, s16 *, 0xA) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x48) = 1;
                }
                func_8002EF78(arg0, 5, M2C_FIELD(temp_s1, s32 *, 0x18));
                M2C_FIELD(arg0, s32 *, 0x84) = 1;
                M2C_FIELD(arg0, s32 *, 0x78) = 1;
                M2C_FIELD(arg0, s32 *, 0x70) = 0;
                M2C_FIELD(arg0, s32 *, 0x74) = (s32) (((M2C_FIELD(temp_s1, s32 *, 0x14) + 0x5C) / 184) * 0xB8);
                temp_v0 = M2C_FIELD(temp_s1, s16 *, 0x10);
                M2C_FIELD(arg0, s16 *, 0x5A) = (s16) ((s32) (temp_v0 * temp_v0) >> 0xF);
                M2C_FIELD(arg0, s16 *, 0x58) = (s16) M2C_FIELD(temp_s1, u8 *, 0x12);
                M2C_FIELD(arg0, u16 *, 0x60) = (u16) *((M2C_FIELD(temp_s1, u8 *, 0x13) * 2) + &D_80046F90);
                M2C_FIELD(arg0, u16 *, 0x62) = (u16) *(((0x7F - M2C_FIELD(temp_s1, u8 *, 0x13)) * 2) + &D_80046F90);
                if (M2C_FIELD(temp_s1, s32 *, 0x14) != 0) {
                    M2C_FIELD(arg0, u16 *, 0x5C) = 1U;
                    M2C_FIELD(arg0, u16 *, 0x5E) = 1U;
                } else {
                    M2C_FIELD(arg0, u16 *, 0x5C) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x5A) * *((M2C_FIELD(arg0, s16 *, 0x58) * 2) + &D_80046F90)) >> 0xF);
                    M2C_FIELD(arg0, u16 *, 0x5E) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x5A) * *(((0x7F - M2C_FIELD(arg0, s16 *, 0x58)) * 2) + &D_80046F90)) >> 0xF);
                }
                M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(temp_s1, s32 *, 0xC);
                break;
            case 11:
            case 12:
            case 16:
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x70);
                var_s3 = func_8002E784(arg0, &sp18, &sp1A, temp_s2, var_s3);
                if (((temp_a1 >= M2C_FIELD(arg0, s32 *, 0x74)) | (temp_s2 == 0)) != 0) {
                    M2C_FIELD(arg0, u16 *, 0x68) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x5A) * *((M2C_FIELD(arg0, s16 *, 0x58) * 2) + &D_80046F90)) >> 0xF);
                    M2C_FIELD(arg0, u16 *, 0x6E) = (u16) ((s32) (M2C_FIELD(arg0, s16 *, 0x5A) * *(((0x7F - M2C_FIELD(arg0, s16 *, 0x58)) * 2) + &D_80046F90)) >> 0xF);
                    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
                    M2C_FIELD(arg0, u16 *, 0x5C) = (u16) M2C_FIELD(arg0, u16 *, 0x68);
                    M2C_FIELD(arg0, u16 *, 0x5E) = (u16) M2C_FIELD(arg0, u16 *, 0x6E);
                } else {
                    M2C_FIELD(arg0, u16 *, 0x5C) = func_8002EAE4((s16) M2C_FIELD(arg0, u16 *, 0x5C), temp_a1, M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, u16 *, 0x64));
                    M2C_FIELD(arg0, u16 *, 0x5E) = func_8002EAE4((s16) M2C_FIELD(arg0, u16 *, 0x5E), M2C_FIELD(arg0, s32 *, 0x70), M2C_FIELD(arg0, s16 *, 0x6C), M2C_FIELD(arg0, u16 *, 0x6A));
                }
                if ((s16) M2C_FIELD(arg0, u16 *, 0x5C) == 0) {
                    M2C_FIELD(arg0, u16 *, 0x5C) = 1U;
                }
                if ((s16) M2C_FIELD(arg0, u16 *, 0x5E) == 0) {
                    M2C_FIELD(arg0, u16 *, 0x5E) = 1U;
                }
                temp_a0_2 = M2C_FIELD(arg0, void **, 0x7C);
                if (M2C_FIELD(temp_a0_2, s16 *, 8) == 0xC) {
                    M2C_FIELD(arg0, s16 *, 0x58) = (s16) M2C_FIELD(temp_a0_2, s32 *, 0xC);
                }
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s16 *, 8) == 0xB) {
                    M2C_FIELD(arg0, s32 *, 0x70) = 0;
                    temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0xC);
                    M2C_FIELD(arg0, s16 *, 0x5A) = (s16) ((s32) (temp_v0_2 * temp_v0_2) >> 0xF);
                    M2C_FIELD(arg0, s32 *, 0x74) = (s32) ((((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s16 *, 0x10) + 0x5C) / 184) * 0xB8);
                }
                temp_a0_3 = M2C_FIELD(arg0, void **, 0x7C);
                if (M2C_FIELD(temp_a0_3, s16 *, 8) != 0x10) {
                    M2C_FIELD(arg0, s32 *, 0x78) = 1;
                } else {
                    M2C_FIELD(arg0, u16 *, 0x60) = (u16) *((M2C_FIELD(temp_a0_3, s32 *, 0xC) * 2) + &D_80046F90);
                    M2C_FIELD(arg0, u16 *, 0x62) = (u16) *(((0x7F - M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0xC)) * 2) + &D_80046F90);
                    M2C_FIELD(arg0, s32 *, 0x78) = 1;
                }
                break;
            case 14:
                temp_v1_2 = M2C_FIELD(arg0, void **, 0x7C);
                if (M2C_FIELD(temp_v1_2, s16 *, 0xA) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x48) = 1;
                }
                func_8002EF78(arg0, 5, M2C_FIELD(temp_v1_2, s32 *, 0xC));
                M2C_FIELD(arg0, s32 *, 0x84) = 1;
                break;
            case 15:
                var_s3 = func_8002E784(arg0, &sp18, &sp1A, temp_s2, var_s3);
                var_a1 = 4;
                var_a2 = 0;
block_39:
                func_8002E6E4(arg0, var_a1, var_a2);
                break;
            case 0:
                temp_v1_3 = M2C_FIELD(arg0, void **, 0x7C);
                M2C_FIELD(M2C_FIELD(temp_v1_3, s32 *, 0xC), s32 *, 0x88) = 0;
                func_8002AC40(M2C_FIELD(temp_v1_3, s32 *, 0xC));
                break;
            case 7:
                var_s3 = func_8002E784(arg0, &sp18, &sp1A, temp_s2, var_s3);
                M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0xC);
                break;
            case 8:
                var_s3 = func_8002E784(arg0, &sp18, &sp1A, temp_s2, var_s3);
                M2C_FIELD(arg0, s32 *, 0x48) = 1;
                break;
            case 5:
                var_s3 = func_8002E784(arg0, &sp18, &sp1A, temp_s2, var_s3);
                func_8002EF78(arg0, 5, M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0xC));
                break;
            default:
                temp_v1_4 = M2C_FIELD(arg0, void **, 0x7C);
                var_a1 = M2C_FIELD(temp_v1_4, s16 *, 8);
                var_a2 = M2C_FIELD(temp_v1_4, s32 *, 0xC);
                var_s3 = func_8002E784(arg0, &sp18, &sp1A, temp_s2, var_s3);
                goto block_39;
            }
            temp_a1_2 = M2C_FIELD(arg0, void **, 0x7C);
            var_s6 -= temp_s2;
            temp_a0_4 = M2C_FIELD(temp_a1_2, void **, 0);
            sp1A += temp_s2 * 2;
            M2C_FIELD(arg0, void **, 0x7C) = temp_a0_4;
            if (temp_a0_4 == NULL) {
                M2C_FIELD(arg0, s32 *, 0x80) = 0;
            }
            func_8002ABC8(temp_a1_2, temp_a1_2);
            if (M2C_FIELD(arg0, void **, 0x7C) != NULL) {
                goto loop_2;
            }
        }
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x74);
    temp_s2 = func_8002E784(arg0, &sp18, &sp1A, var_s6, var_s3);
    if (temp_a0_5 < M2C_FIELD(arg0, s32 *, 0x70)) {
        M2C_FIELD(arg0, s32 *, 0x70) = temp_a0_5;
    }
    return temp_s2;
}

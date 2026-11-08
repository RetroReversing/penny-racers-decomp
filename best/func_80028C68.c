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

M2C_UNK func_80033F60(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_8003AB20(void *, u16, s32, s32, s32, s32, void *); /* extern */
s32 func_8003B110(void *, u16, s32, s32, s32);      /* extern */
s32 func_8003B5B0(void *, s32, u8, s32, s32, s32);  /* extern */
s32 func_8003B9E0(void *, s32, s32);                /* extern */
s32 func_8003BC20(void *, u16, s32, s32, s32, void *); /* extern */
s32 func_8003BDB0(void *, void *);                  /* extern */
s32 func_8003BEC0(void *, s32, s32);                /* extern */
s32 func_8003C1A0(M2C_UNK *, void *, s32);          /* extern */
s32 func_8003C370(void *);                          /* extern */
s32 func_8003CAA0(M2C_UNK *, void *, s32);          /* extern */
extern u16 D_80046D60;
extern s32 D_80046D64;
extern M2C_UNK D_800DE058;

s32 func_80028C68(void *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s2;

    temp_v0 = M2C_FIELD(arg0, u16 *, 0) - 0x2001;
    switch (temp_v0) {
    case 0:
        temp_s0 = M2C_FIELD(arg0, void **, 8);
        temp_a1 = M2C_FIELD(temp_s0, void **, 0);
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        var_v1 = func_8003C1A0(&D_800DE058, temp_a1, M2C_FIELD(temp_a1, s32 *, 8));
        if (var_v1 == 0) {
            M2C_FIELD(temp_s0, s32 *, 0xC) = 1;
            goto block_11;
        }
        if (var_v1 != 0xA) {
            M2C_FIELD(temp_s0, s32 *, 8) = var_v1;
        } else {
            temp_a1_2 = M2C_FIELD(temp_s0, void **, 0);
            var_v1 = func_8003CAA0(&D_800DE058, temp_a1_2, M2C_FIELD(temp_a1_2, s32 *, 8));
            if (var_v1 == 0) {
                M2C_FIELD(temp_s0, s32 *, 0xC) = 2;
            } else if (var_v1 == 0xB) {
                var_v1 = 0xA;
            }
block_11:
            M2C_FIELD(temp_s0, s32 *, 8) = var_v1;
        }
block_25:
        func_80033F60(M2C_FIELD(arg0, s32 *, 4), 0, 1);
        return 1;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8) = func_8003BDB0(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0), arg0 + 0xC);
        goto block_25;
    case 2:
        temp_s0_2 = M2C_FIELD(arg0, void **, 8);
        temp_s2 = temp_s0_2 + 4;
        temp_v0_2 = func_8003BC20(M2C_FIELD(temp_s0_2, void **, 0), D_80046D60, D_80046D64, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), temp_s2);
        if (temp_v0_2 != 5) {
            M2C_FIELD(temp_s0_2, s32 *, 8) = temp_v0_2;
        } else if (M2C_FIELD(arg0, s32 *, 0x18) != 1) {
            M2C_FIELD(temp_s0_2, s32 *, 8) = temp_v0_2;
        } else {
            M2C_FIELD(temp_s0_2, s32 *, 8) = func_8003AB20(M2C_FIELD(temp_s0_2, void **, 0), D_80046D60, D_80046D64, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), temp_s2);
        }
        goto block_25;
    case 3:
        temp_s0_3 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_s0_3, s32 *, 8) = func_8003B5B0(M2C_FIELD(temp_s0_3, void **, 0), M2C_FIELD(temp_s0_3, s32 *, 4), (u8) M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x18));
        goto block_25;
    case 4:
        temp_s0_4 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_s0_4, s32 *, 8) = func_8003B110(M2C_FIELD(temp_s0_4, void **, 0), D_80046D60, D_80046D64, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
        goto block_25;
    case 5:
        temp_s0_5 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_s0_5, s32 *, 8) = func_8003B9E0(M2C_FIELD(temp_s0_5, void **, 0), M2C_FIELD(temp_s0_5, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
        goto block_25;
    case 6:
        temp_s0_6 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_s0_6, s32 *, 8) = func_8003BEC0(M2C_FIELD(temp_s0_6, void **, 0), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
        goto block_25;
    case 7:
        temp_s0_7 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_s0_7, s32 *, 8) = func_8003C370(M2C_FIELD(temp_s0_7, void **, 0));
        goto block_25;
    default:
        return 0;
    }
}

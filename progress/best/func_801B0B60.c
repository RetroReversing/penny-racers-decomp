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

f32 sqrtf();
extern u8 *D_801C7AB0;
extern char D_8031EA70[];
extern char D_8031EA74[];
extern char D_8031EA78[];
extern char D_8031EA7C[];
extern char D_8031EA80[];
extern char D_8031EA84[];
extern char D_8031EA88[];
extern char D_8031EA8C[];
extern char D_8031EA90[];
extern char D_8031EA92[];
extern char D_8031EA94[];
extern char D_8031EA96[];
extern char D_8031EA98[];
extern char D_8031EA9C[];
extern char D_8031EAA0[];
extern char D_8031EAA4[];
extern char D_8031EAA8[];
extern char D_8031EAAC[];
extern char D_8031EAB0[];
extern char D_8031EAB4[];
extern char D_8031EAB8[];
extern char D_8031EABC[];
extern char D_8031EAC0[];
extern char D_8031EAC4[];
extern char D_8031EAC8[];
extern char D_8031EACC[];
extern char D_8031EAD0[];
extern char D_8031EAD4[];

void func_801B0B60(s32 arg0) {
    f32 temp_fa0;
    f32 temp_fa0_10;
    f32 temp_fa0_11;
    f32 temp_fa0_12;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa0_5;
    f32 temp_fa0_6;
    f32 temp_fa0_7;
    f32 temp_fa0_8;
    f32 temp_fa0_9;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv0_5;
    f32 var_fv0_6;
    f32 var_fv0_7;
    f32 var_fv0_8;
    s16 var_v0_11;
    s16 var_v0_12;
    s16 var_v0_13;
    s16 var_v0_14;
    s16 var_v0_15;
    s16 var_v0_4;
    s16 var_v0_6;
    s16 var_v0_8;
    s16 var_v0_9;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_16;
    s32 var_v0_19;
    s32 var_v0_5;
    s32 var_v0_7;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    s8 var_v0_17;
    s8 var_v0_18;
    s8 var_v0_2;
    s8 var_v0_3;
    u8 *temp_a0;
    u8 *var_a0;
    u8 var_a1;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *var_a0_2;

    temp_a0 = D_801C7AB0;
    var_s2 = 0;
    if (M2C_FIELD(D_801C7AB0, u8 *, 2) != 0) {
        do {
            if (M2C_FIELD(temp_a0, u8 *, 0) == 3) {
                var_a1 = M2C_FIELD((((var_s2 & 0xFF) * 5) + arg0), u8 *, 4);
            } else {
                var_a1 = M2C_FIELD((((var_s2 & 0xFF) * 5) + arg0), u8 *, 4) - 0x2E;
            }
            var_a0 = D_801C7AB0;
            var_s1 = var_s2;
            if (M2C_FIELD(var_a0, u8 *, 1) == 5) {
                var_s1 = var_s2 + 1;
                if ((var_s2 & 0xFF) == (M2C_FIELD(var_a0, u8 *, 2) - 1)) {
                    var_s1 = 0;
                }
            }
            var_v0 = var_s2 & 0xFF;
            if (((u32) (var_a1 & 0xFF) < 0xAU) || (var_v0 = var_s2 & 0xFF, (((u32) ((var_a1 - 0x16) & 0xFF) < 0x14U) != 0))) {
                temp_a0_2 = (var_v0 * 5) + arg0;
                if (M2C_FIELD(temp_a0_2, u8 *, 0) == 0) {
                    var_v1 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + var_v1) = (((f32) M2C_FIELD(temp_a0_2, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + var_v1) = (((f32) (M2C_FIELD(temp_a0_2, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + var_v1) = (((f32) (M2C_FIELD(temp_a0_2, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + var_v1) = (((f32) M2C_FIELD(temp_a0_2, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + var_v1) = (((f32) M2C_FIELD(temp_a0_2, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + var_v1) = (((f32) M2C_FIELD(temp_a0_2, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA84 + var_v1) = (((f32) (M2C_FIELD(temp_a0_2, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    var_v0_2 = M2C_FIELD(temp_a0_2, s8 *, 3) + 1;
                    goto block_19;
                }
                var_a0_2 = ((var_s2 & 0xFF) * 5) + arg0;
                if (M2C_FIELD(var_a0_2, u8 *, 0) == 2) {
                    var_v1 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + var_v1) = (((f32) M2C_FIELD(var_a0_2, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + var_v1) = (((f32) M2C_FIELD(var_a0_2, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    var_v0_3 = M2C_FIELD(var_a0_2, s8 *, 3);
                    goto block_18;
                }
                temp_a0_3 = ((var_s2 & 0xFF) * 5) + arg0;
                if (M2C_FIELD(temp_a0_3, u8 *, 0) == 1) {
                    var_v1 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + var_v1) = (((f32) M2C_FIELD(temp_a0_3, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + var_v1) = (((f32) M2C_FIELD(temp_a0_3, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + var_v1) = (((f32) (M2C_FIELD(temp_a0_3, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + var_v1) = (((f32) (M2C_FIELD(temp_a0_3, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + var_v1) = (((f32) (M2C_FIELD(temp_a0_3, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + var_v1) = (((f32) M2C_FIELD(temp_a0_3, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA84 + var_v1) = (((f32) M2C_FIELD(temp_a0_3, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    var_v0_2 = M2C_FIELD(temp_a0_3, s8 *, 3) + 1;
                    goto block_19;
                }
                var_a0_2 = ((var_s2 & 0xFF) * 5) + arg0;
                if (M2C_FIELD(var_a0_2, u8 *, 0) == 3) {
                    var_v1 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + var_v1) = (((f32) M2C_FIELD(var_a0_2, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + var_v1) = (((f32) M2C_FIELD(var_a0_2, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + var_v1) = (((f32) M2C_FIELD(var_a0_2, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + var_v1) = (((f32) (M2C_FIELD(var_a0_2, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    var_v0_3 = M2C_FIELD(var_a0_2, s8 *, 3) + 1;
block_18:
                    *(D_8031EA84 + var_v1) = (((f32) var_v0_3 * 400.0f) + 400.0f) - 200.0f;
                    var_v0_2 = M2C_FIELD(var_a0_2, s8 *, 3);
block_19:
                    *(D_8031EA8C + var_v1) = (((f32) var_v0_2 * 400.0f) + 400.0f) - 200.0f;
                }
                var_a0 = D_801C7AB0;
                if (M2C_FIELD(var_a0, u8 *, 1) == 5) {
                    temp_v1 = var_s2 & 0xFF;
                    if (temp_v1 == (M2C_FIELD(var_a0, u8 *, 2) - 1)) {
                        var_v1_2 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_4 = 1;
                        goto block_26;
                    }
                    if (temp_v1 == (M2C_FIELD(D_801C7AB0, u8 *, 2) - 2)) {
                        *(D_8031EA90 + ((var_s1 & 0xFF) * 0x6C)) = 0;
                        var_v0_5 = var_s1 & 0xFF;
                    } else {
                        var_v1_2 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_4 = (var_s2 & 0xFF) + 2;
block_26:
                        *(D_8031EA90 + var_v1_2) = var_v0_4;
                        var_v0_5 = var_s1 & 0xFF;
                    }
                    var_v1_3 = var_v0_5 * 0x6C;
                    var_v0_6 = var_s2 & 0xFF;
                    goto block_107;
                }
                if (!(var_s2 & 0xFF)) {
                    var_v1_3 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA90 + var_v1_3) = (var_s2 & 0xFF) + 1;
                    var_v0_6 = M2C_FIELD(D_801C7AB0, u8 *, 2) - 1;
                    goto block_107;
                }
                if ((var_s2 & 0xFF) == (M2C_FIELD(D_801C7AB0, u8 *, 2) - 1)) {
                    var_v1_3 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA90 + var_v1_3) = 0;
                    var_v0_7 = var_s2 & 0xFF;
                    goto block_106;
                }
                temp_v0 = (var_s1 & 0xFF) * 0x6C;
                temp_a0_4 = var_s2 & 0xFF;
                *(D_8031EA90 + temp_v0) = temp_a0_4 + 1;
                var_a0 = temp_a0_4 - 1;
                *(D_8031EA94 + temp_v0) = (s16) var_a0;
                var_v1_4 = var_s1 & 0xFF;
                goto block_108;
            }
            temp_v1_2 = var_s2 & 0xFF;
            if ((u32) ((var_a1 - 0xA) & 0xFF) < 3U) {
                temp_a0_5 = (temp_v1_2 * 5) + arg0;
                if (M2C_FIELD(temp_a0_5, u8 *, 0) == 2) {
                    var_v1_5 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + var_v1_5) = (((f32) (M2C_FIELD(temp_a0_5, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + var_v1_5) = (((f32) M2C_FIELD(temp_a0_5, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + var_v1_5) = (((f32) M2C_FIELD(temp_a0_5, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + var_v1_5) = (((f32) (M2C_FIELD(temp_a0_5, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + var_v1_5) = (((f32) (M2C_FIELD(temp_a0_5, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + var_v1_5) = (((f32) (M2C_FIELD(temp_a0_5, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA84 + var_v1_5) = (((f32) M2C_FIELD(temp_a0_5, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA8C + var_v1_5) = (((f32) M2C_FIELD(temp_a0_5, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                        var_v0_8 = var_s2 & 0xFF;
                    } else {
                        var_v1_5 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_8 = (var_s2 & 0xFF) - 1;
                    }
                    *(D_8031EA92 + var_v1_5) = var_v0_8;
                    *(D_8031EA96 + ((var_s1 & 0xFF) * 0x6C)) = -1;
                } else {
                    temp_a0_6 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(temp_a0_6, u8 *, 0) == 1) {
                        var_v1_6 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_6) = (((f32) M2C_FIELD(temp_a0_6, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_6) = (((f32) M2C_FIELD(temp_a0_6, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_6) = (((f32) (M2C_FIELD(temp_a0_6, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_6) = (((f32) (M2C_FIELD(temp_a0_6, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_6) = (((f32) (M2C_FIELD(temp_a0_6, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_6) = (((f32) M2C_FIELD(temp_a0_6, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA84 + var_v1_6) = (((f32) M2C_FIELD(temp_a0_6, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA8C + var_v1_6) = (((f32) (M2C_FIELD(temp_a0_6, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA92 + var_v1_6) = -1;
                        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                            var_v0_9 = var_s2 & 0xFF;
                        } else {
                            var_v1_6 = (var_s1 & 0xFF) * 0x6C;
                            var_v0_9 = (var_s2 & 0xFF) - 1;
                        }
                        *(D_8031EA96 + var_v1_6) = var_v0_9;
                    }
                }
                var_a0 = D_801C7AB0;
                var_v0_10 = var_s1 & 0xFF;
                if (M2C_FIELD(var_a0, u8 *, 1) == 5) {
                    if ((var_s2 & 0xFF) != (M2C_FIELD(var_a0, u8 *, 2) - 2)) {
                        var_v1_7 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_11 = (var_s2 & 0xFF) + 2;
                        goto block_89;
                    }
                    goto block_86;
                }
                goto block_88;
                goto block_90;
            }
            if ((u32) ((var_a1 - 0xD) & 0xFF) < 3U) {
                temp_a0_7 = (temp_v1_2 * 5) + arg0;
                if (M2C_FIELD(temp_a0_7, u8 *, 0) == 2) {
                    temp_v1_3 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + temp_v1_3) = (((f32) (M2C_FIELD(temp_a0_7, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + temp_v1_3) = (((f32) M2C_FIELD(temp_a0_7, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + temp_v1_3) = (((f32) M2C_FIELD(temp_a0_7, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + temp_v1_3) = (((f32) (M2C_FIELD(temp_a0_7, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + temp_v1_3) = (((f32) (M2C_FIELD(temp_a0_7, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + temp_v1_3) = (((f32) (M2C_FIELD(temp_a0_7, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA84 + temp_v1_3) = (((f32) M2C_FIELD(temp_a0_7, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA8C + temp_v1_3) = (((f32) M2C_FIELD(temp_a0_7, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA92 + temp_v1_3) = -1;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                        *(D_8031EA96 + temp_v1_3) = var_s2 & 0xFF;
                    } else {
                        *(D_8031EA96 + ((var_s1 & 0xFF) * 0x6C)) = (var_s2 & 0xFF) - 1;
                    }
                } else {
                    temp_a0_8 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(temp_a0_8, u8 *, 0) == 3) {
                        var_v1_8 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_8) = (((f32) (M2C_FIELD(temp_a0_8, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_8) = (((f32) (M2C_FIELD(temp_a0_8, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_8) = (((f32) M2C_FIELD(temp_a0_8, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_8) = (((f32) M2C_FIELD(temp_a0_8, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_8) = (((f32) M2C_FIELD(temp_a0_8, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_8) = (((f32) (M2C_FIELD(temp_a0_8, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA84 + var_v1_8) = (((f32) (M2C_FIELD(temp_a0_8, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA8C + var_v1_8) = (((f32) M2C_FIELD(temp_a0_8, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                            var_v0_12 = var_s2 & 0xFF;
                        } else {
                            var_v1_8 = (var_s1 & 0xFF) * 0x6C;
                            var_v0_12 = (var_s2 & 0xFF) - 1;
                        }
                        *(D_8031EA92 + var_v1_8) = var_v0_12;
                        *(D_8031EA96 + ((var_s1 & 0xFF) * 0x6C)) = -1;
                    }
                }
                var_a0 = D_801C7AB0;
                var_v0_10 = var_s1 & 0xFF;
                if (M2C_FIELD(var_a0, u8 *, 1) == 5) {
                    if ((var_s2 & 0xFF) != (M2C_FIELD(var_a0, u8 *, 2) - 2)) {
                        var_v1_7 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_11 = (var_s2 & 0xFF) + 2;
                        goto block_89;
                    }
                    goto block_86;
                }
                goto block_88;
                goto block_90;
            }
            if ((u32) ((var_a1 - 0x10) & 0xFF) < 3U) {
                temp_a0_9 = ((var_s2 & 0xFF) * 5) + arg0;
                if (M2C_FIELD(temp_a0_9, u8 *, 0) == 0) {
                    temp_v1_4 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + temp_v1_4) = (((f32) M2C_FIELD(temp_a0_9, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + temp_v1_4) = (((f32) (M2C_FIELD(temp_a0_9, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + temp_v1_4) = (((f32) (M2C_FIELD(temp_a0_9, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + temp_v1_4) = (((f32) M2C_FIELD(temp_a0_9, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + temp_v1_4) = (((f32) M2C_FIELD(temp_a0_9, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + temp_v1_4) = (((f32) M2C_FIELD(temp_a0_9, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA84 + temp_v1_4) = (((f32) (M2C_FIELD(temp_a0_9, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA8C + temp_v1_4) = (((f32) (M2C_FIELD(temp_a0_9, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA92 + temp_v1_4) = -1;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                        *(D_8031EA96 + temp_v1_4) = var_s2 & 0xFF;
                    } else {
                        *(D_8031EA96 + ((var_s1 & 0xFF) * 0x6C)) = (var_s2 & 0xFF) - 1;
                    }
                } else {
                    temp_a0_10 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(temp_a0_10, u8 *, 0) == 1) {
                        var_v1_9 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_9) = (((f32) M2C_FIELD(temp_a0_10, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_9) = (((f32) M2C_FIELD(temp_a0_10, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_9) = (((f32) (M2C_FIELD(temp_a0_10, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_9) = (((f32) (M2C_FIELD(temp_a0_10, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_9) = (((f32) (M2C_FIELD(temp_a0_10, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_9) = (((f32) M2C_FIELD(temp_a0_10, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA84 + var_v1_9) = (((f32) M2C_FIELD(temp_a0_10, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA8C + var_v1_9) = (((f32) (M2C_FIELD(temp_a0_10, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                            var_v0_13 = var_s2 & 0xFF;
                        } else {
                            var_v1_9 = (var_s1 & 0xFF) * 0x6C;
                            var_v0_13 = (var_s2 & 0xFF) - 1;
                        }
                        *(D_8031EA92 + var_v1_9) = var_v0_13;
                        *(D_8031EA96 + ((var_s1 & 0xFF) * 0x6C)) = -1;
                    }
                }
                var_a0 = D_801C7AB0;
                var_v0_10 = var_s1 & 0xFF;
                if (M2C_FIELD(var_a0, u8 *, 1) == 5) {
                    if ((var_s2 & 0xFF) != (M2C_FIELD(var_a0, u8 *, 2) - 2)) {
                        var_v1_7 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_11 = (var_s2 & 0xFF) + 2;
                        goto block_89;
                    }
                    goto block_86;
                }
                goto block_88;
                goto block_90;
            }
            if ((u32) ((var_a1 - 0x13) & 0xFF) < 3U) {
                temp_a0_11 = ((var_s2 & 0xFF) * 5) + arg0;
                if (M2C_FIELD(temp_a0_11, u8 *, 0) == 0) {
                    var_v1_10 = (var_s1 & 0xFF) * 0x6C;
                    *(D_8031EA70 + var_v1_10) = (((f32) M2C_FIELD(temp_a0_11, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA78 + var_v1_10) = (((f32) (M2C_FIELD(temp_a0_11, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA80 + var_v1_10) = (((f32) (M2C_FIELD(temp_a0_11, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA88 + var_v1_10) = (((f32) M2C_FIELD(temp_a0_11, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA74 + var_v1_10) = (((f32) M2C_FIELD(temp_a0_11, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA7C + var_v1_10) = (((f32) M2C_FIELD(temp_a0_11, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA84 + var_v1_10) = (((f32) (M2C_FIELD(temp_a0_11, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    *(D_8031EA8C + var_v1_10) = (((f32) (M2C_FIELD(temp_a0_11, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                        var_v0_14 = var_s2 & 0xFF;
                    } else {
                        var_v1_10 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_14 = (var_s2 & 0xFF) - 1;
                    }
                    *(D_8031EA92 + var_v1_10) = var_v0_14;
                    *(D_8031EA96 + ((var_s1 & 0xFF) * 0x6C)) = -1;
                } else {
                    temp_a0_12 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(temp_a0_12, u8 *, 0) == 3) {
                        var_v1_11 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_11) = (((f32) (M2C_FIELD(temp_a0_12, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_11) = (((f32) (M2C_FIELD(temp_a0_12, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_11) = (((f32) M2C_FIELD(temp_a0_12, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_11) = (((f32) M2C_FIELD(temp_a0_12, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_11) = (((f32) M2C_FIELD(temp_a0_12, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_11) = (((f32) (M2C_FIELD(temp_a0_12, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA84 + var_v1_11) = (((f32) (M2C_FIELD(temp_a0_12, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA8C + var_v1_11) = (((f32) M2C_FIELD(temp_a0_12, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA92 + var_v1_11) = -1;
                        if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                            var_v0_15 = var_s2 & 0xFF;
                        } else {
                            var_v1_11 = (var_s1 & 0xFF) * 0x6C;
                            var_v0_15 = (var_s2 & 0xFF) - 1;
                        }
                        *(D_8031EA96 + var_v1_11) = var_v0_15;
                    }
                }
                var_a0 = D_801C7AB0;
                var_v0_10 = var_s1 & 0xFF;
                if (M2C_FIELD(var_a0, u8 *, 1) == 5) {
                    if ((var_s2 & 0xFF) == (M2C_FIELD(var_a0, u8 *, 2) - 2)) {
block_86:
                        var_v1_12 = var_s1 & 0xFF;
                        *(D_8031EA90 + (var_v1_12 * 0x6C)) = 0;
                        var_v0_16 = var_v1_12 * 8;
                    } else {
                        var_v1_7 = (var_s1 & 0xFF) * 0x6C;
                        var_v0_11 = (var_s2 & 0xFF) + 2;
                        goto block_89;
                    }
                } else {
block_88:
                    var_v1_7 = var_v0_10 * 0x6C;
                    var_v0_11 = (var_s2 & 0xFF) + 1;
block_89:
                    *(D_8031EA90 + var_v1_7) = var_v0_11;
                    var_v1_12 = var_s1 & 0xFF;
                    var_v0_16 = var_v1_12 * 8;
                }
block_90:
                *(D_8031EA94 + ((((var_v0_16 - var_v1_12) * 4) - var_v1_12) * 4)) = -1;
                var_v1_13 = var_s1 & 0xFF;
            } else {
                if ((u32) ((var_a1 - 0x2A) & 0xFF) < 4U) {
                    var_a0 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(var_a0, u8 *, 0) == 0) {
                        var_v1_14 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA84 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        var_v0_17 = M2C_FIELD(var_a0, s8 *, 3) + 1;
                        goto block_101;
                    }
                    var_a0 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(var_a0, u8 *, 0) == 2) {
                        var_v1_14 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        var_v0_18 = M2C_FIELD(var_a0, s8 *, 3);
                        goto block_100;
                    }
                    var_a0 = ((var_s2 & 0xFF) * 5) + arg0;
                    if (M2C_FIELD(var_a0, u8 *, 0) == 1) {
                        var_v1_14 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA84 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        var_v0_17 = M2C_FIELD(var_a0, s8 *, 3) + 1;
                        goto block_101;
                    }
                    var_a0 = ((var_s2 & 0xFF) * 5) + arg0;
                    var_v0_19 = var_s2 & 0xFF;
                    if (M2C_FIELD(var_a0, u8 *, 0) == 3) {
                        var_v1_14 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA70 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA78 + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 2) + 1) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA80 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA88 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 2) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA74 + var_v1_14) = (((f32) M2C_FIELD(var_a0, s8 *, 3) * 400.0f) + 400.0f) - 200.0f;
                        *(D_8031EA7C + var_v1_14) = (((f32) (M2C_FIELD(var_a0, s8 *, 3) + 1) * 400.0f) + 400.0f) - 200.0f;
                        var_v0_18 = M2C_FIELD(var_a0, s8 *, 3) + 1;
block_100:
                        *(D_8031EA84 + var_v1_14) = (((f32) var_v0_18 * 400.0f) + 400.0f) - 200.0f;
                        var_v0_17 = M2C_FIELD(var_a0, s8 *, 3);
block_101:
                        *(D_8031EA8C + var_v1_14) = (((f32) var_v0_17 * 400.0f) + 400.0f) - 200.0f;
                        var_v0_19 = var_s2 & 0xFF;
                    }
                    if (var_v0_19 == 0) {
                        temp_v1_5 = (var_s1 & 0xFF) * 0x6C;
                        *(D_8031EA90 + temp_v1_5) = (var_s2 & 0xFF) + 1;
                        *(D_8031EA94 + temp_v1_5) = -1;
                        var_v1_4 = var_s1 & 0xFF;
                    } else {
                        var_v1_4 = var_s1 & 0xFF;
                        if ((var_s2 & 0xFF) == (M2C_FIELD(D_801C7AB0, u8 *, 2) - 1)) {
                            var_v1_3 = (var_s1 & 0xFF) * 0x6C;
                            *(D_8031EA90 + var_v1_3) = -1;
                            var_v0_7 = var_s2 & 0xFF;
block_106:
                            var_v0_6 = var_v0_7 - 1;
block_107:
                            *(D_8031EA94 + var_v1_3) = var_v0_6;
                            var_v1_4 = var_s1 & 0xFF;
                        }
                    }
block_108:
                    temp_v0_2 = var_v1_4 * 0x6C;
                    *(D_8031EA92 + temp_v0_2) = -1;
                    *(D_8031EA96 + temp_v0_2) = -1;
                }
                var_v1_13 = var_s1 & 0xFF;
            }
            temp_v0_3 = var_v1_13 * 0x6C;
            *(D_8031EA98 + temp_v0_3) = (*(D_8031EA78 + temp_v0_3) - *(D_8031EA70 + temp_v0_3)) * 0.01f;
            *(D_8031EA9C + temp_v0_3) = (*(D_8031EA7C + temp_v0_3) - *(D_8031EA74 + temp_v0_3)) * 0.01f;
            temp_fs0 = *(D_8031EA7C + temp_v0_3) - *(D_8031EA74 + temp_v0_3);
            temp_fv0 = -(*(D_8031EA78 + temp_v0_3) - *(D_8031EA70 + temp_v0_3));
            temp_fa0 = (temp_fs0 * temp_fs0) + (temp_fv0 * temp_fv0);
            var_fv0 = sqrtf(temp_fa0);
            if (var_fv0 != var_fv0) {
                var_fv0 = sqrtf(temp_fa0, var_a0, var_a1);
            }
            *(D_8031EAA0 + temp_v0_3) = temp_fs0 / var_fv0;
            temp_s0 = (var_s1 & 0xFF) * 0x6C;
            temp_fs0_2 = -(*(D_8031EA78 + temp_s0) - *(D_8031EA70 + temp_s0));
            temp_fa0_2 = *(D_8031EA7C + temp_s0) - *(D_8031EA74 + temp_s0);
            temp_fa0_3 = (temp_fa0_2 * temp_fa0_2) + (temp_fs0_2 * temp_fs0_2);
            var_fv0_2 = sqrtf(temp_fa0_3);
            if (var_fv0_2 != var_fv0_2) {
                var_fv0_2 = sqrtf(temp_fa0_3);
            }
            *(D_8031EAA4 + temp_s0) = temp_fs0_2 / var_fv0_2;
            temp_v0_4 = (var_s1 & 0xFF) * 0x6C;
            *(D_8031EAA8 + temp_v0_4) = (*(D_8031EA80 + temp_v0_4) - *(D_8031EA78 + temp_v0_4)) * 0.01f;
            *(D_8031EAAC + temp_v0_4) = (*(D_8031EA84 + temp_v0_4) - *(D_8031EA7C + temp_v0_4)) * 0.01f;
            temp_fs0_3 = *(D_8031EA84 + temp_v0_4) - *(D_8031EA7C + temp_v0_4);
            temp_fv0_2 = -(*(D_8031EA80 + temp_v0_4) - *(D_8031EA78 + temp_v0_4));
            temp_fa0_4 = (temp_fs0_3 * temp_fs0_3) + (temp_fv0_2 * temp_fv0_2);
            var_fv0_3 = sqrtf(temp_fa0_4);
            if (var_fv0_3 != var_fv0_3) {
                var_fv0_3 = sqrtf(temp_fa0_4);
            }
            *(D_8031EAB0 + temp_v0_4) = temp_fs0_3 / var_fv0_3;
            temp_s0_2 = (var_s1 & 0xFF) * 0x6C;
            temp_fs0_4 = -(*(D_8031EA80 + temp_s0_2) - *(D_8031EA78 + temp_s0_2));
            temp_fa0_5 = *(D_8031EA84 + temp_s0_2) - *(D_8031EA7C + temp_s0_2);
            temp_fa0_6 = (temp_fa0_5 * temp_fa0_5) + (temp_fs0_4 * temp_fs0_4);
            var_fv0_4 = sqrtf(temp_fa0_6);
            if (var_fv0_4 != var_fv0_4) {
                var_fv0_4 = sqrtf(temp_fa0_6);
            }
            *(D_8031EAB4 + temp_s0_2) = temp_fs0_4 / var_fv0_4;
            temp_v0_5 = (var_s1 & 0xFF) * 0x6C;
            *(D_8031EAB8 + temp_v0_5) = (*(D_8031EA88 + temp_v0_5) - *(D_8031EA80 + temp_v0_5)) * 0.01f;
            *(D_8031EABC + temp_v0_5) = (*(D_8031EA8C + temp_v0_5) - *(D_8031EA84 + temp_v0_5)) * 0.01f;
            temp_fs0_5 = *(D_8031EA8C + temp_v0_5) - *(D_8031EA84 + temp_v0_5);
            temp_fv0_3 = -(*(D_8031EA88 + temp_v0_5) - *(D_8031EA80 + temp_v0_5));
            temp_fa0_7 = (temp_fs0_5 * temp_fs0_5) + (temp_fv0_3 * temp_fv0_3);
            var_fv0_5 = sqrtf(temp_fa0_7);
            if (var_fv0_5 != var_fv0_5) {
                var_fv0_5 = sqrtf(temp_fa0_7);
            }
            *(D_8031EAC0 + temp_v0_5) = temp_fs0_5 / var_fv0_5;
            temp_s0_3 = (var_s1 & 0xFF) * 0x6C;
            temp_fs0_6 = -(*(D_8031EA88 + temp_s0_3) - *(D_8031EA80 + temp_s0_3));
            temp_fa0_8 = *(D_8031EA8C + temp_s0_3) - *(D_8031EA84 + temp_s0_3);
            temp_fa0_9 = (temp_fa0_8 * temp_fa0_8) + (temp_fs0_6 * temp_fs0_6);
            var_fv0_6 = sqrtf(temp_fa0_9);
            if (var_fv0_6 != var_fv0_6) {
                var_fv0_6 = sqrtf(temp_fa0_9);
            }
            *(D_8031EAC4 + temp_s0_3) = temp_fs0_6 / var_fv0_6;
            temp_v0_6 = (var_s1 & 0xFF) * 0x6C;
            *(D_8031EAC8 + temp_v0_6) = (*(D_8031EA70 + temp_v0_6) - *(D_8031EA88 + temp_v0_6)) * 0.01f;
            *(D_8031EACC + temp_v0_6) = (*(D_8031EA74 + temp_v0_6) - *(D_8031EA8C + temp_v0_6)) * 0.01f;
            temp_fs0_7 = *(D_8031EA74 + temp_v0_6) - *(D_8031EA8C + temp_v0_6);
            temp_fv0_4 = -(*(D_8031EA70 + temp_v0_6) - *(D_8031EA88 + temp_v0_6));
            temp_fa0_10 = (temp_fs0_7 * temp_fs0_7) + (temp_fv0_4 * temp_fv0_4);
            var_fv0_7 = sqrtf(temp_fa0_10);
            if (var_fv0_7 != var_fv0_7) {
                var_fv0_7 = sqrtf(temp_fa0_10);
            }
            *(D_8031EAD0 + temp_v0_6) = temp_fs0_7 / var_fv0_7;
            temp_s0_4 = (var_s1 & 0xFF) * 0x6C;
            temp_fs0_8 = -(*(D_8031EA70 + temp_s0_4) - *(D_8031EA88 + temp_s0_4));
            temp_fa0_11 = *(D_8031EA74 + temp_s0_4) - *(D_8031EA8C + temp_s0_4);
            temp_fa0_12 = (temp_fa0_11 * temp_fa0_11) + (temp_fs0_8 * temp_fs0_8);
            var_fv0_8 = sqrtf(temp_fa0_12);
            if (var_fv0_8 != var_fv0_8) {
                var_fv0_8 = sqrtf(temp_fa0_12);
            }
            *(D_8031EAD4 + temp_s0_4) = temp_fs0_8 / var_fv0_8;
            var_s2 += 1;
        } while ((u32) (var_s2 & 0xFF) < (u8) M2C_FIELD(D_801C7AB0, u8 *, 2));
    }
}

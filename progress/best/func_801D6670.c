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

s32 func_801D651C();
s32 func_801D656C();
s32 func_801D663C();
extern char D_801D75E6[];
extern char D_801D7DF4[];
extern char D_801D7E00[];
extern char D_8022A770[];
extern char D_8022AD64[];
extern char D_8022AD66[];
extern char D_8022AD68[];
extern char D_8022AD6C[];
extern char D_8022AD70[];

void func_801D6670(void) {
    s32 sp14;
    f32 temp_fs0;
    s16 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s4;
    s32 var_s7;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_s3;
    u16 temp_v0;
    u16 var_a2;
    u32 var_v0;
    u32 var_v0_2;

    var_s7 = 0;
    var_v0 = 0 & 0xFFFF;
    do {
        temp_v1 = var_s7 & 0xFFFF;
        if ((*(D_8022A770 + (var_v0 * 0x8F0)) != 0xFF) & (var_v0 < 6U)) {
            var_s4 = 0;
            sp14 = temp_v1 * 0x8F0;
            var_v1 = 0 & 0xFFFF;
            do {
                temp_s0 = (var_v1 * 0x38) + sp14;
                temp_s3 = *(D_8022AD66 + temp_s0);
                var_a2 = *(D_8022AD68 + temp_s0);
                temp_fs0 = *(D_8022AD6C + temp_s0);
                temp_v0 = *(D_8022AD70 + temp_s0);
                temp_a0 = *(D_8022AD64 + temp_s0);
                if (temp_a0 != -1) {
                    if ((s16) temp_v0 != -1) {
                        var_s4 += 1;
                        func_801D651C(temp_a0, (s16) temp_v0, var_a2, -1);
                        *(D_801D7E00 + (*(D_8022AD64 + temp_s0) * 0x2C)) = 0.6f;
                        *(D_8022AD70 + temp_s0) = -1;
                        var_v0_2 = var_s4 & 0xFFFF;
                    } else {
                        if ((~*(D_801D7DF4 + (temp_a0 * 0x2C)) == 0) & (~(s16) temp_s3 != 0)) {
                            var_v0_3 = var_a2 << 0x10;
                            if ((s16) var_a2 == 2) {
                                func_801D656C(temp_a0, (s16) temp_s3, *(D_801D75E6 + ((s16) temp_s3 * 0xC)), 2);
                                func_801D651C(temp_a0, (s16) temp_s3);
                                var_a2 = 0;
                                *(D_8022AD68 + (((var_s4 & 0xFFFF) * 0x38) + (temp_v1 * 0x8F0))) = 0;
                                goto block_9;
                            }
                        } else {
block_9:
                            var_v0_3 = var_a2 << 0x10;
                        }
                        temp_v1_2 = var_v0_3 >> 0x10;
                        if (temp_v1_2 != 1) {
                            if (temp_v1_2 != 2) {
                                var_v1_2 = temp_a0 << 0x10;
                            } else {
                                func_801D656C(temp_a0, (s16) temp_s3, *(D_801D75E6 + ((s16) temp_s3 * 0xC)), 2);
                                var_v0_4 = ((var_s4 & 0xFFFF) * 0x38) + (temp_v1 * 0x8F0);
                                goto block_15;
                            }
                        } else {
                            func_801D663C(temp_a0);
                            var_v0_4 = ((var_s4 & 0xFFFF) * 0x38) + (temp_v1 * 0x8F0);
                            *(D_8022AD66 + var_v0_4) = -1;
block_15:
                            *(D_8022AD68 + var_v0_4) = 0;
                            var_v1_2 = temp_a0 << 0x10;
                        }
                        *(D_801D7E00 + ((var_v1_2 >> 0x10) * 0x2C)) = temp_fs0;
                        goto block_17;
                    }
                } else {
block_17:
                    var_s4 += 1;
                    var_v0_2 = var_s4 & 0xFFFF;
                }
                var_v1 = var_s4 & 0xFFFF;
            } while (var_v0_2 < 4U);
        }
        var_s7 += 1;
        var_v0 = var_s7 & 0xFFFF;
    } while ((u32) (var_s7 & 0xFFFF) < 7U);
}

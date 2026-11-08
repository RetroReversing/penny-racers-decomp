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

extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 func_800E1850;
extern M2C_UNK func_800E1EB0;
extern M2C_UNK func_800E22DC;
extern M2C_UNK func_801153C8;

void func_800DECCC(u16 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_v1_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a0_4;
    u16 temp_v1;
    u8 temp_v0;

    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_v0 = *(&func_801153C8 + 0x9F29 + temp_a0);
    if (temp_v0 != 0) {
        if (((temp_v0 == 1) | (temp_v0 == 4)) != 0) {
            var_v1 = arg0 & 0xFFFF;
            if (M2C_FIELD(*(&func_801153C8 + 0x9F78 + temp_a0), u16 *, 0xC) != 0xFFFF) {
                func_800DECCC(*(&func_801153C8 + 0x9F3C + temp_a0));
                var_v1 = arg0 & 0xFFFF;
            }
            temp_a0_2 = var_v1 * 0x64;
            if (M2C_FIELD(*(&func_801153C8 + 0x9F78 + temp_a0_2), u16 *, 0xA) != 0xFFFF) {
                func_800DECCC(*(&func_801153C8 + 0x9F3C + temp_a0_2));
            }
        }
        D_80126FF0 += 1;
        temp_a0_3 = (arg0 & 0xFFFF) * 0x64;
        if (*(&func_801153C8 + 0x9F29 + temp_a0_3) != 4) {
            temp_v1 = *(&func_801153C8 + 0x9F38 + temp_a0_3);
            if (temp_v1 != 0xFFFF) {
                *(&func_801153C8 + 0x9F3A + (temp_v1 * 0x64)) = *(&func_801153C8 + 0x9F3A + temp_a0_3);
            }
            temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
            temp_a0_4 = *(&func_801153C8 + 0x9F3A + temp_v1_2);
            if (temp_a0_4 != 0xFFFF) {
                *(&func_801153C8 + 0x9F38 + (temp_a0_4 * 0x64)) = *(&func_801153C8 + 0x9F38 + temp_v1_2);
                var_v1_2 = arg0 & 0xFFFF;
            } else {
                func_800E1850 = *(&func_801153C8 + 0x9F38 + ((arg0 & 0xFFFF) * 0x64));
                goto block_12;
            }
        } else {
block_12:
            var_v1_2 = arg0 & 0xFFFF;
        }
        temp_a0_5 = var_v1_2 * 0x64;
        *(&func_801153C8 + 0x9F38 + temp_a0_5) = 0xFFFF;
        *(&func_801153C8 + 0x9F3A + temp_a0_5) = D_80126FF4;
        *(&func_801153C8 + 0x9F38 + (D_80126FF4 * 0x64)) = arg0;
        D_80126FF4 = arg0;
        *(&func_801153C8 + 0x9F29 + temp_a0_5) = 0;
        if (*(&func_801153C8 + 0x9F64 + temp_a0_5) != 0xFFFF) {
            M2C_FIELD(&func_800E1EB0, u16 *, 0x20) = (u16) (M2C_FIELD(&func_800E1EB0, u16 *, 0x20) + 1);
            *(&func_800E22DC + 0x384 + (D_80126FF2 * 0x308)) = *(&func_801153C8 + 0x9F64 + temp_a0_5);
            *(&func_800E22DC + 0x386 + (*(&func_801153C8 + 0x9F64 + temp_a0_5) * 0x308)) = D_80126FF2;
            *(&func_800E22DC + 0x384 + (*(&func_801153C8 + 0x9F64 + temp_a0_5) * 0x308)) = 0xFFFF;
            D_80126FF2 = *(&func_801153C8 + 0x9F64 + temp_a0_5);
        }
    }
}

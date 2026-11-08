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

u8 func_8014BA14(u16);                              /* extern */
M2C_UNK func_801D65BC(M2C_UNK);                     /* extern */
extern M2C_UNK D_8011F2F0;
extern u16 D_80189C9E;
extern u16 D_80189CAA;
extern M2C_UNK D_8018BC35;
extern u16 D_80190CB2;

void func_8014B890(s32 arg0) {
    s32 var_v1;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_v0_2;
    u32 var_v0;
    void *temp_s0;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    default:
        var_v1 = 0;
        if (temp_v1 != 0) {
            return;
        }
        var_v0 = 0 & 0xFF;
loop_9:
        var_v0 = var_v1 & 0xFF;
        if (*(&D_8018BC35 + var_v0) != 0) {
            var_v1 += 1;
            var_v0 = var_v1 & 0xFF;
            if ((u32) (var_v1 & 0xFF) < 6U) {
                goto loop_9;
            }
        }
        if (var_v0 < 3U) {
            M2C_FIELD(temp_s0, u8 *, 0) = func_8014BA14(D_80189C9E);
            if (M2C_FIELD(temp_s0, u8 *, 0) == 0) {
                func_801D65BC(0x12);
            }
            var_v0_2 = 0xB4;
            if (M2C_FIELD(temp_s0, u8 *, 0) == 1) {
                func_801D65BC(0x14);
                var_v0_2 = 0xB4;
            }
        } else {
            M2C_FIELD(temp_s0, u8 *, 0) = func_8014BA14(D_80189CAA);
            var_v0_2 = 0xC8;
            if ((u8) M2C_FIELD(temp_s0, u8 *, 0) < 2U) {
                func_801D65BC(0x13);
                var_v0_2 = 0xC8;
            }
        }
        D_80190CB2 = var_v0_2;
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x11U;
        if (M2C_FIELD(temp_s0, u8 *, 0) == 2) {
block_22:
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xF0U;
            return;
        }
        return;
    case 0x11:
        temp_v0 = D_80190CB2 - 1;
        D_80190CB2 = temp_v0;
        if (temp_v0 & 0x8000) {
            func_801D65BC(6);
            goto block_22;
        }
        break;
    case 0xF0:
        M2C_FIELD(temp_s0, s8 *, 0xD) = 2;
        break;
    }
}

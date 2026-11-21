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

s32 func_801D74F4();
s32 func_801D754C();

void func_80225FDC(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s16 temp_a0;
    s16 var_a2;
    s32 var_a0;
    s32 var_a2_2;
    s32 var_v1;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x7CC);
    switch (temp_v0) {                              /* switch 1 */
    case 16:                                        /* switch 1 */
        var_a2 = 0x17;
        break;
    case 11:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
    case 19:                                        /* switch 1 */
    case 32:                                        /* switch 1 */
    case 33:                                        /* switch 1 */
    case 34:                                        /* switch 1 */
    case 35:                                        /* switch 1 */
    case 38:                                        /* switch 1 */
    case 39:                                        /* switch 1 */
    case 42:                                        /* switch 1 */
    case 43:                                        /* switch 1 */
        var_a2 = -2;
        break;
    case 13:                                        /* switch 1 */
    case 36:                                        /* switch 1 */
    case 37:                                        /* switch 1 */
        var_v1 = 1;
        if (!(M2C_FIELD(arg0, f32 *, 0x864) < 0.97f)) {
            var_v1 = 0;
        }
        var_a2 = (-(var_v1 & ((u32) (arg2 << 0x10) >> 0x1F)) & ~2) | 0x18;
        break;
    case 17:                                        /* switch 1 */
    case 40:                                        /* switch 1 */
    case 41:                                        /* switch 1 */
        var_a2 = 0x16;
        break;
    case 18:                                        /* switch 1 */
    case 20:                                        /* switch 1 */
        var_a2 = 0x15;
        break;
    case 15:                                        /* switch 1 */
    case 44:                                        /* switch 1 */
    case 45:                                        /* switch 1 */
        var_a2 = 0x13;
        M2C_FIELD(arg0, u16 *, 6) |= 8;
        break;
    default:                                        /* switch 1 */
        var_a2 = -1;
        break;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x860) != 0) && (M2C_FIELD(arg0, f32 *, 0x774) > 0.0f)) {
        var_a0 = 1;
        if (!(M2C_FIELD(arg0, f32 *, 0x864) < 0.97f)) {
            var_a0 = 0;
        }
        if (!(var_a0 & ((u32) var_a2 >> 0x1F))) {
            if (!(var_a2 & 0x8000) && !(M2C_FIELD(arg0, f32 *, 0x774) < 10.0f)) {
                temp_a0 = M2C_FIELD(arg0, s16 *, 0x62E);
                if (temp_a0 != var_a2) {
                    if (var_a2 == 0x16) {
                        if (temp_a0 != -1) {
                            goto block_40;
                        }
                    } else {
                        var_a2_2 = var_a2 & 0xFFFF;
                        goto block_38;
                    }
                }
            } else {
                goto block_39;
            }
        } else {
            switch (var_a2) {                       /* switch 2; irregular */
            case -3:                                /* switch 2 */
                var_a2_2 = 0x12;
                if (M2C_FIELD(arg0, s16 *, 0x62E) != 0x12) {
block_38:
                    func_801D74F4(M2C_FIELD(arg0, u16 *, 4), 1, var_a2_2, 0x3F800000);
                }
                break;
            case -2:                                /* switch 2 */
                var_a2_2 = 0x11;
                if (M2C_FIELD(arg0, s16 *, 0x62E) != 0x11) {
                    goto block_38;
                }
                break;
            case -1:                                /* switch 2 */
                var_a2_2 = 0x10;
                if (M2C_FIELD(arg0, s16 *, 0x62E) != 0x10) {
                    goto block_38;
                }
                break;
            }
        }
    } else {
block_39:
        if (M2C_FIELD(arg0, s16 *, 0x62E) != -1) {
block_40:
            func_801D754C(M2C_FIELD(arg0, u16 *, 4), 1, var_a2);
        }
    }
    M2C_FIELD(arg0, f32 *, 0x634) = 1.0f;
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x7C0);
    temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x7C8);
    M2C_FIELD(arg0, f32 *, 0x774) = (f32) (sqrtf((temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2)) * 20.0f);
}

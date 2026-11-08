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

s32 func_8019A4F8();                                /* extern */
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern void *D_801C7AB0;

s32 func_8019A31C(void) {
    s32 var_v0;

    if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
        if (((D_801C7068 == 0) | (D_801C7068 == 0x17)) != 0) {
            switch (D_801C6BB9) {                   /* irregular */
            case 0:
            case 23:
                var_v0 = 0;
                break;
            case 1:
                var_v0 = 1;
                break;
            default:
                var_v0 = (-(D_801C6BB9 != 0x16) & 3) | 2;
                break;
            }
        } else if (D_801C7068 == 1) {
            var_v0 = 4;
            if (((D_801C6BB9 == 0) | (D_801C6BB9 == 0x17)) == 0) {
                if (D_801C6BB9 == 1) {
                    var_v0 = 5;
                } else {
                    var_v0 = (-(D_801C6BB9 != 0x16) & 7) | 6;
                }
            }
        } else if (D_801C7068 == 0x16) {
            var_v0 = 8;
            if (((D_801C6BB9 == 0) | (D_801C6BB9 == 0x17)) == 0) {
                if (D_801C6BB9 == 1) {
                    var_v0 = 9;
                } else {
                    var_v0 = (-(D_801C6BB9 != 0x16) & 0xB) | 0xA;
                }
            }
        } else {
            var_v0 = 0xC;
            if (((D_801C6BB9 == 0) | (D_801C6BB9 == 0x17)) == 0) {
                if (D_801C6BB9 == 1) {
                    var_v0 = 0xD;
                } else {
                    var_v0 = (-(D_801C6BB9 != 0x16) & 0xF) | 0xE;
                }
            }
        }
    } else {
        var_v0 = func_8019A4F8();
    }
    return var_v0 & 0xFF;
}

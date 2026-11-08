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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8014A4C8();
s32 func_801CA140();
extern char D_8018A277[];
extern u8 D_80190CB2;

void func_8014B048(s32 arg0) {
    s32 var_s0;
    s32 var_v1;

    func_801CA140();
    var_s0 = 0;
    __repair_rows: {
        if ((*(D_8018A277 + var_s0) & 0x20) && (*(D_8018A277 + var_s0) != 0xFF)) {
            var_v1 = 0xF;
            if (D_80190CB2 & 2) {
                var_v1 = 0x10;
            }
            func_8014A4C8(arg0, 0xA5, (s16) ((var_s0 * 0x25) + 0x47), 7, var_v1);
        }
        var_s0 += 1;
    }
if (var_s0 < 3) goto __repair_rows;
}

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

s32 func_80223FBC(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if ((u32) ((M2C_FIELD(arg0, u8 *, 0x87B) + 6) & 0xFF) >= 0xDU) {
        var_v0 = 0x3F;
        if ((s8) M2C_FIELD(arg0, u8 *, 0x87B) < 0x40) {
            var_v0 = -0x3FU;
            if ((s8) M2C_FIELD(arg0, u8 *, 0x87B) >= -0x3F) {
                var_v0 = M2C_FIELD(arg0, u8 *, 0x87B);
            }
        }
    }
    return (s32) ((f32) ((s8) var_v0 + 0x3F) * 0.25f);
}

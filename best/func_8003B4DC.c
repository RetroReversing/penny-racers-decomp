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

s32 func_8003F5B0();
s32 func_8003FD40();
s32 func_8004077C();

s32 func_8003B4DC(void *arg0, s32 arg1, u16 *arg2, s8 arg3) {
    s32 sp10;
    s32 temp_v0;
    
    s32 var_s1;

    M2C_FIELD(arg0, s8 *, 0x65) = arg3;
    temp_v0 = func_8004077C();
    var_s1 = 0;
    if (temp_v0 != 0) {
        return temp_v0;
    }
loop_4:
    temp_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (((arg1 & 0xFF) * 8) + var_s1) & 0xFFFF, &sp10);
    if (temp_v0 == 0) {
        var_s1 += 1;
        *arg2 += func_8003FD40(&sp10, 0x20);
        if (var_s1 >= 8) {
            M2C_FIELD(arg0, s8 *, 0x65) = 0;
            return func_8004077C(arg0);
        }
        goto loop_4;
    }
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    func_8004077C(arg0);
    return temp_v0;
}

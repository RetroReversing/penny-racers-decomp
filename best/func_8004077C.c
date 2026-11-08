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

M2C_UNK func_8003F980(s32, s32, M2C_UNK, u8 *, s32); /* extern */

void func_8004077C(void *arg0) {
    union {
        unsigned char bytes[64];
        struct { unsigned char pad[24]; u8 value; } view_sp18;
        struct { unsigned char pad[56]; s32 value; } view_unksp38;
    } m2c_initial_frame;

            
    u8 *var_v1;

    var_v1 = &m2c_initial_frame.view_sp18.value;
    do {
        *var_v1 = M2C_FIELD(arg0, u8 *, 0x65);
        var_v1 += 1;
    } while ((s32) var_v1 < (s32) &m2c_initial_frame.view_unksp38.value);
    func_8003F980(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0x400, &m2c_initial_frame.view_sp18.value, 0);
}

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

s32 func_8003F5B0(s32, s32, s32, s32 *);            /* extern */
s32 func_800403E0(void *);                          /* extern */
s32 func_8004077C(void *);                          /* extern */

s32 osPfsNumFiles(void *arg0, s32 *arg1, s32 *arg2) {
    union {
        unsigned char bytes[80];
        struct { unsigned char pad[16]; s32 value; } view_sp10;
        struct { unsigned char pad[20]; u16 value; } view_sp14;
    } m2c_initial_frame;

             
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
s32 __repair_result_var_v0;

    var_s2 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0) & 1)) {
        return 5;
    }
    var_v0 = 2;
    if ((func_800403E0(arg0) != 2) && ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8004077C(arg0), (var_v0 == 0)))) {
        var_s1 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x50) > 0) {
loop_6:
            __repair_result_var_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, s32 *, 0x5C) + var_s1) & 0xFFFF, &m2c_initial_frame.view_sp10.value);
            if (__repair_result_var_v0 == 0) {
                if (m2c_initial_frame.view_sp14.value != 0) {
                    var_s2 += m2c_initial_frame.view_sp10.value != 0;
                }
                var_s1 += 1;
                if (var_s1 >= M2C_FIELD(arg0, s32 *, 0x50)) {
                    goto block_10;
                }
                goto loop_6;
            }
        } else {
block_10:
            *arg2 = var_s2;
            var_v0 = 0;
            *arg1 = M2C_FIELD(arg0, s32 *, 0x50);
        }
    }
    return var_v0;
}

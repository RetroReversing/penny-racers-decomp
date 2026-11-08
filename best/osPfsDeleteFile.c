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

s32 __osPfsReleasePages(void *, M2C_UNK *, u8, s16 *, u32, u16 *, s32); /* extern */
s32 osPfsFindFile(void *, s32, s32, M2C_UNK, s32, s32 *); /* extern */
s32 func_8003F5B0(s32, s32, s32, s32 *);            /* extern */
s32 func_8003F980(s32, s32, s32, s32 *, s32);       /* extern */
s32 func_800403E0(void *);                          /* extern */
s32 func_800404A4(void *, M2C_UNK *, M2C_UNK, u32); /* extern */
s32 func_8004077C(void *);                          /* extern */

s32 osPfsDeleteFile(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    union {
        unsigned char bytes[360];
        struct { unsigned char pad[288]; s32 value; } view_sp120;
        struct { unsigned char pad[292]; s16 value; } view_sp124;
        struct { unsigned char pad[294]; u8 value; } view_sp126;
        struct { unsigned char pad[295]; u8 value; } view_sp127;
        struct { unsigned char pad[296]; s8 value; } view_sp128;
        struct { unsigned char pad[298]; s16 value; } view_sp12A;
        struct { unsigned char pad[303]; s8 value; } view_sp12F;
        struct { unsigned char pad[319]; s8 value; } view_sp13F;
        struct { unsigned char pad[320]; s32 value; } view_sp140;
        struct { unsigned char pad[324]; s16 value; } view_sp144;
        struct { unsigned char pad[326]; u16 value; } view_sp146;
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp20;
        struct { unsigned char pad[327]; u8 value; } view_unksp147;
    } m2c_initial_frame;

                 
              
              
             
             
              
             
             
              
              
              
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_v0_2;
    s8 *var_v0_3;
    u32 var_s0;
    u8 var_s2;
    u8 var_s3;

    m2c_initial_frame.view_sp144.value = 0;
    if ((!(arg1 & 0xFFFF) | (arg2 == 0)) == 0) {
        var_v0 = 5;
        if (M2C_FIELD(arg0, s32 *, 0) & 1) {
            var_v0 = 2;
            if ((func_800403E0(arg0) != 2) && ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8004077C(arg0), (var_v0 == 0)))) {
                var_v0 = osPfsFindFile(arg0, arg1 & 0xFFFF, arg2, arg3, arg4, &m2c_initial_frame.view_sp140.value);
                if (var_v0 == 0) {
                    if (m2c_initial_frame.view_sp140.value == -1) {
                        goto block_7;
                    }
                    var_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, s32 *, 0x5C) + m2c_initial_frame.view_sp140.value) & 0xFFFF, &m2c_initial_frame.view_sp120.value);
                    if (var_v0 == 0) {
                        var_s3 = m2c_initial_frame.view_sp126.value;
                        var_s2 = m2c_initial_frame.view_sp127.value;
                        var_s0 = var_s3 & 0xFF;
                        if (var_s0 < (u8) M2C_FIELD(arg0, u8 *, 0x64)) {
loop_11:
                            var_v0 = func_800404A4(arg0, &m2c_initial_frame.view_sp20.value, 0, var_s0);
                            if (var_v0 == 0) {
                                var_v0 = __osPfsReleasePages(arg0, &m2c_initial_frame.view_sp20.value, var_s2, &m2c_initial_frame.view_sp144.value, var_s0, &m2c_initial_frame.view_sp146.value, 1);
                                if (var_v0 == 0) {
                                    var_v0 = func_800404A4(arg0, &m2c_initial_frame.view_sp20.value, 1, var_s0);
                                    if (var_v0 == 0) {
                                        if ((m2c_initial_frame.view_sp146.value == 1) || (var_s3 = (u8) m2c_initial_frame.view_sp146.value, var_s2 = m2c_initial_frame.view_unksp147.value, var_s0 = var_s3 & 0xFF, ((var_s0 < (u8) M2C_FIELD(arg0, u8 *, 0x64)) == 0))) {
                                            var_v1 = 0xF;
                                            if (var_s3 >= (u8) M2C_FIELD(arg0, u8 *, 0x64)) {
                                                goto block_17;
                                            }
                                            var_v0_2 = &m2c_initial_frame.view_sp13F.value;
                                            m2c_initial_frame.view_sp120.value = 0;
                                            m2c_initial_frame.view_sp124.value = 0;
                                            m2c_initial_frame.view_sp126.value = 0;
                                            m2c_initial_frame.view_sp12A.value = 0;
                                            do {
                                                *var_v0_2 = 0;
                                                var_v1 -= 1;
                                                var_v0_2 -= 1;
                                            } while (var_v1 >= 0);
                                            var_v1_2 = 3;
                                            var_v0_3 = &m2c_initial_frame.view_sp12F.value;
                                            do {
                                                *var_v0_3 = 0;
                                                var_v1_2 -= 1;
                                                var_v0_3 -= 1;
                                            } while (var_v1_2 >= 0);
                                            m2c_initial_frame.view_sp128.value = 0;
                                            var_v0 = func_8003F980(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (M2C_FIELD(arg0, s32 *, 0x5C) + m2c_initial_frame.view_sp140.value) & 0xFFFF, &m2c_initial_frame.view_sp120.value, 0);
                                            /* Duplicate return node #23. Try simplifying control flow for better match */
                                            return var_v0;
                                        }
                                        goto loop_11;
                                    }
                                }
                            }
                            /* Duplicate return node #23. Try simplifying control flow for better match */
                            return var_v0;
                        }
block_17:
                        return 3;
                    }
                    /* Duplicate return node #23. Try simplifying control flow for better match */
                    return var_v0;
                }
            }
        }
        return var_v0;
    }
block_7:
    return 5;
}

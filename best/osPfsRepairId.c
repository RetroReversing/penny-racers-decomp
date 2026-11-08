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

s32 func_8003F5B0(s32, s32, M2C_UNK, u8 *);         /* extern */
M2C_UNK func_8003FD78(u8 *, u16 *, u16 *);          /* extern */
s32 func_8003FDBC(void *, u8 *, u8 *);              /* extern */
s32 func_8004009C(void *, u8 *);                    /* extern */
s32 func_8004077C();                                /* extern */

s32 osPfsRepairId(void *arg0) {
    union {
        unsigned char bytes[104];
        struct { unsigned char pad[16]; u8 value; } view_sp10;
        struct { unsigned char pad[44]; u16 value; } view_sp2C;
        struct { unsigned char pad[46]; u16 value; } view_sp2E;
        struct { unsigned char pad[48]; u8 value; } view_sp30;
        struct { unsigned char pad[72]; u16 value; } view_sp48;
        struct { unsigned char pad[80]; u16 value; } view_sp50;
        struct { unsigned char pad[82]; u16 value; } view_sp52;
    } m2c_initial_frame;

            
            
             
             
    s32 temp_v0;
    
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_v0;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *var_a1;
    u8 *var_s1;
    u8 temp_v1;
    void *temp_v0_3;

    if ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_8004077C(), (var_v0 == 0))) {
        var_v0 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, &m2c_initial_frame.view_sp10.value);
        if (var_v0 == 0) {
            func_8003FD78(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp50.value, &m2c_initial_frame.view_sp52.value);
            var_s1 = &m2c_initial_frame.view_sp10.value;
            if ((m2c_initial_frame.view_sp2C.value != m2c_initial_frame.view_sp50.value) || (m2c_initial_frame.view_sp2E.value != m2c_initial_frame.view_sp52.value)) {
                temp_v0 = func_8004009C(arg0, var_s1);
                if (temp_v0 == 0xA) {
                    temp_a1 = var_s1;
                    var_s1 = &m2c_initial_frame.view_sp30.value;
                    temp_v0 = func_8003FDBC(arg0, temp_a1, var_s1);
                    if (temp_v0 != 0) {
                        return temp_v0;
                    }
                    goto block_9;
                }
                var_v0 = temp_v0;
                if (temp_v0 == 0) {
                    goto block_9;
                }
                /* Duplicate return node #16. Try simplifying control flow for better match */
                return var_v0;
            }
block_9:
            var_a0 = 0;
            if (!(M2C_FIELD(var_s1, u16 *, 0x18) & 1)) {
                temp_a1_2 = var_s1;
                var_s1 = &m2c_initial_frame.view_sp30.value;
                var_v0 = func_8003FDBC(arg0, temp_a1_2, var_s1);
                if (var_v0 == 0) {
                    var_a0 = 0;
                    if (!(m2c_initial_frame.view_sp48.value & 1)) {
                        return 0xB;
                    }
                    goto block_13;
                }
                /* Duplicate return node #16. Try simplifying control flow for better match */
                return var_v0;
            }
block_13:
            var_a1 = var_s1;
            do {
                temp_v0_3 = arg0 + var_a0;
                var_a0 += 1;
                M2C_FIELD(temp_v0_3, u8 *, 0xC) = (u8) *var_a1;
                var_a1 += 1;
            } while (var_a0 < 0x20);
            M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(var_s1, u8 *, 0x1B);
            temp_v1 = M2C_FIELD(var_s1, u8 *, 0x1A);
            M2C_FIELD(arg0, s32 *, 0x50) = 0x10;
            M2C_FIELD(arg0, s32 *, 0x54) = 8;
            M2C_FIELD(arg0, u8 *, 0x64) = temp_v1;
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) ((temp_v1 * 2) + 3);
            temp_v0_4 = (M2C_FIELD(arg0, u8 *, 0x64) + 1) * 8;
            M2C_FIELD(arg0, s32 *, 0x58) = temp_v0_4;
            M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_v0_4 + (M2C_FIELD(arg0, u8 *, 0x64) * 8));
            temp_v0_5 = func_8003F5B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 7, arg0 + 0x2C);
            var_v0 = temp_v0_5 & -(temp_v0_5 != 0);
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}

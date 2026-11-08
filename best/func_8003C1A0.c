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

s32 func_8003C530(s32, s32);                        /* extern */
M2C_UNK func_8003F464();                            /* extern */
M2C_UNK func_8003F4D0();                            /* extern */
s32 func_8003F5B0(s32, s32, M2C_UNK, u8 *);         /* extern */
M2C_UNK func_8003FD78(u8 *, u16 *, u16 *);          /* extern */
s32 func_8003FDBC(void *, u8 *, u8 *);              /* extern */
s32 func_8004009C(void *, u8 *);                    /* extern */
s32 func_8004077C(s32 arg0, void *);                          /* extern */
s32 func_800407D0(void *);                          /* extern */

s32 func_8003C1A0(s32 arg0, void *arg1, s32 arg2) {
    union {
        unsigned char bytes[112];
        struct { unsigned char pad[16]; u8 value; } view_sp10;
        struct { unsigned char pad[44]; u16 value; } view_sp2C;
        struct { unsigned char pad[46]; u16 value; } view_sp2E;
        struct { unsigned char pad[48]; u8 value; } view_sp30;
        struct { unsigned char pad[72]; u16 value; } view_sp48;
        struct { unsigned char pad[80]; u16 value; } view_sp50;
        struct { unsigned char pad[82]; u16 value; } view_sp52;
    } m2c_initial_frame;

            
            
             
             
    
    s32 temp_v0_2;
    
    s32 var_a0;
    s32 var_v0;
s32 __repair_phase_var_v0;
    u8 *temp_a1;
    u8 *var_a1;
    u8 *var_s2;
    u8 temp_v1;
    void *temp_v0;

    func_8003F464();
    __repair_phase_var_v0 = func_8003C530(arg0, arg2);
    func_8003F4D0();
    var_v0 = __repair_phase_var_v0;
    if (__repair_phase_var_v0 == 0) {
        M2C_FIELD(arg1, s32 *, 4) = arg0;
        M2C_FIELD(arg1, s32 *, 8) = arg2;
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, s8 *, 0x65) = 0;
        var_v0 = func_8004077C(arg0, arg1);
        if (var_v0 == 0) {
            var_v0 = func_8003F5B0(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), 1, &m2c_initial_frame.view_sp10.value);
            if ((var_v0 == 0) && (((func_8003FD78(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp50.value, &m2c_initial_frame.view_sp52.value), var_s2 = &m2c_initial_frame.view_sp10.value, (m2c_initial_frame.view_sp2C.value == m2c_initial_frame.view_sp50.value)) && (m2c_initial_frame.view_sp2E.value == m2c_initial_frame.view_sp52.value)) || (var_v0 = func_8004009C(arg1, var_s2), (var_v0 == 0)))) {
                var_a0 = 0;
                if (!(M2C_FIELD(var_s2, u16 *, 0x18) & 1)) {
                    temp_a1 = var_s2;
                    var_s2 = &m2c_initial_frame.view_sp30.value;
                    __repair_phase_var_v0 = func_8003FDBC(arg1, temp_a1, var_s2);
                    if (__repair_phase_var_v0 == 0) {
                        var_a0 = 0;
                        if (!(m2c_initial_frame.view_sp48.value & 1)) {
                            return 0xB;
                        }
                        goto block_10;
                    }
                    /* Duplicate return node #14. Try simplifying control flow for better match */
                    return __repair_phase_var_v0;
                }
block_10:
                var_a1 = var_s2;
                __repair_rows: {
                    temp_v0 = arg1 + var_a0;
                    var_a0 += 1;
                    M2C_FIELD(temp_v0, u8 *, 0xC) = (u8) *var_a1;
                    var_a1 += 1;
                }
if (var_a0 < 0x20) goto __repair_rows;
                M2C_FIELD(arg1, s32 *, 0x4C) = (s32) M2C_FIELD(var_s2, u8 *, 0x1B);
                temp_v1 = M2C_FIELD(var_s2, u8 *, 0x1A);
                M2C_FIELD(arg1, s32 *, 0x50) = 0x10;
                M2C_FIELD(arg1, s32 *, 0x54) = 8;
                M2C_FIELD(arg1, u8 *, 0x64) = temp_v1;
                M2C_FIELD(arg1, s32 *, 0x60) = (s32) ((temp_v1 * 2) + 3);
                temp_v0_2 = (M2C_FIELD(arg1, u8 *, 0x64) + 1) * 8;
                M2C_FIELD(arg1, s32 *, 0x58) = temp_v0_2;
                M2C_FIELD(arg1, s32 *, 0x5C) = (s32) (temp_v0_2 + (M2C_FIELD(arg1, u8 *, 0x64) * 8));
                temp_v0_2 = func_8003F5B0(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), 7, arg1 + 0x2C);
                var_v0 = temp_v0_2;
                if (temp_v0_2 == 0) {
                    var_v0 = func_800407D0(arg1);
                    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 1);
                }
                /* Duplicate return node #14. Try simplifying control flow for better match */
                return var_v0;
            }
        }
    }
    return var_v0;
}

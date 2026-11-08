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

M2C_UNK func_80033E30(s32, M2C_UNK, M2C_UNK);       /* extern */
u32 func_8003C530(s32, s32);                        /* extern */
M2C_UNK func_8003F350(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_8003F464(u32);                         /* extern */
M2C_UNK func_8003F4D0();                            /* extern */
s32 func_8003F548(M2C_UNK, s32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_8003FBA0(s32, s32, M2C_UNK);           /* extern */
extern s8 D_80092C04;
extern M2C_UNK D_800DD3E0;

u32 func_8003F980(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    union {
        unsigned char bytes[96];
        struct { unsigned char pad[16]; M2C_UNK value; } view_sp10;
        struct { unsigned char pad[18]; u8 value; } view_sp12;
        struct { unsigned char pad[54]; u8 value; } view_sp36;
    } m2c_initial_frame;

                 
    M2C_UNK *var_a0;
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s32 var_a1;
    s32 var_s2;
    s32 var_v1;
    u32 temp_a0;
    u32 var_s0;
    u32 var_v0;
    void *temp_t0;

    var_s2 = 2;
    temp_a0 = arg2 & 0xFFFF;
    if (!((arg4 != 1) & (temp_a0 < 7U)) || (var_v0 = 0, (temp_a0 == 0))) {
        func_8003F464(temp_a0);
        D_80092C04 = 3;
        func_8003FBA0(arg1, arg2 & 0xFFFF, arg3);
        func_8003F350(1, &D_800DD3E0);
        func_80033E30(arg0, 0, 1);
loop_3:
        func_8003F350(0, &D_800DD3E0);
        func_80033E30(arg0, 0, 1);
        var_a0 = &D_800DD3E0;
        if (arg1 != 0) {
            var_v1 = 0;
            if (arg1 > 0) {
                do {
                    var_v1 += 1;
                    var_a0 += 1;
                } while (var_v1 < arg1);
            }
        }
        var_a3 = &m2c_initial_frame.view_sp10.value;
        var_a2 = var_a0;
        temp_t0 = var_a2 + 0x20;
        if (((s32) var_a2 | (s32) var_a3) & 3) {
            do {
                var_a1 = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 0xC));
                M2C_FIELD(var_a3, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 0));
                M2C_FIELD(var_a3, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 4));
                M2C_FIELD(var_a3, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 8));
                M2C_FIELD(var_a3, M2C_UNK *, 0xC) = var_a1;
                var_a2 += 0x10;
                var_a3 += 0x10;
            } while (var_a2 != temp_t0);
        } else {
            do {
                var_a1 = M2C_FIELD(var_a2, s32 *, 0xC);
                M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
                M2C_FIELD(var_a3, s32 *, 0xC) = var_a1;
                var_a2 += 0x10;
                var_a3 += 0x10;
            } while (var_a2 != temp_t0);
        }
        M2C_FIELD(var_a3, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 0));
        M2C_FIELD(var_a3, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, M2C_UNK *, 4));
        var_s0 = (u32) (m2c_initial_frame.view_sp12.value & 0xC0) >> 4;
        if (var_s0 != 0) {
            var_s0 = 1;
            goto block_16;
        }
        if ((func_8003F548(arg3, var_a1, var_a2, var_a3) & 0xFF) != m2c_initial_frame.view_sp36.value) {
            var_s0 = func_8003C530(arg0, arg1);
            if (var_s0 == 0) {
                var_s0 = 4;
                goto block_16;
            }
        } else {
block_16:
            if (var_s0 == 4) {
                var_s2 -= 1;
                if (var_s2 >= 0) {
                    goto loop_3;
                }
            }
        }
        func_8003F4D0();
        var_v0 = var_s0;
    }
    return var_v0;
}

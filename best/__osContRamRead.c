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

M2C_UNK osRecvMesg(s32, M2C_UNK, M2C_UNK);       /* extern */
u32 __osPfsGetStatus(s32, s32);                        /* extern */
M2C_UNK func_8003F350(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_8003F464();                            /* extern */
M2C_UNK func_8003F4D0();                            /* extern */
s32 __osContDataCrc(u8 *, s32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK __osPackRamReadData(s32, s32);                    /* extern */
extern s8 D_80092C04;
extern M2C_UNK D_800DD3E0;

u32 __osContRamRead(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    union {
        unsigned char bytes[104];
        struct { unsigned char pad[16]; M2C_UNK value; } view_sp10;
        struct { unsigned char pad[18]; u8 value; } view_sp12;
        struct { unsigned char pad[22]; u8 value; } view_sp16;
        struct { unsigned char pad[54]; u8 value; } view_sp36;
    } m2c_initial_frame;

                 
            
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    M2C_UNK *var_s1;
    s32 var_a1;
    s32 var_s4;
    s32 var_v1;
    u32 var_s0;
    u8 *temp_a0;
    u8 *var_s3;
    u8 *var_v1_2;
    u8 temp_v0;
    void *temp_t0;

    var_s3 = arg3;
    var_s4 = 2;
    func_8003F464();
    D_80092C04 = 2;
    __osPackRamReadData(arg1, arg2 & 0xFFFF);
    func_8003F350(1, &D_800DD3E0);
    osRecvMesg(arg0, 0, 1);
loop_1:
    func_8003F350(0, &D_800DD3E0);
    osRecvMesg(arg0, 0, 1);
    var_s1 = &D_800DD3E0;
    if (arg1 != 0) {
        var_v1 = 0;
        if (arg1 > 0) {
            do {
                var_v1 += 1;
                var_s1 += 1;
            } while (var_v1 < arg1);
        }
    }
    var_a3 = &m2c_initial_frame.view_sp10.value;
    var_a2 = var_s1;
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
        goto block_17;
    }
    if ((__osContDataCrc(&m2c_initial_frame.view_sp16.value, var_a1, var_a2, var_a3) & 0xFF) != m2c_initial_frame.view_sp36.value) {
        var_s0 = __osPfsGetStatus(arg0, arg1);
        if (var_s0 == 0) {
            var_s0 = 4;
block_17:
            goto block_18;
        }
    } else {
        var_v1_2 = &m2c_initial_frame.view_sp16.value;
        temp_a0 = var_v1_2 + 0x20;
        do {
            temp_v0 = *var_v1_2;
            var_v1_2 += 1;
            *var_s3 = temp_v0;
            var_s3 += 1;
        } while ((s32) var_v1_2 < (s32) temp_a0);
block_18:
        if (var_s0 == 4) {
            var_s4 -= 1;
            if (var_s4 >= 0) {
                goto loop_1;
            }
        }
    }
    func_8003F4D0();
    return var_s0;
}

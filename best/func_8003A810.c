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

M2C_UNK func_80033A90(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
u64 func_80033B90();                                /* extern */
M2C_UNK func_80033E30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8003A9AC(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8003AA60(M2C_UNK);                     /* extern */
M2C_UNK func_8003EF90(M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_8003F350(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_8003F410();                            /* extern */
extern s32 D_80048110;
extern M2C_UNK D_8006F990;
extern s8 D_8006FE78;
extern s8 D_80092C04;
extern M2C_UNK D_800DA1B0;
extern M2C_UNK D_800DDEA0;

s32 func_8003A810(M2C_UNK *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp20;
    M2C_UNK sp40;
    M2C_UNK sp58;
    s32 temp_s0;
    u64 temp_ret;
    u64 temp_v0;

    if (D_80048110 != 0) {
        return 0;
    }
    D_80048110 = 1;
    temp_ret = func_80033B90();
    temp_v0 = temp_ret;
    if (temp_v0 == 0) {
        if (temp_v0 == 0) {
            if ((u32) temp_ret <= 0x0165A0BBU) {
                goto block_6;
            }
        } else {
block_6:
            func_80033A90(&sp40, &sp58, 1);
            func_8003EF90(&sp20, 0, 0, &sp40, &sp58);
            func_80033E30(&sp40, &sp58, 1);
        }
    }
    D_8006FE78 = 4;
    func_8003AA60(0);
    func_8003F350(1, &D_8006F990);
    func_80033E30(arg0, &sp58, 1);
    temp_s0 = func_8003F350(0, &D_8006F990);
    func_80033E30(arg0, &sp58, 1);
    func_8003A9AC(arg1, arg2);
    D_80092C04 = 0;
    func_8003F410();
    func_80033A90(&D_800DDEA0, &D_800DA1B0, 1);
    return temp_s0;
}

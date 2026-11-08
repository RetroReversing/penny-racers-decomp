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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80033A90();
u64 osGetTime();                                /* extern */
s32 osRecvMesg(s32 *, s32 *, s32); /* extern */
s32 func_8003A9AC();
s32 __osPackRequestData(s32);                     /* extern */
s32 func_8003EF90();
s32 func_8003F350();
s32 func_8003F410();
extern s32 D_80048110;
extern char D_8006F990[];
extern s8 D_8006FE78;
extern s8 D_80092C04;
extern char D_800DA1B0[];
extern char D_800DDEA0[];

s32 osContInit(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp20;
    s32 sp40;
    s32 sp58;
    s32 temp_s0;
    u64 temp_ret;
    u64 temp_v0;

    if (D_80048110 != 0) {
        return 0;
    }
    D_80048110 = 1;
    temp_ret = osGetTime();
    temp_v0 = temp_ret;
    if (temp_v0 == 0) {
        if (temp_v0 == 0) {
            if ((u32) temp_ret <= 0x0165A0BBU) {
                goto block_6;
            }
        } else {
block_6:
            func_80033A90(&sp40, &sp58, 1);
            func_8003EF90(&sp20);
            osRecvMesg(&sp40, &sp58, 1);
        }
    }
    D_8006FE78 = 4;
    __osPackRequestData(0);
    func_8003F350(1, &D_8006F990);
    osRecvMesg(arg0, &sp58, 1);
    temp_s0 = func_8003F350(0, &D_8006F990);
    osRecvMesg(arg0, &sp58, 1);
    func_8003A9AC(arg1, arg2);
    D_80092C04 = 0;
    func_8003F410();
    func_80033A90(&D_800DDEA0, &D_800DA1B0, 1);
    return temp_s0;
}

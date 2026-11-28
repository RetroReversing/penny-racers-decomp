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
M2C_UNK __osPackReadData();                            /* extern */
s32 __osSiRawStartDma(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK __osSiGetAccess();                            /* extern */
M2C_UNK __osSiRelAccess();                            /* extern */
extern M2C_UNK D_8006F990;
extern u8 D_80092C04;

s32 osContStartReadData(s32 arg0) {
    s32 temp_v0;

    __osSiGetAccess();
    if (D_80092C04 != 1) {
        __osPackReadData();
        __osSiRawStartDma(1, &D_8006F990);
        osRecvMesg(arg0, 0, 1);
    }
    temp_v0 = __osSiRawStartDma(0, &D_8006F990);
    D_80092C04 = 1;
    __osSiRelAccess();
    return temp_v0;
}

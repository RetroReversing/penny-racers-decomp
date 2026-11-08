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

M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osSendMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80048160;
extern M2C_UNK D_8006E760;
extern M2C_UNK D_8006FF50;

void func_8003DA04(void) {
    M2C_UNK sp10;

    if (D_80048160 == 0) {
        D_80048160 = 1;
        osCreateMesgQueue(&D_8006FF50, &D_8006E760, 1);
        osSendMesg(&D_8006FF50, 0, 0);
    }
    osRecvMesg(&D_8006FF50, &sp10, 1);
}

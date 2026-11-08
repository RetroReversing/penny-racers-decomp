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

M2C_UNK func_8002A440(u8 *, M2C_UNK *, s32);        /* extern */
M2C_UNK func_80033A90(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osSendMesg(M2C_UNK *, s16 *, M2C_UNK);   /* extern */
M2C_UNK func_8003DDC0(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 D_80046D6C;
extern M2C_UNK D_80092BE0;

void func_80029070(void *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    M2C_UNK sp10;
    s16 sp28;
    M2C_UNK *sp2C;
    void *sp30;
    M2C_UNK *sp34;
    M2C_UNK *sp38;
    s32 sp3C;
    s32 sp40;
    M2C_UNK sp48;
    M2C_UNK sp68;
    M2C_UNK sp70;
    s32 var_a2;
    u8 *var_v1;

    if ((D_80046D6C != 0) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        func_8003DDC0(&sp48, 0x20);
        func_8003DDC0(&sp68, 4);
        var_a2 = 0;
        if (*arg1 != 0) {
            var_v1 = arg1;
            do {
                var_v1 += 1;
                var_a2 += 1;
            } while (*var_v1 != 0);
        }
        func_8002A440(arg1, &sp48, var_a2);
        func_8002A440(arg2, &sp68, 1);
        func_80033A90(&sp10, &sp70, 1);
        sp28 = 0x2003;
        sp30 = arg0;
        sp2C = &sp10;
        sp34 = &sp48;
        sp38 = &sp68;
        sp3C = arg4;
        sp40 = arg3;
        osSendMesg(&D_80092BE0, &sp28, 1);
        osRecvMesg(&sp10, 0, 1);
    }
}

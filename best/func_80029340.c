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
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK osSendMesg(M2C_UNK *, s16 *, M2C_UNK);      /* extern */
extern s32 D_80046D6C;
extern M2C_UNK D_80092BE0;

void func_80029340(s32 arg0, s32 arg1) {
    M2C_UNK sp10;
    s16 sp28;
    M2C_UNK *sp2C;
    s32 sp30;
    s32 sp34;
    M2C_UNK sp38;

    if (D_80046D6C != 0) {
        func_80033A90(&sp10, &sp38, 1);
        sp30 = arg0;
        sp28 = 0x2006;
        sp2C = &sp10;
        sp34 = arg1;
        do { osSendMesg(&D_80092BE0, &sp28, 1); } while (0);
        /*__repair_pointer_balance*/if ((unsigned long)sp2C & 0x100) {
osRecvMesg(&sp10, 0, 1);
} else {
osRecvMesg(&sp10, 0, 1);
}
    }
}

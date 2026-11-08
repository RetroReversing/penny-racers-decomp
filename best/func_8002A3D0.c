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
s32 osRecvMesg(s32 *, s32, s32); /* extern */
s32 osSendMesg(s32 *);   /* extern */
extern s32 D_8006FEF8;
extern char D_80092BE0[];

void func_8002A3D0(void) {
    s16 sp10;
    s32 *sp14;
    s32 sp18;
    s32 sp30;

    if (D_8006FEF8 != 0) {
        func_80033A90(&sp18, &sp30, 1);
        sp10 = 0x1002;
        sp14 = &sp18;
        osSendMesg(&D_80092BE0);
        /*__repair_pointer_balance*/if ((unsigned long)sp14 & 0x10000) {
if ((unsigned long)sp14 & 0x100) {
osRecvMesg(&sp18, 0, 1);
} else {
osRecvMesg(&sp18, 0, 1);
}
} else {
if ((unsigned long)sp14 & 0x100) {
osRecvMesg(&sp18, 0, 1);
} else {
osRecvMesg(&sp18, 0, 1);
}
}
    }
}

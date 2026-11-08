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
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osSendMesg(M2C_UNK *, s16 *, M2C_UNK);   /* extern */
extern s32 D_80046D6C;
extern M2C_UNK D_80092BE0;
extern M2C_UNK D_800DDEB8;

void func_80028EB0(void **arg0, s32 arg1) {
    M2C_UNK sp10;
    s16 sp28;
    M2C_UNK *sp2C;
    void **sp30;
    M2C_UNK sp38;
    void *temp_v0;

    if (D_80046D6C != 0) {
        func_80033A90(&sp10, &sp38, 1);
        temp_v0 = (char *)((arg1 * 0x68)); temp_v0 += (s32)(&D_800DDEB8);
        *arg0 = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 8) = arg1;
        sp28 = 0x2001;
        sp30 = arg0;
        sp2C = &sp10;
        osSendMesg(&D_80092BE0, &sp28, 1);
        /*__repair_pointer_balance*/if ((unsigned long)sp2C & 0x100) {
osRecvMesg(&sp10, 0, 1);
} else {
osRecvMesg(&sp10, 0, 1);
}
    }
}

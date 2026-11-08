/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_800338B0(s32, s32);                    /* extern */
s32 osCartRomInit();                                /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK osEPiStartDma(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK osRecvMesg(M2C_UNK *, M2C_UNK *, M2C_UNK);  /* extern */

void func_800294A0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp10;
    s8 sp12;
    M2C_UNK *sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    M2C_UNK sp28;
    M2C_UNK sp40;
    s32 temp_s1;

    temp_s1 = osCartRomInit();
    osCreateMesgQueue(&sp28, &sp40, 1);
    func_800338B0(arg1, arg2);
    sp12 = 0;
    sp14 = &sp28;
    sp18 = arg1;
    sp1C = arg0;
    sp20 = arg2;
    osEPiStartDma(temp_s1, &sp10, 0);
    osRecvMesg(&sp28, &sp40, 1);
}

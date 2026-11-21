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

M2C_UNK alSeqpSetVol(M2C_UNK *, s16);               /* extern */
M2C_UNK alSeqpStop(M2C_UNK *);                      /* extern */
M2C_UNK func_80027C90(M2C_UNK, s32);                /* extern */
M2C_UNK func_80027D00(M2C_UNK);                     /* extern */
extern M2C_UNK D_8006FB38;
extern u8 D_8021F028;

void func_801D65BC(s32 arg0) {
    u8 *__base_D_8021F028;
    alSeqpStop(&D_8006FB38);
    __base_D_8021F028 = &D_8021F028;
    if ((*__base_D_8021F028) != 0) {
        func_80027C90(0, arg0);
        func_80027D00(0);
        alSeqpSetVol(&D_8006FB38, (s16) ((*__base_D_8021F028) * 0x43E));
    }
}

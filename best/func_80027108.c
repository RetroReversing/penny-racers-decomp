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

s32 alLink();
s32 alHeapDBAlloc();
extern u8 D_8005D7A0;
extern s32 D_8005D7A4;
extern s32 *D_8005D7A8;
extern s32 D_8005D7B0;
extern s32 D_8005D7B4;
extern char D_8005D7C0[];
extern s32 D_8005DCB0;
extern char D_8006E780[];
extern s32 func_80026F60;

s32 *func_80027108(u8 **arg0) {
    char *var_s0;
    char *var_s3;
    s32 var_s1;
    s32 var_s2;

    if (D_8005D7A0 == 0) {
        var_s1 = 0;
        var_s0 = &D_8005D7B0;
        var_s3 = D_8005D7B0 + 0x14;
        var_s2 = 0;
        D_8005D7A8 = &D_8005D7B0;
        D_8005D7A4 = 0;
        D_8005D7B4 = 0;
        D_8005D7B0 = 0;
        do {
            alLink(var_s3, var_s0);
            var_s0 += 0x14;
            var_s3 += 0x14;
            *(D_8005D7C0 + var_s2) = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x400);/*__repair_loop_weight*/do {
            var_s1 += 1;} while (0);
            var_s2 += 0x14;
        } while (var_s1 < 0x3F);
        *(D_8005D7C0 + (var_s1 * 0x14)) = alHeapDBAlloc(0, 0, &D_8006E780, 1, 0x400);
        D_8005D7A0 += 1;
    }
    D_8005DCB0 = 0;
    *arg0 = &D_8005D7A0;
    return &func_80026F60;
}

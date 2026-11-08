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

s32 func_8002D164();
extern void *D_80046DF4;

void n_alSndpSetPitch(f32 arg0) {
    s16 sp10;
    s32 sp14;
    f32 sp18;
    void *temp_a0;

    temp_a0 = M2C_FIELD(D_80046DF4, void **, 0xC);
    sp10 = 4;
    sp18 = arg0;
    sp14 = M2C_FIELD(temp_a0, s32 *, 0x40) + (M2C_FIELD(temp_a0, s32 *, 0x3C) * 0x30);
    do { func_8002D164(temp_a0 + 0x14, &sp10); } while (0);
}

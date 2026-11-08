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

s32 __osDisableInt();                                /* extern */
M2C_UNK func_8003EAE0(s32);                         /* extern */
extern void *D_800481F4;

void func_8003A0F0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = __osDisableInt();
    M2C_FIELD(D_800481F4, s32 *, 4) = arg0;
    M2C_FIELD(D_800481F4, u16 *, 0) = (u16) (M2C_FIELD(D_800481F4, u16 *, 0) | 0x10);
    func_8003EAE0(temp_v0);
}

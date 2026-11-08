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

M2C_UNK n_alFxNew(s32);                         /* extern */
extern void *D_80046DF4;

s32 n_alSynAllocFX(s32 arg0) {
    s32 temp_s0;

    temp_s0 = (s32) (arg0 << 0x10) >> 0xE;
    n_alFxNew(M2C_FIELD(D_80046DF4, s32 *, 0x40) + (temp_s0 + 0x24));
    return M2C_FIELD((temp_s0 + M2C_FIELD(D_80046DF4, s32 *, 0x40)), s32 *, 0x24);
}

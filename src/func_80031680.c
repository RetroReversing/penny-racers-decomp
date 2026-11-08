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

M2C_UNK func_8003191C(s32, f32, s32);               /* extern */

void func_80031680(s32 arg0, void *arg1) {
/* Inferred frame reservation; original purpose unknown. */
char __repair_stack_padding[16];
    if ((M2C_FIELD(arg1, u8 *, 8) == 0xFF) && (M2C_FIELD(arg1, u8 *, 9) == 0x51)) {
        func_8003191C(arg0, (f32) ((M2C_FIELD(arg1, u8 *, 0xB) << 0x10) | (M2C_FIELD(arg1, u8 *, 0xC) << 8) | M2C_FIELD(arg1, u8 *, 0xD)), arg0);
    }
}

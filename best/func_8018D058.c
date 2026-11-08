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

M2C_UNK func_80029890(u8, void *, M2C_UNK);         /* extern */
M2C_UNK func_801E2E00(s32, void *);                 /* extern */
extern M2C_UNK D_801E91C8;
extern M2C_UNK D_801E97CC;

void func_8018D058(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg0 & 0xFFFF;
    temp_s1 = temp_s2 * 0x30;
    func_801E2E00(temp_s2, temp_s1 + &D_801E97CC);
    func_80029890(*(&D_801E91C8 + temp_s2), temp_s1 + (&D_801E97CC - 0x2C), 0x30);
}

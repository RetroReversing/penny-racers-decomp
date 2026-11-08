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

extern char D_8011F2FD[];
extern char D_8011F32E[];
extern u8 D_80190CB2;
extern u16 D_80190CB4;

void func_8014AFD8(s32 arg0) {
    if (*(D_8011F32E + (D_80190CB4 * 0x64)) == 0x30) {
        *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
    D_80190CB2 += 1;
}

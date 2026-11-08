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

s32 func_800DE41C();
s32 func_8021F5F0();
s32 func_8021FCA4();
extern char D_8011F2F4[];
extern char D_8011F2F8[];
extern char D_8021FE04[];
extern char D_8022026C[];
extern char D_80220454[];
extern char D_8022063C[];
extern s32 func_80139F14;

void func_80231A0C(void) {
    s32 temp_v1;

    temp_v1 = (func_800DE41C(0, 0, 3, 0, 0x20, 0xFF, 0, 0, &func_80139F14, 0, 0, 0, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
    *(D_8011F2F4 + temp_v1) = *(D_8011F2F4 + temp_v1) | 0x20;
    *(D_8011F2F4 + 2 + temp_v1) = *(D_8011F2F4 + 2 + temp_v1) | 0x20;
    *(D_8011F2F8 + temp_v1) = *(D_8011F2F8 + temp_v1) | 0x20;
    func_8021F5F0();
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x21, 0xFF, 0, 0, &D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, 0, &D_80220454, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, 0, &D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x70, 0xFF, 0, 0, &D_8022063C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

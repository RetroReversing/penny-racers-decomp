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

s32 func_800DECCC();
extern char D_8011F2FC[];

void func_801FCCC4(void **arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_a0;

    temp_v1 = (arg1 & 0xFFFF) * 0x64;
    if ((u8) *(D_8011F2FC + temp_v1) >= 3U) {
        *(D_8011F2FC + temp_v1) = *(D_8011F2FC + temp_v1) - 2;
        temp_a0 = *arg0;
        *arg0 = temp_a0 + 8;
        M2C_FIELD(temp_a0, s32 *, 0) = 0xFA000000;
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (*(D_8011F2FC + temp_v1) | 0xC8C8C800);
        return;
    }
    func_800DECCC(arg1 & 0xFFFF, arg0);
}

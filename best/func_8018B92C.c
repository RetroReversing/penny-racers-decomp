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

s32 func_801CA140();
extern u8 D_801E87E5;
extern s32 func_8011EDAC;
extern s32 func_80220E94;

void func_8018B92C(void **arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_s1;
    void *temp_v1;

    temp_a1 = arg1 & 0xFFFF;
    temp_s1 = temp_a1 * 0x64;
    if (!(*(&func_8011EDAC + 0x546 + temp_s1) & 0x10)) {
        func_801CA140(arg0, temp_a1);
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        M2C_FIELD(temp_v1, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1, void **, 4) = (void *) (&func_80220E94 + 0x44);
        D_801E87E5 = *(&func_8011EDAC + 0x544 + temp_s1);
    }
}

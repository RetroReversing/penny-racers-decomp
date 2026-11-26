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

void func_801CA468(void **arg0_in, s32 arg1) {
  void ** arg0;
    void *temp_v1;
    void *temp;

    arg0 = arg0_in;
    temp_v1 = *arg0;
    temp = (void *)(temp_v1); temp = (void *)((char *)temp + (s32)(8));
    (*(s32 *)((s8 *)temp_v1 + 0)) = 0xFA000000;
    do { } while (0);
    (*(s32 *)((s8 *)temp_v1 + 4)) = (s32) ((arg1 & 0xFF) | ~0xFF);
    *arg0 = temp;
}

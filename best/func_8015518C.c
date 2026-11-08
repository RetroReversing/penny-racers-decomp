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

extern char D_8011F32E[];
extern char D_802DA048[];

void func_8015518C(void **arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xFD48001F;
    M2C_FIELD(temp_v1, s32 **, 4) = &D_802DA048;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xF5480800;
    M2C_FIELD(temp_v1_2, s32 **, 4) = (s32 *)0x07014050;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xE6000000;
    M2C_FIELD(temp_v1_3, s32 **, 4) = NULL;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xF4000000;
    M2C_FIELD(temp_v1_4, s32 **, 4) = (s32 *)0x0707C07C;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    M2C_FIELD(temp_v1_5, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_5, s32 **, 4) = NULL;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 0) = 0xF5480800;
    M2C_FIELD(temp_v1_6, s32 **, 4) = (s32 *)0x14050;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    M2C_FIELD(temp_v1_7, s32 *, 0) = 0xF2000000;
    M2C_FIELD(temp_v1_7, s32 **, 4) = (s32 *)0x7C07C;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    M2C_FIELD(temp_v1_8, s32 *, 0) = (s32) ((*(D_8011F32E + ((arg1 & 0xFFFF) * 0x64)) & 0xFFF) | 0xF2000000);
    M2C_FIELD(temp_v1_8, s32 **, 4) = (s32 *)0x7C07C;
}

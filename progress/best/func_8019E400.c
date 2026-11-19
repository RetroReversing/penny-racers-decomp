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

extern u8 D_80126FF6;
extern M2C_UNK D_801C57A0;
extern M2C_UNK D_801C57B0;

void func_8019E400(void **arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = NULL;
    if (D_80126FF6 == 0) {
        temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0x03800010;
        M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_801C57A0;
        temp_v1_3 = *arg0;
        *arg0 = temp_v1_3 + 8;
        M2C_FIELD(temp_v1_3, s32 *, 0) = 0xED000000;
        var_v0 = 0x3BC3BC;
    } else {
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        M2C_FIELD(temp_v1_4, s32 *, 0) = 0x03800010;
        M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = &D_801C57B0;
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xED0F012C;
        var_v0 = 0x2CC290;
    }
    M2C_FIELD(*arg0, s32 *, 4) = var_v0;
}

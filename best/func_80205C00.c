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

extern s32 D_8021AFFC;
extern u8 D_8021B019;
extern M2C_UNK D_8021B024;
extern M2C_UNK D_8021B038;
extern M2C_UNK D_8021B04C;
extern u8 D_8021B06A;
extern s8 D_8021B07E;

void func_80205C00(void) {
    s32 var_v0;

    switch (D_8021B019) {                           /* irregular */
    case 1:
        var_v0 = D_8021AFFC + 1;
block_6:
        D_8021AFFC = var_v0;
        break;
    case 2:
        var_v0 = D_8021AFFC - 1;
        goto block_6;
    }
    if ((s32) D_8021B06A < D_8021AFFC) {
        D_8021AFFC = 0;
    } else if (D_8021AFFC < 0) {
        D_8021AFFC = (s32) D_8021B06A;
    }
    M2C_FIELD(&D_8021B024, s32 *, 0) = 0;
    M2C_FIELD(&D_8021B038, f32 *, 0) = -10.0f;
    M2C_FIELD(&D_8021B04C, s32 *, 0) = 0;
    M2C_FIELD(&D_8021B024, f32 *, 4) = -60.0f;
    M2C_FIELD(&D_8021B038, f32 *, 4) = 15.0f;
    M2C_FIELD(&D_8021B04C, f32 *, 4) = -70.0f;
    M2C_FIELD(&D_8021B024, f32 *, 8) = 60.0f;
    M2C_FIELD(&D_8021B038, f32 *, 8) = 15.0f;
    M2C_FIELD(&D_8021B04C, f32 *, 8) = -70.0f;
    M2C_FIELD(&D_8021B024, f32 *, 0xC) = -158.0f;
    M2C_FIELD(&D_8021B038, f32 *, 0xC) = 15.0f;
    M2C_FIELD(&D_8021B04C, f32 *, 0xC) = -70.0f;
    M2C_FIELD(&D_8021B024, f32 *, 0x10) = 158.0f;
    M2C_FIELD(&D_8021B038, f32 *, 0x10) = 15.0f;
    M2C_FIELD(&D_8021B04C, f32 *, 0x10) = -70.0f;
    D_8021B019 = 0;
    D_8021B07E = 0;
}

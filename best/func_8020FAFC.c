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

extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_80168C60;
extern M2C_UNK D_80190C98;
extern s16 D_8021E1A6;
extern u8 D_8021EEA6;

void func_8020FAFC(s32 arg0) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    M2C_FIELD(temp_a0, u16 *, 0x3E) = 0U;
    if ((u8) *(&D_80168C60 + D_8021E1A6) < (u8) D_8021EEA6) {
        M2C_FIELD(temp_a0, u16 *, 0x3E) = 1U;
    }
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(&D_80190C98, u16 *, 0) = 0U;
        break;
    case 1:
        M2C_FIELD(&D_80190C98, u16 *, 0) = (u16) (M2C_FIELD(&D_80190C98, u16 *, 0) + 0x10);
        if ((u16) M2C_FIELD(&D_80190C98, u16 *, 0) >= 0x100U) {
            M2C_FIELD(&D_80190C98, u16 *, 0) = 0xFFU;
        }
        break;
    }
    M2C_FIELD(temp_a0, u8 *, 0) = (u8) M2C_FIELD(&D_80190C98, u8 *, 1);
}

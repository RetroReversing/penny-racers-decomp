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
extern u16 D_8018BC3C;
extern u8 D_8011F350[];
extern u8 D_8011F2F0[];
extern u8 D_8021EEA7[];
extern u8 D_80190C9A[];
extern u32 D_8021DC50[];
s32 func_8014A870();
void func_80211C7C();

s32 func_8020EE18(s32 arg0)
{
    u8 *s3;
    s32 s2;
    s2 = func_8014A870(0x14, 0x7, D_8021EEA7[0]);
    do { func_80211C7C(arg0); } while (0);
    s3 = D_8011F2F0 + arg0 * 0x64;
    switch (*(u16 *)(s3 + 0x3E)) {
    default:
        return s2;
    }
}

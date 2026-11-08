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

M2C_UNK func_8014A4C8(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140(s32);                         /* extern */
M2C_UNK func_801CA468(s32, u16);                    /* extern */
M2C_UNK func_801CABF4(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_8011F2F0;
extern u8 D_80190C9E;
extern u8 D_801C5EA0;
extern M2C_UNK D_802030B0;
extern u16 D_8021E19C;
extern u8 D_8021E19E;
extern M2C_UNK D_802D6898;
extern M2C_UNK D_802D92A0;

void func_80216128(s32 arg0, s32 arg1) {
    s32 temp_a1;
    u16 temp_v1;
    void *temp_fp;

    temp_a1 = arg1 & 0xFFFF;
    temp_fp = (temp_a1 * 0x64) + &D_8011F2F0;
    func_801CA140(temp_a1);
    func_801CA468(arg0, D_8021E19C);
    temp_v1 = M2C_FIELD(temp_fp, u16 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_fp, u16 *, 0x40) = 0x10U;
        return;
    case 16:
        /* fallthrough */
    case 32:
        func_8014A4C8(arg0, 0x4F, 0x67, 0xA, 0x20);
        func_8014A4C8(arg0, 0x4F, 0x7F, 0xA, 0x20);
        func_801CABF4(arg0, 0x8B, 0x69, 0xD, &D_802D92A0, M2C_FIELD(&D_802030B0, s32 *, 0), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        func_801CABF4(arg0, 0x85, 0x81, 0xD, &D_802D92A0, M2C_FIELD(&D_802030B0, s32 *, 4), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        if (D_801C5EA0 != 0) {
            func_8014A4C8(arg0, 0x4F, 0x97, 0xA, 0x20);
            func_801CABF4(arg0, 0x6B, 0x99, 0xD, &D_802D92A0, M2C_FIELD(&D_802030B0, s32 *, 0xC), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        }
        if (M2C_FIELD(temp_fp, u16 *, 0x40) != 0x20) {
            func_801CA468(arg0, (u16) D_8021E19E);
            func_8014A4C8(arg0, 0x58, (D_80190C9E * 0x18) + 0x66, 0xA, 0x15);
            func_8014A4C8(arg0, 0xD5, (D_80190C9E * 0x18) + 0x66, 0xA, 0x16);
        }
        return;
    }
}

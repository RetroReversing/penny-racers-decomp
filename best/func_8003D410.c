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

M2C_UNK func_8003CF70(M2C_UNK, u32 *);              /* extern */
M2C_UNK func_8003DDC0(void *, M2C_UNK);             /* extern */
s32 func_8003EAC0();                                /* extern */
M2C_UNK func_8003EAE0(s32);                         /* extern */
extern void *D_8004814C;
extern M2C_UNK D_800DE070;
extern s8 D_800DE074;
extern s8 D_800DE075;
extern s8 D_800DE076;
extern s8 D_800DE077;
extern s8 D_800DE078;
extern s8 D_800DE079;
extern M2C_UNK D_800DE07C;
extern s32 D_800DE080;

M2C_UNK *func_8003D410(void) {
    u32 sp10;
    s32 temp_a0;
    void *temp_v1;

    sp10 = 0;
    if (M2C_FIELD(&D_800DE07C, s32 *, 0) != 0xB0000000) {
        D_800DE074 = 0;
        M2C_FIELD(&D_800DE07C, s32 *, 0) = 0xB0000000;
        func_8003CF70(0, &sp10);
        D_800DE079 = 0;
        D_800DE080 = 0;
        D_800DE078 = (s8) (sp10 >> 8);
        D_800DE075 = (s8) sp10;
        D_800DE076 = (sp10 >> 0x10) & 0xF;
        D_800DE077 = (sp10 >> 0x14) & 0xF;
        do { func_8003DDC0(&D_800DE07C + 8, 0x60); } while (0);
        temp_v1 = D_8004814C;
        temp_a0 = func_8003EAC0();
        D_8004814C = &D_800DE07C - 0xC;
        M2C_FIELD(&D_800DE07C, void **, -0xC) = temp_v1;
        func_8003EAE0(temp_a0);
    }
    return &D_800DE070;
}

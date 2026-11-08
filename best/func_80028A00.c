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

M2C_UNK func_80028AF0(M2C_UNK *);                   /* extern */
M2C_UNK func_80028B50();                            /* extern */
M2C_UNK func_80028B70(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_80029A80();                            /* extern */
M2C_UNK func_80029CCC();                            /* extern */
M2C_UNK func_80029E84(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_46C78;
extern M2C_UNK D_80046C60;
extern M2C_UNK D_80046C70;
extern s32 D_8006F9D0;
extern M2C_UNK *D_8006FF68;
extern M2C_UNK func_80028B30;

void func_80028A00(void) {
    s32 sp10;
    M2C_UNK *sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;

    func_80029A80();
    func_80028B70(&D_80046C70, 2);
    D_8006F9D0 = 0x80000400;
    func_80028AF0(&func_80028B30);
    D_8006FF68 = &D_80046C60;
    func_80029CCC();
    sp10 = 0x06000000;
    sp14 = &D_46C78;
    sp18 = 0xE9000000;
    sp1C = 0;
    sp20 = 0xB8000000;
    sp24 = 0;
    /*__repair_pointer_balance*/if ((unsigned long)sp14 & 0x10000) {
if ((unsigned long)sp14 & 0x100) {
func_80029E84(&sp10, 0x18, 0, 0);
} else {
func_80029E84(&sp10, 0x18, 0, 0);
}
} else {
if ((unsigned long)sp14 & 0x100) {
func_80029E84(&sp10, 0x18, 0, 0);
} else {
func_80029E84(&sp10, 0x18, 0, 0);
}
}
    func_80028B50();
}

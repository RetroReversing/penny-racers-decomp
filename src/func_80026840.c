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

M2C_UNK func_800268C0(s32);                         /* extern */
M2C_UNK func_80033E30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80034090(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_800346A0();                                /* extern */
M2C_UNK func_8003DE60(M2C_UNK *);                   /* extern */
extern M2C_UNK D_80049AF8;
extern M2C_UNK D_80049B20;
extern s32 D_8004AAA0;
extern s32 D_8004AAA4;
extern M2C_UNK D_8006FE60;

void func_80026840(void) {
    M2C_UNK sp10;
    s32 temp_v0;

    func_80034090(0xC, &D_8006FE60, 0x10);
    D_8004AAA4 = 0;
loop_1:
    func_8003DE60(&D_80049AF8);
    func_80033E30(&D_8006FE60, &sp10, 1);
    func_8003DE60(&D_80049B20);
    temp_v0 = func_800346A0();
    D_8004AAA0 = temp_v0;
    if (temp_v0 == 0) {
        goto loop_1;
    }
    func_800268C0(temp_v0);
    goto loop_1;
}

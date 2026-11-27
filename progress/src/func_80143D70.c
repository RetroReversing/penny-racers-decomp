/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

s32 dmaRomToRam();
extern char D_3B7C00[];
extern char D_3E4880[];
extern s32 D_80168BB0;
extern u8 D_8021B01A;
extern char D_802D6890[];

void func_80143D70(void) {
    dmaRomToRam(D_3B7C00, D_802D6890, D_3E4880 - D_3B7C00);
    if (D_8021B01A == 1) {
        D_80168BB0 = 0x32;
        D_8021B01A = 0;
    }
}

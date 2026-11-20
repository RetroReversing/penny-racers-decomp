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

extern signed char D_8021F260;
extern signed char D_8021F261;
extern signed char D_8021F262;
extern signed char D_8021F264;
s32 func_800294A0();
s16 func_800DE41C();
s32 func_80143DCC();
s32 func_80203DF8();
s32 func_8020E788();
s32 func_8020E7AC();
extern char D_3ED8F0[];
extern char D_400E00[];
extern s32 D_8021AFDC;
extern char D_8021AFFC[];
extern s8 D_8021B068;
extern s8 D_8021B084;
extern s32 D_8021B300;
extern s32 D_8021B304;
extern s16 D_8021E110;
extern char D_8030BD90[];
extern s32 func_8020C994;
extern s32 func_8020C9DC;
extern s32 func_8020CAF4;
extern s32 func_8020D1AC;

void func_8020C7A0(void) {
    s32 var_v0;
    s32 var_v1;

    do { func_800294A0(D_3ED8F0, D_8030BD90, D_400E00 - D_3ED8F0); } while (0);
    func_80143DCC();
    D_8021B304 = 0;
    D_8021B300 = 0;
    func_8020E7AC();
    func_8020E788();
    var_v1 = 0;
    var_v0 = 0 & 0xFF;
    do {
        *((var_v0 * 4) + D_8021AFFC) = 0;/*__repair_loop_weight*/do {
        var_v1 += 1;} while (0);
        var_v0 = var_v1 & 0xFF;
    } while ((u32) (var_v1 & 0xFF) < 4U);
    if (D_8021AFDC == 0x18) {
        D_8021B068 = 0;
    }
    func_80203DF8(1, 6, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_8020CAF4, &func_8020D1AC, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021E110 = func_800DE41C(0, 0, 3, 0, 0x41, 0, 0, &func_8020C994, &func_8020C9DC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021F260 = 0;
    D_8021F261 = 0;
    D_8021F262 = 0;
    D_8021F264 = 0;
    D_8021B084 = 0;
}

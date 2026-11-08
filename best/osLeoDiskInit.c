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

M2C_UNK func_8003DDC0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 __osDisableInt();                                /* extern */
M2C_UNK func_8003EAE0(s32);                         /* extern */
extern void *D_8004814C;
extern void *D_8006FB28;
extern M2C_UNK D_800DA1EC;
extern s8 D_800DA1ED;
extern s8 D_800DA1EE;
extern s8 D_800DA1EF;
extern s8 D_800DA1F0;
extern s8 D_800DA1F1;
extern s32 D_800DA1F4;
extern s32 D_800DA1F8;

void *osLeoDiskInit(void) {
    s32 temp_a0;
    void *temp_s0;
    void *temp_v1;

    M2C_FIELD(&D_800DA1EC, s8 *, 0) = 2;
    D_800DA1F4 = 0xA5000000;
    D_800DA1ED = 3;
    D_800DA1F0 = 6;
    D_800DA1EE = 6;
    D_800DA1F1 = 1;
    D_800DA1EF = 2;
    *(s32 *)0xA4600024 = 3;
    *(s32 *)0xA4600028 = 6;
    *(s32 *)0xA460002C = 6;
    *(s32 *)0xA4600030 = 2;
    D_800DA1F8 = 0;
    func_8003DDC0(&D_800DA1EC + 0x10, 0x60, 0xA4600030, 0xA4600024);
    temp_s0 = &D_800DA1EC - 4;
    temp_v1 = D_8004814C;
    temp_a0 = __osDisableInt();
    D_8004814C = temp_s0;
    D_8006FB28 = temp_s0;
    M2C_FIELD(&D_800DA1EC, void **, -4) = temp_v1;
    func_8003EAE0(temp_a0);
    return temp_s0;
}

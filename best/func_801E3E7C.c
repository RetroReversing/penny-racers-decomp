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

s32 func_801CA140();
s32 func_801CB74C();
s32 func_801CBF48();
extern char D_8011F330[];
extern char D_801D4FC0[];
extern char D_801E9668[];
extern u8 D_801E979A;

void func_801E3E7C(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    u16 temp_v1;

    func_801CA140();
    temp_v1 = *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
block_13:
        var_a1 = 0x18;
        var_a2 = 0x20;
block_14:
        func_801CB74C(arg0, var_a1, var_a2, 8);
        return;
    case 1:
        goto block_13;
    case 2:
        func_801CB74C(arg0, 0x18, 0x20, 8, &D_801D4FC0, &D_801E9668);
        func_801CBF48(arg0, 0x18, 0x30, 8, &D_801D4FC0, 1, (s32) D_801E979A);
        var_a1 = 0x28;
        var_a2 = 0x30;
        goto block_14;
    case 3:
        goto block_13;
    }
}

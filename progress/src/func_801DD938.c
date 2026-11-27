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

s32 func_801D8E74();
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char playerSlots[];
extern char D_8011F334[];
extern char D_8011F33C[];
extern u16 D_801E979C;
extern s16 D_801E9950;
extern s16 D_801E9B30;
extern s16 D_801E9D74;
extern s16 D_801F188E;

void func_801DD938(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u8 arg4, u16 arg5, u16 arg6, u16 arg7, u8 arg8, u16 arg9) {
    s32 temp_v0;

    D_801E9D74 = arg0;
    D_801E9950 = arg1;
    D_801E9B30 = arg2;
    D_801F188E = arg3;
    do { func_801D8E74(arg0 & 0xFFFF, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF, arg4 & 0xFF); } while (0);
    temp_v0 = D_801E979C * 0x64;
    *(u16 *)(playerSlots + temp_v0) = arg6;
    __repair_rows: {
        *(f32 *)(D_8011F334 + temp_v0) = (f32) (arg7 & 0xFFFF);
        *(f32 *)(D_8011F33C + temp_v0) = (f32) (arg5 & 0xFFFF);
        *(D_8011F2FC + temp_v0) = (arg8 & 0xFF);
        *(D_8011F2F0 + (D_801E979C * 0x64)) = (s8) arg9;
    }
if (0) goto __repair_rows;
}

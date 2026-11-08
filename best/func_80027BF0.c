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

s32 func_800294A0();
s32 alSeqFileNew();
s32 func_80038340();
extern char D_8006E780[];
extern s32 D_8006FF00;

void func_80027BF0(s32 arg0) {
    s32 sp27;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0 = ((u32) &sp27 >> 4) * 0x10;
    func_800294A0(arg0, temp_s0, 4);
    temp_s0_2 = ((s32) (M2C_FIELD(temp_s0, u16 *, 2) << 0x10) >> 0xD) + 4;
    temp_v0 = func_80038340(0, 0, &D_8006E780, 1, temp_s0_2);
    D_8006FF00 = temp_v0;
    func_800294A0(arg0, temp_v0, temp_s0_2);
    alSeqFileNew(D_8006FF00, arg0);
}

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

extern unsigned short D_8006FB10;
s32 func_8003DE60();
extern char D_8006FAF0[];
extern char D_80229B20[];
extern char D_8022B050[];
extern char D_802328C0[];
extern char D_8023306C[];
extern char D_80233084[];

void func_80232360(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;

    if (((D_8006FB10 == 0) | ((u16) D_8006FB10 >= 0xAU)) != 0) {
        *(D_8022B050 + ((arg0 & 0xFFFF) * 0x8F0)) = &D_80229B20;
        return;
    }
    temp_s1 = arg0 & 0xFFFF;
    temp_s0 = arg1 & 0xFFFF;
    func_8003DE60(&D_8023306C, temp_s1, temp_s0);
    temp_v1 = *(D_802328C0 + (((D_8006FB10 * 0x10) + temp_s0) * 4));
    if (temp_v1 != 0) {
        *(D_8022B050 + (temp_s1 * 0x8F0)) = temp_v1;
        return;
    }
    *(D_8022B050 + ((arg0 & 0xFFFF) * 0x8F0)) = &D_80229B20;
    func_8003DE60(&D_80233084);
}

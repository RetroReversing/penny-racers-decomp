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

extern unsigned char D_801C5E9C;
extern unsigned char D_801C5E9D;
extern unsigned char D_801C5E9E;
extern unsigned char D_801C5E9F;
extern char D_801C7080[];

void func_801B7584(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;
    u32 var_v1;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v1_2;

    D_801C5E9C = (u8) M2C_FIELD(arg0, u8 *, 0);
    D_801C5E9D = (u8) M2C_FIELD(arg0, u8 *, 1);
    D_801C5E9E = (u8) M2C_FIELD(arg0, u8 *, 2);
    D_801C5E9F = (u8) M2C_FIELD(arg0, u8 *, 3);
    var_a2 = 0;
    if (D_801C5E9E != 0) {
        var_v0 = 0 & 0xFF;
        do {{ s32 __repair_value; __repair_value = var_v0 * 5; temp_v1 = __repair_value; }
do{}while(0);
            temp_a0 = temp_v1 + D_801C7080;
            temp_v1_2 = temp_v1 + arg1;
            M2C_FIELD(temp_a0, u8 *, 0) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0);
            M2C_FIELD(temp_a0, u8 *, 1) = (u8) M2C_FIELD(temp_v1_2, u8 *, 1);
            M2C_FIELD(temp_a0, u8 *, 2) = (u8) M2C_FIELD(temp_v1_2, u8 *, 2);
            M2C_FIELD(temp_a0, u8 *, 3) = (u8) M2C_FIELD(temp_v1_2, u8 *, 3);
            M2C_FIELD(temp_a0, u8 *, 4) = (u8) M2C_FIELD(temp_v1_2, u8 *, 4);
            var_a2 += 1;
            var_v0 = var_a2 & 0xFF;
        } while ((u32) (var_a2 & 0xFF) < (u8) D_801C5E9E);
    }
    temp_v0 = var_a2 & 0xFF;
    var_v1 = temp_v0;
    var_v0_2 = var_v1 * 4;
    if (temp_v0 < 0xC8U) {
        do {
            temp_v0_2 = var_v0_2 + var_v1 + D_801C7080;
            M2C_FIELD(temp_v0_2, s8 *, 0) = 4;
            M2C_FIELD(temp_v0_2, s8 *, 1) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 2) = -1;
            M2C_FIELD(temp_v0_2, s8 *, 3) = -1;
            M2C_FIELD(temp_v0_2, s8 *, 4) = -1;
            var_a2 += 1;
            var_v1 = var_a2 & 0xFF;
            var_v0_2 = var_v1 * 4;
        } while (var_v1 < 0xC8U);
    }
}

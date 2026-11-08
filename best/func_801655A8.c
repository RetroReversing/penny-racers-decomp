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

s32 func_8013E49C();
s32 func_8013EB20();
s32 func_8013EC48();
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F320[];
extern char D_8011F32E[];
extern char D_8011F350[];

void func_801655A8(s32 arg0) {
    f32 sp10;
    f32 temp_ft0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v1;
    s32 temp_v1_3;
    u16 temp_v0;
    u16 temp_v1_2;
    void *temp_s1;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = *(D_8011F350 + temp_v1);
    temp_v1_2 = *(D_8011F32E + temp_v1);
    if (temp_v1_2 != 1) {
        if ((s32) temp_v1_2 >= 2) {
            temp_s0 = arg0 & 0xFFFF;
            if (temp_v1_2 != 2) {
                return;
            }
            sp10 = 0.0f;
            func_8013EB20(temp_s0, temp_s1, sp10, 0.001f);
            temp_s0_2 = temp_s0 * 0x64;
            *(D_8011F2FC + temp_s0_2) = *(D_8011F2FC + temp_s0_2) - 1;
            if ((u8) *(D_8011F2FC + temp_s0_2) < 5U) {
                func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
                *(D_8011F2FD + temp_s0_2) = 2;
            }
        } else {
            temp_s0_3 = arg0 & 0xFFFF;
            if (temp_v1_2 != 0) {
                return;
            }
            sp10 = -M2C_FIELD(temp_s1, f32 *, 0x10) * 0.2f;
            func_8013EB20(temp_s0_3, temp_s1, -M2C_FIELD(temp_s1, f32 *, 8) * 0.2f, -M2C_FIELD(temp_s1, f32 *, 0xC) * 0.15f);
            temp_v1_3 = temp_s0_3 * 0x64;
            *(D_8011F2FC + temp_v1_3) = *(D_8011F2FC + temp_v1_3) + 0xC;
            temp_v0 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
            M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0;
            if (temp_v0 & 0x8000) {
                *(D_8011F32E + temp_v1_3) = 1;
            }
        }
    } else {
        temp_a0 = arg0 & 0xFFFF;
        temp_s0_4 = temp_a0 * 0x64;
        temp_ft0 = *(D_8011F320 + temp_s0_4);
        func_8013EC48(temp_a0, ((4.0f - temp_ft0) * 0.2f) + temp_ft0);
        if (*(D_8011F320 + temp_s0_4) > 3.9f) {
            *(D_8011F32E + temp_s0_4) = 2;
        }
    }
}

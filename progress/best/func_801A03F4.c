/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
extern s32 D_800DB1B8;
extern f32 D_801C6BCC;
extern s32 D_80221080;
extern s8 D_80221084[];
extern s32 D_80221088;
extern u8 D_8022108C[];
extern s32 D_80221090;
extern s32 D_80221094;

void func_801A03F4(void) {
    f32 *__base_D_801C6BCC;
    register f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    u32 temp_s0;

    temp_s0 = (*(s16 *)((char *)(&D_800DB1B8) + 0x2134)) * 0x24;
    temp_fs1 = __sinf(((*__base_D_801C6BCC) * 3.1415927f) / 180.0f) * 1050.0f;
    __base_D_801C6BCC = &D_801C6BCC;
    temp_fs0 = __sinf(((*__base_D_801C6BCC) * 3.1415927f) / 180.0f);
    *((s32 *)((s8 *)&D_80221080 + temp_s0)) = (temp_fs1 - (temp_fs0 * __sinf(0.69813174f) * 1050.0f)) + *(D_8022108C + temp_s0);
    *(s16 *)(D_80221084 + temp_s0) = (__sinf(0.69813174f) * 1050.0f) + *((s32 *)((s8 *)&D_80221090 + temp_s0));
    temp_fs1_2 = __cosf(((*__base_D_801C6BCC) * 3.1415927f) / 180.0f) * 1050.0f;
    temp_fs0_2 = __cosf(((*__base_D_801C6BCC) * 3.1415927f) / 180.0f);
    *((s32 *)((s8 *)&D_80221088 + (u32)temp_s0)) = (temp_fs1_2 - (temp_fs0_2 * __sinf(0.69813174f) * 1050.0f)) + *((s32 *)((s8 *)&D_80221094 + temp_s0));
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8002D030();
s32 n_alSndpStop();
extern char D_801D7DF0[];
extern char D_801D7DF1[];
extern char D_801D7DF2[];
extern char D_801D7DF4[];
extern char D_801D7DF8[];
extern char D_801D7DFC[];
extern char D_801D7E00[];
extern char D_801D7E04[];
extern char D_801D7E06[];
extern char D_801D7E08[];
extern char D_801D7E09[];
extern char D_801D7E16[];
extern char D_801D7E18[];

void func_801D63F4(void) {
    char *__base_D_801D7E00;
    char *__base_D_801D7DFC;
    char *__base_D_801D7DF1;
    char *__base_D_801D7DF0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;

    var_s0 = 0;
    var_v0 = 0 & 0xFFFF;
    do {
        temp_v1 = var_v0 * 0x2C;
        __base_D_801D7DF0 = D_801D7DF0;
        *(__base_D_801D7DF0 + temp_v1) = 0;
__base_D_801D7DF0 = 0;
        __base_D_801D7DF1 = D_801D7DF1;
        *(__base_D_801D7DF1 + temp_v1) = 0;
        *(D_801D7DF2 + temp_v1) = 0;
        *(D_801D7DF4 + temp_v1) = -1;
        *(D_801D7DF8 + temp_v1) = 0;
        __base_D_801D7DFC = D_801D7DFC;
        __base_D_801D7E00 = D_801D7E00;
        *(__base_D_801D7DFC + temp_v1) = 0;
        *(D_801D7E04 + temp_v1) = 0;
        *(__base_D_801D7E00 + temp_v1) = 1.0f;
        *(D_801D7E06 + temp_v1) = 0x7FFF;
        *(D_801D7E08 + temp_v1) = 0x40;
        *(D_801D7E09 + temp_v1) = 0;
        *(D_801D7E16 + temp_v1) = 0xFF;
        *(D_801D7E18 + temp_v1) = 0;
        var_s0 += 1;
        var_v0 = var_s0 & 0xFFFF;
    } while ((u32) (var_s0 & 0xFFFF) < 8U);
    var_s0_2 = 0;
    var_a0 = 0 << 0x10;
    do {
        func_8002D030(var_a0 >> 0x10);
        ++var_s0_2;
        n_alSndpStop();
        var_a0 = var_s0_2 << 0x10;
    } while ((u32) (var_s0_2 & 0xFFFF) < 8U);
}

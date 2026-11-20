/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8013EB20();
s32 func_8013EBB0(s32, f32, f32, f32);
s32 func_8013EC48(s32, f32);
s32 func_801FA30C();
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F320[];
extern char D_8011F32E[];
extern char D_8011F350[];
extern f64 D_80183980;

void func_8015CFD8(s32 arg0) {
    s32 sp10;
    u16 temp_v0_2;
    f32 temp_ft0_2;
    f64 var_fv1;
    u32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_v0;
    s32 temp_v1;
    f32 temp_ft0;
    u16 temp_v1_2;
    u8 *temp_s1;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = *(s32 *)(D_8011F350 + temp_v1);
    temp_v1_2 = *(u16 *)(D_8011F32E + temp_v1);
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        func_8013EBB0(arg0 & 0xFFFF, -(*(f32 *)((char *)(temp_s1) + 8)) * 0.01f, -(*(f32 *)((char *)(temp_s1) + 0xC)) * 0.01f, -(*(f32 *)((char *)(temp_s1) + 0x10)) * 0.01f);
        temp_v0 = func_801FA30C() & 8;
        var_fv1 = (f64) temp_v0;
        if (temp_v0 < 0) {
            var_fv1 += D_80183980;
        }
        temp_s0 = arg0 & 0xFFFF;
        func_8013EC48(temp_s0, ((f32) var_fv1 * 0.1f) + 0.3f);
        func_8013EA18(temp_s1, 0xFF, (func_801FA30C() & 0x10) + 0xEF, 0xDF);
        temp_v0_2 = (*(u16 *)((char *)(temp_s1) + 0x14)) - 1;
        (*(u16 *)((char *)(temp_s1) + 0x14)) = temp_v0_2;
        if (temp_v0_2 & 0x8000) {
            *(u16 *)(D_8011F32E + (temp_s0 * 0x64)) = 1;
            return;
        }
        return;
    case 1:
        temp_s0_2 = arg0 & 0xFFFF;
        func_8013EB20(temp_s0_2, temp_s1, sp10, 0xBDCCCCCD);
        sp10 = 0;
        func_8013EA90(temp_s1, 0, (s32) (s16) ((func_801FA30C() & 7) * -1), -9);
        temp_s1_2 = temp_s0_2 * 0x64;
        temp_ft0 = *(f32 *)(D_8011F320 + temp_s1_2);
        func_8013EC48(temp_s0_2, ((3.0f - temp_ft0) * 0.2f) + temp_ft0);
        if (*(f32 *)(D_8011F320 + temp_s1_2) > 2.9f) {
            *(u16 *)(D_8011F32E + temp_s1_2) = 2;
            return;
        }
        break;
    case 2:
        temp_s0_3 = arg0 & 0xFFFF;
        sp10 = 0;
        func_8013EB20(temp_s0_3, temp_s1, sp10, 0xBE19999A);
        func_8013EA90(temp_s1, 0, (s32) (s16) ((func_801FA30C() & 7) * -1), -9);
        temp_s1_3 = temp_s0_3 * 0x64;
        temp_ft0_2 = *(f32 *)(D_8011F320 + temp_s1_3);
        func_8013EC48(temp_s0_3, ((0.3f - temp_ft0_2) * 0.05f) + temp_ft0_2);
        *(D_8011F2FC + temp_s1_3) = *(D_8011F2FC + temp_s1_3) - 4;
        if ((u8) *(D_8011F2FC + temp_s1_3) < 5U) {
            *(u16 *)(D_8011F32E + temp_s1_3) = 3;
            return;
        }
        break;
    case 3:
        func_8013E49C((*(u16 *)((char *)(temp_s1) + 0x76)));
        *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        break;
    }
}

s32 func_8013E49C();
s32 func_8013EA18();
s32 func_8013EA90();
s32 func_8013EB20();
s32 func_8013EBB0();
s32 func_8013EC48();
s32 func_801FA30C();
extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
extern u8 D_8011F320[];
extern u8 D_8011F32E[];
extern u8 D_8011F350[];

void func_8015CFD8(u16 arg0) {
    u8 *p = *(u8 **)(D_8011F350 + arg0 * 0x64);
    switch (*(u16 *)(D_8011F32E + arg0 * 0x64)) {
    case 0:
        func_8013EBB0(arg0, -*(f32 *)(p + 8) * 0.01f, -*(f32 *)(p + 0xC) * 0.01f, -*(f32 *)(p + 0x10) * 0.01f);
        func_8013EC48(arg0, (f32)(func_801FA30C() & 8) * 0.1f + 0.3f);
        func_8013EA18(p, 0xFF, (func_801FA30C() & 0x10) + 0xEF, 0xDF);
        *(u16 *)(p + 0x14) -= 1;
        if (*(u16 *)(p + 0x14) & 0x8000) {
            *(u16 *)(D_8011F32E + arg0 * 0x64) = 1;
        }
        return;
    case 1:
        func_8013EB20(arg0, p, 0, -0.1f);
        func_8013EA90(p, 0, (s16)((func_801FA30C() & 7) * -1), -9);
        func_8013EC48(arg0, (3.0f - *(f32 *)(D_8011F320 + arg0 * 0x64)) * 0.2f + *(f32 *)(D_8011F320 + arg0 * 0x64));
        if (*(f32 *)(D_8011F320 + arg0 * 0x64) > 2.9f) {
            *(u16 *)(D_8011F32E + arg0 * 0x64) = 2;
        }
        break;
    case 2:
        func_8013EB20(arg0, p, 0, -0.15f);
        func_8013EA90(p, 0, (s16)((func_801FA30C() & 7) * -1), -9);
        func_8013EC48(arg0, (0.3f - *(f32 *)(D_8011F320 + arg0 * 0x64)) * 0.05f + *(f32 *)(D_8011F320 + arg0 * 0x64));
        D_8011F2FC[arg0 * 0x64] -= 4;
        if (D_8011F2FC[arg0 * 0x64] < 5U) {
            *(u16 *)(D_8011F32E + arg0 * 0x64) = 3;
        }
        break;
    case 3:
        func_8013E49C(*(u16 *)(p + 0x76));
        D_8011F2FD[arg0 * 0x64] = 2;
        break;
    }
}

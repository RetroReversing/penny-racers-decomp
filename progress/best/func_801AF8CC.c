u16 func_800DE41C(int, int, int, int, int, int, void *, int, void *, int, f32, int, int, int, int, f32, f32, f32);
extern u8 D_8011F2F2[], D_8011F2FA[], D_8011F308[], D_8011F30C[], D_8011F310[];
extern u8 D_801B7678[], D_801C6BB0[], D_801C6BB9, D_801C7068, D_8031445C[];
extern s8 D_801C7060, D_801C7070, D_801C707B, D_801C7468, D_801C7AB4, D_801C7AB5, D_801C7AB8, D_801CA138;
extern u8 D_801C7AC0[];
extern u16 D_801C7072, D_801C7076, D_801C7D18, D_801C7D22, D_801C7D24, D_801CA13A;
extern u16 D_801C7D1A[];

void func_801AF8CC(void) {
    unsigned i;
    
    D_801C7AB8 = 4;
    D_801C707B = 0;
    D_801C7060 = 0;
    D_801C7068 = D_801C6BB0[0];
    D_801C6BB9 = D_801C6BB0[1];
    D_801C7AB5 = 0;
    D_801C7070 = 0;
    D_801C7468 = 0;
    D_801CA138 = 0;
    i = D_801C7D18 * 0x64;
    *(f32 *)(D_8011F30C + i) = 0;
    *(f32 *)(D_8011F308 + i) = (f32)(s8)D_801C6BB0[0] * 400.0f * 0.5f;
    *(f32 *)(D_8011F310 + i) = (f32)(s8)D_801C6BB0[1] * 400.0f * 0.5f;
    *(u16 *)(D_8011F2FA + i) = 0x5C;
    *(u16 *)(D_8011F2FA + D_801CA13A * 0x64) = 0x5C;
    *(u16 *)(D_8011F2FA + D_801C7072 * 0x64) = 0x5C;
    *(u16 *)(D_8011F2FA + D_801C7D22 * 0x64) = 0x5C;
    *(u16 *)(D_8011F2FA + D_801C7076 * 0x64) = 0x5C;
    D_801C7AB4 = 0;
    D_801C7AC0[0] = 0;
    D_801C7AC0[1] = 1;
    *(void **)(D_801C7AC0 + 4) = D_8031445C;
    D_801C7D24 = func_800DE41C(0, 0, 2, 0, 0x7A, 0xFF, D_801C7AC0, 0, D_801B7678, 0, 10000.0f, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    i = D_801C7D24 * 0x64;
    *(u16 *)(D_8011F2F2 + i) |= 8;
    for (i = 0; i < 4; i++) {
        D_801C7D1A[(unsigned short)i] = 0xFFFF;
    }
}

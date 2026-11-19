extern u8 D_8011F2FD[];
extern u8 D_8011F32E[];
extern u8 D_8011F350[];
extern u16 D_801E87E6;
extern u16 D_801E975E;
extern u16 D_801E9778;
extern s16 D_801E977A;
extern s16 D_801E979E;

void func_801E28BC(s32 arg0) {
    s32 temp_v0;
    u16 temp_v1;

    temp_v1 = *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64);
    switch (temp_v1) {
    case 0:
        D_801E979E = 0x19;
        D_801E975E = 0;
        D_801E9778 = 0;
        D_801E977A = 0xA;
        temp_v0 = D_801E87E6 * 0x64;
        *(s16 *)(D_8011F350 + temp_v0 + 0xA) = 0x15;
        *(s16 *)(D_8011F350 + temp_v0 + 0xC) = 0x34;
        *(s16 *)(D_8011F350 + temp_v0 + 0xE) = 0x116;
        *(s16 *)(D_8011F350 + temp_v0 + 0x10) = 0x16;
        *(s8 *)(D_8011F350 + temp_v0 + 9) = 0x78;
        *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64) = 0xA;
        break;
    case 10:
        D_801E9778 += 1;
        if (D_801E9778 >= 0x259) {
            *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 0x64) = 0x14;
        }
        break;
    case 20:
        D_8011F2FD[(arg0 & 0xFFFF) * 0x64] = 4;
        D_8011F2FD[D_801E87E6 * 0x64] = 4;
        break;
    }
    if (D_801E975E < 0x20) {
        D_801E975E += 1;
        return;
    }
    D_801E975E = 0;
}

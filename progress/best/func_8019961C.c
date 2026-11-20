extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern u8 D_8011F330[];
extern u8 D_801C6B32;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;

void func_8019961C(u32 **arg0, u16 arg1) {
int __repair_literal;

    u32 *p;
    u32 t;
    if (*(u16 *)(D_8011F330 + arg1 * 0x64) != 0) {
        if (*(u16 *)(D_8011F330 + arg1 * 0x64) != 1) return;
        t = *(u16 *)(D_8011F32E + D_801C7074 * 0x64);
__repair_literal = 2;

        if (t - 7 < __repair_literal || t == 6) {
            if (D_801C7469 != 4 && D_801C7469 != 2 && D_801C6B32 != 0) goto b20;
            goto b19;
        }
        t = *(u16 *)(D_8011F32E + D_801C7074 * 0x64);
        if (t - 9 >= 2 && t != 13) {
            if (*(u16 *)(D_8011F32E + D_801C7074 * 0x64) - 15 < 2) {
                if (D_801C707B != 0) {
                    if (D_801C707B == 1) goto b20;
                } else goto b19;
            } else {
                if (D_801C7AB8 == 4 || D_801C7AB8 == 2 || D_801C6B32 == 0) goto b19;
b20:
                p = *arg0; *arg0 = p + 2;
                p[0] = 0xFA000000; p[1] = 0x96969664;
            }
        } else {
b19:
            p = *arg0; *arg0 = p + 2;
            p[0] = 0xFA000000; p[1] = *(u8 *)(D_8011F2FC + arg1 * 0x64) | 0xFF00;
        }
        p = *arg0; *arg0 = p + 2;
        p[0] = 0xF9000000; p[1] = 1;
        return;
    }
    *(u16 *)(D_8011F330 + arg1 * 0x64) = 1;
}

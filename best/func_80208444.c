extern unsigned char D_8011F2F2[];
extern unsigned char D_8011F32E[];
extern void *D_8021DBD0[];
void func_80208444(unsigned short arg0) {
    int i;
    unsigned char *p = D_8011F2F2 + arg0 * 100;
    for (i = 0; i < 4; i++) {
        *(unsigned short *)(p + i * 2) |= 0x10;
    }
    switch (*(unsigned short *)(D_8011F32E + arg0 * 100)) {
    case 0: break;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    default: break;
    }
}

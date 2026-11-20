extern u8 D_8011F2F2[];
extern u8 D_8011F340[];

void func_80129C88(u8 *arg0, u16 arg1, u8 arg2) {
    u8 *__base_D_8011F2F2;
    u16 a3;
    u16 t1;
    u16 i;
    u16 n;
    u8 *p;

    a3 = *(u16 *)(arg0 + 4);
    t1 = *(u16 *)(arg0 + 6);
    i = a3;
    do {
        *(u16 *)(__base_D_8011F2F2 + i * 100 + (arg2 & 0xFF) * 2) |= 8;
        __base_D_8011F2F2 = D_8011F2F2;
        if (t1 == 0) {
            p = *(u8 **)(D_8011F340 + i * 100);
            if (*(u16 *)(p + 0xA) != 0xFFFF) {
                a3 = *(u16 *)(p + 0xA);
            } else {
                a3 = *(u16 *)(*(u8 **)(D_8011F340 + a3 * 100) + 0xE);
                t1 = 1;
            }
        } else {
            p = *(u8 **)(D_8011F340 + a3 * 100);
            if (*(u16 *)(p + 0xE) == 0xFFFF) {
                a3 = *(u16 *)(*(u8 **)(D_8011F340 + a3 * 100) + 0xA);
                t1 = 0;
            } else {
                a3 = *(u16 *)(p + 0xE);
            }
        }
        i = a3;
    } while (*(u16 *)(arg0 + 4) != a3);

    a3 = *(u16 *)(arg0 + 4);
    t1 = *(u16 *)(arg0 + 6);
    n = 0;
    i = a3;
    do {
        *(u16 *)(__base_D_8011F2F2 + i * 100 + (arg2 & 0xFF) * 2) &= 0xFFF7;
        if (t1 == 0) {
            p = *(u8 **)(D_8011F340 + i * 100);
            if (*(u16 *)(p + 0xA) != 0xFFFF) {
                a3 = *(u16 *)(p + 0xA);
                n++;
            } else {
                a3 = *(u16 *)(*(u8 **)(D_8011F340 + a3 * 100) + 0xE);
                t1 = 1;
                n++;
            }
        } else {
            p = *(u8 **)(D_8011F340 + a3 * 100);
            if (*(u16 *)(p + 0xE) != 0xFFFF) {
                a3 = *(u16 *)(p + 0xE);
                n++;
            } else {
                a3 = *(u16 *)(*(u8 **)(D_8011F340 + a3 * 100) + 0xA);
                t1 = 0;
                n++;
            }
        }
        i = a3;
    } while (n < arg1);

    a3 = *(u16 *)(arg0 + 4);
    t1 = *(u16 *)(arg0 + 6);
    n = 0;
    i = a3;
    do {
        *(u16 *)(__base_D_8011F2F2 + i * 100 + (arg2 & 0xFF) * 2) &= 0xFFF7;
        if (t1 == 0) {
            p = *(u8 **)(D_8011F340 + i * 100);
            if (*(u16 *)(p + 8) != 0xFFFF) {
                a3 = *(u16 *)(p + 8);
                n++;
            } else {
                a3 = *(u16 *)(*(u8 **)(D_8011F340 + a3 * 100) + 0xC);
                t1 = 1;
                n += 1;
            }
        } else {
            p = *(u8 **)(D_8011F340 + a3 * 100);
            if (*(u16 *)(p + 0xC) != 0xFFFF) {
                a3 = *(u16 *)(p + 0xC);
                n++;
            } else {
                a3 = *(u16 *)(*(u8 **)(D_8011F340 + a3 * 100) + 8);
                t1 = 0;
                n++;
            }
        }
        i = a3;
    } while (n < arg1);
}

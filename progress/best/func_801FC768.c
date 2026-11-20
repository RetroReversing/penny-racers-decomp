extern u8 D_8011F32E[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80203AC8;
extern u16 D_802038C8;

void func_801FC768(u16 idx)
{
    u16 s;
    s = *(u16 *)(D_8011F32E + idx * 100);
    switch (s) {
    case 0:
        D_80203AC8 = 0;
        D_802038C8 = 0;
        goto L918;
    case 1:
        D_802038C8++;
        if (D_802038C8 < 0x12D) return;
        D_802038C8 = 0;
        *(u16 *)(D_8011F32E + idx * 100) = 2;
        *(u8 *)(*(u8 **)(D_8011F350 + D_8018BC3C * 100)) = 2;
        return;
    case 2:
        if (*(u8 *)(*(u8 **)(D_8011F350 + D_8018BC3C * 100)) == 0) {
            *(u16 *)(D_8011F32E + idx * 100) = 3;
            D_80203AC8 = 1;
        }
        return;
    case 3:
        if (!D_80203AC8)
            D_802038C8++;
        if (D_802038C8 < 0xB)
            return;
        /* fall through */
    case 4:
        D_802038C8 = 0;
        *(u16 *)(D_8011F32E + idx * 100) = 4;
        return;
    }
L918:
    *(u8 *)(*(u8 **)(D_8011F350 + D_8018BC3C * 100)) = 1;
    *(u16 *)(D_8011F32E + idx * 100) = 1;
}

extern u8 D_8011F330[];
extern u8 D_802328DB[];
extern s32 func_800DE41C();
extern void func_8013F638();

void func_80230EFC(u8 *a0)
{
char *__repair_addr;

    s32 s0;
    s32 ret;

    s0 = 0;
    if (*(u16 *)(a0 + 4) >= 6) return;
    if (*(s16 *)(a0 + 0x594) >= 4) return;
    if (*(u16 *)(a0 + 0x53A) == 0) return;

    switch (a0[0x879]) {
    case 0:
        switch (*(u16 *)(a0 + 0x53A)) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 12: case 13: case 14:
            s0 = 1; break;
        case 11: s0 = 0; break;
        case 15: s0 = 4; break;
        }
        break;
__repair_addr = (char *)(a0 + 0x53A);

    case 1:
        switch (*(u16 *)(__repair_addr)) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 12: case 13: case 14:
            s0 = 1; break;
        case 11: s0 = 0; break;
        case 15: s0 = 4; break;
        }
        break;
    }

    ret = func_800DE41C(0, a0[5], 3, 0, 0x20, 1, 0, func_8013F638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if ((u16)(ret + 2) < 2) return;

    if (a0[0x879] != 1) {
        *(u16 *)(D_8011F330 + (u16)ret * 100) = D_802328DB[*(s8 *)(a0 + 0x596) * 5 + s0];
    } else if (s0 != 0) {
        if (*(s8 *)(a0 + 0x596) >= 4) {
            *(u16 *)(D_8011F330 + (u16)ret * 100) = 1;
        } else {
            *(u16 *)(D_8011F330 + (u16)ret * 100) = 0;
        }
    } else {
        *(u16 *)(D_8011F330 + (u16)ret * 100) = D_802328DB[*(s8 *)(a0 + 0x596) * 5] << 1;
    }
}

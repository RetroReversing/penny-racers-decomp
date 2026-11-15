typedef struct {
    u16 st;
    u8 pad[0x62];
} Row;

extern Row D_8011F330[];
extern Row D_8011F32E[];
extern u8 D_8011F2FC[];
extern u16 D_801C7074;
extern u8 D_801C7469;
extern u8 D_801C6B33;
extern u8 D_801C707B;
extern u8 D_801C7AB8;

void func_80199864(s32 **arg0, s32 arg1) {
    s32 *p;
    u16 st;

    st = D_8011F330[arg1 & 0xFFFF].st;
    if (st == 0) {
        D_8011F330[arg1 & 0xFFFF].st = 1;
        return;
    }
    if (st != 1) {
        return;
    }
    if ((u32)(D_8011F32E[D_801C7074].st - 7) < 2U || D_8011F32E[D_801C7074].st == 6) {
        if (D_801C7469 != 4 && D_801C7469 != 3 && D_801C6B33 != 0) {
            goto block_20;
        }
        goto block_19;
    }
    if ((u32)(D_8011F32E[D_801C7074].st - 9) >= 2U && D_8011F32E[D_801C7074].st != 0xD) {
        if ((u32)(D_8011F32E[D_801C7074].st - 0xF) < 2U) {
            if (D_801C707B != 0) {
                if (D_801C707B != 1) {
                    goto block_88;
                }
                goto block_20;
            }
            goto block_19;
        }
        if (D_801C7AB8 != 4 && D_801C7AB8 != 3 && D_801C6B33 != 0) {
            goto block_20;
        }
        goto block_19;
    }
block_19:
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xFA000000;
    p[1] = D_8011F2FC[(arg1 & 0xFFFF) * 0x64] | 0xFF00;
    goto block_88;
block_20:
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xFA000000;
    p[1] = 0x96969664;
block_88:
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xF9000000;
    p[1] = 1;
}

extern u8 D_8011F350[];
extern u16 D_8018BC3C;

#define ENT(i) (*(u8 **)(D_8011F350 + (i) * 100))

void func_80203DF8(s32 arg0, s16 arg1, s8 arg2, s8 arg3, u8 arg4) {
    *ENT(D_8018BC3C) = 0;
    *(s16 *)(ENT(D_8018BC3C) + 2) = arg1;
    *(s16 *)(ENT(D_8018BC3C) + 4) = 0;
    if ((arg0 & 0xFF) == 2) {
        ENT(D_8018BC3C)[6] = arg2;
        ENT(D_8018BC3C)[7] = arg3;
        ENT(D_8018BC3C)[8] = arg4;
    }
    *(s16 *)(ENT(D_8018BC3C) + 10) = 0;
    *(s16 *)(ENT(D_8018BC3C) + 12) = 0;
    *(s16 *)(ENT(D_8018BC3C) + 14) = 0x140;
    *(s16 *)(ENT(D_8018BC3C) + 16) = 0xF0;
    *ENT(D_8018BC3C) = arg0;
}

extern u8 D_8011F350[];
extern u16 D_8018BC3C;

#define ENT_PTR(o) (*(u8 **)(D_8011F350 + (o)))

void func_80203DF8(u8 arg0, s16 arg1, s8 arg2, s8 arg3, u8 arg4) {
    s32 off;
    u8 keep;

    keep = arg0;
    off = D_8018BC3C * 0x64;
    *ENT_PTR(off) = 0;
    off = D_8018BC3C * 0x64;
    *(s16 *)(ENT_PTR(off) + 2) = arg1;
    *(s16 *)(ENT_PTR(off) + 4) = 0;
    if ((keep & 0xFF) == 2) {
        off = D_8018BC3C * 0x64;
        *(s8 *)(ENT_PTR(off) + 6) = arg2;
        off = D_8018BC3C * 0x64;
        *(s8 *)(ENT_PTR(off) + 7) = arg3;
        off = D_8018BC3C * 0x64;
        *(u8 *)(ENT_PTR(off) + 8) = arg4;
    }
    off = D_8018BC3C * 0x64;
    *(s16 *)(ENT_PTR(off) + 0xA) = 0;
    *(s16 *)(ENT_PTR(off) + 0xC) = 0;
    *(s16 *)(ENT_PTR(off) + 0xE) = 0x140;
    *(s16 *)(ENT_PTR(off) + 0x10) = 0xF0;
    *ENT_PTR(off) = keep;
}

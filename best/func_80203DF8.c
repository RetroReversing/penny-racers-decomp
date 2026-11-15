extern s8 D_8011F350[];
extern u16 D_8018BC3C;

#define ENT(off) (*(s8 **)(D_8011F350 + D_8018BC3C * 0x64) + (off))

void func_80203DF8(u8 arg0, s16 arg1, s8 arg2, s8 arg3, u8 arg4) {
    *ENT(0) = 0;
    *(s16 *)ENT(2) = arg1;
    *(s16 *)ENT(4) = 0;
    if (arg0 == 2) {
        *ENT(6) = arg2;
        *ENT(7) = arg3;
        *ENT(8) = arg4;
    }
    *(s16 *)ENT(0xA) = 0;
    *(s16 *)ENT(0xC) = 0;
    *(s16 *)ENT(0xE) = 0x140;
    *(s16 *)ENT(0x10) = 0xF0;
    *ENT(0) = arg0;
}

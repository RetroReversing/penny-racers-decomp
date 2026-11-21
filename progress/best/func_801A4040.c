/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_801C7084[];
extern void *D_801C7AB0;

s32 func_801A4040(s32 arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 var_a1;

    if ((*(u8 *)((char *)(D_801C7AB0) + 0)) == 3) {
        var_v1 = arg0 & 0xFF;
        var_a1 = *(D_801C7084 + (var_v1 * 5));
    } else {
        var_v1 = arg0 & 0xFF;
        var_a1 = *(D_801C7084 + ((arg0 & 0xFF) * 5)) - 0x2E;
    }
    if (var_v1 != 0xFF) {
        if (((arg0 & 0xFF) == (*(u8 *)((char *)(D_801C7AB0) + 2))) || ((var_v0 = 1, (((u32) (var_a1 & 0xFF) < 5U) == 0)) && (var_v0 = 1, ((((u32) ((unsigned char)(var_a1 - 0x16)) < 0xAU) | ((s8) var_a1 == 0x2C)) == 0)) && (var_v0 = 0, ((s8) var_a1 == 0x2D)))) {
            return 1;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    return var_v0;
}

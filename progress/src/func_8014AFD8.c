extern char D_8011F2FD[];
extern u8 D_8011F32E[];
extern u8 D_80190CB2[];
extern u16 D_80190CB4;

void func_8014AFD8(s32 arg0) {
    if (*(u16 *)(D_8011F32E + (D_80190CB4 * 0x64)) == 0x30) {
        *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
    D_80190CB2[0] += 1;
}

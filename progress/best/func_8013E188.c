extern s16 D_80187BE0;
extern s16 D_80189DC2;
extern u8 D_8018D6C0[];
extern u8 D_8018D6C8[];
extern u8 D_8018D6D4[];
extern u8 D_8018D736[];
extern u8 D_8018D738[];
extern u8 D_8018D73A[];
extern s16 D_8018F5C2;

void func_8013E188(void) {
char *__repair_addr;

    u16 i;
    s32 off;

    D_80187BE0 = 0x40;
    for (i = 0; i < 0x40; i++) {
        off = i * 0x7C;
__repair_addr = (char *)(D_8018D6C0 + off + 0x10);

        *(f32 *)(__repair_addr) = 0.0f;
        *(f32 *)(D_8018D6C0 + off + 0xC) = 0.0f;
        *(f32 *)(D_8018D6C8 + off) = 0.0f;
        *(s16 *)(D_8018D6D4 + off) = 0;
        *(s16 *)(D_8018D736 + off) = i;
    }
    D_8018F5C2 = 0;
    D_80189DC2 = 0x3F;
    for (i = 1; i < 0x3F; i++) {
        off = i * 0x7C;
        *(s16 *)(D_8018D738 + off) = i - 1;
        *(s16 *)(D_8018D73A + off) = i + 1;
    }
    *(s16 *)(D_8018D738 + 0) = 0xFFFF;
    *(s16 *)(D_8018D738 + 2) = 1;
    *(s16 *)(D_8018D738 + 0x1E84) = 0x3E;
    *(s16 *)(D_8018D738 + 0x1E86) = 0xFFFF;
}

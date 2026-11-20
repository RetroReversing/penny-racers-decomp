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
    u8 *__base_D_8018D73A;
    u8 *__base_D_8018D736;
    u8 *__base_D_8018D6D4;
    u8 *__base_D_8018D738;
    
    u8 *__base_D_8018D6C0;

    u16 i;
    s32 off;

    D_80187BE0 = 0x40;
    for (i = 0; i < 0x40; i++) {
        off = i * 0x7C;

        __base_D_8018D6C0 = D_8018D6C0;
        *(f32 *)(((char *)((char *)(__base_D_8018D6C0 + off + 0x10)))) = 0.0f;
        *(f32 *)(__base_D_8018D6C0 + off + 0xC) = 0.0f;
        __base_D_8018D6D4 = D_8018D6C8;
        *(f32 *)(__base_D_8018D6D4 + off) = 0.0f;
        __base_D_8018D6D4 = D_8018D6D4;
        *(s16 *)(__base_D_8018D6D4 + off) = 0;
        __base_D_8018D736 = D_8018D736;
        *(s16 *)(__base_D_8018D736 + off) = i;
    }
    D_80189DC2 = 0x3F;
    D_8018F5C2 = 0;
    for (i = 1; i < 0x3F; i++) {
        off = i * 0x7C;
        __base_D_8018D738 = D_8018D738;
        *(s16 *)(__base_D_8018D738 + off) = i - 1;
        __base_D_8018D73A = D_8018D73A;
        *(s16 *)(__base_D_8018D73A + off) = i + 1;
    }
    *(s16 *)(__base_D_8018D738 + 0) = 0xFFFF;
    *(s16 *)(__base_D_8018D738 + 2) = 1;
    *(s16 *)(__base_D_8018D738 + 0x1E84) = 0x3E;
    *(s16 *)(__base_D_8018D738 + 0x1E86) = 0xFFFF;
}

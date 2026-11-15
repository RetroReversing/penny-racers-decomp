void alLink(void *a0, void *a1);
void alUnlink(void *a0);

void func_80031DD8(u8 *arg0, u8 *arg1) {
    u8 *s2;
    u8 *s0;
    u16 s3;
    u8 v;

    s0 = *(u8 **)(arg0 + 0x50);
    if (s0 == NULL) {
        return;
    }
    do {
        s3 = *(u16 *)(s0 + 0xC);
        s2 = *(u8 **)s0;
        if ((((u32)(s3 - 0x16)) < 2U) && (*(u8 **)(s0 + 0x10) == arg1)) {
            (*(void (**)(void *))(arg0 + 0x78))(*(void **)(s0 + 0x14));
            alUnlink(s0);
            if (s2 != NULL) {
                *(s32 *)(s2 + 8) += *(s32 *)(s0 + 8);
            }
            alLink(s0, arg0 + 0x48);
            if ((s16)s3 == 0x16) {
                v = arg1[0x37] & 0xFE;
            } else {
                v = arg1[0x37] & 0xFD;
            }
            arg1[0x37] = v;
            s0 = s2;
        } else {
            s0 = s2;
        }
    } while (s0 != NULL && arg1[0x37] == 0 || s0 != NULL);
}

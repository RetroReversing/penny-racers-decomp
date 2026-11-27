extern u8 sNodeFlags;
extern u8 D_8011F300;
extern u16 objListHead;

void func_800DF094(void)
{
    u16 cur;
    s32 off;

    cur = objListHead;
    while (cur != 0xFFFF) {
        off = cur * 0x64;
        *(u16 *)(&sNodeFlags + off) = *(u16 *)(&sNodeFlags + off) & 0xFFEF;
        cur = *(u16 *)(&D_8011F300 + off);
    }
}

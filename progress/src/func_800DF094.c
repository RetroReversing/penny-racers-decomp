extern u8 D_8011F2F2;
extern u8 D_8011F300;
extern u16 objListHead;

void func_800DF094(void)
{
    u16 cur;
    s32 off;

    cur = objListHead;
    while (cur != 0xFFFF) {
        off = cur * 0x64;
        *(u16 *)(&D_8011F2F2 + off) = *(u16 *)(&D_8011F2F2 + off) & 0xFFEF;
        cur = *(u16 *)(&D_8011F300 + off);
    }
}

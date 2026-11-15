extern u8 D_8011F2F2;
extern u8 D_8011F300;
extern u16 func_800E1850;

void func_800DF094(void)
{
char *__repair_addr;

    u16 cur;
    s32 off;

    cur = func_800E1850;
    while (cur != 0xFFFF) {
        off = cur * 0x64;
        *(u16 *)(&D_8011F2F2 + off) = *(u16 *)(&D_8011F2F2 + off) & 0xFFEF;
__repair_addr = (char *)(&D_8011F300 + off);

        cur = *(u16 *)(__repair_addr);
    }
}

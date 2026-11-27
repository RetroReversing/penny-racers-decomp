extern u16 objListHead;
extern u8 D_8011F2F0[];
void freeObject(s32);

void func_800E1510(void)
{
    u8 flag;
    u16 idx;
    u8 *ent;

    idx = objListHead;
    flag = 0;
    do {
        ent = D_8011F2F0 + (idx & 0xFFFF) * 0x64;
        if (ent[0xD] != 0) {
            ent[0xD] = ent[0xD] - 1;
            if (ent[0xD] == 0) {
                freeObject(idx);
                flag = 1;
            }
        }
        if (flag == 0) {
            idx = *(u16 *)(ent + 0x10);
        } else {
            flag = 0;
            idx = objListHead;
        }
    } while (idx != 0xFFFF);
}

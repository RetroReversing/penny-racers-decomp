extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern u16 D_8018F5C2;
typedef struct { u16 prev; u16 next; u8 pad[0x78]; } Node;
extern Node D_8018D738[];

void func_8013E49C(u16 arg0) {
    u16 n = 1;
    s32 i;
    if (D_80189DC2 == 0xFFFF) {
        D_8018F5C2 = arg0;
        i = arg0;
        if (D_8018D738[i].next != D_80189DC2) {
            do {
                arg0 = D_8018D738[i].next;
                i = arg0;
                n++;
            } while (D_8018D738[i].next != 0xFFFF);
        }
        D_80189DC2 = arg0;
        D_80187BE0 = n;
        return;
    }
    i = arg0;
    if (D_8018D738[i].next != 0xFFFF) {
        do {
            D_8018D738[D_80189DC2].next = arg0;
            D_8018D738[i].prev = D_80189DC2;
            D_80189DC2 = arg0;
            arg0 = D_8018D738[i].next;
            i = arg0;
            n++;
        } while (D_8018D738[i].next != 0xFFFF);
    }
    D_8018D738[D_80189DC2].next = arg0;
    D_8018D738[arg0].prev = D_80189DC2;
    D_80189DC2 = arg0;
    D_80187BE0 += n;
}

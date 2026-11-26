void func_8014B854(s32);
unsigned long func_80199EAC(s32);
extern s8 D_801C6BB9;
extern s8 D_801C7068;

void func_8019E734(s32 arg0)
{
    s32 cmd;

    cmd = func_80199EAC(arg0 & 0xFFFF);
    if ((u8)cmd == 0 && D_801C6BB9 > 0) {
        D_801C6BB9 = D_801C6BB9 - 1;
        func_8014B854(0x3B);
    } else if ((u8)cmd == 2 && D_801C6BB9 < 0x17) {
        D_801C6BB9 = D_801C6BB9 + 1;
        func_8014B854(0x3B);
    } else if ((u8)cmd == 1 && D_801C7068 > 0) {
        D_801C7068 = D_801C7068 - 1;
        func_8014B854(0x3B);
    } else if ((u8)cmd == 3 && D_801C7068 < 0x17) {
        D_801C7068 = D_801C7068 + 1;
        func_8014B854(0x3B);
    }
}

s32 func_801CA140();
s32 func_801CB74C();
s32 func_801CBF48();
extern char D_8011F330[];
extern char D_801D4FC0[];
extern char D_801E9658[];
extern char D_801E964C[];
extern char D_801E9668[];
extern char D_801E9678[];
extern char D_801E9684[];
extern u8 D_801E979A;

void func_801E3E7C(s32 arg0, s32 arg1)
{
    s32 temp_v1;

    func_801CA140();
    temp_v1 = *(u16 *) (D_8011F330 + (arg1 & 0xFFFF) * 0x64);
    switch (temp_v1)
    {
    case 0:
        func_801CB74C(arg0, 0x18, 0x20, 8, D_801D4FC0, D_801E964C);
        break;
    case 1:
        func_801CB74C(arg0, 0x18, 0x20, 8, D_801D4FC0, D_801E9658);
        break;
    case 2:
        func_801CB74C(arg0, 0x18, 0x20, 8, D_801D4FC0, D_801E9668);
        func_801CBF48(arg0, 0x18, 0x30, 8, D_801D4FC0, 1, (s32) D_801E979A);
        func_801CB74C(arg0, 0x28, 0x30, 8, D_801D4FC0, D_801E9678);
        break;
    case 3:
        func_801CB74C(arg0, 0x18, 0x20, 8, D_801D4FC0, D_801E9684);
        break;
    }
}

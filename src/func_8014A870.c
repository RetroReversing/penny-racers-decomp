extern u32 D_801E9980;
extern u32 D_801E9984;
extern u32 D_801E9988;
extern u32 D_801E998C;
extern u32 D_801E9990;
extern u32 D_801E9994;
extern u32 D_801E99A8;
extern u32 D_801E99AC;

#define ENTRY(base) (*(u32 *)((u8 *)&(base) + arg2 * 0x70))

s32 func_8014A870(u32 arg0, s32 arg1, s32 arg2)
{
    s32 flags = 0;
    u32 v;

    if (arg2 < 4) {
        v = ENTRY(D_801E9988);
        if (v == 1 || (arg0 < v && !(v & arg1))) {
            flags |= 0x1;
        }
        v = ENTRY(D_801E998C);
        if (v == 1 || (arg0 < v && !(v & arg1))) {
            flags |= 0x2;
        }
        v = ENTRY(D_801E9980);
        if (v == 1 || (arg0 < v && !(v & arg1))) {
            flags |= 0x8;
        }
        v = ENTRY(D_801E9984);
        if (v == 1 || (arg0 < v && !(v & arg1))) {
            flags |= 0x4;
        }
        if (ENTRY(D_801E9990) == 1) {
            flags |= 0x10;
        }
        if (ENTRY(D_801E9994) == 1) {
            flags |= 0x20;
        }
        if (ENTRY(D_801E99A8) == 1) {
            flags |= 0x40;
        }
        if (ENTRY(D_801E99AC) == 1) {
            flags |= 0x80;
        }
    }
    return flags & 0xFF;
}

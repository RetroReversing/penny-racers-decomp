extern s32 D_8011F350[];
extern u16 D_801E9B32;

typedef struct
{
    u8 pad[9];
    u8 f9;
    s16 fA;
    s16 fC;
    s16 fE;
    s16 f10;
} Rec;

void func_801D8E74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    Rec *r;
    do {
    r = (Rec *) D_8011F350[D_801E9B32 * 25];
    } while (0);
    r->fA = arg0 + 1;
    do {
    r->fC = arg1 + 1;
    } while (0);
    r->fE = ((arg2 & 0xFFFF) + 2) * 24 - 2;
    do {
    r->f10 = ((arg3 & 0xFFFF) + 2) * 24 - 2;
    } while (0);
    r->f9 = arg4;
}

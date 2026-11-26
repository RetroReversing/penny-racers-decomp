typedef struct { char pad[0x87B]; s8 x; } O;
s32 func_80223FBC(O *p)
{
    s8 v;
    if ((u8)(p->x + 6) < 13) {
        v = 0;
    } else if (p->x >= 0x40) {
        v = 0x3F;
    } else if (p->x < -0x3F) {
        v = -0x3F;
    } else {
        v = p->x;
    }
    return (v + 0x3F) * 0.25f;
}

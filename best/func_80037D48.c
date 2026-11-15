u8 func_80038164();
s32 func_800381F8();

void func_80037D48(void *arg0, void *arg1)
{
    s32 t;
    u8 a;
    u8 b;
    u8 v;

    t = func_800381F8();
    *(s32 *)((char *)arg0 + 0xC) += t;
    a = func_80038164(arg0);
    if (a == 0xFF) {
        b = func_80038164(arg0);
        if (b == 0x51) {
            *(s16 *)((char *)arg1 + 0) = 3;
            *(s32 *)((char *)arg1 + 4) = t;
            ((char *)arg1)[8] = a;
            ((char *)arg1)[9] = b;
            ((char *)arg1)[0xA] = func_80038164(arg0);
            ((char *)arg1)[0xB] = func_80038164(arg0);
            ((char *)arg1)[0xC] = func_80038164(arg0);
            ((char *)arg1)[0xD] = func_80038164(arg0);
        } else {
            if (b != 0x2F) {
                *(u16 *)((char *)arg0 + 0x1A) = 0;
                return;
            }
            *(s16 *)((char *)arg1 + 0) = 4;
            *(s32 *)((char *)arg1 + 4) = t;
            ((char *)arg1)[8] = a;
            ((char *)arg1)[9] = b;
            ((char *)arg1)[0xA] = func_80038164(arg0);
        }
        *(u16 *)((char *)arg0 + 0x1A) = 0;
        return;
    }
    *(s16 *)((char *)arg1 + 0) = 1;
    *(s32 *)((char *)arg1 + 4) = t;
    if (a & 0x80) {
        ((char *)arg1)[8] = a;
        ((char *)arg1)[9] = func_80038164(arg0);
        *(u16 *)((char *)arg0 + 0x1A) = a;
    } else {
        ((char *)arg1)[9] = a;
        ((char *)arg1)[8] = (u8)*(u16 *)((char *)arg0 + 0x1A);
    }
    v = ((char *)arg1)[8] & 0xF0;
    if (v != 0xC0 && v != 0xD0) {
        ((char *)arg1)[0xA] = func_80038164(arg0);
    } else {
        ((char *)arg1)[0xA] = 0;
    }
}

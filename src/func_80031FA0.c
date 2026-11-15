u8 func_8003221C(void *arg0);
s32 func_80032230(void *arg0);

void func_80031FA0(void *arg0, void *arg1) {
    s32 temp;
    u8 c;
    u8 d;

    temp = func_80032230(arg0);
    *(s32 *)((s8 *)arg0 + 0xC) += temp;
    c = func_8003221C(arg0);
    if (c == 0xFF) {
        d = func_8003221C(arg0);
        if (d == 0x51) {
            *(s16 *)((s8 *)arg1 + 0x0) = 3;
            *(s32 *)((s8 *)arg1 + 0x4) = temp;
            *(u8 *)((s8 *)arg1 + 0x8) = c;
            *(u8 *)((s8 *)arg1 + 0x9) = d;
            *(u8 *)((s8 *)arg1 + 0xA) = func_8003221C(arg0);
            *(u8 *)((s8 *)arg1 + 0xB) = func_8003221C(arg0);
            *(u8 *)((s8 *)arg1 + 0xC) = func_8003221C(arg0);
            *(u8 *)((s8 *)arg1 + 0xD) = func_8003221C(arg0);
        } else if (d == 0x2F) {
            *(s16 *)((s8 *)arg1 + 0x0) = 4;
            *(s32 *)((s8 *)arg1 + 0x4) = temp;
            *(u8 *)((s8 *)arg1 + 0x8) = c;
            *(u8 *)((s8 *)arg1 + 0x9) = d;
            *(u8 *)((s8 *)arg1 + 0xA) = func_8003221C(arg0);
        }
        *(u16 *)((s8 *)arg0 + 0x1A) = 0;
        return;
    }
    *(s16 *)((s8 *)arg1 + 0x0) = 1;
    *(s32 *)((s8 *)arg1 + 0x4) = temp;
    if (c & 0x80) {
        *(u8 *)((s8 *)arg1 + 0x8) = c;
        *(u8 *)((s8 *)arg1 + 0x9) = func_8003221C(arg0);
        *(u16 *)((s8 *)arg0 + 0x1A) = c;
    } else {
        u16 t = *(u16 *)((s8 *)arg0 + 0x1A);
        *(u8 *)((s8 *)arg1 + 0x9) = c;
        *(u8 *)((s8 *)arg1 + 0x8) = t;
    }
    if ((*(u8 *)((s8 *)arg1 + 0x8) & 0xF0) != 0xC0 && (*(u8 *)((s8 *)arg1 + 0x8) & 0xF0) != 0xD0) {
        *(u8 *)((s8 *)arg1 + 0xA) = func_8003221C(arg0);
    } else {
        *(u8 *)((s8 *)arg1 + 0xA) = 0;
    }
}

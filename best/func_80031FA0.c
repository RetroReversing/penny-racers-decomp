u8 func_8003221C(void *p);
s32 func_80032230(void);

void func_80031FA0(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_4;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s32 temp_v1;

    temp_v0 = func_80032230();
    *(s32 *)((s8 *)arg0 + 0xC) += temp_v0;
    temp_v0_2 = func_8003221C(arg0);
    if (temp_v0_2 == 0xFF) {
        do { temp_v0_3 = func_8003221C(arg0); } while (0);
        temp_v1 = temp_v0_3;
        if (temp_v1 == 0x51) {
            *(s16 *)((s8 *)arg1 + 0) = 3;
            *(s32 *)((s8 *)arg1 + 4) = temp_v0;
            *(u8 *)((s8 *)arg1 + 8) = temp_v0_2;
            *(u8 *)((s8 *)arg1 + 9) = temp_v0_3;
            *(u8 *)((s8 *)arg1 + 0xA) = func_8003221C(arg0);
            *(u8 *)((s8 *)arg1 + 0xB) = func_8003221C(arg0);
            *(u8 *)((s8 *)arg1 + 0xC) = func_8003221C(arg0);
            *(u8 *)((s8 *)arg1 + 0xD) = func_8003221C(arg0);
        } else if (temp_v1 == 0x2F) {
            *(s16 *)((s8 *)arg1 + 0) = 4;
            *(s32 *)((s8 *)arg1 + 4) = temp_v0;
            *(u8 *)((s8 *)arg1 + 8) = temp_v0_2;
            *(u8 *)((s8 *)arg1 + 9) = temp_v0_3;
            *(u8 *)((s8 *)arg1 + 0xA) = func_8003221C(arg0);
        }
        *(u16 *)((s8 *)arg0 + 0x1A) = 0;
        return;
    }
    *(s16 *)((s8 *)arg1 + 0) = 1;
    *(s32 *)((s8 *)arg1 + 4) = temp_v0;
    if (temp_v0_2 & 0x80) {
        *(u8 *)((s8 *)arg1 + 8) = temp_v0_2;
        *(u8 *)((s8 *)arg1 + 9) = func_8003221C(arg0);
        *(u16 *)((s8 *)arg0 + 0x1A) = temp_v0_2;
    } else {
        *(u8 *)((s8 *)arg1 + 9) = temp_v0_2;
        *(u8 *)((s8 *)arg1 + 8) = *(u16 *)((s8 *)arg0 + 0x1A);
    }
    temp_v0_4 = *(u8 *)((s8 *)arg1 + 8) & 0xF0;
    if (temp_v0_4 != 0xC0 && temp_v0_4 != 0xD0) {
        *(u8 *)((s8 *)arg1 + 0xA) = func_8003221C(arg0);
        return;
    }
    *(u8 *)((s8 *)arg1 + 0xA) = 0;
}

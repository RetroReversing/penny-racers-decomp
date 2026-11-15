u8 func_80038D64(void *, s32);
u8 func_80038E1C(void *, s32);

s32 func_80038650(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 s3;
    s32 s4;
    u8 v;
    u8 *a3;
    u8 *p;
    u8 *q;
    u8 *res;
    u8 c;
    u8 n;
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;

    s3 = func_80038D64(arg0, arg1);
    s4 = s3 & 0xFF;
    if (s4 == 0xFF) {
        v = func_80038D64(arg0, arg1) & 0xFF;
        if (v == 0x51) {
            *(s16 *)arg2 = 3;
            arg2[8] = s3;
            arg2[9] = v;
            arg2[0xB] = func_80038D64(arg0, arg1);
            arg2[0xC] = func_80038D64(arg0, arg1);
            arg2[0xD] = func_80038D64(arg0, arg1);
            arg0[arg1 + 0xA8] = 0;
        } else if (v == 0x2F) {
            *(s32 *)(arg0 + 4) = *(s32 *)(arg0 + 4) ^ (1 << arg1);
            if (*(s32 *)(arg0 + 4) != 0) {
                *(s16 *)arg2 = 0x12;
            } else {
                *(s16 *)arg2 = 4;
            }
        } else if (v == 0x2E) {
            func_80038D64(arg0, arg1);
            func_80038D64(arg0, arg1);
            arg0[arg1 + 0xA8] = 0;
            *(s16 *)arg2 = 0x13;
        } else if (v == 0x2D) {
            a3 = arg0 + arg1 * 4;
            p = *(u8 **)(a3 + 0x18);
            c = p[0];
            q = p + 1;
            n = q[0];
            if (n == 0) {
                q[0] = c;
                res = q + 5;
            } else {
                if (n != s4) {
                    q[0] = n - 1;
                }
                q = q + 1;
                b0 = *q; q = q + 1;
                b1 = *q; q = q + 1;
                b2 = *q; q = q + 1;
                b3 = *q; q = q + 1;
                res = q - ((b0 << 24) + (b1 << 16) + (b2 << 8) + b3);
            }
            *(u8 **)(a3 + 0x18) = res;
            arg0[arg1 + 0xA8] = 0;
            *(s16 *)arg2 = 0x14;
        }
    } else {
        *(s16 *)arg2 = 1;
        if (s3 & 0x80) {
            arg2[8] = s3;
            arg2[9] = func_80038D64(arg0, arg1);
            arg0[arg1 + 0xA8] = s3;
        } else {
            arg2[9] = s3;
            arg2[8] = arg0[arg1 + 0xA8];
        }
        v = arg2[8] & 0xF0;
        if (v != 0xC0 && v != 0xD0) {
            arg2[0xA] = func_80038D64(arg0, arg1);
            if ((arg2[8] & 0xF0) == 0x90) {
                *(s32 *)(arg2 + 0xC) = func_80038E1C(arg0, arg1);
            }
        } else {
            arg2[0xA] = 0;
        }
    }
    return 1;
}

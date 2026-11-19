/* Partial candidate from function #295584 in project #76; rechecked locally. */
void func_801390BC(void **arg0) {
    *arg0 = *(void **)*arg0;
}

void func_80139074(void **arg0, void **arg1) {
    void **t9 = arg0;
    void **t8 = *arg0;
    s32 t7 = ((s32 *)arg1)[1];
    if (((s32 *)t8)[1] >= t7) {
        do {
            t9 = t8;
            t8 = *t8;
        } while (((s32 *)t8)[1] >= t7);
    }
    arg1[0] = *t9;
    *t9 = arg1;
    arg1[2] = arg0;
}

void func_8003DDC0(u8 *arg0, s32 arg1) {
    s32 n;
    s32 k;
    u8 *p = arg0;
    n = arg1;
    if (n >= 0xC) {
        k = -(s32)p & 3;
        n -= k;
        if (k != 0) {
            *(u32 *)p = 0;
            p += k;
        }
        k = n & ~0x1F;
        n -= k;
        if (k != 0) {
            u32 *q = (u32 *)p;
            u32 *e = (u32 *)(p + k);
            do {
                q[0] = 0;
                q[1] = 0;
                q[2] = 0;
                q[3] = 0;
                q[4] = 0;
                q[5] = 0;
                q[6] = 0;
                q[7] = 0;
                q += 8;
            } while (q != e);
            p = (u8 *)q;
        }
        k = n & ~3;
        n -= k;
        if (k != 0) {
            u32 *q = (u32 *)p;
            u32 *e = (u32 *)(p + k);
            do {
                *q++ = 0;
            } while (q != e);
            p = (u8 *)q;
        }
    }
    if (n > 0) {
        u8 *e = p + n;
        do {
            *p++ = 0;
        } while (p != e);
    }
}

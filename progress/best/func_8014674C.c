extern s32 func_8014A870(s32, s32, u8);
extern void func_8014B854(s32);
extern u8 D_8011F2F0[];
extern u8 D_80189B36;
extern u8 D_80189C9A[];
extern u8 D_80189CC6[];
extern u8 D_8018A276;
extern u8 D_8018A277[];

void func_8014674C(s32 arg0)
{
    s32 s1;
    s32 s2;
    u8 *p;
    u8 a2;
    u16 st;
    s32 v0b;
    s32 v0;
    s32 v0c;

    s2 = 0;
    p = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    s1 = 0;
    if (*(u16 *)(D_80189CC6 + 0) & 0x800) {
        s1 = func_8014A870(0x14, 3, D_80189CC6[-8]);
        v0 = s1 & 2;
        if (s1 & 1) {
            v0 = s1 & 2;
            if (D_80189CC6[-0x2C] != 0) {
                s2 = 1;
                D_80189CC6[-0x2C]--;
                v0 = s1 & 2;
            }
        }
        v0b = s2 & 0xFF;
        if (v0 != 0) {
            v0b = s2 & 0xFF;
            if (D_80189C9A[0] != D_8018A276 - 1) {
                s2 = 1;
                D_80189C9A[0]++;
                goto block_23;
            }
        }
    } else {
        st = *(u16 *)(p + 0x3E);
        if (st != 1) {
            if ((s32)st >= 2) {
                v0b = 0;
                if (st == 2) {
                    p[0]++;
                    if (p[0] >= 0x1F) {
                        s1 = 0x10;
                    }
                    goto block_23;
                }
            } else {
                v0b = 0;
                if (st == 0) {
                    p[0]++;
                    v0b = 0;
                    if (p[0] >= 0x15) {
                        p[0] = 0;
                        *(u16 *)(p + 0x3E) = 1;
                        goto block_23;
                    }
                }
            }
        } else {
            a2 = p[0] + 1;
            p[0] = a2;
            if (D_80189C9A[0] != D_80189C9A[2]) {
                register v0b = 0;
                if (!(a2 & 0xF)) {
                    s2 = 1;
                    D_80189C9A[0]++;
                    goto block_23;
                }
            } else {
                p[0] = 0;
                *(u16 *)(p + 0x3E) = 2;
block_23:
                v0b = s2 & 0xFF;
            }
        }
    }
    v0c = s1 & 0x10;
    if (v0b != 0) {
        func_8014B854(0x3B);
        v0c = s1 & 0x10;
    }
    if (v0c != 0) {
        s32 a0 = 0x3E;
        if (!(D_8018A277[D_80189C9A[0]] & 0x10)) {
            a0 = 0x3D;
            D_80189B36 &= 0xEF;
            *(s16 *)(D_80189C9A - 2) = 0x30;
        }
        func_8014B854(a0);
    }
}

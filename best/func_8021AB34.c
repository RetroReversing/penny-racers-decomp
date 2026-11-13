extern u8 D_800DB1B8[];
extern u8 D_8011F350[];
extern u8 D_80190CAA;
extern u16 D_80190CB4;

void func_8021AB34(void) {
    s16 a3 = 0;
    s16 *p = (s16 *)(D_800DB1B8 + 0x2108);
    s16 a1;
    s16 v1;
    s16 v0;
    s32 t;
    if (D_80190CAA != 0) {
        t = D_80190CAA;
        if (t != 2) {
            if (t < 3) {
                if (t == 1) {
                    a3 = 2;
                    goto done;
                }
                a1 = a3;
            } else {
                if (t == 3) {
                    a3 = 0x50;
                    goto done;
                }
                a1 = a3;
            }
        } else {
            a3 = 0xA0;
done:
            a1 = a3;
        }
        v1 = p[4];
        v0 = (s32)((f32)(a1 - v1) / 8.0f) + v1;
        p[4] = v0;
        if (a1 - 2 < v0 && v0 < a1 + 2) {
            p[4] = a3;
            D_80190CAA = 0;
        }
        p[16] = p[4];
        p[17] = p[5];
        p[18] = (u16)p[4] + (u16)p[6];
        p[19] = (u16)p[5] + (u16)p[7];
        *(u16 *)(*(u8 **)(D_8011F350 + D_80190CB4 * 100) + 0xA) = p[4];
    }
}

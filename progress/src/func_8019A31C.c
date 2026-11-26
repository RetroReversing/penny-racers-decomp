typedef struct { u8 a, b; } Hdr;
extern u8 func_8019A4F8(void);
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern Hdr *D_801C7AB0;

u8 func_8019A31C(void)
{
    u8 r;
    if (D_801C7AB0->b == 5) {
        if (D_801C7068 == 0 || D_801C7068 == 0x17) {
            if (D_801C6BB9 == 0) {
                r = 0;
            } else if (D_801C6BB9 == 0x17) {
                r = 0;
            } else if (D_801C6BB9 == 1) {
                r = 1;
            } else {
                r = D_801C6BB9 == 0x16 ? 2 : 3;
            }
        } else if (D_801C7068 == 1) {
            if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) {
                r = 4;
            } else if (D_801C6BB9 == 1) {
                r = 5;
            } else {
                r = D_801C6BB9 == 0x16 ? 6 : 7;
            }
        } else if (D_801C7068 == 0x16) {
            if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) {
                r = 8;
            } else if (D_801C6BB9 == 1) {
                r = 9;
            } else {
                r = D_801C6BB9 == 0x16 ? 0xA : 0xB;
            }
        } else {
            if (D_801C6BB9 == 0 || D_801C6BB9 == 0x17) {
                r = 0xC;
            } else if (D_801C6BB9 == 1) {
                r = 0xD;
            } else {
                r = D_801C6BB9 == 0x16 ? 0xE : 0xF;
            }
        }
    } else {
        r = func_8019A4F8();
    }
    return r;
}

extern unsigned char D_80168D38[];
unsigned char func_80149F40(int a0, unsigned int a1, unsigned char a2) {
    unsigned char v = a2;
    if (a1 < 8) {
        switch (a1) {
        case 0:
            v = D_80168D38[a2];
            if (v & 0x80) {
                v = (v & 0x7F) + a0;
            }
            break;
        case 1:
            if (a2 == 0x5A) {
                v = 0;
            } else {
                v = v + 1;
            }
            break;
        default:
            break;
        }
    }
    return v;
}

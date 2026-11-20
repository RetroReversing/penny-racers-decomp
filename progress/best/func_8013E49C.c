extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern u8 D_8018D738[];
extern u8 D_8018D73A[];
extern u16 D_8018F5C2;

#define NEXT(i) (*(u16 *)(D_8018D73A + (i) * 124))
#define PREV(i) (*(u16 *)(D_8018D738 + (i) * 124))

s32 func_8013E49C(u16 arg0) {
    u16 a0;
u16 __repair_result_a0;
    s32 a1;
    s32 a2;
    u16 v0;

    a0 = arg0;
    a2 = 1;
    if (D_80189DC2 == 0xFFFF) {
        D_8018F5C2 = a0;
        a1 = a0;
        v0 = NEXT(a1);
        if (v0 != 0xFFFF) {
            do {
                __repair_result_a0 = NEXT(a1);
                a1 = __repair_result_a0;
                v0 = NEXT(a1);
                a2++;
            } while (v0 != 0xFFFF);
        }
        D_80189DC2 = __repair_result_a0;
        D_80187BE0 = a2;
        return v0;
    }
    a1 = __repair_result_a0;
    if (NEXT(a1) != 0xFFFF) {
        do {
            NEXT(D_80189DC2) = __repair_result_a0;
            PREV(a1) = D_80189DC2;
            D_80189DC2 = __repair_result_a0;
            a0 = NEXT(a1);
            a1 = a0;
            a2++;
        } while (NEXT(a1) != 0xFFFF);
    }
    NEXT(D_80189DC2) = a0;
    PREV(a0) = D_80189DC2;
    D_80189DC2 = a0;
    D_80187BE0 += a2;
    return D_80187BE0;
}

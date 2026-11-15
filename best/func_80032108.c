s32 func_80031FA0(void *, s16 *);

typedef struct { int field_0; unsigned int field_4; unsigned int field_8; unsigned short field_C; } __repair_record_b;
void func_80032108(void *arg0, void *arg1, u32 arg2) {
    s16 sp10[9];
    s32 s4;
    s32 s7;
    u16 s3;
    u32 fp;
    u32 s2;
    u16 sp26;
    char *a = arg0;
    char *b = arg1;

    if (arg2 == 0) {
        ((__repair_record_b*)b)->field_C = 0;
        ((__repair_record_b*)b)->field_4 = 0;
        ((__repair_record_b*)b)->field_8 = 0;
        ((__repair_record_b*)b)->field_0 = *(s32 *)(arg0 + 4);
        return;
    }
    s7 = *(s32 *)(a + 8);
    sp26 = *(u16 *)(a + 0x1A);
    fp = *(u32 *)(a + 0xC);
    *(u16 *)(a + 0x1A) = 0;
    *(u32 *)(a + 0xC) = 0;
    *(s32 *)(a + 8) = *(s32 *)(a + 4);
    for (;;) {
        s4 = *(s32 *)(a + 8);
        s3 = *(u16 *)(a + 0x1A);
        s2 = *(u32 *)(a + 0xC);
        func_80031FA0(a, sp10);
        if (sp10[0] == 4) {
            s4 = *(s32 *)(a + 8);
            s3 = *(u16 *)(a + 0x1A);
            s2 = *(u32 *)(a + 0xC);
            ((__repair_record_b*)b)->field_0 = s4;
            break;
        }
        if (*(u32 *)(a + 0xC) < arg2) {
            continue;
        }
        ((__repair_record_b*)b)->field_0 = s4;
        break;
    }
    ((__repair_record_b*)b)->field_C = s3;
    ((__repair_record_b*)b)->field_4 = s2;
    ((__repair_record_b*)b)->field_8 = *(u32 *)(a + 0xC);
    *(s32 *)(a + 8) = s7;
    *(u16 *)(a + 0x1A) = sp26;
    *(u32 *)(a + 0xC) = fp;
}

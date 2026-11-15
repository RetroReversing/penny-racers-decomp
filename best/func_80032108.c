s32 func_80031FA0(void *, s16 *);

typedef struct { s32 field_0; u32 field_4; u32 field_8; u16 field_C; } __repair_record_b;

void func_80032108(void *arg0, void *arg1, u32 arg2) {
    s16 sp10[8];
    u16 sp26;
    s32 s7;
    u32 fp;
    s32 four;
    s32 s4;
    u16 s3;
    u32 s2;
    s32 t;
    char *b = arg1;
    char *a = arg0;

    if (arg2 == 0) {
        t = *(s32 *) (a + 4);
        ((__repair_record_b *) b)->field_C = 0;
        ((__repair_record_b *) b)->field_4 = 0;
        ((__repair_record_b *) b)->field_8 = 0;
        ((__repair_record_b *) b)->field_0 = t;
        return;
    }
    sp26 = *(u16 *) (a + 0x1A);
    s7 = *(s32 *) (a + 8);
    fp = *(u32 *) (a + 0xC);
    four = 4;
    *(u16 *) (a + 0x1A) = 0;
    *(u32 *) (a + 0xC) = 0;
    *(s32 *) (a + 8) = *(s32 *) (a + 4);
    for (;;) {
        s2 = *(u32 *) (a + 0xC);
        s3 = *(u16 *) (a + 0x1A);
        s4 = *(s32 *) (a + 8);
        func_80031FA0(a, sp10);
        if (*(s16 *) sp10 == four) {
            s4 = *(s32 *) (a + 8);
            s3 = *(u16 *) (a + 0x1A);
            s2 = *(u32 *) (a + 0xC);
            ((__repair_record_b *) b)->field_0 = s4;
            break;
        }
        if (*(u32 *) (a + 0xC) < arg2) {
            continue;
        }
        ((__repair_record_b *) b)->field_0 = s4;
        break;
    }
    ((__repair_record_b *) b)->field_C = s3;
    ((__repair_record_b *) b)->field_4 = s2;
    ((__repair_record_b *) b)->field_8 = *(u32 *) (a + 0xC);
    *(s32 *) (a + 8) = s7;
    *(u16 *) (a + 0x1A) = sp26;
    *(u32 *) (a + 0xC) = fp;
}

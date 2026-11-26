typedef struct {
    u8 player[0x17C];
    u32 flags;
    u16 count;
    u16 step;
} Chan;
extern Chan D_8006FB38[];
s32 func_80027D00(s32);
s32 func_8002C190(void *);
s16 func_8002C1D0(void *);
void alSeqpSetVol(void *, s16);
void alSeqpStop(void *);
void func_80027584(void) {
    s32 i;
    s32 vol;

    for (i = 0; i < 2; i++) {
        if ((D_8006FB38[i].flags & 2) && (func_8002C190(&D_8006FB38[i]) == 0)) {
            func_80027D00(i);
            D_8006FB38[i].flags &= ~2;
        }
        if (D_8006FB38[i].flags & 1) {
            if (D_8006FB38[i].count == 0) {
                alSeqpSetVol(&D_8006FB38[i], 0);
                alSeqpStop(&D_8006FB38[i]);
                D_8006FB38[i].flags &= ~1;
                alSeqpSetVol(&D_8006FB38[i], 0x7FFF);
            } else {
                vol = func_8002C1D0(&D_8006FB38[i]);
                vol -= D_8006FB38[i].step;
                alSeqpSetVol(&D_8006FB38[i], vol);
                D_8006FB38[i].count--;
            }
        }
    }
}

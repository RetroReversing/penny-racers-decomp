extern s32 D_8006FB38[];
extern s32 D_8006FCAC[];
extern s32 D_8006FCB4[];
void alSeqpPlay(void *arg0);
void alSeqpSetSeq(void *arg0, void *arg1);
s32 func_8002C190(void *arg0);
void alSeqpStop(void *arg0);
void func_8002D320(void *arg0, s32 arg1);

void func_80027D00(s32 arg0) {
    s32 i;
    s32 *seqp;
    u8 *seq;

    i = arg0 * 0x184;
    seqp = &D_8006FB38[i];
    if (func_8002C190(seqp) == 0) {
        seq = (u8 *)&D_8006FB38[i] + 0x7C;
        func_8002D320(seq, D_8006FCAC[i]);
        alSeqpSetSeq(seqp, seq);
        alSeqpPlay(seqp);
        return;
    }
    alSeqpStop(seqp);
    D_8006FCB4[i] |= 2;
}

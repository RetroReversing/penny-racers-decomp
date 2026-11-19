typedef struct { u8 player[0x7C]; u8 seq[0xF8]; s32 data; s32 pad178; s32 flags; s32 pad180; } SeqState;
extern SeqState D_8006FB38[];
void alSeqpPlay(void *);
void alSeqpSetSeq(void *,void *);
s32 func_8002C190(void *);
void alSeqpStop(void *);
void func_8002D320(void *, s32);
void func_80027D00(s32 arg0) {
    if (func_8002C190(D_8006FB38[arg0].player) == 0) {
        func_8002D320(D_8006FB38[arg0].seq, D_8006FB38[arg0].data);
        alSeqpSetSeq(D_8006FB38[arg0].player,D_8006FB38[arg0].seq);
        alSeqpPlay(D_8006FB38[arg0].player);
    } else {
        alSeqpStop(D_8006FB38[arg0].player);
        D_8006FB38[arg0].flags |= 2;
    }
}

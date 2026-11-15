void alUnlink(void *);
void alLink(void *, void *);

typedef struct Node {
    struct Node *next;
    s32 pad4;
    s32 delta;
    s16 type;
    s16 pad_e;
    s32 note;
} Node;

s32 __voiceNeedsNoteKill(u8 *arg0, s32 arg1, s32 arg2) {
    Node *s0;
    Node *next;
    s32 acc;
    s32 s2;
    s32 delta;

    s0 = *(Node **)(arg0 + 0x50);
    acc = 0;
    s2 = 1;
    while (s0 != NULL) {
        delta = s0->delta;
        next = s0->next;
        acc += delta;
        if (s0->type == 5 && s0->note == arg1) {
            if (arg2 >= acc) {
                s2 = 0;
                break;
            }
            if (next != NULL) {
                next->delta += delta;
            }
            alUnlink(s0);
            alLink(s0, arg0 + 0x48);
            return 1;
        }
        s0 = next;
    }
    return s2;
}

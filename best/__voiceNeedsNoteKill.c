typedef struct Voice Voice;
struct Voice {
    Voice *next;      /* 0x00 */
    u8 pad04[4];
    s32 field08;      /* 0x08 */
    s16 field0C;      /* 0x0C */
    s16 pad0E;
    s32 field10;      /* 0x10 */
};

void alUnlink(Voice *node);
void alLink(Voice *node, Voice **list);

s32 __voiceNeedsNoteKill(void *arg0, s32 arg1, s32 arg2) {
    Voice *v = *(Voice **)((u8 *)arg0 + 0x50);
    s32 total = 0;
    s32 ret = 1;
    s32 d;

    while (v != NULL) {
        Voice *next;

        next = v->next;
        d = v->field08;
        total += d;
        if (v->field0C == 5 && v->field10 == arg1) {
            if (arg2 < total) {
                if (next != NULL) {
                    next->field08 += d;
                }
                alUnlink(v);
                alLink(v, (Voice **)((u8 *)arg0 + 0x48));
                return ret;
            }
            ret = 0;
            break;
        }
        v = next;
    }
    return ret;
}

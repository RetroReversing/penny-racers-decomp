typedef struct Node { struct Node *next; } Node;

void __unmapVoice(u8 *arg0, s32 arg1) {
    Node *a2;
    Node *v1;
    u8 *v0;

    v1 = *(Node **)(arg0 + 0x64);
    a2 = NULL;
    if (v1 != NULL) {
        v0 = (u8 *)v1 + 4;
        while ((s32)v0 != arg1) {
            a2 = v1;
            v1 = v1->next;
            if (v1 == NULL) {
                goto done;
            }
            v0 = (u8 *)v1 + 4;
        }
        if (a2 != NULL) {
            a2->next = v1->next;
        } else {
            *(Node **)(arg0 + 0x64) = v1->next;
        }
        if (v1 == *(Node **)(arg0 + 0x68)) {
            *(Node **)(arg0 + 0x68) = a2;
        }
        v1->next = *(Node **)(arg0 + 0x6C);
        *(Node **)(arg0 + 0x6C) = v1;
    }
done:
    return;
}

typedef struct Node {
    struct Node *next;
    s32 id;
} Node;

extern Node D_80092BF8;
s32 func_800339C0(s32);

void func_80029690(Node *arg0, s32 arg1) {
    Node *s0;
    Node *v1;

    v1 = &D_80092BF8;
    if (v1 != NULL) {
        do {
            s0 = v1;
            if (s0->id == arg1) {
                return;
            }
            v1 = s0->next;
        } while (v1 != NULL);
    }
    {
        s32 temp = func_800339C0(1);
        arg0->id = arg1;
        arg0->next = s0->next;
        s0->next = arg0;
        func_800339C0(temp);
    }
}

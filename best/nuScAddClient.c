typedef struct { void *next; s32 field_4; s16 field_8; } Node;
extern void *D_800DDE88;
s32 func_800339C0();

void nuScAddClient(void *arg0, s32 arg1, s16 arg2) {
    Node *node;
    void **head;
    s32 temp_v0;

    node = arg0;
    head = &D_800DDE88;
    temp_v0 = func_800339C0(1);
    node->field_4 = arg1;
    node->field_8 = arg2;
    node->next = *head;
    *head = node;
    func_800339C0(temp_v0, head);
}

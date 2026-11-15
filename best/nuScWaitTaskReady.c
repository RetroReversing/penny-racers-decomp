typedef struct WaitNode {
    struct WaitNode *next;
    void *queue;
    s16 flag;
} WaitNode;

s32 func_800339C0(s32);
s32 func_80039AD0(void);
s32 func_80039B10(void);
s32 osRecvMesg(void *mq, void *msg, s32 flags);
extern u8 D_800DD93C[];
extern WaitNode *D_800DDE88;

void nuScWaitTaskReady(u8 *arg0)
{
    WaitNode node;
    WaitNode *cur;
    WaitNode *prev;
    s32 target;
    s32 saved;
    s32 saved2;

    target = *(s32 *)(arg0 + 0xC);
    saved = func_800339C0(1);
    cur = D_800DDE88;
    node.queue = D_800DD93C;
    node.flag = 1;
    D_800DDE88 = &node;
    node.next = cur;
    func_800339C0(saved);
loop_1:
    if (func_80039AD0() == target) goto block_3;
    prev = NULL;
    if (func_80039B10() == target) goto block_3;
    goto after;
block_3:
    osRecvMesg(D_800DD93C, 0, 1);
    goto loop_1;
after:
    cur = D_800DDE88;
    saved2 = func_800339C0(1);
    if (cur != NULL) {
loop_5:
        if (cur == &node) {
            if (prev != NULL) {
                prev->next = cur->next;
            } else {
                D_800DDE88 = cur->next;
            }
            goto done;
        }
        prev = cur;
        cur = cur->next;
        if (cur != NULL) goto loop_5;
    }
done:
    func_800339C0(saved2);
}

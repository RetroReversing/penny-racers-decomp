#include "common_local_source_339302416574.h"

typedef struct WaitNode {
    struct WaitNode *next;
    void *mq;
    s16 flag;
} WaitNode;

extern s32 func_800339C0(s32);
extern s32 func_80039AD0(void);
extern s32 func_80039B10(void);
extern s32 osRecvMesg(void *, void *, s32);
extern u8 D_800DD93C[];
extern WaitNode *D_800DDE88;

void nuScWaitTaskReady(void *arg0) {
    WaitNode node;
    WaitNode *self;
    WaitNode *prev;
    WaitNode *cur;
    s32 want;
    s32 irq;

    want = *(s32 *)((u8 *)arg0 + 0xC);
    irq = func_800339C0(1);
    node.next = D_800DDE88;
    node.mq = D_800DD93C;
    node.flag = 1;
    D_800DDE88 = &node;
    func_800339C0(irq);

    while (func_80039AD0() == want || func_80039B10() == want) {
        osRecvMesg(D_800DD93C, NULL, 1);
    }

    prev = NULL;
    cur = D_800DDE88;
    self = &node;
    irq = func_800339C0(1);
    while (cur != NULL) {
        if (cur == self) {
            if (prev != NULL) {
                prev->next = cur->next;
            } else {
                D_800DDE88 = cur->next;
            }
            break;
        }
        prev = cur;
        cur = cur->next;
    }
    func_800339C0(irq);
}

/* Partial candidate from function #3008 in project #2; rechecked locally. */
typedef struct Item {
    struct Item *next;
    s32 pad4;
    s32 val;
} Item;

typedef struct {
    u8 pad0[8];
    Item **list;
} Arg0_t;

typedef struct {
    u8 pad0[8];
    s32 val;
} Arg1_t;

void alLink(Arg1_t *);
s32 func_800339C0(s32);

void func_8002BF4C(Arg0_t *arg0, Arg1_t *arg1) {
    Item **link;
    Item *item;
    s32 state;
    s32 a;
    s32 b;

    state = func_800339C0(1);
    link = arg0->list;
    if (link != NULL) {
        do {
            item = *link;
            if (item == NULL) {
                alLink(arg1);
                break;
            }
            a = arg1->val;
            b = item->val;
            if (a < b) {
                item->val = b - a;
                alLink(arg1);
                break;
            }
            arg1->val = a - b;
            link = (Item **)item;
        } while (*link != NULL);
    }
    func_800339C0(state);
}

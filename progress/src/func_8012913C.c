typedef struct { s16 pad00[0x20]; s16 minX; s16 pad42; s16 minZ; s16 pad46[5]; s16 maxX; s16 pad52; s16 maxZ; } PrBox;
typedef struct { s32 pad0; PrBox *box; } PrNodeB;
typedef struct { s32 pad0; PrNodeB *b; } PrNodeA;
typedef struct { s32 pad0; PrNodeA *a; u8 pad8[2]; u16 next; u8 padC[2]; u16 prev; } PrNode;
typedef struct { PrNode *node; u8 pad4[96]; } PrNodeSlot;
typedef struct { f32 v; u8 pad4[96]; } PrFloatSlot;
extern PrNodeSlot sNodeTable[];
extern PrFloatSlot D_8011F308[];
extern PrFloatSlot sPrimColorB[];
extern u8 D_8012AA38[];
void debugPrintf();

s32 func_8012913C(u16 arg0, f32 x, f32 y, f32 z)
{
    u16 start;
    u16 flag;
    PrBox *box;

    start = arg0;
    flag = 0;
    for (;;) {
        box = sNodeTable[arg0].node->a->b->box;
        if (x < box->minX + D_8011F308[arg0].v && box->maxX + D_8011F308[arg0].v < x &&
            z < box->minZ + sPrimColorB[arg0].v && box->maxZ + sPrimColorB[arg0].v < z) {
            goto done;
        }
        if (flag == 0) {
            if (sNodeTable[arg0].node->next != 0xFFFF) {
                arg0 = sNodeTable[arg0].node->next;
            } else {
                arg0 = sNodeTable[arg0].node->prev;
                flag = 1;
            }
        } else {
            if (sNodeTable[arg0].node->prev != 0xFFFF) {
                arg0 = sNodeTable[arg0].node->prev;
            } else {
                arg0 = sNodeTable[arg0].node->next;
                flag = 0;
            }
        }
        if (arg0 == start) {
            arg0 = start;
            debugPrintf(D_8012AA38);
            break;
        }
    }
done:
    return arg0;
}

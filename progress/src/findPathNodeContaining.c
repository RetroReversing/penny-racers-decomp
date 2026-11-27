typedef struct { s16 pad00[0x20]; s16 minX; s16 pad42; s16 minZ; s16 pad46[5]; s16 maxX; s16 pad52; s16 maxZ; } PrBox;
typedef struct { s32 pad0; PrBox *box; } PrNodeB;
typedef struct { s32 pad0; PrNodeB *b; } PrNodeA;
typedef struct { s32 pad0; PrNodeA *a; u8 pad8[2]; u16 next; u8 padC[2]; u16 prev; } PrNode;
typedef struct { PrNode *node; u8 pad4[96]; } PrNodeSlot;
typedef struct { f32 v; u8 pad4[96]; } PrFloatSlot;
extern PrNodeSlot sPathNodes[];
extern PrFloatSlot D_8011F308[];
extern PrFloatSlot sPathOffsetZ[];
extern u8 D_8012AA38[];
void debugPrintf();

/* Walks the linked ring of path nodes outward from startNode, alternating directions,
   and returns the first node whose box contains (x, z); reports and returns startNode if none. */
s32 findPathNodeContaining(u16 startNode, f32 x, f32 y, f32 z)
{
    u16 start;
    u16 reverse;
    PrBox *box;

    start = startNode;
    reverse = 0;
    for (;;) {
        box = sPathNodes[startNode].node->a->b->box;
        if (x < box->minX + D_8011F308[startNode].v && box->maxX + D_8011F308[startNode].v < x &&
            z < box->minZ + sPathOffsetZ[startNode].v && box->maxZ + sPathOffsetZ[startNode].v < z) {
            goto done;
        }
        if (reverse == 0) {
            if (sPathNodes[startNode].node->next != 0xFFFF) {
                startNode = sPathNodes[startNode].node->next;
            } else {
                startNode = sPathNodes[startNode].node->prev;
                reverse = 1;
            }
        } else {
            if (sPathNodes[startNode].node->prev != 0xFFFF) {
                startNode = sPathNodes[startNode].node->prev;
            } else {
                startNode = sPathNodes[startNode].node->next;
                reverse = 0;
            }
        }
        if (startNode == start) {
            startNode = start;
            debugPrintf(D_8012AA38);
            break;
        }
    }
done:
    return startNode;
}

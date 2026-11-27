typedef struct { u8 pad0[0xC]; u8 alpha; u8 pad1[0x31]; u16 kind; u16 state; u8 pad2[0x22]; } R;
typedef struct { u32 w0; u32 w1; } Cmd;
extern R D_8011F2F0[];
extern u8 D_801C6B31;
extern u16 hudSlotIndex;
extern u8 hudVisible;
extern u8 blockDirection;
extern u8 D_801C7AB8;

#define SETCOLOR(op, color) { Cmd *c = (*gdl)++; c->w0 = (op); c->w1 = (color); }

/* Emits the cursor's colour display-list command, chosen from the HUD slot kind and block direction. */
void emitCursorColour(Cmd **gdl, u16 objIndex)
{
    switch (D_8011F2F0[objIndex].state) {
    case 0:
        D_8011F2F0[objIndex].state = 1;
        break;
    case 1:
        if (D_8011F2F0[hudSlotIndex].kind == 7 || D_8011F2F0[hudSlotIndex].kind == 8 || D_8011F2F0[hudSlotIndex].kind == 6) {
            if (blockDirection == 4) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else if (blockDirection == 1) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else if (D_801C6B31 == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        } else if (D_8011F2F0[hudSlotIndex].kind == 9 || D_8011F2F0[hudSlotIndex].kind == 10 || D_8011F2F0[hudSlotIndex].kind == 0xD) {
            SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
        } else if (D_8011F2F0[hudSlotIndex].kind == 0xF || D_8011F2F0[hudSlotIndex].kind == 0x10) {
            if (hudVisible == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else if (hudVisible == 1) {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        } else {
            if (D_801C7AB8 == 4) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else if (D_801C7AB8 == 1) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else if (D_801C6B31 == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[objIndex].alpha | 0xFF00);
            } else {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        }
        SETCOLOR(0xF9000000, 1);
        break;
    }
}

typedef struct { u8 pad0[0xC]; u8 alpha; u8 pad1[0x31]; u16 kind; u16 state; u8 pad2[0x22]; } R;
typedef struct { u32 w0; u32 w1; } Cmd;
extern R D_8011F2F0[];
extern u8 D_801C6B33;
extern u16 hudSlotIndex;
extern u8 hudVisible;
extern u8 blockFootprint;
extern u8 D_801C7AB8;

#define SETCOLOR(op, color) { Cmd *c = (*gdl)++; c->w0 = (op); c->w1 = (color); }

void func_80199864(Cmd **gdl, u16 idx)
{
    switch (D_8011F2F0[idx].state) {
    case 0:
        D_8011F2F0[idx].state = 1;
        break;
    case 1:
        if (D_8011F2F0[hudSlotIndex].kind == 7 || D_8011F2F0[hudSlotIndex].kind == 8 || D_8011F2F0[hudSlotIndex].kind == 6) {
            if (blockFootprint == 4) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (blockFootprint == 3) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C6B33 == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        } else if (D_8011F2F0[hudSlotIndex].kind == 9 || D_8011F2F0[hudSlotIndex].kind == 10 || D_8011F2F0[hudSlotIndex].kind == 0xD) {
            SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
        } else if (D_8011F2F0[hudSlotIndex].kind == 0xF || D_8011F2F0[hudSlotIndex].kind == 0x10) {
            if (hudVisible == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (hudVisible == 1) {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        } else {
            if (D_801C7AB8 == 4) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C7AB8 == 3) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C6B33 == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        }
        SETCOLOR(0xF9000000, 1);
        break;
    }
}

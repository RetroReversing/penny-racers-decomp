/* adapted from similar verified C in func_80199864 (matched), with its names changed by decompdecomp */
typedef struct { u8 pad0[0xC]; u8 alpha; u8 pad1[0x31]; u16 kind; u16 state; u8 pad2[0x22]; } R;
typedef struct { u32 w0; u32 w1; } Cmd;
extern R D_8011F2F0[];
extern u8 D_801C6B32;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;

#define SETCOLOR(op, color) { Cmd *c = (*gdl)++; c->w0 = (op); c->w1 = (color); }

void func_8019961C(Cmd **gdl, u16 idx)
{
    switch (D_8011F2F0[idx].state) {
    case 0:
        D_8011F2F0[idx].state = 1;
        break;
    case 1:
        if (D_8011F2F0[D_801C7074].kind == 7 || D_8011F2F0[D_801C7074].kind == 8 || D_8011F2F0[D_801C7074].kind == 6) {
            if (D_801C7469 == 4) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C7469 == 2) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C6B32 == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        } else if (D_8011F2F0[D_801C7074].kind == 9 || D_8011F2F0[D_801C7074].kind == 10 || D_8011F2F0[D_801C7074].kind == 0xD) {
            SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
        } else if (D_8011F2F0[D_801C7074].kind == 0xF || D_8011F2F0[D_801C7074].kind == 0x10) {
            if (D_801C707B == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C707B == 1) {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        } else {
            if (D_801C7AB8 == 4) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C7AB8 == 2) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else if (D_801C6B32 == 0) {
                SETCOLOR(0xFA000000, D_8011F2F0[idx].alpha | 0xFF00);
            } else {
                SETCOLOR(0xFA000000, 0x96969664);
            }
        }
        SETCOLOR(0xF9000000, 1);
        break;
    }
}

typedef struct { u32 w0; u32 w1; } Cmd;
typedef struct { s16 mode; u8 pad[0x26]; } Rec;
typedef struct { u8 pad[0x2108]; Rec rec[1]; } Table;
extern Table sRowBoard;
extern u8 D_8011F2E8;
extern u8 viewIndex;
extern u8 noticeBackgroundDl[];
extern u8 D_80220EF0[];
extern u8 D_80220F08[];
extern u8 D_80220F20[];
extern u8 D_80220F38[];
extern u8 D_80220F50[];
extern u8 D_80220F68[];
#define PIPESYNC(p) { Cmd *_g = (Cmd *)((p)++); _g->w0 = 0xE7000000; _g->w1 = 0; }
#define DL(p, dl) { Cmd *_g = (Cmd *)((p)++); _g->w0 = 0x06000000; _g->w1 = (u32)(dl); }
void func_8021FAA4(Cmd **gfx)
{
    PIPESYNC(*gfx);
    switch (sRowBoard.rec[viewIndex].mode) {
    case 2:
        if (D_8011F2E8 == 0) {
            DL(*gfx, D_80220F50);
        } else {
            DL(*gfx, D_80220F68);
        }
        break;
    case 3:
        if (D_8011F2E8 == 0) {
            DL(*gfx, D_80220EF0);
        } else if (D_8011F2E8 == 1) {
            DL(*gfx, D_80220F08);
        } else {
            DL(*gfx, D_80220F20);
        }
        break;
    case 4:
        if (D_8011F2E8 == 0) {
            DL(*gfx, D_80220EF0);
        } else if (D_8011F2E8 == 1) {
            DL(*gfx, D_80220F08);
        } else if (D_8011F2E8 == 2) {
            DL(*gfx, D_80220F20);
        } else {
            DL(*gfx, D_80220F38);
        }
        break;
    case 1:
    default:
        DL(*gfx, noticeBackgroundDl);
        break;
    }
}

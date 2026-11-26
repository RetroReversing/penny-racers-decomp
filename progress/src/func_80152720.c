typedef struct {
    u8 alpha;
    u8 pad1[0x31];
    u16 timer;
    u16 rising;
    u8 pad2[0x64 - 0x36];
} BlinkRec;
extern BlinkRec D_8011F2FC[];
extern s16 D_802B22D4;
void func_80152720(u16 arg0) {
    D_8011F2FC[arg0].timer++;
    if (D_8011F2FC[arg0].timer >= 0x15) {
        D_8011F2FC[arg0].timer = 0;
    }
    if (D_8011F2FC[arg0].rising == 0) {
        if (D_8011F2FC[arg0].alpha >= 0x33) {
            D_8011F2FC[arg0].alpha -= 0xA;
        } else {
            D_8011F2FC[arg0].rising = 1;
        }
    } else {
        if (D_8011F2FC[arg0].alpha < 0xFF) {
            D_8011F2FC[arg0].alpha += 0xA;
        } else {
            D_8011F2FC[arg0].rising = 0;
        }
    }
    D_802B22D4 = ((D_8011F2FC[arg0].alpha << 8) & 0xF800) | 1;
}

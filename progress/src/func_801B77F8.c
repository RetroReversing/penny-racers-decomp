typedef struct {
    u8 *p;
    u8 pad[96];
} Slot;

extern Slot D_8011F350[];
extern u16 D_8018BC3C;

void func_801B77F8(void) {
    D_8011F350[D_8018BC3C].p[0] = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 2) = 5;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 4) = 0;
    D_8011F350[D_8018BC3C].p[6] = 0;
    D_8011F350[D_8018BC3C].p[7] = 0;
    D_8011F350[D_8018BC3C].p[8] = 0;
    D_8011F350[D_8018BC3C].p[9] = 0x99;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xA) = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xC) = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xE) = 0x140;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0x10) = 0xF0;
}

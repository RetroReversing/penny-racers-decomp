#define REC(i) (*(u8 **)(D_8011F350 + (i) * 0x64))
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
inline static u16 inline_fn()
{
  return D_8018BC3C;
}

void func_80203F58(void)
{
  *((s8 *) (REC(inline_fn()) + 0)) = 0;
  *((s16 *) (REC(inline_fn()) + 2)) = 0;
 do { *((s16 *) (REC(inline_fn()) + 4)) = 0; *((s8 *) (REC(inline_fn()) + 6)) = 0; *((s8 *) (REC(inline_fn()) + 7)) = 0; *((s8 *) (REC(inline_fn()) + 8)) = 0; *((s8 *) (REC(inline_fn()) + 9)) = 0xFF; *((s16 *) (REC(inline_fn()) + 0xA)) = 0x10; *((s16 *) (REC(D_8018BC3C) + 0xC)) = 0x4C; *((s16 *) (REC(D_8018BC3C) + 0xE)) = 0x64; *((s16 *) (REC(D_8018BC3C) + 0x10)) = 0x64; } while (0);
}

s32 func_800DE41C(s32, u8, s32, s32, s32, s32, void *, s32, s32 *, s32, s32, s32, s32, f32, s32, f32, f32, f32);
s32 func_8012AD20(u16, void *, u8, u8);
extern s32 D_800DA260;
extern s32 D_800DA26A;
typedef struct
{
    u16 f0;
    u8 pad[98];
} Slot_8011F304;
extern Slot_8011F304 D_8011F304[];
extern s32 D_8011F340;
extern u8 D_8018F5D0[];
extern unsigned char D_8021F0A0;
extern char D_80237DC0;
extern s32 func_8020FED8;

s32 func_80149B38(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_s0;
    u8 temp_s3;
    s32 temp_s1;
    void *dst;

    temp_s0 = arg1 * 0x178;
    temp_s3 = *((u8 *) &D_800DA260 + 1 + temp_s0);
    temp_s1 = 0xFFFF & func_800DE41C(0, temp_s3, 1, 0, 0x5C, 0xFF, (void *) ((arg0 * 0x1A0) + D_8018F5D0), 0, &func_8020FED8, arg2, arg3, 0, 0, -10.0f, 0, 0.02f, 0.02f, 0.02f);
    *((void **) (((char *) (*(s32 *) ((char *) &D_8011F340 + D_8011F304[temp_s1].f0 * 0x64))) + 4)) = (void *) ((temp_s3 * 0xC) + (&D_80237DC0));
    dst = (void *) ((arg0 << 5) + (&D_8021F0A0));
    temp_s0 += (s32) ((char *) &D_800DA26A + 0x160);
    func_8012AD20(D_8011F304[temp_s1].f0, dst, temp_s3, *((u8 *) (temp_s0 + temp_s3)));
    return temp_s1;
}

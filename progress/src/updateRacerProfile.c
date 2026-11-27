typedef struct { f32 x, y; } Pair;
typedef struct {
  u8 pad0[0x14];
  f32 f14, f18, f1C, f20;
  u8 f24;
  u8 pad25[3];
  Pair p[42];
} Rec;
extern Rec sCarSlots[];
extern u8 D_80168D00[];
extern u8 D_80168D10[];
extern char D_80183668[], D_80183678[], D_80183688[], D_80183698[], D_801836A8[], D_801836B8[], D_801836C8[], D_801836D8[], D_801836E8[];
typedef struct { u8 a, b, c, d, e; } St;
extern St racerProfile;
extern u8 D_80189B35;
void debugPrintf(char *, ...);
s32 nextRandom(void);

/* Picks a random personality profile for a CPU racer from the profile tables and prints its stats for debugging. */
void updateRacerProfile(s32 slotIndex)
{
  Rec *slot;

  slot = &sCarSlots[slotIndex];
  racerProfile.e = 0;
  if (slot->p[slotIndex].x <= 3.0f)
    racerProfile.c = 2;
  if (slot->p[slotIndex].x >= 0.4f && slot->p[slotIndex].x <= 0.6f)
    racerProfile.c = 1;
  if (slot->p[slotIndex].x >= 0.7f)
    racerProfile.c = 0;
  racerProfile.a = D_80168D00[nextRandom() & 0xF];
  if (slot->f1C <= 0.9f)
    racerProfile.a = 9;
  racerProfile.b = D_80168D10[nextRandom() & 0xF];
  if (slot->f1C >= 0.9f && D_80189B35 == 0)
    racerProfile.b = 9;
  debugPrintf(D_80183668, slot->f14);
  debugPrintf(D_80183678, slot->f18);
  debugPrintf(D_80183688, slot->f1C);
  debugPrintf(D_80183698, slot->f20);
  debugPrintf(D_801836A8, slot->f24);
  debugPrintf(D_801836B8, slot->p[slotIndex].x);
  debugPrintf(D_801836C8, slot->p[slotIndex].y);
  debugPrintf(D_801836D8, racerProfile.a);
  debugPrintf(D_801836E8, racerProfile.b);
}

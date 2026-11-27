typedef struct { u16 pad0[4]; u16 unk8; u16 unkA; u16 unkC; u16 unkE; } N88;
typedef struct { u16 pad0[2]; u16 unk4; u16 unk6; } A88;
typedef struct { u16 f[50]; } F88;
typedef struct { N88 *p; u8 pad[96]; } P88;
extern F88 sNodeFlags[];
extern P88 sPathNodes[];
typedef struct { u8 pad0[2]; u8 unk2; } G88;
extern u16 D_80233EC0;
extern G88 *trackInfo;

/* Marks the whole track loop with flag 0x8 for one slot, then clears it on the racer's window of nodes ahead and behind. */ void racerUpdateTrackWindow(A88 *racer, u16 steps, u8 slot)
{
  u16 node;
  u16 reversed;
  u16 count;

  node = racer->unk4;
  reversed = racer->unk6;
  do
  {
    sNodeFlags[node].f[slot] |= 8;
    if (reversed == 0)
    {
      if (sPathNodes[node].p->unkA != 0xFFFF)
      {
        node = sPathNodes[node].p->unkA;
      }
      else
      {
        node = sPathNodes[node].p->unkE;
        reversed = 1;
      }
    }
    else
    {
      if (sPathNodes[node].p->unkE != 0xFFFF)
      {
        node = sPathNodes[node].p->unkE;
      }
      else
      {
        node = sPathNodes[node].p->unkA;
        reversed = 0;
      }
    }
  }
  while (racer->unk4 != node);

  node = racer->unk4;
  reversed = racer->unk6;
  count = 0;
  do
  {
    sNodeFlags[node].f[slot] &= 0xFFF7;
    if (node == D_80233EC0 + trackInfo->unk2 - 1)
    {
      break;
    }
    if (reversed == 0)
    {
      if (sPathNodes[node].p->unkA != 0xFFFF)
      {
        node = sPathNodes[node].p->unkA;
      }
      else
      {
        node = sPathNodes[node].p->unkE;
        reversed = 1;
      }
    }
    else
    {
      if (sPathNodes[node].p->unkE != 0xFFFF)
      {
        node = sPathNodes[node].p->unkE;
      }
      else
      {
        node = sPathNodes[node].p->unkA;
        reversed = 0;
      }
    }
    count++;
  }
  while (count < steps);

  node = racer->unk4;
  reversed = racer->unk6;
  count = 0;
  do
  {
    sNodeFlags[node].f[slot] &= 0xFFF7;
    if (node == D_80233EC0)
    {
      break;
    }
    if (reversed == 0)
    {
      if (sPathNodes[node].p->unk8 != 0xFFFF)
      {
        node = sPathNodes[node].p->unk8;
      }
      else
      {
        node = sPathNodes[node].p->unkC;
        reversed = 1;
      }
    }
    else
    {
      if (sPathNodes[node].p->unkC != 0xFFFF)
      {
        node = sPathNodes[node].p->unkC;
      }
      else
      {
        node = sPathNodes[node].p->unk8;
        reversed = 0;
      }
    }
    count++;
  }
  while (count < steps);
}

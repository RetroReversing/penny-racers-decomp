typedef struct { u16 pad0[4]; u16 nextC; u16 nextA; u16 nextD; u16 nextB; } RouteLinks;
typedef struct { u16 pad0[2]; u16 startNode; u16 lane; } RouteCursor;
typedef struct { u16 slot[50]; } NodeFlags;
typedef struct { RouteLinks *links; u8 pad[96]; } NodeEntry;
extern NodeFlags sNodeFlags[];
extern NodeEntry sPathNodes[];

/* Sets bit 0x8 on every node of the loop through the cursor's start node, then clears it again
   on the next `steps` nodes along each of the two lanes. */
void updateRouteFlags(RouteCursor *cursor, u16 steps, u8 flagSlot)
{
  u16 node;
  u16 lane;
  u16 count;

  node = cursor->startNode;
  lane = cursor->lane;
  do
  {
    sNodeFlags[node].slot[flagSlot] |= 8;
    if (lane == 0)
    {
      if (sPathNodes[node].links->nextA != 0xFFFF)
      {
        node = sPathNodes[node].links->nextA;
      }
      else
      {
        node = sPathNodes[node].links->nextB;
        lane = 1;
      }
    }
    else
    {
      if (sPathNodes[node].links->nextB != 0xFFFF)
      {
        node = sPathNodes[node].links->nextB;
      }
      else
      {
        node = sPathNodes[node].links->nextA;
        lane = 0;
      }
    }
  }
  while (cursor->startNode != node);

  node = cursor->startNode;
  lane = cursor->lane;
  count = 0;
  do
  {
    sNodeFlags[node].slot[flagSlot] &= 0xFFF7;
    if (lane == 0)
    {
      if (sPathNodes[node].links->nextA != 0xFFFF)
      {
        node = sPathNodes[node].links->nextA;
      }
      else
      {
        node = sPathNodes[node].links->nextB;
        lane = 1;
      }
    }
    else
    {
      if (sPathNodes[node].links->nextB != 0xFFFF)
      {
        node = sPathNodes[node].links->nextB;
      }
      else
      {
        node = sPathNodes[node].links->nextA;
        lane = 0;
      }
    }
    count++;
  }
  while (count < steps);

  node = cursor->startNode;
  lane = cursor->lane;
  count = 0;
  do
  {
    sNodeFlags[node].slot[flagSlot] &= 0xFFF7;
    if (lane == 0)
    {
      if (sPathNodes[node].links->nextC != 0xFFFF)
      {
        node = sPathNodes[node].links->nextC;
      }
      else
      {
        node = sPathNodes[node].links->nextD;
        lane = 1;
      }
    }
    else
    {
      if (sPathNodes[node].links->nextD != 0xFFFF)
      {
        node = sPathNodes[node].links->nextD;
      }
      else
      {
        node = sPathNodes[node].links->nextC;
        lane = 0;
      }
    }
    count++;
  }
  while (count < steps);
}

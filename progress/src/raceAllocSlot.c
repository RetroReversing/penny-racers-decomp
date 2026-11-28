typedef struct
{
  u16 prev;
  u16 next;
  u8 pad[120];
} Node;
extern u16 nodeListCount;
extern u16 nodeListTail;
extern Node nodePool[];
extern u16 nodeListHead;

u16 raceAllocSlot(void)
{
  u16 cur;
  u16 a1;
  u16 ret;
  if (nodeListCount == 0)
  {
    cur = nodeListHead;
    if (nodePool[cur].next != 0xFFFF)
    {
      do
      {
        cur = nodePool[cur].next;
      }
      while (nodePool[cur].next != 0xFFFF);
    }
    return 0xFFFF;
  }
  a1 = nodeListHead;
  nodeListHead = nodePool[nodeListHead].next;
  nodePool[a1].next = 0xFFFF;
  if (nodeListHead != 0xFFFF)
  {
    nodePool[nodeListHead].prev = 0xFFFF;
  }
  nodeListCount -= 1;
  if (nodeListCount == 0)
  {
    nodeListTail = 0xFFFF;
  }
  ret = a1;
  return ret;
}

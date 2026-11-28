typedef struct { u16 prev; u16 next; u8 pad[120]; } Node;
extern u16 nodeListCount;
extern u16 nodeListTail;
extern Node nodePool[];
extern u16 nodeListHead;

s32 func_8013E49C(u16 arg0)
{
  s32 count;

  count = 1;
  if (nodeListTail == 0xFFFF)
  {
    nodeListHead = arg0;
    while (nodePool[arg0].next != 0xFFFF)
      {
        arg0 = nodePool[arg0].next;
            count++;
      }
    nodeListTail = arg0;
    nodeListCount = count;
  }
  else
  {
    while (nodePool[arg0].next != 0xFFFF)
      {
        nodePool[nodeListTail].next = arg0;
        nodePool[arg0].prev = nodeListTail;
        nodeListTail = arg0;
        arg0 = nodePool[arg0].next;
            count++;
      }
    nodePool[nodeListTail].next = arg0;
    nodePool[arg0].prev = nodeListTail;
    nodeListTail = arg0;
    nodeListCount = count + nodeListCount;
  }
}

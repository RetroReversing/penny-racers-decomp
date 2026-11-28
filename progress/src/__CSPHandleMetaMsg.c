typedef struct CSPNode
{
  struct CSPNode *next;
  s32 f4;
  s32 f8;
  s16 fC;
} CSPNode;
void __CSPRepostEvent(void *, void *);
void alLink(void *, void *);
void alUnlink(void *);
void __n_setUsptFromTempo(void *, f32);

/* Handles a sequence meta event: on a set-tempo message (0xFF 0x51) it updates the player's tempo and rescales the ticks of the tempo events before reposting them. */
void __CSPHandleMetaMsg(void *seqp, void *msg)
{
  char *seqpBytes = seqp;
  u8 *msgBytes = msg;
  s32 totalTicks;
  CSPNode *tempoEvents;
  s32 division;
  CSPNode *node;
  CSPNode *nextNode;
  s32 savedTotal;
  s32 delta;
  s32 pad[4];
  totalTicks = 0;
 do { tempoEvents = NULL; } while (0);
  if ((msgBytes[8] == 0xFF) && (msgBytes[9] == 0x51))
  {
    division = *((s32 *) (seqp + 0x24));
    __n_setUsptFromTempo(seqp, (f32) (((msgBytes[0xB] << 16) | (msgBytes[0xC] << 8)) | msgBytes[0xD]));
    node = *((CSPNode **) (seqp + 0x50));
    if (node != NULL)
    {
      do
      {
        nextNode = node->next;
        totalTicks += node->f8;
        if (node->fC == 0x15)
        {
          alUnlink(node);
          if (tempoEvents != NULL)
          {
            alLink(node, tempoEvents);
          }
          else
          {
            tempoEvents = node;
            node->next = NULL;
            node->f4 = 0;
          }
          savedTotal = totalTicks;
          if (nextNode != NULL)
          {
            delta = node->f8;
            totalTicks = savedTotal - delta;
            nextNode->f8 += delta;
          }
          node->f8 = savedTotal;
        }
        node = nextNode;
      }
      while (node != NULL);
    }
    node = tempoEvents;
    if (node != NULL)
    {
      do
      {
        nextNode = node->next;
        node->f8 = (node->f8 / division) * (*((s32 *) (seqp + 0x24)));
        __CSPRepostEvent(seqp + 0x48, node);
        node = nextNode;
      }
      while (node != NULL);
    }
  }
}

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
void __CSPHandleMetaMsg(void *arg0, void *arg1)
{
  char *a = arg0;
  u8 *m = arg1;
  s32 total;
  CSPNode *matched;
  s32 div;
  CSPNode *node;
  CSPNode *next;
  s32 tmp;
  s32 v;
  s32 pad[4];
  total = 0;
 do { matched = NULL; } while (0);
  if ((m[8] == 0xFF) && (m[9] == 0x51))
  {
    div = *((s32 *) (arg0 + 0x24));
    __n_setUsptFromTempo(arg0, (f32) (((m[0xB] << 16) | (m[0xC] << 8)) | m[0xD]));
    node = *((CSPNode **) (arg0 + 0x50));
    if (node != NULL)
    {
      do
      {
        next = node->next;
        total += node->f8;
        if (node->fC == 0x15)
        {
          alUnlink(node);
          if (matched != NULL)
          {
            alLink(node, matched);
          }
          else
          {
            matched = node;
            node->next = NULL;
            node->f4 = 0;
          }
          tmp = total;
          if (next != NULL)
          {
            v = node->f8;
            total = tmp - v;
            next->f8 += v;
          }
          node->f8 = tmp;
        }
        node = next;
      }
      while (node != NULL);
    }
    node = matched;
    if (node != NULL)
    {
      do
      {
        next = node->next;
        node->f8 = (node->f8 / div) * (*((s32 *) (arg0 + 0x24)));
        __CSPRepostEvent(arg0 + 0x48, node);
        node = next;
      }
      while (node != NULL);
    }
  }
}

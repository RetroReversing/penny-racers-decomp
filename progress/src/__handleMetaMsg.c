extern void __setUsptFromTempo(void *arg0, f32 arg1);

void __handleMetaMsg(void *arg0, u8 *arg1)
{
    char pad[0x10];

    if (arg1[8] == 0xFF && arg1[9] == 0x51)
    {
        __setUsptFromTempo(arg0, (f32) ((arg1[0xB] << 16) | (arg1[0xC] << 8) | arg1[0xD]));
    }
}

/* Same-name source lead: osGetTime in V-RALLY-PAL; verified ROM source. Destination verification required. */
s32 osDisableInt(); void osRestoreInt(s32); u32 func_800937B0(); extern u8 D_800AE850[];
u64 osGetTime(void) {
s32 mask; u32 delta; u64 time;
mask=osDisableInt();
delta=func_800937B0()-*(u32 *)(D_800AE850+4);
time=*(u64 *)(D_800AE850+0x7918);
osRestoreInt(mask);
return time+delta;
}

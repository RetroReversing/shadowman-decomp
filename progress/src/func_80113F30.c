/* identical to ai_fifo_full in TWINE (local match library) (matched), with its names changed by decompdecomp */
s32 func_80113F30(void) {
    s32 status = *(volatile s32 *)0xA450000C;
    return (status >> 31) != 0;
}

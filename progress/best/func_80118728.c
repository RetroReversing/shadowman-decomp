/* adapted from similar verified C in print_write_char in V-RALLY-PAL (matched), with its names changed by decompdecomp */
/* Sends one character to the debug output port and returns it. */
extern void memcpy(s32 c);

s32 func_80118728(s32 c) {
    memcpy(c);
    return c;
}

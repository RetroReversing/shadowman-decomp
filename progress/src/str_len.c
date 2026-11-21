/* identical to str_len in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* Returns length of a null‑terminated string */
s32 str_len(u8 *str) {
    u8 *p = str;
    if (*str != 0) {
        do {
            p += 1;
        } while (*p != 0);
    }
    return p - str;
}

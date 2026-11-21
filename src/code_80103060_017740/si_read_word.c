#include "common.h"

/* identical to si_read_word in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in si_read_word in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern char D_00102580[];
extern char D_00102584[];

void func_80116750(char *, char *, s32);
s32 func_801158C0(void);

/* Reads one 32-bit word from a physical address through the uncached segment, once the
 * serial interface is idle. Returns 0 and stores the word in *out, or -1 if the SI is busy.
 * The address must be word aligned and out must not be NULL (checked with the assert calls). */
s32 si_read_word(s32 addr, s32 *out) {
    s32 val;

    if (addr & 3) {
        func_80116750(D_00102580, D_00102584, 0x33);
    }
    if (out == NULL) {
        func_80116750(D_00102580, D_00102584, 0x34);
    }
    if (func_801158C0() != 0) {
        return -1;
    }
    val = *(s32 *)(addr | 0xA0000000);
    *out = val;
    return 0;
}

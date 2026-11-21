#include "common.h"

/* identical to osSpTaskStartGo in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osSpTaskStartGo in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_80115B00(void);
void func_80115C50(u32 value);

/* Starts the RSP: waits until it is no longer halted or busy, then writes 0x125 to SP_STATUS. */
void osSpTaskStartGo(void) {
    do {

    } while (func_80115B00() != 0);
    func_80115C50(0x125);
}

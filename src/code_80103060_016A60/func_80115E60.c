#include "common.h"

/* adapted from similar verified C in func_80039B10 in PENNY RACERS (matched), with its names changed by decompdecomp */
/* identical to func_80039AD0 (matched), with its names changed by decompdecomp */
s32 func_80118330(void);
void func_80118350(s32);
extern s32 *D_80027780;

s32 func_80115E60(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = func_80118330();
    temp_s0 = D_80027780[1];
    func_80118350(temp_v0);
    return temp_s0;
}

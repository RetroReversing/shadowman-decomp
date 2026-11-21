#include "common.h"

/* adapted from similar verified C in func_8002D270 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern char D_8004AD78[];
s32 func_80104114(s32);
extern s32 D_8009693C;

/* Receives the next message for the order task whose pointer is stored at D_8009693C+0x58F4. */
void func_80104130(void)
{
    func_80104114(*(s32 *)((u8 *)&D_8004AD78));
}

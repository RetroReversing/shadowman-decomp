#include "common.h"

/* adapted from similar verified C in alLoadNew in PENNY RACERS (matched), with its names changed by decompdecomp */
/* identical to func_801110E4 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_80112120(void *a0, void *fn2, void *fn3, s32 n4);
s32 func_8010EED0(s32, s32, s32, s32, s32);
extern void *D_00119480;
extern void *D_00119E54;

void func_801110E4(void *arg0, s32 (*arg1)(void *), s32 arg2) {
    func_80112120(arg0, &D_00119480, &D_00119E54, 0);
    *(s32 *)((s8 *)arg0 + 0x14) = func_8010EED0(0, 0, arg2, 1, 0x20);
    *(s32 *)((s8 *)arg0 + 0x18) = func_8010EED0(0, 0, arg2, 1, 0x20);
    *(s32 *)((s8 *)arg0 + 0x30) = arg1((s8 *)arg0 + 0x34);
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 1;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
}

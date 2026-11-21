/* adapted from similar verified C in sp_dma_start in PENNY RACERS (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in func_8009B4F0 in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_80095990 in V-RALLY (matched), with its names changed by decompdecomp */
s32 func_801176C0();
s32 func_800346B0();
s32 func_8003F0A0();
extern char D_00102550[];
extern char D_00102554[];

s32 func_80115B20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 & 7) {
        func_800346B0(D_00102550, D_00102554, 0x3A);
    }
    if (arg2 & 7) {
        func_800346B0(D_00102550, D_00102554, 0x3B);
    }
    if (arg3 & 7) {
        func_800346B0(D_00102550, D_00102554, 0x3C);
    }
    if (func_8003F0A0() != 0) {
        return -1;
    }
    *(vs32 *)0xA4040000 = arg1;
    *(vs32 *)0xA4040004 = func_801176C0(arg2);
    if (arg0 == 0) {
        *(vs32 *)0xA404000C = arg3 - 1;
    } else {
        *(vs32 *)0xA4040008 = arg3 - 1;
    }
    return 0;
}

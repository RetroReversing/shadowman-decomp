/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103B98(void *);                      /* extern */

s32 func_80104DE0(void *arg0) {
    if (!((*(s32 *)((char *)(arg0) + 0xC)) & 2)) {
        (*(s32 *)((char *)(arg0) + 0xC)) = 0;
    } else {
        func_80103B98((*(void **)((char *)(arg0) + 0x1C)));
        func_80103B98((*(void **)((char *)(arg0) + 0x20)));
        func_80103B98(arg0);
        func_80103B98((*(void **)((char *)(arg0) + 0x14)));
        func_80103B98((*(void **)((char *)(arg0) + 0x28)));
    }
    return 0;
}

#include "common.h"

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_802393D4(void *arg0, void **arg1) {
    *(*(void ***)((char *)(arg0) + 4)) = (*(void **)((char *)(arg0) + 0));
    (*(void ***)((char *)((*(void **)((char *)(arg0) + 0))) + 4)) = (void **) (*(void ***)((char *)(arg0) + 4));
    (*(void **)((char *)(arg0) + 0)) = (void *) *arg1;
    (*(void ***)((char *)(arg0) + 4)) = arg1;
    (*(void **)((char *)(*arg1) + 4)) = arg0;
    *arg1 = arg0;
}

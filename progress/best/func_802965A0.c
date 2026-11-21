/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103B98(void *);                      /* extern */
s32 func_80109A1C(s32);                         /* extern */
extern void *D_80036964;

void func_802965A0(void) {
    void **__base_D_80036964;
    __base_D_80036964 = &D_80036964;
    if ((*__base_D_80036964) != NULL) {
        func_80103B98((*__base_D_80036964));
        func_80109A1C((*(s32 *)((char *)((*__base_D_80036964)) + 0x200C)));
        (*__base_D_80036964) = NULL;
    }
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80118570();
extern char D_8004AEB8[];

void func_80105B78(void *arg0, s32 arg1, s32 arg2) {
    unsigned int temp_v0;

    temp_v0 = func_80118570(1);
    (*(s32 *)((char *)(arg0) + 0)) = arg2;
    (*(s32 *)((char *)(arg0) + 4)) = arg1;
    (*(void **)((char *)(arg0) + 8)) = (void *) (*(void **)((char *)(D_8004AEB8) + 0x10));
    (*(s32 *)((char *)(arg0) + 0xC)) = 0;
    if ((*(void **)((char *)(D_8004AEB8) + 0x10)) != NULL) {
        (*(void **)((char *)((*(void **)((char *)(D_8004AEB8) + 0x10))) + 0xC)) = arg0;
    }
    (*(void **)((char *)(D_8004AEB8) + 0x10)) = arg0;
    func_80118570(temp_v0);
}

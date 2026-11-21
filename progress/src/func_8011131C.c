/* adapted from similar verified C in alEnvmixerNew in PENNY RACERS (matched), with its names changed by decompdecomp */
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80112120();
s32 func_8010EED0();
extern s32 D_00111470;
extern s32 D_00111EF8;

void func_8011131C(void *arg0, s32 arg1) {
    func_80112120(arg0, &D_00111470, &D_00111EF8, 4);
    (*(s32 *)((char *)(arg0) + 0x14)) = func_8010EED0(0, 0, arg1, 1, 0x50);
    (*(s32 *)((char *)(arg0) + 0x38)) = 1;
    (*(s32 *)((char *)(arg0) + 0x48)) = 0;
    (*(s16 *)((char *)(arg0) + 26)) = 1;
    (*(s16 *)((char *)(arg0) + 40)) = 1;
    (*(s16 *)((char *)(arg0) + 0x2E)) = 1;
    (*(s16 *)((char *)(arg0) + 0x1C)) = 1;
    (*(s16 *)((char *)(arg0) + 0x1E)) = 1;
    (*(s16 *)((char *)(arg0) + 0x20)) = 0;
    (*(s16 *)((char *)(arg0) + 0x22)) = 0;
    (*(s16 *)((char *)(arg0) + 0x26)) = 1;
    (*(s16 *)((char *)(arg0) + 0x24)) = 0;
    (*(s16 *)((char *)(arg0) + 0x26)) = 1;
    (*(s16 *)((char *)(arg0) + 0x24)) = 0;
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(s32 *)((char *)(arg0) + 0x34)) = 0;
    (*(s16 *)((char *)(arg0) + 0x18)) = 0;
    (*(s32 *)((char *)(arg0) + 0x3C)) = 0;
    (*(s32 *)((char *)(arg0) + 0x40)) = 0;
    (*(s32 *)((char *)(arg0) + 0x44)) = 0;
}

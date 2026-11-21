/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103B98(s32);                         /* extern */
s32 func_802A6448(void *);                      /* extern */
extern s32 D_8007BD44;

void func_802AC484(void *arg0) {
    long temp_a0;

    if (((*(f32 *)((char *)(arg0) + 0x30)) <= 0.0f) && ((*(f32 *)((char *)(arg0) + 0x2C)) >= 0.0f)) {
        temp_a0 = (*(s32 *)((char *)(arg0) + 0xC));
        if (temp_a0 != 0) {
            func_80103B98(temp_a0);
        }
        func_802A6448(arg0);
        D_8007BD44--;
    }
}

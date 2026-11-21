/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007DB8C;
s32 func_80113AD0();
f32 func_8022EBE8();
f32 func_8022EC3C();
void *func_80296BC0();
s32 func_80298048();
extern char D_80036D90[];
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
void func_80297F98(void *arg0, s32 arg1, s32 arg2) {
    f32 sp10[3];
    f32 sp20[3];
    f32 temp_a3;
    f32 temp_fs0;
    f32 temp_fv0_2;
    f32 temp_fv0;
    f32 temp_fs0_2;
    f32 temp_fv0f;
    s32 temp_ret;
    int temp_v1;
    u32 var_s1;
    void *temp_v0;

    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x54)) - D_8007DB8C;
    (*(f32 *)((char *)(arg0) + 0x54)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x54)) = 0.0f;
    }
    if (((*(f32 *)((char *)(arg0) + 0x50)) - *(f32 *)0x215964) < (*(f32 *)((char *)(arg0) + 0x54))) {
        temp_fv0_2 = (*(f32 *)((char *)(arg0) + 0x14));
        temp_fv0f = *(f32 *)0x215968;
        if (temp_fv0f <= temp_fv0_2) {
            temp_v1 = (s32) (temp_fv0_2 - temp_fv0f); temp_v1 = temp_v1 | 0x80000000;
            temp_fs0 = *(f32 *)0x21596C;
            temp_a3 = (*(f32 *)((char *)(arg0) + 0));
            sp20[0] = temp_a3;
            sp20[1] = (*(f32 *)((char *)(arg0) + 4));
            sp20[2] = (*(f32 *)((char *)(arg0) + 8));
            sp20[0] += func_8022EBE8();
            var_s1 = 0;
            sp20[2] += func_8022EBE8();
            sp20[1] += *(f32 *)0x215970;
            if (temp_v1 != 0) {
                temp_fs0_2 = *(f32 *)0x215974;
                do {
                    sp10[0] = func_8022EBE8();
                    sp10[1] = func_8022EC3C() + temp_fs0;
                    sp10[2] = func_8022EBE8();
                    temp_v0 = func_80296BC0(sp20, sp10, D_80036D90);
                    if (temp_v0 != NULL) {
                        (*(f32 *)((char *)(temp_v0) + 0x54)) = temp_fs0_2;
                        (*(f32 *)((char *)(temp_v0) + 0x50)) = temp_fs0_2;
                        (*(f32 *)((char *)(temp_v0) + 0x4C)) = (f32) *(f32 *)0x215978;
                        temp_ret = func_80113AD0();
                        (*(f32 *)((char *)(temp_v0) + 0x24)) = (f32) (temp_ret % 360);
                        (*(f32 *)((char *)(temp_v0) + 0x30)) = func_8022EBE8();
                    }
                    var_s1 += 1;
                } while (var_s1 < temp_v1);
            }
        } else {
            func_80298048();
        }
    }
}

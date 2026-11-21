/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007DB8C;
s32 func_80113AD0();
f32 func_8022EBE8();
f32 func_8022EC3C();
s32 func_80299D50();
s32 func_8029B14C();
s32 func_802A6448();
s32 func_802A6808();
s32 func_802B00F0();
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x50, 0x54, 0x60, 0x64], gap at: 0x44. */
void func_802AFF78(void *arg0) {
    f32 sp18[3];
    f32 sp28[3];
    unsigned int temp_a0;
    f32 temp_fs0f;
    f32 temp_fs1f;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 temp_fs0;
    long temp_ret;
    u32 var_s1;

    func_802A6808();
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x30)) - D_8007DB8C;
    (*(f32 *)((char *)(arg0) + 0x30)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x30)) = 0.0f;
    }
    temp_fs0f = *(f32 *)0x21683C;
    temp_fs1 = *(f32 *)0x216844;
    temp_fs1f = *(f32 *)0x216840;
    var_s1 = 0;
    sp18[2] = 0.0f;
    sp18[0] = 0.0f;
loop_3:
    sp28[0] = (*(f32 *)((char *)(arg0) + 0x54)) + func_8022EBE8();
    sp28[1] = (*(f32 *)((char *)(arg0) + 0x58)) + func_8022EBE8();
    sp28[2] = (*(f32 *)((char *)(arg0) + 0x5C)) + func_8022EBE8();
    temp_ret = func_80113AD0();
    temp_a0 = temp_ret / 10;
    if ((temp_ret % 10) >= 4) {
        sp18[1] = func_8022EC3C() + temp_fs1f;
        func_8029B14C(sp28, sp18, 0x3F666666, 0x41200000, 2);
        func_802B00F0();
        return;
    }
    var_s1 += 1;
    sp18[1] = func_8022EC3C();
    temp_fs0 = func_8022EC3C() + (*(f32 *)0x216844);
    func_80299D50(0x2C, sp28, sp18, temp_fs0, func_8022EC3C() + temp_fs1, 1);
    if (8U <= var_s1) {
        if ((*(f32 *)((char *)(arg0) + 0x30)) <= 0.0f) {
            func_802A6448(arg0);
        }
        return;
    }
    goto loop_3;
}

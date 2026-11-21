/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();
f32 func_8022EBE8(f32);
f32 func_8022EC3C();
s32 func_8023E724();
s32 func_80299D50(s32, s32, s32, f32, s32, s32);
s32 func_8029B14C(s32, s32, s32, f32, s32);
s32 func_802A2204();
s32 func_802A2224();
s32 func_802A22D8();
extern char D_80036B1C[];
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x48, 0x4c], gap at: 0x40. */
void func_802A2098(void *arg0) {
    char *__base_D_8007DB88;
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fs0f;
    f32 *var_v0;
    f32 temp_fs0_2;
    f32 temp_fs0;
    f32 temp_fs0f_2;
    f32 temp_fv0;
    f32 temp_fv0f;
    register s32 temp_a0;
    s32 temp_ret;

    temp_fs0f = *(f32 *)0x215FC8;
    func_8023E724((*(s32 *)((char *)(arg0) + 0x44)), (*(s32 *)((char *)(arg0) + 0x6C)), D_80036B1C, arg0);
    sp28[0] = (*(f32 *)((char *)(arg0) + 0)) + func_8022EBE8(temp_fs0f);
    sp28[1] = (*(f32 *)((char *)(arg0) + 4)) + func_8022EBE8(temp_fs0f);
    temp_fv0f = (*(f32 *)((char *)(arg0) + 8)) + func_8022EBE8(temp_fs0f);
    sp18[2] = 0.0f;
    sp18[0] = 0.0f;
    sp28[2] = temp_fv0f;
    sp18[1] = func_8022EC3C() + *(f32 *)0x215FD0;
    if ((func_80113AD0() % 10) >= 5) {
        func_8029B14C(sp28, sp18, 0x3F666666, temp_fs0f, 2);
        func_802A2224();
        return;
    }
    if ((*(f32 *)((char *)(arg0) + 0xC)) == 0.0f) {
        func_8022EC3C();
        func_8022EC3C();
        func_802A2204();
        return;
    }
    temp_fs0f_2 = *(f32 *)0x215FE4;
    temp_fs0 = func_8022EC3C(*(f32 *)0x215FE0) + (unsigned)temp_fs0f_2;
    func_80299D50(0x2C, sp28, sp18, temp_fs0, func_8022EC3C() + temp_fs0f_2, 1);
    temp_ret = func_80113AD0();
    temp_a0 = temp_ret / 10;
    __base_D_8007DB88 = D_8007DB88;
    var_v0 = (__base_D_8007DB88+4) + 4;
    if ((temp_ret % 10) >= 9) {
        if ((*(f32 *)((char *)(arg0) + 0xC)) == 0.0f) {
            func_8022EC3C();
            func_8022EC3C();
            func_802A22D8();
            return;
        }
        temp_fs0_2 = func_8022EC3C(*(f32 *)0x215FF8) + *(f32 *)0x215FFC;
        func_80299D50(0x2B, sp28, sp18, temp_fs0_2, func_8022EC3C() + *(f32 *)0x216004, 1);
        var_v0 = __base_D_8007DB88 + 4;
        goto block_11;
    }
block_11:
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x54)) - *var_v0;
    (*(f32 *)((char *)(arg0) + 0x54)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x54)) = 0.0f;
    }
}

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
s32 func_80299D50(s32, f32 *, s32 *, f32, f32, s32); /* extern */
void *func_8029B14C(void *, void *, s32, s32, s32); /* extern */
s32 func_802A6448(void *);                      /* extern */
s32 func_802A6508(void *, s32);             /* extern */
s32 func_802A6808();                            /* extern */
extern s32 D_80036B1C;
extern s32 D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x68, 0x6c], gap at: 0x50. */
void func_802AC6AC(void *arg0) {
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    unsigned int var_s0;
    void *temp_v0;
    void *temp_v0_2;

    func_802A6808();
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x30)) - (*(f32 *)((char *)(&D_8007DB88) + 4));
    (*(f32 *)((char *)(arg0) + 0x30)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x30)) = 0.0f;
    }
    temp_v0 = func_8029B14C(arg0 + 0x54, arg0 + 0x6C, 0x3F666666, 0x41700000, 2);
    if (temp_v0 != NULL) {
        temp_fv0_2 = func_8022EC3C(*(f32 *)0x216600) + *(f32 *)0x216604;
        (*(f32 *)((char *)(temp_v0) + 0x4C)) = temp_fv0_2;
        (*(f32 *)((char *)(temp_v0) + 0xC)) = temp_fv0_2;
    }
    temp_v0_2 = (*(void **)((char *)(arg0) + 0xC));
    if (temp_v0_2 != NULL) {
        var_s0 = 0;
        if ((((*(f32 *)((char *)(temp_v0_2) + 0)) * (*(f32 *)((char *)(arg0) + 0x54))) + ((*(f32 *)((char *)(temp_v0_2) + 4)) * (*(f32 *)((char *)(arg0) + 0x58))) + ((*(f32 *)((char *)(temp_v0_2) + 8)) * (*(f32 *)((char *)(arg0) + 0x5C))) + (*(f32 *)((char *)(arg0) + 0x84))) > 0.0f) {
            sp28[0] = (*(f32 *)((char *)(arg0) + 0x54));
            sp28[1] = (*(f32 *)((char *)(arg0) + 0x58));
            sp28[2] = (*(f32 *)((char *)(arg0) + 0x5C));
            sp28[0] -= 2.0f * (*(f32 *)((char *)(arg0) + 0x6C));
            temp_fs0f = *(f32 *)0x216608;
            sp28[1] -= 2.0f * (*(f32 *)((char *)(arg0) + 0x70));
            temp_fs1f = *(f32 *)0x21660C;
            temp_fv1 = *(f32 *)0x216610;
            sp28[2] -= 2.0f * (*(f32 *)((char *)(arg0) + 0x74));
            func_80299D50(0x29, sp28, &D_80036B1C, 8.0f, func_8022EC3C(temp_fv1) + temp_fv1, 1);
            do {
                sp18[0] = sp28[0];
                sp18[1] = sp28[1];
                sp18[2] = sp28[2];
                sp18[0] += func_8022EBE8((int)temp_fs0f);
                sp18[1] += func_8022EBE8(temp_fs0f);
                var_s0 += 1;
                sp18[2] += func_8022EBE8(temp_fs0f);
                temp_fs0 = func_8022EC3C(*(f32 *)0x216614) + temp_fs1f;
                func_80299D50(0x29, sp18, &D_80036B1C, temp_fs0, func_8022EC3C(*(f32 *)0x216618) + temp_fv1, 1);
            } while (var_s0 < 3U);
            if (!((*(u8 *)((char *)(arg0) + 0x50)) & 4)) {
                func_802A6508(arg0, 0x35);
                (*(u8 *)((char *)(arg0) + 0x50)) = (u8) ((*(u8 *)((char *)(arg0) + 0x50)) | 4);
            }
            (*(f32 *)((char *)(arg0) + 0x30)) = 0.0f;
        }
    }
    if ((*(f32 *)((char *)(arg0) + 0x30)) <= 0.0f) {
        func_802A6448(arg0);
    }
}

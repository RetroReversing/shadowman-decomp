/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80113AD0();
f32 func_8022EBE8();
f32 func_8022EC3C();
s32 func_8023E724();
s32 func_80299D50();
s32 func_8029B14C();
s32 func_802A2204();
s32 func_802A2224();
s32 func_802A22D8();
extern char D_80036B1C[];
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x48, 0x4c], gap at: 0x40. */
void func_802A2098(void *arg0) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 *var_v0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 temp_a0;
    s32 temp_ret;

    temp_fs0f = *(f32 *)0x215FC8;
    func_8023E724(M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x6C), D_80036B1C, arg0);
    sp28 = M2C_FIELD(arg0, f32 *, 0) + func_8022EBE8(temp_fs0f);
    sp2C = M2C_FIELD(arg0, f32 *, 4) + func_8022EBE8(temp_fs0f);
    temp_fv0f = M2C_FIELD(arg0, f32 *, 8) + func_8022EBE8(temp_fs0f);
    sp20 = 0.0f;
    sp18 = 0.0f;
    sp30 = temp_fv0f;
    sp1C = func_8022EC3C(*(f32 *)0x215FCC) + *(f32 *)0x215FD0;
    if ((func_80113AD0() % 10) >= 5) {
        func_8029B14C(&sp28, &sp18, 0x3F666666, temp_fs0f, 2);
        func_802A2224();
        return;
    }
    if (M2C_FIELD(arg0, f32 *, 0xC) == 0.0f) {
        func_8022EC3C(*(f32 *)0x215FD4, &sp28);
        func_8022EC3C(*(f32 *)0x215FDC);
        func_802A2204();
        return;
    }
    temp_fs0f_2 = *(f32 *)0x215FE4;
    temp_fs0 = func_8022EC3C(*(f32 *)0x215FE0, &sp28) + temp_fs0f_2;
    func_80299D50(0x2C, &sp28, &sp18, temp_fs0, func_8022EC3C(*(f32 *)0x215FE8) + temp_fs0f_2, 1);
    temp_ret = func_80113AD0();
    temp_a0 = temp_ret / 10;
    var_v0 = D_8007DB88 + 4;
    if ((temp_ret % 10) >= 9) {
        if (M2C_FIELD(arg0, f32 *, 0xC) == 0.0f) {
            func_8022EC3C(*(f32 *)0x215FEC, (f32 *) temp_a0);
            func_8022EC3C(*(f32 *)0x215FF4);
            func_802A22D8();
            return;
        }
        temp_fs0_2 = func_8022EC3C(*(f32 *)0x215FF8, (f32 *) temp_a0) + *(f32 *)0x215FFC;
        func_80299D50(0x2B, &sp28, &sp18, temp_fs0_2, func_8022EC3C(*(f32 *)0x216000) + *(f32 *)0x216004, 1);
        var_v0 = D_8007DB88 + 4;
        goto block_11;
    }
block_11:
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - *var_v0;
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
}

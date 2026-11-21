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

extern short D_80075556;
s32 func_80113AD0();
f32 func_8022EC3C();
s32 func_8023E724();
s32 func_80299D50();
s32 func_8029B14C();
s32 func_802A5B90();
extern char D_80036B1C[];
extern char D_80075518[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c], gap at: 0x50. */
void func_802A5A30(void) {
    s32 sp18;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    s32 temp_ret;
    s32 var_s0;

    var_s0 = 0;
    if (D_80075556 > 0) {
        temp_fs0f = *(f32 *)0x216284;
loop_2:
        if ((func_80113AD0() % 10) >= 5) {
            func_8023E724(D_80075518, var_s0, D_80036B1C, &sp18);
            sp30 = 0.0f;
            sp28 = 0.0f;
            sp2C = func_8022EC3C(*(f32 *)0x216288) + *(f32 *)0x21628C;
            if ((func_80113AD0() % 10) >= 5) {
                func_8029B14C(&sp18, &sp28, 0x3F666666, 0x41700000, 2);
                func_802A5B90();
                return;
            }
            temp_fs0 = func_8022EC3C(*(f32 *)0x216290, &sp18) + temp_fs0f;
            func_80299D50(0x2C, &sp18, &sp28, temp_fs0, func_8022EC3C(*(f32 *)0x216294) + temp_fs0f, 1);
            temp_ret = func_80113AD0();
            if ((temp_ret % 10) >= 9) {
                temp_fs0_2 = func_8022EC3C(*(f32 *)0x216298, (s32 *) (temp_ret / 10)) + *(f32 *)0x21629C;
                func_80299D50(0x2B, &sp18, &sp28, temp_fs0_2, func_8022EC3C(*(f32 *)0x2162A0) + *(f32 *)0x2162A4, 1);
            }
            goto block_8;
        }
block_8:
        var_s0 += 1;
        if (var_s0 >= D_80075556) {

        } else {
            goto loop_2;
        }
    }
}

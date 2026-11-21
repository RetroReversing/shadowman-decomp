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
s32 func_80299D50();
s32 func_802A1140();
extern char D_217EB8[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x50, 0x54, 0x58, 0x5c, 0x68, 0x6c, 0x70, 0x74], gap at: 0x60. */
void func_802B9B60(s32 arg0, s32 arg1, void *arg2) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1f;
    s32 temp_ret;
    s32 temp_ret_2;
    u32 var_s0;
    u32 var_s0_2;

    var_s0 = 0;
    temp_fs0f = *(f32 *)0x217EC4;
    temp_fs1 = *(f32 *)0x217EC8;
    sp40 = M2C_FIELD(D_217EB8, f32 *, 0);
    sp44 = M2C_FIELD(D_217EB8, f32 *, 4);
    sp48 = M2C_FIELD(D_217EB8, f32 *, 8);
    do {
        temp_ret = func_80113AD0();
        if ((temp_ret % 10) >= 8) {
            sp30 = M2C_FIELD(arg2, f32 *, 0x24) + func_8022EBE8(temp_fs0f, temp_ret / 10);
            sp34 = M2C_FIELD(arg2, f32 *, 0x28) + func_8022EBE8(temp_fs0f);
            sp38 = M2C_FIELD(arg2, f32 *, 0x2C) + func_8022EBE8(temp_fs0f);
            temp_fs0 = func_8022EC3C(temp_fs1) + temp_fs1;
            func_80299D50(0x2D, &sp30, &sp40, temp_fs0, func_8022EC3C(*(f32 *)0x217ECC) + *(f32 *)0x217ED0, 1);
        }
        var_s0 += 1;
    } while (var_s0 < 6U);
    var_s0_2 = 0;
    temp_fs1_2 = *(f32 *)0x217ED4;
    temp_fs1f = *(f32 *)0x217ED8;
    do {
        temp_ret_2 = func_80113AD0();
        if ((temp_ret_2 % 10) >= 7) {
            sp30 = M2C_FIELD(arg2, f32 *, 0x24) + func_8022EBE8(temp_fs1_2, temp_ret_2 / 10);
            sp34 = M2C_FIELD(arg2, f32 *, 0x28) + func_8022EBE8(temp_fs1_2);
            sp38 = M2C_FIELD(arg2, f32 *, 0x2C) + func_8022EBE8(temp_fs1_2);
            sp40 = func_8022EBE8(temp_fs1f);
            sp44 = func_8022EBE8(temp_fs1f);
            sp48 = func_8022EBE8(temp_fs1f);
            temp_fs0_2 = func_8022EC3C(*(f32 *)0x217EDC) + *(f32 *)0x217EE0;
            temp_fs0f_2 = func_8022EBE8(temp_fs1_2) + *(f32 *)0x217EE4;
            func_802A1140(&sp30, &sp40, 0x3F733333, temp_fs0_2, temp_fs0f_2, 0x1C, (f32) (func_80113AD0() % 3), 0, 0, 0, 1);
        }
        var_s0_2 += 1;
    } while (var_s0_2 < 8U);
}

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

f32 func_8022EBE8();
f32 func_8022EC3C();
s32 func_80299D50(s32, void *, void *, f32, s32, s32);
s32 func_8029CBA4();
s32 func_802B7394();
extern char D_217EB8[];
extern char D_2B9FBC[];
extern void *D_8007AFF8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x60, 0x64], gap at: 0x50. */
void func_802B9E10(s32 arg0, void *arg1, void *arg2) {
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    u32 var_s0;

    temp_fs0f = *(f32 *)0x217EE8;
    var_s0 = 0;
    temp_fs1 = *(f32 *)0x217EEC;
    sp28[0] = M2C_FIELD(D_217EB8, f32 *, 0);
    sp28[1] = M2C_FIELD(D_217EB8, f32 *, 4);
    sp28[2] = M2C_FIELD(D_217EB8, f32 *, 8);
    do {
        sp28[0] = 0.0f;
        sp28[2] = 0.0f;
        sp28[1] = *(f32 *)0x217EF0;
        sp18[0] = M2C_FIELD(arg2, f32 *, 0x24) + func_8022EBE8();
        sp18[1] = M2C_FIELD(arg2, f32 *, 0x28) + func_8022EBE8();
        sp18[2] = M2C_FIELD(arg2, f32 *, 0x2C) + func_8022EBE8();
        temp_fs0 = func_8022EC3C() + *(f32 *)0x217EF8;
        func_80299D50(0x2D, sp18, sp28, temp_fs0, func_8022EC3C() + *(f32 *)0x217F00, 1);
        sp28[0] = func_8022EBE8();
        var_s0 += 1;
        sp28[1] = func_8022EC3C() + *(f32 *)0x217F08;
        sp28[2] = func_8022EBE8();
        func_8029CBA4(arg2 + 0x24, sp28, D_2B9FBC);
    } while (var_s0 < 6U);
    D_8007AFF8 = arg1;
    M2C_FIELD(arg1, s32 *, 0x44) |= 0x10;
    func_802B7394(arg0, 0);
}

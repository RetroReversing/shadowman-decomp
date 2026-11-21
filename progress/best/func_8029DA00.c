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
s32 func_8029DAA0();
extern void *D_8007BB24;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x30, 0x34], gap at: 0x1c. */
void func_8029DA00(s32 arg0, f32 arg1) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 var_fv0;
    f32 var_fv0_2;
    s32 var_a0;
    s32 var_s1;
    void *var_s0;

    var_a0 = arg0;
    var_s1 = 0;
    if (arg1 != M2C_FIELD(D_8007BB24, f32 *, 4)) {
        temp_fs0f = arg1 * *(f32 *)0x215CF4;
        var_s0 = D_8007BB24 + 0x2FC;
        M2C_FIELD(D_8007BB24, f32 *, 4) = arg1;
        temp_fs0 = temp_fs0f * *(f32 *)0x215CF8;
loop_2:
        M2C_FIELD(var_s0, f32 *, -0xC) = func_8022EBE8(temp_fs0f, M2C_BITWISE(f32, var_a0));
        M2C_FIELD(var_s0, f32 *, -8) = func_8022EBE8(temp_fs0f);
        temp_fv0f = M2C_FIELD(var_s0, f32 *, -0xC);
        M2C_FIELD(var_s0, f32 *, -4) = func_8022EBE8(temp_fs0f);
        if (temp_fv0f < 0.0f) {
            func_8029DAA0();
            return;
        }
        M2C_FIELD(var_s0, f32 *, -0xC) = (f32) (temp_fv0f + temp_fs0);
        temp_fv0 = M2C_FIELD(var_s0, f32 *, -8);
        if (!(temp_fv0 < 0.0f)) {
            var_fv0 = temp_fv0 + temp_fs0;
        } else {
            var_fv0 = temp_fv0 - temp_fs0;
        }
        M2C_FIELD(var_s0, f32 *, -8) = var_fv0;
        temp_fv0_2 = M2C_FIELD(var_s0, f32 *, -4);
        if (!(temp_fv0_2 < 0.0f)) {
            var_fv0_2 = temp_fv0_2 + temp_fs0;
        } else {
            var_fv0_2 = temp_fv0_2 - temp_fs0;
        }
        M2C_FIELD(var_s0, f32 *, -4) = var_fv0_2;
        var_a0 = M2C_BITWISE(s32, M2C_FIELD(var_s0, f32 *, -8));
        M2C_FIELD(var_s0, f32 *, 0) = (f32) M2C_FIELD(var_s0, f32 *, -0xC);
        M2C_FIELD(var_s0, s32 *, 4) = var_a0;
        M2C_FIELD(var_s0, f32 *, 8) = (f32) M2C_FIELD(var_s0, f32 *, -4);/*__repair_loop_weight*/__repair_rows: {do {do {
        var_s1 += 1;} while (0);} while (0);}
if (0) goto __repair_rows;
        var_s0 += 0x300;
        if (var_s1 >= 0xA) {

        } else {
            goto loop_2;
        }
    }
}

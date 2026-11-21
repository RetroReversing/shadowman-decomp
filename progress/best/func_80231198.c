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

void func_80231198(void *arg0, f32 arg1, void *arg2) {
    f32 sp0[3];
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30[3];
    s32 sp40[3];
    s32 sp50[3];
    f32 temp_fv0f;
    f32 temp_fv1;
    u16 **temp_v1;
    u16 **var_a0;
    u16 *temp_v1_2;
    u16 *var_a3;
    u32 temp_v0;
    u32 var_a1;

    temp_v1 = M2C_FIELD(arg0, u16 ***, 4);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0) - 1;
    var_a3 = *temp_v1;
    var_a1 = 0;
    if (temp_v0 != 0) {
        var_a0 = temp_v1;
loop_2:
        temp_v1_2 = *var_a0;
        if (!(arg1 < (f32) *temp_v1_2)) {
            var_a3 = temp_v1_2;
            var_a1 += 1;
            var_a0 += 4;
            if (var_a1 < temp_v0) {
                goto loop_2;
            }
        }
    }
    sp40[0] = M2C_FIELD(var_a3, s32 *, 4);
    sp40[1] = M2C_FIELD(var_a3, s32 *, 8);
    sp40[2] = M2C_FIELD(var_a3, s32 *, 0xC);
    sp50[0] = M2C_FIELD(var_a3, s32 *, 0x44);
    sp50[1] = M2C_FIELD(var_a3, s32 *, 0x48);
    sp50[2] = M2C_FIELD(var_a3, s32 *, 0x4C);
    sp0[0] = M2C_FIELD(var_a3, f32 *, 0x10);
    sp0[1] = M2C_FIELD(var_a3, f32 *, 0x14);
    sp0[2] = M2C_FIELD(var_a3, f32 *, 0x18);
    sp10[0] = M2C_FIELD(var_a3, f32 *, 0x1C);
    sp10[1] = M2C_FIELD(var_a3, f32 *, 0x20);
    sp10[2] = M2C_FIELD(var_a3, f32 *, 0x24);
    temp_fv0f = (f32) M2C_FIELD(var_a3, u16 *, 0);
    sp20[0] = M2C_FIELD(var_a3, f32 *, 0x28);
    sp20[1] = M2C_FIELD(var_a3, f32 *, 0x2C);
    sp20[2] = M2C_FIELD(var_a3, f32 *, 0x30);
    sp30[0] = M2C_FIELD(var_a3, f32 *, 0x34);
    sp30[1] = M2C_FIELD(var_a3, f32 *, 0x38);
    sp30[2] = M2C_FIELD(var_a3, f32 *, 0x3C);
    temp_fv1 = (arg1 - temp_fv0f) / ((f32) M2C_FIELD(var_a3, u16 *, 0x40) - temp_fv0f);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (sp30[0] + (sp20[0] * temp_fv1) + (sp10[0] * temp_fv1 * temp_fv1) + (sp0[0] * temp_fv1 * temp_fv1 * temp_fv1));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (sp30[1] + (sp20[1] * temp_fv1) + (sp10[1] * temp_fv1 * temp_fv1) + (sp0[1] * temp_fv1 * temp_fv1 * temp_fv1));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (sp30[2] + (sp20[2] * temp_fv1) + (sp10[2] * temp_fv1 * temp_fv1) + (sp0[2] * temp_fv1 * temp_fv1 * temp_fv1));
}

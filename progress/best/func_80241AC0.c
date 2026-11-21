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

void func_80241AC0(void *arg0, void *arg1, void *arg2) {
    f32 sp0[3];
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    void *temp_v0;

    temp_fv0f = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0x58);
    sp0[0] = temp_fv0f;
    temp_fv1f = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 0x5C);
    sp0[1] = temp_fv1f;
    temp_fv1 = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 0x60);
    sp0[2] = temp_fv1;
    temp_v0 = arg1 + 0x34;
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_fv0f * M2C_FIELD(arg1, f32 *, 0x34)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0x18)));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((sp0[0] * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (sp0[2] * M2C_FIELD(temp_v0, f32 *, 0x1C)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((sp0[0] * M2C_FIELD(temp_v0, f32 *, 8)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x14)) + (sp0[2] * M2C_FIELD(temp_v0, f32 *, 0x20)));
    temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg1, f32 *, 0x58);
    sp0[0] = temp_fv0f_2;
    temp_fv1f_2 = M2C_FIELD(arg0, f32 *, 0x10) - M2C_FIELD(arg1, f32 *, 0x5C);
    sp0[1] = temp_fv1f_2;
    temp_fv1_2 = M2C_FIELD(arg0, f32 *, 0x14) - M2C_FIELD(arg1, f32 *, 0x60);
    sp0[2] = temp_fv1_2;
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((temp_fv0f_2 * M2C_FIELD(arg1, f32 *, 0x34)) + (temp_fv1f_2 * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_fv1_2 * M2C_FIELD(temp_v0, f32 *, 0x18)));
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) ((sp0[0] * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_fv1f_2 * M2C_FIELD(temp_v0, f32 *, 0x10)) + (sp0[2] * M2C_FIELD(temp_v0, f32 *, 0x1C)));
    M2C_FIELD(arg2, f32 *, 0x14) = (f32) ((sp0[0] * M2C_FIELD(temp_v0, f32 *, 8)) + (temp_fv1f_2 * M2C_FIELD(temp_v0, f32 *, 0x14)) + (sp0[2] * M2C_FIELD(temp_v0, f32 *, 0x20)));
    M2C_FIELD(arg2, f32 *, 0x20) = (f32) (M2C_FIELD(arg2, f32 *, 0x10) - M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg2, f32 *, 0x1C) = (f32) (M2C_FIELD(arg2, f32 *, 0xC) - M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 0x24) = (f32) (M2C_FIELD(arg2, f32 *, 0x14) - M2C_FIELD(arg2, f32 *, 8));
    M2C_FIELD(arg2, f32 *, 0x5C) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
    M2C_FIELD(arg2, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0x60);
    M2C_FIELD(arg2, f32 *, 0x64) = (f32) M2C_FIELD(arg0, f32 *, 0x7C);
}

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

M2C_UNK func_802A5D5C();                            /* extern */

void func_802A5D00(void *arg0, void *arg1) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    temp_ft1f = M2C_FIELD(arg0, f32 *, 0);
    temp_ft2 = M2C_FIELD(arg0, f32 *, 4);
    temp_ft1 = M2C_FIELD(arg0, f32 *, 8);
    temp_fv0 = (temp_ft1f * temp_ft1f) + (temp_ft2 * temp_ft2) + (temp_ft1 * temp_ft1);
    temp_fv1f = *(f32 *)0x2162B0;
    if (!(temp_fv0 < temp_fv1f)) {
        temp_fv1 = *(f32 *)0x2162B8;
        temp_fv0_2 = temp_fv1 / sqrtf(temp_fv0);
        temp_ft1f_2 = temp_ft1f * temp_fv0_2;
        temp_ft2_2 = temp_ft2 * temp_fv0_2;
        temp_ft1_2 = temp_ft1 * temp_fv0_2;
        temp_ft0 = (temp_ft1f_2 * temp_ft1f_2) + (temp_ft1_2 * temp_ft1_2);
        if (!(temp_ft0 < temp_fv1f)) {
            temp_fv0_3 = temp_fv1 / sqrtf(temp_ft0);
            temp_ft0f = temp_ft1_2 * temp_fv0_3;
            temp_fv0f = -temp_ft2_2;
            temp_fv1_2 = -temp_ft1f_2 * temp_fv0_3;
            temp_ft0_2 = temp_ft0 * temp_fv0_3;
            temp_fv1f_2 = temp_fv0f * temp_ft1f_2 * temp_fv0_3;
            M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0;
            M2C_FIELD(arg1, f32 *, 8) = temp_ft1f_2;
            M2C_FIELD(arg1, f32 *, 0x14) = temp_ft2_2;
            M2C_FIELD(arg1, f32 *, 0x20) = temp_ft1_2;
            M2C_FIELD(arg1, f32 *, 0) = temp_ft0f;
            M2C_FIELD(arg1, f32 *, 0x18) = temp_fv1_2;
            M2C_FIELD(arg1, f32 *, 0x10) = temp_ft0_2;
            M2C_FIELD(arg1, f32 *, 4) = temp_fv1f_2;
            M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (temp_fv0f * temp_ft1_2 * temp_fv0_3);
            return;
        }
        M2C_FIELD(arg1, f32 *, 0) = temp_fv1;
        M2C_FIELD(arg1, f32 *, 0x14) = temp_ft2_2;
        M2C_FIELD(arg1, f32 *, 0x1C) = (f32) -temp_ft2_2;
        M2C_FIELD(arg1, f32 *, 0x20) = 0.0f;
        M2C_FIELD(arg1, f32 *, 0x18) = 0.0f;
        func_802A5D5C();
        return;
    }
    temp_fv0_4 = *(f32 *)0x2162B4;
    M2C_FIELD(arg1, f32 *, 0x20) = temp_fv0_4;
    M2C_FIELD(arg1, f32 *, 0x10) = temp_fv0_4;
    M2C_FIELD(arg1, f32 *, 0) = temp_fv0_4;
    M2C_FIELD(arg1, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x18) = 0.0f;
    M2C_FIELD(arg1, f32 *, 0x14) = 0.0f;
    M2C_FIELD(arg1, M2C_UNK32 *, 0xC) = 0;
    M2C_FIELD(arg1, f32 *, 8) = 0.0f;
    M2C_FIELD(arg1, f32 *, 4) = 0.0f;
}

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

f32 func_802401D0();
extern s32 D_8006A5B4;
extern char D_80075598[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
s32 func_802C7FF4(void) {
    char *__base_D_80075598;
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fs0f;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    __base_D_80075598 = D_80075598;
    temp_v0 = __base_D_80075598 + 4;
    sp10[0] = 0.0f;
    sp10[1] = *(f32 *)0x21856C;
    sp10[2] = *(f32 *)0x218570;
    temp_fv0f = M2C_FIELD(sp10, f32 *, 4);
    temp_fv1f = M2C_FIELD(sp10, f32 *, 8);
    temp_fs0f = *(f32 *)0x218574;
    temp_ft1 = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 8));
    temp_ft0 = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x14));
    temp_v0_2 = temp_v0 - 0x34;
    temp_fv1 = M2C_FIELD(temp_v0_2, f32 *, 0x24);
    temp_fv0f_2 = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x20));
    D_8006A5B4 = 3;
    sp30 = temp_fv1;
    temp_fv1f_2 = M2C_FIELD(temp_v0_2, f32 *, 0x2C);
    temp_fv0 = temp_ft0 + M2C_FIELD(temp_v0_2, f32 *, 0x28);
    sp38 = temp_fv1f_2;
    sp20[0] = temp_ft1;
    sp20[1] = temp_ft0;
    sp20[2] = temp_fv0f_2;
    sp20[0] = temp_ft1 + temp_fv1;
    sp20[1] = temp_fv0;
    sp34 = temp_fv0;
    sp20[2] = temp_fv0f_2 + temp_fv1f_2;
    if ((func_802401D0(temp_v0 - 0x10, &sp30, temp_fs0f, &D_8006A5B4) != sp10[0]) || (var_v0 = 1, (func_802401D0(&sp30, sp20) != sp10[0]))) {
        var_v0 = 0;
    }
    return var_v0;
}

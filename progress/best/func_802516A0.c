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

M2C_UNK func_802478C0(s32 *, void *);               /* extern */
extern s32 D_8007BE5C;

void func_802516A0(void *arg0) {
    s32 sp10[3];
    f32 sp20[3];
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fv0;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    temp_a0 = M2C_FIELD(temp_a1, void **, 0x6C);
    if (M2C_FIELD(temp_a0, s32 *, 0) == 2) {
        sp10[0] = 0;
        var_fv0 = M2C_FIELD(temp_a0, f32 *, 4);
        if (M2C_FIELD(temp_a0, u8 *, 8) == 0) {
            var_fv0 = -var_fv0;
        }
        temp_v0 = temp_a1 + 0x34;
        sp10[1] = var_fv0;
        sp10[2] = 0;
        temp_fv1 = M2C_FIELD(sp10, f32 *, 4);
        temp_fv1f = M2C_FIELD(sp10, f32 *, 8);
        sp20[0] = (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 8));
        sp20[1] = (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x14));
        sp20[2] = (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x20));
        if (D_8007BE5C == 0) {
            func_802478C0(sp10, temp_a1 + 0x24);
        }
    }
}

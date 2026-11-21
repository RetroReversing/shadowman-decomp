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

M2C_UNK func_8025368C(s32);                         /* extern */
M2C_UNK func_80267600(void);               /* extern */
extern M2C_UNK D_20DEA4;
extern f32 D_8005E6E8;
extern M2C_UNK D_80075598;
extern s32 D_8007BDD4;
extern M2C_UNK D_8007BEB8;

void func_80265348(void) {
    M2C_UNK *__base_D_8007BEB8;
    M2C_UNK *__base_D_80075598;
    f32 sp10;
    s32 sp14;
    s32 sp18;
    f32 sp20[3];
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_fv1;
    void *var_v0;

    sp10 = M2C_FIELD(&D_20DEA4, f32 *, 0);
    sp14 = M2C_FIELD(&D_20DEA4, s32 *, 4);
    sp18 = M2C_FIELD(&D_20DEA4, s32 *, 8);
    func_80267600();
    __base_D_8007BEB8 = &D_8007BEB8;
    if (M2C_FIELD(__base_D_8007BEB8, f32 *, 4) == 0.0f) {
        __base_D_80075598 = &D_80075598;
        var_v0 = __base_D_80075598 + 4;
        if (D_8007BDD4 != 0) {
            func_8025368C(D_8007BDD4);
            var_v0 = __base_D_80075598 + 4;
        }
        temp_ft1f = M2C_FIELD(&sp10, f32 *, 4);
        temp_ft1 = M2C_FIELD(&sp10, f32 *, 8);
        temp_fv1 = (sp10 * M2C_FIELD(var_v0, f32 *, 0xC)) + (temp_ft1f * M2C_FIELD(var_v0, f32 *, 0x10)) + (temp_ft1 * M2C_FIELD(var_v0, f32 *, 0x14));
        sp20[0] = (sp10 * M2C_FIELD(var_v0, f32 *, 0)) + (temp_ft1f * M2C_FIELD(var_v0, f32 *, 4)) + (temp_ft1 * M2C_FIELD(var_v0, f32 *, 8));
        sp20[1] = temp_fv1;
        sp20[2] = (sp10 * M2C_FIELD(var_v0, f32 *, 0x18)) + (temp_ft1f * M2C_FIELD(var_v0, f32 *, 0x1C)) + (temp_ft1 * M2C_FIELD(var_v0, f32 *, 0x20));
        M2C_FIELD(__base_D_8007BEB8, f32 *, 4) = (f32) (D_8005E6E8 - (M2C_FIELD(var_v0, f32 *, -0xC) + temp_fv1));
    }
}

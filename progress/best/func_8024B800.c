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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_8023A0DC(M2C_UNK, f32, M2C_UNK, f32 *, void *); /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_21788C;

void func_8024B800(void *arg0) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 temp_fv0f;
    s32 var_v0;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;

    temp_s1 = M2C_FIELD(arg0, void **, 8);
    temp_v1 = M2C_FIELD(temp_s1, void **, 0x6C);
    temp_v0 = M2C_FIELD(temp_v1, s32 *, 4) - 1;
    M2C_FIELD(temp_v1, s32 *, 4) = temp_v0;
    if (temp_v0 <= 0) {
        var_v0 = M2C_FIELD(temp_s1, s16 *, 0x7C);
        if (var_v0 == 0) {
            var_v0 = 0xC8;
        }
        M2C_FIELD(temp_v1, s32 *, 4) = (s32) var_v0;
        temp_s0 = temp_s1 + 0x34;
        func_8023A0DC(0, *(f32 *)0x202E70, 0xC1F00000, &sp18, temp_s0);
        sp18 += M2C_FIELD(temp_s1, f32 *, 0x24);
        temp_fv0f = *(f32 *)0x202E74;
        sp1C += M2C_FIELD(temp_s1, f32 *, 0x28);
        sp3C = 0.0f;
        sp38 = 0.0f;
        sp40 = temp_fv0f;
        sp20 += M2C_FIELD(temp_s1, f32 *, 0x2C);
        sp28 = M2C_FIELD(temp_s0, f32 *, 8) * temp_fv0f;
        sp2C = M2C_FIELD(temp_s0, f32 *, 0x14) * temp_fv0f;
        sp30 = M2C_FIELD(temp_s0, f32 *, 0x20) * temp_fv0f;
        func_802A5EC4(&sp18, &sp28, &D_21788C, 0, 2, 0);
        func_80109318(0x1A9, temp_s1 + 0x24, 0);
    }
}

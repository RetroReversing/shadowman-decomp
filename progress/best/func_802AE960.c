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

f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8029B14C(void *, f32 *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8029FB2C(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802A6808(void *);                      /* extern */
extern M2C_UNK D_8007DB88;

void func_802AE960(void *arg0) {
    f32 sp18;                                       /* compiler-managed */
    f32 sp1C;
    f32 sp20;
    M2C_UNK (*temp_v0_3)(void *);
    f32 *var_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 var_a0;
    u32 temp_v0_2;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 0xC);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    temp_s3 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    }
    func_802A6808(arg0);
    temp_s2 = arg0 + 0x54;
    func_8029FB2C(temp_s2, 0x40000000, 0x43FA0000, 0xFF, 0xF7, 0);
    if (*(f32 *)0x216750 < func_8022EC3C(*(f32 *)0x21674C)) {
        sp18 = M2C_FIELD(arg0, f32 *, 0x6C);
        sp1C = M2C_FIELD(arg0, f32 *, 0x70);
        sp20 = M2C_FIELD(arg0, f32 *, 0x74);
        temp_fv0_2 = *(f32 *)0x216754;
        sp18 = M2C_BITWISE(f64, (sp1C * temp_fv0_2));
        sp20 *= temp_fv0_2;
        func_8029B14C(temp_s2, &sp18, 0x3F4CCCCD, 0x41F00000, 2);
    }
    var_v0 = &D_8007DB88 + 4;
    if (temp_s0 != NULL) {
        var_a0 = 0xB;
        __repair_rows: {
            temp_v1 = temp_s0 + (var_a0 * 0xC);
            var_a0 -= 1;
            temp_v0 = temp_s0 + (var_a0 * 0xC);
            M2C_FIELD(temp_v1, s32 *, 8) = (s32) M2C_FIELD(temp_v0, s32 *, 8);
            M2C_FIELD(temp_v1, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0, s32 *, 0xC);
            M2C_FIELD(temp_v1, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0, s32 *, 0x10);
        }
if (var_a0 != 0) goto __repair_rows;
        M2C_FIELD(temp_s0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(arg0, f32 *, 0x6C));
        M2C_FIELD(temp_s0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) - M2C_FIELD(arg0, f32 *, 0x70));
        temp_v0_2 = M2C_FIELD(temp_s0, u32 *, 0) + 1;
        M2C_FIELD(temp_s0, u32 *, 0) = temp_v0_2;
        M2C_FIELD(temp_s0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) - M2C_FIELD(arg0, f32 *, 0x74));
        if (temp_v0_2 >= 0xDU) {
            M2C_FIELD(temp_s0, u32 *, 0) = 0xCU;
        }
        var_v0 = &D_8007DB88 + 4;
    }
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + (*var_v0 * *(f32 *)0x216758));
    if (M2C_FIELD(arg0, f32 *, 0x30) <= 0.0f) {
        temp_v0_3 = M2C_FIELD(temp_s3, M2C_UNK (**)(void *), 0x18);
        if (temp_v0_3 != NULL) {
            temp_v0_3(arg0);
        }
    }
}

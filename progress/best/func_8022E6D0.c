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

M2C_UNK func_8021E81C(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_80058E68;
extern void *D_8005EA2C;

void func_8022E6D0(void *arg0, s32 arg1, void *arg3) {
    union {
        unsigned char bytes[56];
        struct { unsigned char pad[24]; f32 value; } view_sp18;
        struct { unsigned char pad[28]; f32 value; } view_sp1C;
        struct { unsigned char pad[32]; f32 value; } view_sp20;
        struct { unsigned char pad[40]; u16 value; } view_sp28;
        struct { unsigned char pad[42]; u16 value; } view_sp2A;
        struct { unsigned char pad[44]; u16 value; } view_sp2C;
    } m2c_initial_frame;

             
             
             
             
             
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1f;
    s32 var_a3;
    void *temp_v0;
    void *var_a2;

    if (D_8002C1B0 != 0) {
        temp_fv1f = M2C_FIELD(arg3, f32 *, 0);
        temp_ft1 = M2C_FIELD(arg3, f32 *, 4);
        temp_v0 = D_8005EA2C + 0x3C;
        temp_ft0f = M2C_FIELD(arg3, f32 *, 8);
        M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 4) = (f32) ((temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14)) + M2C_FIELD(temp_v0, f32 *, 0x28));
        temp_ft0 = (temp_fv1f * M2C_FIELD(D_8005EA2C, f32 *, 0x3C)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8)) + M2C_FIELD(temp_v0, f32 *, 0x24);
        var_a3 = 0;
        var_a2 = arg0;
        m2c_initial_frame.view_sp18.value = temp_ft0;
        M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 8) = (f32) ((temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20)) + M2C_FIELD(temp_v0, f32 *, 0x2C));
        temp_fv0 = m2c_initial_frame.view_sp1C.value * M2C_FIELD(D_8005EA2C, f32 *, 0x104);
        m2c_initial_frame.view_sp28.value = (u16) (s32) temp_ft0;
        m2c_initial_frame.view_sp2C.value = (u16) (s32) m2c_initial_frame.view_sp20.value;
        m2c_initial_frame.view_sp1C.value = temp_fv0;
        m2c_initial_frame.view_sp2A.value = (u16) (s32) temp_fv0;
        do {
            M2C_FIELD(var_a2, u16 *, 0) = (u16) (M2C_FIELD(var_a2, u16 *, 0) + m2c_initial_frame.view_sp28.value);
            M2C_FIELD(var_a2, u16 *, 2) = (u16) (M2C_FIELD(var_a2, u16 *, 2) + m2c_initial_frame.view_sp2A.value);
            var_a3 += 1;
            M2C_FIELD(var_a2, u16 *, 4) = (u16) (M2C_FIELD(var_a2, u16 *, 4) + m2c_initial_frame.view_sp2C.value);
            var_a2 += 0x10;
        } while (var_a3 < 4);
        func_8021E81C(arg0, 0, &D_80058E68, 4, 2, D_8002C1B0 + (arg1 * 0x10));
    }
}

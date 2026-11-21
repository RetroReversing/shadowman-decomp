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

M2C_UNK func_80239FCC(f32 *, f32 *, void *);        /* extern */
M2C_UNK func_8023A0DC(f32, f32, f32 *, s32, f32 *, void *); /* extern */
extern M2C_UNK D_8005EA80;
extern s32 D_8006196C;
extern void *D_80061A10;

void func_8023512C(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    union {
        unsigned char bytes[64];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; s32 value; } view_sp20;
        struct { unsigned char pad[12]; f32 value; } view_sp24;
        struct { unsigned char pad[16]; f32 value; } view_sp28;
        struct { unsigned char pad[20]; f32 value; } view_sp2C;
        struct { unsigned char pad[24]; f32 value; } view_sp30;
        struct { unsigned char pad[28]; f32 value; } view_sp34;
        struct { unsigned char pad[32]; f32 value; } view_sp38;
        struct { unsigned char pad[36]; f32 value; } view_sp3C;
        struct { unsigned char pad[40]; f32 value; } view_sp40;
        struct { unsigned char pad[48]; f32 value; } view_sp48;
        struct { unsigned char pad[52]; f32 value; } view_sp4C;
        struct { unsigned char pad[56]; f32 value; } view_sp50;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
    f32 temp_ft3f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 var_s2;
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_a1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x64);
    temp_v1_2 = temp_v1 + 0xC;
    m2c_initial_frame.view_sp18.value = (f32) M2C_FIELD(temp_v1, s16 *, 0xC);
    M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 4) = (f32) M2C_FIELD(temp_v1_2, s16 *, 2);
    M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 8) = (f32) M2C_FIELD(temp_v1_2, s16 *, 4);
    M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 0xC) = (f32) M2C_FIELD(temp_v1_2, u16 *, 6);
    temp_v1_3 = M2C_FIELD(arg1, void **, 0x64);
    temp_v1_4 = temp_v1_3 + 0xC;
    m2c_initial_frame.view_sp28.value = (f32) M2C_FIELD(temp_v1_3, s16 *, 0xC);
    m2c_initial_frame.view_sp2C.value = (f32) M2C_FIELD(temp_v1_4, s16 *, 2);
    m2c_initial_frame.view_sp30.value = (f32) M2C_FIELD(temp_v1_4, s16 *, 4);
    m2c_initial_frame.view_sp34.value = (f32) M2C_FIELD(temp_v1_4, u16 *, 6);
    temp_fv0f = M2C_FIELD(arg0, f32 *, 0xC);
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x14);
    m2c_initial_frame.view_sp24.value += sqrtf((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0));
    func_8023A0DC(m2c_initial_frame.view_sp18.value, m2c_initial_frame.view_sp1C.value, &m2c_initial_frame.view_sp18.value, m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp38.value, arg0 + 0x34);
    m2c_initial_frame.view_sp38.value = (m2c_initial_frame.view_sp38.value + M2C_FIELD(arg0, f32 *, 0x58)) - M2C_FIELD(arg1, f32 *, 0x58);
    m2c_initial_frame.view_sp3C.value = (m2c_initial_frame.view_sp3C.value + M2C_FIELD(arg0, f32 *, 0x5C)) - M2C_FIELD(arg1, f32 *, 0x5C);
    m2c_initial_frame.view_sp40.value = (m2c_initial_frame.view_sp40.value + M2C_FIELD(arg0, f32 *, 0x60)) - M2C_FIELD(arg1, f32 *, 0x60);
    func_80239FCC(&m2c_initial_frame.view_sp38.value, &m2c_initial_frame.view_sp48.value, arg1 + 0x34);
    temp_fv0_2 = m2c_initial_frame.view_sp28.value - m2c_initial_frame.view_sp48.value;
    temp_fv0_3 = m2c_initial_frame.view_sp2C.value - m2c_initial_frame.view_sp4C.value;
    temp_fv0_4 = m2c_initial_frame.view_sp30.value - m2c_initial_frame.view_sp50.value;
    temp_ft3f = m2c_initial_frame.view_sp24.value * m2c_initial_frame.view_sp24.value * *(f32 *)0x2023A8;
    var_s2 = arg3 - 1;
    if (((temp_fv0_2 * temp_fv0_2) + (temp_fv0_3 * temp_fv0_3) + (temp_fv0_4 * temp_fv0_4)) < ((m2c_initial_frame.view_sp34.value * m2c_initial_frame.view_sp34.value) + temp_ft3f)) {
        temp_a0 = M2C_FIELD(arg1, void **, 0x64);
        D_80061A10 = temp_a0;
        var_v1 = M2C_FIELD(temp_a0, s32 *, 0x14) + (arg2 * 0x12);
        if (var_s2 != -1) {
            var_a1 = var_v1 + 0x10;
loop_3:
            if (!(M2C_FIELD(var_a1, u8 *, -0xF) & 1) && (temp_v0 = M2C_FIELD(temp_a0, s32 *, 0x1C) + (M2C_FIELD(var_a1, u16 *, -8) * 0x10), (fabsf((M2C_FIELD(temp_v0, f32 *, 0) * m2c_initial_frame.view_sp48.value) + (M2C_FIELD(temp_v0, f32 *, 4) * m2c_initial_frame.view_sp4C.value) + (M2C_FIELD(temp_v0, f32 *, 8) * m2c_initial_frame.view_sp50.value) + M2C_FIELD(temp_v0, f32 *, 0xC)) < m2c_initial_frame.view_sp24.value)) && (temp_fv0_5 = (f32) M2C_FIELD(var_a1, u16 *, 0), temp_fv0_6 = m2c_initial_frame.view_sp48.value - (f32) M2C_FIELD(var_a1, s16 *, -6), temp_fv0_7 = m2c_initial_frame.view_sp4C.value - (f32) M2C_FIELD(var_a1, s16 *, -4), temp_fv0_8 = m2c_initial_frame.view_sp50.value - (f32) M2C_FIELD(var_a1, s16 *, -2), (((temp_fv0_6 * temp_fv0_6) + (temp_fv0_7 * temp_fv0_7) + (temp_fv0_8 * temp_fv0_8)) < ((temp_fv0_5 * temp_fv0_5) + temp_ft3f)))) {
                if (D_8006196C < 0x3E8) {
                    temp_v0_2 = (D_8006196C * 0xC) + &D_8005EA80;
                    M2C_FIELD(temp_v0_2, void **, 0) = temp_a0;
                    M2C_FIELD(temp_v0_2, s32 *, 8) = var_v1;
                    M2C_FIELD(temp_v0_2, void **, 4) = arg1;
                    D_8006196C += 1;
                    goto block_8;
                }
            } else {
block_8:
                var_a1 += 0x12;
                var_s2 -= 1;
                var_v1 += 0x12;
                if (var_s2 != -1) {
                    goto loop_3;
                }
            }
        }
    }
}

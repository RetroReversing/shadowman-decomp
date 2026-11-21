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

M2C_UNK func_8021E990(f32, f32, u8, u8, f32, f32, f32, f32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80234B70(f32 *);                       /* extern */
M2C_UNK func_80239AEC(void *, f32 *);               /* extern */
M2C_UNK func_80294F90();                            /* extern */
s32 func_80296738(M2C_UNK);                         /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007B340;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0xa0, 0xa4, 0xa8, 0xac, 0xb0, 0xb4, 0xb8, 0xbc, 0xc0, 0xc4, 0xd0, 0xd4], gap at: 0xc8. */
void func_80294F10(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK *__base_D_80075568;
    union {
        unsigned char bytes[112];
        struct { f32 value; } view_sp30;
        struct { unsigned char pad[4]; f32 value; } view_sp34;
        struct { unsigned char pad[8]; f32 value; } view_sp38;
        struct { unsigned char pad[16]; f32 value; } view_sp40;
        struct { unsigned char pad[20]; f32 value; } view_sp44;
        struct { unsigned char pad[24]; f32 value; } view_sp48;
        struct { unsigned char pad[32]; f32 value; } view_sp50;
        struct { unsigned char pad[36]; f32 value; } view_sp54;
        struct { unsigned char pad[40]; f32 value; } view_sp58;
        struct { unsigned char pad[48]; f32 value; } view_sp60;
        struct { unsigned char pad[52]; f32 value; } view_sp64;
        struct { unsigned char pad[56]; f32 value; } view_sp68;
        struct { unsigned char pad[64]; f32 value; } view_sp70;
        struct { unsigned char pad[68]; f32 value; } view_sp74;
        struct { unsigned char pad[72]; f32 value; } view_sp78;
        struct { unsigned char pad[76]; f32 value; } view_sp7C;
        struct { unsigned char pad[80]; f32 value; } view_sp80;
        struct { unsigned char pad[84]; f32 value; } view_sp84;
        struct { unsigned char pad[88]; f32 value; } view_sp88;
        struct { unsigned char pad[92]; f32 value; } view_sp8C;
        struct { unsigned char pad[96]; f32 value; } view_sp90;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
             
             
             
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0f;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft2f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;
    void *var_s3;

    temp_v0 = func_80296738(0x17);
    D_8002C1B0 = temp_v0;
    if (temp_v0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x2010) < arg2) {
            temp_fs0f = *(f32 *)0x215860;
            temp_fs0 = *(f32 *)0x215864;
            m2c_initial_frame.view_sp40.value = (M2C_FIELD(arg0, f32 *, 0x2000) - M2C_FIELD(arg1, f32 *, 0)) * temp_fs0f;
            m2c_initial_frame.view_sp44.value = (M2C_FIELD(arg0, f32 *, 0x2004) - M2C_FIELD(arg1, f32 *, 4)) * temp_fs0f;
            m2c_initial_frame.view_sp48.value = (M2C_FIELD(arg0, f32 *, 0x2008) - M2C_FIELD(arg1, f32 *, 8)) * temp_fs0f;
            m2c_initial_frame.view_sp30.value = m2c_initial_frame.view_sp40.value;
            m2c_initial_frame.view_sp34.value = m2c_initial_frame.view_sp44.value;
            m2c_initial_frame.view_sp38.value = m2c_initial_frame.view_sp48.value;
            func_80234B70(&m2c_initial_frame.view_sp30.value);
            m2c_initial_frame.view_sp30.value *= (f32) M2C_FIELD(arg0, s32 *, 0x2010);
            m2c_initial_frame.view_sp34.value *= (f32) M2C_FIELD(arg0, s32 *, 0x2010);
            var_s1 = arg3 - 1;
            m2c_initial_frame.view_sp38.value *= (f32) M2C_FIELD(arg0, s32 *, 0x2010);
            if (var_s1 >= 0) {
                var_s0 = (var_s1 * 4) + arg0;
                do {
                    m2c_initial_frame.view_sp50.value = M2C_FIELD(arg1, f32 *, 0);
                    m2c_initial_frame.view_sp54.value = M2C_FIELD(arg1, f32 *, 4);
                    m2c_initial_frame.view_sp58.value = M2C_FIELD(arg1, f32 *, 8);
                    m2c_initial_frame.view_sp50.value += (m2c_initial_frame.view_sp40.value * (f32) M2C_FIELD(var_s0, s32 *, 0)) - m2c_initial_frame.view_sp30.value;
                    m2c_initial_frame.view_sp54.value += (m2c_initial_frame.view_sp44.value * (f32) M2C_FIELD(var_s0, s32 *, 0)) - m2c_initial_frame.view_sp34.value;
                    m2c_initial_frame.view_sp58.value += (m2c_initial_frame.view_sp48.value * (f32) M2C_FIELD(var_s0, s32 *, 0)) - m2c_initial_frame.view_sp38.value;
                    M2C_FIELD(var_s0, s32 *, 0) = (s32) ((M2C_FIELD(var_s0, s32 *, 0) + M2C_FIELD(var_s0, s32 *, 0x400)) & 0x1FF);
                    if (D_8002C1B0 != 0) {
                        func_8021E990(m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp54.value, M2C_FIELD(&D_8007B340, u8 *, 2), M2C_FIELD(&D_8007B340, u8 *, 3), m2c_initial_frame.view_sp58.value, temp_fs0, temp_fs0, *(f32 *)0x215868, (s32) M2C_FIELD(&D_8007B340, u8 *, 0), (s32) M2C_FIELD(&D_8007B340, u8 *, 1), (s32) M2C_FIELD(&D_8007B340, u8 *, 2), (s32) M2C_FIELD(&D_8007B340, u8 *, 3), D_8002C1B0);
                    }
                    var_s1 -= 1;
                    var_s0 -= 4;
                } while (var_s1 >= 0);
            }
            if ((s32) (arg1 + 0xC) < (s32) (arg1 + 0x30)) {
                func_80294F90();
                return;
            }
            goto block_18;
        }
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x2014);
        if (temp_v1 >= 0xC1) {
            temp_fs0_2 = *(f32 *)0x21586C;
            var_s3 = arg1;
            __repair_rows: {
                m2c_initial_frame.view_sp40.value = (M2C_FIELD(arg0, f32 *, 0x2000) - M2C_FIELD(var_s3, f32 *, 0)) * temp_fs0_2;
                m2c_initial_frame.view_sp44.value = (M2C_FIELD(arg0, f32 *, 0x2004) - M2C_FIELD(var_s3, f32 *, 4)) * temp_fs0_2;
                m2c_initial_frame.view_sp48.value = (M2C_FIELD(arg0, f32 *, 0x2008) - M2C_FIELD(var_s3, f32 *, 8)) * temp_fs0_2;
                m2c_initial_frame.view_sp30.value = m2c_initial_frame.view_sp40.value;
                m2c_initial_frame.view_sp34.value = m2c_initial_frame.view_sp44.value;
                m2c_initial_frame.view_sp38.value = m2c_initial_frame.view_sp48.value;
                func_80234B70(&m2c_initial_frame.view_sp30.value);
                m2c_initial_frame.view_sp30.value *= (f32) M2C_FIELD(arg0, s32 *, 0x2010);
                m2c_initial_frame.view_sp34.value *= (f32) M2C_FIELD(arg0, s32 *, 0x2010);
                var_s1_2 = arg3 - 1;
                m2c_initial_frame.view_sp38.value *= (f32) M2C_FIELD(arg0, s32 *, 0x2010);
                if (var_s1_2 >= 0) {
                    var_s0_2 = (var_s1_2 * 4) + arg0;
                    do {
                        m2c_initial_frame.view_sp50.value = (M2C_FIELD(var_s3, f32 *, 0) + (m2c_initial_frame.view_sp40.value * (f32) M2C_FIELD(var_s0_2, s32 *, 0))) - m2c_initial_frame.view_sp30.value;
                        m2c_initial_frame.view_sp54.value = (M2C_FIELD(var_s3, f32 *, 4) + (m2c_initial_frame.view_sp44.value * (f32) M2C_FIELD(var_s0_2, s32 *, 0))) - m2c_initial_frame.view_sp34.value;
                        m2c_initial_frame.view_sp58.value = (M2C_FIELD(var_s3, f32 *, 8) + (m2c_initial_frame.view_sp48.value * (f32) M2C_FIELD(var_s0_2, s32 *, 0))) - m2c_initial_frame.view_sp38.value;
                        M2C_FIELD(var_s0_2, s32 *, 0) = (s32) ((M2C_FIELD(var_s0_2, s32 *, 0) + M2C_FIELD(var_s0_2, s32 *, 0x400)) & 0x1FF);
                        if (D_8002C1B0 != 0) {
                            temp_fv0 = (f32) ((s32) (temp_v1 - 0xC0) / 2);
                            func_8021E990(m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp54.value, M2C_FIELD(&D_8007B340, u8 *, 2), M2C_FIELD(&D_8007B340, u8 *, 3), m2c_initial_frame.view_sp58.value, temp_fv0, temp_fv0, *(f32 *)0x215870, (s32) M2C_FIELD(&D_8007B340, u8 *, 0), (s32) M2C_FIELD(&D_8007B340, u8 *, 1), (s32) M2C_FIELD(&D_8007B340, u8 *, 2), (s32) M2C_FIELD(&D_8007B340, u8 *, 3), D_8002C1B0);
                        }
                        var_s1_2 -= 1;
                        var_s0_2 -= 4;
                    } while (var_s1_2 >= 0);
                }
                var_s3 += 0xC;
            }
if ((s32) var_s3 < (s32) (arg1 + 0x30)) goto __repair_rows;
        }
block_18:
        var_s1_3 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x2014) > 0) {
            temp_fs0_3 = *(f32 *)0x215874;
            var_s0_3 = arg0;
            var_s2 = 0x1400;
            do {
                func_80239AEC(arg0 + var_s2, &m2c_initial_frame.view_sp70.value);
                M2C_FIELD(var_s0_3, f32 *, 0x1400) = M2C_BITWISE(f64, (M2C_FIELD(var_s0_3, f32 *, 0x1404) + *(f32 *)0x21587C));
                M2C_FIELD(var_s0_3, f32 *, 0x1408) = (f32) (M2C_FIELD(var_s0_3, f32 *, 0x1408) + *(f32 *)0x215880);
                m2c_initial_frame.view_sp60.value = M2C_FIELD(var_s0_3, f32 *, 0x800);
                m2c_initial_frame.view_sp64.value = M2C_FIELD(var_s0_3, f32 *, 0x804);
                m2c_initial_frame.view_sp68.value = M2C_FIELD(var_s0_3, f32 *, 0x808);
                temp_fv0f = m2c_initial_frame.view_sp60.value * (f32) M2C_FIELD(arg0, s32 *, 0x2010);
                m2c_initial_frame.view_sp60.value = temp_fv0f;
                temp_fv1f = m2c_initial_frame.view_sp64.value * (f32) M2C_FIELD(arg0, s32 *, 0x2010);
                m2c_initial_frame.view_sp64.value = temp_fv1f;
                temp_ft2f = m2c_initial_frame.view_sp68.value * (f32) M2C_FIELD(arg0, s32 *, 0x2010);
                temp_ft0 = (temp_fv0f * m2c_initial_frame.view_sp70.value) + (temp_fv1f * m2c_initial_frame.view_sp74.value) + (temp_ft2f * m2c_initial_frame.view_sp78.value);
                temp_fv1 = (temp_fv0f * m2c_initial_frame.view_sp7C.value) + (temp_fv1f * m2c_initial_frame.view_sp80.value) + (temp_ft2f * m2c_initial_frame.view_sp84.value);
                temp_fv0f_2 = (temp_fv0f * m2c_initial_frame.view_sp88.value) + (temp_fv1f * m2c_initial_frame.view_sp8C.value) + (temp_ft2f * m2c_initial_frame.view_sp90.value);
                m2c_initial_frame.view_sp68.value = temp_ft2f;
                __base_D_80075568 = &D_80075568;
                temp_ft0f = temp_ft0 + M2C_FIELD(__base_D_80075568, f32 *, 0x24);
                m2c_initial_frame.view_sp50.value = temp_ft0;
                m2c_initial_frame.view_sp54.value = temp_fv1;
                m2c_initial_frame.view_sp58.value = temp_fv0f_2;
                temp_fv0f_3 = temp_fv0f_2 + M2C_FIELD(__base_D_80075568, f32 *, 0x2C);
                m2c_initial_frame.view_sp50.value = temp_ft0f;
                m2c_initial_frame.view_sp54.value = temp_fv1 + (M2C_FIELD(__base_D_80075568, f32 *, 0x28) + *(f32 *)0x215884);
                m2c_initial_frame.view_sp58.value = temp_fv0f_3;
                if (D_8002C1B0 != 0) {
                    func_8021E990(temp_ft0f, m2c_initial_frame.view_sp54.value, M2C_FIELD(&D_8007B340, u8 *, 2), M2C_FIELD(&D_8007B340, u8 *, 3), temp_fv0f_3, temp_fs0_3, temp_fs0_3, *(f32 *)0x215888, (s32) M2C_FIELD(&D_8007B340, u8 *, 0), (s32) M2C_FIELD(&D_8007B340, u8 *, 1), (s32) M2C_FIELD(&D_8007B340, u8 *, 2), (s32) M2C_FIELD(&D_8007B340, u8 *, 3), D_8002C1B0);
                }
                var_s0_3 += 0xC;
                var_s1_3 += 1;
                var_s2 += 0xC;
            } while (var_s1_3 < M2C_FIELD(arg0, s32 *, 0x2014));
        }
    }
}

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

f32 func_8011B7E0(f32, f32);                        /* extern */
void *func_8021E37C(M2C_UNK);                       /* extern */
M2C_UNK func_8021E81C(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_8025DAB8(f32 *, f32 *);                /* extern */
void *func_80296738(M2C_UNK);                       /* extern */
extern void *D_8002C1B0;
extern void *D_8005EA2C;
extern void *D_8006A4FC;

void func_8029EEBC(void *arg0) {
    union {
        unsigned char bytes[144];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
        struct { unsigned char pad[16]; f32 value; } view_sp28;
        struct { unsigned char pad[20]; f32 value; } view_sp2C;
        struct { unsigned char pad[24]; f32 value; } view_sp30;
        struct { unsigned char pad[32]; f32 value; } view_sp38;
        struct { unsigned char pad[40]; f32 value; } view_sp40;
        struct { unsigned char pad[44]; f32 value; } view_sp44;
        struct { unsigned char pad[52]; f32 value; } view_sp4C;
        struct { unsigned char pad[56]; f32 value; } view_sp50;
        struct { unsigned char pad[64]; f32 value; } view_sp58;
        struct { unsigned char pad[80]; f32 value; } view_sp68;
        struct { unsigned char pad[84]; f32 value; } view_sp6C;
        struct { unsigned char pad[88]; s32 value; } view_sp70;
        struct { unsigned char pad[96]; f32 value; } view_sp78;
        struct { unsigned char pad[104]; f32 value; } view_sp80;
        struct { unsigned char pad[108]; f32 value; } view_sp84;
        struct { unsigned char pad[116]; f32 value; } view_sp8C;
        struct { unsigned char pad[120]; f32 value; } view_sp90;
        struct { unsigned char pad[128]; f64 value; } view_sp98;
        struct { unsigned char pad[140]; f32 value; } view_spA4;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
    f32 *var_v1;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 var_a2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;

    m2c_initial_frame.view_sp18.value = M2C_FIELD(D_8006A4FC, f32 *, 0);
    m2c_initial_frame.view_sp20.value = M2C_FIELD(D_8006A4FC, f32 *, 8);
    if (arg0 != NULL) {
        temp_s1 = M2C_FIELD(arg0, void **, 0xDC);
        if (temp_s1 != NULL) {
            temp_v0 = func_8021E37C(4);
            if (temp_v0 != NULL) {
                m2c_initial_frame.view_sp1C.value = M2C_FIELD(arg0, f32 *, 0xD8);
                temp_v0_2 = func_80296738(0x1A);
                D_8002C1B0 = temp_v0_2;
                if (temp_v0_2 != NULL) {
                    temp_fa0 = M2C_FIELD(temp_s1, f32 *, 0);
                    temp_fv0 = M2C_FIELD(temp_s1, f32 *, 8);
                    m2c_initial_frame.view_sp68.value = func_8011B7E0(sqrtf((temp_fa0 * temp_fa0) + (temp_fv0 * temp_fv0)), -M2C_FIELD(temp_s1, f32 *, 4));
                    m2c_initial_frame.view_sp6C.value = func_8011B7E0(-M2C_FIELD(temp_s1, f32 *, 0), -M2C_FIELD(temp_s1, f32 *, 8));
                    m2c_initial_frame.view_sp70.value = 0;
                    func_8025DAB8(&m2c_initial_frame.view_sp68.value, &m2c_initial_frame.view_sp38.value);
                    temp_fv0f = *(f32 *)0x215DE8;
                    temp_fv1 = *(f32 *)0x215DEC;
                    temp_fv0_2 = -temp_fv0f;
                    m2c_initial_frame.view_sp78.value = temp_fv0_2;
                    m2c_initial_frame.view_sp80.value = temp_fv0_2;
                    m2c_initial_frame.view_sp84.value = temp_fv0f;
                    m2c_initial_frame.view_sp8C.value = temp_fv0_2;
                    m2c_initial_frame.view_sp90.value = temp_fv0f;
                    m2c_initial_frame.view_sp98.value = M2C_BITWISE(f64, temp_fv0_2);
                    m2c_initial_frame.view_spA4.value = temp_fv0f;
                    m2c_initial_frame.view_sp18.value -= M2C_FIELD(temp_s1, f32 *, 0) * temp_fv1;
                    m2c_initial_frame.view_sp1C.value -= M2C_FIELD(temp_s1, f32 *, 4) * temp_fv1;
                    var_a2 = 0;
                    var_a0 = temp_v0;
                    var_v1 = &m2c_initial_frame.view_sp78.value;
                    m2c_initial_frame.view_sp20.value -= M2C_FIELD(temp_s1, f32 *, 8) * temp_fv1;
                    do {
                        temp_fv1f = (M2C_FIELD(var_v1, f32 *, 0) * m2c_initial_frame.view_sp38.value) + (M2C_FIELD(var_v1, f32 *, 8) * m2c_initial_frame.view_sp40.value) + m2c_initial_frame.view_sp18.value;
                        m2c_initial_frame.view_sp28.value = temp_fv1f;
                        m2c_initial_frame.view_sp2C.value = (M2C_FIELD(var_v1, f32 *, 0) * m2c_initial_frame.view_sp44.value) + (M2C_FIELD(var_v1, f32 *, 8) * m2c_initial_frame.view_sp4C.value) + m2c_initial_frame.view_sp1C.value;
                        m2c_initial_frame.view_sp30.value = (M2C_FIELD(var_v1, f32 *, 0) * m2c_initial_frame.view_sp50.value) + (M2C_FIELD(var_v1, f32 *, 8) * m2c_initial_frame.view_sp58.value) + m2c_initial_frame.view_sp20.value;
                        M2C_FIELD(var_a0, s16 *, 0) = (s16) (s32) (temp_fv1f - M2C_FIELD(D_8005EA2C, f32 *, 0));
                        M2C_FIELD(var_a0, s16 *, 2) = (s16) (s32) (m2c_initial_frame.view_sp2C.value - M2C_FIELD(D_8005EA2C, f32 *, 4));
                        var_a2 += 1;
                        var_v1 += 0xC;
                        M2C_FIELD(var_a0, s16 *, 4) = (s16) (s32) (m2c_initial_frame.view_sp30.value - M2C_FIELD(D_8005EA2C, f32 *, 8));
                        var_a0 += 0x10;
                    } while (var_a2 < 4);
                    M2C_FIELD(temp_v0, s16 *, 6) = 0;
                    M2C_FIELD(temp_v0, s16 *, 0xA) = 0;
                    M2C_FIELD(temp_v0, s16 *, 8) = 0;
                    M2C_FIELD(temp_v0, s32 *, 0xC) = -0x80;
                    M2C_FIELD(temp_v0, s16 *, 0x16) = 0;
                    M2C_FIELD(temp_v0, s16 *, 0x1A) = 0;
                    M2C_FIELD(temp_v0, s32 *, 0x1C) = -0x80;
                    M2C_FIELD(temp_v0, s16 *, 0x26) = 0;
                    M2C_FIELD(temp_v0, s16 *, 0x18) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 4) << 6);
                    M2C_FIELD(temp_v0, s16 *, 0x28) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 4) << 6);
                    M2C_FIELD(temp_v0, s32 *, 0x2C) = -0x80;
                    M2C_FIELD(temp_v0, s16 *, 0x36) = 0;
                    M2C_FIELD(temp_v0, s16 *, 0x38) = 0;
                    M2C_FIELD(temp_v0, s16 *, 0x2A) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 5) << 6);
                    M2C_FIELD(temp_v0, s32 *, 0x3C) = -0x80;
                    M2C_FIELD(temp_v0, s16 *, 0x3A) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 5) << 6);
                    if (D_8002C1B0 != NULL) {
                        func_8021E81C(temp_v0, 0, 0, 4, 0, D_8002C1B0);
                    }
                }
            }
        }
    }
}

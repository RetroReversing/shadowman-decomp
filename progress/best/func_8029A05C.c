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

void *func_8021E37C(M2C_UNK);                       /* extern */
M2C_UNK func_8021E81C(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_8025DAB8(void *, f32 *);               /* extern */
void *func_80296738(s32);                           /* extern */
M2C_UNK func_8029A314(M2C_UNK, void *, u32);        /* extern */
extern void *D_8002C1B0;
extern void *D_8005EA2C;
extern M2C_UNK D_8007DB78;

void func_8029A05C(void *arg0) {
    union {
        unsigned char bytes[112];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
        struct { unsigned char pad[12]; f32 value; } view_sp24;
        struct { unsigned char pad[20]; f32 value; } view_sp2C;
        struct { unsigned char pad[24]; f32 value; } view_sp30;
        struct { unsigned char pad[32]; f32 value; } view_sp38;
        struct { unsigned char pad[36]; f32 value; } view_sp3C;
        struct { unsigned char pad[44]; f32 value; } view_sp44;
        struct { unsigned char pad[48]; f32 value; } view_sp48;
        struct { unsigned char pad[52]; f32 value; } view_sp4C;
        struct { unsigned char pad[56]; f32 value; } view_sp50;
        struct { unsigned char pad[64]; f32 value; } view_sp58;
        struct { unsigned char pad[72]; f32 value; } view_sp60;
        struct { unsigned char pad[76]; f32 value; } view_sp64;
        struct { unsigned char pad[84]; f32 value; } view_sp6C;
        struct { unsigned char pad[88]; f32 value; } view_sp70;
        struct { unsigned char pad[96]; f32 value; } view_sp78;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
             
             
    f32 *var_v1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1f;
    u32 var_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;

    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + *(f32 *)0x215A8C);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x58) + (M2C_FIELD(arg0, f32 *, 0x5C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14));
    temp_fv0f = (f32) ((s32) M2C_FIELD(arg0, f32 *, 0x50) - 1);
    M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0;
    if (temp_fv0f < temp_fv0) {
        M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0f;
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
    temp_v0 = func_80296738(M2C_FIELD(arg0, s32 *, 0x6C));
    D_8002C1B0 = temp_v0;
    if ((temp_v0 != NULL) && (temp_v0_2 = func_8021E37C(4), (temp_v0_2 != NULL))) {
        func_8025DAB8(arg0 + 0x24, &m2c_initial_frame.view_sp58.value);
        var_a2 = 0;
        var_a0 = temp_v0_2;
        temp_fv0_2 = -M2C_FIELD(arg0, f32 *, 0x4C);
        m2c_initial_frame.view_sp2C.value = temp_fv0_2;
        m2c_initial_frame.view_sp20.value = temp_fv0_2;
        temp_fv0_3 = M2C_FIELD(arg0, f32 *, 0x4C);
        m2c_initial_frame.view_sp44.value = temp_fv0_3;
        m2c_initial_frame.view_sp38.value = temp_fv0_3;
        temp_fv0_4 = -M2C_FIELD(arg0, f32 *, 0x4C);
        m2c_initial_frame.view_sp3C.value = temp_fv0_4;
        m2c_initial_frame.view_sp18.value = temp_fv0_4;
        temp_fv0_5 = M2C_FIELD(arg0, f32 *, 0x4C);
        var_v1 = &m2c_initial_frame.view_sp18.value;
        m2c_initial_frame.view_sp30.value = temp_fv0_5;
        m2c_initial_frame.view_sp24.value = temp_fv0_5;
        do {
            temp_fv1f = (M2C_FIELD(var_v1, f32 *, 0) * m2c_initial_frame.view_sp58.value) + (M2C_FIELD(var_v1, f32 *, 8) * m2c_initial_frame.view_sp60.value) + M2C_FIELD(arg0, f32 *, 0);
            m2c_initial_frame.view_sp48.value = temp_fv1f;
            m2c_initial_frame.view_sp4C.value = (M2C_FIELD(var_v1, f32 *, 0) * m2c_initial_frame.view_sp64.value) + (M2C_FIELD(var_v1, f32 *, 8) * m2c_initial_frame.view_sp6C.value) + M2C_FIELD(arg0, f32 *, 4);
            m2c_initial_frame.view_sp50.value = (M2C_FIELD(var_v1, f32 *, 0) * m2c_initial_frame.view_sp70.value) + (M2C_FIELD(var_v1, f32 *, 8) * m2c_initial_frame.view_sp78.value) + M2C_FIELD(arg0, f32 *, 8);
            M2C_FIELD(var_a0, s16 *, 0) = (s16) (s32) (temp_fv1f - M2C_FIELD(D_8005EA2C, f32 *, 0));
            M2C_FIELD(var_a0, s16 *, 2) = (s16) (s32) (m2c_initial_frame.view_sp4C.value - M2C_FIELD(D_8005EA2C, f32 *, 4));
            var_a2 += 1;
            var_v1 += 0xC;
            M2C_FIELD(var_a0, s16 *, 4) = (s16) (s32) (m2c_initial_frame.view_sp50.value - M2C_FIELD(D_8005EA2C, f32 *, 8));
            var_a0 += 0x10;
        } while (var_a2 < 4U);
        M2C_FIELD(temp_v0_2, s16 *, 6) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0xA) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 8) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0xC) = -0x80;
        M2C_FIELD(temp_v0_2, s16 *, 0x16) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0x1A) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = -0x80;
        M2C_FIELD(temp_v0_2, s16 *, 0x26) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0x18) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 0x34) << 6);
        temp_fv0f_2 = *(f32 *)0x215A90;
        M2C_FIELD(temp_v0_2, s16 *, 0x28) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 0x34) << 6);
        M2C_FIELD(temp_v0_2, s32 *, 0x2C) = -0x80;
        M2C_FIELD(temp_v0_2, s16 *, 0x36) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0x38) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0x2A) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 0x35) << 6);
        M2C_FIELD(temp_v0_2, s32 *, 0x3C) = -0x80;
        M2C_FIELD(temp_v0_2, s16 *, 0x3A) = (s16) (M2C_FIELD(D_8002C1B0, u8 *, 0x35) << 6);
        temp_fv0_6 = M2C_FIELD(arg0, f32 *, 0x58);
        if (temp_fv0f_2 <= temp_fv0_6) {
            if (D_8002C1B0 != NULL) {
                func_8021E81C(temp_v0_2, 0, 0, 4, 0, D_8002C1B0 + (((s32) (temp_fv0_6 - temp_fv0f_2) | 0x80000000) * 0x10));
            }
        } else {
            func_8029A314(-0x80, D_8005EA2C, var_a2);
        }
    }
}

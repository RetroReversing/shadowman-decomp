/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (((struct { __typeof__(*(type_ptr)0) v; } *)((s8 *)(expr) + (offset)))->v)
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8029BC3C(f32 *, f64 *, M2C_UNK, f32, f32, s32, f32, f32, s32); /* extern */
M2C_UNK func_802A5D00(void *, f32 *);               /* extern */
M2C_UNK func_802A6448(void *);                      /* extern */
M2C_UNK func_802A6808();                            /* extern */
M2C_UNK func_802A92F4();                            /* extern */
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x88, 0x8c, 0x90, 0x94, 0xa0, 0xa4, 0xb0, 0xb4], gap at: 0x98. */
void func_802A9170(void *arg0) {
    union {
        unsigned char bytes[96];
        struct { f32 value; } view_sp28;
        struct { unsigned char pad[4]; f32 value; } view_sp2C;
        struct { unsigned char pad[8]; f32 value; } view_sp30;
        struct { unsigned char pad[16]; f32 value; } view_sp38;
        struct { unsigned char pad[20]; f32 value; } view_sp3C;
        struct { unsigned char pad[24]; f32 value; } view_sp40;
        struct { unsigned char pad[32]; f32 value; } view_sp48;
        struct { unsigned char pad[36]; f32 value; } view_sp4C;
        struct { unsigned char pad[40]; f32 value; } view_sp50;
        struct { unsigned char pad[48]; f32 value; } view_sp58;
        struct { unsigned char pad[52]; f32 value; } view_sp5C;
        struct { unsigned char pad[56]; f32 value; } view_sp60;
        struct { unsigned char pad[60]; f32 value; } view_sp64;
        struct { unsigned char pad[64]; f32 value; } view_sp68;
        struct { unsigned char pad[68]; f32 value; } view_sp6C;
        struct { unsigned char pad[72]; f32 value; } view_sp70;
        struct { unsigned char pad[76]; f32 value; } view_sp74;
        struct { unsigned char pad[80]; f32 value; } view_sp78;
    } m2c_initial_frame;

             
             
             
                                                    /* compiler-managed */
             
             
             
             
             
             
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    u32 var_s1;

    func_802A6808();
    if (M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8)), u8 *, 0x33) & 1) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) - (M2C_FIELD(&D_8007DB88, f32 *, 4) * *(f32 *)0x2163D0));
    }
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x60) + (M2C_FIELD(&D_8007DB88, f32 *, 4) * *(f32 *)0x2163D4);
    M2C_FIELD(arg0, f32 *, 0x60) = temp_fv0;
    if (*(f32 *)0x2163D8 < temp_fv0) {
        M2C_FIELD(arg0, f32 *, 0x60) = 0.0f;
    }
    func_802A5D00(arg0 + 0x6C, &m2c_initial_frame.view_sp58.value);
    m2c_initial_frame.view_sp38.value = M2C_FIELD(arg0, f32 *, 0x6C);
    m2c_initial_frame.view_sp3C.value = M2C_FIELD(arg0, f32 *, 0x70);
    m2c_initial_frame.view_sp40.value = M2C_FIELD(arg0, f32 *, 0x74);
    temp_fv0f = *(f32 *)0x2163DC;
    var_s1 = 0;
    temp_fs1 = *(f32 *)0x2163E0;
    temp_fs0f = *(f32 *)0x2163E4;
    m2c_initial_frame.view_sp38.value = M2C_BITWISE(f64, (m2c_initial_frame.view_sp3C.value * temp_fv0f));
    m2c_initial_frame.view_sp40.value *= temp_fv0f;
loop_5:
    m2c_initial_frame.view_sp28.value = func_8022EBE8(*(f32 *)0x2163E8);
    m2c_initial_frame.view_sp2C.value = func_8022EBE8(*(f32 *)0x2163EC);
    m2c_initial_frame.view_sp30.value = func_8022EBE8(*(f32 *)0x2163F0) + *(f32 *)0x2163F4;
    if (m2c_initial_frame.view_sp28.value < 0.0f) {
        func_802A92F4();
        return;
    }
    if (m2c_initial_frame.view_sp28.value > 0.0f) {
        m2c_initial_frame.view_sp28.value += temp_fs1;
    }
    temp_ft1f = M2C_FIELD(&m2c_initial_frame.view_sp28.value, f32 *, 4);
    temp_ft1 = M2C_FIELD(&m2c_initial_frame.view_sp28.value, f32 *, 8);
    temp_fv1 = (m2c_initial_frame.view_sp28.value * m2c_initial_frame.view_sp58.value) + (temp_ft1f * m2c_initial_frame.view_sp5C.value) + (temp_ft1 * m2c_initial_frame.view_sp60.value);
    temp_fv0f_2 = (m2c_initial_frame.view_sp28.value * m2c_initial_frame.view_sp64.value) + (temp_ft1f * m2c_initial_frame.view_sp68.value) + (temp_ft1 * m2c_initial_frame.view_sp6C.value);
    temp_fv1f = (m2c_initial_frame.view_sp28.value * m2c_initial_frame.view_sp70.value) + (temp_ft1f * m2c_initial_frame.view_sp74.value) + (temp_ft1 * m2c_initial_frame.view_sp78.value);
    m2c_initial_frame.view_sp48.value = temp_fv1;
    m2c_initial_frame.view_sp4C.value = temp_fv0f_2;
    m2c_initial_frame.view_sp50.value = temp_fv1f;
    m2c_initial_frame.view_sp48.value = temp_fv1 + M2C_FIELD(arg0, f32 *, 0x54);
    m2c_initial_frame.view_sp4C.value = temp_fv0f_2 + M2C_FIELD(arg0, f32 *, 0x58);
    var_s1 += 1;
    m2c_initial_frame.view_sp50.value = temp_fv1f + M2C_FIELD(arg0, f32 *, 0x5C);
    temp_fs0 = func_8022EC3C(temp_fs0f) + temp_fs0f;
    func_8029BC3C(&m2c_initial_frame.view_sp48.value, &m2c_initial_frame.view_sp38.value, 0x3F75C28F, temp_fs0, func_8022EC3C(*(f32 *)0x2163F8) + *(f32 *)0x2163FC, 7, *(f32 *)0x216400, *(f32 *)0x216404, 1);
    if (var_s1 >= 3U) {
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(&D_8007DB88, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0_2;
        if (temp_fv0_2 <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
        }
        if (M2C_FIELD(arg0, f32 *, 0x30) <= 0.0f) {
            func_802A6448(arg0);
        }
        return;
    }
    goto loop_5;
}

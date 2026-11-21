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

M2C_UNK func_80234780();                            /* extern */
M2C_UNK func_80239AEC(void *, void *);              /* extern */
M2C_UNK func_80239D9C(void *, void *);              /* extern */
extern void *D_8005EA2C;

void func_80233F78(void *arg0) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
    } m2c_initial_frame;

             
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;

    temp_fv1 = *(f32 *)0x2022F4;
    temp_s2 = arg0 + 0x18;
    temp_s1 = arg0 + 0x3C;
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x100) * (*(f32 *)0x2022F4);
    D_8005EA2C = arg0;
    M2C_FIELD(arg0, f32 *, 0xCC) = M2C_BITWISE(f64, temp_fv0);
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) -temp_fv0;
    temp_fv0_2 = (M2C_FIELD(arg0, f32 *, 0xFC) * (*(f32 *)0x2022F4)) / M2C_FIELD(arg0, f32 *, 0xD0);
    M2C_FIELD(arg0, f32 *, 0xDC) = temp_fv0_2;
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) (*(f32 *)0x2022F8 / temp_fv0_2);
    func_80239D9C(temp_s2, temp_s1);
    temp_s2_2 = arg0 + 0x6C;
    func_80239AEC(temp_s2, temp_s2_2);
    temp_fv1f = M2C_FIELD(arg0, f32 *, 0);
    temp_ft1 = M2C_FIELD(arg0, f32 *, 4);
    temp_ft0f = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 4) = (f32) ((temp_fv1f * M2C_FIELD(temp_s1, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_s1, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_s1, f32 *, 0x14)));
    temp_ft0 = (temp_fv1f * M2C_FIELD(arg0, f32 *, 0x3C)) + (temp_ft1 * M2C_FIELD(temp_s1, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_s1, f32 *, 8));
    M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 8) = (f32) ((temp_fv1f * M2C_FIELD(temp_s1, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_s1, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_s1, f32 *, 0x20)));
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) -temp_ft0;
    m2c_initial_frame.view_sp10.value = temp_ft0;
    temp_fv1f_2 = M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) -m2c_initial_frame.view_sp14.value;
    temp_ft1_2 = M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) -m2c_initial_frame.view_sp18.value;
    temp_ft0f_2 = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 4) = (f32) ((temp_fv1f_2 * M2C_FIELD(temp_s2_2, f32 *, 0xC)) + (temp_ft1_2 * M2C_FIELD(temp_s2_2, f32 *, 0x10)) + (temp_ft0f_2 * M2C_FIELD(temp_s2_2, f32 *, 0x14)));
    temp_ft0_2 = (temp_fv1f_2 * M2C_FIELD(arg0, f32 *, 0x6C)) + (temp_ft1_2 * M2C_FIELD(temp_s2_2, f32 *, 4)) + (temp_ft0f_2 * M2C_FIELD(temp_s2_2, f32 *, 8));
    m2c_initial_frame.view_sp10.value = temp_ft0_2;
    M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 8) = (f32) ((temp_fv1f_2 * M2C_FIELD(temp_s2_2, f32 *, 0x18)) + (temp_ft1_2 * M2C_FIELD(temp_s2_2, f32 *, 0x1C)) + (temp_ft0f_2 * M2C_FIELD(temp_s2_2, f32 *, 0x20)));
    temp_fv0_3 = M2C_BITWISE(f32, M2C_FIELD(arg0, f64 *, 0xCC));
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) -temp_ft0_2;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) -m2c_initial_frame.view_sp14.value;
    temp_fv0_4 = M2C_FIELD(arg0, f32 *, 0xD4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) -m2c_initial_frame.view_sp18.value;
    M2C_FIELD(arg0, f64 *, 0x9C) = M2C_BITWISE(f64, (M2C_FIELD(arg0, f32 *, 0x40) * temp_fv0_3));
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) * temp_fv0_3);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0x60) * M2C_BITWISE(f32, M2C_FIELD(arg0, f64 *, 0xCC)));
    M2C_FIELD(arg0, f64 *, 0xA8) = M2C_BITWISE(f64, (M2C_FIELD(arg0, f32 *, 0x4C) * temp_fv0_4));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) * temp_fv0_4);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0x64) * M2C_FIELD(arg0, f32 *, 0xD4));
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    func_80234780();
}

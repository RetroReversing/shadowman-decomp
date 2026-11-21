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

f32 func_8011BA50(f32, f32, s16);                   /* extern */
M2C_UNK func_802398C8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_802399E4(f32);                         /* extern */
M2C_UNK func_80239A3C(f32);                         /* extern */
M2C_UNK func_8023A0DC(f32, f32, s32, f32 *, M2C_UNK *); /* extern */
extern M2C_UNK D_8002D360;
extern M2C_UNK D_8002D390;
extern s32 D_80030E40;
extern M2C_UNK D_800453D8;
extern f32 D_80074BC0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BE68;
extern M2C_UNK D_8007BEB8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x58, 0x5c, 0x60, 0x64, 0x70, 0x74, 0x80, 0x84], gap at: 0x68. */
void func_802673F0(void *arg0) {
    union {
        unsigned char bytes[64];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
        struct { unsigned char pad[16]; M2C_UNK value; } view_sp28;
    } m2c_initial_frame;

             
                 
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1f;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 var_ft1;
    void *temp_s1;

    temp_fs1 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_fs1f = M2C_FIELD(arg0, f32 *, 0x10);
    temp_s1 = (M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30);
    temp_fs0f = M2C_FIELD(arg0, f32 *, 0x14);
    temp_fs0 = func_8011BA50(M2C_FIELD(temp_s1, f32 *, 0x24), D_80074BC0, M2C_FIELD(&D_80075518, s16 *, 4));
    func_802399E4(M2C_FIELD(&D_80075568, f32 *, 0x18));
    func_80239A3C(M2C_FIELD(&D_80075568, f32 *, 0x1C));
    func_802398C8(&D_8002D390, &D_8002D360, &m2c_initial_frame.view_sp28.value);
    func_8023A0DC(M2C_FIELD(temp_s1, f32 *, 0xC), M2C_FIELD(temp_s1, f32 *, 0x10), M2C_FIELD(temp_s1, s32 *, 0x14), &m2c_initial_frame.view_sp18.value, &m2c_initial_frame.view_sp28.value);
    temp_fv1f = M2C_FIELD(temp_s1, f32 *, 0x24);
    temp_fv0f = *(f32 *)0x20DF28;
    var_ft1 = temp_fv0f;
    if (temp_fv1f != temp_fv0f) {
        var_ft1 = (temp_fv1f * (temp_fv0f - temp_fs0)) / (temp_fv0f - temp_fv1f);
    }
    D_80030E40 = 0;
    temp_fs1_2 = (temp_fs1 * temp_fs0) + (var_ft1 * m2c_initial_frame.view_sp18.value);
    M2C_FIELD(arg0, f32 *, 0xC) = temp_fs1_2;
    temp_fv1 = temp_fs1_2 * D_80074BC0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_fs1f * temp_fs0) + (var_ft1 * m2c_initial_frame.view_sp1C.value));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_fs0f * temp_fs0) + (var_ft1 * m2c_initial_frame.view_sp20.value));
    M2C_FIELD(&D_800453D8, f32 *, 0x1C) = temp_fv1;
    temp_ft0 = M2C_FIELD(arg0, f32 *, 0x10) * D_80074BC0;
    temp_fv0 = *(f32 *)0x20DF2C;
    temp_fv1f_2 = M2C_FIELD(&D_8007BE68, f32 *, 0) * temp_fv0;
    temp_ft0f = M2C_FIELD(&D_8007BE68, f32 *, 4) * temp_fv0;
    temp_fv0f_2 = M2C_FIELD(&D_8007BE68, f32 *, 8) * temp_fv0;
    M2C_FIELD(&D_800453D8, f32 *, 0x20) = temp_ft0;
    temp_fv1_2 = temp_fv1 + temp_fv1f_2;
    temp_ft0_2 = temp_ft0 + temp_ft0f;
    M2C_FIELD(&D_8007BE68, f32 *, 0) = temp_fv1f_2;
    M2C_FIELD(&D_8007BE68, f32 *, 4) = temp_ft0f;
    M2C_FIELD(&D_8007BE68, f32 *, 8) = temp_fv0f_2;
    temp_ft1 = M2C_FIELD(arg0, f32 *, 0x14) * D_80074BC0;
    M2C_FIELD(&D_800453D8, f32 *, 0x1C) = temp_fv1_2;
    M2C_FIELD(&D_800453D8, f32 *, 0x1C) = (f32) (temp_fv1_2 + M2C_FIELD(&D_8007BEB8, f32 *, 0));
    M2C_FIELD(&D_8007BEB8, f32 *, 0) = 0.0f;
    temp_fv1_3 = M2C_FIELD(&D_8007BEB8, f32 *, 8);
    temp_fv0_2 = temp_ft0_2 + M2C_FIELD(&D_8007BEB8, f32 *, 4);
    M2C_FIELD(&D_8007BEB8, f32 *, 4) = 0.0f;
    M2C_FIELD(&D_8007BEB8, f32 *, 8) = 0.0f;
    temp_fv0f_3 = temp_ft1 + temp_fv0f_2;
    M2C_FIELD(&D_800453D8, f32 *, 0x20) = temp_ft0_2;
    M2C_FIELD(&D_800453D8, f32 *, 0x24) = temp_ft1;
    M2C_FIELD(&D_800453D8, f32 *, 0x20) = temp_fv0_2;
    M2C_FIELD(&D_800453D8, f32 *, 0x24) = temp_fv0f_3;
    M2C_FIELD(&D_800453D8, f32 *, 0x24) = (f32) (temp_fv0f_3 + temp_fv1_3);
}

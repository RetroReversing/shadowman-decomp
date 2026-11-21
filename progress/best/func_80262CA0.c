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

M2C_UNK func_80233E50(M2C_UNK *, M2C_UNK, M2C_UNK, f32, f32, f32, f32); /* extern */
M2C_UNK func_80263C5C(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8002C0F0;
extern u16 D_8002C110;
extern u16 D_8002C112;
extern M2C_UNK D_80030C60;
extern M2C_UNK D_80030D38;
extern M2C_UNK D_80074E68;
extern M2C_UNK D_80074F70;
extern M2C_UNK D_80075078;
extern M2C_UNK D_800751C8;
extern M2C_UNK D_800752D8;
extern s32 D_800753E4;
extern M2C_UNK D_800753E8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x30. */
void func_80262CA0(void) {
    M2C_UNK *var_v1;
    f32 temp_fs0f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 var_a0;

    func_80263C5C(&D_80030C60);
    temp_fs0f = *(f32 *)0x20DD30;
    func_80233E50(&D_80074F70, 0, 0, (f32) D_8002C110, (f32) D_8002C112, M2C_FIELD(&D_8002C0F0, f32 *, 4), temp_fs0f);
    func_80233E50(&D_800752D8, 0, 0, (f32) D_8002C110, (f32) D_8002C112, M2C_FIELD(&D_8002C0F0, f32 *, 4), temp_fs0f);
    func_80233E50(&D_800751C8, 0, 0, (f32) D_8002C110, (f32) D_8002C112, M2C_FIELD(&D_8002C0F0, f32 *, 4), temp_fs0f);
    func_80233E50(&D_800753E8, 0, 0, (f32) D_8002C110, (f32) D_8002C112, M2C_FIELD(&D_8002C0F0, f32 *, 4), temp_fs0f);
    func_80233E50(&D_80075078, 0, 0, (f32) D_8002C110, (f32) D_8002C112, M2C_FIELD(&D_8002C0F0, f32 *, 4), temp_fs0f);
    func_80233E50(&D_80074E68, 0, 0, (f32) D_8002C110, (f32) D_8002C112, M2C_FIELD(&D_8002C0F0, f32 *, 4), temp_fs0f);
    var_a0 = 0;
    var_v1 = &D_80030D38;
    D_800753E4 = 0;
    do {
        temp_fv0f = M2C_FIELD(var_v1, f32 *, 0);
        temp_fv1 = M2C_FIELD(var_v1, f32 *, 4);
        temp_fv0 = M2C_FIELD(var_v1, f32 *, 8);
        var_a0 += 1;
        M2C_FIELD(var_v1, f32 *, 0x18) = (f32) (sqrtf((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0)) + *(f32 *)0x20DD34);
        var_v1 += 0x1C;
    } while (var_a0 < 9);
}

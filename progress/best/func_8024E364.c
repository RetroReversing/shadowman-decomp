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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern f64 D_80045440;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BEA8;

void func_8024E364(void *arg0) {
    M2C_UNK *__base_D_80075568;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    __base_D_80075568 = &D_80075568;
    temp_fv0f = M2C_FIELD(temp_v1, f32 *, 0x24) - M2C_FIELD(__base_D_80075568, f32 *, 0x24);
    temp_fv0 = M2C_FIELD(temp_v1, f32 *, 0x2C) - M2C_FIELD(__base_D_80075568, f32 *, 0x2C);
    temp_fv0_2 = *(f32 *)0x203088;
    D_80045440 = M2C_BITWISE(f64, temp_fv0_2);
    if ((((temp_fv0f * temp_fv0f) + (temp_fv0 * temp_fv0)) - *(f32 *)0x203084) < temp_fv0_2) {

    }
    M2C_FIELD(&D_8007BEA8, f32 *, 0) = (f32) M2C_FIELD(temp_v1, f32 *, 0x24);
    M2C_FIELD(&D_8007BEA8, s32 *, 4) = (s32) M2C_FIELD(temp_v1, s32 *, 0x28);
    M2C_FIELD(&D_8007BEA8, f32 *, 8) = (f32) M2C_FIELD(temp_v1, f32 *, 0x2C);
    func_80109318(-1, (s8 *) __base_D_80075568 + 0x24, 0);
    func_8023DF7C(__base_D_80075568, &D_80075518, 0x3A, 0xA, 0x32, 2);
}

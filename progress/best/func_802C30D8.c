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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802C3220(M2C_UNK *, M2C_UNK *);        /* extern */
extern s16 D_80044EC6;
extern f32 D_80045418;
extern u16 D_8004541C;
extern s32 D_800458B0;
extern f32 D_80074BC0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BDB8;
extern M2C_UNK D_8007BED8;

void func_802C30D8(void) {
    M2C_UNK *__base_D_80075568;
    f32 temp_ft0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    M2C_UNK *__base_D_80075518;

    __base_D_80075518 = &D_80075518;

    if (D_80044EC6 == 0) {
        __base_D_80075568 = &D_80075568;
        if (M2C_FIELD(__base_D_80075568, f32 *, 0x10) <= *(f32 *)0x2183BC) {
            M2C_FIELD(M2C_FIELD(__base_D_80075518, void **, 0x30), s32 *, 0x410) = 0;
            M2C_FIELD(M2C_FIELD(__base_D_80075518, void **, 0x30), s32 *, 0x40C) = 0;
            func_8023DF7C(__base_D_80075568, __base_D_80075518, 0x12, 0xA, 0x28, 2);
        }
        if ((D_8004541C != 0) && (M2C_FIELD(__base_D_80075518, s16 *, 0x2E) >= 0x29)) {
            func_802C3220(__base_D_80075568, __base_D_80075518);
        }
    } else if ((M2C_FIELD(__base_D_80075518, s16 *, 0x2E) >= 0x29) || (*(f32 *)0x2183C0 < D_80045418)) {
        temp_fv0f = M2C_FIELD(&D_8007BDB8, f32 *, 0) - M2C_FIELD(__base_D_80075568, f32 *, 0x24);
        temp_ft0 = M2C_FIELD(&D_8007BDB8, f32 *, 4) - M2C_FIELD(__base_D_80075568, f32 *, 0x28);
        temp_fv1f = M2C_FIELD(&D_8007BDB8, f32 *, 8) - M2C_FIELD(__base_D_80075568, f32 *, 0x2C);
        if (((temp_fv0f * temp_fv0f) + (temp_ft0 * temp_ft0) + (temp_fv1f * temp_fv1f)) < (D_80074BC0 * *(f32 *)0x2183C4)) {
            func_8023DF7C(__base_D_80075568, __base_D_80075518, 0, 0xA, 0x28, 2);
            D_800458B0 = 2;
            M2C_FIELD(&D_8007BED8, f32 *, 0) = (f32) M2C_FIELD(__base_D_80075568, f32 *, 0x24);
            M2C_FIELD(&D_8007BED8, f32 *, 4) = (f32) M2C_FIELD(__base_D_80075568, f32 *, 0x28);
            M2C_FIELD(&D_8007BED8, f32 *, 8) = (f32) M2C_FIELD(__base_D_80075568, f32 *, 0x2C);
        }
    }
}

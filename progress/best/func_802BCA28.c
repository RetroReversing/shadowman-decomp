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

extern int D_80052774;
extern char D_80052770[];
extern char D_80075518[];
extern void *D_8007555C;
extern s32 D_8007BDF0;
extern s32 D_8007BE2C;

void func_802BCA28(void) {
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    int *__base_D_80052774;

    __base_D_80052774 = &D_80052774;

    if ((D_8007BDF0 == 0) || (D_8007BDF0 != D_8007BE2C)) {
        temp_v0 = M2C_FIELD(D_80075518, void **, 0x44) + 0xC0;
        temp_fv0f = M2C_FIELD(temp_v0, f32 *, 0x2C);
        if (temp_fv0f != 0.0f) {
            M2C_FIELD(temp_v0, f32 *, 0x2C) = (f32) (temp_fv0f - (temp_fv0f * *(f32 *)0x218074));
            temp_v0_2 = M2C_FIELD(D_80075518, void **, 0x44) + 0xC0;
            if (fabsf(M2C_FIELD(temp_v0_2, f32 *, 0x2C)) < *(f32 *)0x218078) {
                M2C_FIELD(temp_v0_2, f32 *, 0x2C) = 0.0f;
                M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xE0) = 0.0f;
                M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xE4) = 0.0f;
                M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xE8) = 0.0f;
            }
        }
    } else {
        var_v1 = 0;
        if ((*__base_D_80052774) > 0) {
            do {
                temp_v0_3 = M2C_FIELD(D_80075518, void **, 0x44) + 0xC0;
                temp_fv0f_2 = M2C_FIELD(temp_v0_3, f32 *, 0x2C);
                var_v1 += 1;
                M2C_FIELD(temp_v0_3, f32 *, 0x2C) = (f32) (temp_fv0f_2 + ((*(f32 *)0x21807C - temp_fv0f_2) * *(f32 *)0x218080));
            } while (var_v1 < (*__base_D_80052774));
        }
        temp_v0_4 = (4 * 0x30) + D_8007555C;
        M2C_FIELD(temp_v0_4, s32 *, 0x20) = (s32) M2C_FIELD(D_8007555C, s32 *, 0x110);
        M2C_FIELD(temp_v0_4, s32 *, 0x24) = (s32) M2C_FIELD(D_8007555C, s32 *, 0x114);
        M2C_FIELD(temp_v0_4, s32 *, 0x28) = (s32) M2C_FIELD(D_8007555C, s32 *, 0x118);
    }
}

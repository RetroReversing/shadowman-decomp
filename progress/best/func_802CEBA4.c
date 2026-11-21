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

extern float D_8007558C;
extern float D_80075590;
extern float D_80075594;
void *func_8025BA08();
extern char D_203AEC[];
extern char D_80075568[];

typedef struct { float field_0; float field_4; float field_8; unsigned char pad_C[24]; float field_24; float field_28; float field_2C; } __repair_record_temp_a1;
void func_802CEBA4(void *arg0) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    s32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    void *temp_a1;
    void *temp_v0;

    if (M2C_FIELD(arg0, s16 *, 0x14) == 0x24) {
        temp_a1 = M2C_FIELD(arg0, void **, 8);
        temp_fv0f = ((__repair_record_temp_a1*)temp_a1)->field_24 - D_8007558C;
        temp_fv1f = ((__repair_record_temp_a1*)temp_a1)->field_28 - D_80075590;
        temp_fv0 = ((__repair_record_temp_a1*)temp_a1)->field_2C - D_80075594;
        temp_v0 = temp_a1 + 0x34;
        if (((temp_fv0f * temp_fv0f) + (temp_fv1f * temp_fv1f) + (temp_fv0 * temp_fv0)) < *(f32 *)0x218848) {
            temp_fv1f_2 = *(f32 *)0x21884C;
            temp_ft0 = *(f32 *)0x218850;
            sp28 = 0;
            sp2C = temp_fv1f_2;
            sp30 = temp_ft0;
            temp_fv1 = (M2C_FIELD(temp_v0, f32 *, 4) * temp_fv1f_2) + (M2C_FIELD(temp_v0, f32 *, 8) * temp_ft0);
            sp18 = temp_fv1;
            M2C_FIELD(&sp18, f32 *, 4) = (f32) ((M2C_FIELD(temp_v0, f32 *, 0x10) * temp_fv1f_2) + (M2C_FIELD(temp_v0, f32 *, 0x14) * temp_ft0));
            M2C_FIELD(&sp18, f32 *, 8) = (f32) ((M2C_FIELD(temp_v0, f32 *, 0x1C) * temp_fv1f_2) + (M2C_FIELD(temp_v0, f32 *, 0x20) * temp_ft0));
            sp18 = temp_fv1 + ((__repair_record_temp_a1*)temp_a1)->field_0;
            sp1C += ((__repair_record_temp_a1*)temp_a1)->field_4;
            sp20 += ((__repair_record_temp_a1*)temp_a1)->field_8;
            M2C_FIELD(func_8025BA08(&sp18, temp_a1 + 0x18, 5, 0, 0, D_203AEC), void **, 0xC) = (void *) (D_203AEC - 0xDC);
        }
    }
}

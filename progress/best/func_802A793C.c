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

extern u32 D_80036E08;
extern M2C_UNK D_8007BBD0;
extern s32 D_8007BD3C;
extern M2C_UNK D_8007BD50;
extern void *D_8007BD6C;

void func_802A793C(s32 arg0, void *arg1) {
    u32 *__base_D_80036E08;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_v0;
    void *temp_v0_2;

    if (M2C_FIELD(D_8007BD6C, f32 *, 0x30) != 0.0f) {
        temp_fv0f = M2C_FIELD(arg1, f32 *, 0x24) - M2C_FIELD(D_8007BD6C, f32 *, 0x54);
        temp_fv1f = M2C_FIELD(arg1, f32 *, 0x28) - M2C_FIELD(D_8007BD6C, f32 *, 0x58);
        temp_fv1 = M2C_FIELD(arg1, f32 *, 0x2C) - M2C_FIELD(D_8007BD6C, f32 *, 0x5C);
        temp_fv0 = M2C_FIELD(D_8007BD6C, f32 *, 0x24);
        if (((temp_fv0f * temp_fv0f) + (temp_fv1f * temp_fv1f) + (temp_fv1 * temp_fv1)) < (temp_fv0 * temp_fv0)) {
            M2C_FIELD(&D_8007BD50, f32 *, 0) = (f32) M2C_FIELD(D_8007BD6C, f32 *, 0x54);
            M2C_FIELD(&D_8007BD50, f32 *, 4) = (f32) M2C_FIELD(D_8007BD6C, f32 *, 0x58);
            M2C_FIELD(&D_8007BD50, f32 *, 8) = (f32) M2C_FIELD(D_8007BD6C, f32 *, 0x5C);
            D_8007BD3C = 0;
            __base_D_80036E08 = &D_80036E08;
            if ((u32) (*__base_D_80036E08) < 0xAU) {
                *(((*__base_D_80036E08) * 0x24) + &D_8007BBD0) = 2;
                temp_v0 = (void *)(((*__base_D_80036E08) * 0x24)); temp_v0 = (void *)((char *)temp_v0 + (s32)(&D_8007BBD0));
                M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) M2C_FIELD(D_8007BD6C, f32 *, 0x54);
                M2C_FIELD(temp_v0, f32 *, 0x10) = (f32) M2C_FIELD(D_8007BD6C, f32 *, 0x58);
                M2C_FIELD(temp_v0, f32 *, 0x14) = (f32) M2C_FIELD(D_8007BD6C, f32 *, 0x5C);
                temp_v0_2 = ((*__base_D_80036E08) * 0x24) + &D_8007BBD0;
                M2C_FIELD(temp_v0_2, s32 *, 0x1C) = 0;
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = arg0;
                (*__base_D_80036E08) += 1;
            }
        }
    }
}

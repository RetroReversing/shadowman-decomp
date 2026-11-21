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
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BBD0;
extern void *D_8007BD70;

typedef struct { f32 __repair_v[3]; } __repair_vec3;
void func_802A7A58(void *arg0) {
    M2C_UNK *__base_D_80075568;
    M2C_UNK *__base_D_8007BBD0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_v0;

    if (M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), u8 *, 0x30) & 2) {
        __base_D_80075568 = &D_80075568;
        temp_fv0f = M2C_FIELD(__base_D_80075568, f32 *, 0x24) - M2C_FIELD(arg0, f32 *, 0x54);
        temp_fv1f = M2C_FIELD(__base_D_80075568, f32 *, 0x28) - M2C_FIELD(arg0, f32 *, 0x58);
        temp_fv1 = M2C_FIELD(__base_D_80075568, f32 *, 0x2C) - M2C_FIELD(arg0, f32 *, 0x5C);
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x24);
        if ((((temp_fv0f * temp_fv0f) + (temp_fv1f * temp_fv1f) + (temp_fv1 * temp_fv1)) < (temp_fv0 * temp_fv0)) && ((u32) D_80036E08 < 0xAU)) {
            __base_D_8007BBD0 = &D_8007BBD0;
            *((D_80036E08 * 0x24) + __base_D_8007BBD0) = 3;
            temp_v0 = (void *)((D_80036E08 * 0x24)); temp_v0 = (void *)((char *)temp_v0 + (s32)(__base_D_8007BBD0));
            (*(__repair_vec3 *) ((s8 *) (temp_v0) + 0xC)) = (*(__repair_vec3 *) ((s8 *) (arg0) + 0x54));
            M2C_FIELD(((D_80036E08 * 0x24) + __base_D_8007BBD0), s32 *, 0x1C) = 0;
            D_80036E08 += 1;
        }
    }
}

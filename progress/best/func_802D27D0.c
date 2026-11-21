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

extern float D_8007C140;
extern float D_8007C14C;
extern float D_8007C144;
extern float D_8007C150;
extern float D_8007C148;
extern float D_8007C154;
extern f32 D_80030C70;
extern char D_8007BF58[];

void func_802D27D0(void) {
    float *__base_D_8007C144;
    float *__base_D_8007C140;
    f32 *__base_D_80030C70;
    __base_D_80030C70 = &D_80030C70;
    __base_D_8007C140 = &D_8007C140;
    (*__base_D_8007C140) = (f32) ((*__base_D_8007C140) + ((D_8007C14C - (*__base_D_8007C140)) / (*(&D_80030C70))));
    __base_D_8007C144 = &D_8007C144;
    (*__base_D_8007C144) = (f32) ((*__base_D_8007C144) + ((D_8007C150 - (*__base_D_8007C144)) / (*__base_D_80030C70)));
    D_8007C148 = (f32) (D_8007C148 + ((D_8007C154 - D_8007C148) / (*__base_D_80030C70)));
}

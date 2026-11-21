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

f32 func_80236880(void *, void *);                  /* extern */
M2C_UNK func_80270090(M2C_UNK);                     /* extern */
extern void *D_8006A4FC;
extern u8 D_80075568[];
extern void *D_8007AFF8;

void func_8028BF20(void) {
    void **__base_D_8006A4FC;
    f32 temp_fv0f;

    if (!(M2C_FIELD(D_8007AFF8, f32 *, 0xC0) > 0.0f)) {
        temp_fv0f = M2C_FIELD(D_8007AFF8, f32 *, 0x84) - M2C_FIELD(D_80075568, f32 *, 0x1C);
        if ((temp_fv0f < *(f32 *)0x215328) && (*(f32 *)0x21532C < temp_fv0f) && ((fabsf(M2C_FIELD((*(__base_D_8006A4FC = &D_8006A4FC)), f32 *, 0x24) - M2C_FIELD(D_80075568, f32 *, 0x24)) + fabsf(M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C) - M2C_FIELD(D_80075568, f32 *, 0x2C))) < *(f32 *)0x215330)) {
            M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x1C) = func_80236880((*__base_D_8006A4FC) + 0x24, D_80075568 + 0x24);
            func_80270090(0x15);
        }
    }
}

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

f32 func_8011B7E0(f32, f32);                        /* extern */
extern s32 D_80045C40;
extern M2C_UNK D_80075568;

void *func_802D51B4(void *arg0) {
    M2C_UNK *__base_D_80075568;
    f32 temp_fv0;
/* Inferred frame reservation; original purpose unknown. */
char __repair_stack_padding[8];

    __base_D_80075568 = &D_80075568;
    temp_fv0 = func_8011B7E0(M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(__base_D_80075568, f32 *, 0x24), M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(__base_D_80075568, f32 *, 0x2C)) * *(f32 *)0x21ACAC;
    D_80045C40 = 1;
    M2C_FIELD(__base_D_80075568, f32 *, 0x1C) = temp_fv0;
    return arg0 + 0x10;
}

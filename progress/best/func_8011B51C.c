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

M2C_UNK func_8011A738(M2C_UNK *);                   /* extern */
M2C_UNK func_8011AE5C(void *, M2C_UNK *);           /* extern */
extern u16 D_80028832;
extern M2C_UNK D_800512D8;
extern u8 D_80051590[];

void *func_8011B51C(void) {
    M2C_UNK *__base_D_800512D8;
    u16 *__base_D_80028832;
    u16 temp_v0;
    void *var_v0;

    var_v0 = NULL;
    __base_D_800512D8 = &D_800512D8;
    if (M2C_FIELD(__base_D_800512D8, s32 *, 0x10) != 0) {
        func_8011A738(__base_D_800512D8);
        __base_D_80028832 = &D_80028832;
        temp_v0 = (*__base_D_80028832) + 1;
        (*__base_D_80028832) = temp_v0;
        if ((u32) (temp_v0 & 0xFFFF) >= 6U) {
            (*__base_D_80028832) = 0;
        }
        func_8011AE5C(((*__base_D_80028832) << 9) + D_80051590, __base_D_800512D8);
        var_v0 = ((*__base_D_80028832) << 9) + D_80051590;
        M2C_FIELD(__base_D_800512D8, s32 *, 0x10) = (s32) (M2C_FIELD(__base_D_800512D8, s32 *, 0x10) - 1);
    }
    return var_v0;
}

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

M2C_UNK func_8011412C();                            /* extern */
M2C_UNK func_80115764();                            /* extern */
M2C_UNK func_801157D0();                            /* extern */
s32 func_80115800(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_80116D80(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_8004EDF0;
extern u8 D_8004EE30;

s32 func_80114000(s32 arg0) {
    u8 *__base_D_8004EE30;
    M2C_UNK *__base_D_8004EDF0;
    s32 temp_v0;

    func_80115764();
    __base_D_8004EE30 = &D_8004EE30;
    if ((*__base_D_8004EE30) != 1) {
        func_8011412C();
        __base_D_8004EDF0 = &D_8004EDF0;
        func_80115800(1, __base_D_8004EDF0);
        func_80116D80(arg0, 0, 1);
    }
    temp_v0 = func_80115800(0, __base_D_8004EDF0);
    (*__base_D_8004EE30) = 1;
    func_801157D0();
    return temp_v0;
}

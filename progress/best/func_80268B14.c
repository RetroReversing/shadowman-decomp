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

extern float D_80075AA8;
extern float D_80075AAC;
extern int D_80075AB0;
extern int D_80075AB8;
extern int D_80075AB4;
extern int D_80075AC0;
extern int D_80075AC4;
extern int D_80075AE0;
extern int D_80075AE4;
extern int D_80075AC8;
extern int D_80075ACC;
extern int D_80075AD0;
extern int D_80075AD4;
extern int D_80075AD8;
extern int D_80075ADC;
s32 func_8011BA20();
s32 func_8022EFF4();
s32 func_80268AC0();
s32 func_80268B58();
extern char D_8004AE08[];
extern char D_800756A0[];
extern u8 D_8007DB84;

s32 func_80268B14(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    float *__base_D_80075AA8;
    s32 ret;
s32 __repair_result_ret;
    s32 temp_a3;

    temp_a3 = arg3 & 0xFF;
    __base_D_80075AA8 = &D_80075AA8;
    (*__base_D_80075AA8) = arg0;
    D_80075AAC = arg1;
    D_80075AB0 = 0;
    if (temp_a3 == 0) {
        __repair_result_ret = func_80268B58(D_8004AE08);
    } else {
        D_80075AB8 = func_8022EFF4(D_8004AE08, 3, 0, temp_a3);
        D_80075AB4 = func_8022EFF4(D_8004AE08, 0, 0);
        func_80268AC0(1, D_8007DB84);
        func_80268AC0(2, 1U);
        func_80268AC0(4, 1U);
        func_80268AC0(8, 1U);
        func_80268AC0(0x10, 1U);
        D_80075AC0 = 1;
        D_80075AC4 = 0xB4;
        D_80075AE0 = 1;
        D_80075AE4 = 0xB4;
        D_80075AC8 = 1;
        D_80075ACC = 0xB4;
        D_80075AD0 = 1;
        D_80075AD4 = 0xB4;
        D_80075AD8 = 1;
        D_80075ADC = 0xB4;
        func_8011BA20((*__base_D_80075AA8) + 0x40, 0, 0x28);
        func_8011BA20(D_800756A0, 0, 0x400);
        ret = 1;
    }
    return ret;
}

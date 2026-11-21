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

void *func_80296BC0();
extern s32 D_80036BDC;
extern char D_80036BE8[];

void *func_8029F644(s32 arg0, f32 arg1, s8 arg2, s8 arg3, s32 arg4) {
    s32 *__base_D_80036BDC;
    s32 temp_a1;
    s32 var_a2;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036BE8);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x68) = arg2;
        M2C_FIELD(temp_v0, s8 *, 0x69) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x6A) = (s8) arg4;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        __base_D_80036BDC = &D_80036BDC;
        temp_a1 = (*__base_D_80036BDC);
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x54) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
        var_a2 = temp_a1;
        (*__base_D_80036BDC) = temp_a1 + 1;
        if (temp_a1 < 0) {
            var_a2 = temp_a1 + 7;
        }
        M2C_FIELD(temp_v0, f32 *, 0x5C) = (f32) (temp_a1 - ((var_a2 >> 3) * 8));
    }
    return temp_v0;
}

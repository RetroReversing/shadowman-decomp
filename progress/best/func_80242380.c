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

M2C_UNK func_8024244C();                            /* extern */
extern s32 D_8002C0F0;
extern M2C_UNK D_8002D478;
extern f32 D_800527C0;
extern f32 D_8006A990;
extern f32 D_8006A994;
extern s32 D_8006A99C;
extern s32 D_8006A9A8;
extern s32 D_8006A9AC;

void func_80242380(s32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 *__base_D_8006A9AC;
    f32 *__base_D_800527C0;
    f32 temp_fv1;
    f32 temp_fv1f;
    M2C_UNK *__base_D_8002D478;

    __base_D_8002D478 = &D_8002D478;

    __base_D_8006A9AC = &D_8006A9AC;
    if (arg0 == (*__base_D_8006A9AC)) {
        if ((arg1 != D_8006A994) || (arg2 != D_8006A990) || (arg3 != D_8006A99C)) {
            goto block_5;
        }
    } else {
block_5:
        (*__base_D_8006A9AC) = arg0;
        if ((D_8006A9A8 & 1) || (arg0 & 1) || !(D_8002C0F0 & 0x40)) {
            __base_D_800527C0 = &D_800527C0;
            (*__base_D_800527C0) = *(f32 *)0x2027D4;
            return;
        }
        temp_fv1 = arg2 - arg1;
        if (arg1 > 0.0f) {
            func_8024244C();
            return;
        }
        temp_fv1f = *(f32 *)0x2027E0;
        if (!(temp_fv1f < (*__base_D_800527C0))) {
            (*__base_D_800527C0) = temp_fv1f;
        } else {
            (*__base_D_800527C0) = arg2;
        }
        M2C_FIELD(__base_D_8002D478, s32 *, 0) = (s32) temp_fv1;
        D_8006A99C = arg3;
        M2C_FIELD(__base_D_8002D478, s32 *, 4) = (s32) (*(f32 *)0x2027DC - temp_fv1);
    }
}

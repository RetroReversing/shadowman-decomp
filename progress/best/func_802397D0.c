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

extern s32 D_8002D3F0;
extern M2C_UNK D_800698C0;

void func_802397D0(f32 *arg0) {
    s32 *__base_D_8002D3F0;
    f32 *var_a0;
    f32 temp_fv0;
    s32 var_a1;
    s32 var_v1;

    var_a0 = arg0;
    var_a1 = 0;
    __base_D_8002D3F0 = &D_8002D3F0;
    var_v1 = (*__base_D_8002D3F0) * 4;
    do {
        temp_fv0 = *var_a0;
        var_a0 += 1;
        var_a1 += 1;
        *(var_v1 + &D_800698C0) = temp_fv0;
        var_v1 += 0x100;
    } while (var_a1 < 0xC);
    (*__base_D_8002D3F0) += 1;
}

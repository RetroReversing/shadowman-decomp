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
extern char D_800698C0[];

void func_8023981C(f32 *arg0) {
    s32 *__base_D_8002D3F0;
    f32 *temp_v0_2;
    char *var_a0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    char *__base_D_800698C0;

    __base_D_800698C0 = D_800698C0;

    var_a0 = arg0;
    var_a2 = 0;
    __base_D_8002D3F0 = &D_8002D3F0;
    temp_v0 = (*__base_D_8002D3F0) - 1;
    var_a1 = temp_v0 * 4;
    (*__base_D_8002D3F0) = temp_v0;
    do {
        temp_v0_2 = (void *) ((var_a1) + (s32) __base_D_800698C0);
        var_a1 += 0x100;
        var_a2 += 1;
        *(f32 *)var_a0 = *temp_v0_2;
        var_a0 += 4;
    } while (var_a2 < 0xC);
}

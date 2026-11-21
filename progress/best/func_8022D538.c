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

extern u16 D_8002C110;
extern u16 D_8002C112;
extern s32 D_8002C114;
extern s32 D_8002C11C;
extern s32 D_800597B0;
extern s32 D_800597B4;

void func_8022D538(void) {
    char *var_a1;
    s32 temp_lo;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = &D_8002C114;
    do {
        temp_lo = D_8002C110 * D_8002C112 * (var_a2 * 2);
        var_a2 += 1;
        *(s32 *)var_a1 = (temp_lo) + (D_800597B0);
        var_a1 += 4;
    } while (var_a2 < 2);
    D_8002C11C = D_800597B4;
}

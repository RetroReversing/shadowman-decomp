/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern s32 D_800619E0;
extern s32 D_800619F0;
extern s32 D_80061A00;
extern s32 D_80061A04;

void func_80236820(void) {
    char *var_a0;
    char *var_v1;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = &D_800619E0;
    var_v1 = &D_800619F0;
    D_80061A04 = -1;
    D_80061A00 = -0x80;
    do {
        var_a1 += 1;
        *(s32 *)var_v1 = D_80061A04;
        var_v1 += 4;
        *(s32 *)var_a0 = D_80061A00;
        var_a0 += 4;
    } while (var_a1 < 4);
}

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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_8006A710[];
extern s8 D_8006A820;

void func_80241E6C(void) {
    s8 *var_v0;
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0;
    var_v0 = &D_8006A820;
    do {
        *var_v0 = var_v1;
        temp_v0 = var_v1 + D_8006A710;
        var_v1 += 1;
        M2C_FIELD(temp_v0, s8 *, 0xC) = 2;
        var_v0 = &(&D_8006A820)[var_v1];
    } while (var_v1 < 0x100);
}

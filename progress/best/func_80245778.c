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

extern s32 D_8002D56C;
extern char D_8002DBD0[];

s32 func_80245778(s32 arg0) {
    char *__base_D_8002DBD0;
    char *var_a1;
    s32 var_a2;
    s32 var_a3;
    void *temp_v1;

    var_a3 = 0;
    var_a2 = 0;
    var_a1 = &D_8002D56C;
__base_D_8002DBD0 = D_8002DBD0;
    for (;;) {
        temp_v1 = (void *) (((*(s32 *)var_a1 * 0x10)) + (s32) __base_D_8002DBD0);
        var_a2 += 1;
        if (M2C_FIELD(temp_v1, s32 *, 4) == arg0) {
            var_a3 = M2C_FIELD(temp_v1, s32 *, 0xC);
        }
        var_a1 += 4;
        if ((var_a2 < 2)) {
            if ((var_a3 == 0)) {
                continue;
            }
        }
        break;
    }
    return var_a3;
}

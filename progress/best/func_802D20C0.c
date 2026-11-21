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

extern char D_800458FC[];
extern char D_80045930[];

u32 func_802D20C0(s32 arg0, void *arg1) {
    char *__base_D_80045930;
    char *var_a2;
    s32 var_a3;
    u32 var_t0;
    u32 var_t1;
    void *temp_v0;

    var_t1 = 0;
    var_a3 = -1;
    var_t0 = 0;
    var_a2 = D_800458FC;
    for (;;) {
        if (var_a3 == -1) {
            var_t0 += 1;
            if (M2C_FIELD(var_a2, s32 *, 0) == arg0) {
                var_t1 = 1;
                var_a3 = M2C_FIELD(var_a2, s32 *, 4);
                __base_D_80045930 = D_80045930;
                temp_v0 = (var_a3 * 0x14) + __base_D_80045930;
                M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
                M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
            }
            var_a2 += 8;
            if (var_t0 < 6U) {
                continue;
            }
        }
        break;
    }
    return var_t1;
}

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

s32 func_8010836C();
s32 func_8010855C();
extern char D_8004DB48[];

void func_801084D0(s32 arg0, void *arg1, s32 arg2) {
    char *var_a3;
    s32 temp_v0;
    s32 var_t0;

    var_a3 = D_8004DB48;
    var_t0 = 0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
loop_1:
    temp_v0 = M2C_FIELD(var_a3, s32 *, 0);
    if ((temp_v0 == 1) || (temp_v0 == 6)) {
        if (M2C_FIELD(var_a3, u8 *, 6) != M2C_FIELD(arg1, u8 *, 8)) {
            goto block_6;
        }
        M2C_FIELD(var_a3, s32 *, 0) = 6;
        func_8010855C(arg0, arg1, arg2, var_a3);
        return;
    }
block_6:
    var_t0 += 1;
    var_a3 += 0xC;
    if (var_t0 >= 0x10) {
        if (M2C_FIELD(arg1, s16 *, 0xC) == -1) {
            func_8010855C(var_a3);
            return;
        }
        M2C_FIELD(arg1, s32 *, 4) = 5;
        func_8010836C(1);
        return;
    }
    goto loop_1;
}

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

extern char D_8004DB48[];

void func_80108568(s32 arg0, void *arg1) {
    char *var_a0;
    s32 temp_v0;
    s32 var_a2;

    M2C_FIELD(arg1, s32 *, 4) = 0;
    var_a0 = D_8004DB48;
    var_a2 = 0;
    for (;;) {
        temp_v0 = M2C_FIELD(var_a0, s32 *, 0);
        if (temp_v0 != 1) {
            if (temp_v0 != 6) {
                var_a2 += 1;
                goto block_7;
            }
            goto block_5;
        }
block_5:
        var_a2 += 1;
        if (M2C_FIELD(var_a0, u8 *, 6) == M2C_FIELD(arg1, u8 *, 8)) {
            M2C_FIELD(var_a0, s32 *, 0) = 4;
            return;
        }
block_7:
        var_a0 += 0xC;
        if (var_a2 >= 0x10) {
            return;
        }
        continue;
        break;
    }
}

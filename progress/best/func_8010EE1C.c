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
extern short D_80075556;
extern int D_80075558;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8010EBD4();
s32 func_8010ED48();
extern char D_80075518[];
extern f32 D_8007558C;

int func_8010EE1C(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp10[3];
    s32 sp20;
    int var_s1;
    int var_v0;
    void *var_s0;

    func_8010EBD4(arg0, arg1, arg2, &sp20);
    if ((func_8010ED48(&sp20, &D_8007558C, 0x42C80000) & 0xFF) && (var_s1 = D_80075556, var_s0 = D_80075558 + 0x2C, (var_s1 != 0))) {
loop_2:
        var_s1 -= 1;
        sp10[0] = M2C_FIELD(var_s0, f32 *, -8);
        sp10[1] = M2C_FIELD(var_s0, f32 *, -4);
        sp10[2] = M2C_FIELD(var_s0, f32 *, 0);
        var_v0 = var_s1;
        if (!(func_8010ED48(&sp20, sp10, 0x41900000) & 0xFF)) {
            var_s0 += 0x40;
            if (var_s1 == 0) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = -1;
    }
    return var_v0;
}

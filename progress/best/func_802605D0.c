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

s32 func_80109318();
f32 func_8023B800();
s32 func_8025BF10();
s32 func_80260368();
s32 func_80268E6C();
extern u16 D_80075534;
extern char D_8007558C[];

void func_802605D0(void *arg0) {
    s32 var_a1;

    if (!(D_80075534 & 4) && (M2C_FIELD(arg0, s16 *, 0x16) != 0x10) && (func_8023B800(D_8007558C, M2C_FIELD(arg0, s32 *, 8) + 0x24) < *(f32 *)0x20B404)) {
        func_80109318(0xD0, D_8007558C, 0);
        func_8025BF10(arg0);
        var_a1 = 0x14;
        if (func_80260368(2) >= 2) {
            var_a1 = 0x28;
        }
        func_80268E6C(7, 0x28);
    }
}

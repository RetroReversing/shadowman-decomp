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

s32 func_80109318();
s32 func_80268E6C();
extern u16 D_80075534;
extern char D_8007558C[];

void func_80260AF0(s32 arg0, f32 arg1) {
    if (!(D_80075534 & 4)) {
        func_80109318(0xE6, D_8007558C, 0);
        func_80268E6C(1, (s32) (arg1 * *(f32 *)0x20B438));
    }
}

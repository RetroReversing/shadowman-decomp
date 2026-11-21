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

M2C_UNK func_80105438();                            /* extern */
M2C_UNK func_80105510();                            /* extern */
M2C_UNK func_80105530(void *, M2C_UNK, void *);     /* extern */
M2C_UNK func_8010580C(M2C_UNK, void *);             /* extern */

void func_80105350(void *arg2) {
    func_80105510();
    func_8010580C(2, arg2);
    if ((u32) M2C_FIELD(arg2, u32 *, 8) < (u32) M2C_FIELD(arg2, u32 *, 0xC)) {
        func_80105530(arg2 + 0x14, 0x10, arg2);
        func_80105530(arg2 + 0x114, 0x10, arg2);
        func_80105530(arg2 + 0x214, 0x10, arg2);
        func_8010580C(0x10, arg2);
        func_80105438(arg2);
    }
}

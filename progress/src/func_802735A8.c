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

s32 func_80231A5C(void *);                          /* extern */
s32 func_802329F0(void *, f32, M2C_UNK);            /* extern */
M2C_UNK func_8023B094(void *);                      /* extern */
s32 func_802734B0();                                /* extern */

void func_802735A8(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x78) = 0U;
    if (func_802734B0() != 0) {
        M2C_FIELD(arg0, u16 *, 0x78) = (u16) (M2C_FIELD(arg0, u16 *, 0x78) | 8);
        if (func_802329F0(arg0, (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), u16 *, 0x12), 1) != 0) {
            M2C_FIELD(arg0, u16 *, 0x78) = (u16) (M2C_FIELD(arg0, u16 *, 0x78) | 0x10);
            func_8023B094(arg0);
            M2C_FIELD(arg0, u16 *, 0x78) = (u16) (M2C_FIELD(arg0, u16 *, 0x78) | func_80231A5C(arg0));
        }
    }
}

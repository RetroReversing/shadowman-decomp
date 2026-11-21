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

M2C_UNK func_8022DAF0(u16);                         /* extern */
extern M2C_UNK D_2D7DD0;
extern u16 D_80000322;
extern s8 D_8002C1BC;
extern M2C_UNK *D_80052778;
extern s32 D_80059818;

s32 func_802DA970(void) {
    s32 var_v1;

    if (D_80059818 != D_80000322) {
        func_8022DAF0(D_80000322);
        var_v1 = 0x98967F;
        do {
            var_v1 -= 1;
        } while (var_v1 != 0);
    }
    D_8002C1BC = 1;
    D_80052778 = &D_2D7DD0;
    return D_80052778;
}

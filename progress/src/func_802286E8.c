/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_802255C0();                            /* extern */
M2C_UNK func_8022EC80();                            /* extern */
extern M2C_UNK D_2D810C;
extern s8 D_8002C1BC;
extern M2C_UNK *D_80052778;

void func_802286E8(void) {
    func_8022EC80();
    func_802255C0();
    D_8002C1BC = 1;
    D_80052778 = &D_2D810C;
}

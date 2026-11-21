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

s32 func_802D60E4();
extern s32 D_80045B60;
extern s32 D_8007C2DC;
extern char D_8007D100[];

void *func_802D45EC(void *arg0) {
    D_8007C2DC = M2C_FIELD(arg0, s32 *, 4);
    func_802D60E4(D_80045B60, (M2C_FIELD(arg0, s32 *, 4) * 0x18) + D_8007D100);
    return arg0 + 8;
}

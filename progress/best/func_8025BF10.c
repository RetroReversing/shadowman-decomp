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

s32 func_802393D4();
s32 func_8025BF44();
extern s32 D_80074BA0;
extern s32 D_80074BA8;

void func_8025BF10(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x16) = 0x10;
    if (M2C_FIELD(arg0, s32 *, 0x18) == 1) {
        func_8025BF44(arg0, D_80074BA0);
        return;
    }
    func_802393D4(D_80074BA8);
}

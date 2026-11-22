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

s32 func_801144F0();
s32 func_801146B4();
s32 func_80114878();
s32 func_80222244();
extern char D_80058F08[];
extern char D_80058FB4[];

void func_802221C4(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch ((u32)temp_v1) {                              /* irregular */
    default:
        func_80222244(arg0);
        return;
    case 0:
        func_80114878(D_80058F08, D_80058F08 + 0xAC, M2C_FIELD(arg0, u8 *, 4));
        func_80222244();
        return;
    case 1:
        func_801146B4(D_80058FB4, arg0);
        func_80222244();
        return;
    case 2:
        func_801144F0(D_80058FB4, arg0);
        func_801144F0(D_80058FB4);
        func_801144F0(D_80058FB4);
        return;
    }
}

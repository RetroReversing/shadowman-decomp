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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802C3808(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_802C43C0();                                /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C37BC(void) {
    if (!(D_8002D420 & 2)) {
        if (func_802C43C0() != 0) {
            func_802C3808(&D_80075568, &D_80075518);
            return;
        }
        func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x4B, 2);
    }
}

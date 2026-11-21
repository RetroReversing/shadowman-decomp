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

M2C_UNK func_802422FC();                            /* extern */
s32 func_8024541C();                                /* extern */
s32 func_80245434(M2C_UNK);                         /* extern */
s32 func_80245684();                                /* extern */
M2C_UNK func_80266E0C(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */
extern M2C_UNK D_25B474;
extern s16 D_8006A9D4;
extern s32 D_80074BB0;

s32 func_802453B8(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 8) == 1) && (func_80245684() != 0)) {
        D_8006A9D4 = 0;
        if (D_80074BB0 != 0xC) {
            if (D_80074BB0 != 0xE) {
                return func_80245434(0x10000);
            }
            func_8026E26C(0x64);
            func_802422FC();
            func_80266E0C(0x10000, &D_25B474);
            M2C_FIELD(arg0, s32 *, 8) = 2;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 1;
        }
        return func_8024541C();
    }
    return 1;
}

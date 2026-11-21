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

M2C_UNK func_80239480(M2C_UNK *);                   /* extern */
extern M2C_UNK D_2C4380;
extern M2C_UNK D_8002DBD0;
extern s32 D_8007BEE4;

s32 func_802C43C0(void) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0xC) == 0) {
        if (M2C_FIELD(&D_8002DBD0, s32 *, 0x1C) != 0) {
            return 0;
        }
        D_8007BEE4 = 0;
        func_80239480(&D_2C4380);
        var_v0 = D_8007BEE4 == 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

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

s32 func_80115880();                                /* extern */
s32 func_801158C0();                                /* extern */
M2C_UNK func_80116750(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_801176C0(s32);                             /* extern */
M2C_UNK func_80118370(s32, M2C_UNK);                /* extern */
M2C_UNK func_80118630(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_102530;
extern M2C_UNK D_102534;

s32 func_80115800(s32 arg0, s32 arg1) {
    s32 ret;
    s32 var_v0;

    if (arg1 & 3) {
        func_80116750(&D_102530, &D_102534, 0x37);
    }
    var_v0 = -1;
    if (func_801158C0() != 0) {
        return var_v0;
    }
    if (arg0 == 1) {
        func_80118630(arg1, 0x40);
    }
    *(volatile s32 *)0xA4800000 = func_801176C0(arg1);
    if (arg0 == 0) {
        ret = func_80115880();
    } else {
        *(volatile s32 *)0xA4800010 = 0x1FC007C0;
        var_v0 = 0;
        if (arg0 == 0) {
            func_80118370(arg1, 0x40);
            var_v0 = 0;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        ret = var_v0;
    }
    return ret;
}

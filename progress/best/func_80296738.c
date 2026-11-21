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

s32 func_80230834();
s32 func_802967A4();
s32 func_802967BC();
s32 func_802967CC();
extern char D_8002C2A0[];

s32 func_80296738(s32 arg0) {
    char *__base_D_8002C2A0;
    s32 ret;
    void *temp_a1;

    if (arg0 == 0x2F) {
        return func_802967BC();
    }
    __base_D_8002C2A0 = D_8002C2A0;
    temp_a1 = (arg0 * 0xC) + __base_D_8002C2A0;
    if (M2C_FIELD(temp_a1, s32 *, 0) == 0) {
        func_802967CC(arg0, temp_a1);
        ret = func_802967A4();
    } else {
        func_80230834(M2C_FIELD(temp_a1, s16 *, 0xA));
        ret = *((arg0 * 0xC) + __base_D_8002C2A0);
    }
    return ret;
}

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

s32 func_801187E0();
extern char D_118728[];

s32 func_801186D0(s32 arg0, s32 arg1, ...) {
    char *__repair_ap;
    s32 temp_v0;

    __repair_ap = (char *) __builtin_next_arg(arg1);
    temp_v0 = func_801187E0(D_118728, arg0, arg1, __repair_ap);
    if (temp_v0 >= 0) {
        *(s8 *)(arg0 + temp_v0) = 0;
    }
    return temp_v0;
}

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

extern unsigned char D_8004E120;
extern int D_8004E124;
extern char D_10B17C[];
extern char D_8004E130[];

s32 *func_8010B31C(s32 **arg0) {
    unsigned char *__base_D_8004E120;
    __base_D_8004E120 = &D_8004E120;
    if ((*(&D_8004E120)) == 0) {
        *(s32 *)(s32 * *)((*__base_D_8004E120) + 8) = D_8004E130;
        D_8004E124 = 0;
        (*__base_D_8004E120) = 1U;
    }
    *arg0 = __base_D_8004E120;
    return D_10B17C;
}

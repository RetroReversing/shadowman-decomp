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

s32 func_80262B14();
s32 func_80262B44();
extern char D_8004ECB4[];

s32 func_80262ADC(void *arg0, s32 arg1) {
    void *temp_v1;

    switch (arg1) {                                 /* irregular */
    default:
        return 0;
    case 3:
        return func_80262B14();
    case 4:
        temp_v1 = (M2C_FIELD(arg0, s32 *, 0x18) * 4) + D_8004ECB4;
        if (M2C_FIELD(temp_v1, s16 *, 0) == 0) {
            return func_80262B44();
        }
        M2C_FIELD(temp_v1, u16 *, 2) = (u16) *M2C_FIELD(arg0, u16 **, 0);
        return 1;
    }
}

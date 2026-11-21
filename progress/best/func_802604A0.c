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

extern int D_8002DBD0;
extern int D_8002DBD8;
extern int D_8002DBD4;
extern int D_8002DBE0;
extern int D_8002DBE8;
extern int D_8002DBE4;
s32 func_8025BF10();

void func_802604A0(void) {
    int *__base_D_8002DBD0;
    int *__base_D_8002DBE0;

    __base_D_8002DBE0 = &D_8002DBE0;
    __base_D_8002DBD0 = &D_8002DBD0;
    if ((*__base_D_8002DBD0) != 0) {
        func_8025BF10((*__base_D_8002DBD0));
        (*__base_D_8002DBD0) = 0;
        D_8002DBD8 = 0;
        D_8002DBD4 = -1;
    }
    if ((*__base_D_8002DBE0) != 0) {
        func_8025BF10((*__base_D_8002DBE0));
        (*__base_D_8002DBE0) = 0;
        D_8002DBE8 = 0;
        D_8002DBE4 = -1;
    }
}

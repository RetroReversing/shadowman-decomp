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

M2C_UNK func_8022FE7C(void *);                      /* extern */
extern s32 D_8002D250;
extern void *D_80059840;
extern void *D_80059858;
extern void *D_8005985C;
extern void *D_80059860;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_8022F360(void) {
    s32 *__base_D_8002D250;
    __base_D_8002D250 = &D_8002D250;
    if ((*__base_D_8002D250) != 0) {
        func_8022FE7C(M2C_FIELD(&D_80075568, void **, 0x64));
        func_8022FE7C(M2C_FIELD(&D_80075518, void **, 0x48));
        func_8022FE7C(M2C_FIELD(&D_80075518, void **, 0x4C));
        func_8022FE7C(M2C_FIELD(&D_80075568, void **, 0x80));
        (*__base_D_8002D250) = 0;
        M2C_FIELD(M2C_FIELD(&D_80075568, void **, 0x64), s16 *, 0x52) = 0;
        M2C_FIELD(M2C_FIELD(&D_80075568, void **, 0x64), s16 *, 0x50) = 0;
    }
    M2C_FIELD(&D_80075568, void **, 0x64) = (void *) D_80059858;
    M2C_FIELD(&D_80075568, void **, 0x80) = (void *) D_80059840;
    M2C_FIELD(&D_80075518, void **, 0x48) = (void *) D_8005985C;
    M2C_FIELD(&D_80075518, void **, 0x4C) = (void *) D_80059860;
}
